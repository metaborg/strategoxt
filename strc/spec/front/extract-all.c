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
static ATerm term_z_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_h_47;
static ATerm term_g_47;
static ATerm term_f_47;
static ATerm term_c_47;
static ATerm term_b_47;
static ATerm term_q_46;
static ATerm term_p_46;
static ATerm term_o_46;
static ATerm term_n_46;
static ATerm term_m_46;
static ATerm term_h_46;
static ATerm term_c_46;
static ATerm term_b_46;
static ATerm term_a_46;
static ATerm term_z_45;
static ATerm term_y_45;
static ATerm term_x_45;
static ATerm term_u_45;
static ATerm term_r_45;
static ATerm term_q_45;
static ATerm term_l_45;
static ATerm term_k_45;
static ATerm term_j_45;
static ATerm term_z_44;
static ATerm term_y_44;
static ATerm term_t_44;
static ATerm term_k_44;
static ATerm term_j_44;
static ATerm term_i_44;
static ATerm term_h_44;
static ATerm term_g_44;
static ATerm term_f_44;
static ATerm term_e_44;
static ATerm term_d_44;
static ATerm term_c_44;
static ATerm term_b_44;
static ATerm term_a_44;
static ATerm term_w_43;
static ATerm term_t_43;
static ATerm term_s_43;
static ATerm term_q_43;
static ATerm term_o_43;
static ATerm term_j_43;
static ATerm term_z_42;
static ATerm term_y_42;
static ATerm term_x_42;
static ATerm term_w_42;
static ATerm term_u_42;
static ATerm term_r_42;
static ATerm term_l_42;
static ATerm term_m_41;
static ATerm term_l_41;
static ATerm term_i_41;
static ATerm term_h_41;
static ATerm term_g_41;
static ATerm term_f_41;
static ATerm term_y_40;
static ATerm term_l_40;
static ATerm term_k_40;
static ATerm term_x_38;
static ATerm term_w_38;
static ATerm term_p_38;
static ATerm term_o_38;
static ATerm term_g_38;
static ATerm term_f_38;
static ATerm term_b_35;
static ATerm term_s_34;
static ATerm term_t_33;
static ATerm term_x_30;
static ATerm term_w_30;
static ATerm term_f_30;
static ATerm term_e_30;
static ATerm term_z_29;
static ATerm term_t_29;
static ATerm term_s_29;
static ATerm term_q_29;
static ATerm term_h_25;
static ATerm term_f_25;
static ATerm term_e_24;
static ATerm term_o_23;
static ATerm term_e_23;
static ATerm term_a_23;
static ATerm term_w_22;
static ATerm term_v_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_r_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_n_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_u_20;
static ATerm term_v_19;
static ATerm term_u_19;
static ATerm term_m_17;
static ATerm term_n_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_g_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Call_2, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Call_2, term_g_22, (ATerm) ATempty);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_q_29, (ATerm) ATempty);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_g_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_l_41);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_u_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_y_42);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_s_43);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_u_19);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_19);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_h_44, term_z_29);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_c_44);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_z_29);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_z_29);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__2, term_m_46, term_z_29);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym__3, term_q_43, term_s_43, (ATerm) ATempty);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_m_46);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym__2, term_f_41, term_u_45);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym__2, term_l_41, term_z_29);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_9 (ATerm r_26, ATerm t_26, ATerm u_26, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm e_130 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm p_9 (ATerm e_41, ATerm d_41, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm e_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_148 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
static ATerm o_48 (ATerm u_41, ATerm v_41, ATerm t);
static ATerm p_48 (ATerm c_42, ATerm e_42, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm y_9 (ATerm f_35, ATerm g_35, ATerm h_35, ATerm t);
static ATerm j_61 (ATerm a_61, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm k_132 (ATerm), ATerm t);
static ATerm c_10 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm g_131 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm n_135 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm d_10 (ATerm r_56, ATerm s_56, ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm copy_1_0 (ATerm f_154 (ATerm), ATerm t);
static ATerm e_10 (ATerm n_25, ATerm o_25, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_80 (ATerm w_76, ATerm x_76, ATerm f_77, ATerm l_77, ATerm t);
static ATerm d_80 (ATerm p_78, ATerm q_78, ATerm x_78, ATerm a_79, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm r_143 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm t_138 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm y_132 (ATerm), ATerm t);
static ATerm q_9 (ATerm o_72, ATerm p_72, ATerm t);
ATerm end_scope_1_0 (ATerm j_166 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_166 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_166 (ATerm), ATerm l_166 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm u_9 (ATerm a_28, ATerm b_28, ATerm f_28, ATerm c_28, ATerm e_28, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm d_82 (ATerm m_80, ATerm n_80, ATerm o_80, ATerm p_80, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_143 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_84 (ATerm z_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_10 (ATerm n_150 (ATerm), ATerm l_67, ATerm k_67, ATerm t);
ATerm genzip_4_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm p_10 (ATerm y_872, ATerm d_873, ATerm k_85, ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm s_87 (ATerm m_86, ATerm n_86, ATerm o_86, ATerm t);
static ATerm a_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_10 (ATerm d_166 (ATerm), ATerm e_166 (ATerm), ATerm f_166 (ATerm), ATerm p_88, ATerm m_88, ATerm u_88, ATerm q_88, ATerm n_88, ATerm o_88, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm d_166 (ATerm), ATerm e_166 (ATerm), ATerm f_166 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_32 (ATerm z_31, ATerm a_32, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm u_10 (ATerm m_166 (ATerm), ATerm n_89, ATerm l_89, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm w_10 (ATerm u_72, ATerm v_72, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
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
ATerm DefinitionName_0_0 (ATerm t);
static ATerm x_10 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm r_67, ATerm q_67, ATerm t);
static ATerm y_10 (ATerm s_150 (ATerm), ATerm n_67, ATerm m_67, ATerm t);
ATerm foldr_3_0 (ATerm r_153 (ATerm), ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t);
static ATerm z_10 (ATerm q_49, ATerm r_49, ATerm t);
static ATerm a_11 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm c_11 (ATerm v_138 (ATerm), ATerm j_358, ATerm c_48, ATerm t);
static ATerm b_11 (ATerm s_47, ATerm t_47, ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm output_1_0 (ATerm m_161 (ATerm), ATerm t);
static ATerm r_99 (ATerm l_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_11 (ATerm y_47, ATerm t);
static ATerm e_11 (ATerm u_66, ATerm v_66, ATerm t);
static ATerm f_11 (ATerm s_49, ATerm t_49, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_101 (ATerm b_100, ATerm t);
static ATerm d_101 (ATerm f_100, ATerm g_100, ATerm h_100, ATerm t);
static ATerm e_101 (ATerm p_100, ATerm q_100, ATerm r_100, ATerm t);
static ATerm g_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_161 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_143 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_163 (ATerm), ATerm m_163 (ATerm), ATerm t);
static ATerm p_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_11 (ATerm m_53, ATerm n_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_11 (ATerm j_72, ATerm k_72, ATerm i_72, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_11 (ATerm l_56, ATerm m_56, ATerm t);
ATerm foldr_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_140 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_11 (ATerm y_76, ATerm z_76, ATerm a_77, ATerm t);
ATerm lookup_table_0_1 (ATerm v_73, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_77, ATerm h_77, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_11 (ATerm d_77, ATerm e_77, ATerm t);
static ATerm k_11 (ATerm i_77, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_143 (ATerm), ATerm t);
static ATerm r_11 (ATerm b_77, ATerm c_77, ATerm t);
static ATerm m_11 (ATerm c_74, ATerm d_74, ATerm t);
static ATerm r_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_163 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm parse_options_3_0 (ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm i_161 (ATerm), ATerm j_161 (ATerm), ATerm k_161 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_9 (ATerm r_26, ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm c_0 = NULL,s_0 = NULL;
  t = term_g_16;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), u_26), term_l_16), t_26), term_k_16), r_26), term_h_16);
  s_0 = t;
  t = SSL_printnl(c_0, s_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), u_26), term_l_16), t_26), term_k_16), r_26), term_h_16);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(((ATgetType(o_16) != AT_INT) || (ATgetInt((ATermInt) o_16) != 0)))
        _fail(t);
      {
        ATerm p_16 = ATgetArgument(t, 1);
        if(((ATgetType(p_16) != AT_INT) || (ATgetInt((ATermInt) p_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,c_2 = NULL,e_2 = NULL,g_2 = NULL;
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
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = g_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm q_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL;
        t = a_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_16 = ATgetFirst((ATermList) t);
            ATerm y_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
              {
                ATerm a_17 = ATgetFirst((ATermList) y_16);
                ATerm b_17 = (ATerm) ATgetNext((ATermList) y_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm l_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_17;
            }
        }
        t = term_g_16;
        u_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_m_17);
        v_0 = t;
        t = SSL_printnl(u_0, v_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_m_17);
        t = giving_up_0_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = q_16;
        {
          ATerm b_1 = NULL,c_1 = NULL;
          t = a_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_17 = ATgetFirst((ATermList) t);
              if(match_cons(n_17, sym__2))
                {
                  b_1 = ATgetArgument(n_17, 0);
                  c_1 = ATgetArgument(n_17, 1);
                }
              else
                _fail(t);
              {
                ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(o_17) != AT_LIST) || !(ATisEmpty(o_17))))
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
ATerm sboundin_3_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL,d_8 = NULL,i_8 = NULL;
  y_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      {
        ATerm o_1 = NULL,r_1 = NULL,t_1 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(y_7);
        o_1 = t;
        t = d_8;
        t = a_130(t);
        r_1 = t;
        t = i_8;
        t = a_130(t);
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
          d_8 = ATgetArgument(t, 0);
          i_8 = ATgetArgument(t, 1);
          x_7 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(y_7);
            m_2 = t;
            t = d_8;
            t = c_130(t);
            q_2 = t;
            t = i_8;
            t = c_130(t);
            r_2 = t;
            t = x_7;
            t = a_130(t);
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
              d_8 = ATgetArgument(t, 0);
              i_8 = ATgetArgument(t, 1);
              x_7 = ATgetArgument(t, 2);
              w_7 = ATgetArgument(t, 3);
              {
                ATerm s_5 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,q_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(y_7);
                s_5 = t;
                t = d_8;
                t = c_130(t);
                m_6 = t;
                t = i_8;
                t = c_130(t);
                n_6 = t;
                t = x_7;
                t = c_130(t);
                o_6 = t;
                t = w_7;
                t = a_130(t);
                q_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_6, n_6, o_6, q_6);
                g_1 = t;
                t = SSLsetAnnotations(g_1, s_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  d_8 = ATgetArgument(t, 0);
                  i_8 = ATgetArgument(t, 1);
                  x_7 = ATgetArgument(t, 2);
                  w_7 = ATgetArgument(t, 3);
                  {
                    ATerm i_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,e_8 = NULL,i_1 = NULL;
                    t = SSLgetAnnotations(y_7);
                    i_7 = t;
                    t = d_8;
                    t = c_130(t);
                    a_8 = t;
                    t = i_8;
                    t = c_130(t);
                    b_8 = t;
                    t = x_7;
                    t = c_130(t);
                    c_8 = t;
                    t = w_7;
                    t = a_130(t);
                    e_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, a_8, b_8, c_8, e_8);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, i_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      d_8 = ATgetArgument(t, 0);
                      i_8 = ATgetArgument(t, 1);
                      x_7 = ATgetArgument(t, 2);
                      {
                        ATerm v_8 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,j_1 = NULL;
                        t = SSLgetAnnotations(y_7);
                        v_8 = t;
                        t = d_8;
                        t = c_130(t);
                        b_9 = t;
                        t = i_8;
                        t = c_130(t);
                        c_9 = t;
                        t = x_7;
                        t = c_130(t);
                        d_9 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, b_9, c_9, d_9);
                        j_1 = t;
                        t = SSLsetAnnotations(j_1, v_8);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_8 = ATgetArgument(t, 0);
                          i_8 = ATgetArgument(t, 1);
                          {
                            ATerm o_9 = NULL,t_9 = NULL,v_9 = NULL,n_1 = NULL;
                            t = SSLgetAnnotations(y_7);
                            o_9 = t;
                            t = d_8;
                            t = c_130(t);
                            t_9 = t;
                            t = i_8;
                            t = a_130(t);
                            v_9 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_9, v_9);
                            n_1 = t;
                            t = SSLsetAnnotations(n_1, o_9);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_8 = ATgetArgument(t, 0);
                              i_8 = ATgetArgument(t, 1);
                              {
                                ATerm i_10 = NULL,m_10 = NULL,n_10 = NULL,s_1 = NULL;
                                t = SSLgetAnnotations(y_7);
                                i_10 = t;
                                t = d_8;
                                t = c_130(t);
                                m_10 = t;
                                t = i_8;
                                t = a_130(t);
                                n_10 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_10, n_10);
                                s_1 = t;
                                t = SSLsetAnnotations(s_1, i_10);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_8 = ATgetArgument(t, 0);
                                  i_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_11 = NULL,u_11 = NULL,v_11 = NULL,u_1 = NULL;
                                    t = SSLgetAnnotations(y_7);
                                    o_11 = t;
                                    t = d_8;
                                    t = c_130(t);
                                    u_11 = t;
                                    t = i_8;
                                    t = a_130(t);
                                    v_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_11, v_11);
                                    u_1 = t;
                                    t = SSLsetAnnotations(u_1, o_11);
                                  }
                                }
                              else
                                {
                                  ATerm d_12 = NULL,q_12 = NULL,r_12 = NULL,w_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      d_8 = ATgetArgument(t, 0);
                                      i_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_7);
                                  d_12 = t;
                                  t = d_8;
                                  t = c_130(t);
                                  q_12 = t;
                                  t = i_8;
                                  t = a_130(t);
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
ATerm dynrule_sargs_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,k_12 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          h_12 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
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
          ATerm t_17 = ATgetArgument(t, 0);
          k_12 = ATgetArgument(t, 1);
          {
            ATerm w_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_12;
    }
  else
    {
      t = p_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm z_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_17);
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
                ATerm a_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm b_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = k_12;
          }
        else
          {
            t = x_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                h_12 = ATgetArgument(t, 0);
                {
                  ATerm c_18 = ATgetArgument(t, 1);
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
                ATerm d_18 = ATgetArgument(t, 0);
                k_12 = ATgetArgument(t, 1);
                {
                  ATerm f_18 = ATgetArgument(t, 2);
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
  ATerm d_13 = NULL;
  ATerm g_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_13 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = d_13;
    }
  else
    {
      t = g_18;
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
static ATerm t_0 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_13 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = t_13;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_13;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm q_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = v_12;
      t = map_1_0(i_0, t);
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm s_18 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          {
            ATerm t_18 = ATgetArgument(t, 2);
          }
          {
            ATerm v_18 = ATgetArgument(t, 3);
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
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = y_13;
    }
  else
    {
      t = w_18;
      if(match_cons(t, sym_SDefT_4))
        {
          y_13 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
          {
            ATerm b_19 = ATgetArgument(t, 2);
          }
          {
            ATerm c_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_13;
    }
  return(t);
}
static ATerm p_9 (ATerm e_41, ATerm d_41, ATerm t)
{
  t = e_41;
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
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(f_1, a_14, b_14, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      if((c_14 != ATgetArgument(t, 1)))
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
  ATerm v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(l_1, v_14, w_14, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      if((x_14 != ATgetArgument(t, 1)))
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
  ATerm p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      if((p_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm e_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_148 (ATerm), ATerm t)
{
  static ATerm s_15 (ATerm t);
  static ATerm s_15 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
    u_14 = t;
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_148(t);
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          t = (ATerm) ATempty;
        }
    }
    s_14 = t;
    t = u_14;
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_14 = NULL,n_13 = NULL,o_13 = NULL;
          t = d_148(t);
          y_14 = t;
          t = u_14;
          {
            static ATerm x_0 (ATerm t);
            static ATerm x_0 (ATerm t)
            {
              ATerm g_13 = NULL;
              t = s_15(t);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_13, y_14);
              t = k_10(f_148, g_13, y_14, t);
              return(t);
            }
            t = e_148(x_0, s_15, y_0, t);
          }
          o_13 = t;
          t = SSL_explode_term(o_13);
          if(match_cons(t, sym__2))
            {
              ATerm j_19 = ATgetArgument(t, 0);
              n_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_13;
          t = foldr_3_0(z_0, a_1, _id, t);
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          {
            ATerm k_14 = NULL;
            t = SSL_explode_term(u_14);
            if(match_cons(t, sym__2))
              {
                ATerm k_19 = ATgetArgument(t, 0);
                k_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_14;
            t = foldr_3_0(h_1, k_1, s_15, t);
          }
        }
    }
    t_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
    t = y_10(m_1, s_14, t_14, t);
    return(t);
  }
  t = s_15(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm i_16 = NULL,r_16 = NULL,s_16 = NULL,v_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if(match_cons(l_19, sym_SVar_1))
        {
          i_16 = ATgetArgument(l_19, 0);
        }
      else
        _fail(t);
      r_16 = ATgetArgument(t, 1);
      s_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_16;
  t = foldr_3_0(x_1, z_1, b_2, t);
  v_16 = t;
  t = s_16;
  t = foldr_3_0(d_2, f_2, h_2, t);
  z_16 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATmakeAppl(sym__2, v_16, z_16)));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
      g_17 = t;
      if(match_cons(t, sym_Let_2))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          t = g_17;
          t = p_9(h_17, i_17, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              h_17 = ATgetArgument(t, 0);
              i_17 = ATgetArgument(t, 1);
              j_17 = ATgetArgument(t, 2);
              t = i_17;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  h_17 = ATgetArgument(t, 0);
                  i_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, h_17);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_17 = ATgetArgument(t, 0);
                      i_17 = ATgetArgument(t, 1);
                      j_17 = ATgetArgument(t, 2);
                      k_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_17;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if(match_cons(s_19, sym__2))
        {
          x_19 = ATgetArgument(s_19, 0);
          {
            ATerm t_19 = ATgetArgument(s_19, 1);
          }
        }
      else
        _fail(t);
      if((x_19 != ATgetArgument(t, 1)))
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
  t = term_u_19;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(c_17, d_17, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(e_17, f_17, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm u_17 = NULL;
  ATerm w_19 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_17 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = u_17;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_17;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_19 = ATgetArgument(t, 0);
          {
            ATerm l_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = i_19;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_19;
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
  ATerm p_19 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_19 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = p_19;
    }
  else
    {
      t = m_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_19;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(p_1, q_1, sboundin_3_0, v_1, t);
  return(t);
}
static ATerm o_48 (ATerm u_41, ATerm v_41, ATerm t)
{
  t = u_41;
  {
    ATerm t_20 = t;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,z_2 = NULL;
        b_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_41 = ATgetFirst((ATermList) t);
            z_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_42);
        x_41 = t;
        t = z_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_41), y_41);
        z_2 = t;
        t = SSLsetAnnotations(z_2, x_41);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_u_20, u_41);
  return(t);
}
static ATerm p_48 (ATerm c_42, ATerm e_42, ATerm t)
{
  t = c_42;
  {
    ATerm v_20 = t;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,a_3 = NULL;
        o_42 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_42 = ATgetFirst((ATermList) t);
            n_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_42);
        j_42 = t;
        t = n_42;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_42), m_42);
        a_3 = t;
        t = SSLsetAnnotations(a_3, j_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, c_42);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm r_43 = NULL,x_43 = NULL,w_16 = NULL;
  r_43 = t;
  t = SSL_explode_term(r_43);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            x_43 = ATgetFirst((ATermList) a_21);
            {
              ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_43);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            ATerm e_21 = ATgetFirst((ATermList) d_21);
            ATerm f_21 = (ATerm) ATgetNext((ATermList) d_21);
            if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
              {
                w_16 = ATgetFirst((ATermList) f_21);
                {
                  ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, w_16), x_43));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  if(match_cons(t, sym__2))
    {
      m_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, n_44), m_44));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, s_44), r_44));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  if(match_cons(t, sym__2))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, n_45), m_45));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, w_45), v_45));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,v_42 = NULL,a_43 = NULL,b_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym_Anno_2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
      {
        ATerm p_43 = NULL;
        t = h_43;
        t = foldr_2_0(n_2, o_2, t);
        p_43 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, g_43, p_43);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          g_43 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, g_43, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              g_43 = ATgetArgument(t, 0);
              {
                ATerm s_17 = NULL;
                t = g_43;
                {
                  ATerm l_21 = t;
                  int m_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_n_21;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_o_21;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_p_21;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_q_21;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_21;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(m_21);
                    }
                  else
                    {
                      t = l_21;
                      {
                        ATerm v_17 = NULL;
                        t = SSL_explode_string(g_43);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_21 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_21) != AT_INT) || (ATgetInt((ATermInt) s_21) != 39)))
                              _fail(t);
                            {
                              ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
                                {
                                  v_17 = ATgetFirst((ATermList) t_21);
                                  {
                                    ATerm u_21 = (ATerm) ATgetNext((ATermList) t_21);
                                    if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                                      {
                                        ATerm w_21 = ATgetFirst((ATermList) u_21);
                                        if(((ATgetType(w_21) != AT_INT) || (ATgetInt((ATermInt) w_21) != 39)))
                                          _fail(t);
                                        {
                                          ATerm x_21 = (ATerm) ATgetNext((ATermList) u_21);
                                          if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
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
                        t = v_17;
                      }
                    }
                }
                s_17 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, s_17);
              }
            }
          else
            {
              ATerm y_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      g_43 = ATgetArgument(t, 0);
                      {
                        ATerm b_22 = ATgetArgument(t, 1);
                      }
                      b_43 = ATgetArgument(t, 2);
                      p_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_22);
                  t = (ATerm) ATmakeAppl(sym_Con_3, g_43, b_43, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_42), (ATerm) ATempty));
                }
              else
                {
                  t = y_21;
                  {
                    ATerm c_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            g_43 = ATgetArgument(t, 0);
                            {
                              ATerm e_22 = ATgetArgument(t, 1);
                            }
                            b_43 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, g_43, b_43, term_h_22);
                      }
                    else
                      {
                        t = c_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            g_43 = ATgetArgument(t, 0);
                            h_43 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, g_43, h_43, term_h_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                g_43 = ATgetArgument(t, 0);
                                h_43 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_2 (ATerm t);
                                  static ATerm p_2 (ATerm t)
                                  {
                                    t = h_43;
                                    return(t);
                                  }
                                  t = g_43;
                                  t = foldr_2_0(p_2, t_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    g_43 = ATgetArgument(t, 0);
                                    t = g_43;
                                    t = foldr_2_0(u_2, v_2, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        g_43 = ATgetArgument(t, 0);
                                        t = g_43;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_42 = ATgetFirst((ATermList) t);
                                            v_42 = (ATerm) ATgetNext((ATermList) t);
                                            t = v_42;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_22 = t;
                                                int j_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_48(g_43, f_43, t);
                                                    LocalPopChoice(j_22);
                                                  }
                                                else
                                                  {
                                                    t = i_22;
                                                    t = q_42;
                                                  }
                                              }
                                            else
                                              {
                                                t = o_48(g_43, f_43, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_48(g_43, f_43, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            g_43 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, g_43));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                g_43 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, g_43));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    g_43 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, g_43));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        g_43 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, g_43));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            g_43 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_43), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                g_43 = ATgetArgument(t, 0);
                                                                h_43 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_43), h_43);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    g_43 = ATgetArgument(t, 0);
                                                                    h_43 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm w_2 (ATerm t);
                                                                      static ATerm w_2 (ATerm t)
                                                                      {
                                                                        t = h_43;
                                                                        return(t);
                                                                      }
                                                                      t = g_43;
                                                                      t = foldr_2_0(w_2, x_2, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        g_43 = ATgetArgument(t, 0);
                                                                        t = g_43;
                                                                        t = foldr_2_0(y_2, b_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            g_43 = ATgetArgument(t, 0);
                                                                            h_43 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATinsert(CheckATermList(h_43), g_43));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                g_43 = ATgetArgument(t, 0);
                                                                                t = g_43;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_42 = ATgetFirst((ATermList) t);
                                                                                    v_42 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = v_42;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm k_22 = t;
                                                                                        int m_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_48(g_43, f_43, t);
                                                                                            LocalPopChoice(m_22);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_22;
                                                                                            t = q_42;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_48(g_43, f_43, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_48(g_43, f_43, t);
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
                                                                                        g_43 = ATgetArgument(t, 0);
                                                                                        h_43 = ATgetArgument(t, 1);
                                                                                        t = h_43;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            a_43 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, a_43), g_43));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            g_43 = ATgetArgument(t, 0);
                                                                                            t = g_43;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                g_43 = ATgetArgument(t, 0);
                                                                                                h_43 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, g_43, h_43, term_w_22);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    g_43 = ATgetArgument(t, 0);
                                                                                                    h_43 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, g_43, h_43, term_w_22);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        g_43 = ATgetArgument(t, 0);
                                                                                                        h_43 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, g_43, (ATerm)ATempty, h_43);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            g_43 = ATgetArgument(t, 0);
                                                                                                            h_43 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, h_43, g_43);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                g_43 = ATgetArgument(t, 0);
                                                                                                                h_43 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, g_43, h_43, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    g_43 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, g_43, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        g_43 = ATgetArgument(t, 0);
                                                                                                                        h_43 = ATgetArgument(t, 1);
                                                                                                                        b_43 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_43, h_43, (ATerm)ATempty, b_43);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            g_43 = ATgetArgument(t, 0);
                                                                                                                            h_43 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_43, (ATerm)ATempty, (ATerm)ATempty, h_43);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                g_43 = ATgetArgument(t, 0);
                                                                                                                                h_43 = ATgetArgument(t, 1);
                                                                                                                                b_43 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_43, h_43, (ATerm)ATempty, b_43);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    g_43 = ATgetArgument(t, 0);
                                                                                                                                    h_43 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_43, (ATerm)ATempty, (ATerm)ATempty, h_43);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        g_43 = ATgetArgument(t, 0);
                                                                                                                                        h_43 = ATgetArgument(t, 1);
                                                                                                                                        b_43 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_43, h_43, (ATerm)ATempty, b_43);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            g_43 = ATgetArgument(t, 0);
                                                                                                                                            h_43 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, g_43, (ATerm)ATempty, (ATerm)ATempty, h_43);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm x_22 = ATgetArgument(t, 0);
                                                                                                                                                h_43 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, h_43);
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
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      t_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
      {
        ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,h_49 = NULL;
        t = s_48;
        t = new_0_0(t);
        a_49 = t;
        t = new_0_0(t);
        b_49 = t;
        t = new_0_0(t);
        c_49 = t;
        t = new_0_0(t);
        h_49 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_49), c_49), b_49), a_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, a_49), (ATerm) ATmakeAppl(sym_Var_1, c_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, t_48, (ATerm)ATmakeAppl(sym_Var_1, a_49), (ATerm) ATmakeAppl(sym_Var_1, b_49)), (ATerm) ATmakeAppl(sym_BAM_3, r_48, (ATerm)ATmakeAppl(sym_Var_1, c_49), (ATerm) ATmakeAppl(sym_Var_1, h_49)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_49)), (ATerm) ATmakeAppl(sym_Var_1, b_49))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_48 = ATgetArgument(t, 0);
          {
            ATerm i_49 = NULL,j_49 = NULL,l_49 = NULL,m_49 = NULL;
            t = s_48;
            t = new_0_0(t);
            l_49 = t;
            t = t_48;
            {
              static ATerm c_3 (ATerm t);
              static ATerm c_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      i_49 = ATgetArgument(t, 0);
                    if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      j_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, l_49);
                return(t);
              }
              t = oncetd_1_0(c_3, t);
            }
            m_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_49)), not_null(i_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_49)), (ATerm) ATmakeAppl(sym_Build_1, m_49))));
          }
        }
      else
        {
          ATerm o_49 = NULL,x_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              t_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_48;
          t = new_0_0(t);
          a_50 = t;
          t = new_0_0(t);
          b_50 = t;
          t = t_48;
          {
            static ATerm g_3 (ATerm t);
            static ATerm g_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((o_49 != NULL) && (o_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_49 = ATgetArgument(t, 0);
                  if(((x_49 != NULL) && (x_49 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    x_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, a_50);
              return(t);
            }
            t = oncetd_1_0(g_3, t);
          }
          c_50 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_50)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_50))))), (ATerm)ATmakeAppl(sym_Var_1, a_50), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_49)), not_null(o_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
        t = i_50;
        t = new_0_0(t);
        n_50 = t;
        t = j_50;
        {
          static ATerm i_3 (ATerm t);
          static ATerm i_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_50 = ATgetArgument(t, 0);
                if(((m_50 != NULL) && (m_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_50), l_50);
            return(t);
          }
          t = pat_td_1_0(i_3, t);
        }
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_50))))));
        LocalPopChoice(m_23);
      }
    else
      {
        t = f_23;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_50 = NULL,r_50 = NULL,v_50 = NULL;
              t = i_50;
              t = new_0_0(t);
              r_50 = t;
              t = j_50;
              {
                static ATerm l_3 (ATerm t);
                static ATerm l_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_50 != NULL) && (q_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_50);
                  return(t);
                }
                t = pat_td_1_0(l_3, t);
              }
              v_50 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_50)), not_null(q_50))));
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm y_50 = NULL,g_51 = NULL,o_51 = NULL,p_51 = NULL;
                t = i_50;
                t = new_0_0(t);
                o_51 = t;
                t = j_50;
                {
                  static ATerm m_3 (ATerm t);
                  static ATerm m_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_51 != NULL) && (g_51 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_51 = ATgetArgument(t, 0);
                        if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_50 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_51);
                    return(t);
                  }
                  t = pat_td_1_0(m_3, t);
                }
                p_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_50)), not_null(g_51)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_129(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = u_23;
      {
        ATerm o_55 = NULL,p_55 = NULL,t_55 = NULL,w_55 = NULL;
        p_55 = t;
        if(match_cons(t, sym_Op_2))
          {
            t_55 = ATgetArgument(t, 0);
            w_55 = ATgetArgument(t, 1);
            {
              ATerm e_18 = NULL,h_18 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(p_55);
              e_18 = t;
              t = w_55;
              {
                static ATerm n_3 (ATerm t);
                static ATerm n_3 (ATerm t)
                {
                  t = pat_td_1_0(b_129, t);
                  return(t);
                }
                t = fetch_1_0(n_3, t);
              }
              h_18 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, t_55, h_18);
              d_3 = t;
              t = SSLsetAnnotations(d_3, e_18);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                t_55 = ATgetArgument(t, 0);
                w_55 = ATgetArgument(t, 1);
                {
                  ATerm a_24 = t;
                  int b_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_18 = NULL,u_18 = NULL,e_3 = NULL;
                      t = SSLgetAnnotations(p_55);
                      r_18 = t;
                      t = w_55;
                      t = pat_td_1_0(b_129, t);
                      u_18 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, t_55, u_18);
                      e_3 = t;
                      t = SSLsetAnnotations(e_3, r_18);
                      LocalPopChoice(b_24);
                    }
                  else
                    {
                      t = a_24;
                      {
                        ATerm h_19 = NULL,r_19 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(p_55);
                        h_19 = t;
                        t = t_55;
                        t = pat_td_1_0(b_129, t);
                        r_19 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_19, w_55);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, h_19);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    t_55 = ATgetArgument(t, 0);
                    w_55 = ATgetArgument(t, 1);
                    o_55 = ATgetArgument(t, 2);
                    {
                      ATerm k_20 = NULL,o_20 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(p_55);
                      k_20 = t;
                      t = o_55;
                      {
                        static ATerm o_3 (ATerm t);
                        static ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1_0(b_129, t);
                          return(t);
                        }
                        t = fetch_1_0(o_3, t);
                      }
                      o_20 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_55, w_55, o_20);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, k_20);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        t_55 = ATgetArgument(t, 0);
                        w_55 = ATgetArgument(t, 1);
                        o_55 = ATgetArgument(t, 2);
                        {
                          ATerm v_21 = NULL,z_21 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(p_55);
                          v_21 = t;
                          t = o_55;
                          {
                            static ATerm p_3 (ATerm t);
                            static ATerm p_3 (ATerm t)
                            {
                              t = pat_td_1_0(b_129, t);
                              return(t);
                            }
                            t = fetch_1_0(p_3, t);
                          }
                          z_21 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, t_55, w_55, z_21);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, v_21);
                        }
                      }
                    else
                      {
                        ATerm z_22 = NULL,h_23 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            t_55 = ATgetArgument(t, 0);
                            w_55 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_55);
                        z_22 = t;
                        t = w_55;
                        t = pat_td_1_0(b_129, t);
                        h_23 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, t_55, h_23);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, z_22);
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
  ATerm n_56 = NULL,o_56 = NULL;
  n_56 = t;
  if(match_cons(t, sym_Build_1))
    {
      o_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_56 = NULL,q_56 = NULL,x_56 = NULL,y_56 = NULL;
        t = n_56;
        t = new_0_0(t);
        x_56 = t;
        t = o_56;
        {
          static ATerm q_3 (ATerm t);
          static ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_56 != NULL) && (p_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_56 = ATgetArgument(t, 0);
                if(((q_56 != NULL) && (q_56 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_56);
            return(t);
          }
          t = pat_td_1_0(q_3, t);
        }
        y_56 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_56)), not_null(p_56))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_56)))), (ATerm) ATmakeAppl(sym_Build_1, y_56)));
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm u_24 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_56 = NULL,i_57 = NULL,k_57 = NULL;
              t = n_56;
              t = new_0_0(t);
              i_57 = t;
              t = o_56;
              {
                static ATerm t_3 (ATerm t);
                static ATerm t_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_56 != NULL) && (z_56 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, i_57);
                  return(t);
                }
                t = pat_td_1_0(t_3, t);
              }
              k_57 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_56), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_57)))), (ATerm) ATmakeAppl(sym_Build_1, k_57)));
              LocalPopChoice(e_25);
            }
          else
            {
              t = u_24;
              {
                ATerm o_57 = NULL,q_57 = NULL,t_57 = NULL,u_57 = NULL;
                t = n_56;
                t = new_0_0(t);
                t_57 = t;
                t = o_56;
                {
                  static ATerm u_3 (ATerm t);
                  static ATerm u_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_57 != NULL) && (o_57 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_57 = ATgetArgument(t, 0);
                        if(((q_57 != NULL) && (q_57 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_57 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_57);
                    return(t);
                  }
                  t = pat_td_1_0(u_3, t);
                }
                u_57 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_57), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_57), not_null(q_57), (ATerm) ATmakeAppl(sym_Var_1, t_57))), (ATerm) ATmakeAppl(sym_Build_1, u_57)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,i_58 = NULL,o_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_58, o_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_58 = ATgetArgument(t, 0);
          t = i_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_58 = ATgetFirst((ATermList) t);
              f_58 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_58, (ATerm) ATmakeAppl(sym_LChoices_1, f_58));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_58 = ATgetArgument(t, 0);
              t = i_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_58 = ATgetFirst((ATermList) t);
                  f_58 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_58, (ATerm) ATmakeAppl(sym_Choices_1, f_58));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_58 = ATgetArgument(t, 0);
                  t = i_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_58 = ATgetFirst((ATermList) t);
                      f_58 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_58, (ATerm) ATmakeAppl(sym_Seqs_1, f_58));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      i_58 = ATgetArgument(t, 0);
                      o_58 = ATgetArgument(t, 1);
                      g_58 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, o_58, (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, g_58), i_58)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          i_58 = ATgetArgument(t, 0);
                          o_58 = ATgetArgument(t, 1);
                          g_58 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, g_58)), i_58), (ATerm) ATmakeAppl(sym_Build_1, o_58)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              i_58 = ATgetArgument(t, 0);
                              o_58 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_58, (ATerm) ATmakeAppl(sym_Match_1, o_58));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  i_58 = ATgetArgument(t, 0);
                                  o_58 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_58), o_58);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      i_58 = ATgetArgument(t, 0);
                                      o_58 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_58), i_58);
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
static ATerm w_3 (ATerm t)
{
  ATerm g_25 = t;
  if((PushChoice() == 0))
    {
      ATerm b_60 = NULL,g_60 = NULL,h_60 = NULL,r_3 = NULL;
      h_60 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_60);
      b_60 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_60);
      r_3 = t;
      t = SSLsetAnnotations(r_3, b_60);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_25;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_60 = ATgetFirst((ATermList) t);
      j_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_60, j_60);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,o_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if(match_cons(i_25, sym__2))
        {
          k_60 = ATgetArgument(i_25, 0);
          l_60 = ATgetArgument(i_25, 1);
        }
      else
        _fail(t);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(match_cons(j_25, sym__2))
          {
            o_60 = ATgetArgument(j_25, 0);
            q_60 = ATgetArgument(j_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_60), k_60), (ATerm) ATinsert(CheckATermList(q_60), l_60));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_60 = ATgetFirst((ATermList) t);
      s_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_60, s_60);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      if(match_cons(k_25, sym__2))
        {
          t_60 = ATgetArgument(k_25, 0);
          u_60 = ATgetArgument(k_25, 1);
        }
      else
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
        if(match_cons(l_25, sym__2))
          {
            v_60 = ATgetArgument(l_25, 0);
            w_60 = ATgetArgument(l_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_60), t_60), (ATerm) ATinsert(CheckATermList(w_60), u_60));
  return(t);
}
static ATerm y_9 (ATerm f_35, ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,s_3 = NULL;
  t = h_35;
  t = fetch_1_0(w_3, t);
  t = h_35;
  t = genzip_4_0(x_3, c_4, d_4, LiftPrimArg_0_0, t);
  a_60 = t;
  if(match_cons(t, sym__2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_60);
  t_59 = t;
  t = u_59;
  t = concat_0_0(t);
  y_59 = t;
  t = v_59;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_59, z_59);
  s_3 = t;
  t = SSLsetAnnotations(s_3, t_59);
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            p_59 = ATgetArgument(m_25, 0);
            s_59 = ATgetArgument(m_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_59, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_59), (ATerm) ATmakeAppl(sym_CallT_3, f_35, g_35, s_59)));
  return(t);
}
static ATerm j_61 (ATerm a_61, ATerm t)
{
  ATerm c_61 = NULL;
  t = a_61;
  {
    ATerm p_25 = t;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,v_3 = NULL;
        f_61 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_61);
        d_61 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_61);
        v_3 = t;
        t = SSLsetAnnotations(v_3, d_61);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_25;
      }
  }
  t = new_0_0(t);
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, c_61), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_61), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_61)))), (ATerm) ATmakeAppl(sym_Var_1, c_61)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  g_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_61 = ATgetArgument(t, 0);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_61(g_61, t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_22, (ATerm) ATmakeAppl(sym_Var_1, h_61)));
          }
      }
    }
  else
    {
      t = j_61(g_61, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_26 = t;
  if((PushChoice() == 0))
    {
      ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,y_3 = NULL;
      q_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_24);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_24);
      y_3 = t;
      t = SSLsetAnnotations(y_3, o_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_26;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_24 = ATgetFirst((ATermList) t);
      s_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_24, s_24);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym__2))
        {
          t_24 = ATgetArgument(z_26, 0);
          v_24 = ATgetArgument(z_26, 1);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            w_24 = ATgetArgument(a_27, 0);
            x_24 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_24), t_24), (ATerm) ATinsert(CheckATermList(x_24), v_24));
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_24 = ATgetFirst((ATermList) t);
      z_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(match_cons(b_27, sym__2))
        {
          a_25 = ATgetArgument(b_27, 0);
          b_25 = ATgetArgument(b_27, 1);
        }
      else
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(match_cons(c_27, sym__2))
          {
            c_25 = ATgetArgument(c_27, 0);
            d_25 = ATgetArgument(c_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_25), a_25), (ATerm) ATinsert(CheckATermList(d_25), b_25));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_27 = t;
  if((PushChoice() == 0))
    {
      ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,a_4 = NULL;
      e_26 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_26);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_26);
      a_4 = t;
      t = SSLsetAnnotations(a_4, c_26);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_27;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_26, g_26);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(match_cons(e_27, sym__2))
        {
          i_26 = ATgetArgument(e_27, 0);
          j_26 = ATgetArgument(e_27, 1);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(match_cons(f_27, sym__2))
          {
            l_26 = ATgetArgument(f_27, 0);
            n_26 = ATgetArgument(f_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_26), i_26), (ATerm) ATinsert(CheckATermList(n_26), j_26));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      p_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_26 = NULL,s_26 = NULL,v_26 = NULL,w_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(match_cons(i_27, sym__2))
        {
          q_26 = ATgetArgument(i_27, 0);
          s_26 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(match_cons(k_27, sym__2))
          {
            v_26 = ATgetArgument(k_27, 0);
            w_26 = ATgetArgument(k_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_26), q_26), (ATerm) ATinsert(CheckATermList(w_26), s_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
      s_64 = ATgetArgument(t, 2);
      {
        ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,z_3 = NULL;
        t = s_64;
        t = fetch_1_0(h_4, t);
        t = s_64;
        t = genzip_4_0(j_4, m_4, n_4, LiftPrimArg_0_0, t);
        n_24 = t;
        if(match_cons(t, sym__2))
          {
            j_24 = ATgetArgument(t, 0);
            k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_24);
        i_24 = t;
        t = j_24;
        t = concat_0_0(t);
        l_24 = t;
        t = k_24;
        t = genzip_4_0(o_4, q_4, t_4, _id, t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
        z_3 = t;
        t = SSLsetAnnotations(z_3, i_24);
        if(match_cons(t, sym__2))
          {
            f_24 = ATgetArgument(t, 0);
            {
              ATerm m_27 = ATgetArgument(t, 1);
              if(match_cons(m_27, sym__2))
                {
                  g_24 = ATgetArgument(m_27, 0);
                  h_24 = ATgetArgument(m_27, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_24), (ATerm) ATmakeAppl(sym_PrimT_3, u_64, v_64, h_24)));
      }
    }
  else
    {
      ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          u_64 = ATgetArgument(t, 0);
          v_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_64;
      t = fetch_1_0(u_4, t);
      t = v_64;
      t = genzip_4_0(v_4, w_4, y_4, LiftPrimArg_0_0, t);
      b_26 = t;
      if(match_cons(t, sym__2))
        {
          x_25 = ATgetArgument(t, 0);
          y_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_26);
      w_25 = t;
      t = x_25;
      t = concat_0_0(t);
      z_25 = t;
      t = y_25;
      t = genzip_4_0(a_5, c_5, e_5, _id, t);
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
      b_4 = t;
      t = SSLsetAnnotations(b_4, w_25);
      if(match_cons(t, sym__2))
        {
          s_25 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
            if(match_cons(n_27, sym__2))
              {
                t_25 = ATgetArgument(n_27, 0);
                v_25 = ATgetArgument(n_27, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_25, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_25), (ATerm) ATmakeAppl(sym_PrimT_3, u_64, (ATerm)ATempty, v_25)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm t)
{
  static ATerm d_65 (ATerm t);
  static ATerm d_65 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_137(t);
        t = d_65(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = h_137(t);
      }
    return(t);
  }
  t = d_65(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,z_65 = NULL,a_66 = NULL;
  a_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      r_65 = ATgetArgument(t, 0);
      s_65 = ATgetArgument(t, 1);
      z_65 = ATgetArgument(t, 2);
      {
        ATerm h_27 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(a_66);
        h_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, r_65, s_65, z_65);
        i_4 = t;
        t = SSLsetAnnotations(i_4, h_27);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = a_66;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_27;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,c_68 = NULL;
  z_67 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_68 = ATgetArgument(t, 0);
      c_68 = ATgetArgument(t, 1);
      y_67 = ATgetArgument(t, 2);
      {
        ATerm y_27 = NULL,k_4 = NULL;
        t = SSLgetAnnotations(z_67);
        y_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, a_68, c_68, y_67);
        k_4 = t;
        t = SSLsetAnnotations(k_4, y_27);
      }
    }
  else
    {
      ATerm a_29 = NULL,l_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          a_68 = ATgetArgument(t, 0);
          c_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_67);
      a_29 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, a_68, c_68);
      l_4 = t;
      t = SSLsetAnnotations(l_4, a_29);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,x_68 = NULL,y_68 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      u_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_68;
  if(match_cons(t, sym_StratRule_3))
    {
      v_68 = ATgetArgument(t, 0);
      x_68 = ATgetArgument(t, 1);
      y_68 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_68), (ATerm) ATmakeAppl(sym_Where_1, y_68)), v_68));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          v_68 = ATgetArgument(t, 0);
          x_68 = ATgetArgument(t, 1);
          y_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_68;
      t = pureterm_0_0(t);
      t = x_68;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, x_68)), (ATerm) ATmakeAppl(sym_Where_1, y_68)), (ATerm) ATmakeAppl(sym_Match_1, v_68)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm k_132 (ATerm), ATerm t)
{
  static ATerm z_69 (ATerm t);
  static ATerm z_69 (ATerm t)
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_132(t);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = SRTS_one(z_69, t);
      }
    return(t);
  }
  t = z_69(t);
  return(t);
}
static ATerm c_10 (ATerm s_30, ATerm t_30, ATerm u_30, ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,j_70 = NULL;
  t = new_0_0(t);
  e_70 = t;
  t = s_30;
  {
    static ATerm k_5 (ATerm t);
    static ATerm k_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_27 = ATgetArgument(t, 0);
          if(match_cons(u_27, sym_Var_1))
            {
              if(((d_70 != NULL) && (d_70 != ATgetArgument(u_27, 0))))
                _fail(ATgetArgument(u_27, 0));
              else
                d_70 = ATgetArgument(u_27, 0);
            }
          else
            _fail(t);
          if(((b_70 != NULL) && (b_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_70 = ATgetArgument(t, 1);
          {
            ATerm v_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, d_70);
      return(t);
    }
    t = oncetd_1_0(k_5, t);
  }
  f_70 = t;
  t = t_30;
  {
    static ATerm m_5 (ATerm t);
    static ATerm m_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm w_27 = ATgetArgument(t, 0);
          if(match_cons(w_27, sym_Var_1))
            {
              if(((d_70 != NULL) && (d_70 != ATgetArgument(w_27, 0))))
                _fail(ATgetArgument(w_27, 0));
              else
                d_70 = ATgetArgument(w_27, 0);
            }
          else
            _fail(t);
          if(((c_70 != NULL) && (c_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_70 = ATgetArgument(t, 1);
          {
            ATerm x_27 = ATgetArgument(t, 2);
            if(match_cons(x_27, sym_CallT_3))
              {
                if(((a_70 != NULL) && (a_70 != ATgetArgument(x_27, 0))))
                  _fail(ATgetArgument(x_27, 0));
                else
                  a_70 = ATgetArgument(x_27, 0);
                {
                  ATerm z_27 = ATgetArgument(x_27, 1);
                  if(((ATgetType(z_27) != AT_LIST) || !(ATisEmpty(z_27))))
                    _fail(t);
                }
                {
                  ATerm d_28 = ATgetArgument(x_27, 2);
                  if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, e_70);
      return(t);
    }
    t = oncetd_1_0(m_5, t);
  }
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_70), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, f_70, j_70, (ATerm) ATmakeAppl(sym_Seq_2, u_30, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_70), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_70), not_null(c_70), term_w_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_70)), (ATerm) ATmakeAppl(sym_Var_1, e_70))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_71 = NULL,c_71 = NULL,f_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
          h_71 = t;
          if(match_cons(t, sym_SRule_1))
            {
              i_71 = ATgetArgument(t, 0);
              t = i_71;
              if(match_cons(t, sym_Rule_3))
                {
                  b_71 = ATgetArgument(t, 0);
                  c_71 = ATgetArgument(t, 1);
                  f_71 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_71;
              t = c_10(b_71, c_71, f_71, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm n_29 = NULL,r_29 = NULL,p_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  i_71 = ATgetArgument(t, 0);
                  j_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_71);
              n_29 = t;
              t = j_71;
              t = desugarRule_0_0(t);
              r_29 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, i_71, r_29);
              p_4 = t;
              t = SSLsetAnnotations(p_4, n_29);
            }
          LocalPopChoice(j_28);
        }
      else
        {
          t = i_28;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t);
  static ATerm n_5 (ATerm t)
  {
    t = topdown_1_0(g_131, t);
    return(t);
  }
  t = g_131(t);
  t = SRTS_all(n_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
    }
  t = repeat_2_0(r_5, _id, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
            a_72 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_72 = ATgetArgument(t, 0);
                c_72 = ATgetArgument(t, 1);
                d_72 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_72;
            t = y_9(b_72, c_72, d_72, t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm q_28 = t;
              int r_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_28);
                }
              else
                {
                  t = q_28;
                  {
                    ATerm s_28 = t;
                    int t_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(t_28);
                      }
                    else
                      {
                        t = s_28;
                        {
                          ATerm u_28 = t;
                          int v_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_28 = t;
                              int x_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_72 = NULL,t_72 = NULL,y_72 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_72 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_72;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_72 = ATgetArgument(t, 0);
                                      t = t_72;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_72 = ATgetArgument(t, 0);
                                          y_72 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, t_72, y_72);
                                    }
                                  LocalPopChoice(x_28);
                                }
                              else
                                {
                                  t = w_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(v_28);
                            }
                          else
                            {
                              t = u_28;
                              {
                                ATerm y_28 = t;
                                int z_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(z_28);
                                  }
                                else
                                  {
                                    t = y_28;
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
  t = topdown_1_0(o_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  b_74 = t;
  t = SSL_explode_term(b_74);
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
          {
            a_74 = ATgetFirst((ATermList) c_29);
            {
              ATerm f_29 = (ATerm) ATgetNext((ATermList) c_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_74;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  d_30 = t;
  t = SSL_explode_term(d_30);
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            ATerm j_29 = ATgetFirst((ATermList) i_29);
            b_30 = (ATerm) ATgetNext((ATermList) i_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_u_20;
  c_30 = t;
  t = SSL_mkterm(c_30, b_30);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm l_73 = NULL,o_73 = NULL;
  static ATerm e_74 (ATerm t);
  static ATerm e_74 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
        p_73 = t;
        t = map_1_0(t_5, t);
        t = n_135(t);
        q_73 = t;
        t = p_73;
        t = map_1_0(v_5, t);
        t = e_74(t);
        r_73 = t;
        t = (ATerm) ATinsert(CheckATermList(r_73), q_73);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = map_1_0(x_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = e_74(t);
  o_73 = t;
  t = term_u_20;
  l_73 = t;
  t = SSL_mkterm(l_73, o_73);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm f_74 = NULL;
  f_74 = t;
  {
    ATerm m_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_74 = NULL,i_74 = NULL,m_74 = NULL;
        t = f_74;
        t = new_0_0(t);
        h_74 = t;
        t = new_0_0(t);
        i_74 = t;
        t = new_0_0(t);
        m_74 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_74), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, f_74), (ATerm) ATmakeAppl(sym_Var_1, i_74))), (ATerm) ATmakeAppl(sym_Var_1, m_74)), (ATerm)ATmakeAppl(sym_VarDec_2, h_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_29), term_t_29)), i_74, (ATerm)ATmakeAppl(sym_Var_1, i_74), m_74, (ATerm) ATmakeAppl(sym_Var_1, m_74));
        LocalPopChoice(o_29);
      }
    else
      {
        t = m_29;
        {
          ATerm q_74 = NULL,t_74 = NULL,v_74 = NULL;
          t = f_74;
          t = new_0_0(t);
          q_74 = t;
          t = new_0_0(t);
          t_74 = t;
          t = new_0_0(t);
          v_74 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_74), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, f_74), (ATerm) ATmakeAppl(sym_Var_1, t_74))), (ATerm) ATmakeAppl(sym_Var_1, v_74)), (ATerm)ATmakeAppl(sym_VarDec_2, q_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_29), term_t_29)), t_74, (ATerm)ATmakeAppl(sym_Var_1, t_74), v_74, (ATerm) ATmakeAppl(sym_Var_1, v_74));
        }
      }
  }
  return(t);
}
static ATerm d_10 (ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_56, s_56);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      t = SSL_subtr(r_56, s_56);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_74 = NULL,a_75 = NULL;
  if(match_cons(t, sym__2))
    {
      y_74 = ATgetArgument(t, 0);
      a_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_74, a_75, (ATerm) ATempty);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm e_75 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(((ATgetType(w_29) != AT_INT) || (ATgetInt((ATermInt) w_29) != 0)))
        _fail(t);
      {
        ATerm y_29 = ATgetArgument(t, 1);
      }
      e_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_75;
  return(t);
}
ATerm copy_1_0 (ATerm f_154 (ATerm), ATerm t)
{
  static ATerm d_6 (ATerm t);
  static ATerm d_6 (ATerm t)
  {
    ATerm f_75 = NULL,g_75 = NULL,i_75 = NULL,j_75 = NULL,m_75 = NULL,o_75 = NULL;
    if(match_cons(t, sym__3))
      {
        f_75 = ATgetArgument(t, 0);
        g_75 = ATgetArgument(t, 1);
        i_75 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_75, term_v_19);
    t = geq_0_0(t);
    t = term_v_19;
    o_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_75, term_v_19);
    t = d_10(f_75, o_75, t);
    j_75 = t;
    t = g_75;
    t = f_154(t);
    m_75 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_75, g_75, (ATerm) ATinsert(CheckATermList(i_75), m_75));
    return(t);
  }
  t = for_3_0(z_5, a_6, d_6, t);
  return(t);
}
static ATerm e_10 (ATerm n_25, ATerm o_25, ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  t = new_0_0(t);
  p_75 = t;
  t = new_0_0(t);
  q_75 = t;
  t = new_0_0(t);
  r_75 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_75), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_25)), (ATerm) ATmakeAppl(sym_Var_1, q_75))), (ATerm) ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_25)), (ATerm) ATmakeAppl(sym_Var_1, r_75)))), (ATerm)ATmakeAppl(sym_VarDec_2, p_75, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_29), term_t_29)), q_75, (ATerm)ATmakeAppl(sym_Var_1, q_75), r_75, (ATerm) ATmakeAppl(sym_Var_1, r_75));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_75 = ATgetFirst((ATermList) t);
      y_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_75;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_75;
    }
  else
    {
      t = y_75;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_80 (ATerm w_76, ATerm x_76, ATerm f_77, ATerm l_77, ATerm t)
{
  ATerm r_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,d_78 = NULL,f_78 = NULL;
  t = term_v_19;
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_76, term_v_19);
  t = h_11(x_76, f_78, t);
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, term_z_29);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_77 = ATgetFirst((ATermList) t);
      u_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_77;
  t = last_0_0(t);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_77), t_77), u_77);
  t = genzip_4_0(e_6, f_6, h_6, j_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
      x_77 = ATgetArgument(t, 2);
      y_77 = ATgetArgument(t, 3);
      z_77 = ATgetArgument(t, 4);
      a_78 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_77), x_77), u_77);
  t = concat_0_0(t);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_76, term_e_30), w_77, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_78), t_77), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_77)), (ATerm) ATmakeAppl(sym_Op_2, w_76, y_77))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_77)), (ATerm) ATmakeAppl(sym_Op_2, w_76, a_78))), (ATerm) ATmakeAppl(sym_Seqs_1, v_77)))));
  return(t);
}
static ATerm d_80 (ATerm p_78, ATerm q_78, ATerm x_78, ATerm a_79, ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,p_79 = NULL;
  t = a_79;
  t = new_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_78, (ATerm) ATmakeAppl(sym_Var_1, e_79));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      f_79 = ATgetArgument(t, 0);
      g_79 = ATgetArgument(t, 1);
      k_79 = ATgetArgument(t, 2);
      l_79 = ATgetArgument(t, 3);
      m_79 = ATgetArgument(t, 4);
      n_79 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_79, m_79);
  t = conc_0_0(t);
  p_79 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, p_78, term_f_30), g_79, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(p_79), e_79), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_79)), (ATerm) ATmakeAppl(sym_Op_2, p_78, l_79))), (ATerm)ATmakeAppl(sym_Op_2, p_78, n_79), (ATerm) ATmakeAppl(sym_Seqs_1, f_79)))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      ATerm m_30 = ATgetArgument(t, 1);
      if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
        {
          g_78 = ATgetFirst((ATermList) n_30);
          h_78 = (ATerm) ATgetNext((ATermList) n_30);
        }
      else
        _fail(t);
      {
        ATerm q_30 = ATgetArgument(t, 1);
        if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
          {
            i_78 = ATgetFirst((ATermList) q_30);
            j_78 = (ATerm) ATgetNext((ATermList) q_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_78, i_78), (ATerm) ATmakeAppl(sym__2, h_78, j_78));
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  if(match_cons(t, sym__2))
    {
      k_78 = ATgetArgument(t, 0);
      l_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_78), k_78);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(m_78, n_78, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  t_79 = t;
  if(match_cons(t, sym__3))
    {
      u_79 = ATgetArgument(t, 0);
      v_79 = ATgetArgument(t, 1);
      w_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_79;
  if(match_string(t, "T"))
    {
      t = w_79;
      if(match_cons(t, sym__2))
        {
          x_79 = ATgetArgument(t, 0);
          y_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_79;
      if(match_int(t, 0))
        {
          ATerm r_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_80(u_79, x_79, y_79, t_79, t);
              LocalPopChoice(v_30);
            }
          else
            {
              t = r_30;
              {
                ATerm b_80 = NULL;
                t = t_79;
                t = new_0_0(t);
                b_80 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, u_79, term_e_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_80), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_80)), (ATerm) ATmakeAppl(sym_Op_2, u_79, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_80)), (ATerm) ATmakeAppl(sym_Op_2, u_79, (ATerm) ATempty))), term_w_22))));
              }
            }
        }
      else
        {
          t = c_80(u_79, x_79, y_79, t_79, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = w_79;
      if(match_cons(t, sym__2))
        {
          x_79 = ATgetArgument(t, 0);
          y_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_80(u_79, x_79, y_79, t_79, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm r_143 (ATerm), ATerm t)
{
  ATerm y_19 = NULL;
  static ATerm k_6 (ATerm t);
  static ATerm k_6 (ATerm t)
  {
    t = r_143(t);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    return(t);
  }
  t = fetch_1_0(k_6, t);
  t = not_null(y_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = term_g_16;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_w_30);
  b_20 = t;
  t = SSL_printnl(a_20, b_20);
  t = term_v_19;
  z_19 = t;
  t = SSL_exit(z_19);
  t = (ATerm) ATinsert(ATempty, term_w_30);
  return(t);
}
ATerm debug_1_0 (ATerm t_138 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  e_20 = t;
  t = t_138(t);
  f_20 = t;
  t = term_g_16;
  g_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_20), f_20);
  h_20 = t;
  t = SSL_printnl(g_20, h_20);
  t = e_20;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm a_31 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
          n_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(z_30);
      t = n_15;
      t = foldr_3_0(w_6, x_6, y_6, t);
      t = m_15;
      t = foldr_3_0(z_6, a_7, b_7, t);
    }
  else
    {
      t = y_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm c_31 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
          n_15 = ATgetArgument(t, 2);
          {
            ATerm e_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_15;
      t = foldr_3_0(c_7, d_7, e_7, t);
      t = m_15;
      t = foldr_3_0(f_7, g_7, h_7, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(t_15, u_15, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(v_15, w_15, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(z_15, a_16, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(b_16, c_16, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      ATerm i_31 = ATgetArgument(t, 1);
      ATerm l_31 = ATgetArgument(t, 2);
      ATerm m_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL;
      static ATerm l_6 (ATerm t);
      static ATerm l_6 (ATerm t)
      {
        ATerm r_20 = NULL,s_20 = NULL;
        r_20 = t;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm u_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(t_31);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
          else
            {
              t = s_31;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  s_20 = ATgetArgument(t, 0);
                  {
                    ATerm x_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm y_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm b_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = s_20;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = r_20;
            }
        }
        return(t);
      }
      t = fetch_1_0(l_6, t);
      {
        static ATerm s_6 (ATerm t);
        static ATerm s_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_20 = ATgetArgument(t, 0);
              {
                ATerm c_32 = ATgetArgument(t, 1);
              }
              {
                ATerm k_32 = ATgetArgument(t, 2);
              }
              {
                ATerm l_32 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_6, t);
      }
      t = not_null(q_20);
      t = debug_1_0(t_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm l_22 = NULL;
        l_22 = t;
        t = map_1_0(v_6, t);
        t = l_22;
        {
          ATerm m_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(j_7, t);
              LocalPopChoice(o_32);
            }
          else
            {
              t = m_32;
              {
                ATerm e_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_16 = ATgetFirst((ATermList) t);
                    {
                      ATerm p_32 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = e_16;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,j_16 = NULL;
  p_22 = t;
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_32 = ATgetArgument(t, 1);
        if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
          {
            q_22 = ATgetFirst((ATermList) v_32);
            {
              ATerm e_33 = (ATerm) ATgetNext((ATermList) v_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_33 = ATgetArgument(t, 1);
        if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
          {
            ATerm h_33 = ATgetFirst((ATermList) g_33);
            ATerm i_33 = (ATerm) ATgetNext((ATermList) g_33);
            if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
              {
                j_16 = ATgetFirst((ATermList) i_33);
                {
                  ATerm j_33 = (ATerm) ATgetNext((ATermList) i_33);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, q_22, j_16);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(k_7, l_7, t);
  return(t);
}
ATerm alltd_1_0 (ATerm y_132 (ATerm), ATerm t)
{
  static ATerm r_22 (ATerm t);
  static ATerm r_22 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_132(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = SRTS_all(r_22, t);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
static ATerm q_9 (ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  t_22 = t;
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
        t = m_11(o_72, p_72, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_33 = ATgetFirst((ATermList) t);
            s_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_33);
        {
          ATerm u_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_72, p_72, s_22);
          t = lookup_table_0_1(o_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_11(p_72, s_22, u_22, t);
          t = (ATerm) ATmakeAppl(sym__3, o_72, p_72, s_22);
        }
      }
    else
      {
        t = m_33;
        {
          ATerm y_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
          t = lookup_table_0_1(o_72, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_11(p_72, y_22, t);
          t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
        }
      }
  }
  t = t_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_166 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  g_23 = t;
  t = j_166(t);
  d_23 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL;
        t = term_t_33;
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_23, term_t_33);
        t = m_11(d_23, l_23, t);
        {
          ATerm u_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_33;
            }
        }
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_23 = ATgetFirst((ATermList) t);
      b_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_23, term_t_33, b_23);
  t = lookup_table_0_1(d_23, t);
  k_23 = t;
  t = term_t_33;
  i_23 = t;
  t = k_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(i_23, b_23, j_23, t);
  t = c_23;
  {
    static ATerm m_7 (ATerm t);
    static ATerm m_7 (ATerm t)
    {
      ATerm n_23 = NULL;
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_23, n_23);
      t = q_9(d_23, n_23, t);
      return(t);
    }
    t = map_1_0(m_7, t);
  }
  t = g_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t)
{
  ATerm v_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_134(t);
      t = s_134(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = v_33;
      t = s_134(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_166 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  s_23 = t;
  t = i_166(t);
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_23, term_t_33);
  {
    ATerm a_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            ATerm e_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_33;
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_23, term_t_33);
        t = m_11(r_23, u_25, t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATempty;
      }
  }
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_23, term_t_33, (ATerm) ATinsert(CheckATermList(t_23), (ATerm) ATempty));
  t = lookup_table_0_1(r_23, t);
  y_23 = t;
  t = term_t_33;
  v_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), (ATerm) ATempty);
  w_23 = t;
  t = y_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(v_23, w_23, x_23, t);
  t = s_23;
  return(t);
}
ATerm scope_2_0 (ATerm k_166 (ATerm), ATerm l_166 (ATerm), ATerm t)
{
  static ATerm n_7 (ATerm t);
  static ATerm n_7 (ATerm t)
  {
    t = end_scope_1_0(k_166, t);
    return(t);
  }
  t = begin_scope_1_0(k_166, t);
  t = restore_always_2_0(l_166, n_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm h_26 = NULL,k_26 = NULL,m_26 = NULL,x_26 = NULL,g_27 = NULL,j_27 = NULL,l_27 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      x_26 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      l_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_27;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_26;
            if((x_26 != t))
              {
                _fail(t);
              }
            t = k_26;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            t = (ATerm) ATmakeAppl(sym__2, x_26, l_27);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_26, l_27);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      if(((ATgetType(j_34) != AT_LIST) || !(ATisEmpty(j_34))))
        _fail(t);
      {
        ATerm k_34 = ATgetArgument(t, 1);
        if(((ATgetType(k_34) != AT_LIST) || !(ATisEmpty(k_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm a_30 = NULL,g_30 = NULL,j_30 = NULL,k_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
        {
          a_30 = ATgetFirst((ATermList) l_34);
          g_30 = (ATerm) ATgetNext((ATermList) l_34);
        }
      else
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
          {
            j_30 = ATgetFirst((ATermList) m_34);
            k_30 = (ATerm) ATgetNext((ATermList) m_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_30, j_30), (ATerm) ATmakeAppl(sym__2, g_30, k_30));
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm l_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_30), l_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,h_29 = NULL,p_29 = NULL;
  d_29 = t;
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            ATerm q_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_34);
        t = d_29;
      }
    else
      {
        t = n_34;
        {
          ATerm x_29 = NULL;
          if(match_cons(t, sym__3))
            {
              e_29 = ATgetArgument(t, 0);
              h_29 = ATgetArgument(t, 1);
              p_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_29, h_29);
          t = genzip_4_0(o_7, p_7, q_7, _id, t);
          x_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_29, p_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,g_31 = NULL;
  static ATerm r_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    ATerm m_16 = NULL;
    t = p_130(t);
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_16, not_null(g_31));
    t = lookup_0_0(t);
    t = q_130(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((g_31 != NULL) && (g_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_31;
  t = alltd_1_0(r_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm q_31 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_31 = ATgetArgument(t, 0);
      {
        ATerm r_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_31;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_31;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if(((ATgetType(t_34) != AT_LIST) || !(ATisEmpty(t_34))))
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
        {
          q_32 = ATgetFirst((ATermList) w_34);
          r_32 = (ATerm) ATgetNext((ATermList) w_34);
        }
      else
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            s_32 = ATgetFirst((ATermList) x_34);
            t_32 = (ATerm) ATgetNext((ATermList) x_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_32, s_32), (ATerm) ATmakeAppl(sym__2, r_32, t_32));
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_32), w_32);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      if(match_cons(z_34, sym_VarDec_2))
        {
          y_32 = ATgetArgument(z_34, 0);
          {
            ATerm a_35 = ATgetArgument(z_34, 1);
          }
        }
      else
        _fail(t);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_32);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, z_32);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, y_32), (ATerm) ATmakeAppl(sym_Defined_2, term_b_35, z_32));
  t = u_10(j_8, b_33, c_33, t);
  t = a_33;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_33 = NULL,w_33 = NULL,t_16 = NULL;
  d_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm d_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_s_34;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, d_33);
  t = w_10(t_16, d_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_33;
  return(t);
}
static ATerm u_9 (ATerm a_28, ATerm b_28, ATerm f_28, ATerm c_28, ATerm e_28, ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,p_31 = NULL;
  t = c_28;
  t = map_1_0(s_7, t);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_31, b_28, e_28);
  t = substitute_2_0(t_7, _id, t);
  k_31 = t;
  {
    static ATerm v_7 (ATerm t);
    static ATerm v_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, f_28, a_28);
      t = genzip_4_0(z_7, f_8, g_8, h_8, t);
      t = k_31;
      t = alltd_1_0(k_8, t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      return(t);
    }
    t = scope_2_0(u_7, v_7, t);
  }
  t = not_null(p_31);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm m_36 = NULL,v_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,r_4 = NULL;
  a_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  m_36 = t;
  t = v_36;
  t = new_0_0(t);
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_36, y_36);
  r_4 = t;
  t = SSLsetAnnotations(r_4, m_36);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,n_39 = NULL,s_4 = NULL;
  n_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_39);
  w_37 = t;
  t = x_37;
  t = new_0_0(t);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_37, y_37);
  s_4 = t;
  t = SSLsetAnnotations(s_4, w_37);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm o_39 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_39 = ATgetArgument(t, 0);
      {
        ATerm j_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_39);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm z_39 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_39 = ATgetArgument(t, 0);
      {
        ATerm k_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_39);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm x_33 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,k_36 = NULL;
  e_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_35 = ATgetFirst((ATermList) t);
      if(match_cons(l_35, sym_SDefT_4))
        {
          x_33 = ATgetArgument(l_35, 0);
          a_36 = ATgetArgument(l_35, 1);
          b_36 = ATgetArgument(l_35, 2);
          {
            ATerm o_35 = ATgetArgument(l_35, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm n_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_36;
  t = map_1_0(l_8, t);
  c_36 = t;
  t = b_36;
  t = map_1_0(m_8, t);
  d_36 = t;
  t = c_36;
  t = map_1_0(n_8, t);
  f_36 = t;
  t = d_36;
  t = map_1_0(o_8, t);
  g_36 = t;
  t = e_36;
  {
    static ATerm p_8 (ATerm t);
    static ATerm p_8 (ATerm t)
    {
      ATerm a_40 = NULL,m_40 = NULL,n_40 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm q_35 = ATgetArgument(t, 0);
          a_40 = ATgetArgument(t, 1);
          m_40 = ATgetArgument(t, 2);
          n_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_9(f_36, g_36, a_40, m_40, n_40, t);
      return(t);
    }
    t = map_1_0(p_8, t);
  }
  t = choices_0_0(t);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_33, c_36, d_36, k_36);
  return(t);
}
static ATerm d_82 (ATerm m_80, ATerm n_80, ATerm o_80, ATerm p_80, ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,x_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_80, n_80);
  t = Definitions_0_0(t);
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_80, o_80);
  a_81 = t;
  if(match_cons(t, sym__2))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      ATerm s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_81);
  y_80 = t;
  t = x_80;
  {
    ATerm t_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_81 = NULL,f_81 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_81 = ATgetFirst((ATermList) t);
            f_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_81;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_81;
        LocalPopChoice(v_35);
      }
    else
      {
        t = t_35;
        {
          ATerm w_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(y_35);
            }
          else
            {
              t = w_35;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_80, o_80);
  x_4 = t;
  t = SSLsetAnnotations(x_4, y_80);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,n_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL;
  n_81 = t;
  if(match_cons(t, sym__2))
    {
      p_81 = ATgetArgument(t, 0);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_81;
  if(match_cons(t, sym__2))
    {
      q_81 = ATgetArgument(t, 0);
      r_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_81;
  if(match_cons(t, sym_Mod_2))
    {
      j_81 = ATgetArgument(t, 0);
      k_81 = ATgetArgument(t, 1);
      {
        ATerm z_35 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, j_81, k_81, r_81);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            y_81 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_81, s_81);
            LocalPopChoice(h_36);
          }
        else
          {
            t = z_35;
            t = d_82(q_81, r_81, s_81, n_81, t);
          }
      }
    }
  else
    {
      t = d_82(q_81, r_81, s_81, n_81, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_143 (ATerm), ATerm t)
{
  static ATerm v_83 (ATerm t);
  static ATerm v_83 (ATerm t)
  {
    ATerm l_83 = NULL,m_83 = NULL,u_83 = NULL;
    u_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_83 = ATgetFirst((ATermList) t);
        m_83 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_30 = NULL,p_30 = NULL,z_4 = NULL;
          t = SSLgetAnnotations(u_83);
          i_30 = t;
          t = m_83;
          t = v_83(t);
          p_30 = t;
          t = (ATerm) ATinsert(CheckATermList(p_30), l_83);
          z_4 = t;
          t = SSLsetAnnotations(z_4, i_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_83;
        t = w_143(t);
      }
    return(t);
  }
  t = v_83(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,n_82 = NULL;
  j_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_82;
    }
  else
    {
      static ATerm q_8 (ATerm t);
      static ATerm q_8 (ATerm t)
      {
        t = not_null(n_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_82 = ATgetFirst((ATermList) t);
          if(((n_82 != NULL) && (n_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_82;
      t = at_end_1_0(q_8, t);
    }
  return(t);
}
static ATerm i_84 (ATerm z_83, ATerm t)
{
  ATerm a_84 = NULL;
  t = SSL_explode_term(z_83);
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_84;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_84 = NULL,e_84 = NULL,f_84 = NULL;
  f_84 = t;
  if(match_cons(t, sym__2))
    {
      c_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
      {
        ATerm j_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_8 (ATerm t);
            static ATerm r_8 (ATerm t)
            {
              t = e_84;
              return(t);
            }
            t = c_84;
            t = at_end_1_0(r_8, t);
            LocalPopChoice(l_36);
          }
        else
          {
            t = j_36;
            t = i_84(f_84, t);
          }
      }
    }
  else
    {
      t = i_84(f_84, t);
    }
  return(t);
}
static ATerm k_10 (ATerm n_150 (ATerm), ATerm l_67, ATerm k_67, ATerm t)
{
  static ATerm y_84 (ATerm t);
  static ATerm y_84 (ATerm t)
  {
    ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
    t_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_84;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_84 = ATgetFirst((ATermList) t);
            v_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_84;
              {
                static ATerm s_8 (ATerm t);
                static ATerm s_8 (ATerm t)
                {
                  t = k_67;
                  return(t);
                }
                t = x_10(n_150, s_8, u_84, v_84, t);
              }
              t = y_84(t);
              LocalPopChoice(o_36);
            }
          else
            {
              t = n_36;
              {
                ATerm b_31 = NULL,f_31 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(t_84);
                b_31 = t;
                t = v_84;
                t = y_84(t);
                f_31 = t;
                t = (ATerm) ATinsert(CheckATermList(f_31), u_84);
                b_5 = t;
                t = SSLsetAnnotations(b_5, b_31);
              }
            }
        }
      }
    return(t);
  }
  t = l_67;
  t = y_84(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm t)
{
  static ATerm l_85 (ATerm t);
  static ATerm l_85 (ATerm t)
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        {
          ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,f_85 = NULL,g_85 = NULL,d_5 = NULL;
          t = y_135(t);
          g_85 = t;
          if(match_cons(t, sym__2))
            {
              b_85 = ATgetArgument(t, 0);
              c_85 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_85);
          a_85 = t;
          t = b_85;
          t = a_136(t);
          d_85 = t;
          t = c_85;
          t = l_85(t);
          f_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_85, f_85);
          d_5 = t;
          t = SSLsetAnnotations(d_5, a_85);
          t = z_135(t);
        }
      }
    return(t);
  }
  t = l_85(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(((ATgetType(r_36) != AT_LIST) || !(ATisEmpty(r_36))))
        _fail(t);
      {
        ATerm s_36 = ATgetArgument(t, 1);
        if(((ATgetType(s_36) != AT_LIST) || !(ATisEmpty(s_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
        {
          s_85 = ATgetFirst((ATermList) t_36);
          t_85 = (ATerm) ATgetNext((ATermList) t_36);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
          {
            u_85 = ATgetFirst((ATermList) u_36);
            v_85 = (ATerm) ATgetNext((ATermList) u_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_85, u_85), (ATerm) ATmakeAppl(sym__2, t_85, v_85));
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  if(match_cons(t, sym__2))
    {
      w_85 = ATgetArgument(t, 0);
      x_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_85), w_85);
  return(t);
}
static ATerm p_10 (ATerm y_872, ATerm d_873, ATerm k_85, ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
  t = SSL_explode_term(d_873);
  if(match_cons(t, sym__2))
    {
      n_85 = ATgetArgument(t, 0);
      p_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_872);
  if(match_cons(t, sym__2))
    {
      if((n_85 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_85, p_85);
  t = genzip_4_0(t_8, u_8, w_8, _id, t);
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_85, k_85);
  t = conc_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_86);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,f_5 = NULL;
  l_86 = t;
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_86);
  i_86 = t;
  t = k_86;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_86, k_86);
  f_5 = t;
  t = SSLsetAnnotations(f_5, i_86);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL;
  e_87 = t;
  if(match_cons(t, sym__2))
    {
      f_87 = ATgetArgument(t, 0);
      g_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_87 = ATgetFirst((ATermList) t);
      i_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_87(f_87, g_87, e_87, t);
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_87), h_87), i_87);
          }
      }
    }
  else
    {
      t = s_87(f_87, g_87, e_87, t);
    }
  return(t);
}
static ATerm s_87 (ATerm m_86, ATerm n_86, ATerm o_86, ATerm t)
{
  ATerm p_86 = NULL,s_86 = NULL,g_5 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
  t = SSLgetAnnotations(o_86);
  p_86 = t;
  t = n_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_86 = ATgetFirst((ATermList) t);
      y_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_86;
  if(match_cons(t, sym__2))
    {
      w_86 = ATgetArgument(t, 0);
      x_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_86;
        if((w_86 != t))
          {
            _fail(t);
          }
        t = y_86;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = n_86;
        t = p_10(w_86, x_86, y_86, t);
      }
  }
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_86, s_86);
  g_5 = t;
  t = SSLsetAnnotations(g_5, p_86);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm r_87 = NULL;
  if(match_cons(t, sym__2))
    {
      r_87 = ATgetArgument(t, 0);
      if((r_87 != ATgetArgument(t, 1)))
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
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_8, y_8, z_8, t);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
        m_87 = t;
        if(match_cons(t, sym__2))
          {
            n_87 = ATgetArgument(t, 0);
            o_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_87;
        t = k_10(a_9, n_87, o_87, t);
      }
    }
  return(t);
}
static ATerm r_10 (ATerm d_166 (ATerm), ATerm e_166 (ATerm), ATerm f_166 (ATerm), ATerm p_88, ATerm m_88, ATerm u_88, ATerm q_88, ATerm n_88, ATerm o_88, ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_88, q_88);
  t = d_166(t);
  if(match_cons(t, sym__2))
    {
      u_87 = ATgetArgument(t, 0);
      t_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_87;
  t = e_166(t);
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_87, u_88);
  t = diff_0_0(t);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_87, m_88);
  t = conc_0_0(t);
  x_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_87, u_88);
  t = conc_0_0(t);
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_88, u_87, n_88);
  t = f_166(t);
  z_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, x_87, y_87, t_87, z_87, o_88);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm d_166 (ATerm), ATerm e_166 (ATerm), ATerm f_166 (ATerm), ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
        {
          b_88 = ATgetFirst((ATermList) k_37);
          c_88 = (ATerm) ATgetNext((ATermList) k_37);
        }
      else
        _fail(t);
      d_88 = ATgetArgument(t, 1);
      e_88 = ATgetArgument(t, 2);
      f_88 = ATgetArgument(t, 3);
      g_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = r_10(d_166, e_166, f_166, b_88, c_88, d_88, e_88, f_88, g_88, t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t)
{
  static ATerm h_88 (ATerm t);
  static ATerm h_88 (ATerm t)
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_137(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        t = y_137(t);
        t = h_88(t);
      }
    return(t);
  }
  t = h_88(t);
  return(t);
}
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm t)
{
  t = a_138(t);
  t = while_not_2_0(b_138, c_138, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
  if(match_cons(t, sym__3))
    {
      b_89 = ATgetArgument(t, 0);
      c_89 = ATgetArgument(t, 1);
      d_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, b_89, b_89, c_89, d_89, (ATerm) ATempty);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(((ATgetType(n_37) != AT_LIST) || !(ATisEmpty(n_37))))
        _fail(t);
      {
        ATerm q_37 = ATgetArgument(t, 1);
      }
      {
        ATerm r_37 = ATgetArgument(t, 2);
      }
      q_89 = ATgetArgument(t, 3);
      r_89 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_89, r_89);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, h_9, i_9, t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL;
        if(match_cons(t, sym__5))
          {
            y_89 = ATgetArgument(t, 0);
            b_90 = ATgetArgument(t, 1);
            c_90 = ATgetArgument(t, 2);
            d_90 = ATgetArgument(t, 3);
            e_90 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = y_89;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_89 = ATgetFirst((ATermList) t);
            a_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, a_90, b_90, c_90, d_90, (ATerm) ATinsert(CheckATermList(e_90), z_89));
      }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(k_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_38 = ATgetArgument(t, 0);
      v_89 = ATgetArgument(t, 1);
      w_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_89), v_89);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_32;
  if(match_cons(t, sym_Mod_2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_32;
            t = j_9(f_32, g_32, j_32, t);
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = n_32(i_32, j_32, t);
          }
      }
    }
  else
    {
      t = n_32(i_32, j_32, t);
    }
  return(t);
}
static ATerm n_32 (ATerm z_31, ATerm a_32, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  t = term_g_16;
  d_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), a_32), term_l_16), z_31), term_h_16);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), a_32), term_l_16), z_31), term_h_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  t = for_3_0(e_9, f_9, g_9, t);
  h_91 = t;
  if(match_cons(t, sym__2))
    {
      i_91 = ATgetArgument(t, 0);
      j_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_91;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_91;
    }
  else
    {
      ATerm v_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_91 = ATgetFirst((ATermList) t);
          l_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(l_91), k_91);
      t = map_1_0(l_9, t);
      t = term_v_19;
      v_31 = t;
      t = SSL_exit(v_31);
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL;
  if(match_cons(t, sym__2))
    {
      d_92 = ATgetArgument(t, 0);
      e_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(d_92, e_92, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL;
  if(match_cons(t, sym__2))
    {
      f_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(f_92, g_92, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm h_92 = NULL;
  if(match_cons(t, sym__2))
    {
      h_92 = ATgetArgument(t, 0);
      if((h_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  r_91 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      u_91 = ATgetArgument(t, 0);
      p_91 = ATgetArgument(t, 1);
      q_91 = ATgetArgument(t, 2);
      {
        ATerm h_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_91 = t;
  t = p_91;
  t = foldr_3_0(m_9, n_9, r_9, t);
  s_91 = t;
  t = q_91;
  t = foldr_3_0(s_9, w_9, x_9, t);
  t_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, (ATerm) ATmakeAppl(sym__2, s_91, t_91));
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        t = (ATerm) ATempty;
      }
  }
  y_91 = t;
  t = u_91;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = (ATerm) ATempty;
      }
  }
  x_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_91, t_91));
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_91, t_91)), x_91);
  t = y_10(z_9, c_92, x_91, t);
  v_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, (ATerm) ATmakeAppl(sym__2, s_91, t_91));
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_38, (ATerm) ATinsert(CheckATermList(y_91), r_91));
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_91, (ATerm) ATmakeAppl(sym__2, s_91, t_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_38, (ATerm) ATinsert(CheckATermList(y_91), r_91)));
  t = u_10(a_10, a_92, b_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_38, v_91);
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_91, (ATerm) ATmakeAppl(sym_Defined_2, term_p_38, v_91));
  t = u_10(b_10, u_91, z_91, t);
  t = w_91;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL;
  if(match_cons(t, sym__2))
    {
      w_92 = ATgetArgument(t, 0);
      x_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(w_92, x_92, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  if(match_cons(t, sym__2))
    {
      y_92 = ATgetArgument(t, 0);
      z_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(y_92, z_92, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm a_93 = NULL;
  if(match_cons(t, sym__2))
    {
      a_93 = ATgetArgument(t, 0);
      if((a_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL;
  k_92 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      n_92 = ATgetArgument(t, 0);
      i_92 = ATgetArgument(t, 1);
      j_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  p_92 = t;
  t = i_92;
  t = foldr_3_0(f_10, g_10, h_10, t);
  l_92 = t;
  t = j_92;
  t = foldr_3_0(j_10, l_10, o_10, t);
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = (ATerm) ATempty;
      }
  }
  r_92 = t;
  t = n_92;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        t = (ATerm) ATempty;
      }
  }
  q_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_92, m_92)), q_92);
  t = y_10(q_10, v_92, q_92, t);
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_38, (ATerm) ATinsert(CheckATermList(r_92), k_92));
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_38, (ATerm) ATinsert(CheckATermList(r_92), k_92)));
  t = u_10(s_10, t_92, u_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_38, o_92);
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_92, (ATerm) ATmakeAppl(sym_Defined_2, term_x_38, o_92));
  t = u_10(t_10, n_92, s_92, t);
  t = p_92;
  return(t);
}
static ATerm u_10 (ATerm m_166 (ATerm), ATerm n_89, ATerm l_89, ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL;
  e_93 = t;
  t = m_166(t);
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_93, n_89, l_89);
  t = n_11(b_93, n_89, l_89, t);
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_93 = NULL;
        t = term_t_33;
        j_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_93, term_t_33);
        t = m_11(b_93, j_93, t);
        {
          ATerm a_39 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_39;
            }
        }
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_93 = ATgetFirst((ATermList) t);
      d_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_93, term_t_33, (ATerm) ATinsert(CheckATermList(d_93), (ATerm) ATinsert(CheckATermList(c_93), n_89)));
  t = lookup_table_0_1(b_93, t);
  i_93 = t;
  t = term_t_33;
  f_93 = t;
  t = (ATerm) ATinsert(CheckATermList(d_93), (ATerm) ATinsert(CheckATermList(c_93), n_89));
  g_93 = t;
  t = i_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(f_93, g_93, h_93, t);
  t = e_93;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm w_93 = NULL;
  w_93 = t;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_33 = NULL,s_33 = NULL;
        t = term_g_38;
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_38, w_93);
        t = w_10(s_33, w_93, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            p_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_33;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        {
          ATerm f_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_33 = NULL,b_34 = NULL;
              t = term_g_38;
              b_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_38, w_93);
              t = w_10(b_34, w_93, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_39 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_39) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  y_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_33;
              LocalPopChoice(h_39);
            }
          else
            {
              t = f_39;
              {
                ATerm f_34 = NULL,i_34 = NULL;
                t = term_g_38;
                i_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_38, w_93);
                t = w_10(i_34, w_93, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_39 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_39) != ATmakeSymbol("h_0", 0, ATtrue)))
                      _fail(t);
                    f_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_34;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm w_10 (ATerm u_72, ATerm v_72, ATerm t)
{
  ATerm a_94 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_72, v_72);
  t = m_11(u_72, v_72, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_94 = ATgetFirst((ATermList) t);
      {
        ATerm k_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_94;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm r_94 = NULL,t_94 = NULL;
  r_94 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_94;
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      ATerm s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL,y_34 = NULL;
        t = term_f_38;
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_38, r_94);
        t = w_10(y_34, r_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_39 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_39) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            v_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_34;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        {
          ATerm b_40 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_35 = NULL,i_35 = NULL;
              t = term_f_38;
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_38, r_94);
              t = w_10(i_35, r_94, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_40 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_40) != ATmakeSymbol("k_0", 0, ATtrue)))
                    _fail(t);
                  c_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_35;
              LocalPopChoice(c_40);
            }
          else
            {
              t = b_40;
              {
                ATerm m_35 = NULL,p_35 = NULL;
                t = term_f_38;
                p_35 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_38, r_94);
                t = w_10(p_35, r_94, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_40 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_40) != ATmakeSymbol("e_0", 0, ATtrue)))
                      _fail(t);
                    m_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm n_95 = NULL,o_95 = NULL;
  if(match_cons(t, sym__2))
    {
      n_95 = ATgetArgument(t, 0);
      o_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(n_95, o_95, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL;
  if(match_cons(t, sym__2))
    {
      p_95 = ATgetArgument(t, 0);
      q_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(p_95, q_95, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm r_95 = NULL;
  if(match_cons(t, sym__2))
    {
      r_95 = ATgetArgument(t, 0);
      if((r_95 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL;
  b_95 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_95 = ATgetArgument(t, 0);
      z_94 = ATgetArgument(t, 1);
      a_95 = ATgetArgument(t, 2);
      {
        ATerm f_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  g_95 = t;
  t = z_94;
  t = foldr_3_0(v_10, i_11, l_11, t);
  c_95 = t;
  t = a_95;
  t = foldr_3_0(s_11, t_11, w_11, t);
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, c_95, d_95));
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = (ATerm) ATempty;
      }
  }
  i_95 = t;
  t = e_95;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = (ATerm) ATempty;
      }
  }
  h_95 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_95, d_95));
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_95, d_95)), h_95);
  t = y_10(x_11, m_95, h_95, t);
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, c_95, d_95));
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, (ATerm) ATinsert(CheckATermList(i_95), b_95));
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym__2, c_95, d_95)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, (ATerm) ATinsert(CheckATermList(i_95), b_95)));
  t = u_10(y_11, k_95, l_95, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_40, f_95);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_95, (ATerm) ATmakeAppl(sym_Defined_2, term_l_40, f_95));
  t = u_10(z_11, e_95, j_95, t);
  t = g_95;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  if(match_cons(t, sym__2))
    {
      e_96 = ATgetArgument(t, 0);
      f_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(e_96, f_96, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym__2))
    {
      g_96 = ATgetArgument(t, 0);
      h_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(g_96, h_96, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      n_96 = ATgetArgument(t, 0);
      o_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(n_96, o_96, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL;
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(p_96, q_96, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      x_96 = ATgetArgument(t, 0);
      y_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(x_96, y_96, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL;
  if(match_cons(t, sym__2))
    {
      z_96 = ATgetArgument(t, 0);
      a_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(z_96, a_97, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL;
  t_95 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            u_95 = ATgetArgument(t, 0);
            v_95 = ATgetArgument(t, 1);
            w_95 = ATgetArgument(t, 2);
            {
              ATerm q_40 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_40);
        {
          ATerm b_96 = NULL,c_96 = NULL;
          t = v_95;
          t = foldr_3_0(a_12, b_12, c_12, t);
          b_96 = t;
          t = w_95;
          t = foldr_3_0(e_12, f_12, g_12, t);
          c_96 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_95, (ATerm) ATmakeAppl(sym__2, b_96, c_96)));
        }
      }
    else
      {
        t = o_40;
        if(match_cons(t, sym_ExtSDef_3))
          {
            u_95 = ATgetArgument(t, 0);
            v_95 = ATgetArgument(t, 1);
            w_95 = ATgetArgument(t, 2);
            {
              ATerm l_96 = NULL,m_96 = NULL;
              t = v_95;
              t = foldr_3_0(j_12, l_12, m_12, t);
              l_96 = t;
              t = w_95;
              t = foldr_3_0(n_12, o_12, p_12, t);
              m_96 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_95, (ATerm) ATmakeAppl(sym__2, l_96, m_96)));
            }
          }
        else
          {
            ATerm u_96 = NULL,v_96 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                u_95 = ATgetArgument(t, 0);
                v_95 = ATgetArgument(t, 1);
                w_95 = ATgetArgument(t, 2);
                {
                  ATerm r_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = v_95;
            t = foldr_3_0(s_12, t_12, u_12, t);
            u_96 = t;
            t = w_95;
            t = foldr_3_0(w_12, x_12, y_12, t);
            v_96 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_95, (ATerm) ATmakeAppl(sym__2, u_96, v_96)));
          }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm r_67, ATerm q_67, ATerm t)
{
  t = w_150(t);
  {
    static ATerm z_12 (ATerm t);
    static ATerm z_12 (ATerm t)
    {
      ATerm b_97 = NULL;
      b_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_67, b_97);
      t = v_150(t);
      return(t);
    }
    t = fetch_1_0(z_12, t);
  }
  t = q_67;
  return(t);
}
static ATerm y_10 (ATerm s_150 (ATerm), ATerm n_67, ATerm m_67, ATerm t)
{
  static ATerm r_97 (ATerm t);
  static ATerm r_97 (ATerm t)
  {
    ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL;
    m_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_67;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_97 = ATgetFirst((ATermList) t);
            o_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_97;
              {
                static ATerm a_13 (ATerm t);
                static ATerm a_13 (ATerm t)
                {
                  t = m_67;
                  return(t);
                }
                t = x_10(s_150, a_13, n_97, o_97, t);
              }
              t = r_97(t);
              LocalPopChoice(t_40);
            }
          else
            {
              t = s_40;
              {
                ATerm u_35 = NULL,x_35 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(m_97);
                u_35 = t;
                t = o_97;
                t = r_97(t);
                x_35 = t;
                t = (ATerm) ATinsert(CheckATermList(x_35), n_97);
                j_5 = t;
                t = SSLsetAnnotations(j_5, u_35);
              }
            }
        }
      }
    return(t);
  }
  t = n_67;
  t = r_97(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_153 (ATerm), ATerm s_153 (ATerm), ATerm t_153 (ATerm), ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL;
  u_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_97;
      t = r_153(t);
    }
  else
    {
      ATerm z_97 = NULL,a_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_97 = ATgetFirst((ATermList) t);
          w_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_97;
      t = t_153(t);
      z_97 = t;
      t = w_97;
      t = foldr_3_0(r_153, s_153, t_153, t);
      a_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_97, a_98);
      t = s_153(t);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL;
  if(match_cons(t, sym__2))
    {
      e_98 = ATgetArgument(t, 0);
      f_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(e_13, e_98, f_98, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm g_98 = NULL;
  if(match_cons(t, sym__2))
    {
      g_98 = ATgetArgument(t, 0);
      if((g_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
  d_98 = t;
  t = foldr_3_0(b_13, c_13, DefinitionName_0_0, t);
  b_98 = t;
  t = d_98;
  t = map_1_0(f_13, t);
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_98, c_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,l_5 = NULL;
  m_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_98 = ATgetFirst((ATermList) t);
      j_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_98);
  h_98 = t;
  t = i_98;
  t = u_105(t);
  k_98 = t;
  t = j_98;
  t = v_105(t);
  l_98 = t;
  t = (ATerm) ATinsert(CheckATermList(l_98), k_98);
  l_5 = t;
  t = SSLsetAnnotations(l_5, h_98);
  return(t);
}
static ATerm z_10 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm n_98 = NULL;
  t = SSL_fputc(q_49, r_49);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_98);
  return(t);
}
static ATerm a_11 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm o_98 = NULL;
  t = SSL_write_term_to_stream_text(w_47, x_47);
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_98);
  return(t);
}
static ATerm c_11 (ATerm v_138 (ATerm), ATerm j_358, ATerm c_48, ATerm t)
{
  ATerm p_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_358, term_y_40);
  t = g_11(t);
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_98, c_48);
  t = v_138(t);
  t = fclose_0_0(t);
  t = c_48;
  return(t);
}
static ATerm b_11 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm q_98 = NULL;
  t = SSL_write_term_to_stream_baf(s_47, t_47);
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_98);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(match_cons(z_40, sym_Stream_1))
        {
          x_98 = ATgetArgument(z_40, 0);
        }
      else
        _fail(t);
      y_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(x_98, y_98, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_41 = ATgetArgument(t, 0);
      if(match_cons(a_41, sym_Stream_1))
        {
          c_99 = ATgetArgument(a_41, 0);
        }
      else
        _fail(t);
      d_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(c_99, d_99, t);
  z_98 = t;
  t = term_q_21;
  a_99 = t;
  t = z_98;
  if(match_cons(t, sym_Stream_1))
    {
      b_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, z_98);
  t = z_10(a_99, b_99, t);
  return(t);
}
ATerm output_1_0 (ATerm m_161 (ATerm), ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL;
  t = m_161(t);
  s_98 = t;
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_98 = NULL,u_98 = NULL;
        t = term_f_41;
        t_98 = t;
        t = term_g_41;
        u_98 = t;
        t = term_h_41;
        t = m_11(t_98, u_98, t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = term_i_41;
      }
  }
  r_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_98, s_98);
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_98 = NULL,w_98 = NULL;
        t = term_f_41;
        v_98 = t;
        t = term_l_41;
        w_98 = t;
        t = term_m_41;
        t = m_11(v_98, w_98, t);
        t = (ATerm) ATmakeAppl(sym__2, r_98, s_98);
        LocalPopChoice(k_41);
        if(match_cons(t, sym__2))
          {
            ATerm n_41 = ATgetArgument(t, 0);
            ATerm o_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_11(h_13, r_98, s_98, t);
      }
    else
      {
        t = j_41;
        if(match_cons(t, sym__2))
          {
            ATerm p_41 = ATgetArgument(t, 0);
            ATerm q_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_11(i_13, r_98, s_98, t);
      }
  }
  return(t);
}
static ATerm r_99 (ATerm l_99, ATerm t)
{
  t = SSL_fclose(l_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL;
  p_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_99 = ATgetArgument(t, 0);
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_99);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            t = r_99(p_99, t);
          }
      }
    }
  else
    {
      t = r_99(p_99, t);
    }
  return(t);
}
static ATerm d_11 (ATerm y_47, ATerm t)
{
  t = SSL_read_term_from_stream(y_47);
  return(t);
}
static ATerm e_11 (ATerm u_66, ATerm v_66, ATerm t)
{
  t = SSL_strcat(u_66, v_66);
  return(t);
}
static ATerm f_11 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm s_99 = NULL;
  t = SSL_fopen(s_49, t_49);
  s_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_99 = NULL;
  t = SSL_stdin_stream();
  t_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_99 = NULL;
  t = SSL_stdout_stream();
  u_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_99 = NULL;
  t = SSL_stderr_stream();
  v_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_99);
  return(t);
}
static ATerm c_101 (ATerm b_100, ATerm t)
{
  ATerm c_100 = NULL;
  t = SSL_explode_term(b_100);
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_41) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_41 = ATgetArgument(t, 1);
        if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
          {
            c_100 = ATgetFirst((ATermList) w_41);
            {
              ATerm a_42 = (ATerm) ATgetNext((ATermList) w_41);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_100;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_100;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_100;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_100;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_101 (ATerm f_100, ATerm g_100, ATerm h_100, ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL,n_100 = NULL,p_5 = NULL;
  t = SSLgetAnnotations(h_100);
  k_100 = t;
  t = f_100;
  if(match_cons(t, sym_Path_1))
    {
      n_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_100, g_100);
  p_5 = t;
  t = SSLsetAnnotations(p_5, k_100);
  if(match_cons(t, sym__2))
    {
      i_100 = ATgetArgument(t, 0);
      j_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(i_100, j_100, t);
  return(t);
}
static ATerm e_101 (ATerm p_100, ATerm q_100, ATerm r_100, ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,x_100 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(r_100);
  u_100 = t;
  t = SSL_is_string(p_100);
  x_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_100, q_100);
  q_5 = t;
  t = SSLsetAnnotations(q_5, u_100);
  if(match_cons(t, sym__2))
    {
      s_100 = ATgetArgument(t, 0);
      t_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(s_100, t_100, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
  z_100 = t;
  if(match_cons(t, sym__2))
    {
      a_101 = ATgetArgument(t, 0);
      b_101 = ATgetArgument(t, 1);
      {
        ATerm d_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_101(z_100, t);
            LocalPopChoice(f_42);
          }
        else
          {
            t = d_42;
            {
              ATerm g_42 = t;
              int h_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_101(a_101, b_101, z_100, t);
                  LocalPopChoice(h_42);
                }
              else
                {
                  t = g_42;
                  t = e_101(a_101, b_101, z_100, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_101(z_100, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,n_101 = NULL;
  n_101 = t;
  {
    ATerm i_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_101, term_l_42);
        t = g_11(t);
        LocalPopChoice(k_42);
      }
    else
      {
        t = i_42;
        {
          ATerm w_36 = NULL,x_36 = NULL;
          t = term_r_42;
          x_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_42, n_101);
          t = e_11(x_36, n_101, t);
          w_36 = t;
          t = SSL_perror(w_36);
          _fail(t);
        }
      }
  }
  h_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11(i_101, t);
  g_101 = t;
  t = h_101;
  t = fclose_0_0(t);
  t = g_101;
  return(t);
}
ATerm input_1_0 (ATerm n_161 (ATerm), ATerm t)
{
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_101 = NULL,r_101 = NULL;
      t = term_f_41;
      q_101 = t;
      t = term_u_42;
      r_101 = t;
      t = term_w_42;
      t = m_11(q_101, r_101, t);
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
      t = term_x_42;
    }
  t = ReadFromFile_0_0(t);
  t = n_161(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL;
  t = term_f_41;
  s_101 = t;
  t = term_y_42;
  t_101 = t;
  t = term_z_42;
  t = m_11(s_101, t_101, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
  v_101 = t;
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_101;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_43 = ATgetFirst((ATermList) t);
                ATerm i_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_101;
          }
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = (ATerm) ATinsert(ATempty, v_101);
      }
  }
  w_101 = t;
  t = term_i_41;
  x_101 = t;
  t = SSL_printnl(x_101, w_101);
  t = v_101;
  return(t);
}
ATerm map_1_0 (ATerm h_143 (ATerm), ATerm t)
{
  static ATerm p_102 (ATerm t);
  static ATerm p_102 (ATerm t)
  {
    ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
    m_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_102;
      }
    else
      {
        ATerm f_37 = NULL,i_37 = NULL,j_37 = NULL,u_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_102 = ATgetFirst((ATermList) t);
            o_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_102);
        f_37 = t;
        t = n_102;
        t = h_143(t);
        i_37 = t;
        t = o_102;
        t = p_102(t);
        j_37 = t;
        t = (ATerm) ATinsert(CheckATermList(j_37), i_37);
        u_5 = t;
        t = SSLsetAnnotations(u_5, f_37);
      }
    return(t);
  }
  t = p_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_102 = ATgetFirst((ATermList) t);
      t_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_102 = NULL,y_102 = NULL;
        static ATerm j_13 (ATerm t);
        static ATerm j_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_102)), not_null(y_102));
          return(t);
        }
        t = t_102;
        t = r_0(t);
        if(((x_102 != NULL) && (x_102 != t)))
          _fail(t);
        else
          x_102 = t;
        t = s_102;
        t = p_0(t);
        if(((y_102 != NULL) && (y_102 != t)))
          _fail(t);
        else
          y_102 = t;
        t = t_102;
        t = reverse_acc_2_0(p_0, j_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_29;
      t = r_0(t);
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,w_5 = NULL;
  i_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_103);
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_103);
  w_5 = t;
  t = SSLsetAnnotations(w_5, g_103);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm m_103 = NULL;
  m_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_103), term_j_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_163 (ATerm), ATerm m_163 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  ATerm k_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_103 = NULL,f_103 = NULL;
      t = term_f_41;
      e_103 = t;
      t = term_y_42;
      f_103 = t;
      t = term_z_42;
      t = m_11(e_103, f_103, t);
      LocalPopChoice(l_43);
    }
  else
    {
      t = k_43;
      t = fetch_1_0(k_13, t);
    }
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_163(t);
        t = echo_0_0(t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
      }
  }
  t = term_o_43;
  t = echo_0_0(t);
  t = term_q_43;
  c_103 = t;
  t = term_s_43;
  d_103 = t;
  t = term_t_43;
  t = m_11(c_103, d_103, t);
  t = reverse_acc_2_0(_id, l_13, t);
  t = map_1_0(m_13, t);
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_103 = NULL;
        t = m_163(t);
        n_103 = t;
        t = (ATerm) ATinsert(CheckATermList(n_103), term_w_43);
        t = echo_0_0(t);
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
      }
  }
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL,y_5 = NULL;
  v_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_103);
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_103);
  y_5 = t;
  t = SSLsetAnnotations(y_5, t_103);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_103 = NULL;
  q_103 = t;
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_103 = NULL,s_103 = NULL;
        t = term_f_41;
        r_103 = t;
        t = term_y_42;
        s_103 = t;
        t = term_z_42;
        t = m_11(r_103, s_103, t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = fetch_1_0(p_13, t);
      }
  }
  t = q_103;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm x_103 = NULL;
  x_103 = t;
  if(match_string(t, "-k"))
    {
      t = x_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_103;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
  y_103 = t;
  t = SSL_string_to_int(y_103);
  z_103 = t;
  t = term_a_44;
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_44, z_103);
  t = p_11(a_104, z_103, t);
  t = y_103;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_13, r_13, s_13, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm c_104 = NULL;
  c_104 = t;
  if(match_string(t, "-S"))
    {
      t = c_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_104;
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL;
  t = term_c_44;
  d_104 = t;
  t = term_u_19;
  e_104 = t;
  t = term_d_44;
  t = p_11(d_104, e_104, t);
  t = term_e_44;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
  f_104 = t;
  t = SSL_string_to_int(f_104);
  g_104 = t;
  t = term_c_44;
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_44, g_104);
  t = p_11(h_104, g_104, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_104);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL;
  t = term_h_44;
  i_104 = t;
  t = term_z_29;
  j_104 = t;
  t = term_i_44;
  t = p_11(i_104, j_104, t);
  t = term_j_44;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_k_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_13, v_13, w_13, t);
      LocalPopChoice(o_44);
    }
  else
    {
      t = l_44;
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_13, z_13, d_14, t);
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = Option_3_0(e_14, f_14, g_14, t);
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL;
  t = term_f_41;
  k_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_41, m_53, n_53);
  t = lookup_table_0_1(k_104, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(m_53, n_53, l_104, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_41, m_53, n_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
      t = term_z_29;
      t = g_0(t);
      r_104 = t;
      t = term_q_43;
      s_104 = t;
      t = term_s_43;
      t_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_43, term_s_43, r_104);
      t = n_11(s_104, t_104, r_104, t);
      _fail(t);
    }
  else
    {
      ATerm w_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_104 = ATgetFirst((ATermList) t);
          q_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_104;
      t = d_0(t);
      t = term_z_29;
      t = f_0(t);
      w_104 = t;
      t = (ATerm) ATinsert(CheckATermList(q_104), w_104);
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm y_104 = NULL;
  y_104 = t;
  if(match_string(t, "-o"))
    {
      t = y_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_104;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL;
  z_104 = t;
  t = term_g_41;
  a_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, z_104);
  t = p_11(a_105, z_104, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_104);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_t_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_14, i_14, j_14, t);
  return(t);
}
static ATerm n_11 (ATerm j_72, ATerm k_72, ATerm i_72, ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL;
  c_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_44 = ATgetArgument(t, 0);
            ATerm x_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_72, k_72);
        t = m_11(j_72, k_72, t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        t = (ATerm) ATempty;
      }
  }
  d_105 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_72, k_72, (ATerm) ATinsert(CheckATermList(d_105), i_72));
  t = lookup_table_0_1(j_72, t);
  g_105 = t;
  t = (ATerm) ATinsert(CheckATermList(d_105), i_72);
  e_105 = t;
  t = g_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(k_72, e_105, f_105, t);
  t = c_105;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
      t = term_z_29;
      t = n_0(t);
      r_105 = t;
      t = term_q_43;
      s_105 = t;
      t = term_s_43;
      t_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_43, term_s_43, r_105);
      t = n_11(s_105, t_105, r_105, t);
      _fail(t);
    }
  else
    {
      ATerm z_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_105 = ATgetFirst((ATermList) t);
          o_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_105;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_105 = ATgetFirst((ATermList) t);
          q_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_105;
      t = j_0(t);
      t = p_105;
      t = l_0(t);
      z_105 = t;
      t = (ATerm) ATinsert(CheckATermList(q_105), z_105);
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm b_106 = NULL;
  b_106 = t;
  if(match_string(t, "-i"))
    {
      t = b_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_106;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL;
  c_106 = t;
  t = term_u_42;
  d_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_42, c_106);
  t = p_11(d_106, c_106, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_106);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_14, m_14, n_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_29;
  t = whoami_0_0(t);
  e_106 = t;
  t = term_g_16;
  g_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_44), e_106);
  h_106 = t;
  t = SSL_printnl(g_106, h_106);
  t = term_v_19;
  f_106 = t;
  t = SSL_exit(f_106);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL;
  t = term_f_41;
  i_106 = t;
  t = term_y_42;
  j_106 = t;
  t = term_z_42;
  t = m_11(i_106, j_106, t);
  return(t);
}
static ATerm h_11 (ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_56, m_56);
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      t = SSL_addr(l_56, m_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm), ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_106;
      t = p_153(t);
    }
  else
    {
      ATerm q_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_106 = ATgetFirst((ATermList) t);
          n_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_106;
      t = foldr_2_0(p_153, q_153, t);
      q_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_106, q_106);
      t = q_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_u_19;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym__2))
    {
      s_37 = ATgetArgument(t, 0);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(s_37, t_37, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_106 = NULL,o_37 = NULL,p_37 = NULL;
  t = times_0_0(t);
  p_37 = t;
  t = SSL_explode_term(p_37);
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_37;
  t = foldr_2_0(o_14, p_14, t);
  t_106 = t;
  t = SSL_TicksToSeconds(t_106);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
  e_107 = t;
  if(match_cons(t, sym__2))
    {
      f_107 = ATgetArgument(t, 0);
      g_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_107;
        if((f_107 != t))
          {
            _fail(t);
          }
        t = e_107;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATmakeAppl(sym__2, f_107, g_107);
        {
          ATerm f_45 = t;
          int g_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_107, g_107);
              LocalPopChoice(g_45);
            }
          else
            {
              t = f_45;
              t = SSL_gtr(f_107, g_107);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_107, g_107);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_140 (ATerm), ATerm t)
{
  ATerm k_107 = NULL;
  k_107 = t;
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL;
        t = term_f_41;
        n_107 = t;
        t = term_c_44;
        o_107 = t;
        t = term_j_45;
        t = m_11(n_107, o_107, t);
        m_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_107, term_v_19);
        t = geq_0_0(t);
        t = k_107;
        t = m_140(t);
        LocalPopChoice(i_45);
      }
    else
      {
        t = h_45;
        t = k_107;
      }
  }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm q_107 = NULL,r_107 = NULL,t_107 = NULL,u_107 = NULL;
  t = run_time_0_0(t);
  q_107 = t;
  t = term_z_29;
  t = whoami_0_0(t);
  r_107 = t;
  t = term_g_16;
  t_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_45), q_107), term_k_45), r_107);
  u_107 = t;
  t = SSL_printnl(t_107, u_107);
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_45), q_107), term_k_45), r_107));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_107 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_19;
  v_107 = t;
  t = SSL_exit(v_107);
  return(t);
}
static ATerm q_11 (ATerm y_76, ATerm z_76, ATerm a_77, ATerm t)
{
  ATerm w_107 = NULL;
  t = SSL_hashtable_put(a_77, y_76, z_76);
  w_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_107);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_73, ATerm t)
{
  ATerm f_108 = NULL;
  t = table_hashtable_0_0(t);
  f_108 = t;
  {
    ATerm o_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_38 = NULL;
        t = f_108;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_11(v_73, i_38, t);
        LocalPopChoice(p_45);
      }
    else
      {
        t = o_45;
        {
          ATerm n_38 = NULL;
          t = v_73;
          t = table_create_0_0(t);
          t = f_108;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_11(v_73, n_38, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_77, ATerm h_77, ATerm t)
{
  ATerm i_108 = NULL;
  t = SSL_hashtable_create(g_77, h_77);
  i_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_108);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL,l_108 = NULL,n_108 = NULL,o_108 = NULL;
  j_108 = t;
  t = term_q_45;
  n_108 = t;
  t = term_r_45;
  o_108 = t;
  t = j_108;
  t = new_hashtable_0_2(n_108, o_108, t);
  k_108 = t;
  t = j_108;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(j_108, k_108, l_108, t);
  t = j_108;
  return(t);
}
static ATerm j_11 (ATerm d_77, ATerm e_77, ATerm t)
{
  ATerm p_108 = NULL;
  t = SSL_hashtable_remove(e_77, d_77);
  p_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_108);
  return(t);
}
static ATerm k_11 (ATerm i_77, ATerm t)
{
  ATerm q_108 = NULL;
  t = SSL_hashtable_destroy(i_77);
  q_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_108);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_108 = NULL;
  t = SSL_table_hashtable();
  r_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_108);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
  s_108 = t;
  t = table_hashtable_0_0(t);
  t_108 = t;
  t = lookup_table_0_1(s_108, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_11(v_108, t);
  t = t_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(s_108, u_108, t);
  t = s_108;
  return(t);
}
ATerm fetch_1_0 (ATerm p_143 (ATerm), ATerm t)
{
  static ATerm s_109 (ATerm t);
  static ATerm s_109 (ATerm t)
  {
    ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL;
    p_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_109 = ATgetFirst((ATermList) t);
        r_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_45 = t;
      int t_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_38 = NULL,v_38 = NULL,b_6 = NULL;
          t = SSLgetAnnotations(p_109);
          s_38 = t;
          t = q_109;
          t = p_143(t);
          v_38 = t;
          t = (ATerm) ATinsert(CheckATermList(r_109), v_38);
          b_6 = t;
          t = SSLsetAnnotations(b_6, s_38);
          LocalPopChoice(t_45);
        }
      else
        {
          t = s_45;
          {
            ATerm d_39 = NULL,g_39 = NULL,c_6 = NULL;
            t = SSLgetAnnotations(p_109);
            d_39 = t;
            t = r_109;
            t = s_109(t);
            g_39 = t;
            t = (ATerm) ATinsert(CheckATermList(g_39), q_109);
            c_6 = t;
            t = SSLsetAnnotations(c_6, d_39);
          }
        }
    }
    return(t);
  }
  t = s_109(t);
  return(t);
}
static ATerm r_11 (ATerm b_77, ATerm c_77, ATerm t)
{
  t = SSL_hashtable_get(c_77, b_77);
  return(t);
}
static ATerm m_11 (ATerm c_74, ATerm d_74, ATerm t)
{
  ATerm v_109 = NULL;
  t = lookup_table_0_1(c_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(d_74, v_109, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm x_109 = NULL,y_109 = NULL;
  t = term_u_45;
  x_109 = t;
  t = term_z_29;
  y_109 = t;
  t = term_x_45;
  t = p_11(x_109, y_109, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL,c_110 = NULL;
  t = term_u_45;
  b_110 = t;
  t = term_z_29;
  c_110 = t;
  t = term_x_45;
  t = p_11(b_110, c_110, t);
  t = term_z_45;
  z_109 = t;
  t = term_z_29;
  a_110 = t;
  t = term_a_46;
  t = p_11(z_109, a_110, t);
  t = term_b_46;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_c_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_14, z_14, a_15, t);
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = Option_3_0(b_15, c_15, d_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_163 (ATerm), ATerm t)
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL,m_110 = NULL,n_110 = NULL,g_6 = NULL;
  h_110 = t;
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_46;
        t = g_163(t);
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
      }
  }
  t = h_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_110 = ATgetFirst((ATermList) t);
      k_110 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_110);
  i_110 = t;
  t = term_y_42;
  n_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_42, j_110);
  t = p_11(n_110, j_110, t);
  t = k_110;
  {
    static ATerm x_110 (ATerm t);
    static ATerm x_110 (ATerm t)
    {
      ATerm i_46 = t;
      int j_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_110 = NULL;
              q_110 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_110;
              LocalPopChoice(l_46);
            }
          else
            {
              t = k_46;
              t = g_163(t);
              t = Cons_2_0(_id, x_110, t);
            }
          LocalPopChoice(j_46);
        }
      else
        {
          t = i_46;
          {
            ATerm t_110 = NULL,u_110 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_110 = ATgetFirst((ATermList) t);
                u_110 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_110), (ATerm) ATmakeAppl(sym_Undefined_1, t_110));
          }
        }
      return(t);
    }
    t = x_110(t);
  }
  m_110 = t;
  t = (ATerm) ATinsert(CheckATermList(m_110), (ATerm) ATmakeAppl(sym_Program_1, j_110));
  g_6 = t;
  t = SSLsetAnnotations(g_6, i_110);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm k_111 = NULL;
  k_111 = t;
  if(match_string(t, "--help"))
    {
      t = k_111;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_111;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_111;
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL;
  t = term_m_46;
  l_111 = t;
  t = term_z_29;
  m_111 = t;
  t = term_n_46;
  t = p_11(l_111, m_111, t);
  t = term_o_46;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_163 (ATerm), ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
  e_111 = t;
  t = term_q_43;
  f_111 = t;
  t = term_q_46;
  t = lookup_table_0_1(f_111, t);
  j_111 = t;
  t = term_s_43;
  g_111 = t;
  t = (ATerm) ATempty;
  h_111 = t;
  t = j_111;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(g_111, h_111, i_111, t);
  t = e_111;
  {
    static ATerm e_15 (ATerm t);
    static ATerm e_15 (ATerm t)
    {
      ATerm r_46 = t;
      int s_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_163(t);
          LocalPopChoice(s_46);
        }
      else
        {
          t = r_46;
          {
            ATerm t_46 = t;
            int u_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_15, g_15, h_15, t);
                LocalPopChoice(u_46);
              }
            else
              {
                t = t_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_15, t);
  }
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_111 = NULL;
        x_111 = t;
        {
          ATerm x_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_39 = NULL;
              t = x_111;
              {
                ATerm z_46 = t;
                int a_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_39 = NULL,r_39 = NULL;
                    t = term_f_41;
                    q_39 = t;
                    t = term_m_46;
                    r_39 = t;
                    t = term_b_47;
                    t = m_11(q_39, r_39, t);
                    LocalPopChoice(a_47);
                  }
                else
                  {
                    t = z_46;
                    t = fetch_1_0(i_15, t);
                  }
              }
              t = x_111;
              t = e_163(t);
              t = term_u_19;
              p_39 = t;
              t = SSL_exit(p_39);
              LocalPopChoice(y_46);
            }
          else
            {
              t = x_46;
              {
                ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
                t = term_f_41;
                w_39 = t;
                t = term_u_45;
                x_39 = t;
                t = term_c_47;
                t = m_11(w_39, x_39, t);
                t = x_111;
                t = f_163(t);
                t = term_u_19;
                v_39 = t;
                t = SSL_exit(v_39);
              }
            }
        }
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        {
          ATerm d_47 = t;
          int e_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL;
              static ATerm j_15 (ATerm t);
              static ATerm j_15 (ATerm t)
              {
                ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,i_6 = NULL;
                d_112 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_112 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_112);
                b_112 = t;
                t = c_112;
                if(((c_111 != NULL) && (c_111 != t)))
                  _fail(t);
                else
                  c_111 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_112);
                i_6 = t;
                t = SSLsetAnnotations(i_6, b_112);
                return(t);
              }
              t = fetch_1_0(j_15, t);
              t = term_g_16;
              z_111 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_111)), term_f_47);
              a_112 = t;
              t = SSL_printnl(z_111, a_112);
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_111)), term_f_47));
              t = e_163(t);
              t = term_v_19;
              y_111 = t;
              t = SSL_exit(y_111);
              LocalPopChoice(e_47);
            }
          else
            {
              t = d_47;
            }
        }
      }
  }
  d_111 = t;
  t = term_q_43;
  t = table_destroy_0_0(t);
  t = d_111;
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm i_161 (ATerm), ATerm j_161 (ATerm), ATerm k_161 (ATerm), ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL;
  t = parse_options_3_0(g_161, h_161, i_161, t);
  i_112 = t;
  t = term_g_47;
  t = table_create_0_0(t);
  t = term_g_47;
  j_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_47, term_h_47, i_112);
  t = lookup_table_0_1(j_112, t);
  m_112 = t;
  t = term_h_47;
  k_112 = t;
  t = m_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(k_112, i_112, l_112, t);
  t = i_112;
  t = j_161(t);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_161(t);
        t = report_success_0_0(t);
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_47);
    }
  else
    {
      t = k_47;
      {
        ATerm m_47 = t;
        int n_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_47);
          }
        else
          {
            t = m_47;
            {
              ATerm o_47 = t;
              int p_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_15, q_15, r_15, t);
                  LocalPopChoice(p_47);
                }
              else
                {
                  t = o_47;
                  {
                    ATerm q_47 = t;
                    int r_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_47);
                      }
                    else
                      {
                        t = q_47;
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
static ATerm l_15 (ATerm t)
{
  t = input_1_0(x_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL;
  t = term_l_41;
  o_112 = t;
  t = term_z_29;
  p_112 = t;
  t = term_u_47;
  t = p_11(o_112, p_112, t);
  t = term_v_47;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_z_47;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = output_1_0(y_15, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL,u_6 = NULL,r_6 = NULL;
  y_112 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_112);
  r_112 = t;
  t = s_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_112 = ATgetFirst((ATermList) t);
      v_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_112);
  t_112 = t;
  t = v_112;
  t = Cons_2_0(d_16, f_16, t);
  w_112 = t;
  t = (ATerm) ATinsert(CheckATermList(w_112), u_112);
  r_6 = t;
  t = SSLsetAnnotations(r_6, t_112);
  x_112 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_112);
  u_6 = t;
  t = SSLsetAnnotations(u_6, r_112);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,p_6 = NULL;
  c_113 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_113);
  z_112 = t;
  t = a_113;
  t = all_defs_0_0(t);
  b_113 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_113);
  p_6 = t;
  t = SSLsetAnnotations(p_6, z_112);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(k_15, default_system_usage_0_0, default_system_about_0_0, _id, l_15, t);
  return(t);
}
