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
static ATerm term_k_49;
static ATerm term_j_49;
static ATerm term_i_49;
static ATerm term_t_48;
static ATerm term_s_48;
static ATerm term_p_48;
static ATerm term_i_48;
static ATerm term_h_48;
static ATerm term_w_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_t_47;
static ATerm term_s_47;
static ATerm term_n_47;
static ATerm term_c_47;
static ATerm term_a_47;
static ATerm term_x_46;
static ATerm term_w_46;
static ATerm term_v_46;
static ATerm term_u_46;
static ATerm term_s_46;
static ATerm term_j_46;
static ATerm term_g_46;
static ATerm term_d_46;
static ATerm term_c_46;
static ATerm term_b_46;
static ATerm term_i_45;
static ATerm term_g_45;
static ATerm term_z_44;
static ATerm term_t_44;
static ATerm term_s_44;
static ATerm term_r_44;
static ATerm term_q_44;
static ATerm term_p_44;
static ATerm term_o_44;
static ATerm term_n_44;
static ATerm term_m_44;
static ATerm term_l_44;
static ATerm term_k_44;
static ATerm term_j_44;
static ATerm term_g_44;
static ATerm term_d_44;
static ATerm term_c_44;
static ATerm term_b_44;
static ATerm term_a_44;
static ATerm term_v_43;
static ATerm term_q_43;
static ATerm term_p_43;
static ATerm term_o_43;
static ATerm term_n_43;
static ATerm term_m_43;
static ATerm term_j_43;
static ATerm term_i_43;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_o_42;
static ATerm term_n_42;
static ATerm term_m_42;
static ATerm term_j_42;
static ATerm term_a_42;
static ATerm term_p_41;
static ATerm term_m_41;
static ATerm term_z_39;
static ATerm term_y_39;
static ATerm term_w_39;
static ATerm term_q_39;
static ATerm term_p_39;
static ATerm term_o_39;
static ATerm term_h_39;
static ATerm term_g_39;
static ATerm term_f_39;
static ATerm term_f_36;
static ATerm term_u_35;
static ATerm term_v_34;
static ATerm term_y_31;
static ATerm term_w_31;
static ATerm term_h_31;
static ATerm term_e_31;
static ATerm term_c_31;
static ATerm term_t_30;
static ATerm term_r_30;
static ATerm term_q_30;
static ATerm term_s_25;
static ATerm term_n_25;
static ATerm term_x_24;
static ATerm term_n_24;
static ATerm term_j_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_e_24;
static ATerm term_v_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_r_22;
static ATerm term_f_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_c_22;
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
static ATerm term_l_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_v_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_a_17;
static ATerm term_z_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(32);
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
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_22);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Call_2, term_d_22, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Op_2, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Call_2, term_h_21, (ATerm) ATempty);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Call_2, term_g_24, (ATerm) ATempty);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_30, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("error: redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ExtDefinition", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_m_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_r_42);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_m_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_p_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__2, term_b_44, term_c_44);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym__2, term_l_44, term_n_20);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_20);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_q_44, term_c_31);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_l_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym__2, term_s_46, term_c_31);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym__2, term_w_46, term_c_31);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym__2, term_s_47, term_c_31);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, (ATerm) ATempty);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_s_47);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym__2, term_j_42, term_s_46);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym__2, term_r_42, term_c_31);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm p_9 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm h_131 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm v_9 (ATerm c_42, ATerm b_42, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm h_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_149 (ATerm), ATerm t);
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
ATerm escape_chars_1_0 (ATerm g_151 (ATerm), ATerm t);
static ATerm u_52 (ATerm w_44, ATerm a_45, ATerm t);
static ATerm v_52 (ATerm m_45, ATerm n_45, ATerm p_45, ATerm t);
static ATerm w_52 (ATerm h_46, ATerm i_46, ATerm t);
static ATerm z_52 (ATerm p_46, ATerm r_46, ATerm t);
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
ATerm pat_td_1_0 (ATerm e_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm i_10 (ATerm z_35, ATerm a_36, ATerm b_36, ATerm t);
static ATerm p_64 (ATerm d_64, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm n_133 (ATerm), ATerm t);
static ATerm m_10 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_132 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm q_136 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm n_10 (ATerm p_57, ATerm q_57, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm copy_1_0 (ATerm m_155 (ATerm), ATerm t);
static ATerm o_10 (ATerm p_25, ATerm q_25, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm f_83 (ATerm e_80, ATerm f_80, ATerm g_80, ATerm h_80, ATerm t);
static ATerm g_83 (ATerm w_81, ATerm y_81, ATerm z_81, ATerm a_82, ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_144 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_139 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
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
static ATerm p_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm b_134 (ATerm), ATerm t);
static ATerm w_9 (ATerm q_73, ATerm r_73, ATerm t);
ATerm end_scope_1_0 (ATerm q_167 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_167 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_167 (ATerm), ATerm s_167 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm a_10 (ATerm k_28, ATerm l_28, ATerm p_28, ATerm m_28, ATerm o_28, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm d_85 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm u_83, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_144 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_87 (ATerm s_86, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_10 (ATerm u_151 (ATerm), ATerm n_68, ATerm m_68, ATerm t);
ATerm genzip_4_0 (ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm z_10 (ATerm e_885, ATerm j_885, ATerm m_86, ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm x_91 (ATerm e_90, ATerm f_90, ATerm g_90, ATerm t);
static ATerm j_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_11 (ATerm k_167 (ATerm), ATerm l_167 (ATerm), ATerm m_167 (ATerm), ATerm r_89, ATerm o_89, ATerm w_89, ATerm s_89, ATerm p_89, ATerm q_89, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm k_167 (ATerm), ATerm l_167 (ATerm), ATerm m_167 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm x_33 (ATerm h_33, ATerm i_33, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm e_11 (ATerm t_167 (ATerm), ATerm p_90, ATerm n_90, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm g_11 (ATerm w_73, ATerm x_73, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
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
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm h_11 (ATerm c_152 (ATerm), ATerm d_152 (ATerm), ATerm t_68, ATerm s_68, ATerm t);
static ATerm i_11 (ATerm z_151 (ATerm), ATerm p_68, ATerm o_68, ATerm t);
ATerm foldr_3_0 (ATerm y_154 (ATerm), ATerm z_154 (ATerm), ATerm a_155 (ATerm), ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t);
static ATerm j_11 (ATerm o_50, ATerm p_50, ATerm t);
static ATerm k_11 (ATerm u_48, ATerm v_48, ATerm t);
static ATerm m_11 (ATerm y_139 (ATerm), ATerm j_367, ATerm a_49, ATerm t);
static ATerm l_11 (ATerm q_48, ATerm r_48, ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm output_1_0 (ATerm t_162 (ATerm), ATerm t);
static ATerm f_103 (ATerm z_102, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm w_48, ATerm t);
static ATerm o_11 (ATerm w_67, ATerm x_67, ATerm t);
static ATerm p_11 (ATerm q_50, ATerm r_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_104 (ATerm p_103, ATerm t);
static ATerm r_104 (ATerm t_103, ATerm u_103, ATerm v_103, ATerm t);
static ATerm s_104 (ATerm d_104, ATerm e_104, ATerm f_104, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm u_162 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_144 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm s_164 (ATerm), ATerm t_164 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_11 (ATerm k_54, ATerm l_54, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_11 (ATerm l_73, ATerm m_73, ATerm k_73, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm j_57, ATerm k_57, ATerm t);
ATerm foldr_2_0 (ATerm w_154 (ATerm), ATerm x_154 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_141 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_12 (ATerm a_78, ATerm b_78, ATerm c_78, ATerm t);
ATerm lookup_table_0_1 (ATerm x_74, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_78, ATerm j_78, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm f_78, ATerm g_78, ATerm t);
static ATerm u_11 (ATerm k_78, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_144 (ATerm), ATerm t);
static ATerm b_12 (ATerm d_78, ATerm e_78, ATerm t);
static ATerm w_11 (ATerm e_75, ATerm f_75, ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm n_164 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm parse_options_3_0 (ATerm k_164 (ATerm), ATerm l_164 (ATerm), ATerm m_164 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm n_162 (ATerm), ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm r_162 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm u_26, ATerm v_26, ATerm w_26, ATerm t)
{
  ATerm c_0 = NULL,t_0 = NULL;
  t = term_z_16;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), w_26), term_e_17), v_26), term_d_17), u_26), term_a_17);
  t_0 = t;
  t = SSL_printnl(c_0, t_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), w_26), term_e_17), v_26), term_d_17), u_26), term_a_17);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(((ATgetType(i_17) != AT_INT) || (ATgetInt((ATermInt) i_17) != 0)))
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
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL;
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_17 = ATgetFirst((ATermList) t);
            ATerm r_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
              {
                ATerm s_17 = ATgetFirst((ATermList) r_17);
                ATerm t_17 = (ATerm) ATgetNext((ATermList) r_17);
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
        t = term_z_16;
        w_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_v_17);
        x_0 = t;
        t = SSL_printnl(w_0, x_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_v_17);
        t = giving_up_0_0(t);
        LocalPopChoice(o_17);
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
ATerm sboundin_3_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      {
        ATerm q_1 = NULL,t_1 = NULL,v_1 = NULL,f_1 = NULL;
        t = SSLgetAnnotations(a_8);
        q_1 = t;
        t = b_8;
        t = d_131(t);
        t_1 = t;
        t = c_8;
        t = d_131(t);
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
          b_8 = ATgetArgument(t, 0);
          c_8 = ATgetArgument(t, 1);
          z_7 = ATgetArgument(t, 2);
          {
            ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(a_8);
            o_2 = t;
            t = b_8;
            t = f_131(t);
            s_2 = t;
            t = c_8;
            t = f_131(t);
            t_2 = t;
            t = z_7;
            t = d_131(t);
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
              b_8 = ATgetArgument(t, 0);
              c_8 = ATgetArgument(t, 1);
              z_7 = ATgetArgument(t, 2);
              x_7 = ATgetArgument(t, 3);
              {
                ATerm y_5 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(a_8);
                y_5 = t;
                t = b_8;
                t = f_131(t);
                s_6 = t;
                t = c_8;
                t = f_131(t);
                t_6 = t;
                t = z_7;
                t = f_131(t);
                u_6 = t;
                t = x_7;
                t = d_131(t);
                w_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_6, t_6, u_6, w_6);
                i_1 = t;
                t = SSLsetAnnotations(i_1, y_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  b_8 = ATgetArgument(t, 0);
                  c_8 = ATgetArgument(t, 1);
                  z_7 = ATgetArgument(t, 2);
                  x_7 = ATgetArgument(t, 3);
                  {
                    ATerm o_7 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,k_1 = NULL;
                    t = SSLgetAnnotations(a_8);
                    o_7 = t;
                    t = b_8;
                    t = f_131(t);
                    g_8 = t;
                    t = c_8;
                    t = f_131(t);
                    h_8 = t;
                    t = z_7;
                    t = f_131(t);
                    i_8 = t;
                    t = x_7;
                    t = d_131(t);
                    k_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_8, h_8, i_8, k_8);
                    k_1 = t;
                    t = SSLsetAnnotations(k_1, o_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      b_8 = ATgetArgument(t, 0);
                      c_8 = ATgetArgument(t, 1);
                      z_7 = ATgetArgument(t, 2);
                      {
                        ATerm b_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,l_1 = NULL;
                        t = SSLgetAnnotations(a_8);
                        b_9 = t;
                        t = b_8;
                        t = f_131(t);
                        f_9 = t;
                        t = c_8;
                        t = f_131(t);
                        g_9 = t;
                        t = z_7;
                        t = f_131(t);
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
                          b_8 = ATgetArgument(t, 0);
                          c_8 = ATgetArgument(t, 1);
                          {
                            ATerm r_9 = NULL,u_9 = NULL,x_9 = NULL,p_1 = NULL;
                            t = SSLgetAnnotations(a_8);
                            r_9 = t;
                            t = b_8;
                            t = f_131(t);
                            u_9 = t;
                            t = c_8;
                            t = d_131(t);
                            x_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_9, x_9);
                            p_1 = t;
                            t = SSLsetAnnotations(p_1, r_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              b_8 = ATgetArgument(t, 0);
                              c_8 = ATgetArgument(t, 1);
                              {
                                ATerm g_10 = NULL,k_10 = NULL,l_10 = NULL,u_1 = NULL;
                                t = SSLgetAnnotations(a_8);
                                g_10 = t;
                                t = b_8;
                                t = f_131(t);
                                k_10 = t;
                                t = c_8;
                                t = d_131(t);
                                l_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, k_10, l_10);
                                u_1 = t;
                                t = SSLsetAnnotations(u_1, g_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  b_8 = ATgetArgument(t, 0);
                                  c_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_10 = NULL,c_11 = NULL,d_11 = NULL,w_1 = NULL;
                                    t = SSLgetAnnotations(a_8);
                                    x_10 = t;
                                    t = b_8;
                                    t = f_131(t);
                                    c_11 = t;
                                    t = c_8;
                                    t = d_131(t);
                                    d_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, c_11, d_11);
                                    w_1 = t;
                                    t = SSLsetAnnotations(w_1, x_10);
                                  }
                                }
                              else
                                {
                                  ATerm f_12 = NULL,s_12 = NULL,t_12 = NULL,y_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      b_8 = ATgetArgument(t, 0);
                                      c_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_8);
                                  f_12 = t;
                                  t = b_8;
                                  t = f_131(t);
                                  s_12 = t;
                                  t = c_8;
                                  t = d_131(t);
                                  t_12 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, s_12, t_12);
                                  y_1 = t;
                                  t = SSLsetAnnotations(y_1, f_12);
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
ATerm dynrule_sargs_1_0 (ATerm h_131 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,m_12 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          j_12 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = j_12;
      if(match_cons(t, sym_DynRuleId_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_12;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm b_18 = ATgetArgument(t, 0);
          m_12 = ATgetArgument(t, 1);
          {
            ATerm c_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_12;
    }
  else
    {
      t = y_17;
      {
        ATerm d_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                j_12 = ATgetArgument(t, 0);
                {
                  ATerm h_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_18);
            t = j_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_18 = ATgetArgument(t, 0);
                m_12 = ATgetArgument(t, 1);
                {
                  ATerm k_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = m_12;
          }
        else
          {
            t = d_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                j_12 = ATgetArgument(t, 0);
                {
                  ATerm l_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = j_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_18 = ATgetArgument(t, 0);
                m_12 = ATgetArgument(t, 1);
                {
                  ATerm p_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = m_12;
          }
      }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_13 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_18);
      t = e_13;
    }
  else
    {
      t = q_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_13;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm p_13 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_13 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_18);
      t = p_13;
    }
  else
    {
      t = t_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm x_12 = NULL;
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm y_18 = ATgetArgument(t, 0);
          x_12 = ATgetArgument(t, 1);
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = x_12;
      t = map_1_0(i_0, t);
    }
  else
    {
      t = w_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm a_19 = ATgetArgument(t, 0);
          x_12 = ATgetArgument(t, 1);
          {
            ATerm b_19 = ATgetArgument(t, 2);
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
  ATerm a_14 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_14 = ATgetArgument(t, 0);
          {
            ATerm g_19 = ATgetArgument(t, 1);
          }
          {
            ATerm i_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_19);
      t = a_14;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_SDefT_4))
        {
          a_14 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
          {
            ATerm m_19 = ATgetArgument(t, 2);
          }
          {
            ATerm n_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_14;
    }
  return(t);
}
static ATerm v_9 (ATerm c_42, ATerm b_42, ATerm t)
{
  t = c_42;
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
  ATerm d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(h_1, d_14, e_14, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      if((f_14 != ATgetArgument(t, 1)))
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
  ATerm p_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(n_1, p_14, v_14, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      if((y_14 != ATgetArgument(t, 1)))
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
  ATerm s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      if((s_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm h_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_149 (ATerm), ATerm t)
{
  static ATerm t_15 (ATerm t);
  static ATerm t_15 (ATerm t)
  {
    ATerm w_14 = NULL,x_14 = NULL,b_15 = NULL;
    b_15 = t;
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_149(t);
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
          t = (ATerm) ATempty;
        }
    }
    w_14 = t;
    t = b_15;
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL,t_13 = NULL,u_13 = NULL;
          t = g_149(t);
          c_15 = t;
          t = b_15;
          {
            static ATerm z_0 (ATerm t);
            static ATerm z_0 (ATerm t)
            {
              ATerm m_13 = NULL;
              t = t_15(t);
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_13, c_15);
              t = u_10(i_149, m_13, c_15, t);
              return(t);
            }
            t = h_149(z_0, t_15, a_1, t);
          }
          u_13 = t;
          t = SSL_explode_term(u_13);
          if(match_cons(t, sym__2))
            {
              ATerm t_19 = ATgetArgument(t, 0);
              t_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_13;
          t = foldr_3_0(b_1, c_1, _id, t);
          LocalPopChoice(r_19);
        }
      else
        {
          t = q_19;
          {
            ATerm i_14 = NULL;
            t = SSL_explode_term(b_15);
            if(match_cons(t, sym__2))
              {
                ATerm u_19 = ATgetArgument(t, 0);
                i_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_14;
            t = foldr_3_0(j_1, m_1, t_15, t);
          }
        }
    }
    x_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, x_14);
    t = i_11(o_1, w_14, x_14, t);
    return(t);
  }
  t = t_15(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(match_cons(v_19, sym_SVar_1))
        {
          z_15 = ATgetArgument(v_19, 0);
        }
      else
        _fail(t);
      a_16 = ATgetArgument(t, 1);
      b_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_16;
  t = foldr_3_0(z_1, b_2, d_2, t);
  c_16 = t;
  t = b_16;
  t = foldr_3_0(f_2, i_2, j_2, t);
  g_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_15, (ATerm) ATmakeAppl(sym__2, c_16, g_16)));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,g_17 = NULL,h_17 = NULL,k_17 = NULL,p_17 = NULL;
      b_17 = t;
      if(match_cons(t, sym_Let_2))
        {
          g_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          t = b_17;
          t = v_9(g_17, h_17, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              g_17 = ATgetArgument(t, 0);
              h_17 = ATgetArgument(t, 1);
              k_17 = ATgetArgument(t, 2);
              t = h_17;
              t = map_1_0(k_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  g_17 = ATgetArgument(t, 0);
                  h_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, g_17);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_17 = ATgetArgument(t, 0);
                      h_17 = ATgetArgument(t, 1);
                      k_17 = ATgetArgument(t, 2);
                      p_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_17;
                  t = map_1_0(l_2, t);
                }
            }
        }
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = dynrule_sargs_1_0(m_2, t);
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(match_cons(f_20, sym__2))
        {
          y_19 = ATgetArgument(f_20, 0);
          {
            ATerm l_20 = ATgetArgument(f_20, 1);
          }
        }
      else
        _fail(t);
      if((y_19 != ATgetArgument(t, 1)))
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
  ATerm j_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(j_16, n_16, t);
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
  ATerm q_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(q_16, v_16, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_18 = ATgetArgument(t, 0);
          {
            ATerm s_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_20);
      t = e_18;
    }
  else
    {
      t = p_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_18;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm t_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_20);
      t = l_19;
    }
  else
    {
      t = t_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_19;
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
  ATerm s_19 = NULL;
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_20);
      t = s_19;
    }
  else
    {
      t = y_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, s_1, sboundin_3_0, x_1, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm g_151 (ATerm), ATerm t)
{
  static ATerm l_42 (ATerm t);
  static ATerm l_42 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,b_3 = NULL;
        t = g_151(t);
        o_41 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_41 = ATgetFirst((ATermList) t);
            l_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_41);
        f_41 = t;
        t = l_41;
        t = Cons_2_0(_id, l_42, t);
        n_41 = t;
        t = (ATerm) ATinsert(CheckATermList(n_41), k_41);
        b_3 = t;
        t = SSLsetAnnotations(b_3, f_41);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm f_42 = NULL,g_42 = NULL,k_42 = NULL;
          k_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_42 = ATgetFirst((ATermList) t);
              g_42 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm j_17 = NULL,n_17 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(k_42);
                j_17 = t;
                t = g_42;
                t = l_42(t);
                n_17 = t;
                t = (ATerm) ATinsert(CheckATermList(n_17), f_42);
                c_3 = t;
                t = SSLsetAnnotations(c_3, j_17);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_42;
            }
        }
      }
    return(t);
  }
  t = l_42(t);
  return(t);
}
static ATerm u_52 (ATerm w_44, ATerm a_45, ATerm t)
{
  t = w_44;
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm f_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,f_3 = NULL;
        k_45 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_45 = ATgetFirst((ATermList) t);
            j_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_45);
        f_45 = t;
        t = j_45;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_45), h_45);
        f_3 = t;
        t = SSLsetAnnotations(f_3, f_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_21, w_44);
  return(t);
}
static ATerm v_52 (ATerm m_45, ATerm n_45, ATerm p_45, ATerm t)
{
  ATerm t_45 = NULL,v_45 = NULL;
  t = SSL_explode_string(m_45);
  t = escape_chars_1_0(p_2, t);
  v_45 = t;
  t = SSL_implode_string(v_45);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, t_45, n_45);
  return(t);
}
static ATerm w_52 (ATerm h_46, ATerm i_46, ATerm t)
{
  t = h_46;
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,g_3 = NULL;
        o_46 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_46 = ATgetFirst((ATermList) t);
            n_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_46);
        k_46 = t;
        t = n_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
        g_3 = t;
        t = SSLsetAnnotations(g_3, k_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_21, h_46);
  return(t);
}
static ATerm z_52 (ATerm p_46, ATerm r_46, ATerm t)
{
  ATerm t_46 = NULL;
  t = p_46;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_l_21;
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
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm y_46 = NULL;
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
                    y_46 = ATgetFirst((ATermList) r_21);
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
          t = y_46;
        }
      }
  }
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, t_46);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm y_45 = NULL,a_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_45 = ATgetFirst((ATermList) t);
      a_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_45;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_46), term_w_21), term_v_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_46), term_v_21), term_v_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_46), term_x_21), term_v_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_46), term_y_21), term_v_21);
            }
        }
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_18;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(o_18), term_w_21), term_v_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_18), term_v_21), term_v_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_18), term_x_21), term_v_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_18), term_y_21), term_v_21);
            }
        }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      j_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, k_48), j_48));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  if(match_cons(t, sym__2))
    {
      m_48 = ATgetArgument(t, 0);
      n_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_22, (ATerm) ATinsert(ATinsert(ATempty, n_48), m_48));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm m_51 = NULL,s_51 = NULL;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      s_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, s_51), m_51));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, v_51), u_51));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm c_52 = NULL,f_52 = NULL,c_19 = NULL;
  c_52 = t;
  t = SSL_explode_term(c_52);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_22 = ATgetArgument(t, 1);
        if(((ATgetType(h_22) == AT_LIST) && !(ATisEmpty(h_22))))
          {
            f_52 = ATgetFirst((ATermList) h_22);
            {
              ATerm j_22 = (ATerm) ATgetNext((ATermList) h_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_52);
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
          {
            ATerm m_22 = ATgetFirst((ATermList) l_22);
            ATerm n_22 = (ATerm) ATgetNext((ATermList) l_22);
            if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
              {
                c_19 = ATgetFirst((ATermList) n_22);
                {
                  ATerm o_22 = (ATerm) ATgetNext((ATermList) n_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_21, (ATerm) ATinsert(ATinsert(ATempty, c_19), f_52));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm z_46 = NULL,b_47 = NULL,f_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      l_47 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
      {
        ATerm g_18 = NULL,i_18 = NULL;
        t = SSL_explode_string(l_47);
        t = escape_chars_1_0(q_2, t);
        i_18 = t;
        t = SSL_implode_string(i_18);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_18), m_47);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          l_47 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, l_47));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              l_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, l_47));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  l_47 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, l_47));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      l_47 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, l_47));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          l_47 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_47), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              l_47 = ATgetArgument(t, 0);
                              m_47 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_47), m_47);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  l_47 = ATgetArgument(t, 0);
                                  m_47 = ATgetArgument(t, 1);
                                  {
                                    static ATerm r_2 (ATerm t);
                                    static ATerm r_2 (ATerm t)
                                    {
                                      t = m_47;
                                      return(t);
                                    }
                                    t = l_47;
                                    t = foldr_2_0(r_2, v_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      l_47 = ATgetArgument(t, 0);
                                      t = l_47;
                                      t = foldr_2_0(w_2, x_2, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          l_47 = ATgetArgument(t, 0);
                                          m_47 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_h_21, (ATerm) ATinsert(CheckATermList(m_47), l_47));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              l_47 = ATgetArgument(t, 0);
                                              t = l_47;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  b_47 = ATgetFirst((ATermList) t);
                                                  f_47 = (ATerm) ATgetNext((ATermList) t);
                                                  t = f_47;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm p_22 = t;
                                                      int q_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = u_52(l_47, k_47, t);
                                                          LocalPopChoice(q_22);
                                                        }
                                                      else
                                                        {
                                                          t = p_22;
                                                          t = b_47;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = u_52(l_47, k_47, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_52(l_47, k_47, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_r_22;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      l_47 = ATgetArgument(t, 0);
                                                      m_47 = ATgetArgument(t, 1);
                                                      t = m_47;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          z_46 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_t_22, (ATerm) ATinsert(ATinsert(ATempty, z_46), l_47));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          l_47 = ATgetArgument(t, 0);
                                                          t = l_47;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              l_47 = ATgetArgument(t, 0);
                                                              m_47 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, l_47, m_47, term_v_22);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  l_47 = ATgetArgument(t, 0);
                                                                  m_47 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, l_47, m_47, term_v_22);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      l_47 = ATgetArgument(t, 0);
                                                                      m_47 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, l_47, (ATerm)ATempty, m_47);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          l_47 = ATgetArgument(t, 0);
                                                                          m_47 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_47, l_47);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              l_47 = ATgetArgument(t, 0);
                                                                              m_47 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, l_47, m_47, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  l_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, l_47, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      l_47 = ATgetArgument(t, 0);
                                                                                      m_47 = ATgetArgument(t, 1);
                                                                                      j_47 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, l_47, m_47, (ATerm)ATempty, j_47);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          l_47 = ATgetArgument(t, 0);
                                                                                          m_47 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, l_47, (ATerm)ATempty, (ATerm)ATempty, m_47);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              l_47 = ATgetArgument(t, 0);
                                                                                              m_47 = ATgetArgument(t, 1);
                                                                                              j_47 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_47, m_47, (ATerm)ATempty, j_47);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  l_47 = ATgetArgument(t, 0);
                                                                                                  m_47 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_47, (ATerm)ATempty, (ATerm)ATempty, m_47);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      l_47 = ATgetArgument(t, 0);
                                                                                                      m_47 = ATgetArgument(t, 1);
                                                                                                      j_47 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, l_47, m_47, (ATerm)ATempty, j_47);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          l_47 = ATgetArgument(t, 0);
                                                                                                          m_47 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, l_47, (ATerm)ATempty, (ATerm)ATempty, m_47);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm w_22 = t;
                                                                                                          int b_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm e_23 = ATgetArgument(t, 0);
                                                                                                                  m_47 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(b_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, m_47);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = w_22;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  l_47 = ATgetArgument(t, 0);
                                                                                                                  m_47 = ATgetArgument(t, 1);
                                                                                                                  t = v_52(l_47, m_47, k_47, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      l_47 = ATgetArgument(t, 0);
                                                                                                                      m_47 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm y_2 (ATerm t);
                                                                                                                        static ATerm y_2 (ATerm t)
                                                                                                                        {
                                                                                                                          t = m_47;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = l_47;
                                                                                                                        t = foldr_2_0(y_2, z_2, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          l_47 = ATgetArgument(t, 0);
                                                                                                                          t = l_47;
                                                                                                                          t = foldr_2_0(a_3, d_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              l_47 = ATgetArgument(t, 0);
                                                                                                                              t = l_47;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  b_47 = ATgetFirst((ATermList) t);
                                                                                                                                  f_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = f_47;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm g_23 = t;
                                                                                                                                      int h_23 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = w_52(l_47, k_47, t);
                                                                                                                                          LocalPopChoice(h_23);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = g_23;
                                                                                                                                          t = b_47;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = w_52(l_47, k_47, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = w_52(l_47, k_47, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  l_47 = ATgetArgument(t, 0);
                                                                                                                                  m_47 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm z_51 = NULL;
                                                                                                                                    t = m_47;
                                                                                                                                    t = foldr_2_0(e_3, h_3, t);
                                                                                                                                    z_51 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, l_47, z_51);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      l_47 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, l_47, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          l_47 = ATgetArgument(t, 0);
                                                                                                                                          t = z_52(l_47, k_47, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm i_23 = t;
                                                                                                                                          int p_23 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  l_47 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm r_23 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  j_47 = ATgetArgument(t, 2);
                                                                                                                                                  i_47 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(p_23);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, l_47, j_47, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_47), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = i_23;
                                                                                                                                              {
                                                                                                                                                ATerm v_23 = t;
                                                                                                                                                int y_23 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        l_47 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm z_23 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        j_47 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(y_23);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, l_47, j_47, term_h_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = v_23;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        l_47 = ATgetArgument(t, 0);
                                                                                                                                                        m_47 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, l_47, m_47, term_h_24);
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
  ATerm b_53 = NULL,c_53 = NULL,h_53 = NULL;
  c_53 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      h_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
      {
        ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
        t = c_53;
        t = new_0_0(t);
        k_53 = t;
        t = new_0_0(t);
        l_53 = t;
        t = new_0_0(t);
        m_53 = t;
        t = new_0_0(t);
        n_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_53), m_53), l_53), k_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, k_53), (ATerm) ATmakeAppl(sym_Var_1, m_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, h_53, (ATerm)ATmakeAppl(sym_Var_1, k_53), (ATerm) ATmakeAppl(sym_Var_1, l_53)), (ATerm) ATmakeAppl(sym_BAM_3, b_53, (ATerm)ATmakeAppl(sym_Var_1, m_53), (ATerm) ATmakeAppl(sym_Var_1, n_53)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_53)), (ATerm) ATmakeAppl(sym_Var_1, l_53))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_53 = ATgetArgument(t, 0);
          {
            ATerm o_53 = NULL,p_53 = NULL,r_53 = NULL,u_53 = NULL;
            t = c_53;
            t = new_0_0(t);
            r_53 = t;
            t = h_53;
            {
              static ATerm i_3 (ATerm t);
              static ATerm i_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_53 != NULL) && (o_53 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_53 = ATgetArgument(t, 0);
                    if(((p_53 != NULL) && (p_53 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_53 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_53);
                return(t);
              }
              t = oncetd_1_0(i_3, t);
            }
            u_53 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_53)), not_null(o_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_53)), (ATerm) ATmakeAppl(sym_Build_1, u_53))));
          }
        }
      else
        {
          ATerm w_53 = NULL,x_53 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              h_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_53;
          t = new_0_0(t);
          d_54 = t;
          t = new_0_0(t);
          e_54 = t;
          t = h_53;
          {
            static ATerm k_3 (ATerm t);
            static ATerm k_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((w_53 != NULL) && (w_53 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    w_53 = ATgetArgument(t, 0);
                  if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    x_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_54);
              return(t);
            }
            t = oncetd_1_0(k_3, t);
          }
          f_54 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_54)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_54))))), (ATerm)ATmakeAppl(sym_Var_1, d_54), (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_53)), not_null(w_53)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_54 = NULL,o_54 = NULL,q_54 = NULL,r_54 = NULL;
        t = h_54;
        t = new_0_0(t);
        q_54 = t;
        t = i_54;
        {
          static ATerm m_3 (ATerm t);
          static ATerm m_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_54 != NULL) && (m_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_54 = ATgetArgument(t, 0);
                if(((o_54 != NULL) && (o_54 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_54), m_54);
            return(t);
          }
          t = pat_td_1_0(m_3, t);
        }
        r_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_54))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_54))))));
        LocalPopChoice(m_24);
      }
    else
      {
        t = k_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_55 = NULL,c_55 = NULL,m_55 = NULL;
              t = h_54;
              t = new_0_0(t);
              c_55 = t;
              t = i_54;
              {
                static ATerm r_3 (ATerm t);
                static ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_55 != NULL) && (a_55 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_55);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
              }
              m_55 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_55)), not_null(a_55))));
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,w_55 = NULL;
                t = h_54;
                t = new_0_0(t);
                t_55 = t;
                t = i_54;
                {
                  static ATerm s_3 (ATerm t);
                  static ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_55 != NULL) && (s_55 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_55 = ATgetArgument(t, 0);
                        if(((r_55 != NULL) && (r_55 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_55);
                    return(t);
                  }
                  t = pat_td_1_0(s_3, t);
                }
                w_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_55)), not_null(s_55)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_130(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
        h_60 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_60 = ATgetArgument(t, 0);
            j_60 = ATgetArgument(t, 1);
            {
              ATerm h_19 = NULL,k_19 = NULL,j_3 = NULL;
              t = SSLgetAnnotations(h_60);
              h_19 = t;
              t = j_60;
              {
                static ATerm t_3 (ATerm t);
                static ATerm t_3 (ATerm t)
                {
                  t = pat_td_1_0(e_130, t);
                  return(t);
                }
                t = fetch_1_0(t_3, t);
              }
              k_19 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_60, k_19);
              j_3 = t;
              t = SSLsetAnnotations(j_3, h_19);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_60 = ATgetArgument(t, 0);
                j_60 = ATgetArgument(t, 1);
                {
                  ATerm t_24 = t;
                  int u_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_20 = NULL,m_20 = NULL,l_3 = NULL;
                      t = SSLgetAnnotations(h_60);
                      e_20 = t;
                      t = j_60;
                      t = pat_td_1_0(e_130, t);
                      m_20 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_60, m_20);
                      l_3 = t;
                      t = SSLsetAnnotations(l_3, e_20);
                      LocalPopChoice(u_24);
                    }
                  else
                    {
                      t = t_24;
                      {
                        ATerm a_21 = NULL,f_21 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(h_60);
                        a_21 = t;
                        t = i_60;
                        t = pat_td_1_0(e_130, t);
                        f_21 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_21, j_60);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, a_21);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_60 = ATgetArgument(t, 0);
                    j_60 = ATgetArgument(t, 1);
                    g_60 = ATgetArgument(t, 2);
                    {
                      ATerm b_22 = NULL,i_22 = NULL,o_3 = NULL;
                      t = SSLgetAnnotations(h_60);
                      b_22 = t;
                      t = g_60;
                      {
                        static ATerm u_3 (ATerm t);
                        static ATerm u_3 (ATerm t)
                        {
                          t = pat_td_1_0(e_130, t);
                          return(t);
                        }
                        t = fetch_1_0(u_3, t);
                      }
                      i_22 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_60, j_60, i_22);
                      o_3 = t;
                      t = SSLsetAnnotations(o_3, b_22);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_60 = ATgetArgument(t, 0);
                        j_60 = ATgetArgument(t, 1);
                        g_60 = ATgetArgument(t, 2);
                        {
                          ATerm o_23 = NULL,w_23 = NULL,p_3 = NULL;
                          t = SSLgetAnnotations(h_60);
                          o_23 = t;
                          t = g_60;
                          {
                            static ATerm v_3 (ATerm t);
                            static ATerm v_3 (ATerm t)
                            {
                              t = pat_td_1_0(e_130, t);
                              return(t);
                            }
                            t = fetch_1_0(v_3, t);
                          }
                          w_23 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_60, j_60, w_23);
                          p_3 = t;
                          t = SSLsetAnnotations(p_3, o_23);
                        }
                      }
                    else
                      {
                        ATerm l_24 = NULL,o_24 = NULL,q_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_60 = ATgetArgument(t, 0);
                            j_60 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_60);
                        l_24 = t;
                        t = j_60;
                        t = pat_td_1_0(e_130, t);
                        o_24 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_60, o_24);
                        q_3 = t;
                        t = SSLsetAnnotations(q_3, l_24);
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
  ATerm t_60 = NULL,u_60 = NULL;
  t_60 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_60 = NULL,w_60 = NULL,y_60 = NULL,z_60 = NULL;
        t = t_60;
        t = new_0_0(t);
        y_60 = t;
        t = u_60;
        {
          static ATerm w_3 (ATerm t);
          static ATerm w_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((v_60 != NULL) && (v_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_60 = ATgetArgument(t, 0);
                if(((w_60 != NULL) && (w_60 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_60);
            return(t);
          }
          t = pat_td_1_0(w_3, t);
        }
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_60)), not_null(v_60))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_60)))), (ATerm) ATmakeAppl(sym_Build_1, z_60)));
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_61 = NULL,c_61 = NULL,d_61 = NULL;
              t = t_60;
              t = new_0_0(t);
              c_61 = t;
              t = u_60;
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_61 != NULL) && (a_61 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_61);
                  return(t);
                }
                t = pat_td_1_0(z_3, t);
              }
              d_61 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_61)))), (ATerm) ATmakeAppl(sym_Build_1, d_61)));
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
              {
                ATerm e_61 = NULL,f_61 = NULL,h_61 = NULL,i_61 = NULL;
                t = t_60;
                t = new_0_0(t);
                h_61 = t;
                t = u_60;
                {
                  static ATerm a_4 (ATerm t);
                  static ATerm a_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_61 = ATgetArgument(t, 0);
                        if(((f_61 != NULL) && (f_61 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_61 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_61);
                    return(t);
                  }
                  t = pat_td_1_0(a_4, t);
                }
                i_61 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_61), not_null(f_61), (ATerm) ATmakeAppl(sym_Var_1, h_61))), (ATerm) ATmakeAppl(sym_Build_1, i_61)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,r_61 = NULL,s_61 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_61, s_61);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_61 = ATgetArgument(t, 0);
          t = r_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_61 = ATgetFirst((ATermList) t);
              o_61 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_61, (ATerm) ATmakeAppl(sym_LChoices_1, o_61));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_61 = ATgetArgument(t, 0);
              t = r_61;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_61 = ATgetFirst((ATermList) t);
                  o_61 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_61, (ATerm) ATmakeAppl(sym_Choices_1, o_61));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_61 = ATgetArgument(t, 0);
                  t = r_61;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_61 = ATgetFirst((ATermList) t);
                      o_61 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_61, (ATerm) ATmakeAppl(sym_Seqs_1, o_61));
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
                      r_61 = ATgetArgument(t, 0);
                      s_61 = ATgetArgument(t, 1);
                      p_61 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, s_61, (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, p_61), r_61)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          r_61 = ATgetArgument(t, 0);
                          s_61 = ATgetArgument(t, 1);
                          p_61 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_61)), r_61), (ATerm) ATmakeAppl(sym_Build_1, s_61)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              r_61 = ATgetArgument(t, 0);
                              s_61 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_61, (ATerm) ATmakeAppl(sym_Match_1, s_61));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  r_61 = ATgetArgument(t, 0);
                                  s_61 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_61), s_61);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      r_61 = ATgetArgument(t, 0);
                                      s_61 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_61), r_61);
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
  ATerm o_25 = t;
  if((PushChoice() == 0))
    {
      ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,x_3 = NULL;
      f_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_63);
      d_63 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
      x_3 = t;
      t = SSLsetAnnotations(x_3, d_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_25;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_63 = ATgetFirst((ATermList) t);
      h_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym__2))
        {
          i_63 = ATgetArgument(f_26, 0);
          j_63 = ATgetArgument(f_26, 1);
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(match_cons(g_26, sym__2))
          {
            k_63 = ATgetArgument(g_26, 0);
            l_63 = ATgetArgument(g_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_63), i_63), (ATerm) ATinsert(CheckATermList(l_63), j_63));
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_63, n_63);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(match_cons(h_26, sym__2))
        {
          q_63 = ATgetArgument(h_26, 0);
          r_63 = ATgetArgument(h_26, 1);
        }
      else
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(match_cons(i_26, sym__2))
          {
            s_63 = ATgetArgument(i_26, 0);
            t_63 = ATgetArgument(i_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_63), q_63), (ATerm) ATinsert(CheckATermList(t_63), r_63));
  return(t);
}
static ATerm i_10 (ATerm z_35, ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,c_63 = NULL,y_3 = NULL;
  t = b_36;
  t = fetch_1_0(b_4, t);
  t = b_36;
  t = genzip_4_0(d_4, g_4, j_4, LiftPrimArg_0_0, t);
  c_63 = t;
  if(match_cons(t, sym__2))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_63);
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
        ATerm j_26 = ATgetArgument(t, 1);
        if(match_cons(j_26, sym__2))
          {
            t_62 = ATgetArgument(j_26, 0);
            u_62 = ATgetArgument(j_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_62, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_62), (ATerm) ATmakeAppl(sym_CallT_3, z_35, a_36, u_62)));
  return(t);
}
static ATerm p_64 (ATerm d_64, ATerm t)
{
  ATerm f_64 = NULL;
  t = d_64;
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        ATerm i_64 = NULL,k_64 = NULL,l_64 = NULL,c_4 = NULL;
        l_64 = t;
        if(match_cons(t, sym_Var_1))
          {
            k_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_64);
        i_64 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_64);
        c_4 = t;
        t = SSLsetAnnotations(c_4, i_64);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
  }
  t = new_0_0(t);
  f_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, f_64), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_64), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_64)))), (ATerm) ATmakeAppl(sym_Var_1, f_64)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL;
  m_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_64 = ATgetArgument(t, 0);
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_64(m_64, t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATmakeAppl(sym_Var_1, n_64)));
          }
      }
    }
  else
    {
      t = p_64(m_64, t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_26 = t;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,e_4 = NULL;
      m_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_25);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_25);
      e_4 = t;
      t = SSLsetAnnotations(e_4, k_25);
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
  t = term_s_25;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      t_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_25, t_25);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(match_cons(y_26, sym__2))
        {
          u_25 = ATgetArgument(y_26, 0);
          v_25 = ATgetArgument(y_26, 1);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(match_cons(z_26, sym__2))
          {
            w_25 = ATgetArgument(z_26, 0);
            x_25 = ATgetArgument(z_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_25), u_25), (ATerm) ATinsert(CheckATermList(x_25), v_25));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_25 = ATgetFirst((ATermList) t);
      z_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_25, z_25);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          a_26 = ATgetArgument(a_27, 0);
          c_26 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(match_cons(p_27, sym__2))
          {
            d_26 = ATgetArgument(p_27, 0);
            e_26 = ATgetArgument(p_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_26), a_26), (ATerm) ATinsert(CheckATermList(e_26), c_26));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm q_27 = t;
  if((PushChoice() == 0))
    {
      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,h_4 = NULL;
      m_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_27);
      k_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_27);
      h_4 = t;
      t = SSLsetAnnotations(h_4, k_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_27;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_27);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(match_cons(t_27, sym__2))
        {
          r_27 = ATgetArgument(t_27, 0);
          s_27 = ATgetArgument(t_27, 1);
        }
      else
        _fail(t);
      {
        ATerm u_27 = ATgetArgument(t, 1);
        if(match_cons(u_27, sym__2))
          {
            x_27 = ATgetArgument(u_27, 0);
            y_27 = ATgetArgument(u_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_27), r_27), (ATerm) ATinsert(CheckATermList(y_27), s_27));
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      a_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(match_cons(v_27, sym__2))
        {
          b_28 = ATgetArgument(v_27, 0);
          c_28 = ATgetArgument(v_27, 1);
        }
      else
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(match_cons(w_27, sym__2))
          {
            d_28 = ATgetArgument(w_27, 0);
            e_28 = ATgetArgument(w_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_28), b_28), (ATerm) ATinsert(CheckATermList(e_28), c_28));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,y_67 = NULL,z_67 = NULL;
  p_67 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
      o_67 = ATgetArgument(t, 2);
      {
        ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,f_4 = NULL;
        t = o_67;
        t = fetch_1_0(n_4, t);
        t = o_67;
        t = genzip_4_0(p_4, s_4, t_4, LiftPrimArg_0_0, t);
        j_25 = t;
        if(match_cons(t, sym__2))
          {
            f_25 = ATgetArgument(t, 0);
            g_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_25);
        e_25 = t;
        t = f_25;
        t = concat_0_0(t);
        h_25 = t;
        t = g_25;
        t = genzip_4_0(u_4, w_4, z_4, _id, t);
        i_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
        f_4 = t;
        t = SSLsetAnnotations(f_4, e_25);
        if(match_cons(t, sym__2))
          {
            b_25 = ATgetArgument(t, 0);
            {
              ATerm f_28 = ATgetArgument(t, 1);
              if(match_cons(f_28, sym__2))
                {
                  c_25 = ATgetArgument(f_28, 0);
                  d_25 = ATgetArgument(f_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_25), (ATerm) ATmakeAppl(sym_PrimT_3, y_67, z_67, d_25)));
      }
    }
  else
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,i_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          y_67 = ATgetArgument(t, 0);
          z_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_67;
      t = fetch_1_0(a_5, t);
      t = z_67;
      t = genzip_4_0(b_5, c_5, e_5, LiftPrimArg_0_0, t);
      j_27 = t;
      if(match_cons(t, sym__2))
        {
          f_27 = ATgetArgument(t, 0);
          g_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_27);
      e_27 = t;
      t = f_27;
      t = concat_0_0(t);
      h_27 = t;
      t = g_27;
      t = genzip_4_0(g_5, i_5, k_5, _id, t);
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
      i_4 = t;
      t = SSLsetAnnotations(i_4, e_27);
      if(match_cons(t, sym__2))
        {
          b_27 = ATgetArgument(t, 0);
          {
            ATerm g_28 = ATgetArgument(t, 1);
            if(match_cons(g_28, sym__2))
              {
                c_27 = ATgetArgument(g_28, 0);
                d_27 = ATgetArgument(g_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, b_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_27), (ATerm) ATmakeAppl(sym_PrimT_3, y_67, (ATerm)ATempty, d_27)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm t)
{
  static ATerm c_68 (ATerm t);
  static ATerm c_68 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_138(t);
        t = c_68(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = k_138(t);
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_68 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  e_69 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_68 = ATgetArgument(t, 0);
      c_69 = ATgetArgument(t, 1);
      d_69 = ATgetArgument(t, 2);
      {
        ATerm v_28 = NULL,o_4 = NULL;
        t = SSLgetAnnotations(e_69);
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_68, c_69, d_69);
        o_4 = t;
        t = SSLsetAnnotations(o_4, v_28);
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
  ATerm j_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(n_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_28;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_70 = NULL,a_71 = NULL,d_71 = NULL,e_71 = NULL;
  a_71 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_71 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
      w_70 = ATgetArgument(t, 2);
      {
        ATerm q_29 = NULL,q_4 = NULL;
        t = SSLgetAnnotations(a_71);
        q_29 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_71, e_71, w_70);
        q_4 = t;
        t = SSLsetAnnotations(q_4, q_29);
      }
    }
  else
    {
      ATerm h_30 = NULL,r_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          d_71 = ATgetArgument(t, 0);
          e_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_71);
      h_30 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, d_71, e_71);
      r_4 = t;
      t = SSLsetAnnotations(r_4, h_30);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm v_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      v_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_71;
  if(match_cons(t, sym_StratRule_3))
    {
      x_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
      z_71 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_71), (ATerm) ATmakeAppl(sym_Where_1, z_71)), x_71));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_71 = ATgetArgument(t, 0);
          y_71 = ATgetArgument(t, 1);
          z_71 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_71;
      t = pureterm_0_0(t);
      t = y_71;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, y_71)), (ATerm) ATmakeAppl(sym_Where_1, z_71)), (ATerm) ATmakeAppl(sym_Match_1, x_71)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_133 (ATerm), ATerm t)
{
  static ATerm l_72 (ATerm t);
  static ATerm l_72 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_133(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = SRTS_one(l_72, t);
      }
    return(t);
  }
  t = l_72(t);
  return(t);
}
static ATerm m_10 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
  t = new_0_0(t);
  r_72 = t;
  t = m_31;
  {
    static ATerm q_5 (ATerm t);
    static ATerm q_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_28 = ATgetArgument(t, 0);
          if(match_cons(s_28, sym_Var_1))
            {
              if(((p_72 != NULL) && (p_72 != ATgetArgument(s_28, 0))))
                _fail(ATgetArgument(s_28, 0));
              else
                p_72 = ATgetArgument(s_28, 0);
            }
          else
            _fail(t);
          if(((n_72 != NULL) && (n_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_72 = ATgetArgument(t, 1);
          {
            ATerm t_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_72);
      return(t);
    }
    t = oncetd_1_0(q_5, t);
  }
  s_72 = t;
  t = n_31;
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_28 = ATgetArgument(t, 0);
          if(match_cons(u_28, sym_Var_1))
            {
              if(((p_72 != NULL) && (p_72 != ATgetArgument(u_28, 0))))
                _fail(ATgetArgument(u_28, 0));
              else
                p_72 = ATgetArgument(u_28, 0);
            }
          else
            _fail(t);
          if(((o_72 != NULL) && (o_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_72 = ATgetArgument(t, 1);
          {
            ATerm w_28 = ATgetArgument(t, 2);
            if(match_cons(w_28, sym_CallT_3))
              {
                if(((m_72 != NULL) && (m_72 != ATgetArgument(w_28, 0))))
                  _fail(ATgetArgument(w_28, 0));
                else
                  m_72 = ATgetArgument(w_28, 0);
                {
                  ATerm x_28 = ATgetArgument(w_28, 1);
                  if(((ATgetType(x_28) != AT_LIST) || !(ATisEmpty(x_28))))
                    _fail(t);
                }
                {
                  ATerm y_28 = ATgetArgument(w_28, 2);
                  if(((ATgetType(y_28) != AT_LIST) || !(ATisEmpty(y_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_72);
      return(t);
    }
    t = oncetd_1_0(s_5, t);
  }
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_72, t_72, (ATerm) ATmakeAppl(sym_Seq_2, o_31, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_72), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_72), not_null(o_72), term_v_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_72)), (ATerm) ATmakeAppl(sym_Var_1, r_72))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
          o_74 = t;
          if(match_cons(t, sym_SRule_1))
            {
              p_74 = ATgetArgument(t, 0);
              t = p_74;
              if(match_cons(t, sym_Rule_3))
                {
                  l_74 = ATgetArgument(t, 0);
                  m_74 = ATgetArgument(t, 1);
                  n_74 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_74;
              t = m_10(l_74, m_74, n_74, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm w_30 = NULL,b_31 = NULL,v_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  p_74 = ATgetArgument(t, 0);
                  q_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_74);
              w_30 = t;
              t = q_74;
              t = desugarRule_0_0(t);
              b_31 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, p_74, b_31);
              v_4 = t;
              t = SSLsetAnnotations(v_4, w_30);
            }
          LocalPopChoice(e_29);
        }
      else
        {
          t = c_29;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    t = topdown_1_0(j_132, t);
    return(t);
  }
  t = j_132(t);
  t = SRTS_all(t_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
    }
  t = repeat_2_0(x_5, _id, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
            r_75 = t;
            if(match_cons(t, sym_CallT_3))
              {
                s_75 = ATgetArgument(t, 0);
                t_75 = ATgetArgument(t, 1);
                u_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_75;
            t = i_10(s_75, t_75, u_75, t);
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  {
                    ATerm p_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(r_29);
                      }
                    else
                      {
                        t = p_29;
                        {
                          ATerm s_29 = t;
                          int t_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_29 = t;
                              int v_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      e_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_76;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      f_76 = ATgetArgument(t, 0);
                                      t = f_76;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          f_76 = ATgetArgument(t, 0);
                                          g_76 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, f_76, g_76);
                                    }
                                  LocalPopChoice(v_29);
                                }
                              else
                                {
                                  t = u_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(t_29);
                            }
                          else
                            {
                              t = s_29;
                              {
                                ATerm x_29 = t;
                                int y_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(y_29);
                                  }
                                else
                                  {
                                    t = x_29;
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
  t = topdown_1_0(u_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL;
  x_76 = t;
  t = SSL_explode_term(x_76);
  if(match_cons(t, sym__2))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_30 = ATgetArgument(t, 1);
        if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
          {
            w_76 = ATgetFirst((ATermList) a_30);
            {
              ATerm b_30 = (ATerm) ATgetNext((ATermList) a_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_76;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_31 = NULL,p_31 = NULL,q_31 = NULL;
  q_31 = t;
  t = SSL_explode_term(q_31);
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_30 = ATgetArgument(t, 1);
        if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
          {
            ATerm j_30 = ATgetFirst((ATermList) g_30);
            k_31 = (ATerm) ATgetNext((ATermList) g_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_g_21;
  p_31 = t;
  t = SSL_mkterm(p_31, k_31);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm q_136 (ATerm), ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  static ATerm y_76 (ATerm t);
  static ATerm y_76 (ATerm t)
  {
    ATerm k_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
        s_76 = t;
        t = map_1_0(z_5, t);
        t = q_136(t);
        t_76 = t;
        t = s_76;
        t = map_1_0(b_6, t);
        t = y_76(t);
        u_76 = t;
        t = (ATerm) ATinsert(CheckATermList(u_76), t_76);
        LocalPopChoice(n_30);
      }
    else
      {
        t = k_30;
        t = map_1_0(d_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = y_76(t);
  r_76 = t;
  t = term_g_21;
  q_76 = t;
  t = SSL_mkterm(q_76, r_76);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_77 = NULL,c_77 = NULL,f_77 = NULL;
        t = z_76;
        t = new_0_0(t);
        b_77 = t;
        t = new_0_0(t);
        c_77 = t;
        t = new_0_0(t);
        f_77 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, z_76), (ATerm) ATmakeAppl(sym_Var_1, c_77))), (ATerm) ATmakeAppl(sym_Var_1, f_77)), (ATerm)ATmakeAppl(sym_VarDec_2, b_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_30), term_t_30)), c_77, (ATerm)ATmakeAppl(sym_Var_1, c_77), f_77, (ATerm) ATmakeAppl(sym_Var_1, f_77));
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm j_77 = NULL,k_77 = NULL,n_77 = NULL;
          t = z_76;
          t = new_0_0(t);
          j_77 = t;
          t = new_0_0(t);
          k_77 = t;
          t = new_0_0(t);
          n_77 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, z_76), (ATerm) ATmakeAppl(sym_Var_1, k_77))), (ATerm) ATmakeAppl(sym_Var_1, n_77)), (ATerm)ATmakeAppl(sym_VarDec_2, j_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_30), term_t_30)), k_77, (ATerm)ATmakeAppl(sym_Var_1, k_77), n_77, (ATerm) ATmakeAppl(sym_Var_1, n_77));
        }
      }
  }
  return(t);
}
static ATerm n_10 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_57, q_57);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = SSL_subtr(p_57, q_57);
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_77, p_77, (ATerm) ATempty);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm q_77 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      if(((ATgetType(x_30) != AT_INT) || (ATgetInt((ATermInt) x_30) != 0)))
        _fail(t);
      {
        ATerm z_30 = ATgetArgument(t, 1);
      }
      q_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_77;
  return(t);
}
ATerm copy_1_0 (ATerm m_155 (ATerm), ATerm t)
{
  static ATerm j_6 (ATerm t);
  static ATerm j_6 (ATerm t)
  {
    ATerm r_77 = NULL,s_77 = NULL,y_77 = NULL,z_77 = NULL,h_78 = NULL,n_78 = NULL;
    if(match_cons(t, sym__3))
      {
        r_77 = ATgetArgument(t, 0);
        s_77 = ATgetArgument(t, 1);
        y_77 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_77, term_o_20);
    t = geq_0_0(t);
    t = term_o_20;
    n_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_77, term_o_20);
    t = n_10(r_77, n_78, t);
    z_77 = t;
    t = s_77;
    t = m_155(t);
    h_78 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_77, s_77, (ATerm) ATinsert(CheckATermList(y_77), h_78));
    return(t);
  }
  t = for_3_0(f_6, g_6, j_6, t);
  return(t);
}
static ATerm o_10 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  t = new_0_0(t);
  o_78 = t;
  t = new_0_0(t);
  p_78 = t;
  t = new_0_0(t);
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_78), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_25)), (ATerm) ATmakeAppl(sym_Var_1, p_78))), (ATerm) ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_25)), (ATerm) ATmakeAppl(sym_Var_1, q_78)))), (ATerm)ATmakeAppl(sym_VarDec_2, o_78, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_30), term_t_30)), p_78, (ATerm)ATmakeAppl(sym_Var_1, p_78), q_78, (ATerm) ATmakeAppl(sym_Var_1, q_78));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_79 = NULL,d_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_79 = ATgetFirst((ATermList) t);
      d_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_79;
    }
  else
    {
      t = d_79;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm f_83 (ATerm e_80, ATerm f_80, ATerm g_80, ATerm h_80, ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
  t = term_o_20;
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_80, term_o_20);
  t = r_11(f_80, g_81, t);
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_81, term_c_31);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_80 = ATgetFirst((ATermList) t);
      v_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_80;
  t = last_0_0(t);
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_80), p_80), v_80);
  t = genzip_4_0(k_6, l_6, n_6, p_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
      y_80 = ATgetArgument(t, 2);
      z_80 = ATgetArgument(t, 3);
      c_81 = ATgetArgument(t, 4);
      d_81 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_81), y_80), v_80);
  t = concat_0_0(t);
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, e_80, term_e_31), x_80, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_81), p_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_80)), (ATerm) ATmakeAppl(sym_Op_2, e_80, z_80))), (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_80)), (ATerm) ATmakeAppl(sym_Op_2, e_80, d_81))), (ATerm) ATmakeAppl(sym_Seqs_1, w_80)))));
  return(t);
}
static ATerm g_83 (ATerm w_81, ATerm y_81, ATerm z_81, ATerm a_82, ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,i_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  t = a_82;
  t = new_0_0(t);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_81, (ATerm) ATmakeAppl(sym_Var_1, e_82));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      f_82 = ATgetArgument(t, 0);
      g_82 = ATgetArgument(t, 1);
      i_82 = ATgetArgument(t, 2);
      k_82 = ATgetArgument(t, 3);
      l_82 = ATgetArgument(t, 4);
      m_82 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_82, l_82);
  t = conc_0_0(t);
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_81, term_h_31), g_82, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(n_82), e_82), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_82)), (ATerm) ATmakeAppl(sym_Op_2, w_81, k_82))), (ATerm)ATmakeAppl(sym_Op_2, w_81, m_82), (ATerm) ATmakeAppl(sym_Seqs_1, f_82)))));
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      ATerm l_31 = ATgetArgument(t, 1);
      if(((ATgetType(l_31) != AT_LIST) || !(ATisEmpty(l_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm h_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
        {
          h_81 = ATgetFirst((ATermList) r_31);
          k_81 = (ATerm) ATgetNext((ATermList) r_31);
        }
      else
        _fail(t);
      {
        ATerm s_31 = ATgetArgument(t, 1);
        if(((ATgetType(s_31) == AT_LIST) && !(ATisEmpty(s_31))))
          {
            l_81 = ATgetFirst((ATermList) s_31);
            m_81 = (ATerm) ATgetNext((ATermList) s_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_81, l_81), (ATerm) ATmakeAppl(sym__2, k_81, m_81));
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      p_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_81), p_81);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  if(match_cons(t, sym__2))
    {
      t_81 = ATgetArgument(t, 0);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_10(t_81, u_81, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  p_82 = t;
  if(match_cons(t, sym__3))
    {
      q_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
      s_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_82;
  if(match_string(t, "T"))
    {
      t = s_82;
      if(match_cons(t, sym__2))
        {
          t_82 = ATgetArgument(t, 0);
          u_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_82;
      if(match_int(t, 0))
        {
          ATerm t_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_83(q_82, t_82, u_82, p_82, t);
              LocalPopChoice(v_31);
            }
          else
            {
              t = t_31;
              {
                ATerm c_83 = NULL;
                t = p_82;
                t = new_0_0(t);
                c_83 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_82, term_e_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_83), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_83)), (ATerm) ATmakeAppl(sym_Op_2, q_82, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_83)), (ATerm) ATmakeAppl(sym_Op_2, q_82, (ATerm) ATempty))), term_v_22))));
              }
            }
        }
      else
        {
          t = f_83(q_82, t_82, u_82, p_82, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = s_82;
      if(match_cons(t, sym__2))
        {
          t_82 = ATgetArgument(t, 0);
          u_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_83(q_82, t_82, u_82, p_82, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_144 (ATerm), ATerm t)
{
  ATerm z_19 = NULL;
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    t = u_144(t);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    return(t);
  }
  t = fetch_1_0(q_6, t);
  t = not_null(z_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,g_20 = NULL;
  t = term_z_16;
  b_20 = t;
  t = (ATerm) ATinsert(ATempty, term_w_31);
  g_20 = t;
  t = SSL_printnl(b_20, g_20);
  t = term_o_20;
  a_20 = t;
  t = SSL_exit(a_20);
  t = (ATerm) ATinsert(ATempty, term_w_31);
  return(t);
}
ATerm debug_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  h_20 = t;
  t = w_139(t);
  i_20 = t;
  t = term_z_16;
  j_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_20), i_20);
  k_20 = t;
  t = SSL_printnl(j_20, k_20);
  t = h_20;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm n_32 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_32);
      t = k_15;
      t = foldr_3_0(c_7, d_7, e_7, t);
      t = j_15;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  else
    {
      t = h_32;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm o_32 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
          {
            ATerm p_32 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_15;
      t = foldr_3_0(i_7, j_7, k_7, t);
      t = j_15;
      t = foldr_3_0(l_7, m_7, n_7, t);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
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
  t = r_11(v_15, w_15, t);
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
  ATerm x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(x_15, y_15, t);
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
  ATerm f_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(f_16, h_16, t);
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
  ATerm i_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(i_16, k_16, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm s_32 = ATgetArgument(t, 1);
      ATerm t_32 = ATgetArgument(t, 2);
      ATerm v_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      static ATerm r_6 (ATerm t);
      static ATerm r_6 (ATerm t)
      {
        ATerm u_20 = NULL,v_20 = NULL;
        u_20 = t;
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  v_20 = ATgetArgument(t, 0);
                  {
                    ATerm a_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_32);
              t = v_20;
              if(((r_20 != NULL) && (r_20 != t)))
                _fail(t);
              else
                r_20 = t;
              t = u_20;
            }
          else
            {
              t = y_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  v_20 = ATgetArgument(t, 0);
                  {
                    ATerm c_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm e_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm f_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = v_20;
              if(((r_20 != NULL) && (r_20 != t)))
                _fail(t);
              else
                r_20 = t;
              t = u_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(r_6, t);
      {
        static ATerm y_6 (ATerm t);
        static ATerm y_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_20 = ATgetArgument(t, 0);
              {
                ATerm g_33 = ATgetArgument(t, 1);
              }
              {
                ATerm j_33 = ATgetArgument(t, 2);
              }
              {
                ATerm k_33 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_6, t);
      }
      t = not_null(r_20);
      t = debug_1_0(z_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm u_22 = NULL;
        u_22 = t;
        t = map_1_0(b_7, t);
        t = u_22;
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(p_7, t);
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              {
                ATerm m_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,s_16 = NULL;
  x_22 = t;
  t = SSL_explode_term(x_22);
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            y_22 = ATgetFirst((ATermList) z_33);
            {
              ATerm b_34 = (ATerm) ATgetNext((ATermList) z_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_22);
  if(match_cons(t, sym__2))
    {
      ATerm c_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
          {
            ATerm e_34 = ATgetFirst((ATermList) d_34);
            ATerm f_34 = (ATerm) ATgetNext((ATermList) d_34);
            if(((ATgetType(f_34) == AT_LIST) && !(ATisEmpty(f_34))))
              {
                s_16 = ATgetFirst((ATermList) f_34);
                {
                  ATerm h_34 = (ATerm) ATgetNext((ATermList) f_34);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_22, s_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(q_7, r_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  static ATerm z_22 (ATerm t);
  static ATerm z_22 (ATerm t)
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_134(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = SRTS_all(z_22, t);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
static ATerm w_9 (ATerm q_73, ATerm r_73, ATerm t)
{
  ATerm a_23 = NULL,c_23 = NULL;
  c_23 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
        t = w_11(q_73, r_73, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_34 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_34);
        {
          ATerm d_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_73, r_73, a_23);
          t = lookup_table_0_1(q_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(r_73, a_23, d_23, t);
          t = (ATerm) ATmakeAppl(sym__3, q_73, r_73, a_23);
        }
      }
    else
      {
        t = k_34;
        {
          ATerm f_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
          t = lookup_table_0_1(q_73, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(r_73, f_23, t);
          t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
        }
      }
  }
  t = c_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_167 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,q_23 = NULL,s_23 = NULL;
  m_23 = t;
  t = q_167(t);
  l_23 = t;
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        t = term_v_34;
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_23, term_v_34);
        t = w_11(l_23, t_23, t);
        {
          ATerm w_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_34;
            }
        }
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_23 = ATgetFirst((ATermList) t);
      j_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_23, term_v_34, j_23);
  t = lookup_table_0_1(l_23, t);
  s_23 = t;
  t = term_v_34;
  n_23 = t;
  t = s_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(n_23, j_23, q_23, t);
  t = k_23;
  {
    static ATerm s_7 (ATerm t);
    static ATerm s_7 (ATerm t)
    {
      ATerm u_23 = NULL;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_23, u_23);
      t = w_9(l_23, u_23, t);
      return(t);
    }
    t = map_1_0(s_7, t);
  }
  t = m_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t)
{
  ATerm x_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_135(t);
      t = v_135(t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = x_34;
      t = v_135(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_167 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,f_24 = NULL,y_24 = NULL;
  a_24 = t;
  t = p_167(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, term_v_34);
  {
    ATerm a_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_35 = ATgetArgument(t, 0);
            ATerm f_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_34;
        b_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_v_34);
        t = w_11(x_23, b_26, t);
        LocalPopChoice(c_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATempty;
      }
  }
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_23, term_v_34, (ATerm) ATinsert(CheckATermList(b_24), (ATerm) ATempty));
  t = lookup_table_0_1(x_23, t);
  y_24 = t;
  t = term_v_34;
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), (ATerm) ATempty);
  d_24 = t;
  t = y_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(c_24, d_24, f_24, t);
  t = a_24;
  return(t);
}
ATerm scope_2_0 (ATerm r_167 (ATerm), ATerm s_167 (ATerm), ATerm t)
{
  static ATerm t_7 (ATerm t);
  static ATerm t_7 (ATerm t)
  {
    t = end_scope_1_0(r_167, t);
    return(t);
  }
  t = begin_scope_1_0(r_167, t);
  t = restore_always_2_0(s_167, t_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_26;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      {
        ATerm g_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_26;
            if((n_26 != t))
              {
                _fail(t);
              }
            t = l_26;
            LocalPopChoice(i_35);
          }
        else
          {
            t = g_35;
            t = (ATerm) ATmakeAppl(sym__2, n_26, q_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_26, q_26);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(((ATgetType(j_35) != AT_LIST) || !(ATisEmpty(j_35))))
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(((ATgetType(k_35) != AT_LIST) || !(ATisEmpty(k_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
        {
          c_30 = ATgetFirst((ATermList) m_35);
          d_30 = (ATerm) ATgetNext((ATermList) m_35);
        }
      else
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
          {
            e_30 = ATgetFirst((ATermList) n_35);
            i_30 = (ATerm) ATgetNext((ATermList) n_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_30, e_30), (ATerm) ATmakeAppl(sym__2, d_30, i_30));
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_30), l_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm b_29 = NULL,d_29 = NULL,j_29 = NULL,m_29 = NULL;
  b_29 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            ATerm s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_35);
        t = b_29;
      }
    else
      {
        t = p_35;
        {
          ATerm w_29 = NULL;
          if(match_cons(t, sym__3))
            {
              d_29 = ATgetArgument(t, 0);
              j_29 = ATgetArgument(t, 1);
              m_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_29, j_29);
          t = genzip_4_0(u_7, v_7, w_7, _id, t);
          w_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_29, m_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,y_30 = NULL;
  static ATerm y_7 (ATerm t);
  static ATerm y_7 (ATerm t)
  {
    ATerm w_16 = NULL;
    t = s_131(t);
    w_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_16, not_null(y_30));
    t = lookup_0_0(t);
    t = t_131(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((y_30 != NULL) && (y_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_30;
  t = alltd_1_0(y_7, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm g_31 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_31 = ATgetArgument(t, 0);
      {
        ATerm t_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_31;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_31;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_u_35;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) != AT_LIST) || !(ATisEmpty(v_35))))
        _fail(t);
      {
        ATerm w_35 = ATgetArgument(t, 1);
        if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
        {
          z_31 = ATgetFirst((ATermList) x_35);
          a_32 = (ATerm) ATgetNext((ATermList) x_35);
        }
      else
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(((ATgetType(y_35) == AT_LIST) && !(ATisEmpty(y_35))))
          {
            b_32 = ATgetFirst((ATermList) y_35);
            c_32 = (ATerm) ATgetNext((ATermList) y_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_31, b_32), (ATerm) ATmakeAppl(sym__2, a_32, c_32));
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_32), d_32);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(match_cons(c_36, sym_VarDec_2))
        {
          f_32 = ATgetArgument(c_36, 0);
          {
            ATerm d_36 = ATgetArgument(c_36, 1);
          }
        }
      else
        _fail(t);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_32);
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, g_32);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, f_32), (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, g_32));
  t = e_11(p_8, k_32, l_32, t);
  t = j_32;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_u_35;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm m_32 = NULL,p_33 = NULL,c_17 = NULL;
  m_32 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_u_35;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, m_32);
  t = g_11(c_17, m_32, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_33;
  return(t);
}
static ATerm a_10 (ATerm k_28, ATerm l_28, ATerm p_28, ATerm m_28, ATerm o_28, ATerm t)
{
  ATerm a_31 = NULL,d_31 = NULL,f_31 = NULL;
  t = m_28;
  t = map_1_0(d_8, t);
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_31, l_28, o_28);
  t = substitute_2_0(e_8, _id, t);
  d_31 = t;
  {
    static ATerm j_8 (ATerm t);
    static ATerm j_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, p_28, k_28);
      t = genzip_4_0(l_8, m_8, n_8, o_8, t);
      t = d_31;
      t = alltd_1_0(q_8, t);
      if(((f_31 != NULL) && (f_31 != t)))
        _fail(t);
      else
        f_31 = t;
      return(t);
    }
    t = scope_2_0(f_8, j_8, t);
  }
  t = not_null(f_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,a_37 = NULL,x_4 = NULL;
  a_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  u_36 = t;
  t = v_36;
  t = new_0_0(t);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_36, w_36);
  x_4 = t;
  t = SSLsetAnnotations(x_4, u_36);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm b_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,p_37 = NULL,y_4 = NULL;
  p_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_37);
  b_37 = t;
  t = e_37;
  t = new_0_0(t);
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_37, f_37);
  y_4 = t;
  t = SSLsetAnnotations(y_4, b_37);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm q_37 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_37 = ATgetArgument(t, 0);
      {
        ATerm j_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_37);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm r_37 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_37 = ATgetArgument(t, 0);
      {
        ATerm k_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, r_37);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm q_33 = NULL,a_34 = NULL,g_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,b_35 = NULL;
  s_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_36 = ATgetFirst((ATermList) t);
      if(match_cons(m_36, sym_SDefT_4))
        {
          q_33 = ATgetArgument(m_36, 0);
          a_34 = ATgetArgument(m_36, 1);
          g_34 = ATgetArgument(m_36, 2);
          {
            ATerm p_36 = ATgetArgument(m_36, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm n_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_34;
  t = map_1_0(r_8, t);
  q_34 = t;
  t = g_34;
  t = map_1_0(s_8, t);
  r_34 = t;
  t = q_34;
  t = map_1_0(t_8, t);
  t_34 = t;
  t = r_34;
  t = map_1_0(u_8, t);
  u_34 = t;
  t = s_34;
  {
    static ATerm v_8 (ATerm t);
    static ATerm v_8 (ATerm t)
    {
      ATerm s_37 = NULL,t_37 = NULL,h_38 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm q_36 = ATgetArgument(t, 0);
          s_37 = ATgetArgument(t, 1);
          t_37 = ATgetArgument(t, 2);
          h_38 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_10(t_34, u_34, s_37, t_37, h_38, t);
      return(t);
    }
    t = map_1_0(v_8, t);
  }
  t = choices_0_0(t);
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, q_34, r_34, b_35);
  return(t);
}
static ATerm d_85 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm u_83, ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,d_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_83, r_83);
  t = Definitions_0_0(t);
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_84, s_83);
  d_84 = t;
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      ATerm t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_84);
  b_84 = t;
  t = a_84;
  {
    ATerm y_36 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_84 = NULL,h_84 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_84 = ATgetFirst((ATermList) t);
            h_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_84;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_84;
        LocalPopChoice(c_37);
      }
    else
      {
        t = y_36;
        {
          ATerm d_37 = t;
          int h_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(h_37);
            }
          else
            {
              t = d_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_84, s_83);
  d_5 = t;
  t = SSLsetAnnotations(d_5, b_84);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,v_84 = NULL,w_84 = NULL;
  n_84 = t;
  if(match_cons(t, sym__2))
    {
      o_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_84;
  if(match_cons(t, sym__2))
    {
      p_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_84;
  if(match_cons(t, sym_Mod_2))
    {
      j_84 = ATgetArgument(t, 0);
      k_84 = ATgetArgument(t, 1);
      {
        ATerm i_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_85 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, j_84, k_84, v_84);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            b_85 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_85, w_84);
            LocalPopChoice(k_37);
          }
        else
          {
            t = i_37;
            t = d_85(p_84, v_84, w_84, n_84, t);
          }
      }
    }
  else
    {
      t = d_85(p_84, v_84, w_84, n_84, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_144 (ATerm), ATerm t)
{
  static ATerm o_86 (ATerm t);
  static ATerm o_86 (ATerm t)
  {
    ATerm f_86 = NULL,h_86 = NULL,i_86 = NULL;
    i_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_86 = ATgetFirst((ATermList) t);
        h_86 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_31 = NULL,x_31 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(i_86);
          u_31 = t;
          t = h_86;
          t = o_86(t);
          x_31 = t;
          t = (ATerm) ATinsert(CheckATermList(x_31), f_86);
          f_5 = t;
          t = SSLsetAnnotations(f_5, u_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_86;
        t = z_144(t);
      }
    return(t);
  }
  t = o_86(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,j_85 = NULL;
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
          h_85 = ATgetFirst((ATermList) t);
          if(((j_85 != NULL) && (j_85 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_85;
      t = at_end_1_0(w_8, t);
    }
  return(t);
}
static ATerm j_87 (ATerm s_86, ATerm t)
{
  ATerm t_86 = NULL;
  t = SSL_explode_term(s_86);
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,c_87 = NULL;
  c_87 = t;
  if(match_cons(t, sym__2))
    {
      w_86 = ATgetArgument(t, 0);
      x_86 = ATgetArgument(t, 1);
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_8 (ATerm t);
            static ATerm x_8 (ATerm t)
            {
              t = x_86;
              return(t);
            }
            t = w_86;
            t = at_end_1_0(x_8, t);
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            t = j_87(c_87, t);
          }
      }
    }
  else
    {
      t = j_87(c_87, t);
    }
  return(t);
}
static ATerm u_10 (ATerm u_151 (ATerm), ATerm n_68, ATerm m_68, ATerm t)
{
  static ATerm n_88 (ATerm t);
  static ATerm n_88 (ATerm t)
  {
    ATerm e_88 = NULL,g_88 = NULL,h_88 = NULL;
    e_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_88;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_88 = ATgetFirst((ATermList) t);
            h_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_37 = t;
          int v_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_88;
              {
                static ATerm y_8 (ATerm t);
                static ATerm y_8 (ATerm t)
                {
                  t = m_68;
                  return(t);
                }
                t = h_11(u_151, y_8, g_88, h_88, t);
              }
              t = n_88(t);
              LocalPopChoice(v_37);
            }
          else
            {
              t = u_37;
              {
                ATerm r_32 = NULL,u_32 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(e_88);
                r_32 = t;
                t = h_88;
                t = n_88(t);
                u_32 = t;
                t = (ATerm) ATinsert(CheckATermList(u_32), g_88);
                h_5 = t;
                t = SSLsetAnnotations(h_5, r_32);
              }
            }
        }
      }
    return(t);
  }
  t = n_68;
  t = n_88(t);
  return(t);
}
ATerm genzip_4_0 (ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm t)
{
  static ATerm v_88 (ATerm t);
  static ATerm v_88 (ATerm t)
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_137(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,j_5 = NULL;
          t = b_137(t);
          u_88 = t;
          if(match_cons(t, sym__2))
            {
              q_88 = ATgetArgument(t, 0);
              r_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_88);
          p_88 = t;
          t = q_88;
          t = d_137(t);
          s_88 = t;
          t = r_88;
          t = v_88(t);
          t_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_88, t_88);
          j_5 = t;
          t = SSLsetAnnotations(j_5, p_88);
          t = c_137(t);
        }
      }
    return(t);
  }
  t = v_88(t);
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
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_38 = ATgetArgument(t, 0);
      if(((ATgetType(a_38) == AT_LIST) && !(ATisEmpty(a_38))))
        {
          c_89 = ATgetFirst((ATermList) a_38);
          d_89 = (ATerm) ATgetNext((ATermList) a_38);
        }
      else
        _fail(t);
      {
        ATerm b_38 = ATgetArgument(t, 1);
        if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
          {
            e_89 = ATgetFirst((ATermList) b_38);
            f_89 = (ATerm) ATgetNext((ATermList) b_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_89, e_89), (ATerm) ATmakeAppl(sym__2, d_89, f_89));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL;
  if(match_cons(t, sym__2))
    {
      g_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_89), g_89);
  return(t);
}
static ATerm z_10 (ATerm e_885, ATerm j_885, ATerm m_86, ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL;
  t = SSL_explode_term(j_885);
  if(match_cons(t, sym__2))
    {
      x_88 = ATgetArgument(t, 0);
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_885);
  if(match_cons(t, sym__2))
    {
      if((x_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_88, z_88);
  t = genzip_4_0(z_8, a_9, c_9, _id, t);
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_89, m_86);
  t = conc_0_0(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_89);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,l_5 = NULL;
  d_90 = t;
  if(match_cons(t, sym__2))
    {
      b_90 = ATgetArgument(t, 0);
      c_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_90);
  a_90 = t;
  t = c_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_90, c_90);
  l_5 = t;
  t = SSLsetAnnotations(l_5, a_90);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  h_91 = t;
  if(match_cons(t, sym__2))
    {
      i_91 = ATgetArgument(t, 0);
      j_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_91 = ATgetFirst((ATermList) t);
      l_91 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_91(i_91, j_91, h_91, t);
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_91), k_91), l_91);
          }
      }
    }
  else
    {
      t = x_91(i_91, j_91, h_91, t);
    }
  return(t);
}
static ATerm x_91 (ATerm e_90, ATerm f_90, ATerm g_90, ATerm t)
{
  ATerm h_90 = NULL,u_90 = NULL,m_5 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  t = SSLgetAnnotations(g_90);
  h_90 = t;
  t = f_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_90 = ATgetFirst((ATermList) t);
      b_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_90;
  if(match_cons(t, sym__2))
    {
      z_90 = ATgetArgument(t, 0);
      a_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_91;
        if((z_90 != t))
          {
            _fail(t);
          }
        t = b_91;
        LocalPopChoice(i_38);
      }
    else
      {
        t = g_38;
        t = f_90;
        t = z_10(z_90, a_91, b_91, t);
      }
  }
  u_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_90, u_90);
  m_5 = t;
  t = SSLsetAnnotations(m_5, h_90);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm w_91 = NULL;
  if(match_cons(t, sym__2))
    {
      w_91 = ATgetArgument(t, 0);
      if((w_91 != ATgetArgument(t, 1)))
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
        ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
        r_91 = t;
        if(match_cons(t, sym__2))
          {
            s_91 = ATgetArgument(t, 0);
            t_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_91;
        t = u_10(j_9, s_91, t_91, t);
      }
    }
  return(t);
}
static ATerm b_11 (ATerm k_167 (ATerm), ATerm l_167 (ATerm), ATerm m_167 (ATerm), ATerm r_89, ATerm o_89, ATerm w_89, ATerm s_89, ATerm p_89, ATerm q_89, ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_89, s_89);
  t = k_167(t);
  if(match_cons(t, sym__2))
    {
      z_91 = ATgetArgument(t, 0);
      y_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_91;
  t = l_167(t);
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_92, w_89);
  t = diff_0_0(t);
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_92, o_89);
  t = conc_0_0(t);
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_92, w_89);
  t = conc_0_0(t);
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_89, z_91, p_89);
  t = m_167(t);
  e_92 = t;
  t = (ATerm) ATmakeAppl(sym__5, c_92, d_92, y_91, e_92, q_89);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm k_167 (ATerm), ATerm l_167 (ATerm), ATerm m_167 (ATerm), ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
        {
          g_92 = ATgetFirst((ATermList) l_38);
          h_92 = (ATerm) ATgetNext((ATermList) l_38);
        }
      else
        _fail(t);
      i_92 = ATgetArgument(t, 1);
      j_92 = ATgetArgument(t, 2);
      k_92 = ATgetArgument(t, 3);
      l_92 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_11(k_167, l_167, m_167, g_92, h_92, i_92, j_92, k_92, l_92, t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t)
{
  static ATerm m_92 (ATerm t);
  static ATerm m_92 (ATerm t)
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_139(t);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = b_139(t);
        t = m_92(t);
      }
    return(t);
  }
  t = m_92(t);
  return(t);
}
ATerm for_3_0 (ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t)
{
  t = d_139(t);
  t = while_not_2_0(e_139, f_139, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
  if(match_cons(t, sym__3))
    {
      w_92 = ATgetArgument(t, 0);
      x_92 = ATgetArgument(t, 1);
      y_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_92, w_92, x_92, y_92, (ATerm) ATempty);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm p_38 = ATgetArgument(t, 0);
      if(((ATgetType(p_38) != AT_LIST) || !(ATisEmpty(p_38))))
        _fail(t);
      {
        ATerm q_38 = ATgetArgument(t, 1);
      }
      {
        ATerm t_38 = ATgetArgument(t, 2);
      }
      b_93 = ATgetArgument(t, 3);
      c_93 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_93, c_93);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, n_9, o_9, t);
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      {
        ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
        if(match_cons(t, sym__5))
          {
            i_93 = ATgetArgument(t, 0);
            l_93 = ATgetArgument(t, 1);
            m_93 = ATgetArgument(t, 2);
            n_93 = ATgetArgument(t, 3);
            o_93 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = i_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_93 = ATgetFirst((ATermList) t);
            k_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, k_93, l_93, m_93, n_93, (ATerm) ATinsert(CheckATermList(o_93), j_93));
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(q_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      f_93 = ATgetArgument(t, 1);
      g_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_93), f_93);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_33;
  if(match_cons(t, sym_Mod_2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_33;
            t = p_9(n_33, o_33, t_33, t);
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            t = x_33(s_33, t_33, t);
          }
      }
    }
  else
    {
      t = x_33(s_33, t_33, t);
    }
  return(t);
}
static ATerm x_33 (ATerm h_33, ATerm i_33, ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  t = term_z_16;
  l_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), i_33), term_e_17), h_33), term_a_17);
  m_33 = t;
  t = SSL_printnl(l_33, m_33);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), i_33), term_e_17), h_33), term_a_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t = for_3_0(k_9, l_9, m_9, t);
  r_94 = t;
  if(match_cons(t, sym__2))
    {
      s_94 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_94;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_94;
    }
  else
    {
      ATerm d_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_94 = ATgetFirst((ATermList) t);
          v_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(v_94), u_94);
      t = map_1_0(s_9, t);
      t = term_o_20;
      d_33 = t;
      t = SSL_exit(d_33);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL;
  if(match_cons(t, sym__2))
    {
      p_95 = ATgetArgument(t, 0);
      q_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(p_95, q_95, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  if(match_cons(t, sym__2))
    {
      r_95 = ATgetArgument(t, 0);
      s_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(r_95, s_95, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm t_95 = NULL;
  if(match_cons(t, sym__2))
    {
      t_95 = ATgetArgument(t, 0);
      if((t_95 != ATgetArgument(t, 1)))
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
  t = term_f_39;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  d_95 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      e_95 = ATgetArgument(t, 0);
      z_94 = ATgetArgument(t, 1);
      a_95 = ATgetArgument(t, 2);
      {
        ATerm i_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  g_95 = t;
  t = z_94;
  t = foldr_3_0(t_9, y_9, z_9, t);
  b_95 = t;
  t = a_95;
  t = foldr_3_0(b_10, c_10, d_10, t);
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, b_95, c_95));
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        t = (ATerm) ATempty;
      }
  }
  i_95 = t;
  t = e_95;
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = (ATerm) ATempty;
      }
  }
  h_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_95, c_95));
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_95, c_95)), h_95);
  t = i_11(e_10, o_95, h_95, t);
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, b_95, c_95));
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_39, (ATerm) ATinsert(CheckATermList(i_95), d_95));
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, b_95, c_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_39, (ATerm) ATinsert(CheckATermList(i_95), d_95)));
  t = e_11(f_10, m_95, n_95, t);
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, b_95, c_95));
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_39, d_95);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, b_95, c_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_39, d_95));
  t = e_11(h_10, k_95, l_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_39, f_95);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym_Defined_2, term_q_39, f_95));
  t = e_11(j_10, e_95, j_95, t);
  t = g_95;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL;
  if(match_cons(t, sym__2))
    {
      k_96 = ATgetArgument(t, 0);
      l_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(k_96, l_96, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL;
  if(match_cons(t, sym__2))
    {
      m_96 = ATgetArgument(t, 0);
      n_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(m_96, n_96, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      if((o_96 != ATgetArgument(t, 1)))
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
  t = term_f_39;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_g_39;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL;
  y_95 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      z_95 = ATgetArgument(t, 0);
      u_95 = ATgetArgument(t, 1);
      v_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  b_96 = t;
  t = u_95;
  t = foldr_3_0(p_10, q_10, r_10, t);
  w_95 = t;
  t = v_95;
  t = foldr_3_0(s_10, t_10, v_10, t);
  x_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym__2, w_95, x_95));
  {
    ATerm r_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
  }
  d_96 = t;
  t = z_95;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
  }
  c_96 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_95, x_95));
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_95, x_95)), c_96);
  t = i_11(w_10, j_96, c_96, t);
  a_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym__2, w_95, x_95));
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, (ATerm) ATinsert(CheckATermList(d_96), y_95));
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym__2, w_95, x_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, (ATerm) ATinsert(CheckATermList(d_96), y_95)));
  t = e_11(y_10, h_96, i_96, t);
  t = (ATerm) ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym__2, w_95, x_95));
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_39, y_95);
  g_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym__2, w_95, x_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_39, y_95));
  t = e_11(a_11, f_96, g_96, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_39, a_96);
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_95, (ATerm) ATmakeAppl(sym_Defined_2, term_z_39, a_96));
  t = e_11(f_11, z_95, e_96, t);
  t = b_96;
  return(t);
}
static ATerm e_11 (ATerm t_167 (ATerm), ATerm p_90, ATerm n_90, ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL;
  s_96 = t;
  t = t_167(t);
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_96, p_90, n_90);
  t = x_11(p_96, p_90, n_90, t);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_96 = NULL;
        t = term_v_34;
        x_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_96, term_v_34);
        t = w_11(p_96, x_96, t);
        {
          ATerm d_40 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_40;
            }
        }
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_96 = ATgetFirst((ATermList) t);
      r_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_96, term_v_34, (ATerm) ATinsert(CheckATermList(r_96), (ATerm) ATinsert(CheckATermList(q_96), p_90)));
  t = lookup_table_0_1(p_96, t);
  w_96 = t;
  t = term_v_34;
  t_96 = t;
  t = (ATerm) ATinsert(CheckATermList(r_96), (ATerm) ATinsert(CheckATermList(q_96), p_90));
  u_96 = t;
  t = w_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(t_96, u_96, v_96, t);
  t = s_96;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm k_97 = NULL;
  k_97 = t;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL,y_34 = NULL;
        t = term_h_39;
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_39, k_97);
        t = g_11(y_34, k_97, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_40) != ATmakeSymbol("v_0", 0, ATtrue)))
              _fail(t);
            p_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_34;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        {
          ATerm h_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_35 = NULL,h_35 = NULL;
              t = term_h_39;
              h_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_h_39, k_97);
              t = g_11(h_35, k_97, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_40 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_40) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  e_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_35;
              LocalPopChoice(j_40);
            }
          else
            {
              t = h_40;
              {
                ATerm l_35 = NULL,o_35 = NULL;
                t = term_h_39;
                o_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_39, k_97);
                t = g_11(o_35, k_97, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm m_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_40) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    l_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm g_11 (ATerm w_73, ATerm x_73, ATerm t)
{
  ATerm o_97 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_73, x_73);
  t = w_11(w_73, x_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_97 = ATgetFirst((ATermList) t);
      {
        ATerm n_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_97;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm f_98 = NULL,h_98 = NULL;
  f_98 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_40 = ATgetArgument(t, 0);
      h_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_98;
  if(match_cons(t, sym__2))
    {
      ATerm p_40 = ATgetArgument(t, 0);
      ATerm q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_36 = NULL,h_36 = NULL;
        t = term_f_39;
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_39, f_98);
        t = g_11(h_36, f_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_40) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            e_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_36;
        LocalPopChoice(v_40);
      }
    else
      {
        t = r_40;
        {
          ATerm x_40 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_36 = NULL,o_36 = NULL;
              t = term_f_39;
              o_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_39, f_98);
              t = g_11(o_36, f_98, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_41) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  l_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_36;
              LocalPopChoice(b_41);
            }
          else
            {
              t = x_40;
              {
                ATerm s_36 = NULL,z_36 = NULL;
                t = term_f_39;
                z_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_39, f_98);
                t = g_11(z_36, f_98, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm d_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_41) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    s_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  if(match_cons(t, sym__2))
    {
      b_99 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(b_99, c_99, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym__2))
    {
      d_99 = ATgetArgument(t, 0);
      e_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(d_99, e_99, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm f_99 = NULL;
  if(match_cons(t, sym__2))
    {
      f_99 = ATgetArgument(t, 0);
      if((f_99 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  p_98 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_98 = ATgetArgument(t, 0);
      n_98 = ATgetArgument(t, 1);
      o_98 = ATgetArgument(t, 2);
      {
        ATerm e_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  u_98 = t;
  t = n_98;
  t = foldr_3_0(s_11, v_11, y_11, t);
  q_98 = t;
  t = o_98;
  t = foldr_3_0(c_12, d_12, e_12, t);
  r_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_98, (ATerm) ATmakeAppl(sym__2, q_98, r_98));
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        t = (ATerm) ATempty;
      }
  }
  w_98 = t;
  t = s_98;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = (ATerm) ATempty;
      }
  }
  v_98 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_98, r_98));
  a_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_98, r_98)), v_98);
  t = i_11(g_12, a_99, v_98, t);
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_98, (ATerm) ATmakeAppl(sym__2, q_98, r_98));
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_41, (ATerm) ATinsert(CheckATermList(w_98), p_98));
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_98, (ATerm) ATmakeAppl(sym__2, q_98, r_98)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_41, (ATerm) ATinsert(CheckATermList(w_98), p_98)));
  t = e_11(h_12, y_98, z_98, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_41, t_98);
  x_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_98, (ATerm) ATmakeAppl(sym_Defined_2, term_p_41, t_98));
  t = e_11(i_12, s_98, x_98, t);
  t = u_98;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL;
  if(match_cons(t, sym__2))
    {
      s_99 = ATgetArgument(t, 0);
      t_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(s_99, t_99, t);
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
  ATerm u_99 = NULL,v_99 = NULL;
  if(match_cons(t, sym__2))
    {
      u_99 = ATgetArgument(t, 0);
      v_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(u_99, v_99, t);
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
  ATerm b_100 = NULL,c_100 = NULL;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(b_100, c_100, t);
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
  ATerm d_100 = NULL,e_100 = NULL;
  if(match_cons(t, sym__2))
    {
      d_100 = ATgetArgument(t, 0);
      e_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(d_100, e_100, t);
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
  ATerm l_100 = NULL,m_100 = NULL;
  if(match_cons(t, sym__2))
    {
      l_100 = ATgetArgument(t, 0);
      m_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(l_100, m_100, t);
  return(t);
}
static ATerm d_13 (ATerm t)
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
  ATerm n_100 = NULL,o_100 = NULL;
  if(match_cons(t, sym__2))
    {
      n_100 = ATgetArgument(t, 0);
      o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(n_100, o_100, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  h_99 = t;
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            i_99 = ATgetArgument(t, 0);
            j_99 = ATgetArgument(t, 1);
            k_99 = ATgetArgument(t, 2);
            {
              ATerm s_41 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_41);
        {
          ATerm p_99 = NULL,q_99 = NULL;
          t = j_99;
          t = foldr_3_0(l_12, n_12, o_12, t);
          p_99 = t;
          t = k_99;
          t = foldr_3_0(p_12, q_12, r_12, t);
          q_99 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_99, (ATerm) ATmakeAppl(sym__2, p_99, q_99)));
        }
      }
    else
      {
        t = q_41;
        if(match_cons(t, sym_ExtSDef_3))
          {
            i_99 = ATgetArgument(t, 0);
            j_99 = ATgetArgument(t, 1);
            k_99 = ATgetArgument(t, 2);
            {
              ATerm z_99 = NULL,a_100 = NULL;
              t = j_99;
              t = foldr_3_0(u_12, v_12, w_12, t);
              z_99 = t;
              t = k_99;
              t = foldr_3_0(y_12, z_12, a_13, t);
              a_100 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_99, (ATerm) ATmakeAppl(sym__2, z_99, a_100)));
            }
          }
        else
          {
            ATerm i_100 = NULL,j_100 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                i_99 = ATgetArgument(t, 0);
                j_99 = ATgetArgument(t, 1);
                k_99 = ATgetArgument(t, 2);
                {
                  ATerm t_41 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = j_99;
            t = foldr_3_0(b_13, c_13, d_13, t);
            i_100 = t;
            t = k_99;
            t = foldr_3_0(f_13, g_13, h_13, t);
            j_100 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_99, (ATerm) ATmakeAppl(sym__2, i_100, j_100)));
          }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm c_152 (ATerm), ATerm d_152 (ATerm), ATerm t_68, ATerm s_68, ATerm t)
{
  t = d_152(t);
  {
    static ATerm i_13 (ATerm t);
    static ATerm i_13 (ATerm t)
    {
      ATerm p_100 = NULL;
      p_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_68, p_100);
      t = c_152(t);
      return(t);
    }
    t = fetch_1_0(i_13, t);
  }
  t = s_68;
  return(t);
}
static ATerm i_11 (ATerm z_151 (ATerm), ATerm p_68, ATerm o_68, ATerm t)
{
  static ATerm f_101 (ATerm t);
  static ATerm f_101 (ATerm t)
  {
    ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL;
    a_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_68;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_101 = ATgetFirst((ATermList) t);
            c_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_101;
              {
                static ATerm j_13 (ATerm t);
                static ATerm j_13 (ATerm t)
                {
                  t = o_68;
                  return(t);
                }
                t = h_11(z_151, j_13, b_101, c_101, t);
              }
              t = f_101(t);
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              {
                ATerm j_37 = NULL,m_37 = NULL,p_5 = NULL;
                t = SSLgetAnnotations(a_101);
                j_37 = t;
                t = c_101;
                t = f_101(t);
                m_37 = t;
                t = (ATerm) ATinsert(CheckATermList(m_37), b_101);
                p_5 = t;
                t = SSLsetAnnotations(p_5, j_37);
              }
            }
        }
      }
    return(t);
  }
  t = p_68;
  t = f_101(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_154 (ATerm), ATerm z_154 (ATerm), ATerm a_155 (ATerm), ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
  i_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_101;
      t = y_154(t);
    }
  else
    {
      ATerm n_101 = NULL,o_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_101 = ATgetFirst((ATermList) t);
          k_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_101;
      t = a_155(t);
      n_101 = t;
      t = k_101;
      t = foldr_3_0(y_154, z_154, a_155, t);
      o_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_101, o_101);
      t = z_154(t);
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL;
  if(match_cons(t, sym__2))
    {
      s_101 = ATgetArgument(t, 0);
      t_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(n_13, s_101, t_101, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm u_101 = NULL;
  if(match_cons(t, sym__2))
    {
      u_101 = ATgetArgument(t, 0);
      if((u_101 != ATgetArgument(t, 1)))
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
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm y_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL;
  r_101 = t;
  t = foldr_3_0(k_13, l_13, DefinitionName_0_0, t);
  p_101 = t;
  t = r_101;
  t = map_1_0(o_13, t);
  q_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_101, q_101, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,r_5 = NULL;
  a_102 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_101 = ATgetFirst((ATermList) t);
      x_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_102);
  v_101 = t;
  t = w_101;
  t = w_106(t);
  y_101 = t;
  t = x_101;
  t = x_106(t);
  z_101 = t;
  t = (ATerm) ATinsert(CheckATermList(z_101), y_101);
  r_5 = t;
  t = SSLsetAnnotations(r_5, v_101);
  return(t);
}
static ATerm j_11 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm b_102 = NULL;
  t = SSL_fputc(o_50, p_50);
  b_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_102);
  return(t);
}
static ATerm k_11 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm c_102 = NULL;
  t = SSL_write_term_to_stream_text(u_48, v_48);
  c_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_102);
  return(t);
}
static ATerm m_11 (ATerm y_139 (ATerm), ATerm j_367, ATerm a_49, ATerm t)
{
  ATerm d_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_367, term_a_42);
  t = q_11(t);
  d_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_102, a_49);
  t = y_139(t);
  t = fclose_0_0(t);
  t = a_49;
  return(t);
}
static ATerm l_11 (ATerm q_48, ATerm r_48, ATerm t)
{
  ATerm e_102 = NULL;
  t = SSL_write_term_to_stream_baf(q_48, r_48);
  e_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_102);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(match_cons(d_42, sym_Stream_1))
        {
          l_102 = ATgetArgument(d_42, 0);
        }
      else
        _fail(t);
      m_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(l_102, m_102, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if(match_cons(e_42, sym_Stream_1))
        {
          q_102 = ATgetArgument(e_42, 0);
        }
      else
        _fail(t);
      r_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(q_102, r_102, t);
  n_102 = t;
  t = term_o_21;
  o_102 = t;
  t = n_102;
  if(match_cons(t, sym_Stream_1))
    {
      p_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, n_102);
  t = j_11(o_102, p_102, t);
  return(t);
}
ATerm output_1_0 (ATerm t_162 (ATerm), ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL;
  t = t_162(t);
  g_102 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_102 = NULL,i_102 = NULL;
        t = term_j_42;
        h_102 = t;
        t = term_m_42;
        i_102 = t;
        t = term_n_42;
        t = w_11(h_102, i_102, t);
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = term_o_42;
      }
  }
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_102, g_102);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_102 = NULL,k_102 = NULL;
        t = term_j_42;
        j_102 = t;
        t = term_r_42;
        k_102 = t;
        t = term_s_42;
        t = w_11(j_102, k_102, t);
        t = (ATerm) ATmakeAppl(sym__2, f_102, g_102);
        LocalPopChoice(q_42);
        if(match_cons(t, sym__2))
          {
            ATerm t_42 = ATgetArgument(t, 0);
            ATerm u_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(q_13, f_102, g_102, t);
      }
    else
      {
        t = p_42;
        if(match_cons(t, sym__2))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            ATerm w_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(r_13, f_102, g_102, t);
      }
  }
  return(t);
}
static ATerm f_103 (ATerm z_102, ATerm t)
{
  t = SSL_fclose(z_102);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  d_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_103 = ATgetArgument(t, 0);
      {
        ATerm x_42 = t;
        int y_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_103);
            LocalPopChoice(y_42);
          }
        else
          {
            t = x_42;
            t = f_103(d_103, t);
          }
      }
    }
  else
    {
      t = f_103(d_103, t);
    }
  return(t);
}
static ATerm n_11 (ATerm w_48, ATerm t)
{
  t = SSL_read_term_from_stream(w_48);
  return(t);
}
static ATerm o_11 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_strcat(w_67, x_67);
  return(t);
}
static ATerm p_11 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm g_103 = NULL;
  t = SSL_fopen(q_50, r_50);
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_103 = NULL;
  t = SSL_stdin_stream();
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_103 = NULL;
  t = SSL_stdout_stream();
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_103);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_103 = NULL;
  t = SSL_stderr_stream();
  j_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_103);
  return(t);
}
static ATerm q_104 (ATerm p_103, ATerm t)
{
  ATerm q_103 = NULL;
  t = SSL_explode_term(p_103);
  if(match_cons(t, sym__2))
    {
      ATerm z_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_43 = ATgetArgument(t, 1);
        if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
          {
            q_103 = ATgetFirst((ATermList) a_43);
            {
              ATerm b_43 = (ATerm) ATgetNext((ATermList) a_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_103;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_103;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_103;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_103;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_104 (ATerm t_103, ATerm u_103, ATerm v_103, ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,b_104 = NULL,v_5 = NULL;
  t = SSLgetAnnotations(v_103);
  y_103 = t;
  t = t_103;
  if(match_cons(t, sym_Path_1))
    {
      b_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_104, u_103);
  v_5 = t;
  t = SSLsetAnnotations(v_5, y_103);
  if(match_cons(t, sym__2))
    {
      w_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(w_103, x_103, t);
  return(t);
}
static ATerm s_104 (ATerm d_104, ATerm e_104, ATerm f_104, ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,l_104 = NULL,w_5 = NULL;
  t = SSLgetAnnotations(f_104);
  i_104 = t;
  t = SSL_is_string(d_104);
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_104, e_104);
  w_5 = t;
  t = SSLsetAnnotations(w_5, i_104);
  if(match_cons(t, sym__2))
    {
      g_104 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(g_104, h_104, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  if(match_cons(t, sym__2))
    {
      o_104 = ATgetArgument(t, 0);
      p_104 = ATgetArgument(t, 1);
      {
        ATerm c_43 = t;
        int d_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_104(n_104, t);
            LocalPopChoice(d_43);
          }
        else
          {
            t = c_43;
            {
              ATerm e_43 = t;
              int f_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_104(o_104, p_104, n_104, t);
                  LocalPopChoice(f_43);
                }
              else
                {
                  t = e_43;
                  t = s_104(o_104, p_104, n_104, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_104(n_104, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL,b_105 = NULL;
  b_105 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_105, term_i_43);
        t = q_11(t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        {
          ATerm e_38 = NULL,f_38 = NULL;
          t = term_j_43;
          f_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_43, b_105);
          t = o_11(f_38, b_105, t);
          e_38 = t;
          t = SSL_perror(e_38);
          _fail(t);
        }
      }
  }
  v_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(w_104, t);
  u_104 = t;
  t = v_104;
  t = fclose_0_0(t);
  t = u_104;
  return(t);
}
ATerm input_1_0 (ATerm u_162 (ATerm), ATerm t)
{
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_105 = NULL,f_105 = NULL;
      t = term_j_42;
      e_105 = t;
      t = term_m_43;
      f_105 = t;
      t = term_n_43;
      t = w_11(e_105, f_105, t);
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
      t = term_o_43;
    }
  t = ReadFromFile_0_0(t);
  t = u_162(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  t = term_j_42;
  g_105 = t;
  t = term_p_43;
  h_105 = t;
  t = term_q_43;
  t = w_11(g_105, h_105, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL;
  j_105 = t;
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_105;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_43 = ATgetFirst((ATermList) t);
                ATerm u_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_105;
          }
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = (ATerm) ATinsert(ATempty, j_105);
      }
  }
  k_105 = t;
  t = term_o_42;
  l_105 = t;
  t = SSL_printnl(l_105, k_105);
  t = j_105;
  return(t);
}
ATerm map_1_0 (ATerm k_144 (ATerm), ATerm t)
{
  static ATerm d_106 (ATerm t);
  static ATerm d_106 (ATerm t)
  {
    ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL;
    a_106 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_106;
      }
    else
      {
        ATerm o_38 = NULL,r_38 = NULL,s_38 = NULL,a_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_106 = ATgetFirst((ATermList) t);
            c_106 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_106);
        o_38 = t;
        t = b_106;
        t = k_144(t);
        r_38 = t;
        t = c_106;
        t = d_106(t);
        s_38 = t;
        t = (ATerm) ATinsert(CheckATermList(s_38), r_38);
        a_6 = t;
        t = SSLsetAnnotations(a_6, o_38);
      }
    return(t);
  }
  t = d_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_106 = ATgetFirst((ATermList) t);
      h_106 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_106 = NULL,m_106 = NULL;
        static ATerm s_13 (ATerm t);
        static ATerm s_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_106)), not_null(m_106));
          return(t);
        }
        t = h_106;
        t = r_0(t);
        if(((l_106 != NULL) && (l_106 != t)))
          _fail(t);
        else
          l_106 = t;
        t = g_106;
        t = p_0(t);
        if(((m_106 != NULL) && (m_106 != t)))
          _fail(t);
        else
          m_106 = t;
        t = h_106;
        t = reverse_acc_2_0(p_0, s_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,y_106 = NULL,c_6 = NULL;
  y_106 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_106);
  u_106 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_106);
  c_6 = t;
  t = SSLsetAnnotations(c_6, u_106);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm c_107 = NULL;
  c_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_107), term_v_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm s_164 (ATerm), ATerm t_164 (ATerm), ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL;
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_106 = NULL,t_106 = NULL;
      t = term_j_42;
      s_106 = t;
      t = term_p_43;
      t_106 = t;
      t = term_q_43;
      t = w_11(s_106, t_106, t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      t = fetch_1_0(v_13, t);
    }
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_164(t);
        t = echo_0_0(t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
      }
  }
  t = term_a_44;
  t = echo_0_0(t);
  t = term_b_44;
  q_106 = t;
  t = term_c_44;
  r_106 = t;
  t = term_d_44;
  t = w_11(q_106, r_106, t);
  t = reverse_acc_2_0(_id, w_13, t);
  t = map_1_0(x_13, t);
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_107 = NULL;
        t = t_164(t);
        d_107 = t;
        t = (ATerm) ATinsert(CheckATermList(d_107), term_g_44);
        t = echo_0_0(t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
      }
  }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL,e_6 = NULL;
  l_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_107);
  j_107 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_107);
  e_6 = t;
  t = SSLsetAnnotations(e_6, j_107);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_107 = NULL;
  g_107 = t;
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_107 = NULL,i_107 = NULL;
        t = term_j_42;
        h_107 = t;
        t = term_p_43;
        i_107 = t;
        t = term_q_43;
        t = w_11(h_107, i_107, t);
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        t = fetch_1_0(y_13, t);
      }
  }
  t = g_107;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  if(match_string(t, "-k"))
    {
      t = n_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_107;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL;
  o_107 = t;
  t = SSL_string_to_int(o_107);
  p_107 = t;
  t = term_j_44;
  q_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_44, p_107);
  t = z_11(q_107, p_107, t);
  t = o_107;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_k_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, b_14, c_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm s_107 = NULL;
  s_107 = t;
  if(match_string(t, "-S"))
    {
      t = s_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_107;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL;
  t = term_l_44;
  t_107 = t;
  t = term_n_20;
  u_107 = t;
  t = term_m_44;
  t = z_11(t_107, u_107, t);
  t = term_n_44;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_o_44;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
  v_107 = t;
  t = SSL_string_to_int(v_107);
  w_107 = t;
  t = term_l_44;
  x_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_44, w_107);
  t = z_11(x_107, w_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_107);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL;
  t = term_q_44;
  y_107 = t;
  t = term_c_31;
  z_107 = t;
  t = term_r_44;
  t = z_11(y_107, z_107, t);
  t = term_s_44;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_14, h_14, j_14, t);
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm x_44 = t;
        int y_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_14, l_14, m_14, t);
            LocalPopChoice(y_44);
          }
        else
          {
            t = x_44;
            t = Option_3_0(n_14, o_14, q_14, t);
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL;
  t = term_j_42;
  a_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_42, k_54, l_54);
  t = lookup_table_0_1(a_108, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(k_54, l_54, b_108, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_42, k_54, l_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
      t = term_c_31;
      t = g_0(t);
      h_108 = t;
      t = term_b_44;
      i_108 = t;
      t = term_c_44;
      j_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, h_108);
      t = x_11(i_108, j_108, h_108, t);
      _fail(t);
    }
  else
    {
      ATerm m_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_108 = ATgetFirst((ATermList) t);
          g_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_108;
      t = d_0(t);
      t = term_c_31;
      t = f_0(t);
      m_108 = t;
      t = (ATerm) ATinsert(CheckATermList(g_108), m_108);
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm o_108 = NULL;
  o_108 = t;
  if(match_string(t, "-o"))
    {
      t = o_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_108;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm p_108 = NULL,q_108 = NULL;
  p_108 = t;
  t = term_m_42;
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_42, p_108);
  t = z_11(q_108, p_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_108);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_z_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_14, s_14, t_14, t);
  return(t);
}
static ATerm x_11 (ATerm l_73, ATerm m_73, ATerm k_73, ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL;
  s_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_73, m_73);
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_45 = ATgetArgument(t, 0);
            ATerm e_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_73, m_73);
        t = w_11(l_73, m_73, t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = (ATerm) ATempty;
      }
  }
  t_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_73, m_73, (ATerm) ATinsert(CheckATermList(t_108), k_73));
  t = lookup_table_0_1(l_73, t);
  w_108 = t;
  t = (ATerm) ATinsert(CheckATermList(t_108), k_73);
  u_108 = t;
  t = w_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(m_73, u_108, v_108, t);
  t = s_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
      t = term_c_31;
      t = n_0(t);
      h_109 = t;
      t = term_b_44;
      i_109 = t;
      t = term_c_44;
      j_109 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_44, term_c_44, h_109);
      t = x_11(i_109, j_109, h_109, t);
      _fail(t);
    }
  else
    {
      ATerm n_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_109 = ATgetFirst((ATermList) t);
          e_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_109 = ATgetFirst((ATermList) t);
          g_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_109;
      t = j_0(t);
      t = f_109;
      t = l_0(t);
      n_109 = t;
      t = (ATerm) ATinsert(CheckATermList(g_109), n_109);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm p_109 = NULL;
  p_109 = t;
  if(match_string(t, "-i"))
    {
      t = p_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_109;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm q_109 = NULL,r_109 = NULL;
  q_109 = t;
  t = term_m_43;
  r_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, q_109);
  t = z_11(r_109, q_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_109);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_g_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_14, z_14, a_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_31;
  t = whoami_0_0(t);
  s_109 = t;
  t = term_z_16;
  u_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_45), s_109);
  v_109 = t;
  t = SSL_printnl(u_109, v_109);
  t = term_o_20;
  t_109 = t;
  t = SSL_exit(t_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL;
  t = term_j_42;
  w_109 = t;
  t = term_p_43;
  x_109 = t;
  t = term_q_43;
  t = w_11(w_109, x_109, t);
  return(t);
}
static ATerm r_11 (ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm l_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_57, k_57);
      LocalPopChoice(o_45);
    }
  else
    {
      t = l_45;
      t = SSL_addr(j_57, k_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_154 (ATerm), ATerm x_154 (ATerm), ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL;
  z_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_109;
      t = w_154(t);
    }
  else
    {
      ATerm e_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_110 = ATgetFirst((ATermList) t);
          b_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_110;
      t = foldr_2_0(w_154, x_154, t);
      e_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_110, e_110);
      t = x_154(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(b_39, c_39, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_110 = NULL,x_38 = NULL,y_38 = NULL;
  t = times_0_0(t);
  y_38 = t;
  t = SSL_explode_term(y_38);
  if(match_cons(t, sym__2))
    {
      ATerm q_45 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_38;
  t = foldr_2_0(d_15, e_15, t);
  h_110 = t;
  t = SSL_TicksToSeconds(h_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL;
  s_110 = t;
  if(match_cons(t, sym__2))
    {
      t_110 = ATgetArgument(t, 0);
      u_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_110;
        if((t_110 != t))
          {
            _fail(t);
          }
        t = s_110;
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        t = (ATerm) ATmakeAppl(sym__2, t_110, u_110);
        {
          ATerm u_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_110, u_110);
              LocalPopChoice(w_45);
            }
          else
            {
              t = u_45;
              t = SSL_gtr(t_110, u_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_110, u_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_141 (ATerm), ATerm t)
{
  ATerm y_110 = NULL;
  y_110 = t;
  {
    ATerm x_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL;
        t = term_j_42;
        b_111 = t;
        t = term_l_44;
        c_111 = t;
        t = term_b_46;
        t = w_11(b_111, c_111, t);
        a_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_111, term_o_20);
        t = geq_0_0(t);
        t = y_110;
        t = p_141(t);
        LocalPopChoice(z_45);
      }
    else
      {
        t = x_45;
        t = y_110;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,h_111 = NULL,i_111 = NULL;
  t = run_time_0_0(t);
  e_111 = t;
  t = term_c_31;
  t = whoami_0_0(t);
  f_111 = t;
  t = term_z_16;
  h_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_46), e_111), term_c_46), f_111);
  i_111 = t;
  t = SSL_printnl(h_111, i_111);
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_46), e_111), term_c_46), f_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_111 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_20;
  j_111 = t;
  t = SSL_exit(j_111);
  return(t);
}
static ATerm a_12 (ATerm a_78, ATerm b_78, ATerm c_78, ATerm t)
{
  ATerm k_111 = NULL;
  t = SSL_hashtable_put(c_78, a_78, b_78);
  k_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_74, ATerm t)
{
  ATerm t_111 = NULL;
  t = table_hashtable_0_0(t);
  t_111 = t;
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL;
        t = t_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12(x_74, n_39, t);
        LocalPopChoice(f_46);
      }
    else
      {
        t = e_46;
        {
          ATerm s_39 = NULL;
          t = x_74;
          t = table_create_0_0(t);
          t = t_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(x_74, s_39, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_78, ATerm j_78, ATerm t)
{
  ATerm w_111 = NULL;
  t = SSL_hashtable_create(i_78, j_78);
  w_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_111);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL,b_112 = NULL,c_112 = NULL;
  x_111 = t;
  t = term_g_46;
  b_112 = t;
  t = term_j_46;
  c_112 = t;
  t = x_111;
  t = new_hashtable_0_2(b_112, c_112, t);
  y_111 = t;
  t = x_111;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(x_111, y_111, z_111, t);
  t = x_111;
  return(t);
}
static ATerm t_11 (ATerm f_78, ATerm g_78, ATerm t)
{
  ATerm d_112 = NULL;
  t = SSL_hashtable_remove(g_78, f_78);
  d_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_112);
  return(t);
}
static ATerm u_11 (ATerm k_78, ATerm t)
{
  ATerm e_112 = NULL;
  t = SSL_hashtable_destroy(k_78);
  e_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_112 = NULL;
  t = SSL_table_hashtable();
  f_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL;
  g_112 = t;
  t = table_hashtable_0_0(t);
  h_112 = t;
  t = lookup_table_0_1(g_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(j_112, t);
  t = h_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(g_112, i_112, t);
  t = g_112;
  return(t);
}
ATerm fetch_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  static ATerm g_113 (ATerm t);
  static ATerm g_113 (ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
    d_113 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_113 = ATgetFirst((ATermList) t);
        f_113 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_46 = t;
      int q_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_39 = NULL,a_40 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(d_113);
          x_39 = t;
          t = e_113;
          t = s_144(t);
          a_40 = t;
          t = (ATerm) ATinsert(CheckATermList(f_113), a_40);
          h_6 = t;
          t = SSLsetAnnotations(h_6, x_39);
          LocalPopChoice(q_46);
        }
      else
        {
          t = l_46;
          {
            ATerm i_40 = NULL,l_40 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(d_113);
            i_40 = t;
            t = f_113;
            t = g_113(t);
            l_40 = t;
            t = (ATerm) ATinsert(CheckATermList(l_40), e_113);
            i_6 = t;
            t = SSLsetAnnotations(i_6, i_40);
          }
        }
    }
    return(t);
  }
  t = g_113(t);
  return(t);
}
static ATerm b_12 (ATerm d_78, ATerm e_78, ATerm t)
{
  t = SSL_hashtable_get(e_78, d_78);
  return(t);
}
static ATerm w_11 (ATerm e_75, ATerm f_75, ATerm t)
{
  ATerm j_113 = NULL;
  t = lookup_table_0_1(e_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(f_75, j_113, t);
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
  ATerm l_113 = NULL,m_113 = NULL;
  t = term_s_46;
  l_113 = t;
  t = term_c_31;
  m_113 = t;
  t = term_u_46;
  t = z_11(l_113, m_113, t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  t = term_s_46;
  p_113 = t;
  t = term_c_31;
  q_113 = t;
  t = term_u_46;
  t = z_11(p_113, q_113, t);
  t = term_w_46;
  n_113 = t;
  t = term_c_31;
  o_113 = t;
  t = term_x_46;
  t = z_11(n_113, o_113, t);
  t = term_a_47;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_c_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_15, h_15, i_15, t);
      LocalPopChoice(e_47);
    }
  else
    {
      t = d_47;
      t = Option_3_0(l_15, m_15, n_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_164 (ATerm), ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,a_114 = NULL,b_114 = NULL,m_6 = NULL;
  v_113 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_47;
        t = n_164(t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
      }
  }
  t = v_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_113 = ATgetFirst((ATermList) t);
      y_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_113);
  w_113 = t;
  t = term_p_43;
  b_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_43, x_113);
  t = z_11(b_114, x_113, t);
  t = y_113;
  {
    static ATerm l_114 (ATerm t);
    static ATerm l_114 (ATerm t)
    {
      ATerm o_47 = t;
      int p_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_47 = t;
          int r_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_114 = NULL;
              e_114 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_114;
              LocalPopChoice(r_47);
            }
          else
            {
              t = q_47;
              t = n_164(t);
              t = Cons_2_0(_id, l_114, t);
            }
          LocalPopChoice(p_47);
        }
      else
        {
          t = o_47;
          {
            ATerm h_114 = NULL,i_114 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_114 = ATgetFirst((ATermList) t);
                i_114 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_114), (ATerm) ATmakeAppl(sym_Undefined_1, h_114));
          }
        }
      return(t);
    }
    t = l_114(t);
  }
  a_114 = t;
  t = (ATerm) ATinsert(CheckATermList(a_114), (ATerm) ATmakeAppl(sym_Program_1, x_113));
  m_6 = t;
  t = SSLsetAnnotations(m_6, w_113);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm y_114 = NULL;
  y_114 = t;
  if(match_string(t, "--help"))
    {
      t = y_114;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_114;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_114;
        }
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm z_114 = NULL,a_115 = NULL;
  t = term_s_47;
  z_114 = t;
  t = term_c_31;
  a_115 = t;
  t = term_t_47;
  t = z_11(z_114, a_115, t);
  t = term_u_47;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm k_164 (ATerm), ATerm l_164 (ATerm), ATerm m_164 (ATerm), ATerm t)
{
  ATerm q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL;
  s_114 = t;
  t = term_b_44;
  t_114 = t;
  t = term_w_47;
  t = lookup_table_0_1(t_114, t);
  x_114 = t;
  t = term_c_44;
  u_114 = t;
  t = (ATerm) ATempty;
  v_114 = t;
  t = x_114;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(u_114, v_114, w_114, t);
  t = s_114;
  {
    static ATerm o_15 (ATerm t);
    static ATerm o_15 (ATerm t)
    {
      ATerm x_47 = t;
      int y_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_164(t);
          LocalPopChoice(y_47);
        }
      else
        {
          t = x_47;
          {
            ATerm z_47 = t;
            int a_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_15, q_15, r_15, t);
                LocalPopChoice(a_48);
              }
            else
              {
                t = z_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_15, t);
  }
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_115 = NULL;
        l_115 = t;
        {
          ATerm d_48 = t;
          int e_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_40 = NULL;
              t = l_115;
              {
                ATerm f_48 = t;
                int g_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_40 = NULL,u_40 = NULL;
                    t = term_j_42;
                    t_40 = t;
                    t = term_s_47;
                    u_40 = t;
                    t = term_h_48;
                    t = w_11(t_40, u_40, t);
                    LocalPopChoice(g_48);
                  }
                else
                  {
                    t = f_48;
                    t = fetch_1_0(u_15, t);
                  }
              }
              t = l_115;
              t = l_164(t);
              t = term_n_20;
              s_40 = t;
              t = SSL_exit(s_40);
              LocalPopChoice(e_48);
            }
          else
            {
              t = d_48;
              {
                ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
                t = term_j_42;
                z_40 = t;
                t = term_s_46;
                a_41 = t;
                t = term_i_48;
                t = w_11(z_40, a_41, t);
                t = l_115;
                t = m_164(t);
                t = term_n_20;
                y_40 = t;
                t = SSL_exit(y_40);
              }
            }
        }
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        {
          ATerm l_48 = t;
          int o_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
              static ATerm d_16 (ATerm t);
              static ATerm d_16 (ATerm t)
              {
                ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,o_6 = NULL;
                r_115 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_115 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_115);
                p_115 = t;
                t = q_115;
                if(((q_114 != NULL) && (q_114 != t)))
                  _fail(t);
                else
                  q_114 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_115);
                o_6 = t;
                t = SSLsetAnnotations(o_6, p_115);
                return(t);
              }
              t = fetch_1_0(d_16, t);
              t = term_z_16;
              n_115 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_114)), term_p_48);
              o_115 = t;
              t = SSL_printnl(n_115, o_115);
              t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_114)), term_p_48));
              t = l_164(t);
              t = term_o_20;
              m_115 = t;
              t = SSL_exit(m_115);
              LocalPopChoice(o_48);
            }
          else
            {
              t = l_48;
            }
        }
      }
  }
  r_114 = t;
  t = term_b_44;
  t = table_destroy_0_0(t);
  t = r_114;
  return(t);
}
ATerm option_wrap_5_0 (ATerm n_162 (ATerm), ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm r_162 (ATerm), ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL;
  t = parse_options_3_0(n_162, o_162, p_162, t);
  w_115 = t;
  t = term_s_48;
  t = table_create_0_0(t);
  t = term_s_48;
  x_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_48, term_t_48, w_115);
  t = lookup_table_0_1(x_115, t);
  a_116 = t;
  t = term_t_48;
  y_115 = t;
  t = a_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(y_115, w_115, z_115, t);
  t = w_115;
  t = q_162(t);
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_162(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm z_48 = t;
  int b_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_49);
    }
  else
    {
      t = z_48;
      {
        ATerm c_49 = t;
        int d_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_49);
          }
        else
          {
            t = c_49;
            {
              ATerm e_49 = t;
              int f_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_16, p_16, r_16, t);
                  LocalPopChoice(f_49);
                }
              else
                {
                  t = e_49;
                  {
                    ATerm g_49 = t;
                    int h_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_49);
                      }
                    else
                      {
                        t = g_49;
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
static ATerm l_16 (ATerm t)
{
  t = input_1_0(t_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm c_116 = NULL,d_116 = NULL;
  t = term_r_42;
  c_116 = t;
  t = term_c_31;
  d_116 = t;
  t = term_i_49;
  t = z_11(c_116, d_116, t);
  t = term_j_49;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_k_49;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = output_1_0(u_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,a_7 = NULL,x_6 = NULL;
  m_116 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_116);
  f_116 = t;
  t = g_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_116 = ATgetFirst((ATermList) t);
      j_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_116);
  h_116 = t;
  t = j_116;
  t = Cons_2_0(x_16, y_16, t);
  k_116 = t;
  t = (ATerm) ATinsert(CheckATermList(k_116), i_116);
  x_6 = t;
  t = SSLsetAnnotations(x_6, h_116);
  l_116 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_116);
  a_7 = t;
  t = SSLsetAnnotations(a_7, f_116);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,v_6 = NULL;
  q_116 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_116);
  n_116 = t;
  t = o_116;
  t = all_defs_0_0(t);
  p_116 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_116);
  v_6 = t;
  t = SSLsetAnnotations(v_6, n_116);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(e_16, default_system_usage_0_0, default_system_about_0_0, _id, l_16, t);
  return(t);
}
