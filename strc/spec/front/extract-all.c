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
static ATerm term_d_49;
static ATerm term_c_49;
static ATerm term_b_49;
static ATerm term_m_48;
static ATerm term_l_48;
static ATerm term_k_48;
static ATerm term_h_48;
static ATerm term_f_48;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_l_47;
static ATerm term_k_47;
static ATerm term_j_47;
static ATerm term_x_46;
static ATerm term_q_46;
static ATerm term_l_46;
static ATerm term_j_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_e_46;
static ATerm term_d_46;
static ATerm term_a_46;
static ATerm term_y_45;
static ATerm term_s_45;
static ATerm term_r_45;
static ATerm term_q_45;
static ATerm term_x_44;
static ATerm term_w_44;
static ATerm term_r_44;
static ATerm term_m_44;
static ATerm term_l_44;
static ATerm term_k_44;
static ATerm term_j_44;
static ATerm term_i_44;
static ATerm term_h_44;
static ATerm term_g_44;
static ATerm term_f_44;
static ATerm term_e_44;
static ATerm term_d_44;
static ATerm term_c_44;
static ATerm term_z_43;
static ATerm term_w_43;
static ATerm term_v_43;
static ATerm term_u_43;
static ATerm term_t_43;
static ATerm term_o_43;
static ATerm term_j_43;
static ATerm term_i_43;
static ATerm term_h_43;
static ATerm term_g_43;
static ATerm term_f_43;
static ATerm term_c_43;
static ATerm term_b_43;
static ATerm term_l_42;
static ATerm term_k_42;
static ATerm term_e_42;
static ATerm term_c_42;
static ATerm term_b_42;
static ATerm term_a_42;
static ATerm term_v_41;
static ATerm term_d_41;
static ATerm term_c_41;
static ATerm term_n_39;
static ATerm term_m_39;
static ATerm term_g_39;
static ATerm term_a_39;
static ATerm term_t_38;
static ATerm term_s_38;
static ATerm term_t_35;
static ATerm term_l_35;
static ATerm term_g_34;
static ATerm term_s_31;
static ATerm term_r_31;
static ATerm term_a_31;
static ATerm term_z_30;
static ATerm term_x_30;
static ATerm term_m_30;
static ATerm term_i_30;
static ATerm term_h_30;
static ATerm term_k_25;
static ATerm term_v_24;
static ATerm term_r_24;
static ATerm term_g_24;
static ATerm term_d_24;
static ATerm term_c_24;
static ATerm term_a_24;
static ATerm term_w_23;
static ATerm term_v_23;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_b_22;
static ATerm term_a_22;
static ATerm term_z_21;
static ATerm term_y_21;
static ATerm term_w_21;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_i_20;
static ATerm term_b_20;
static ATerm term_r_17;
static ATerm term_z_16;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_t_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Op_2, term_y_21, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATempty);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATempty);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_h_30, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_b_42);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_k_42);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_f_43);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_i_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym__2, term_u_43, term_v_43);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym__2, term_e_44, term_b_20);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_j_44, term_x_30);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_e_44);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym__2, term_d_46, term_x_30);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_i_46, term_x_30);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_j_47, term_x_30);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, (ATerm) ATempty);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_j_47);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_d_46);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym__2, term_k_42, term_x_30);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm l_9 (ATerm r_26, ATerm t_26, ATerm u_26, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm m_130 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm r_9 (ATerm i_41, ATerm h_41, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm m_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_148 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm l_150 (ATerm), ATerm t);
static ATerm s_52 (ATerm y_44, ATerm c_45, ATerm t);
static ATerm v_52 (ATerm l_45, ATerm m_45, ATerm o_45, ATerm t);
static ATerm w_52 (ATerm f_46, ATerm g_46, ATerm t);
static ATerm x_52 (ATerm p_46, ATerm r_46, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm j_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm e_10 (ATerm f_35, ATerm g_35, ATerm h_35, ATerm t);
static ATerm n_64 (ATerm b_64, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm s_132 (ATerm), ATerm t);
static ATerm i_10 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_131 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm v_135 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm j_10 (ATerm v_56, ATerm w_56, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm copy_1_0 (ATerm r_154 (ATerm), ATerm t);
static ATerm k_10 (ATerm n_25, ATerm o_25, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm z_82 (ATerm a_80, ATerm b_80, ATerm c_80, ATerm e_80, ATerm t);
static ATerm a_83 (ATerm r_81, ATerm s_81, ATerm t_81, ATerm u_81, ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_143 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm b_139 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm g_133 (ATerm), ATerm t);
static ATerm s_9 (ATerm w_72, ATerm x_72, ATerm t);
ATerm end_scope_1_0 (ATerm v_166 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_166 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_166 (ATerm), ATerm x_166 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm w_9 (ATerm a_28, ATerm b_28, ATerm f_28, ATerm c_28, ATerm e_28, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm z_84 (ATerm l_83, ATerm o_83, ATerm p_83, ATerm q_83, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_144 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_87 (ATerm n_86, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_10 (ATerm z_150 (ATerm), ATerm t_67, ATerm s_67, ATerm t);
ATerm genzip_4_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm v_10 (ATerm g_878, ATerm l_878, ATerm s_85, ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm r_91 (ATerm j_90, ATerm k_90, ATerm l_90, ATerm t);
static ATerm h_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm x_10 (ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm r_166 (ATerm), ATerm x_88, ATerm u_88, ATerm c_89, ATerm y_88, ATerm v_88, ATerm w_88, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm r_166 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm q_33 (ATerm r_32, ATerm a_33, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm a_11 (ATerm y_166 (ATerm), ATerm v_89, ATerm t_89, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm c_11 (ATerm c_73, ATerm d_73, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm d_11 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm z_67, ATerm y_67, ATerm t);
static ATerm e_11 (ATerm e_151 (ATerm), ATerm v_67, ATerm u_67, ATerm t);
ATerm foldr_3_0 (ATerm d_154 (ATerm), ATerm e_154 (ATerm), ATerm f_154 (ATerm), ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t);
static ATerm f_11 (ATerm u_49, ATerm v_49, ATerm t);
static ATerm g_11 (ATerm a_48, ATerm b_48, ATerm t);
static ATerm i_11 (ATerm d_139 (ATerm), ATerm l_360, ATerm g_48, ATerm t);
static ATerm h_11 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm output_1_0 (ATerm y_161 (ATerm), ATerm t);
static ATerm v_102 (ATerm p_102, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_11 (ATerm c_48, ATerm t);
static ATerm k_11 (ATerm c_67, ATerm d_67, ATerm t);
static ATerm l_11 (ATerm w_49, ATerm x_49, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_104 (ATerm f_103, ATerm t);
static ATerm h_104 (ATerm j_103, ATerm k_103, ATerm l_103, ATerm t);
static ATerm i_104 (ATerm t_103, ATerm u_103, ATerm v_103, ATerm t);
static ATerm m_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_161 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_143 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_163 (ATerm), ATerm y_163 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_11 (ATerm q_53, ATerm r_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_11 (ATerm r_72, ATerm s_72, ATerm q_72, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_11 (ATerm p_56, ATerm q_56, ATerm t);
ATerm foldr_2_0 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_140 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_11 (ATerm g_77, ATerm h_77, ATerm i_77, ATerm t);
ATerm lookup_table_0_1 (ATerm d_74, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_77, ATerm p_77, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_11 (ATerm l_77, ATerm m_77, ATerm t);
static ATerm q_11 (ATerm q_77, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_143 (ATerm), ATerm t);
static ATerm x_11 (ATerm j_77, ATerm k_77, ATerm t);
static ATerm s_11 (ATerm k_74, ATerm l_74, ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_163 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm parse_options_3_0 (ATerm p_163 (ATerm), ATerm q_163 (ATerm), ATerm r_163 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm s_161 (ATerm), ATerm t_161 (ATerm), ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm w_161 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm l_9 (ATerm r_26, ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm c_0 = NULL,s_0 = NULL;
  t = term_t_16;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), u_26), term_w_16), t_26), term_v_16), r_26), term_u_16);
  s_0 = t;
  t = SSL_printnl(c_0, s_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), u_26), term_w_16), t_26), term_v_16), r_26), term_u_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if(((ATgetType(a_17) != AT_INT) || (ATgetInt((ATermInt) a_17) != 0)))
        _fail(t);
      {
        ATerm b_17 = ATgetArgument(t, 1);
        if(((ATgetType(b_17) != AT_INT) || (ATgetInt((ATermInt) b_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL;
  y_1 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_2;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = f_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm e_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL;
        t = a_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_17 = ATgetFirst((ATermList) t);
            ATerm k_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
              {
                ATerm n_17 = ATgetFirst((ATermList) k_17);
                ATerm o_17 = (ATerm) ATgetNext((ATermList) k_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm q_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_17;
            }
        }
        t = term_t_16;
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_r_17);
        v_0 = t;
        t = SSL_printnl(u_0, v_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_r_17);
        t = giving_up_0_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = e_17;
        {
          ATerm b_1 = NULL,c_1 = NULL;
          t = a_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_17 = ATgetFirst((ATermList) t);
              if(match_cons(s_17, sym__2))
                {
                  b_1 = ATgetArgument(s_17, 0);
                  c_1 = ATgetArgument(s_17, 1);
                }
              else
                _fail(t);
              {
                ATerm t_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_2, (ATerm) ATmakeAppl(sym__2, b_1, c_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      {
        ATerm o_1 = NULL,r_1 = NULL,t_1 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(y_7);
        o_1 = t;
        t = z_7;
        t = i_130(t);
        r_1 = t;
        t = a_8;
        t = i_130(t);
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_1, t_1);
        d_1 = t;
        t = SSLsetAnnotations(d_1, o_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_7 = ATgetArgument(t, 0);
          a_8 = ATgetArgument(t, 1);
          x_7 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(y_7);
            m_2 = t;
            t = z_7;
            t = k_130(t);
            q_2 = t;
            t = a_8;
            t = k_130(t);
            r_2 = t;
            t = x_7;
            t = i_130(t);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_2, r_2, s_2);
            e_1 = t;
            t = SSLsetAnnotations(e_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_7 = ATgetArgument(t, 0);
              a_8 = ATgetArgument(t, 1);
              x_7 = ATgetArgument(t, 2);
              w_7 = ATgetArgument(t, 3);
              {
                ATerm u_5 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(y_7);
                u_5 = t;
                t = z_7;
                t = k_130(t);
                o_6 = t;
                t = a_8;
                t = k_130(t);
                p_6 = t;
                t = x_7;
                t = k_130(t);
                q_6 = t;
                t = w_7;
                t = i_130(t);
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_6, p_6, q_6, s_6);
                g_1 = t;
                t = SSLsetAnnotations(g_1, u_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_7 = ATgetArgument(t, 0);
                  a_8 = ATgetArgument(t, 1);
                  x_7 = ATgetArgument(t, 2);
                  w_7 = ATgetArgument(t, 3);
                  {
                    ATerm k_7 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,i_1 = NULL;
                    t = SSLgetAnnotations(y_7);
                    k_7 = t;
                    t = z_7;
                    t = k_130(t);
                    c_8 = t;
                    t = a_8;
                    t = k_130(t);
                    d_8 = t;
                    t = x_7;
                    t = k_130(t);
                    e_8 = t;
                    t = w_7;
                    t = i_130(t);
                    g_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_8, d_8, e_8, g_8);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, k_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_7 = ATgetArgument(t, 0);
                      a_8 = ATgetArgument(t, 1);
                      x_7 = ATgetArgument(t, 2);
                      {
                        ATerm x_8 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,j_1 = NULL;
                        t = SSLgetAnnotations(y_7);
                        x_8 = t;
                        t = z_7;
                        t = k_130(t);
                        d_9 = t;
                        t = a_8;
                        t = k_130(t);
                        e_9 = t;
                        t = x_7;
                        t = k_130(t);
                        f_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_9, e_9, f_9);
                        j_1 = t;
                        t = SSLsetAnnotations(j_1, x_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          z_7 = ATgetArgument(t, 0);
                          a_8 = ATgetArgument(t, 1);
                          {
                            ATerm p_9 = NULL,u_9 = NULL,v_9 = NULL,n_1 = NULL;
                            t = SSLgetAnnotations(y_7);
                            p_9 = t;
                            t = z_7;
                            t = k_130(t);
                            u_9 = t;
                            t = a_8;
                            t = i_130(t);
                            v_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_9, v_9);
                            n_1 = t;
                            t = SSLsetAnnotations(n_1, p_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              z_7 = ATgetArgument(t, 0);
                              a_8 = ATgetArgument(t, 1);
                              {
                                ATerm f_10 = NULL,l_10 = NULL,m_10 = NULL,s_1 = NULL;
                                t = SSLgetAnnotations(y_7);
                                f_10 = t;
                                t = z_7;
                                t = k_130(t);
                                l_10 = t;
                                t = a_8;
                                t = i_130(t);
                                m_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_10, m_10);
                                s_1 = t;
                                t = SSLsetAnnotations(s_1, f_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  z_7 = ATgetArgument(t, 0);
                                  a_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_10 = NULL,b_11 = NULL,o_11 = NULL,u_1 = NULL;
                                    t = SSLgetAnnotations(y_7);
                                    w_10 = t;
                                    t = z_7;
                                    t = k_130(t);
                                    b_11 = t;
                                    t = a_8;
                                    t = i_130(t);
                                    o_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_11, o_11);
                                    u_1 = t;
                                    t = SSLsetAnnotations(u_1, w_10);
                                  }
                                }
                              else
                                {
                                  ATerm d_12 = NULL,q_12 = NULL,r_12 = NULL,w_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      z_7 = ATgetArgument(t, 0);
                                      a_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_7);
                                  d_12 = t;
                                  t = z_7;
                                  t = k_130(t);
                                  q_12 = t;
                                  t = a_8;
                                  t = i_130(t);
                                  r_12 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, q_12, r_12);
                                  w_1 = t;
                                  t = SSLsetAnnotations(w_1, d_12);
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
ATerm dynrule_sargs_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,k_12 = NULL;
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          h_12 = ATgetArgument(t, 0);
          {
            ATerm w_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_17);
      t = h_12;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_12;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_17 = ATgetArgument(t, 0);
          k_12 = ATgetArgument(t, 1);
          {
            ATerm y_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_12;
    }
  else
    {
      t = u_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm b_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_18);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm g_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
        else
          {
            t = z_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm h_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = h_12;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_12;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm i_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm l_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
      }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm c_13 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_13 = ATgetArgument(t, 0);
          {
            ATerm o_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_18);
      t = c_13;
    }
  else
    {
      t = m_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_13;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_13 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = s_13;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm v_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = v_12;
      t = map_1_0(i_0, t);
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm w_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm x_18 = ATgetArgument(t, 2);
          }
          {
            ATerm z_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_12;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
          {
            ATerm e_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = y_13;
    }
  else
    {
      t = a_19;
      if(match_cons(t, sym_SDefT_4))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
          {
            ATerm h_19 = ATgetArgument(t, 2);
          }
          {
            ATerm i_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_13;
    }
  return(t);
}
static ATerm r_9 (ATerm i_41, ATerm h_41, ATerm t)
{
  t = i_41;
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(f_1, z_13, a_14, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      if((b_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm l_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(l_1, l_14, t_14, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      if((u_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      if((q_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm m_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_148 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t);
  static ATerm r_15 (ATerm t)
  {
    ATerm x_14 = NULL,y_14 = NULL,a_15 = NULL;
    a_15 = t;
    {
      ATerm k_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_148(t);
          LocalPopChoice(l_19);
        }
      else
        {
          t = k_19;
          t = (ATerm) ATempty;
        }
    }
    x_14 = t;
    t = a_15;
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_15 = NULL,p_13 = NULL,q_13 = NULL;
          t = l_148(t);
          b_15 = t;
          t = a_15;
          {
            static ATerm x_0 (ATerm t);
            static ATerm x_0 (ATerm t)
            {
              ATerm i_13 = NULL;
              t = r_15(t);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_13, b_15);
              t = q_10(n_148, i_13, b_15, t);
              return(t);
            }
            t = m_148(x_0, r_15, y_0, t);
          }
          q_13 = t;
          t = SSL_explode_term(q_13);
          if(match_cons(t, sym__2))
            {
              ATerm o_19 = ATgetArgument(t, 0);
              p_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_13;
          t = foldr_3_0(z_0, a_1, _id, t);
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          {
            ATerm e_14 = NULL;
            t = SSL_explode_term(a_15);
            if(match_cons(t, sym__2))
              {
                ATerm p_19 = ATgetArgument(t, 0);
                e_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_14;
            t = foldr_3_0(h_1, k_1, r_15, t);
          }
        }
    }
    y_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_14, y_14);
    t = e_11(m_1, x_14, y_14, t);
    return(t);
  }
  t = r_15(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,c_16 = NULL,f_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(match_cons(r_19, sym_SVar_1))
        {
          x_15 = ATgetArgument(r_19, 0);
        }
      else
        _fail(t);
      y_15 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_15;
  t = foldr_3_0(x_1, z_1, b_2, t);
  f_16 = t;
  t = c_16;
  t = foldr_3_0(d_2, g_2, h_2, t);
  j_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_15, (ATerm) ATmakeAppl(sym__2, f_16, j_16)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL,g_17 = NULL,l_17 = NULL,m_17 = NULL,p_17 = NULL;
      d_17 = t;
      if(match_cons(t, sym_Let_2))
        {
          g_17 = ATgetArgument(t, 0);
          l_17 = ATgetArgument(t, 1);
          t = d_17;
          t = r_9(g_17, l_17, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              g_17 = ATgetArgument(t, 0);
              l_17 = ATgetArgument(t, 1);
              m_17 = ATgetArgument(t, 2);
              t = l_17;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  g_17 = ATgetArgument(t, 0);
                  l_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, g_17);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_17 = ATgetArgument(t, 0);
                      l_17 = ATgetArgument(t, 1);
                      m_17 = ATgetArgument(t, 2);
                      p_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_17;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(match_cons(y_19, sym__2))
        {
          w_19 = ATgetArgument(y_19, 0);
          {
            ATerm z_19 = ATgetArgument(y_19, 1);
          }
        }
      else
        _fail(t);
      if((w_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(m_16, r_16, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_16 = NULL,c_17 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(x_16, c_17, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_18 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_18 = ATgetArgument(t, 0);
          {
            ATerm n_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_20);
      t = f_18;
    }
  else
    {
      t = l_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_18;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm j_19 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_19 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = j_19;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_19;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = map_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm q_19 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_19 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_20);
      t = q_19;
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(p_1, q_1, sboundin_3_0, v_1, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm l_150 (ATerm), ATerm t)
{
  static ATerm i_42 (ATerm t);
  static ATerm i_42 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,z_2 = NULL;
        t = l_150(t);
        o_41 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_41 = ATgetFirst((ATermList) t);
            m_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_41);
        j_41 = t;
        t = m_41;
        t = Cons_2_0(_id, i_42, t);
        n_41 = t;
        t = (ATerm) ATinsert(CheckATermList(n_41), l_41);
        z_2 = t;
        t = SSLsetAnnotations(z_2, j_41);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          ATerm d_42 = NULL,f_42 = NULL,g_42 = NULL;
          g_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_42 = ATgetFirst((ATermList) t);
              f_42 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm f_17 = NULL,j_17 = NULL,a_3 = NULL;
                t = SSLgetAnnotations(g_42);
                f_17 = t;
                t = f_42;
                t = i_42(t);
                j_17 = t;
                t = (ATerm) ATinsert(CheckATermList(j_17), d_42);
                a_3 = t;
                t = SSLsetAnnotations(a_3, f_17);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_42;
            }
        }
      }
    return(t);
  }
  t = i_42(t);
  return(t);
}
static ATerm s_52 (ATerm y_44, ATerm c_45, ATerm t)
{
  t = y_44;
  {
    ATerm a_21 = t;
    if((PushChoice() == 0))
      {
        ATerm f_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,d_3 = NULL;
        j_45 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_45 = ATgetFirst((ATermList) t);
            i_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_45);
        f_45 = t;
        t = i_45;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_45), g_45);
        d_3 = t;
        t = SSLsetAnnotations(d_3, f_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, y_44);
  return(t);
}
static ATerm v_52 (ATerm l_45, ATerm m_45, ATerm o_45, ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t = SSL_explode_string(l_45);
  t = escape_chars_1_0(n_2, t);
  u_45 = t;
  t = SSL_implode_string(u_45);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, t_45, m_45);
  return(t);
}
static ATerm w_52 (ATerm f_46, ATerm g_46, ATerm t)
{
  t = f_46;
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,e_3 = NULL;
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
        e_3 = t;
        t = SSLsetAnnotations(e_3, k_46);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_21, f_46);
  return(t);
}
static ATerm x_52 (ATerm p_46, ATerm r_46, ATerm t)
{
  ATerm u_46 = NULL;
  t = p_46;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_h_21;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_i_21;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_j_21;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_k_21;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_l_21;
                      }
                  }
              }
          }
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm a_47 = NULL;
          t = SSL_explode_string(p_46);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(m_21) != AT_INT) || (ATgetInt((ATermInt) m_21) != 39)))
                _fail(t);
              {
                ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
                  {
                    a_47 = ATgetFirst((ATermList) n_21);
                    {
                      ATerm o_21 = (ATerm) ATgetNext((ATermList) n_21);
                      if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
                        {
                          ATerm p_21 = ATgetFirst((ATermList) o_21);
                          if(((ATgetType(p_21) != AT_INT) || (ATgetInt((ATermInt) p_21) != 39)))
                            _fail(t);
                          {
                            ATerm q_21 = (ATerm) ATgetNext((ATermList) o_21);
                            if(((ATgetType(q_21) != AT_LIST) || !(ATisEmpty(q_21))))
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
          t = a_47;
        }
      }
  }
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, u_46);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm x_45 = NULL,z_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_45 = ATgetFirst((ATermList) t);
      z_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_45;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_45), term_s_21), term_r_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_45), term_r_21), term_r_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_45), term_t_21), term_r_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_45), term_u_21), term_r_21);
            }
        }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_18 = ATgetFirst((ATermList) t);
      k_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_18;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(k_18), term_s_21), term_r_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(k_18), term_r_21), term_r_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_18), term_t_21), term_r_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_18), term_u_21), term_r_21);
            }
        }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, r_48), q_48));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, u_48), t_48));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  if(match_cons(t, sym__2))
    {
      p_51 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, q_51), p_51));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, t_51), s_51));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,y_18 = NULL;
  c_52 = t;
  t = SSL_explode_term(c_52);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            d_52 = ATgetFirst((ATermList) d_22);
            {
              ATerm f_22 = (ATerm) ATgetNext((ATermList) d_22);
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
      ATerm g_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_22 = ATgetArgument(t, 1);
        if(((ATgetType(h_22) == AT_LIST) && !(ATisEmpty(h_22))))
          {
            ATerm i_22 = ATgetFirst((ATermList) h_22);
            ATerm j_22 = (ATerm) ATgetNext((ATermList) h_22);
            if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
              {
                y_18 = ATgetFirst((ATermList) j_22);
                {
                  ATerm k_22 = (ATerm) ATgetNext((ATermList) j_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, y_18), d_52));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm b_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,m_47 = NULL,p_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      m_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
      {
        ATerm c_18 = NULL,e_18 = NULL;
        t = SSL_explode_string(m_47);
        t = escape_chars_1_0(o_2, t);
        e_18 = t;
        t = SSL_implode_string(e_18);
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_18), p_47);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          m_47 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, m_47));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              m_47 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_47));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  m_47 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_47));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      m_47 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_47));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          m_47 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_47), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              m_47 = ATgetArgument(t, 0);
                              p_47 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_47), p_47);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  m_47 = ATgetArgument(t, 0);
                                  p_47 = ATgetArgument(t, 1);
                                  {
                                    static ATerm p_2 (ATerm t);
                                    static ATerm p_2 (ATerm t)
                                    {
                                      t = p_47;
                                      return(t);
                                    }
                                    t = m_47;
                                    t = foldr_2_0(p_2, t_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      m_47 = ATgetArgument(t, 0);
                                      t = m_47;
                                      t = foldr_2_0(u_2, v_2, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          m_47 = ATgetArgument(t, 0);
                                          p_47 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_d_21, (ATerm) ATinsert(CheckATermList(p_47), m_47));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              m_47 = ATgetArgument(t, 0);
                                              t = m_47;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  e_47 = ATgetFirst((ATermList) t);
                                                  f_47 = (ATerm) ATgetNext((ATermList) t);
                                                  t = f_47;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm l_22 = t;
                                                      int m_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_52(m_47, i_47, t);
                                                          LocalPopChoice(m_22);
                                                        }
                                                      else
                                                        {
                                                          t = l_22;
                                                          t = e_47;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = s_52(m_47, i_47, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = s_52(m_47, i_47, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_n_22;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      m_47 = ATgetArgument(t, 0);
                                                      p_47 = ATgetArgument(t, 1);
                                                      t = p_47;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          b_47 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_p_22, (ATerm) ATinsert(ATinsert(ATempty, b_47), m_47));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          m_47 = ATgetArgument(t, 0);
                                                          t = m_47;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              m_47 = ATgetArgument(t, 0);
                                                              p_47 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, m_47, p_47, term_q_22);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  m_47 = ATgetArgument(t, 0);
                                                                  p_47 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, m_47, p_47, term_q_22);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      m_47 = ATgetArgument(t, 0);
                                                                      p_47 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, m_47, (ATerm)ATempty, p_47);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          m_47 = ATgetArgument(t, 0);
                                                                          p_47 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, p_47, m_47);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              m_47 = ATgetArgument(t, 0);
                                                                              p_47 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, m_47, p_47, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, m_47, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      m_47 = ATgetArgument(t, 0);
                                                                                      p_47 = ATgetArgument(t, 1);
                                                                                      h_47 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_47, p_47, (ATerm)ATempty, h_47);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          m_47 = ATgetArgument(t, 0);
                                                                                          p_47 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, m_47, (ATerm)ATempty, (ATerm)ATempty, p_47);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              m_47 = ATgetArgument(t, 0);
                                                                                              p_47 = ATgetArgument(t, 1);
                                                                                              h_47 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, m_47, p_47, (ATerm)ATempty, h_47);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                                  p_47 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, m_47, (ATerm)ATempty, (ATerm)ATempty, p_47);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      m_47 = ATgetArgument(t, 0);
                                                                                                      p_47 = ATgetArgument(t, 1);
                                                                                                      h_47 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, m_47, p_47, (ATerm)ATempty, h_47);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          m_47 = ATgetArgument(t, 0);
                                                                                                          p_47 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, m_47, (ATerm)ATempty, (ATerm)ATempty, p_47);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm r_22 = t;
                                                                                                          int t_22 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm u_22 = ATgetArgument(t, 0);
                                                                                                                  p_47 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(t_22);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, p_47);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_22;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                                                  p_47 = ATgetArgument(t, 1);
                                                                                                                  t = v_52(m_47, p_47, i_47, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      m_47 = ATgetArgument(t, 0);
                                                                                                                      p_47 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm w_2 (ATerm t);
                                                                                                                        static ATerm w_2 (ATerm t)
                                                                                                                        {
                                                                                                                          t = p_47;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = m_47;
                                                                                                                        t = foldr_2_0(w_2, x_2, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          m_47 = ATgetArgument(t, 0);
                                                                                                                          t = m_47;
                                                                                                                          t = foldr_2_0(y_2, b_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              m_47 = ATgetArgument(t, 0);
                                                                                                                              t = m_47;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  e_47 = ATgetFirst((ATermList) t);
                                                                                                                                  f_47 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = f_47;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm z_22 = t;
                                                                                                                                      int c_23 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = w_52(m_47, i_47, t);
                                                                                                                                          LocalPopChoice(c_23);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = z_22;
                                                                                                                                          t = e_47;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = w_52(m_47, i_47, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = w_52(m_47, i_47, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                                                                  p_47 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm y_51 = NULL;
                                                                                                                                    t = p_47;
                                                                                                                                    t = foldr_2_0(c_3, f_3, t);
                                                                                                                                    y_51 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, m_47, y_51);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      m_47 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, m_47, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          m_47 = ATgetArgument(t, 0);
                                                                                                                                          t = x_52(m_47, i_47, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm d_23 = t;
                                                                                                                                          int e_23 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  m_47 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm g_23 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  h_47 = ATgetArgument(t, 2);
                                                                                                                                                  g_47 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(e_23);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, m_47, h_47, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_47), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = d_23;
                                                                                                                                              {
                                                                                                                                                ATerm l_23 = t;
                                                                                                                                                int n_23 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        m_47 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm s_23 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        h_47 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(n_23);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, m_47, h_47, term_a_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = l_23;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        m_47 = ATgetArgument(t, 0);
                                                                                                                                                        p_47 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, m_47, p_47, term_a_24);
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
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  e_53 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
      {
        ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
        t = e_53;
        t = new_0_0(t);
        i_53 = t;
        t = new_0_0(t);
        j_53 = t;
        t = new_0_0(t);
        k_53 = t;
        t = new_0_0(t);
        l_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_53), k_53), j_53), i_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_53), (ATerm) ATmakeAppl(sym_Var_1, k_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_53, (ATerm)ATmakeAppl(sym_Var_1, i_53), (ATerm) ATmakeAppl(sym_Var_1, j_53)), (ATerm) ATmakeAppl(sym_BAM_3, d_53, (ATerm)ATmakeAppl(sym_Var_1, k_53), (ATerm) ATmakeAppl(sym_Var_1, l_53)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_53)), (ATerm) ATmakeAppl(sym_Var_1, j_53))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_53 = ATgetArgument(t, 0);
          {
            ATerm m_53 = NULL,n_53 = NULL,u_53 = NULL,v_53 = NULL;
            t = e_53;
            t = new_0_0(t);
            u_53 = t;
            t = f_53;
            {
              static ATerm g_3 (ATerm t);
              static ATerm g_3 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, u_53);
                return(t);
              }
              t = oncetd_1_0(g_3, t);
            }
            v_53 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_53)), not_null(m_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_53)), (ATerm) ATmakeAppl(sym_Build_1, v_53))));
          }
        }
      else
        {
          ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_53;
          t = new_0_0(t);
          d_54 = t;
          t = new_0_0(t);
          e_54 = t;
          t = f_53;
          {
            static ATerm i_3 (ATerm t);
            static ATerm i_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((b_54 != NULL) && (b_54 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_54 = ATgetArgument(t, 0);
                  if(((c_54 != NULL) && (c_54 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_54);
              return(t);
            }
            t = oncetd_1_0(i_3, t);
          }
          f_54 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_54)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_54))))), (ATerm)ATmakeAppl(sym_Var_1, d_54), (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_54)), not_null(b_54)))))));
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
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,w_54 = NULL;
        t = h_54;
        t = new_0_0(t);
        o_54 = t;
        t = i_54;
        {
          static ATerm k_3 (ATerm t);
          static ATerm k_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_54 != NULL) && (m_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_54 = ATgetArgument(t, 0);
                if(((n_54 != NULL) && (n_54 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_54), m_54);
            return(t);
          }
          t = pat_td_1_0(k_3, t);
        }
        w_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_54), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_54))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_54))))));
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_55 = NULL,k_55 = NULL,n_55 = NULL;
              t = h_54;
              t = new_0_0(t);
              k_55 = t;
              t = i_54;
              {
                static ATerm p_3 (ATerm t);
                static ATerm p_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_55 != NULL) && (i_55 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_55);
                  return(t);
                }
                t = pat_td_1_0(p_3, t);
              }
              n_55 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_55)), not_null(i_55))));
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              {
                ATerm p_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
                t = h_54;
                t = new_0_0(t);
                t_55 = t;
                t = i_54;
                {
                  static ATerm q_3 (ATerm t);
                  static ATerm q_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_55 != NULL) && (s_55 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_55 = ATgetArgument(t, 0);
                        if(((p_55 != NULL) && (p_55 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_55);
                    return(t);
                  }
                  t = pat_td_1_0(q_3, t);
                }
                u_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_55)), not_null(s_55)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_129(t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
        f_60 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_60 = ATgetArgument(t, 0);
            h_60 = ATgetArgument(t, 1);
            {
              ATerm d_19 = NULL,g_19 = NULL,h_3 = NULL;
              t = SSLgetAnnotations(f_60);
              d_19 = t;
              t = h_60;
              {
                static ATerm r_3 (ATerm t);
                static ATerm r_3 (ATerm t)
                {
                  t = pat_td_1_0(j_129, t);
                  return(t);
                }
                t = fetch_1_0(r_3, t);
              }
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, g_60, g_19);
              h_3 = t;
              t = SSLsetAnnotations(h_3, d_19);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_60 = ATgetArgument(t, 0);
                h_60 = ATgetArgument(t, 1);
                {
                  ATerm n_24 = t;
                  int o_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_20 = NULL,j_20 = NULL,j_3 = NULL;
                      t = SSLgetAnnotations(f_60);
                      a_20 = t;
                      t = h_60;
                      t = pat_td_1_0(j_129, t);
                      j_20 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_60, j_20);
                      j_3 = t;
                      t = SSLsetAnnotations(j_3, a_20);
                      LocalPopChoice(o_24);
                    }
                  else
                    {
                      t = n_24;
                      {
                        ATerm w_20 = NULL,b_21 = NULL,l_3 = NULL;
                        t = SSLgetAnnotations(f_60);
                        w_20 = t;
                        t = g_60;
                        t = pat_td_1_0(j_129, t);
                        b_21 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, b_21, h_60);
                        l_3 = t;
                        t = SSLsetAnnotations(l_3, w_20);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_60 = ATgetArgument(t, 0);
                    h_60 = ATgetArgument(t, 1);
                    e_60 = ATgetArgument(t, 2);
                    {
                      ATerm x_21 = NULL,e_22 = NULL,m_3 = NULL;
                      t = SSLgetAnnotations(f_60);
                      x_21 = t;
                      t = e_60;
                      {
                        static ATerm s_3 (ATerm t);
                        static ATerm s_3 (ATerm t)
                        {
                          t = pat_td_1_0(j_129, t);
                          return(t);
                        }
                        t = fetch_1_0(s_3, t);
                      }
                      e_22 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_60, h_60, e_22);
                      m_3 = t;
                      t = SSLsetAnnotations(m_3, x_21);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_60 = ATgetArgument(t, 0);
                        h_60 = ATgetArgument(t, 1);
                        e_60 = ATgetArgument(t, 2);
                        {
                          ATerm k_23 = NULL,u_23 = NULL,n_3 = NULL;
                          t = SSLgetAnnotations(f_60);
                          k_23 = t;
                          t = e_60;
                          {
                            static ATerm t_3 (ATerm t);
                            static ATerm t_3 (ATerm t)
                            {
                              t = pat_td_1_0(j_129, t);
                              return(t);
                            }
                            t = fetch_1_0(t_3, t);
                          }
                          u_23 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, g_60, h_60, u_23);
                          n_3 = t;
                          t = SSLsetAnnotations(n_3, k_23);
                        }
                      }
                    else
                      {
                        ATerm h_24 = NULL,k_24 = NULL,o_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_60 = ATgetArgument(t, 0);
                            h_60 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_60);
                        h_24 = t;
                        t = h_60;
                        t = pat_td_1_0(j_129, t);
                        k_24 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_60, k_24);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, h_24);
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
  ATerm p_60 = NULL,s_60 = NULL;
  p_60 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL,u_60 = NULL,w_60 = NULL,x_60 = NULL;
        t = p_60;
        t = new_0_0(t);
        w_60 = t;
        t = s_60;
        {
          static ATerm u_3 (ATerm t);
          static ATerm u_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_60 != NULL) && (t_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_60 = ATgetArgument(t, 0);
                if(((u_60 != NULL) && (u_60 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_60);
            return(t);
          }
          t = pat_td_1_0(u_3, t);
        }
        x_60 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_60)), not_null(t_60))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_60)))), (ATerm) ATmakeAppl(sym_Build_1, x_60)));
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_60 = NULL,a_61 = NULL,b_61 = NULL;
              t = p_60;
              t = new_0_0(t);
              a_61 = t;
              t = s_60;
              {
                static ATerm x_3 (ATerm t);
                static ATerm x_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_60 != NULL) && (y_60 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_61);
                  return(t);
                }
                t = pat_td_1_0(x_3, t);
              }
              b_61 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_61)))), (ATerm) ATmakeAppl(sym_Build_1, b_61)));
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              {
                ATerm c_61 = NULL,d_61 = NULL,f_61 = NULL,g_61 = NULL;
                t = p_60;
                t = new_0_0(t);
                f_61 = t;
                t = s_60;
                {
                  static ATerm y_3 (ATerm t);
                  static ATerm y_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_61 != NULL) && (c_61 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_61 = ATgetArgument(t, 0);
                        if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_61 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_61);
                    return(t);
                  }
                  t = pat_td_1_0(y_3, t);
                }
                g_61 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_61), not_null(d_61), (ATerm) ATmakeAppl(sym_Var_1, f_61))), (ATerm) ATmakeAppl(sym_Build_1, g_61)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,p_61 = NULL,q_61 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_61 = ATgetArgument(t, 0);
      q_61 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_61, q_61);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_61 = ATgetArgument(t, 0);
          t = p_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_61 = ATgetFirst((ATermList) t);
              m_61 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_61, (ATerm) ATmakeAppl(sym_LChoices_1, m_61));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_v_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              p_61 = ATgetArgument(t, 0);
              t = p_61;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_61 = ATgetFirst((ATermList) t);
                  m_61 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_61, (ATerm) ATmakeAppl(sym_Choices_1, m_61));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_v_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  p_61 = ATgetArgument(t, 0);
                  t = p_61;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_61 = ATgetFirst((ATermList) t);
                      m_61 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_61, (ATerm) ATmakeAppl(sym_Seqs_1, m_61));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      p_61 = ATgetArgument(t, 0);
                      q_61 = ATgetArgument(t, 1);
                      n_61 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, q_61, (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, n_61), p_61)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          p_61 = ATgetArgument(t, 0);
                          q_61 = ATgetArgument(t, 1);
                          n_61 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, n_61)), p_61), (ATerm) ATmakeAppl(sym_Build_1, q_61)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              p_61 = ATgetArgument(t, 0);
                              q_61 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, (ATerm) ATmakeAppl(sym_Match_1, q_61));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  p_61 = ATgetArgument(t, 0);
                                  q_61 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_61), q_61);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      p_61 = ATgetArgument(t, 0);
                                      q_61 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_61), p_61);
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
static ATerm z_3 (ATerm t)
{
  ATerm w_24 = t;
  if((PushChoice() == 0))
    {
      ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,v_3 = NULL;
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
      v_3 = t;
      t = SSLsetAnnotations(v_3, b_63);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_24;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm e_4 (ATerm t)
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
static ATerm h_4 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym__2))
        {
          g_63 = ATgetArgument(z_25, 0);
          h_63 = ATgetArgument(z_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            i_63 = ATgetArgument(a_26, 0);
            j_63 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_63), g_63), (ATerm) ATinsert(CheckATermList(j_63), h_63));
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm j_4 (ATerm t)
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
static ATerm k_4 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,w_63 = NULL,x_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          o_63 = ATgetArgument(d_26, 0);
          p_63 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            w_63 = ATgetArgument(e_26, 0);
            x_63 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_63), o_63), (ATerm) ATinsert(CheckATermList(x_63), p_63));
  return(t);
}
static ATerm e_10 (ATerm f_35, ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,w_3 = NULL;
  t = h_35;
  t = fetch_1_0(z_3, t);
  t = h_35;
  t = genzip_4_0(b_4, e_4, h_4, LiftPrimArg_0_0, t);
  a_63 = t;
  if(match_cons(t, sym__2))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_63);
  t_62 = t;
  t = u_62;
  t = concat_0_0(t);
  y_62 = t;
  t = v_62;
  t = genzip_4_0(i_4, j_4, k_4, _id, t);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_62, z_62);
  w_3 = t;
  t = SSLsetAnnotations(w_3, t_62);
  if(match_cons(t, sym__2))
    {
      q_62 = ATgetArgument(t, 0);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(match_cons(f_26, sym__2))
          {
            r_62 = ATgetArgument(f_26, 0);
            s_62 = ATgetArgument(f_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_62, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_62), (ATerm) ATmakeAppl(sym_CallT_3, f_35, g_35, s_62)));
  return(t);
}
static ATerm n_64 (ATerm b_64, ATerm t)
{
  ATerm g_64 = NULL;
  t = b_64;
  {
    ATerm g_26 = t;
    if((PushChoice() == 0))
      {
        ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL,a_4 = NULL;
        j_64 = t;
        if(match_cons(t, sym_Var_1))
          {
            i_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_64);
        h_64 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, i_64);
        a_4 = t;
        t = SSLsetAnnotations(a_4, h_64);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_26;
      }
  }
  t = new_0_0(t);
  g_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, g_64), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_64), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_64)))), (ATerm) ATmakeAppl(sym_Var_1, g_64)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL;
  k_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_64 = ATgetArgument(t, 0);
      {
        ATerm h_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_64(k_64, t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = h_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_22, (ATerm) ATmakeAppl(sym_Var_1, l_64)));
          }
      }
    }
  else
    {
      t = n_64(k_64, t);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      ATerm i_25 = NULL,j_25 = NULL,l_25 = NULL,c_4 = NULL;
      l_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_25);
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_25);
      c_4 = t;
      t = SSLsetAnnotations(c_4, i_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm m_25 = NULL,p_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_25 = ATgetFirst((ATermList) t);
      p_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_25, p_25);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(match_cons(q_26, sym__2))
        {
          q_25 = ATgetArgument(q_26, 0);
          r_25 = ATgetArgument(q_26, 1);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(match_cons(v_26, sym__2))
          {
            s_25 = ATgetArgument(v_26, 0);
            t_25 = ATgetArgument(v_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_25), q_25), (ATerm) ATinsert(CheckATermList(t_25), r_25));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_25 = ATgetFirst((ATermList) t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(match_cons(w_26, sym__2))
        {
          w_25 = ATgetArgument(w_26, 0);
          x_25 = ATgetArgument(w_26, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            y_25 = ATgetArgument(l_27, 0);
            c_26 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_25), w_25), (ATerm) ATinsert(CheckATermList(c_26), x_25));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_27 = t;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,f_4 = NULL;
      i_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_27);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_27);
      f_4 = t;
      t = SSLsetAnnotations(f_4, g_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_27;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_27, k_27);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(match_cons(x_27, sym__2))
        {
          n_27 = ATgetArgument(x_27, 0);
          o_27 = ATgetArgument(x_27, 1);
        }
      else
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(match_cons(y_27, sym__2))
          {
            p_27 = ATgetArgument(y_27, 0);
            q_27 = ATgetArgument(y_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_27), n_27), (ATerm) ATinsert(CheckATermList(q_27), o_27));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_25;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      s_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_27, s_27);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if(match_cons(z_27, sym__2))
        {
          t_27 = ATgetArgument(z_27, 0);
          u_27 = ATgetArgument(z_27, 1);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(match_cons(d_28, sym__2))
          {
            v_27 = ATgetArgument(d_28, 0);
            w_27 = ATgetArgument(d_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_27), t_27), (ATerm) ATinsert(CheckATermList(w_27), u_27));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,g_68 = NULL;
  p_67 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_67 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
      o_67 = ATgetArgument(t, 2);
      {
        ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,h_25 = NULL,d_4 = NULL;
        t = o_67;
        t = fetch_1_0(l_4, t);
        t = o_67;
        t = genzip_4_0(n_4, q_4, r_4, LiftPrimArg_0_0, t);
        h_25 = t;
        if(match_cons(t, sym__2))
          {
            b_25 = ATgetArgument(t, 0);
            c_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_25);
        a_25 = t;
        t = b_25;
        t = concat_0_0(t);
        d_25 = t;
        t = c_25;
        t = genzip_4_0(s_4, u_4, v_4, _id, t);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_25, e_25);
        d_4 = t;
        t = SSLsetAnnotations(d_4, a_25);
        if(match_cons(t, sym__2))
          {
            x_24 = ATgetArgument(t, 0);
            {
              ATerm g_28 = ATgetArgument(t, 1);
              if(match_cons(g_28, sym__2))
                {
                  y_24 = ATgetArgument(g_28, 0);
                  z_24 = ATgetArgument(g_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_24), (ATerm) ATmakeAppl(sym_PrimT_3, q_67, g_68, z_24)));
      }
    }
  else
    {
      ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          q_67 = ATgetArgument(t, 0);
          g_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_68;
      t = fetch_1_0(w_4, t);
      t = g_68;
      t = genzip_4_0(z_4, a_5, c_5, LiftPrimArg_0_0, t);
      f_27 = t;
      if(match_cons(t, sym__2))
        {
          b_27 = ATgetArgument(t, 0);
          c_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_27);
      a_27 = t;
      t = b_27;
      t = concat_0_0(t);
      d_27 = t;
      t = c_27;
      t = genzip_4_0(e_5, g_5, i_5, _id, t);
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, e_27);
      g_4 = t;
      t = SSLsetAnnotations(g_4, a_27);
      if(match_cons(t, sym__2))
        {
          x_26 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
            if(match_cons(h_28, sym__2))
              {
                y_26 = ATgetArgument(h_28, 0);
                z_26 = ATgetArgument(h_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_26), (ATerm) ATmakeAppl(sym_PrimT_3, q_67, (ATerm)ATempty, z_26)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t)
{
  static ATerm j_68 (ATerm t);
  static ATerm j_68 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = j_68(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = p_137(t);
      }
    return(t);
  }
  t = j_68(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  g_69 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
      f_69 = ATgetArgument(t, 2);
      {
        ATerm u_28 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(g_69);
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_69, e_69, f_69);
        m_4 = t;
        t = SSLsetAnnotations(m_4, u_28);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = g_69;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm k_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm x_70 = NULL,z_70 = NULL,f_71 = NULL,g_71 = NULL;
  z_70 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
      x_70 = ATgetArgument(t, 2);
      {
        ATerm k_29 = NULL,o_4 = NULL;
        t = SSLgetAnnotations(z_70);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_71, g_71, x_70);
        o_4 = t;
        t = SSLsetAnnotations(o_4, k_29);
      }
    }
  else
    {
      ATerm c_30 = NULL,p_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          f_71 = ATgetArgument(t, 0);
          g_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_70);
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, f_71, g_71);
      p_4 = t;
      t = SSLsetAnnotations(p_4, c_30);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm l_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,t_71 = NULL,u_71 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_71;
  if(match_cons(t, sym_StratRule_3))
    {
      r_71 = ATgetArgument(t, 0);
      t_71 = ATgetArgument(t, 1);
      u_71 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_71), (ATerm) ATmakeAppl(sym_Where_1, u_71)), r_71));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          r_71 = ATgetArgument(t, 0);
          t_71 = ATgetArgument(t, 1);
          u_71 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_71;
      t = pureterm_0_0(t);
      t = t_71;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_71)), (ATerm) ATmakeAppl(sym_Where_1, u_71)), (ATerm) ATmakeAppl(sym_Match_1, r_71)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_132 (ATerm), ATerm t)
{
  static ATerm f_72 (ATerm t);
  static ATerm f_72 (ATerm t)
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_132(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = SRTS_one(f_72, t);
      }
    return(t);
  }
  t = f_72(t);
  return(t);
}
static ATerm i_10 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,t_72 = NULL,u_72 = NULL,b_73 = NULL;
  t = new_0_0(t);
  t_72 = t;
  t = s_30;
  {
    static ATerm o_5 (ATerm t);
    static ATerm o_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm o_28 = ATgetArgument(t, 0);
          if(match_cons(o_28, sym_Var_1))
            {
              if(((k_72 != NULL) && (k_72 != ATgetArgument(o_28, 0))))
                _fail(ATgetArgument(o_28, 0));
              else
                k_72 = ATgetArgument(o_28, 0);
            }
          else
            _fail(t);
          if(((i_72 != NULL) && (i_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_72 = ATgetArgument(t, 1);
          {
            ATerm p_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_72);
      return(t);
    }
    t = oncetd_1_0(o_5, t);
  }
  u_72 = t;
  t = t_30;
  {
    static ATerm p_5 (ATerm t);
    static ATerm p_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_28 = ATgetArgument(t, 0);
          if(match_cons(q_28, sym_Var_1))
            {
              if(((k_72 != NULL) && (k_72 != ATgetArgument(q_28, 0))))
                _fail(ATgetArgument(q_28, 0));
              else
                k_72 = ATgetArgument(q_28, 0);
            }
          else
            _fail(t);
          if(((j_72 != NULL) && (j_72 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_72 = ATgetArgument(t, 1);
          {
            ATerm r_28 = ATgetArgument(t, 2);
            if(match_cons(r_28, sym_CallT_3))
              {
                if(((h_72 != NULL) && (h_72 != ATgetArgument(r_28, 0))))
                  _fail(ATgetArgument(r_28, 0));
                else
                  h_72 = ATgetArgument(r_28, 0);
                {
                  ATerm s_28 = ATgetArgument(r_28, 1);
                  if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
                    _fail(t);
                }
                {
                  ATerm t_28 = ATgetArgument(r_28, 2);
                  if(((ATgetType(t_28) != AT_LIST) || !(ATisEmpty(t_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, t_72);
      return(t);
    }
    t = oncetd_1_0(p_5, t);
  }
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, u_72, b_73, (ATerm) ATmakeAppl(sym_Seq_2, u_30, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(h_72), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_72), not_null(j_72), term_q_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_72)), (ATerm) ATmakeAppl(sym_Var_1, t_72))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
          o_74 = t;
          if(match_cons(t, sym_SRule_1))
            {
              p_74 = ATgetArgument(t, 0);
              t = p_74;
              if(match_cons(t, sym_Rule_3))
                {
                  j_74 = ATgetArgument(t, 0);
                  m_74 = ATgetArgument(t, 1);
                  n_74 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_74;
              t = i_10(j_74, m_74, n_74, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm v_30 = NULL,y_30 = NULL,t_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  p_74 = ATgetArgument(t, 0);
                  q_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_74);
              v_30 = t;
              t = q_74;
              t = desugarRule_0_0(t);
              y_30 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, p_74, y_30);
              t_4 = t;
              t = SSLsetAnnotations(t_4, v_30);
            }
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t);
  static ATerm q_5 (ATerm t)
  {
    t = topdown_1_0(o_131, t);
    return(t);
  }
  t = o_131(t);
  t = SRTS_all(q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
    }
  t = repeat_2_0(w_5, _id, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,s_75 = NULL;
            n_75 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_75 = ATgetArgument(t, 0);
                p_75 = ATgetArgument(t, 1);
                s_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_75;
            t = e_10(o_75, p_75, s_75, t);
            LocalPopChoice(f_29);
          }
        else
          {
            t = d_29;
            {
              ATerm g_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = g_29;
                  {
                    ATerm j_29 = t;
                    int l_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(l_29);
                      }
                    else
                      {
                        t = j_29;
                        {
                          ATerm m_29 = t;
                          int n_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_29 = t;
                              int q_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_76;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      b_76 = ATgetArgument(t, 0);
                                      t = b_76;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          b_76 = ATgetArgument(t, 0);
                                          c_76 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, b_76, c_76);
                                    }
                                  LocalPopChoice(q_29);
                                }
                              else
                                {
                                  t = o_29;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(n_29);
                            }
                          else
                            {
                              t = m_29;
                              {
                                ATerm r_29 = t;
                                int t_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(t_29);
                                  }
                                else
                                  {
                                    t = r_29;
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
  t = topdown_1_0(s_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  r_76 = t;
  t = SSL_explode_term(r_76);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
          {
            q_76 = ATgetFirst((ATermList) v_29);
            {
              ATerm w_29 = (ATerm) ATgetNext((ATermList) v_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_76;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,i_31 = NULL;
  i_31 = t;
  t = SSL_explode_term(i_31);
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_29 = ATgetArgument(t, 1);
        if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
          {
            ATerm z_29 = ATgetFirst((ATermList) y_29);
            e_31 = (ATerm) ATgetNext((ATermList) y_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_c_21;
  f_31 = t;
  t = SSL_mkterm(f_31, e_31);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm v_135 (ATerm), ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  static ATerm s_76 (ATerm t);
  static ATerm s_76 (ATerm t)
  {
    ATerm b_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
        m_76 = t;
        t = map_1_0(x_5, t);
        t = v_135(t);
        n_76 = t;
        t = m_76;
        t = map_1_0(z_5, t);
        t = s_76(t);
        o_76 = t;
        t = (ATerm) ATinsert(CheckATermList(o_76), n_76);
        LocalPopChoice(d_30);
      }
    else
      {
        t = b_30;
        t = map_1_0(b_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = s_76(t);
  l_76 = t;
  t = term_c_21;
  k_76 = t;
  t = SSL_mkterm(k_76, l_76);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_76 = NULL,a_77 = NULL,d_77 = NULL;
        t = v_76;
        t = new_0_0(t);
        z_76 = t;
        t = new_0_0(t);
        a_77 = t;
        t = new_0_0(t);
        d_77 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_76), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, v_76), (ATerm) ATmakeAppl(sym_Var_1, a_77))), (ATerm) ATmakeAppl(sym_Var_1, d_77)), (ATerm)ATmakeAppl(sym_VarDec_2, z_76, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), a_77, (ATerm)ATmakeAppl(sym_Var_1, a_77), d_77, (ATerm) ATmakeAppl(sym_Var_1, d_77));
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm f_77 = NULL,n_77 = NULL,r_77 = NULL;
          t = v_76;
          t = new_0_0(t);
          f_77 = t;
          t = new_0_0(t);
          n_77 = t;
          t = new_0_0(t);
          r_77 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_77), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, v_76), (ATerm) ATmakeAppl(sym_Var_1, n_77))), (ATerm) ATmakeAppl(sym_Var_1, r_77)), (ATerm)ATmakeAppl(sym_VarDec_2, f_77, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), n_77, (ATerm)ATmakeAppl(sym_Var_1, n_77), r_77, (ATerm) ATmakeAppl(sym_Var_1, r_77));
        }
      }
  }
  return(t);
}
static ATerm j_10 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm n_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(v_56, w_56);
      LocalPopChoice(p_30);
    }
  else
    {
      t = n_30;
      t = SSL_subtr(v_56, w_56);
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm s_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym__2))
    {
      s_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_77, y_77, (ATerm) ATempty);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm z_77 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if(((ATgetType(q_30) != AT_INT) || (ATgetInt((ATermInt) q_30) != 0)))
        _fail(t);
      {
        ATerm w_30 = ATgetArgument(t, 1);
      }
      z_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_77;
  return(t);
}
ATerm copy_1_0 (ATerm r_154 (ATerm), ATerm t)
{
  static ATerm g_6 (ATerm t);
  static ATerm g_6 (ATerm t)
  {
    ATerm a_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,k_78 = NULL;
    if(match_cons(t, sym__3))
      {
        a_78 = ATgetArgument(t, 0);
        d_78 = ATgetArgument(t, 1);
        e_78 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_78, term_i_20);
    t = geq_0_0(t);
    t = term_i_20;
    k_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_78, term_i_20);
    t = j_10(a_78, k_78, t);
    f_78 = t;
    t = d_78;
    t = r_154(t);
    g_78 = t;
    t = (ATerm) ATmakeAppl(sym__3, f_78, d_78, (ATerm) ATinsert(CheckATermList(e_78), g_78));
    return(t);
  }
  t = for_3_0(c_6, e_6, g_6, t);
  return(t);
}
static ATerm k_10 (ATerm n_25, ATerm o_25, ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,q_78 = NULL;
  t = new_0_0(t);
  l_78 = t;
  t = new_0_0(t);
  m_78 = t;
  t = new_0_0(t);
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_78), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_25)), (ATerm) ATmakeAppl(sym_Var_1, m_78))), (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_25)), (ATerm) ATmakeAppl(sym_Var_1, q_78)))), (ATerm)ATmakeAppl(sym_VarDec_2, l_78, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_30), term_m_30)), m_78, (ATerm)ATmakeAppl(sym_Var_1, m_78), q_78, (ATerm) ATmakeAppl(sym_Var_1, q_78));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_78 = NULL,c_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_78 = ATgetFirst((ATermList) t);
      c_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_78;
    }
  else
    {
      t = c_79;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm z_82 (ATerm a_80, ATerm b_80, ATerm c_80, ATerm e_80, ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  t = term_i_20;
  c_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_80, term_i_20);
  t = n_11(b_80, c_81, t);
  b_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_81, term_x_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_80 = ATgetFirst((ATermList) t);
      p_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_80;
  t = last_0_0(t);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_80), o_80), p_80);
  t = genzip_4_0(i_6, j_6, l_6, m_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      s_80 = ATgetArgument(t, 0);
      t_80 = ATgetArgument(t, 1);
      u_80 = ATgetArgument(t, 2);
      v_80 = ATgetArgument(t, 3);
      w_80 = ATgetArgument(t, 4);
      x_80 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_80), u_80), p_80);
  t = concat_0_0(t);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_80, term_z_30), t_80, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_81), o_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_80)), (ATerm) ATmakeAppl(sym_Op_2, a_80, v_80))), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_80)), (ATerm) ATmakeAppl(sym_Op_2, a_80, x_80))), (ATerm) ATmakeAppl(sym_Seqs_1, s_80)))));
  return(t);
}
static ATerm a_83 (ATerm r_81, ATerm s_81, ATerm t_81, ATerm u_81, ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL;
  t = u_81;
  t = new_0_0(t);
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_81, (ATerm) ATmakeAppl(sym_Var_1, a_82));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      d_82 = ATgetArgument(t, 2);
      e_82 = ATgetArgument(t, 3);
      f_82 = ATgetArgument(t, 4);
      g_82 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_82, f_82);
  t = conc_0_0(t);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_81, term_a_31), c_82, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_82), a_82), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_82)), (ATerm) ATmakeAppl(sym_Op_2, r_81, e_82))), (ATerm)ATmakeAppl(sym_Op_2, r_81, g_82), (ATerm) ATmakeAppl(sym_Seqs_1, b_82)))));
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      ATerm c_31 = ATgetArgument(t, 1);
      if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_81 = NULL,g_81 = NULL,h_81 = NULL,k_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
        {
          d_81 = ATgetFirst((ATermList) d_31);
          g_81 = (ATerm) ATgetNext((ATermList) d_31);
        }
      else
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
          {
            h_81 = ATgetFirst((ATermList) j_31);
            k_81 = (ATerm) ATgetNext((ATermList) j_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_81, h_81), (ATerm) ATmakeAppl(sym__2, g_81, k_81));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  if(match_cons(t, sym__2))
    {
      l_81 = ATgetArgument(t, 0);
      m_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_81), l_81);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      o_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(o_81, p_81, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,s_82 = NULL,v_82 = NULL,w_82 = NULL;
  j_82 = t;
  if(match_cons(t, sym__3))
    {
      k_82 = ATgetArgument(t, 0);
      l_82 = ATgetArgument(t, 1);
      s_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_82;
  if(match_string(t, "T"))
    {
      t = s_82;
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
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_82(k_82, v_82, w_82, j_82, t);
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              {
                ATerm y_82 = NULL;
                t = j_82;
                t = new_0_0(t);
                y_82 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_82, term_z_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_82), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_82)), (ATerm) ATmakeAppl(sym_Op_2, k_82, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_82)), (ATerm) ATmakeAppl(sym_Op_2, k_82, (ATerm) ATempty))), term_q_22))));
              }
            }
        }
      else
        {
          t = z_82(k_82, v_82, w_82, j_82, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = s_82;
      if(match_cons(t, sym__2))
        {
          v_82 = ATgetArgument(t, 0);
          w_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_83(k_82, v_82, w_82, j_82, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_143 (ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    t = z_143(t);
    if(((x_19 != NULL) && (x_19 != t)))
      _fail(t);
    else
      x_19 = t;
    return(t);
  }
  t = fetch_1_0(n_6, t);
  t = not_null(x_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  t = term_t_16;
  d_20 = t;
  t = (ATerm) ATinsert(ATempty, term_r_31);
  e_20 = t;
  t = SSL_printnl(d_20, e_20);
  t = term_i_20;
  c_20 = t;
  t = SSL_exit(c_20);
  t = (ATerm) ATinsert(ATempty, term_r_31);
  return(t);
}
ATerm debug_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL;
  f_20 = t;
  t = b_139(t);
  g_20 = t;
  t = term_t_16;
  h_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_20), g_20);
  k_20 = t;
  t = SSL_printnl(h_20, k_20);
  t = f_20;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm w_31 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          g_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(v_31);
      t = g_15;
      t = foldr_3_0(z_6, a_7, b_7, t);
      t = f_15;
      t = foldr_3_0(c_7, d_7, e_7, t);
    }
  else
    {
      t = u_31;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm x_31 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          g_15 = ATgetArgument(t, 2);
          {
            ATerm y_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_15;
      t = foldr_3_0(f_7, h_7, i_7, t);
      t = f_15;
      t = foldr_3_0(j_7, l_7, m_7, t);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(t_15, u_15, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_b_20;
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
  t = n_11(v_15, w_15, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(b_16, d_16, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(e_16, g_16, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      ATerm a_32 = ATgetArgument(t, 1);
      ATerm c_32 = ATgetArgument(t, 2);
      ATerm d_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      static ATerm t_6 (ATerm t);
      static ATerm t_6 (ATerm t)
      {
        ATerm s_20 = NULL,t_20 = NULL;
        s_20 = t;
        {
          ATerm h_32 = t;
          int i_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  t_20 = ATgetArgument(t, 0);
                  {
                    ATerm j_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm k_32 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(i_32);
              t = t_20;
              if(((r_20 != NULL) && (r_20 != t)))
                _fail(t);
              else
                r_20 = t;
              t = s_20;
            }
          else
            {
              t = h_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  t_20 = ATgetArgument(t, 0);
                  {
                    ATerm l_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm m_32 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm o_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = t_20;
              if(((r_20 != NULL) && (r_20 != t)))
                _fail(t);
              else
                r_20 = t;
              t = s_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(t_6, t);
      {
        static ATerm u_6 (ATerm t);
        static ATerm u_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_20 = ATgetArgument(t, 0);
              {
                ATerm p_32 = ATgetArgument(t, 1);
              }
              {
                ATerm q_32 = ATgetArgument(t, 2);
              }
              {
                ATerm t_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_6, t);
      }
      t = not_null(r_20);
      t = debug_1_0(v_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm s_22 = NULL;
        s_22 = t;
        t = map_1_0(y_6, t);
        t = s_22;
        {
          ATerm b_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(n_7, t);
              LocalPopChoice(f_33);
            }
          else
            {
              t = b_33;
              {
                ATerm i_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm n_33 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = i_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,o_16 = NULL;
  v_22 = t;
  t = SSL_explode_term(v_22);
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_33 = ATgetArgument(t, 1);
        if(((ATgetType(p_33) == AT_LIST) && !(ATisEmpty(p_33))))
          {
            w_22 = ATgetFirst((ATermList) p_33);
            {
              ATerm r_33 = (ATerm) ATgetNext((ATermList) p_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_22);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_33 = ATgetArgument(t, 1);
        if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
          {
            ATerm u_33 = ATgetFirst((ATermList) t_33);
            ATerm v_33 = (ATerm) ATgetNext((ATermList) t_33);
            if(((ATgetType(v_33) == AT_LIST) && !(ATisEmpty(v_33))))
              {
                o_16 = ATgetFirst((ATermList) v_33);
                {
                  ATerm x_33 = (ATerm) ATgetNext((ATermList) v_33);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, o_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(o_7, p_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  static ATerm x_22 (ATerm t);
  static ATerm x_22 (ATerm t)
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_133(t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = SRTS_all(x_22, t);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
static ATerm s_9 (ATerm w_72, ATerm x_72, ATerm t)
{
  ATerm y_22 = NULL,a_23 = NULL;
  a_23 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
        t = s_11(w_72, x_72, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_34 = ATgetFirst((ATermList) t);
            y_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_34);
        {
          ATerm b_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_72, x_72, y_22);
          t = lookup_table_0_1(w_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_11(x_72, y_22, b_23, t);
          t = (ATerm) ATmakeAppl(sym__3, w_72, x_72, y_22);
        }
      }
    else
      {
        t = b_34;
        {
          ATerm f_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
          t = lookup_table_0_1(w_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_11(x_72, f_23, t);
          t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
        }
      }
  }
  t = a_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_166 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,m_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  t = v_166(t);
  j_23 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        t = term_g_34;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_g_34);
        t = s_11(j_23, r_23, t);
        {
          ATerm k_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_34;
            }
        }
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
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
  t = (ATerm) ATmakeAppl(sym__3, j_23, term_g_34, h_23);
  t = lookup_table_0_1(j_23, t);
  q_23 = t;
  t = term_g_34;
  o_23 = t;
  t = q_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(o_23, h_23, p_23, t);
  t = i_23;
  {
    static ATerm q_7 (ATerm t);
    static ATerm q_7 (ATerm t)
    {
      ATerm t_23 = NULL;
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_23, t_23);
      t = s_9(j_23, t_23, t);
      return(t);
    }
    t = map_1_0(q_7, t);
  }
  t = m_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_134(t);
      t = a_135(t);
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      t = a_135(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_166 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,b_24 = NULL,u_24 = NULL,f_25 = NULL,g_25 = NULL;
  y_23 = t;
  t = u_166(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, term_g_34);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            ATerm t_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_34;
        b_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_g_34);
        t = s_11(x_23, b_26, t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATempty;
      }
  }
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_23, term_g_34, (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATempty));
  t = lookup_table_0_1(x_23, t);
  g_25 = t;
  t = term_g_34;
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATempty);
  u_24 = t;
  t = g_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(b_24, u_24, f_25, t);
  t = y_23;
  return(t);
}
ATerm scope_2_0 (ATerm w_166 (ATerm), ATerm x_166 (ATerm), ATerm t)
{
  static ATerm r_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    t = end_scope_1_0(w_166, t);
    return(t);
  }
  t = begin_scope_1_0(w_166, t);
  t = restore_always_2_0(x_166, r_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,s_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_26;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      {
        ATerm u_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_26;
            if((l_26 != t))
              {
                _fail(t);
              }
            t = j_26;
            LocalPopChoice(w_34);
          }
        else
          {
            t = u_34;
            t = (ATerm) ATmakeAppl(sym__2, l_26, s_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_26, s_26);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      if(((ATgetType(x_34) != AT_LIST) || !(ATisEmpty(x_34))))
        _fail(t);
      {
        ATerm y_34 = ATgetArgument(t, 1);
        if(((ATgetType(y_34) != AT_LIST) || !(ATisEmpty(y_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm g_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
        {
          g_30 = ATgetFirst((ATermList) a_35);
          j_30 = (ATerm) ATgetNext((ATermList) a_35);
        }
      else
        _fail(t);
      {
        ATerm b_35 = ATgetArgument(t, 1);
        if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
          {
            k_30 = ATgetFirst((ATermList) b_35);
            l_30 = (ATerm) ATgetNext((ATermList) b_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_30, k_30), (ATerm) ATmakeAppl(sym__2, j_30, l_30));
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm o_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_30), o_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm e_29 = NULL,h_29 = NULL,p_29 = NULL,s_29 = NULL;
  e_29 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            ATerm j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_35);
        t = e_29;
      }
    else
      {
        t = d_35;
        {
          ATerm a_30 = NULL;
          if(match_cons(t, sym__3))
            {
              h_29 = ATgetArgument(t, 0);
              p_29 = ATgetArgument(t, 1);
              s_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_29, p_29);
          t = genzip_4_0(s_7, t_7, u_7, _id, t);
          a_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_30, s_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  static ATerm v_7 (ATerm t);
  static ATerm v_7 (ATerm t)
  {
    ATerm s_16 = NULL;
    t = x_130(t);
    s_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_16, not_null(h_31));
    t = lookup_0_0(t);
    t = y_130(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((h_31 != NULL) && (h_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_31;
  t = alltd_1_0(v_7, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm q_31 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_31 = ATgetArgument(t, 0);
      {
        ATerm k_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_31;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm s_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_32;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(((ATgetType(m_35) != AT_LIST) || !(ATisEmpty(m_35))))
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) != AT_LIST) || !(ATisEmpty(n_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
        {
          u_32 = ATgetFirst((ATermList) o_35);
          v_32 = (ATerm) ATgetNext((ATermList) o_35);
        }
      else
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
          {
            w_32 = ATgetFirst((ATermList) p_35);
            x_32 = (ATerm) ATgetNext((ATermList) p_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_32, w_32), (ATerm) ATmakeAppl(sym__2, v_32, x_32));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_32), y_32);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,w_33 = NULL,a_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(match_cons(q_35, sym_VarDec_2))
        {
          c_33 = ATgetArgument(q_35, 0);
          {
            ATerm r_35 = ATgetArgument(q_35, 1);
          }
        }
      else
        _fail(t);
      d_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_33);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_35, d_33);
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, c_33), (ATerm) ATmakeAppl(sym_Defined_2, term_t_35, d_33));
  t = a_11(n_8, w_33, a_34, t);
  t = e_33;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,y_16 = NULL;
  h_34 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm u_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_l_35;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, h_34);
  t = c_11(y_16, h_34, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_35) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_34;
  return(t);
}
static ATerm w_9 (ATerm a_28, ATerm b_28, ATerm f_28, ATerm c_28, ATerm e_28, ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,p_31 = NULL;
  t = c_28;
  t = map_1_0(b_8, t);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_31, b_28, e_28);
  t = substitute_2_0(f_8, _id, t);
  n_31 = t;
  {
    static ATerm i_8 (ATerm t);
    static ATerm i_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, f_28, a_28);
      t = genzip_4_0(j_8, k_8, l_8, m_8, t);
      t = n_31;
      t = alltd_1_0(o_8, t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      return(t);
    }
    t = scope_2_0(h_8, i_8, t);
  }
  t = not_null(p_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,n_37 = NULL,p_37 = NULL,q_37 = NULL,x_4 = NULL;
  q_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_37);
  a_37 = t;
  t = b_37;
  t = new_0_0(t);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_37, n_37);
  x_4 = t;
  t = SSLsetAnnotations(x_4, a_37);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm g_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,y_4 = NULL;
  e_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_39);
  g_38 = t;
  t = b_39;
  t = new_0_0(t);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_39, c_39);
  y_4 = t;
  t = SSLsetAnnotations(y_4, g_38);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm f_39 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_39 = ATgetArgument(t, 0);
      {
        ATerm x_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_39);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm l_40 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_40 = ATgetArgument(t, 0);
      {
        ATerm y_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_40);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm j_34 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,y_36 = NULL;
  k_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_36 = ATgetFirst((ATermList) t);
      if(match_cons(a_36, sym_SDefT_4))
        {
          j_34 = ATgetArgument(a_36, 0);
          g_36 = ATgetArgument(a_36, 1);
          h_36 = ATgetArgument(a_36, 2);
          {
            ATerm d_36 = ATgetArgument(a_36, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm b_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_36;
  t = map_1_0(p_8, t);
  i_36 = t;
  t = h_36;
  t = map_1_0(q_8, t);
  j_36 = t;
  t = i_36;
  t = map_1_0(r_8, t);
  l_36 = t;
  t = j_36;
  t = map_1_0(s_8, t);
  m_36 = t;
  t = k_36;
  {
    static ATerm t_8 (ATerm t);
    static ATerm t_8 (ATerm t)
    {
      ATerm q_40 = NULL,r_40 = NULL,w_40 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm e_36 = ATgetArgument(t, 0);
          q_40 = ATgetArgument(t, 1);
          r_40 = ATgetArgument(t, 2);
          w_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_9(l_36, m_36, q_40, r_40, w_40, t);
      return(t);
    }
    t = map_1_0(t_8, t);
  }
  t = choices_0_0(t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_34, i_36, j_36, y_36);
  return(t);
}
static ATerm z_84 (ATerm l_83, ATerm o_83, ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,c_84 = NULL,d_84 = NULL,b_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_83, o_83);
  t = Definitions_0_0(t);
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_83, p_83);
  d_84 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      ATerm o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_84);
  v_83 = t;
  t = u_83;
  {
    ATerm p_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_84 = NULL,g_84 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_84 = ATgetFirst((ATermList) t);
            g_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_84;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_84;
        LocalPopChoice(r_36);
      }
    else
      {
        t = p_36;
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_84, p_83);
  b_5 = t;
  t = SSLsetAnnotations(b_5, v_83);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm k_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  n_84 = t;
  if(match_cons(t, sym__2))
    {
      o_84 = ATgetArgument(t, 0);
      r_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_84;
  if(match_cons(t, sym__2))
    {
      p_84 = ATgetArgument(t, 0);
      q_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_84;
  if(match_cons(t, sym_Mod_2))
    {
      k_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_84 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, k_84, m_84, q_84);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            w_84 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_84, r_84);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = z_84(p_84, q_84, r_84, n_84, t);
          }
      }
    }
  else
    {
      t = z_84(p_84, q_84, r_84, n_84, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_144 (ATerm), ATerm t)
{
  static ATerm i_86 (ATerm t);
  static ATerm i_86 (ATerm t)
  {
    ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
    h_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_86 = ATgetFirst((ATermList) t);
        g_86 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_31 = NULL,t_31 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(h_86);
          o_31 = t;
          t = g_86;
          t = i_86(t);
          t_31 = t;
          t = (ATerm) ATinsert(CheckATermList(t_31), f_86);
          d_5 = t;
          t = SSLsetAnnotations(d_5, o_31);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_86;
        t = e_144(t);
      }
    return(t);
  }
  t = i_86(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_85;
    }
  else
    {
      static ATerm u_8 (ATerm t);
      static ATerm u_8 (ATerm t)
      {
        t = not_null(f_85);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_85 = ATgetFirst((ATermList) t);
          if(((f_85 != NULL) && (f_85 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_85;
      t = at_end_1_0(u_8, t);
    }
  return(t);
}
static ATerm j_87 (ATerm n_86, ATerm t)
{
  ATerm s_86 = NULL;
  t = SSL_explode_term(n_86);
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,c_87 = NULL;
  c_87 = t;
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      z_86 = ATgetArgument(t, 1);
      {
        ATerm z_36 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_8 (ATerm t);
            static ATerm v_8 (ATerm t)
            {
              t = z_86;
              return(t);
            }
            t = y_86;
            t = at_end_1_0(v_8, t);
            LocalPopChoice(c_37);
          }
        else
          {
            t = z_36;
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
static ATerm q_10 (ATerm z_150 (ATerm), ATerm t_67, ATerm s_67, ATerm t)
{
  static ATerm h_88 (ATerm t);
  static ATerm h_88 (ATerm t)
  {
    ATerm a_88 = NULL,d_88 = NULL,e_88 = NULL;
    a_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_88;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_88 = ATgetFirst((ATermList) t);
            e_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_37 = t;
          int f_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_88;
              {
                static ATerm w_8 (ATerm t);
                static ATerm w_8 (ATerm t)
                {
                  t = s_67;
                  return(t);
                }
                t = d_11(z_150, w_8, d_88, e_88, t);
              }
              t = h_88(t);
              LocalPopChoice(f_37);
            }
          else
            {
              t = e_37;
              {
                ATerm b_32 = NULL,e_32 = NULL,f_5 = NULL;
                t = SSLgetAnnotations(a_88);
                b_32 = t;
                t = e_88;
                t = h_88(t);
                e_32 = t;
                t = (ATerm) ATinsert(CheckATermList(e_32), d_88);
                f_5 = t;
                t = SSLsetAnnotations(f_5, b_32);
              }
            }
        }
      }
    return(t);
  }
  t = t_67;
  t = h_88(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm h_136 (ATerm), ATerm i_136 (ATerm), ATerm t)
{
  static ATerm p_88 (ATerm t);
  static ATerm p_88 (ATerm t)
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_136(t);
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,h_5 = NULL;
          t = g_136(t);
          o_88 = t;
          if(match_cons(t, sym__2))
            {
              k_88 = ATgetArgument(t, 0);
              l_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_88);
          j_88 = t;
          t = k_88;
          t = i_136(t);
          m_88 = t;
          t = l_88;
          t = p_88(t);
          n_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_88, n_88);
          h_5 = t;
          t = SSLsetAnnotations(h_5, j_88);
          t = h_136(t);
        }
      }
    return(t);
  }
  t = p_88(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_37 = ATgetArgument(t, 0);
      if(((ATgetType(i_37) != AT_LIST) || !(ATisEmpty(i_37))))
        _fail(t);
      {
        ATerm j_37 = ATgetArgument(t, 1);
        if(((ATgetType(j_37) != AT_LIST) || !(ATisEmpty(j_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
        {
          g_89 = ATgetFirst((ATermList) k_37);
          h_89 = (ATerm) ATgetNext((ATermList) k_37);
        }
      else
        _fail(t);
      {
        ATerm l_37 = ATgetArgument(t, 1);
        if(((ATgetType(l_37) == AT_LIST) && !(ATisEmpty(l_37))))
          {
            i_89 = ATgetFirst((ATermList) l_37);
            j_89 = (ATerm) ATgetNext((ATermList) l_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_89, i_89), (ATerm) ATmakeAppl(sym__2, h_89, j_89));
  return(t);
}
static ATerm a_9 (ATerm t)
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
static ATerm v_10 (ATerm g_878, ATerm l_878, ATerm s_85, ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,e_89 = NULL;
  t = SSL_explode_term(l_878);
  if(match_cons(t, sym__2))
    {
      r_88 = ATgetArgument(t, 0);
      t_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_878);
  if(match_cons(t, sym__2))
    {
      if((r_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_88, t_88);
  t = genzip_4_0(y_8, z_8, a_9, _id, t);
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_89, s_85);
  t = conc_0_0(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_90);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_5 = NULL;
  i_90 = t;
  if(match_cons(t, sym__2))
    {
      g_90 = ATgetArgument(t, 0);
      h_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_90);
  f_90 = t;
  t = h_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_90, h_90);
  j_5 = t;
  t = SSLsetAnnotations(j_5, f_90);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,h_91 = NULL;
  b_91 = t;
  if(match_cons(t, sym__2))
    {
      c_91 = ATgetArgument(t, 0);
      d_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_91 = ATgetFirst((ATermList) t);
      h_91 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_91(c_91, d_91, b_91, t);
            LocalPopChoice(o_37);
          }
        else
          {
            t = m_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_91), e_91), h_91);
          }
      }
    }
  else
    {
      t = r_91(c_91, d_91, b_91, t);
    }
  return(t);
}
static ATerm r_91 (ATerm j_90, ATerm k_90, ATerm l_90, ATerm t)
{
  ATerm m_90 = NULL,p_90 = NULL,k_5 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t = SSLgetAnnotations(l_90);
  m_90 = t;
  t = k_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_90 = ATgetFirst((ATermList) t);
      v_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_90;
  if(match_cons(t, sym__2))
    {
      t_90 = ATgetArgument(t, 0);
      u_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_90;
        if((t_90 != t))
          {
            _fail(t);
          }
        t = v_90;
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = k_90;
        t = v_10(t_90, u_90, v_90, t);
      }
  }
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_90, p_90);
  k_5 = t;
  t = SSLsetAnnotations(k_5, m_90);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm q_91 = NULL;
  if(match_cons(t, sym__2))
    {
      q_91 = ATgetArgument(t, 0);
      if((q_91 != ATgetArgument(t, 1)))
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
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_9, c_9, g_9, t);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
        l_91 = t;
        if(match_cons(t, sym__2))
          {
            m_91 = ATgetArgument(t, 0);
            n_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_91;
        t = q_10(h_9, m_91, n_91, t);
      }
    }
  return(t);
}
static ATerm x_10 (ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm r_166 (ATerm), ATerm x_88, ATerm u_88, ATerm c_89, ATerm y_88, ATerm v_88, ATerm w_88, ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_88, y_88);
  t = p_166(t);
  if(match_cons(t, sym__2))
    {
      t_91 = ATgetArgument(t, 0);
      s_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_91;
  t = q_166(t);
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, c_89);
  t = diff_0_0(t);
  v_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, u_88);
  t = conc_0_0(t);
  w_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, c_89);
  t = conc_0_0(t);
  x_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_88, t_91, v_88);
  t = r_166(t);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__5, w_91, x_91, s_91, y_91, w_88);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm r_166 (ATerm), ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
        {
          a_92 = ATgetFirst((ATermList) x_37);
          b_92 = (ATerm) ATgetNext((ATermList) x_37);
        }
      else
        _fail(t);
      c_92 = ATgetArgument(t, 1);
      d_92 = ATgetArgument(t, 2);
      e_92 = ATgetArgument(t, 3);
      f_92 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = x_10(p_166, q_166, r_166, a_92, b_92, c_92, d_92, e_92, f_92, t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_138 (ATerm), ATerm g_138 (ATerm), ATerm t)
{
  static ATerm g_92 (ATerm t);
  static ATerm g_92 (ATerm t)
  {
    ATerm y_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_138(t);
        LocalPopChoice(a_38);
      }
    else
      {
        t = y_37;
        t = g_138(t);
        t = g_92(t);
      }
    return(t);
  }
  t = g_92(t);
  return(t);
}
ATerm for_3_0 (ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm), ATerm t)
{
  t = i_138(t);
  t = while_not_2_0(j_138, k_138, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  if(match_cons(t, sym__3))
    {
      q_92 = ATgetArgument(t, 0);
      r_92 = ATgetArgument(t, 1);
      s_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, q_92, q_92, r_92, s_92, (ATerm) ATempty);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
        _fail(t);
      {
        ATerm e_38 = ATgetArgument(t, 1);
      }
      {
        ATerm f_38 = ATgetArgument(t, 2);
      }
      v_92 = ATgetArgument(t, 3);
      w_92 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_92, w_92);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, m_9, n_9, t);
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL;
        if(match_cons(t, sym__5))
          {
            c_93 = ATgetArgument(t, 0);
            f_93 = ATgetArgument(t, 1);
            g_93 = ATgetArgument(t, 2);
            h_93 = ATgetArgument(t, 3);
            i_93 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = c_93;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_93 = ATgetFirst((ATermList) t);
            e_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, e_93, f_93, g_93, h_93, (ATerm) ATinsert(CheckATermList(i_93), d_93));
      }
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(o_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      z_92 = ATgetArgument(t, 1);
      a_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_93), z_92);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(p_38);
    }
  else
    {
      t = m_38;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  if(match_cons(t, sym_Mod_2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
      {
        ATerm q_38 = t;
        int r_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_33;
            t = l_9(i_33, j_33, m_33, t);
            LocalPopChoice(r_38);
          }
        else
          {
            t = q_38;
            t = q_33(l_33, m_33, t);
          }
      }
    }
  else
    {
      t = q_33(l_33, m_33, t);
    }
  return(t);
}
static ATerm q_33 (ATerm r_32, ATerm a_33, ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  t = term_t_16;
  g_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), a_33), term_w_16), r_32), term_u_16);
  h_33 = t;
  t = SSL_printnl(g_33, h_33);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), a_33), term_w_16), r_32), term_u_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  t = for_3_0(i_9, j_9, k_9, t);
  l_94 = t;
  if(match_cons(t, sym__2))
    {
      m_94 = ATgetArgument(t, 0);
      n_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_94;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_94;
    }
  else
    {
      ATerm n_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_94 = ATgetFirst((ATermList) t);
          p_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_94), o_94);
      t = map_1_0(q_9, t);
      t = term_i_20;
      n_32 = t;
      t = SSL_exit(n_32);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  if(match_cons(t, sym__2))
    {
      h_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(h_95, i_95, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL;
  if(match_cons(t, sym__2))
    {
      j_95 = ATgetArgument(t, 0);
      k_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(j_95, k_95, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm l_95 = NULL;
  if(match_cons(t, sym__2))
    {
      l_95 = ATgetArgument(t, 0);
      if((l_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL;
  v_94 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      y_94 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
      u_94 = ATgetArgument(t, 2);
      {
        ATerm u_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_95 = t;
  t = t_94;
  t = foldr_3_0(t_9, x_9, y_9, t);
  w_94 = t;
  t = u_94;
  t = foldr_3_0(z_9, a_10, b_10, t);
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_94, (ATerm) ATmakeAppl(sym__2, w_94, x_94));
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = (ATerm) ATempty;
      }
  }
  c_95 = t;
  t = y_94;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = (ATerm) ATempty;
      }
  }
  b_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_94, x_94));
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_94, x_94)), b_95);
  t = e_11(c_10, g_95, b_95, t);
  z_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_94, (ATerm) ATmakeAppl(sym__2, w_94, x_94));
  e_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_39, (ATerm) ATinsert(CheckATermList(c_95), v_94));
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_94, (ATerm) ATmakeAppl(sym__2, w_94, x_94)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_39, (ATerm) ATinsert(CheckATermList(c_95), v_94)));
  t = a_11(d_10, e_95, f_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_39, z_94);
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_94, (ATerm) ATmakeAppl(sym_Defined_2, term_g_39, z_94));
  t = a_11(g_10, y_94, d_95, t);
  t = a_95;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL;
  if(match_cons(t, sym__2))
    {
      a_96 = ATgetArgument(t, 0);
      b_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(a_96, b_96, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL;
  if(match_cons(t, sym__2))
    {
      c_96 = ATgetArgument(t, 0);
      d_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(c_96, d_96, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm e_96 = NULL;
  if(match_cons(t, sym__2))
    {
      e_96 = ATgetArgument(t, 0);
      if((e_96 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  o_95 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      r_95 = ATgetArgument(t, 0);
      m_95 = ATgetArgument(t, 1);
      n_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t_95 = t;
  t = m_95;
  t = foldr_3_0(h_10, n_10, o_10, t);
  p_95 = t;
  t = n_95;
  t = foldr_3_0(p_10, r_10, s_10, t);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_95, (ATerm) ATmakeAppl(sym__2, p_95, q_95));
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
  v_95 = t;
  t = r_95;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        t = (ATerm) ATempty;
      }
  }
  u_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_95, q_95));
  z_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_95, q_95)), u_95);
  t = e_11(t_10, z_95, u_95, t);
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_95, (ATerm) ATmakeAppl(sym__2, p_95, q_95));
  x_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_39, (ATerm) ATinsert(CheckATermList(v_95), o_95));
  y_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_95, (ATerm) ATmakeAppl(sym__2, p_95, q_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_39, (ATerm) ATinsert(CheckATermList(v_95), o_95)));
  t = a_11(u_10, x_95, y_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_39, s_95);
  w_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_95, (ATerm) ATmakeAppl(sym_Defined_2, term_n_39, s_95));
  t = a_11(y_10, r_95, w_95, t);
  t = t_95;
  return(t);
}
static ATerm a_11 (ATerm y_166 (ATerm), ATerm v_89, ATerm t_89, ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  i_96 = t;
  t = y_166(t);
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_96, v_89, t_89);
  t = t_11(f_96, v_89, t_89, t);
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_96 = NULL;
        t = term_g_34;
        n_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_96, term_g_34);
        t = s_11(f_96, n_96, t);
        {
          ATerm s_39 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_39;
            }
        }
        LocalPopChoice(q_39);
      }
    else
      {
        t = p_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_96 = ATgetFirst((ATermList) t);
      h_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_96, term_g_34, (ATerm) ATinsert(CheckATermList(h_96), (ATerm) ATinsert(CheckATermList(g_96), v_89)));
  t = lookup_table_0_1(f_96, t);
  m_96 = t;
  t = term_g_34;
  j_96 = t;
  t = (ATerm) ATinsert(CheckATermList(h_96), (ATerm) ATinsert(CheckATermList(g_96), v_89));
  k_96 = t;
  t = m_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(j_96, k_96, l_96, t);
  t = i_96;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm a_97 = NULL;
  a_97 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL,o_34 = NULL;
        t = term_t_38;
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_38, a_97);
        t = c_11(o_34, a_97, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_39) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            l_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_34;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        {
          ATerm w_39 = t;
          int x_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_34 = NULL,v_34 = NULL;
              t = term_t_38;
              v_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_38, a_97);
              t = c_11(v_34, a_97, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_39) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  s_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_34;
              LocalPopChoice(x_39);
            }
          else
            {
              t = w_39;
              {
                ATerm z_34 = NULL,c_35 = NULL;
                t = term_t_38;
                c_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_38, a_97);
                t = c_11(c_35, a_97, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm a_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_40) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    z_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_34;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_11 (ATerm c_73, ATerm d_73, ATerm t)
{
  ATerm e_97 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_73, d_73);
  t = s_11(c_73, d_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_97 = ATgetFirst((ATermList) t);
      {
        ATerm b_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_97;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm v_97 = NULL,x_97 = NULL;
  v_97 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_97;
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      ATerm f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL,v_35 = NULL;
        t = term_s_38;
        v_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_38, v_97);
        t = c_11(v_35, v_97, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_40) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_35;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        {
          ATerm n_40 = t;
          int o_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_35 = NULL,c_36 = NULL;
              t = term_s_38;
              c_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_38, v_97);
              t = c_11(c_36, v_97, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_40 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_40) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  z_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_35;
              LocalPopChoice(o_40);
            }
          else
            {
              t = n_40;
              {
                ATerm n_36 = NULL,q_36 = NULL;
                t = term_s_38;
                q_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_38, v_97);
                t = c_11(q_36, v_97, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_40) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    n_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL;
  if(match_cons(t, sym__2))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(r_98, s_98, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  if(match_cons(t, sym__2))
    {
      t_98 = ATgetArgument(t, 0);
      u_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(t_98, u_98, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm v_98 = NULL;
  if(match_cons(t, sym__2))
    {
      v_98 = ATgetArgument(t, 0);
      if((v_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_t_38;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL;
  f_98 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_98 = ATgetArgument(t, 0);
      d_98 = ATgetArgument(t, 1);
      e_98 = ATgetArgument(t, 2);
      {
        ATerm x_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_98 = t;
  t = d_98;
  t = foldr_3_0(z_10, r_11, u_11, t);
  g_98 = t;
  t = e_98;
  t = foldr_3_0(y_11, z_11, a_12, t);
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_98, (ATerm) ATmakeAppl(sym__2, g_98, h_98));
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        t = (ATerm) ATempty;
      }
  }
  m_98 = t;
  t = i_98;
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        t = (ATerm) ATempty;
      }
  }
  l_98 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_98, h_98));
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_98, h_98)), l_98);
  t = e_11(b_12, q_98, l_98, t);
  j_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_98, (ATerm) ATmakeAppl(sym__2, g_98, h_98));
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, (ATerm) ATinsert(CheckATermList(m_98), f_98));
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_98, (ATerm) ATmakeAppl(sym__2, g_98, h_98)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, (ATerm) ATinsert(CheckATermList(m_98), f_98)));
  t = a_11(c_12, o_98, p_98, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_41, j_98);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_98, (ATerm) ATmakeAppl(sym_Defined_2, term_d_41, j_98));
  t = a_11(e_12, i_98, n_98, t);
  t = k_98;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL;
  if(match_cons(t, sym__2))
    {
      i_99 = ATgetArgument(t, 0);
      j_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(i_99, j_99, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL;
  if(match_cons(t, sym__2))
    {
      k_99 = ATgetArgument(t, 0);
      l_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(k_99, l_99, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL;
  if(match_cons(t, sym__2))
    {
      r_99 = ATgetArgument(t, 0);
      s_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(r_99, s_99, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL;
  if(match_cons(t, sym__2))
    {
      t_99 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(t_99, u_99, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL;
  if(match_cons(t, sym__2))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(b_100, c_100, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL;
  if(match_cons(t, sym__2))
    {
      d_100 = ATgetArgument(t, 0);
      e_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(d_100, e_100, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  x_98 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            y_98 = ATgetArgument(t, 0);
            z_98 = ATgetArgument(t, 1);
            a_99 = ATgetArgument(t, 2);
            {
              ATerm g_41 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_41);
        {
          ATerm f_99 = NULL,g_99 = NULL;
          t = z_98;
          t = foldr_3_0(f_12, g_12, j_12, t);
          f_99 = t;
          t = a_99;
          t = foldr_3_0(l_12, m_12, n_12, t);
          g_99 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_98, (ATerm) ATmakeAppl(sym__2, f_99, g_99)));
        }
      }
    else
      {
        t = e_41;
        if(match_cons(t, sym_ExtSDef_3))
          {
            y_98 = ATgetArgument(t, 0);
            z_98 = ATgetArgument(t, 1);
            a_99 = ATgetArgument(t, 2);
            {
              ATerm p_99 = NULL,q_99 = NULL;
              t = z_98;
              t = foldr_3_0(o_12, p_12, s_12, t);
              p_99 = t;
              t = a_99;
              t = foldr_3_0(t_12, u_12, w_12, t);
              q_99 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_98, (ATerm) ATmakeAppl(sym__2, p_99, q_99)));
            }
          }
        else
          {
            ATerm y_99 = NULL,z_99 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                y_98 = ATgetArgument(t, 0);
                z_98 = ATgetArgument(t, 1);
                a_99 = ATgetArgument(t, 2);
                {
                  ATerm k_41 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = z_98;
            t = foldr_3_0(x_12, y_12, z_12, t);
            y_99 = t;
            t = a_99;
            t = foldr_3_0(a_13, b_13, d_13, t);
            z_99 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_98, (ATerm) ATmakeAppl(sym__2, y_99, z_99)));
          }
      }
  }
  return(t);
}
static ATerm d_11 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm z_67, ATerm y_67, ATerm t)
{
  t = i_151(t);
  {
    static ATerm e_13 (ATerm t);
    static ATerm e_13 (ATerm t)
    {
      ATerm f_100 = NULL;
      f_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_67, f_100);
      t = h_151(t);
      return(t);
    }
    t = fetch_1_0(e_13, t);
  }
  t = y_67;
  return(t);
}
static ATerm e_11 (ATerm e_151 (ATerm), ATerm v_67, ATerm u_67, ATerm t)
{
  static ATerm v_100 (ATerm t);
  static ATerm v_100 (ATerm t)
  {
    ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
    q_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_67;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_100 = ATgetFirst((ATermList) t);
            s_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_41 = t;
          int q_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_100;
              {
                static ATerm f_13 (ATerm t);
                static ATerm f_13 (ATerm t)
                {
                  t = u_67;
                  return(t);
                }
                t = d_11(e_151, f_13, r_100, s_100, t);
              }
              t = v_100(t);
              LocalPopChoice(q_41);
            }
          else
            {
              t = p_41;
              {
                ATerm w_36 = NULL,d_37 = NULL,n_5 = NULL;
                t = SSLgetAnnotations(q_100);
                w_36 = t;
                t = s_100;
                t = v_100(t);
                d_37 = t;
                t = (ATerm) ATinsert(CheckATermList(d_37), r_100);
                n_5 = t;
                t = SSLsetAnnotations(n_5, w_36);
              }
            }
        }
      }
    return(t);
  }
  t = v_67;
  t = v_100(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_154 (ATerm), ATerm e_154 (ATerm), ATerm f_154 (ATerm), ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  y_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_100;
      t = d_154(t);
    }
  else
    {
      ATerm d_101 = NULL,e_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_100 = ATgetFirst((ATermList) t);
          a_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_100;
      t = f_154(t);
      d_101 = t;
      t = a_101;
      t = foldr_3_0(d_154, e_154, f_154, t);
      e_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_101, e_101);
      t = e_154(t);
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL;
  if(match_cons(t, sym__2))
    {
      i_101 = ATgetArgument(t, 0);
      j_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(j_13, i_101, j_101, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm k_101 = NULL;
  if(match_cons(t, sym__2))
    {
      k_101 = ATgetArgument(t, 0);
      if((k_101 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      {
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
  h_101 = t;
  t = foldr_3_0(g_13, h_13, DefinitionName_0_0, t);
  f_101 = t;
  t = h_101;
  t = map_1_0(k_13, t);
  g_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_101, g_101, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL,q_101 = NULL,r_5 = NULL;
  q_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_101 = ATgetFirst((ATermList) t);
      n_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_101);
  l_101 = t;
  t = m_101;
  t = c_106(t);
  o_101 = t;
  t = n_101;
  t = d_106(t);
  p_101 = t;
  t = (ATerm) ATinsert(CheckATermList(p_101), o_101);
  r_5 = t;
  t = SSLsetAnnotations(r_5, l_101);
  return(t);
}
static ATerm f_11 (ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm r_101 = NULL;
  t = SSL_fputc(u_49, v_49);
  r_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_101);
  return(t);
}
static ATerm g_11 (ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm s_101 = NULL;
  t = SSL_write_term_to_stream_text(a_48, b_48);
  s_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_101);
  return(t);
}
static ATerm i_11 (ATerm d_139 (ATerm), ATerm l_360, ATerm g_48, ATerm t)
{
  ATerm t_101 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_360, term_v_41);
  t = m_11(t);
  t_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_101, g_48);
  t = d_139(t);
  t = fclose_0_0(t);
  t = g_48;
  return(t);
}
static ATerm h_11 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm u_101 = NULL;
  t = SSL_write_term_to_stream_baf(w_47, x_47);
  u_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_101);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_41 = ATgetArgument(t, 0);
      if(match_cons(w_41, sym_Stream_1))
        {
          b_102 = ATgetArgument(w_41, 0);
        }
      else
        _fail(t);
      c_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(b_102, c_102, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(match_cons(x_41, sym_Stream_1))
        {
          g_102 = ATgetArgument(x_41, 0);
        }
      else
        _fail(t);
      h_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(g_102, h_102, t);
  d_102 = t;
  t = term_k_21;
  e_102 = t;
  t = d_102;
  if(match_cons(t, sym_Stream_1))
    {
      f_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, d_102);
  t = f_11(e_102, f_102, t);
  return(t);
}
ATerm output_1_0 (ATerm y_161 (ATerm), ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL;
  t = y_161(t);
  w_101 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_101 = NULL,y_101 = NULL;
        t = term_a_42;
        x_101 = t;
        t = term_b_42;
        y_101 = t;
        t = term_c_42;
        t = s_11(x_101, y_101, t);
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
        t = term_e_42;
      }
  }
  v_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_101, w_101);
  {
    ATerm h_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_101 = NULL,a_102 = NULL;
        t = term_a_42;
        z_101 = t;
        t = term_k_42;
        a_102 = t;
        t = term_l_42;
        t = s_11(z_101, a_102, t);
        t = (ATerm) ATmakeAppl(sym__2, v_101, w_101);
        LocalPopChoice(j_42);
        if(match_cons(t, sym__2))
          {
            ATerm m_42 = ATgetArgument(t, 0);
            ATerm n_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_11(l_13, v_101, w_101, t);
      }
    else
      {
        t = h_42;
        if(match_cons(t, sym__2))
          {
            ATerm o_42 = ATgetArgument(t, 0);
            ATerm p_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_11(m_13, v_101, w_101, t);
      }
  }
  return(t);
}
static ATerm v_102 (ATerm p_102, ATerm t)
{
  t = SSL_fclose(p_102);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL;
  t_102 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_102 = ATgetArgument(t, 0);
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_102);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            t = v_102(t_102, t);
          }
      }
    }
  else
    {
      t = v_102(t_102, t);
    }
  return(t);
}
static ATerm j_11 (ATerm c_48, ATerm t)
{
  t = SSL_read_term_from_stream(c_48);
  return(t);
}
static ATerm k_11 (ATerm c_67, ATerm d_67, ATerm t)
{
  t = SSL_strcat(c_67, d_67);
  return(t);
}
static ATerm l_11 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm w_102 = NULL;
  t = SSL_fopen(w_49, x_49);
  w_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_102);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_102 = NULL;
  t = SSL_stdin_stream();
  x_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_102);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_102 = NULL;
  t = SSL_stdout_stream();
  y_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_102);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_102 = NULL;
  t = SSL_stderr_stream();
  z_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_102);
  return(t);
}
static ATerm g_104 (ATerm f_103, ATerm t)
{
  ATerm g_103 = NULL;
  t = SSL_explode_term(f_103);
  if(match_cons(t, sym__2))
    {
      ATerm s_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_42 = ATgetArgument(t, 1);
        if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
          {
            g_103 = ATgetFirst((ATermList) t_42);
            {
              ATerm u_42 = (ATerm) ATgetNext((ATermList) t_42);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_103;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_103;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_103;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_103;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_104 (ATerm j_103, ATerm k_103, ATerm l_103, ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,r_103 = NULL,t_5 = NULL;
  t = SSLgetAnnotations(l_103);
  o_103 = t;
  t = j_103;
  if(match_cons(t, sym_Path_1))
    {
      r_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_103, k_103);
  t_5 = t;
  t = SSLsetAnnotations(t_5, o_103);
  if(match_cons(t, sym__2))
    {
      m_103 = ATgetArgument(t, 0);
      n_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(m_103, n_103, t);
  return(t);
}
static ATerm i_104 (ATerm t_103, ATerm u_103, ATerm v_103, ATerm t)
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL,b_104 = NULL,v_5 = NULL;
  t = SSLgetAnnotations(v_103);
  y_103 = t;
  t = SSL_is_string(t_103);
  b_104 = t;
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
  t = l_11(w_103, x_103, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  d_104 = t;
  if(match_cons(t, sym__2))
    {
      e_104 = ATgetArgument(t, 0);
      f_104 = ATgetArgument(t, 1);
      {
        ATerm v_42 = t;
        int w_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_104(d_104, t);
            LocalPopChoice(w_42);
          }
        else
          {
            t = v_42;
            {
              ATerm x_42 = t;
              int y_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_104(e_104, f_104, d_104, t);
                  LocalPopChoice(y_42);
                }
              else
                {
                  t = x_42;
                  t = i_104(e_104, f_104, d_104, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_104(d_104, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,r_104 = NULL;
  r_104 = t;
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_104, term_b_43);
        t = m_11(t);
        LocalPopChoice(a_43);
      }
    else
      {
        t = z_42;
        {
          ATerm t_37 = NULL,u_37 = NULL;
          t = term_c_43;
          u_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_43, r_104);
          t = k_11(u_37, r_104, t);
          t_37 = t;
          t = SSL_perror(t_37);
          _fail(t);
        }
      }
  }
  l_104 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(m_104, t);
  k_104 = t;
  t = l_104;
  t = fclose_0_0(t);
  t = k_104;
  return(t);
}
ATerm input_1_0 (ATerm z_161 (ATerm), ATerm t)
{
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_104 = NULL,v_104 = NULL;
      t = term_a_42;
      u_104 = t;
      t = term_f_43;
      v_104 = t;
      t = term_g_43;
      t = s_11(u_104, v_104, t);
      LocalPopChoice(e_43);
    }
  else
    {
      t = d_43;
      t = term_h_43;
    }
  t = ReadFromFile_0_0(t);
  t = z_161(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL;
  t = term_a_42;
  w_104 = t;
  t = term_i_43;
  x_104 = t;
  t = term_j_43;
  t = s_11(w_104, x_104, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL;
  z_104 = t;
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_104;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_43 = ATgetFirst((ATermList) t);
                ATerm n_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_104;
          }
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        t = (ATerm) ATinsert(ATempty, z_104);
      }
  }
  a_105 = t;
  t = term_e_42;
  b_105 = t;
  t = SSL_printnl(b_105, a_105);
  t = z_104;
  return(t);
}
ATerm map_1_0 (ATerm p_143 (ATerm), ATerm t)
{
  static ATerm t_105 (ATerm t);
  static ATerm t_105 (ATerm t)
  {
    ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
    q_105 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_105;
      }
    else
      {
        ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL,y_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_105 = ATgetFirst((ATermList) t);
            s_105 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_105);
        z_37 = t;
        t = r_105;
        t = p_143(t);
        c_38 = t;
        t = s_105;
        t = t_105(t);
        d_38 = t;
        t = (ATerm) ATinsert(CheckATermList(d_38), c_38);
        y_5 = t;
        t = SSLsetAnnotations(y_5, z_37);
      }
    return(t);
  }
  t = t_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_105 = ATgetFirst((ATermList) t);
      x_105 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_106 = NULL,e_106 = NULL;
        static ATerm n_13 (ATerm t);
        static ATerm n_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_106)), not_null(e_106));
          return(t);
        }
        t = x_105;
        t = r_0(t);
        if(((b_106 != NULL) && (b_106 != t)))
          _fail(t);
        else
          b_106 = t;
        t = w_105;
        t = p_0(t);
        if(((e_106 != NULL) && (e_106 != t)))
          _fail(t);
        else
          e_106 = t;
        t = x_105;
        t = reverse_acc_2_0(p_0, n_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_30;
      t = r_0(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL,a_6 = NULL;
  o_106 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_106);
  m_106 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_106);
  a_6 = t;
  t = SSLsetAnnotations(a_6, m_106);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm s_106 = NULL;
  s_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_106), term_o_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_163 (ATerm), ATerm y_163 (ATerm), ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL;
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_106 = NULL,l_106 = NULL;
      t = term_a_42;
      k_106 = t;
      t = term_i_43;
      l_106 = t;
      t = term_j_43;
      t = s_11(k_106, l_106, t);
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      t = fetch_1_0(o_13, t);
    }
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_163(t);
        t = echo_0_0(t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
      }
  }
  t = term_t_43;
  t = echo_0_0(t);
  t = term_u_43;
  i_106 = t;
  t = term_v_43;
  j_106 = t;
  t = term_w_43;
  t = s_11(i_106, j_106, t);
  t = reverse_acc_2_0(_id, r_13, t);
  t = map_1_0(t_13, t);
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_106 = NULL;
        t = y_163(t);
        t_106 = t;
        t = (ATerm) ATinsert(CheckATermList(t_106), term_z_43);
        t = echo_0_0(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,d_6 = NULL;
  b_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_107);
  z_106 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_107);
  d_6 = t;
  t = SSLsetAnnotations(d_6, z_106);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_106 = NULL;
  w_106 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_106 = NULL,y_106 = NULL;
        t = term_a_42;
        x_106 = t;
        t = term_i_43;
        y_106 = t;
        t = term_j_43;
        t = s_11(x_106, y_106, t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = fetch_1_0(u_13, t);
      }
  }
  t = w_106;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm d_107 = NULL;
  d_107 = t;
  if(match_string(t, "-k"))
    {
      t = d_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_107;
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
  e_107 = t;
  t = SSL_string_to_int(e_107);
  f_107 = t;
  t = term_c_44;
  g_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_44, f_107);
  t = v_11(g_107, f_107, t);
  t = e_107;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_d_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_13, w_13, x_13, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm i_107 = NULL;
  i_107 = t;
  if(match_string(t, "-S"))
    {
      t = i_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_107;
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL;
  t = term_e_44;
  j_107 = t;
  t = term_b_20;
  k_107 = t;
  t = term_f_44;
  t = v_11(j_107, k_107, t);
  t = term_g_44;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_h_44;
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
  ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
  l_107 = t;
  t = SSL_string_to_int(l_107);
  m_107 = t;
  t = term_e_44;
  n_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_44, m_107);
  t = v_11(n_107, m_107, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_107);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL;
  t = term_j_44;
  o_107 = t;
  t = term_x_30;
  p_107 = t;
  t = term_k_44;
  t = v_11(o_107, p_107, t);
  t = term_l_44;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_m_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_14, d_14, f_14, t);
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_14, h_14, i_14, t);
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = Option_3_0(j_14, k_14, m_14, t);
          }
      }
    }
  return(t);
}
static ATerm v_11 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL;
  t = term_a_42;
  q_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_42, q_53, r_53);
  t = lookup_table_0_1(q_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(q_53, r_53, r_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_42, q_53, r_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL;
      t = term_x_30;
      t = g_0(t);
      x_107 = t;
      t = term_u_43;
      y_107 = t;
      t = term_v_43;
      z_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, x_107);
      t = t_11(y_107, z_107, x_107, t);
      _fail(t);
    }
  else
    {
      ATerm c_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_107 = ATgetFirst((ATermList) t);
          w_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_107;
      t = d_0(t);
      t = term_x_30;
      t = f_0(t);
      c_108 = t;
      t = (ATerm) ATinsert(CheckATermList(w_107), c_108);
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm e_108 = NULL;
  e_108 = t;
  if(match_string(t, "-o"))
    {
      t = e_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_108;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL;
  f_108 = t;
  t = term_b_42;
  g_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_42, f_108);
  t = v_11(g_108, f_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_108);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_r_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_14, o_14, p_14, t);
  return(t);
}
static ATerm t_11 (ATerm r_72, ATerm s_72, ATerm q_72, ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL;
  i_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_72, s_72);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_44 = ATgetArgument(t, 0);
            ATerm v_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_72, s_72);
        t = s_11(r_72, s_72, t);
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = (ATerm) ATempty;
      }
  }
  j_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_72, s_72, (ATerm) ATinsert(CheckATermList(j_108), q_72));
  t = lookup_table_0_1(r_72, t);
  m_108 = t;
  t = (ATerm) ATinsert(CheckATermList(j_108), q_72);
  k_108 = t;
  t = m_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(s_72, k_108, l_108, t);
  t = i_108;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
      t = term_x_30;
      t = n_0(t);
      x_108 = t;
      t = term_u_43;
      y_108 = t;
      t = term_v_43;
      z_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_43, term_v_43, x_108);
      t = t_11(y_108, z_108, x_108, t);
      _fail(t);
    }
  else
    {
      ATerm d_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_108 = ATgetFirst((ATermList) t);
          u_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_108 = ATgetFirst((ATermList) t);
          w_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_108;
      t = j_0(t);
      t = v_108;
      t = l_0(t);
      d_109 = t;
      t = (ATerm) ATinsert(CheckATermList(w_108), d_109);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm f_109 = NULL;
  f_109 = t;
  if(match_string(t, "-i"))
    {
      t = f_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_109;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL;
  g_109 = t;
  t = term_f_43;
  h_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, g_109);
  t = v_11(h_109, g_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_109);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_14, r_14, s_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_30;
  t = whoami_0_0(t);
  i_109 = t;
  t = term_t_16;
  k_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_44), i_109);
  l_109 = t;
  t = SSL_printnl(k_109, l_109);
  t = term_i_20;
  j_109 = t;
  t = SSL_exit(j_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL;
  t = term_a_42;
  m_109 = t;
  t = term_i_43;
  n_109 = t;
  t = term_j_43;
  t = s_11(m_109, n_109, t);
  return(t);
}
static ATerm n_11 (ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_56, q_56);
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
      t = SSL_addr(p_56, q_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL;
  p_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_109;
      t = b_154(t);
    }
  else
    {
      ATerm u_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_109 = ATgetFirst((ATermList) t);
          r_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_109;
      t = foldr_2_0(b_154, c_154, t);
      u_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_109, u_109);
      t = c_154(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym__2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11(n_38, o_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_109 = NULL,j_38 = NULL,k_38 = NULL;
  t = times_0_0(t);
  k_38 = t;
  t = SSL_explode_term(k_38);
  if(match_cons(t, sym__2))
    {
      ATerm b_45 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_38;
  t = foldr_2_0(v_14, w_14, t);
  x_109 = t;
  t = SSL_TicksToSeconds(x_109);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
  i_110 = t;
  if(match_cons(t, sym__2))
    {
      j_110 = ATgetArgument(t, 0);
      k_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110;
        if((j_110 != t))
          {
            _fail(t);
          }
        t = i_110;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATmakeAppl(sym__2, j_110, k_110);
        {
          ATerm h_45 = t;
          int k_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_110, k_110);
              LocalPopChoice(k_45);
            }
          else
            {
              t = h_45;
              t = SSL_gtr(j_110, k_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_110, k_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm o_110 = NULL;
  o_110 = t;
  {
    ATerm n_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL;
        t = term_a_42;
        r_110 = t;
        t = term_e_44;
        s_110 = t;
        t = term_q_45;
        t = s_11(r_110, s_110, t);
        q_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_110, term_i_20);
        t = geq_0_0(t);
        t = o_110;
        t = u_140(t);
        LocalPopChoice(p_45);
      }
    else
      {
        t = n_45;
        t = o_110;
      }
  }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL,x_110 = NULL,y_110 = NULL;
  t = run_time_0_0(t);
  u_110 = t;
  t = term_x_30;
  t = whoami_0_0(t);
  v_110 = t;
  t = term_t_16;
  x_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_45), u_110), term_r_45), v_110);
  y_110 = t;
  t = SSL_printnl(x_110, y_110);
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_45), u_110), term_r_45), v_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_20;
  z_110 = t;
  t = SSL_exit(z_110);
  return(t);
}
static ATerm w_11 (ATerm g_77, ATerm h_77, ATerm i_77, ATerm t)
{
  ATerm a_111 = NULL;
  t = SSL_hashtable_put(i_77, g_77, h_77);
  a_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_74, ATerm t)
{
  ATerm j_111 = NULL;
  t = table_hashtable_0_0(t);
  j_111 = t;
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL;
        t = j_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_11(d_74, z_38, t);
        LocalPopChoice(w_45);
      }
    else
      {
        t = v_45;
        {
          ATerm j_39 = NULL;
          t = d_74;
          t = table_create_0_0(t);
          t = j_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_11(d_74, j_39, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_77, ATerm p_77, ATerm t)
{
  ATerm m_111 = NULL;
  t = SSL_hashtable_create(o_77, p_77);
  m_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_111);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,r_111 = NULL,s_111 = NULL;
  n_111 = t;
  t = term_y_45;
  r_111 = t;
  t = term_a_46;
  s_111 = t;
  t = n_111;
  t = new_hashtable_0_2(r_111, s_111, t);
  o_111 = t;
  t = n_111;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(n_111, o_111, p_111, t);
  t = n_111;
  return(t);
}
static ATerm p_11 (ATerm l_77, ATerm m_77, ATerm t)
{
  ATerm t_111 = NULL;
  t = SSL_hashtable_remove(m_77, l_77);
  t_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_111);
  return(t);
}
static ATerm q_11 (ATerm q_77, ATerm t)
{
  ATerm u_111 = NULL;
  t = SSL_hashtable_destroy(q_77);
  u_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_111);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_111 = NULL;
  t = SSL_table_hashtable();
  v_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_111);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL;
  w_111 = t;
  t = table_hashtable_0_0(t);
  x_111 = t;
  t = lookup_table_0_1(w_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(z_111, t);
  t = x_111;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(w_111, y_111, t);
  t = w_111;
  return(t);
}
ATerm fetch_1_0 (ATerm x_143 (ATerm), ATerm t)
{
  static ATerm w_112 (ATerm t);
  static ATerm w_112 (ATerm t)
  {
    ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL;
    t_112 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_112 = ATgetFirst((ATermList) t);
        v_112 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_46 = t;
      int c_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_39 = NULL,r_39 = NULL,f_6 = NULL;
          t = SSLgetAnnotations(t_112);
          o_39 = t;
          t = u_112;
          t = x_143(t);
          r_39 = t;
          t = (ATerm) ATinsert(CheckATermList(v_112), r_39);
          f_6 = t;
          t = SSLsetAnnotations(f_6, o_39);
          LocalPopChoice(c_46);
        }
      else
        {
          t = b_46;
          {
            ATerm z_39 = NULL,c_40 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(t_112);
            z_39 = t;
            t = v_112;
            t = w_112(t);
            c_40 = t;
            t = (ATerm) ATinsert(CheckATermList(c_40), u_112);
            h_6 = t;
            t = SSLsetAnnotations(h_6, z_39);
          }
        }
    }
    return(t);
  }
  t = w_112(t);
  return(t);
}
static ATerm x_11 (ATerm j_77, ATerm k_77, ATerm t)
{
  t = SSL_hashtable_get(k_77, j_77);
  return(t);
}
static ATerm s_11 (ATerm k_74, ATerm l_74, ATerm t)
{
  ATerm z_112 = NULL;
  t = lookup_table_0_1(k_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_11(l_74, z_112, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm b_113 = NULL,c_113 = NULL;
  t = term_d_46;
  b_113 = t;
  t = term_x_30;
  c_113 = t;
  t = term_e_46;
  t = v_11(b_113, c_113, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  t = term_d_46;
  f_113 = t;
  t = term_x_30;
  g_113 = t;
  t = term_e_46;
  t = v_11(f_113, g_113, t);
  t = term_i_46;
  d_113 = t;
  t = term_x_30;
  e_113 = t;
  t = term_j_46;
  t = v_11(d_113, e_113, t);
  t = term_l_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_15, d_15, e_15, t);
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
      t = Option_3_0(h_15, i_15, j_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_163 (ATerm), ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,q_113 = NULL,r_113 = NULL,k_6 = NULL;
  l_113 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_46;
        t = s_163(t);
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
      }
  }
  t = l_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_113 = ATgetFirst((ATermList) t);
      o_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_113);
  m_113 = t;
  t = term_i_43;
  r_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_43, n_113);
  t = v_11(r_113, n_113, t);
  t = o_113;
  {
    static ATerm b_114 (ATerm t);
    static ATerm b_114 (ATerm t)
    {
      ATerm y_46 = t;
      int z_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_47 = t;
          int d_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_113 = NULL;
              u_113 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_113;
              LocalPopChoice(d_47);
            }
          else
            {
              t = c_47;
              t = s_163(t);
              t = Cons_2_0(_id, b_114, t);
            }
          LocalPopChoice(z_46);
        }
      else
        {
          t = y_46;
          {
            ATerm x_113 = NULL,y_113 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_113 = ATgetFirst((ATermList) t);
                y_113 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_113), (ATerm) ATmakeAppl(sym_Undefined_1, x_113));
          }
        }
      return(t);
    }
    t = b_114(t);
  }
  q_113 = t;
  t = (ATerm) ATinsert(CheckATermList(q_113), (ATerm) ATmakeAppl(sym_Program_1, n_113));
  k_6 = t;
  t = SSLsetAnnotations(k_6, m_113);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm o_114 = NULL;
  o_114 = t;
  if(match_string(t, "--help"))
    {
      t = o_114;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_114;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_114;
        }
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL;
  t = term_j_47;
  p_114 = t;
  t = term_x_30;
  q_114 = t;
  t = term_k_47;
  t = v_11(p_114, q_114, t);
  t = term_l_47;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_n_47;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_163 (ATerm), ATerm q_163 (ATerm), ATerm r_163 (ATerm), ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
  i_114 = t;
  t = term_u_43;
  j_114 = t;
  t = term_o_47;
  t = lookup_table_0_1(j_114, t);
  n_114 = t;
  t = term_v_43;
  k_114 = t;
  t = (ATerm) ATempty;
  l_114 = t;
  t = n_114;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(k_114, l_114, m_114, t);
  t = i_114;
  {
    static ATerm k_15 (ATerm t);
    static ATerm k_15 (ATerm t)
    {
      ATerm q_47 = t;
      int r_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_163(t);
          LocalPopChoice(r_47);
        }
      else
        {
          t = q_47;
          {
            ATerm s_47 = t;
            int t_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_15, m_15, n_15, t);
                LocalPopChoice(t_47);
              }
            else
              {
                t = s_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_15, t);
  }
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_115 = NULL;
        b_115 = t;
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_40 = NULL;
              t = b_115;
              {
                ATerm d_48 = t;
                int e_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_40 = NULL,m_40 = NULL;
                    t = term_a_42;
                    k_40 = t;
                    t = term_j_47;
                    m_40 = t;
                    t = term_f_48;
                    t = s_11(k_40, m_40, t);
                    LocalPopChoice(e_48);
                  }
                else
                  {
                    t = d_48;
                    t = fetch_1_0(o_15, t);
                  }
              }
              t = b_115;
              t = q_163(t);
              t = term_b_20;
              j_40 = t;
              t = SSL_exit(j_40);
              LocalPopChoice(z_47);
            }
          else
            {
              t = y_47;
              {
                ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
                t = term_a_42;
                t_40 = t;
                t = term_d_46;
                u_40 = t;
                t = term_h_48;
                t = s_11(t_40, u_40, t);
                t = b_115;
                t = r_163(t);
                t = term_b_20;
                s_40 = t;
                t = SSL_exit(s_40);
              }
            }
        }
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm i_48 = t;
          int j_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL;
              static ATerm p_15 (ATerm t);
              static ATerm p_15 (ATerm t)
              {
                ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,r_6 = NULL;
                h_115 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_115 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_115);
                f_115 = t;
                t = g_115;
                if(((g_114 != NULL) && (g_114 != t)))
                  _fail(t);
                else
                  g_114 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_115);
                r_6 = t;
                t = SSLsetAnnotations(r_6, f_115);
                return(t);
              }
              t = fetch_1_0(p_15, t);
              t = term_t_16;
              d_115 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_114)), term_k_48);
              e_115 = t;
              t = SSL_printnl(d_115, e_115);
              t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_114)), term_k_48));
              t = q_163(t);
              t = term_i_20;
              c_115 = t;
              t = SSL_exit(c_115);
              LocalPopChoice(j_48);
            }
          else
            {
              t = i_48;
            }
        }
      }
  }
  h_114 = t;
  t = term_u_43;
  t = table_destroy_0_0(t);
  t = h_114;
  return(t);
}
ATerm option_wrap_5_0 (ATerm s_161 (ATerm), ATerm t_161 (ATerm), ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm w_161 (ATerm), ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
  t = parse_options_3_0(s_161, t_161, u_161, t);
  m_115 = t;
  t = term_l_48;
  t = table_create_0_0(t);
  t = term_l_48;
  n_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_48, term_m_48, m_115);
  t = lookup_table_0_1(n_115, t);
  q_115 = t;
  t = term_m_48;
  o_115 = t;
  t = q_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(o_115, m_115, p_115, t);
  t = m_115;
  t = v_161(t);
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_161(t);
        t = report_success_0_0(t);
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm p_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_48);
    }
  else
    {
      t = p_48;
      {
        ATerm v_48 = t;
        int w_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_48);
          }
        else
          {
            t = v_48;
            {
              ATerm x_48 = t;
              int y_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_16, h_16, k_16, t);
                  LocalPopChoice(y_48);
                }
              else
                {
                  t = x_48;
                  {
                    ATerm z_48 = t;
                    int a_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_49);
                      }
                    else
                      {
                        t = z_48;
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
static ATerm z_15 (ATerm t)
{
  t = input_1_0(l_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL;
  t = term_k_42;
  s_115 = t;
  t = term_x_30;
  t_115 = t;
  t = term_b_49;
  t = v_11(s_115, t_115, t);
  t = term_c_49;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_d_49;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = output_1_0(n_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,g_7 = NULL,x_6 = NULL;
  c_116 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_116);
  v_115 = t;
  t = w_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_115 = ATgetFirst((ATermList) t);
      z_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_115);
  x_115 = t;
  t = z_115;
  t = Cons_2_0(p_16, q_16, t);
  a_116 = t;
  t = (ATerm) ATinsert(CheckATermList(a_116), y_115);
  x_6 = t;
  t = SSLsetAnnotations(x_6, x_115);
  b_116 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_116);
  g_7 = t;
  t = SSLsetAnnotations(g_7, v_115);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL,w_6 = NULL;
  g_116 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_116);
  d_116 = t;
  t = e_116;
  t = all_defs_0_0(t);
  f_116 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_116);
  w_6 = t;
  t = SSLsetAnnotations(w_6, d_116);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(s_15, default_system_usage_0_0, default_system_about_0_0, _id, z_15, t);
  return(t);
}
