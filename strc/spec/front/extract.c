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
static Symbol sym_Signature_1;
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
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_Constructors_1;
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
static Symbol sym_Hashtable_1;
static Symbol sym_Cong_2;
static Symbol sym_Anno_2;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Signature_1;
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
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_Constructors_1;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
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
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
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
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
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
}
static ATerm term_z_51;
static ATerm term_y_51;
static ATerm term_w_51;
static ATerm term_l_51;
static ATerm term_k_51;
static ATerm term_j_51;
static ATerm term_e_51;
static ATerm term_d_51;
static ATerm term_z_49;
static ATerm term_y_49;
static ATerm term_w_49;
static ATerm term_v_49;
static ATerm term_u_49;
static ATerm term_m_49;
static ATerm term_v_48;
static ATerm term_u_48;
static ATerm term_s_48;
static ATerm term_r_48;
static ATerm term_q_48;
static ATerm term_l_48;
static ATerm term_k_48;
static ATerm term_a_48;
static ATerm term_y_47;
static ATerm term_p_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_d_47;
static ATerm term_c_47;
static ATerm term_u_46;
static ATerm term_l_46;
static ATerm term_k_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_e_46;
static ATerm term_b_46;
static ATerm term_a_46;
static ATerm term_z_45;
static ATerm term_v_45;
static ATerm term_u_45;
static ATerm term_q_45;
static ATerm term_n_45;
static ATerm term_m_45;
static ATerm term_l_45;
static ATerm term_k_45;
static ATerm term_f_45;
static ATerm term_a_45;
static ATerm term_z_44;
static ATerm term_y_44;
static ATerm term_x_44;
static ATerm term_u_44;
static ATerm term_r_44;
static ATerm term_q_44;
static ATerm term_x_43;
static ATerm term_w_43;
static ATerm term_s_43;
static ATerm term_r_43;
static ATerm term_p_43;
static ATerm term_o_43;
static ATerm term_g_43;
static ATerm term_f_43;
static ATerm term_c_43;
static ATerm term_b_43;
static ATerm term_u_42;
static ATerm term_t_42;
static ATerm term_c_41;
static ATerm term_v_40;
static ATerm term_n_40;
static ATerm term_m_40;
static ATerm term_a_40;
static ATerm term_p_39;
static ATerm term_b_37;
static ATerm term_p_36;
static ATerm term_k_35;
static ATerm term_t_30;
static ATerm term_s_30;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_j_30;
static ATerm term_e_30;
static ATerm term_d_30;
static ATerm term_b_30;
static ATerm term_g_25;
static ATerm term_e_25;
static ATerm term_b_25;
static ATerm term_j_24;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_y_23;
static ATerm term_w_23;
static ATerm term_v_23;
static ATerm term_i_23;
static ATerm term_h_23;
static ATerm term_g_23;
static ATerm term_e_23;
static ATerm term_r_22;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_m_22;
static ATerm term_l_22;
static ATerm term_i_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_t_21;
static ATerm term_j_21;
static ATerm term_i_21;
static ATerm term_h_21;
static ATerm term_g_21;
static ATerm term_f_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_f_20;
static ATerm term_e_20;
static ATerm term_n_17;
static ATerm term_w_16;
static ATerm term_v_16;
static ATerm term_u_16;
static ATerm term_t_16;
static ATerm term_s_16;
static ATerm term_n_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_g_16;
static ATerm term_w_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Call_2, term_p_22, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Op_2, term_o_22, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Call_2, term_b_21, (ATerm) ATempty);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_b_30, (ATerm) ATempty);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_e_20);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym__2, term_b_43, term_c_43);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_p_43);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_w_43);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_u_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_z_44);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__2, term_l_45, term_m_45);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_e_20);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_20);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym__2, term_h_46, term_j_30);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_z_45);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_j_30);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym__2, term_r_48, term_j_30);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym__2, term_u_49, term_j_30);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym__3, term_l_45, term_m_45, (ATerm) ATempty);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_u_49);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_k_48);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym__2, term_w_43, term_j_30);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_160 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_9 (ATerm l_110, ATerm k_110, ATerm t);
static ATerm o_9 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t);
static ATerm m_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm t_135 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm u_9 (ATerm g_29, ATerm f_29, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm g_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_163 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm f_165 (ATerm), ATerm t);
static ATerm s_47 (ATerm i_39, ATerm j_39, ATerm t);
static ATerm z_47 (ATerm t_39, ATerm u_39, ATerm z_39, ATerm t);
static ATerm f_48 (ATerm t_40, ATerm u_40, ATerm t);
static ATerm g_48 (ATerm a_41, ATerm b_41, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm h_175 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm h_10 (ATerm d_105, ATerm e_105, ATerm f_105, ATerm t);
static ATerm v_59 (ATerm g_59, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_137 (ATerm), ATerm t);
static ATerm l_10 (ATerm q_100, ATerm r_100, ATerm s_100, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_136 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm c_141 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm m_10 (ATerm v_44, ATerm w_44, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm copy_1_0 (ATerm g_160 (ATerm), ATerm t);
static ATerm n_10 (ATerm w_82, ATerm x_82, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_76 (ATerm r_74, ATerm s_74, ATerm t_74, ATerm u_74, ATerm t);
static ATerm w_76 (ATerm t_75, ATerm u_75, ATerm v_75, ATerm w_75, ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm q_154 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm i_144 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_138 (ATerm), ATerm t);
static ATerm v_9 (ATerm b_48, ATerm c_48, ATerm t);
ATerm end_scope_1_0 (ATerm u_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm z_9 (ATerm w_84, ATerm x_84, ATerm b_85, ATerm y_84, ATerm a_85, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm e_78 (ATerm d_77, ATerm e_77, ATerm f_77, ATerm g_77, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_154 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_79 (ATerm d_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm i_156 (ATerm), ATerm a_71, ATerm z_70, ATerm t);
ATerm genzip_4_0 (ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm y_10 (ATerm n_951, ATerm s_951, ATerm t_96, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm i_84 (ATerm k_81, ATerm l_81, ATerm m_81, ATerm t);
static ATerm q_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_11 (ATerm d_175 (ATerm), ATerm e_175 (ATerm), ATerm f_175 (ATerm), ATerm y_99, ATerm v_99, ATerm d_100, ATerm z_99, ATerm w_99, ATerm x_99, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm d_175 (ATerm), ATerm e_175 (ATerm), ATerm f_175 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm q_40 (ATerm d_39, ATerm m_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm d_11 (ATerm x_148 (ATerm), ATerm p_46, ATerm m_46, ATerm t);
static ATerm e_11 (ATerm q_156 (ATerm), ATerm r_156 (ATerm), ATerm g_71, ATerm f_71, ATerm t);
static ATerm f_11 (ATerm n_156 (ATerm), ATerm c_71, ATerm b_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm h_11 (ATerm h_48, ATerm i_48, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm s_159 (ATerm), ATerm t_159 (ATerm), ATerm u_159 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t);
static ATerm i_11 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm j_11 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm l_11 (ATerm k_144 (ATerm), ATerm z_289, ATerm e_36, ATerm t);
static ATerm k_11 (ATerm u_35, ATerm v_35, ATerm t);
static ATerm l_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm output_1_0 (ATerm m_170 (ATerm), ATerm t);
static ATerm g_96 (ATerm a_96, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_11 (ATerm a_36, ATerm t);
static ATerm n_11 (ATerm n_80, ATerm o_80, ATerm t);
static ATerm o_11 (ATerm u_37, ATerm v_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_97 (ATerm v_96, ATerm t);
static ATerm x_97 (ATerm z_96, ATerm a_97, ATerm b_97, ATerm t);
static ATerm y_97 (ATerm j_97, ATerm k_97, ATerm l_97, ATerm t);
static ATerm p_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_170 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_154 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_172 (ATerm), ATerm m_172 (ATerm), ATerm t);
static ATerm t_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm o_41, ATerm p_41, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm w_47, ATerm x_47, ATerm v_47, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_11 (ATerm n_44, ATerm o_44, ATerm t);
ATerm foldr_2_0 (ATerm q_159 (ATerm), ATerm r_159 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_146 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_11 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t);
ATerm lookup_table_0_1 (ATerm i_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_52, ATerm u_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_11 (ATerm q_52, ATerm r_52, ATerm t);
static ATerm t_11 (ATerm v_52, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_154 (ATerm), ATerm t);
static ATerm a_12 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm v_11 (ATerm p_49, ATerm q_49, ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_172 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm parse_options_3_0 (ATerm d_172 (ATerm), ATerm e_172 (ATerm), ATerm f_172 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_170 (ATerm), ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm), ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      n_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,v_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
        u_1 = t;
        t = term_w_15;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
        t = h_11(v_1, u_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm x_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_15) != ATmakeSymbol("t_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, o_1);
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        {
          ATerm t_2 = NULL,w_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
          t_2 = t;
          t = term_w_15;
          w_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_15, (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
          t = h_11(w_2, t_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm y_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_15) != ATmakeSymbol("r_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, o_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm u_160 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_2 = ATgetFirst((ATermList) t);
          q_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,c_4 = NULL,d_4 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(o_2);
            z_3 = t;
            t = p_2;
            t = u_160(t);
            c_4 = t;
            t = q_2;
            t = filter_1_0(u_160, t);
            d_4 = t;
            t = (ATerm) ATinsert(CheckATermList(d_4), c_4);
            a_0 = t;
            t = SSLsetAnnotations(a_0, z_3);
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            t = q_2;
            t = filter_1_0(u_160, t);
          }
      }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  u_2 = t;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            v_2 = ATgetArgument(t, 0);
            {
              ATerm f_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_16);
        {
          ATerm a_3 = NULL,b_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          a_3 = t;
          t = term_h_16;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_h_16);
          t = d_11(b_0, a_3, b_3, t);
          t = u_2;
        }
      }
    else
      {
        t = c_16;
        {
          ATerm e_3 = NULL,f_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              v_2 = ATgetArgument(t, 0);
              {
                ATerm i_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          e_3 = t;
          t = term_n_16;
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_n_16);
          t = d_11(i_0, e_3, f_3, t);
          t = u_2;
        }
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
static ATerm m_9 (ATerm l_110, ATerm k_110, ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,h_0 = NULL,e_0 = NULL,c_0 = NULL;
  t = k_110;
  t = topdown_1_0(k_0, t);
  t = l_110;
  if(match_cons(t, sym_Signature_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_110);
  h_3 = t;
  t = i_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_3 = ATgetFirst((ATermList) t);
      m_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  k_3 = t;
  t = l_3;
  if(match_cons(t, sym_Constructors_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  o_3 = t;
  t = p_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, q_3);
  c_0 = t;
  t = SSLsetAnnotations(c_0, o_3);
  s_3 = t;
  t = m_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_3), s_3);
  e_0 = t;
  t = SSLsetAnnotations(e_0, k_3);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_3);
  h_0 = t;
  t = SSLsetAnnotations(h_0, h_3);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, k_110)), j_3));
  return(t);
}
static ATerm o_9 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = term_s_16;
  w_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), v_83), term_v_16), u_83), term_u_16), t_83), term_t_16);
  x_3 = t;
  t = SSL_printnl(w_3, x_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), v_83), term_v_16), u_83), term_u_16), t_83), term_t_16);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if(((ATgetType(x_16) != AT_INT) || (ATgetInt((ATermInt) x_16) != 0)))
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
  ATerm q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL,d_5 = NULL;
        t = s_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_17 = ATgetFirst((ATermList) t);
            ATerm g_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
              {
                ATerm i_17 = ATgetFirst((ATermList) g_17);
                ATerm j_17 = (ATerm) ATgetNext((ATermList) g_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm k_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(m_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_17;
            }
        }
        t = term_s_16;
        c_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_n_17);
        d_5 = t;
        t = SSL_printnl(c_5, d_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_n_17);
        t = giving_up_0_0(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        {
          ATerm j_5 = NULL,k_5 = NULL;
          t = s_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_17 = ATgetFirst((ATermList) t);
              if(match_cons(o_17, sym__2))
                {
                  j_5 = ATgetArgument(o_17, 0);
                  k_5 = ATgetArgument(o_17, 1);
                }
              else
                _fail(t);
              {
                ATerm p_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(p_17) != AT_LIST) || !(ATisEmpty(p_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, j_5, k_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, j_5, k_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm p_135 (ATerm), ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,y_14 = NULL,a_15 = NULL,f_15 = NULL,h_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
      {
        ATerm r_6 = NULL,u_6 = NULL,w_6 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(a_15);
        r_6 = t;
        t = f_15;
        t = p_135(t);
        u_6 = t;
        t = h_15;
        t = p_135(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_6, w_6);
        u_0 = t;
        t = SSLsetAnnotations(u_0, r_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
          y_14 = ATgetArgument(t, 2);
          {
            ATerm h_7 = NULL,w_7 = NULL,f_8 = NULL,g_8 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(a_15);
            h_7 = t;
            t = f_15;
            t = r_135(t);
            w_7 = t;
            t = h_15;
            t = r_135(t);
            f_8 = t;
            t = y_14;
            t = p_135(t);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_7, f_8, g_8);
            w_0 = t;
            t = SSLsetAnnotations(w_0, h_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_15 = ATgetArgument(t, 0);
              h_15 = ATgetArgument(t, 1);
              y_14 = ATgetArgument(t, 2);
              t_14 = ATgetArgument(t, 3);
              {
                ATerm f_9 = NULL,n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(a_15);
                f_9 = t;
                t = f_15;
                t = r_135(t);
                n_9 = t;
                t = h_15;
                t = r_135(t);
                p_9 = t;
                t = y_14;
                t = r_135(t);
                q_9 = t;
                t = t_14;
                t = p_135(t);
                r_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_9, p_9, q_9, r_9);
                x_0 = t;
                t = SSLsetAnnotations(x_0, f_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_15 = ATgetArgument(t, 0);
                  h_15 = ATgetArgument(t, 1);
                  y_14 = ATgetArgument(t, 2);
                  t_14 = ATgetArgument(t, 3);
                  {
                    ATerm j_10 = NULL,r_10 = NULL,s_10 = NULL,u_10 = NULL,w_10 = NULL,c_1 = NULL;
                    t = SSLgetAnnotations(a_15);
                    j_10 = t;
                    t = f_15;
                    t = r_135(t);
                    r_10 = t;
                    t = h_15;
                    t = r_135(t);
                    s_10 = t;
                    t = y_14;
                    t = r_135(t);
                    u_10 = t;
                    t = t_14;
                    t = p_135(t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_10, s_10, u_10, w_10);
                    c_1 = t;
                    t = SSLsetAnnotations(c_1, j_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      f_15 = ATgetArgument(t, 0);
                      h_15 = ATgetArgument(t, 1);
                      y_14 = ATgetArgument(t, 2);
                      {
                        ATerm e_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(a_15);
                        e_12 = t;
                        t = f_15;
                        t = r_135(t);
                        i_12 = t;
                        t = h_15;
                        t = r_135(t);
                        j_12 = t;
                        t = y_14;
                        t = r_135(t);
                        k_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, i_12, j_12, k_12);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, e_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_15 = ATgetArgument(t, 0);
                          h_15 = ATgetArgument(t, 1);
                          {
                            ATerm u_12 = NULL,y_12 = NULL,z_12 = NULL,f_1 = NULL;
                            t = SSLgetAnnotations(a_15);
                            u_12 = t;
                            t = f_15;
                            t = r_135(t);
                            y_12 = t;
                            t = h_15;
                            t = p_135(t);
                            z_12 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_12, z_12);
                            f_1 = t;
                            t = SSLsetAnnotations(f_1, u_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_15 = ATgetArgument(t, 0);
                              h_15 = ATgetArgument(t, 1);
                              {
                                ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL,i_1 = NULL;
                                t = SSLgetAnnotations(a_15);
                                i_13 = t;
                                t = f_15;
                                t = r_135(t);
                                m_13 = t;
                                t = h_15;
                                t = p_135(t);
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_13, n_13);
                                i_1 = t;
                                t = SSLsetAnnotations(i_1, i_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_15 = ATgetArgument(t, 0);
                                  h_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL,k_1 = NULL;
                                    t = SSLgetAnnotations(a_15);
                                    w_14 = t;
                                    t = f_15;
                                    t = r_135(t);
                                    b_15 = t;
                                    t = h_15;
                                    t = p_135(t);
                                    c_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_15, c_15);
                                    k_1 = t;
                                    t = SSLsetAnnotations(k_1, w_14);
                                  }
                                }
                              else
                                {
                                  ATerm r_15 = NULL,v_15 = NULL,z_15 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      f_15 = ATgetArgument(t, 0);
                                      h_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_15);
                                  r_15 = t;
                                  t = f_15;
                                  t = r_135(t);
                                  v_15 = t;
                                  t = h_15;
                                  t = p_135(t);
                                  z_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, v_15, z_15);
                                  p_1 = t;
                                  t = SSLsetAnnotations(p_1, r_15);
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
ATerm dynrule_sargs_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,o_16 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          l_16 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = l_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          m_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_17 = ATgetArgument(t, 0);
          o_16 = ATgetArgument(t, 1);
          {
            ATerm v_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_16;
    }
  else
    {
      t = r_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                l_16 = ATgetArgument(t, 0);
                {
                  ATerm b_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_18);
            t = l_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_18 = ATgetArgument(t, 0);
                o_16 = ATgetArgument(t, 1);
                {
                  ATerm d_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_16;
          }
        else
          {
            t = z_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                l_16 = ATgetArgument(t, 0);
                {
                  ATerm i_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = l_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_18 = ATgetArgument(t, 0);
                o_16 = ATgetArgument(t, 1);
                {
                  ATerm k_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_16;
          }
      }
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm l_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_17 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_18);
      t = w_17;
    }
  else
    {
      t = l_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_17;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm t_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_18 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_18);
      t = q_18;
    }
  else
    {
      t = t_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_18;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm h_17 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_19 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          {
            ATerm b_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = h_17;
      t = map_1_0(o_0, t);
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm d_19 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          {
            ATerm e_19 = ATgetArgument(t, 2);
          }
          {
            ATerm f_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_17;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
          {
            ATerm k_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = l_19;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_SDefT_4))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
          {
            ATerm n_19 = ATgetArgument(t, 2);
          }
          {
            ATerm p_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_19;
    }
  return(t);
}
static ATerm u_9 (ATerm g_29, ATerm f_29, ATerm t)
{
  t = g_29;
  t = map_1_0(z_0, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(q_1, y_16, z_16, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm a_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      if((a_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(x_1, l_17, m_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      if((q_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      if((k_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm e_163 (ATerm), ATerm f_163 (ATerm), ATerm g_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_163 (ATerm), ATerm t)
{
  static ATerm o_21 (ATerm t);
  static ATerm o_21 (ATerm t)
  {
    ATerm m_20 = NULL,r_20 = NULL,s_20 = NULL;
    s_20 = t;
    {
      ATerm q_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_163(t);
          LocalPopChoice(s_19);
        }
      else
        {
          t = q_19;
          t = (ATerm) ATempty;
        }
    }
    m_20 = t;
    t = s_20;
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL,j_16 = NULL,r_16 = NULL;
          t = f_163(t);
          t_20 = t;
          t = s_20;
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              ATerm e_16 = NULL;
              t = o_21(t);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_16, t_20);
              t = t_10(h_163, e_16, t_20, t);
              return(t);
            }
            t = g_163(a_1, o_21, g_1, t);
          }
          r_16 = t;
          t = SSL_explode_term(r_16);
          if(match_cons(t, sym__2))
            {
              ATerm v_19 = ATgetArgument(t, 0);
              j_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_16;
          t = foldr_3_0(j_1, m_1, _id, t);
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm c_17 = NULL;
            t = SSL_explode_term(s_20);
            if(match_cons(t, sym__2))
              {
                ATerm w_19 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_17;
            t = foldr_3_0(s_1, w_1, o_21, t);
          }
        }
    }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_20, r_20);
    t = f_11(y_1, m_20, r_20, t);
    return(t);
  }
  t = o_21(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(match_cons(x_19, sym_SVar_1))
        {
          v_21 = ATgetArgument(x_19, 0);
        }
      else
        _fail(t);
      w_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_21;
  t = foldr_3_0(c_2, d_2, e_2, t);
  y_21 = t;
  t = x_21;
  t = foldr_3_0(f_2, g_2, h_2, t);
  z_21 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, y_21, z_21)));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL,h_22 = NULL,j_22 = NULL,k_22 = NULL,n_22 = NULL;
      g_22 = t;
      if(match_cons(t, sym_Let_2))
        {
          h_22 = ATgetArgument(t, 0);
          j_22 = ATgetArgument(t, 1);
          t = g_22;
          t = u_9(h_22, j_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              h_22 = ATgetArgument(t, 0);
              j_22 = ATgetArgument(t, 1);
              k_22 = ATgetArgument(t, 2);
              t = j_22;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  h_22 = ATgetArgument(t, 0);
                  j_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, h_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_22 = ATgetArgument(t, 0);
                      j_22 = ATgetArgument(t, 1);
                      k_22 = ATgetArgument(t, 2);
                      n_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_22;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(match_cons(c_20, sym__2))
        {
          d_24 = ATgetArgument(c_20, 0);
          {
            ATerm d_20 = ATgetArgument(c_20, 1);
          }
        }
      else
        _fail(t);
      if((d_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(a_22, b_22, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(c_22, f_22, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_23 = NULL;
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm i_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_20);
      t = f_23;
    }
  else
    {
      t = g_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_23;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm q_23 = NULL;
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_23 = ATgetArgument(t, 0);
          {
            ATerm o_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_20);
      t = q_23;
    }
  else
    {
      t = j_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_23;
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
  ATerm x_23 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_23 = ATgetArgument(t, 0);
          {
            ATerm w_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_20);
      t = x_23;
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_23;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(z_1, a_2, sboundin_3_0, b_2, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm f_165 (ATerm), ATerm t)
{
  static ATerm a_37 (ATerm t);
  static ATerm a_37 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_35 = NULL,p_35 = NULL,b_36 = NULL,c_36 = NULL,f_36 = NULL,m_2 = NULL;
        t = f_165(t);
        f_36 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_35 = ATgetFirst((ATermList) t);
            b_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_36);
        o_35 = t;
        t = b_36;
        t = Cons_2_0(_id, a_37, t);
        c_36 = t;
        t = (ATerm) ATinsert(CheckATermList(c_36), p_35);
        m_2 = t;
        t = SSLsetAnnotations(m_2, o_35);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          ATerm t_36 = NULL,y_36 = NULL,z_36 = NULL;
          z_36 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_36 = ATgetFirst((ATermList) t);
              y_36 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm o_19 = NULL,r_19 = NULL,n_2 = NULL;
                t = SSLgetAnnotations(z_36);
                o_19 = t;
                t = y_36;
                t = a_37(t);
                r_19 = t;
                t = (ATerm) ATinsert(CheckATermList(r_19), t_36);
                n_2 = t;
                t = SSLsetAnnotations(n_2, o_19);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_36;
            }
        }
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
static ATerm s_47 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = i_39;
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm l_39 = NULL,o_39 = NULL,r_39 = NULL,s_39 = NULL,e_4 = NULL;
        s_39 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_39 = ATgetFirst((ATermList) t);
            r_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_39);
        l_39 = t;
        t = r_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_39), o_39);
        e_4 = t;
        t = SSLsetAnnotations(e_4, l_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_21, i_39);
  return(t);
}
static ATerm z_47 (ATerm t_39, ATerm u_39, ATerm z_39, ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = SSL_explode_string(t_39);
  t = escape_chars_1_0(r_2, t);
  d_40 = t;
  t = SSL_implode_string(d_40);
  c_40 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, c_40, u_39);
  return(t);
}
static ATerm f_48 (ATerm t_40, ATerm u_40, ATerm t)
{
  t = t_40;
  {
    ATerm c_21 = t;
    if((PushChoice() == 0))
      {
        ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,f_4 = NULL;
        z_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_40 = ATgetFirst((ATermList) t);
            y_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_40);
        w_40 = t;
        t = y_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
        f_4 = t;
        t = SSLsetAnnotations(f_4, w_40);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_21, t_40);
  return(t);
}
static ATerm g_48 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm d_41 = NULL;
  t = a_41;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_f_21;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_g_21;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_h_21;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_i_21;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_j_21;
                      }
                  }
              }
          }
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm i_41 = NULL;
          t = SSL_explode_string(a_41);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_21 = ATgetFirst((ATermList) t);
              if(((ATgetType(m_21) != AT_INT) || (ATgetInt((ATermInt) m_21) != 39)))
                _fail(t);
              {
                ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
                  {
                    i_41 = ATgetFirst((ATermList) n_21);
                    {
                      ATerm p_21 = (ATerm) ATgetNext((ATermList) n_21);
                      if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
                        {
                          ATerm q_21 = ATgetFirst((ATermList) p_21);
                          if(((ATgetType(q_21) != AT_INT) || (ATgetInt((ATermInt) q_21) != 39)))
                            _fail(t);
                          {
                            ATerm s_21 = (ATerm) ATgetNext((ATermList) p_21);
                            if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
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
          t = i_41;
        }
      }
  }
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, d_41);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_40 = ATgetFirst((ATermList) t);
      g_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_40;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(g_40), term_d_22), term_t_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_40), term_t_21), term_t_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_40), term_e_22), term_t_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(g_40), term_i_22), term_t_21);
            }
        }
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_20 = ATgetFirst((ATermList) t);
      q_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_20;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(q_20), term_d_22), term_t_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_20), term_t_21), term_t_21);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_20), term_e_22), term_t_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(q_20), term_i_22), term_t_21);
            }
        }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, e_43), d_43));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, k_43), i_43));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_22, (ATerm) ATinsert(ATinsert(ATempty, x_45), w_45));
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  if(match_cons(t, sym__2))
    {
      c_46 = ATgetArgument(t, 0);
      d_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_22, (ATerm) ATinsert(ATinsert(ATempty, d_46), c_46));
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_46 = NULL,a_47 = NULL,l_21 = NULL;
  v_46 = t;
  t = SSL_explode_term(v_46);
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            a_47 = ATgetFirst((ATermList) u_22);
            {
              ATerm w_22 = (ATerm) ATgetNext((ATermList) u_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_46);
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
          {
            ATerm z_22 = ATgetFirst((ATermList) y_22);
            ATerm a_23 = (ATerm) ATgetNext((ATermList) y_22);
            if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
              {
                l_21 = ATgetFirst((ATermList) a_23);
                {
                  ATerm b_23 = (ATerm) ATgetNext((ATermList) a_23);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_22, (ATerm) ATinsert(ATinsert(ATempty, l_21), a_47));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL;
        t = SSL_explode_string(v_41);
        t = escape_chars_1_0(s_2, t);
        n_20 = t;
        t = SSL_implode_string(n_20);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_20), w_41);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          v_41 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, v_41));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              v_41 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, v_41));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  v_41 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, v_41));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      v_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, v_41));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          v_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              v_41 = ATgetArgument(t, 0);
                              w_41 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_41), w_41);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  v_41 = ATgetArgument(t, 0);
                                  w_41 = ATgetArgument(t, 1);
                                  {
                                    static ATerm x_2 (ATerm t);
                                    static ATerm x_2 (ATerm t)
                                    {
                                      t = w_41;
                                      return(t);
                                    }
                                    t = v_41;
                                    t = foldr_2_0(x_2, y_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      v_41 = ATgetArgument(t, 0);
                                      t = v_41;
                                      t = foldr_2_0(z_2, c_3, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          v_41 = ATgetArgument(t, 0);
                                          w_41 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_b_21, (ATerm) ATinsert(CheckATermList(w_41), v_41));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              v_41 = ATgetArgument(t, 0);
                                              t = v_41;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  k_41 = ATgetFirst((ATermList) t);
                                                  r_41 = (ATerm) ATgetNext((ATermList) t);
                                                  t = r_41;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm c_23 = t;
                                                      int d_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_47(v_41, u_41, t);
                                                          LocalPopChoice(d_23);
                                                        }
                                                      else
                                                        {
                                                          t = c_23;
                                                          t = k_41;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = s_47(v_41, u_41, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = s_47(v_41, u_41, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_e_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      v_41 = ATgetArgument(t, 0);
                                                      w_41 = ATgetArgument(t, 1);
                                                      t = w_41;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          j_41 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATinsert(ATempty, j_41), v_41));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          v_41 = ATgetArgument(t, 0);
                                                          t = v_41;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              v_41 = ATgetArgument(t, 0);
                                                              w_41 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, v_41, w_41, term_i_23);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  v_41 = ATgetArgument(t, 0);
                                                                  w_41 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, v_41, w_41, term_i_23);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      v_41 = ATgetArgument(t, 0);
                                                                      w_41 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, v_41, (ATerm)ATempty, w_41);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          v_41 = ATgetArgument(t, 0);
                                                                          w_41 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_41, v_41);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              v_41 = ATgetArgument(t, 0);
                                                                              w_41 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, v_41, w_41, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  v_41 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, v_41, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      v_41 = ATgetArgument(t, 0);
                                                                                      w_41 = ATgetArgument(t, 1);
                                                                                      t_41 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, v_41, w_41, (ATerm)ATempty, t_41);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          v_41 = ATgetArgument(t, 0);
                                                                                          w_41 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, v_41, (ATerm)ATempty, (ATerm)ATempty, w_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              v_41 = ATgetArgument(t, 0);
                                                                                              w_41 = ATgetArgument(t, 1);
                                                                                              t_41 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, v_41, w_41, (ATerm)ATempty, t_41);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  v_41 = ATgetArgument(t, 0);
                                                                                                  w_41 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, v_41, (ATerm)ATempty, (ATerm)ATempty, w_41);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      v_41 = ATgetArgument(t, 0);
                                                                                                      w_41 = ATgetArgument(t, 1);
                                                                                                      t_41 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, v_41, w_41, (ATerm)ATempty, t_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          v_41 = ATgetArgument(t, 0);
                                                                                                          w_41 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, v_41, (ATerm)ATempty, (ATerm)ATempty, w_41);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm j_23 = t;
                                                                                                          int k_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm l_23 = ATgetArgument(t, 0);
                                                                                                                  w_41 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(k_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, w_41);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_23;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  v_41 = ATgetArgument(t, 0);
                                                                                                                  w_41 = ATgetArgument(t, 1);
                                                                                                                  t = z_47(v_41, w_41, u_41, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      v_41 = ATgetArgument(t, 0);
                                                                                                                      w_41 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm d_3 (ATerm t);
                                                                                                                        static ATerm d_3 (ATerm t)
                                                                                                                        {
                                                                                                                          t = w_41;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = v_41;
                                                                                                                        t = foldr_2_0(d_3, g_3, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          v_41 = ATgetArgument(t, 0);
                                                                                                                          t = v_41;
                                                                                                                          t = foldr_2_0(r_3, t_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              v_41 = ATgetArgument(t, 0);
                                                                                                                              t = v_41;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  k_41 = ATgetFirst((ATermList) t);
                                                                                                                                  r_41 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = r_41;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm m_23 = t;
                                                                                                                                      int n_23 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = f_48(v_41, u_41, t);
                                                                                                                                          LocalPopChoice(n_23);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = m_23;
                                                                                                                                          t = k_41;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = f_48(v_41, u_41, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = f_48(v_41, u_41, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  v_41 = ATgetArgument(t, 0);
                                                                                                                                  w_41 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm t_46 = NULL;
                                                                                                                                    t = w_41;
                                                                                                                                    t = foldr_2_0(u_3, v_3, t);
                                                                                                                                    t_46 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, v_41, t_46);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      v_41 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, v_41, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          v_41 = ATgetArgument(t, 0);
                                                                                                                                          t = g_48(v_41, u_41, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm o_23 = t;
                                                                                                                                          int p_23 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  v_41 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm r_23 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  t_41 = ATgetArgument(t, 2);
                                                                                                                                                  s_41 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(p_23);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, v_41, t_41, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_41), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = o_23;
                                                                                                                                              {
                                                                                                                                                ATerm s_23 = t;
                                                                                                                                                int t_23 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        v_41 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm u_23 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        t_41 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(t_23);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, v_41, t_41, term_y_23);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = s_23;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        v_41 = ATgetArgument(t, 0);
                                                                                                                                                        w_41 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, v_41, w_41, term_y_23);
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
  ATerm m_48 = NULL,n_48 = NULL,t_48 = NULL;
  n_48 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      t_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
      {
        ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
        t = n_48;
        t = new_0_0(t);
        w_48 = t;
        t = new_0_0(t);
        x_48 = t;
        t = new_0_0(t);
        y_48 = t;
        t = new_0_0(t);
        z_48 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_48), y_48), x_48), w_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_48), (ATerm) ATmakeAppl(sym_Var_1, y_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, t_48, (ATerm)ATmakeAppl(sym_Var_1, w_48), (ATerm) ATmakeAppl(sym_Var_1, x_48)), (ATerm) ATmakeAppl(sym_BAM_3, m_48, (ATerm)ATmakeAppl(sym_Var_1, y_48), (ATerm) ATmakeAppl(sym_Var_1, z_48)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_48)), (ATerm) ATmakeAppl(sym_Var_1, x_48))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_48 = ATgetArgument(t, 0);
          {
            ATerm c_49 = NULL,e_49 = NULL,g_49 = NULL,r_49 = NULL;
            t = n_48;
            t = new_0_0(t);
            g_49 = t;
            t = t_48;
            {
              static ATerm y_3 (ATerm t);
              static ATerm y_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_49 = ATgetArgument(t, 0);
                    if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_49);
                return(t);
              }
              t = oncetd_1_0(y_3, t);
            }
            r_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_49)), not_null(c_49))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_49)), (ATerm) ATmakeAppl(sym_Build_1, r_49))));
          }
        }
      else
        {
          ATerm x_49 = NULL,b_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              t_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_48;
          t = new_0_0(t);
          d_50 = t;
          t = new_0_0(t);
          e_50 = t;
          t = t_48;
          {
            static ATerm a_4 (ATerm t);
            static ATerm a_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_49 != NULL) && (x_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_49 = ATgetArgument(t, 0);
                  if(((b_50 != NULL) && (b_50 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    b_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_50);
              return(t);
            }
            t = oncetd_1_0(a_4, t);
          }
          f_50 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_50)), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_50))))), (ATerm)ATmakeAppl(sym_Var_1, d_50), (ATerm) ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_50)), not_null(x_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  h_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,r_50 = NULL;
        t = h_50;
        t = new_0_0(t);
        m_50 = t;
        t = i_50;
        {
          static ATerm b_4 (ATerm t);
          static ATerm b_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_50 = ATgetArgument(t, 0);
                if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_50), k_50);
            return(t);
          }
          t = pat_td_1_0(b_4, t);
        }
        r_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_50))))));
        LocalPopChoice(g_24);
      }
    else
      {
        t = c_24;
        {
          ATerm o_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
              t = h_50;
              t = new_0_0(t);
              u_50 = t;
              t = i_50;
              {
                static ATerm g_4 (ATerm t);
                static ATerm g_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_50 != NULL) && (t_50 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_50);
                  return(t);
                }
                t = pat_td_1_0(g_4, t);
              }
              v_50 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_50)), not_null(t_50))));
              LocalPopChoice(q_24);
            }
          else
            {
              t = o_24;
              {
                ATerm x_50 = NULL,y_50 = NULL,b_51 = NULL,c_51 = NULL;
                t = h_50;
                t = new_0_0(t);
                b_51 = t;
                t = i_50;
                {
                  static ATerm h_4 (ATerm t);
                  static ATerm h_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_50 = ATgetArgument(t, 0);
                        if(((x_50 != NULL) && (x_50 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_50 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_51);
                    return(t);
                  }
                  t = pat_td_1_0(h_4, t);
                }
                c_51 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_50)), not_null(y_50)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm h_175 (ATerm), ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_175(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
        g_54 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_54 = ATgetArgument(t, 0);
            i_54 = ATgetArgument(t, 1);
            {
              ATerm r_21 = NULL,u_21 = NULL,j_4 = NULL;
              t = SSLgetAnnotations(g_54);
              r_21 = t;
              t = i_54;
              {
                static ATerm i_4 (ATerm t);
                static ATerm i_4 (ATerm t)
                {
                  t = pat_td_1_0(h_175, t);
                  return(t);
                }
                t = fetch_1_0(i_4, t);
              }
              u_21 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_54, u_21);
              j_4 = t;
              t = SSLsetAnnotations(j_4, r_21);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_54 = ATgetArgument(t, 0);
                i_54 = ATgetArgument(t, 1);
                {
                  ATerm t_24 = t;
                  int u_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_22 = NULL,v_22 = NULL,k_4 = NULL;
                      t = SSLgetAnnotations(g_54);
                      s_22 = t;
                      t = i_54;
                      t = pat_td_1_0(h_175, t);
                      v_22 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_54, v_22);
                      k_4 = t;
                      t = SSLsetAnnotations(k_4, s_22);
                      LocalPopChoice(u_24);
                    }
                  else
                    {
                      t = t_24;
                      {
                        ATerm z_23 = NULL,i_24 = NULL,l_4 = NULL;
                        t = SSLgetAnnotations(g_54);
                        z_23 = t;
                        t = h_54;
                        t = pat_td_1_0(h_175, t);
                        i_24 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, i_24, i_54);
                        l_4 = t;
                        t = SSLsetAnnotations(l_4, z_23);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_54 = ATgetArgument(t, 0);
                    i_54 = ATgetArgument(t, 1);
                    f_54 = ATgetArgument(t, 2);
                    {
                      ATerm w_24 = NULL,i_25 = NULL,m_4 = NULL;
                      t = SSLgetAnnotations(g_54);
                      w_24 = t;
                      t = f_54;
                      {
                        static ATerm n_4 (ATerm t);
                        static ATerm n_4 (ATerm t)
                        {
                          t = pat_td_1_0(h_175, t);
                          return(t);
                        }
                        t = fetch_1_0(n_4, t);
                      }
                      i_25 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_54, i_54, i_25);
                      m_4 = t;
                      t = SSLsetAnnotations(m_4, w_24);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_54 = ATgetArgument(t, 0);
                        i_54 = ATgetArgument(t, 1);
                        f_54 = ATgetArgument(t, 2);
                        {
                          ATerm y_25 = NULL,p_26 = NULL,o_4 = NULL;
                          t = SSLgetAnnotations(g_54);
                          y_25 = t;
                          t = f_54;
                          {
                            static ATerm r_4 (ATerm t);
                            static ATerm r_4 (ATerm t)
                            {
                              t = pat_td_1_0(h_175, t);
                              return(t);
                            }
                            t = fetch_1_0(r_4, t);
                          }
                          p_26 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_54, i_54, p_26);
                          o_4 = t;
                          t = SSLsetAnnotations(o_4, y_25);
                        }
                      }
                    else
                      {
                        ATerm a_27 = NULL,l_27 = NULL,p_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_54 = ATgetArgument(t, 0);
                            i_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_54);
                        a_27 = t;
                        t = i_54;
                        t = pat_td_1_0(h_175, t);
                        l_27 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_54, l_27);
                        p_4 = t;
                        t = SSLsetAnnotations(p_4, a_27);
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
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  if(match_cons(t, sym_Build_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_54 = NULL,t_54 = NULL,v_54 = NULL,w_54 = NULL;
        t = q_54;
        t = new_0_0(t);
        v_54 = t;
        t = r_54;
        {
          static ATerm w_4 (ATerm t);
          static ATerm w_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_54 != NULL) && (s_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_54 = ATgetArgument(t, 0);
                if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, v_54);
            return(t);
          }
          t = pat_td_1_0(w_4, t);
        }
        w_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_54)), not_null(s_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_54)))), (ATerm) ATmakeAppl(sym_Build_1, w_54)));
        LocalPopChoice(x_24);
      }
    else
      {
        t = v_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_55 = NULL,e_55 = NULL,f_55 = NULL;
              t = q_54;
              t = new_0_0(t);
              e_55 = t;
              t = r_54;
              {
                static ATerm x_4 (ATerm t);
                static ATerm x_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_55 != NULL) && (c_55 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, e_55);
                  return(t);
                }
                t = pat_td_1_0(x_4, t);
              }
              f_55 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_55)))), (ATerm) ATmakeAppl(sym_Build_1, f_55)));
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              {
                ATerm g_55 = NULL,h_55 = NULL,n_55 = NULL,o_55 = NULL;
                t = q_54;
                t = new_0_0(t);
                n_55 = t;
                t = r_54;
                {
                  static ATerm y_4 (ATerm t);
                  static ATerm y_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_55 != NULL) && (g_55 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_55 = ATgetArgument(t, 0);
                        if(((h_55 != NULL) && (h_55 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_55);
                    return(t);
                  }
                  t = pat_td_1_0(y_4, t);
                }
                o_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_55), not_null(h_55), (ATerm) ATmakeAppl(sym_Var_1, n_55))), (ATerm) ATmakeAppl(sym_Build_1, o_55)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,b_56 = NULL,d_56 = NULL,e_56 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_56 = ATgetArgument(t, 0);
      e_56 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_56, e_56);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_56 = ATgetArgument(t, 0);
          t = d_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_55 = ATgetFirst((ATermList) t);
              u_55 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_55, (ATerm) ATmakeAppl(sym_LChoices_1, u_55));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_56 = ATgetArgument(t, 0);
              t = d_56;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_55 = ATgetFirst((ATermList) t);
                  u_55 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_55, (ATerm) ATmakeAppl(sym_Choices_1, u_55));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_56 = ATgetArgument(t, 0);
                  t = d_56;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_55 = ATgetFirst((ATermList) t);
                      u_55 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_55, (ATerm) ATmakeAppl(sym_Seqs_1, u_55));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_56 = ATgetArgument(t, 0);
                      e_56 = ATgetArgument(t, 1);
                      b_56 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_56, (ATerm) ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, b_56), d_56)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          d_56 = ATgetArgument(t, 0);
                          e_56 = ATgetArgument(t, 1);
                          b_56 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_56)), d_56), (ATerm) ATmakeAppl(sym_Build_1, e_56)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              d_56 = ATgetArgument(t, 0);
                              e_56 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_56, (ATerm) ATmakeAppl(sym_Match_1, e_56));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  d_56 = ATgetArgument(t, 0);
                                  e_56 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_56), e_56);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      d_56 = ATgetArgument(t, 0);
                                      e_56 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_56), d_56);
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
static ATerm z_4 (ATerm t)
{
  ATerm f_25 = t;
  if((PushChoice() == 0))
    {
      ATerm u_57 = NULL,b_58 = NULL,c_58 = NULL,p_5 = NULL;
      c_58 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_58);
      u_57 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_58);
      p_5 = t;
      t = SSLsetAnnotations(p_5, u_57);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_25;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_58 = ATgetFirst((ATermList) t);
      h_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_58 = NULL,p_58 = NULL,q_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_25 = ATgetArgument(t, 0);
      if(match_cons(h_25, sym__2))
        {
          j_58 = ATgetArgument(h_25, 0);
          p_58 = ATgetArgument(h_25, 1);
        }
      else
        _fail(t);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(match_cons(j_25, sym__2))
          {
            q_58 = ATgetArgument(j_25, 0);
            u_58 = ATgetArgument(j_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_58), j_58), (ATerm) ATinsert(CheckATermList(u_58), p_58));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_58 = NULL,x_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_58 = ATgetFirst((ATermList) t);
      x_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_58, x_58);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      if(match_cons(k_25, sym__2))
        {
          y_58 = ATgetArgument(k_25, 0);
          z_58 = ATgetArgument(k_25, 1);
        }
      else
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
        if(match_cons(l_25, sym__2))
          {
            a_59 = ATgetArgument(l_25, 0);
            b_59 = ATgetArgument(l_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_59), y_58), (ATerm) ATinsert(CheckATermList(b_59), z_58));
  return(t);
}
static ATerm h_10 (ATerm d_105, ATerm e_105, ATerm f_105, ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,s_57 = NULL,t_57 = NULL,q_5 = NULL;
  t = f_105;
  t = fetch_1_0(z_4, t);
  t = f_105;
  t = genzip_4_0(a_5, b_5, e_5, LiftPrimArg_0_0, t);
  t_57 = t;
  if(match_cons(t, sym__2))
    {
      n_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  m_57 = t;
  t = n_57;
  t = concat_0_0(t);
  p_57 = t;
  t = o_57;
  t = genzip_4_0(f_5, g_5, h_5, _id, t);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_57, s_57);
  q_5 = t;
  t = SSLsetAnnotations(q_5, m_57);
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(match_cons(m_25, sym__2))
          {
            k_57 = ATgetArgument(m_25, 0);
            l_57 = ATgetArgument(m_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_57, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_57), (ATerm) ATmakeAppl(sym_CallT_3, d_105, e_105, l_57)));
  return(t);
}
static ATerm v_59 (ATerm g_59, ATerm t)
{
  ATerm o_59 = NULL;
  t = g_59;
  {
    ATerm n_25 = t;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,t_5 = NULL;
        r_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            q_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_59);
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, q_59);
        t_5 = t;
        t = SSLsetAnnotations(t_5, p_59);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_25;
      }
  }
  t = new_0_0(t);
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_59), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_59)))), (ATerm) ATmakeAppl(sym_Var_1, o_59)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL;
  s_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_59 = ATgetArgument(t, 0);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_59(s_59, t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_23, (ATerm) ATmakeAppl(sym_Var_1, t_59)));
          }
      }
    }
  else
    {
      t = v_59(s_59, t);
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm q_25 = t;
  if((PushChoice() == 0))
    {
      ATerm e_29 = NULL,h_29 = NULL,i_29 = NULL,v_5 = NULL;
      i_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_29);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_29);
      v_5 = t;
      t = SSLsetAnnotations(v_5, e_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_25;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      k_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_29, k_29);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      if(match_cons(r_25, sym__2))
        {
          l_29 = ATgetArgument(r_25, 0);
          m_29 = ATgetArgument(r_25, 1);
        }
      else
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(match_cons(s_25, sym__2))
          {
            n_29 = ATgetArgument(s_25, 0);
            o_29 = ATgetArgument(s_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_29), l_29), (ATerm) ATinsert(CheckATermList(o_29), m_29));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm p_29 = NULL,t_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_29 = ATgetFirst((ATermList) t);
      t_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_29, t_29);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL,y_29 = NULL,c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      if(match_cons(t_25, sym__2))
        {
          u_29 = ATgetArgument(t_25, 0);
          w_29 = ATgetArgument(t_25, 1);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(match_cons(u_25, sym__2))
          {
            y_29 = ATgetArgument(u_25, 0);
            c_30 = ATgetArgument(u_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_29), u_29), (ATerm) ATinsert(CheckATermList(c_30), w_29));
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_25 = t;
  if((PushChoice() == 0))
    {
      ATerm k_31 = NULL,o_31 = NULL,v_31 = NULL,x_5 = NULL;
      v_31 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_31);
      k_31 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_31);
      x_5 = t;
      t = SSLsetAnnotations(x_5, k_31);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_25;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_31 = ATgetFirst((ATermList) t);
      x_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_31 = NULL,b_32 = NULL,f_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if(match_cons(w_25, sym__2))
        {
          y_31 = ATgetArgument(w_25, 0);
          b_32 = ATgetArgument(w_25, 1);
        }
      else
        _fail(t);
      {
        ATerm x_25 = ATgetArgument(t, 1);
        if(match_cons(x_25, sym__2))
          {
            f_32 = ATgetArgument(x_25, 0);
            h_32 = ATgetArgument(x_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_32), y_31), (ATerm) ATinsert(CheckATermList(h_32), b_32));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_25;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm k_32 = NULL,m_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_32 = ATgetFirst((ATermList) t);
      m_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_32, m_32);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm n_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym__2))
        {
          n_32 = ATgetArgument(z_25, 0);
          p_32 = ATgetArgument(z_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            q_32 = ATgetArgument(a_26, 0);
            r_32 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_32), n_32), (ATerm) ATinsert(CheckATermList(r_32), p_32));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,y_63 = NULL;
  t_63 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
      s_63 = ATgetArgument(t, 2);
      {
        ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,s_28 = NULL,t_28 = NULL,v_28 = NULL,c_29 = NULL,d_29 = NULL,w_5 = NULL;
        t = s_63;
        t = fetch_1_0(i_5, t);
        t = s_63;
        t = genzip_4_0(l_5, m_5, n_5, LiftPrimArg_0_0, t);
        d_29 = t;
        if(match_cons(t, sym__2))
          {
            s_28 = ATgetArgument(t, 0);
            t_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_29);
        n_28 = t;
        t = s_28;
        t = concat_0_0(t);
        v_28 = t;
        t = t_28;
        t = genzip_4_0(o_5, r_5, s_5, _id, t);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_28, c_29);
        w_5 = t;
        t = SSLsetAnnotations(w_5, n_28);
        if(match_cons(t, sym__2))
          {
            k_28 = ATgetArgument(t, 0);
            {
              ATerm b_26 = ATgetArgument(t, 1);
              if(match_cons(b_26, sym__2))
                {
                  l_28 = ATgetArgument(b_26, 0);
                  m_28 = ATgetArgument(b_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_28), (ATerm) ATmakeAppl(sym_PrimT_3, u_63, y_63, m_28)));
      }
    }
  else
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,y_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          u_63 = ATgetArgument(t, 0);
          y_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_63;
      t = fetch_1_0(u_5, t);
      t = y_63;
      t = genzip_4_0(z_5, a_6, b_6, LiftPrimArg_0_0, t);
      j_31 = t;
      if(match_cons(t, sym__2))
        {
          f_31 = ATgetArgument(t, 0);
          g_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_31);
      e_31 = t;
      t = f_31;
      t = concat_0_0(t);
      h_31 = t;
      t = g_31;
      t = genzip_4_0(c_6, e_6, f_6, _id, t);
      i_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
      y_5 = t;
      t = SSLsetAnnotations(y_5, e_31);
      if(match_cons(t, sym__2))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
            if(match_cons(c_26, sym__2))
              {
                a_31 = ATgetArgument(c_26, 0);
                b_31 = ATgetArgument(c_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_30, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_31), (ATerm) ATmakeAppl(sym_PrimT_3, u_63, (ATerm)ATempty, b_31)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm t)
{
  static ATerm e_64 (ATerm t);
  static ATerm e_64 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_142(t);
        t = e_64(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = w_142(t);
      }
    return(t);
  }
  t = e_64(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm e_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  i_65 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_65 = ATgetArgument(t, 0);
      g_65 = ATgetArgument(t, 1);
      h_65 = ATgetArgument(t, 2);
      {
        ATerm r_33 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(i_65);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_65, g_65, h_65);
        d_6 = t;
        t = SSLsetAnnotations(d_6, r_33);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = i_65;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,t_66 = NULL,u_66 = NULL;
  q_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_66 = ATgetArgument(t, 0);
      u_66 = ATgetArgument(t, 1);
      p_66 = ATgetArgument(t, 2);
      {
        ATerm c_35 = NULL,g_6 = NULL;
        t = SSLgetAnnotations(q_66);
        c_35 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_66, u_66, p_66);
        g_6 = t;
        t = SSLsetAnnotations(g_6, c_35);
      }
    }
  else
    {
      ATerm t_35 = NULL,h_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          t_66 = ATgetArgument(t, 0);
          u_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_66);
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, t_66, u_66);
      h_6 = t;
      t = SSLsetAnnotations(h_6, t_35);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm g_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      d_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_67;
  if(match_cons(t, sym_StratRule_3))
    {
      e_67 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
      g_67 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_67), (ATerm) ATmakeAppl(sym_Where_1, g_67)), e_67));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          e_67 = ATgetArgument(t, 0);
          f_67 = ATgetArgument(t, 1);
          g_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_67;
      t = pureterm_0_0(t);
      t = f_67;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_67)), (ATerm) ATmakeAppl(sym_Where_1, g_67)), (ATerm) ATmakeAppl(sym_Match_1, e_67)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_137 (ATerm), ATerm t)
{
  static ATerm p_67 (ATerm t);
  static ATerm p_67 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_137(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = SRTS_one(p_67, t);
      }
    return(t);
  }
  t = p_67(t);
  return(t);
}
static ATerm l_10 (ATerm q_100, ATerm r_100, ATerm s_100, ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL;
  t = new_0_0(t);
  u_67 = t;
  t = q_100;
  {
    static ATerm k_6 (ATerm t);
    static ATerm k_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_26 = ATgetArgument(t, 0);
          if(match_cons(j_26, sym_Var_1))
            {
              if(((t_67 != NULL) && (t_67 != ATgetArgument(j_26, 0))))
                _fail(ATgetArgument(j_26, 0));
              else
                t_67 = ATgetArgument(j_26, 0);
            }
          else
            _fail(t);
          if(((r_67 != NULL) && (r_67 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_67 = ATgetArgument(t, 1);
          {
            ATerm k_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, t_67);
      return(t);
    }
    t = oncetd_1_0(k_6, t);
  }
  v_67 = t;
  t = r_100;
  {
    static ATerm m_6 (ATerm t);
    static ATerm m_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_26 = ATgetArgument(t, 0);
          if(match_cons(l_26, sym_Var_1))
            {
              if(((t_67 != NULL) && (t_67 != ATgetArgument(l_26, 0))))
                _fail(ATgetArgument(l_26, 0));
              else
                t_67 = ATgetArgument(l_26, 0);
            }
          else
            _fail(t);
          if(((s_67 != NULL) && (s_67 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_67 = ATgetArgument(t, 1);
          {
            ATerm m_26 = ATgetArgument(t, 2);
            if(match_cons(m_26, sym_CallT_3))
              {
                if(((q_67 != NULL) && (q_67 != ATgetArgument(m_26, 0))))
                  _fail(ATgetArgument(m_26, 0));
                else
                  q_67 = ATgetArgument(m_26, 0);
                {
                  ATerm n_26 = ATgetArgument(m_26, 1);
                  if(((ATgetType(n_26) != AT_LIST) || !(ATisEmpty(n_26))))
                    _fail(t);
                }
                {
                  ATerm o_26 = ATgetArgument(m_26, 2);
                  if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, u_67);
      return(t);
    }
    t = oncetd_1_0(m_6, t);
  }
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_67), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_67, w_67, (ATerm) ATmakeAppl(sym_Seq_2, s_100, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(q_67), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_67), not_null(s_67), term_i_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_67)), (ATerm) ATmakeAppl(sym_Var_1, u_67))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_68 = NULL,v_68 = NULL,x_68 = NULL,y_68 = NULL,b_69 = NULL,c_69 = NULL;
          y_68 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_69 = ATgetArgument(t, 0);
              t = b_69;
              if(match_cons(t, sym_Rule_3))
                {
                  u_68 = ATgetArgument(t, 0);
                  v_68 = ATgetArgument(t, 1);
                  x_68 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_68;
              t = l_10(u_68, v_68, x_68, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm w_36 = NULL,d_37 = NULL,l_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_69 = ATgetArgument(t, 0);
                  c_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_68);
              w_36 = t;
              t = c_69;
              t = desugarRule_0_0(t);
              d_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_69, d_37);
              l_6 = t;
              t = SSLsetAnnotations(l_6, w_36);
            }
          LocalPopChoice(t_26);
        }
      else
        {
          t = s_26;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_136 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    t = topdown_1_0(v_136, t);
    return(t);
  }
  t = v_136(t);
  t = SRTS_all(o_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
    }
  t = repeat_2_0(q_6, _id, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
            a_70 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_70 = ATgetArgument(t, 0);
                c_70 = ATgetArgument(t, 1);
                d_70 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_70;
            t = h_10(b_70, c_70, d_70, t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm b_27 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(d_27);
                }
              else
                {
                  t = b_27;
                  {
                    ATerm e_27 = t;
                    int k_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(k_27);
                      }
                    else
                      {
                        t = e_27;
                        {
                          ATerm n_27 = t;
                          int p_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_27 = t;
                              int r_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_70 = NULL,n_70 = NULL,q_70 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      l_70 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_70;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      n_70 = ATgetArgument(t, 0);
                                      t = n_70;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          n_70 = ATgetArgument(t, 0);
                                          q_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, n_70, q_70);
                                    }
                                  LocalPopChoice(r_27);
                                }
                              else
                                {
                                  t = q_27;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(p_27);
                            }
                          else
                            {
                              t = n_27;
                              {
                                ATerm s_27 = t;
                                int u_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(u_27);
                                  }
                                else
                                  {
                                    t = s_27;
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
  t = topdown_1_0(p_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  v_71 = t;
  t = SSL_explode_term(v_71);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            u_71 = ATgetFirst((ATermList) y_27);
            {
              ATerm e_28 = (ATerm) ATgetNext((ATermList) y_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_71;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  t = SSL_explode_term(k_37);
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
          {
            ATerm h_28 = ATgetFirst((ATermList) g_28);
            i_37 = (ATerm) ATgetNext((ATermList) g_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_a_21;
  j_37 = t;
  t = SSL_mkterm(j_37, i_37);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm c_141 (ATerm), ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  static ATerm w_71 (ATerm t);
  static ATerm w_71 (ATerm t)
  {
    ATerm j_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_71 = NULL,r_71 = NULL,s_71 = NULL;
        p_71 = t;
        t = map_1_0(s_6, t);
        t = c_141(t);
        r_71 = t;
        t = p_71;
        t = map_1_0(t_6, t);
        t = w_71(t);
        s_71 = t;
        t = (ATerm) ATinsert(CheckATermList(s_71), r_71);
        LocalPopChoice(y_28);
      }
    else
      {
        t = j_28;
        t = map_1_0(x_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = w_71(t);
  m_71 = t;
  t = term_a_21;
  l_71 = t;
  t = SSL_mkterm(l_71, m_71);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm y_71 = NULL;
  y_71 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_72 = NULL,e_72 = NULL,f_72 = NULL;
        t = y_71;
        t = new_0_0(t);
        a_72 = t;
        t = new_0_0(t);
        e_72 = t;
        t = new_0_0(t);
        f_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, y_71), (ATerm) ATmakeAppl(sym_Var_1, e_72))), (ATerm) ATmakeAppl(sym_Var_1, f_72)), (ATerm)ATmakeAppl(sym_VarDec_2, a_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30)), e_72, (ATerm)ATmakeAppl(sym_Var_1, e_72), f_72, (ATerm) ATmakeAppl(sym_Var_1, f_72));
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm h_72 = NULL,j_72 = NULL,m_72 = NULL;
          t = y_71;
          t = new_0_0(t);
          h_72 = t;
          t = new_0_0(t);
          j_72 = t;
          t = new_0_0(t);
          m_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, y_71), (ATerm) ATmakeAppl(sym_Var_1, j_72))), (ATerm) ATmakeAppl(sym_Var_1, m_72)), (ATerm)ATmakeAppl(sym_VarDec_2, h_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30)), j_72, (ATerm)ATmakeAppl(sym_Var_1, j_72), m_72, (ATerm) ATmakeAppl(sym_Var_1, m_72));
        }
      }
  }
  return(t);
}
static ATerm m_10 (ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(v_44, w_44);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = SSL_subtr(v_44, w_44);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_72, u_72, (ATerm) ATempty);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if(((ATgetType(h_30) != AT_INT) || (ATgetInt((ATermInt) h_30) != 0)))
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
      }
      x_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_72;
  return(t);
}
ATerm copy_1_0 (ATerm g_160 (ATerm), ATerm t)
{
  static ATerm a_7 (ATerm t);
  static ATerm a_7 (ATerm t)
  {
    ATerm z_72 = NULL,a_73 = NULL,e_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
    if(match_cons(t, sym__3))
      {
        z_72 = ATgetArgument(t, 0);
        a_73 = ATgetArgument(t, 1);
        e_73 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_72, term_f_20);
    t = geq_0_0(t);
    t = term_f_20;
    n_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_72, term_f_20);
    t = m_10(z_72, n_73, t);
    l_73 = t;
    t = a_73;
    t = g_160(t);
    m_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, l_73, a_73, (ATerm) ATinsert(CheckATermList(e_73), m_73));
    return(t);
  }
  t = for_3_0(y_6, z_6, a_7, t);
  return(t);
}
static ATerm n_10 (ATerm w_82, ATerm x_82, ATerm t)
{
  ATerm o_73 = NULL,r_73 = NULL,s_73 = NULL;
  t = new_0_0(t);
  o_73 = t;
  t = new_0_0(t);
  r_73 = t;
  t = new_0_0(t);
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_82)), (ATerm) ATmakeAppl(sym_Var_1, r_73))), (ATerm) ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_82)), (ATerm) ATmakeAppl(sym_Var_1, s_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, o_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30)), r_73, (ATerm)ATmakeAppl(sym_Var_1, r_73), s_73, (ATerm) ATmakeAppl(sym_Var_1, s_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_73 = ATgetFirst((ATermList) t);
      a_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_73;
    }
  else
    {
      t = a_74;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_76 (ATerm r_74, ATerm s_74, ATerm t_74, ATerm u_74, ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  t = term_f_20;
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_74, term_f_20);
  t = q_11(s_74, j_75, t);
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_75, term_j_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_74 = ATgetFirst((ATermList) t);
      a_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_75;
  t = last_0_0(t);
  y_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_75), z_74), a_75);
  t = genzip_4_0(b_7, c_7, d_7, e_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      b_75 = ATgetArgument(t, 0);
      c_75 = ATgetArgument(t, 1);
      d_75 = ATgetArgument(t, 2);
      e_75 = ATgetArgument(t, 3);
      f_75 = ATgetArgument(t, 4);
      g_75 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_75), d_75), a_75);
  t = concat_0_0(t);
  h_75 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_74, term_k_30), c_75, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_75), z_74), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_74)), (ATerm) ATmakeAppl(sym_Op_2, r_74, e_75))), (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_74)), (ATerm) ATmakeAppl(sym_Op_2, r_74, g_75))), (ATerm) ATmakeAppl(sym_Seqs_1, b_75)))));
  return(t);
}
static ATerm w_76 (ATerm t_75, ATerm u_75, ATerm v_75, ATerm w_75, ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,l_76 = NULL;
  t = w_75;
  t = new_0_0(t);
  a_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_75, (ATerm) ATmakeAppl(sym_Var_1, a_76));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      b_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
      f_76 = ATgetArgument(t, 2);
      g_76 = ATgetArgument(t, 3);
      h_76 = ATgetArgument(t, 4);
      i_76 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_76, h_76);
  t = conc_0_0(t);
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_75, term_l_30), e_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_76), a_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_76)), (ATerm) ATmakeAppl(sym_Op_2, t_75, g_76))), (ATerm)ATmakeAppl(sym_Op_2, t_75, i_76), (ATerm) ATmakeAppl(sym_Seqs_1, b_76)))));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      ATerm n_30 = ATgetArgument(t, 1);
      if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
        {
          k_75 = ATgetFirst((ATermList) o_30);
          l_75 = (ATerm) ATgetNext((ATermList) o_30);
        }
      else
        _fail(t);
      {
        ATerm p_30 = ATgetArgument(t, 1);
        if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
          {
            m_75 = ATgetFirst((ATermList) p_30);
            n_75 = (ATerm) ATgetNext((ATermList) p_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_75, m_75), (ATerm) ATmakeAppl(sym__2, l_75, n_75));
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  if(match_cons(t, sym__2))
    {
      o_75 = ATgetArgument(t, 0);
      p_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_75), o_75);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL;
  if(match_cons(t, sym__2))
    {
      q_75 = ATgetArgument(t, 0);
      r_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(q_75, r_75, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  n_76 = t;
  if(match_cons(t, sym__3))
    {
      o_76 = ATgetArgument(t, 0);
      p_76 = ATgetArgument(t, 1);
      q_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_76;
  if(match_string(t, "T"))
    {
      t = q_76;
      if(match_cons(t, sym__2))
        {
          r_76 = ATgetArgument(t, 0);
          s_76 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_76;
      if(match_int(t, 0))
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_76(o_76, r_76, s_76, n_76, t);
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              {
                ATerm u_76 = NULL;
                t = n_76;
                t = new_0_0(t);
                u_76 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_76, term_k_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_76)), (ATerm) ATmakeAppl(sym_Op_2, o_76, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_76)), (ATerm) ATmakeAppl(sym_Op_2, o_76, (ATerm) ATempty))), term_i_23))));
              }
            }
        }
      else
        {
          t = v_76(o_76, r_76, s_76, n_76, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_76;
      if(match_cons(t, sym__2))
        {
          r_76 = ATgetArgument(t, 0);
          s_76 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_76(o_76, r_76, s_76, n_76, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm q_154 (ATerm), ATerm t)
{
  ATerm e_24 = NULL;
  static ATerm f_7 (ATerm t);
  static ATerm f_7 (ATerm t)
  {
    t = q_154(t);
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    return(t);
  }
  t = fetch_1_0(f_7, t);
  t = not_null(e_24);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL,k_24 = NULL;
  t = term_s_16;
  h_24 = t;
  t = (ATerm) ATinsert(ATempty, term_s_30);
  k_24 = t;
  t = SSL_printnl(h_24, k_24);
  t = term_f_20;
  f_24 = t;
  t = SSL_exit(f_24);
  t = (ATerm) ATinsert(ATempty, term_s_30);
  return(t);
}
ATerm debug_1_0 (ATerm i_144 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,p_24 = NULL;
  l_24 = t;
  t = i_144(t);
  m_24 = t;
  t = term_s_16;
  n_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_24), m_24);
  p_24 = t;
  t = SSL_printnl(n_24, p_24);
  t = l_24;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_t_30;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm w_30 = ATgetArgument(t, 0);
          x_17 = ATgetArgument(t, 1);
          y_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(v_30);
      t = y_17;
      t = foldr_3_0(n_7, p_7, q_7, t);
      t = x_17;
      t = foldr_3_0(s_7, v_7, x_7, t);
    }
  else
    {
      t = u_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm x_30 = ATgetArgument(t, 0);
          x_17 = ATgetArgument(t, 1);
          y_17 = ATgetArgument(t, 2);
          {
            ATerm y_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_17;
      t = foldr_3_0(z_7, b_8, e_8, t);
      t = x_17;
      t = foldr_3_0(h_8, i_8, j_8, t);
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(e_18, f_18, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(g_18, h_18, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(m_18, n_18, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(o_18, r_18, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      ATerm q_31 = ATgetArgument(t, 2);
      ATerm d_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_24 = NULL;
      static ATerm g_7 (ATerm t);
      static ATerm g_7 (ATerm t)
      {
        ATerm z_24 = NULL,a_25 = NULL;
        z_24 = t;
        {
          ATerm x_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  a_25 = ATgetArgument(t, 0);
                  {
                    ATerm g_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm h_33 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_33);
              t = a_25;
              if(((y_24 != NULL) && (y_24 != t)))
                _fail(t);
              else
                y_24 = t;
              t = z_24;
            }
          else
            {
              t = x_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  a_25 = ATgetArgument(t, 0);
                  {
                    ATerm i_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm l_33 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm o_33 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = a_25;
              if(((y_24 != NULL) && (y_24 != t)))
                _fail(t);
              else
                y_24 = t;
              t = z_24;
            }
        }
        return(t);
      }
      t = fetch_1_0(g_7, t);
      {
        static ATerm j_7 (ATerm t);
        static ATerm j_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_24 = ATgetArgument(t, 0);
              {
                ATerm x_33 = ATgetArgument(t, 1);
              }
              {
                ATerm z_33 = ATgetArgument(t, 2);
              }
              {
                ATerm b_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_7, t);
      }
      t = not_null(y_24);
      t = debug_1_0(k_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm c_27 = NULL;
        c_27 = t;
        t = map_1_0(m_7, t);
        t = c_27;
        {
          ATerm c_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(k_8, t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = c_34;
              {
                ATerm u_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_18 = ATgetFirst((ATermList) t);
                    {
                      ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = u_18;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,z_18 = NULL;
  f_27 = t;
  t = SSL_explode_term(f_27);
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
          {
            g_27 = ATgetFirst((ATermList) m_34);
            {
              ATerm n_34 = (ATerm) ATgetNext((ATermList) m_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_27);
  if(match_cons(t, sym__2))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
          {
            ATerm w_34 = ATgetFirst((ATermList) u_34);
            ATerm a_35 = (ATerm) ATgetNext((ATermList) u_34);
            if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
              {
                z_18 = ATgetFirst((ATermList) a_35);
                {
                  ATerm b_35 = (ATerm) ATgetNext((ATermList) a_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, g_27, z_18);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(l_8, n_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm n_138 (ATerm), ATerm t)
{
  static ATerm h_27 (ATerm t);
  static ATerm h_27 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_138(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = SRTS_all(h_27, t);
      }
    return(t);
  }
  t = h_27(t);
  return(t);
}
static ATerm v_9 (ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  j_27 = t;
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        t = v_11(b_48, c_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_35 = ATgetFirst((ATermList) t);
            i_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_35);
        {
          ATerm m_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_48, c_48, i_27);
          t = lookup_table_0_1(b_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(c_48, i_27, m_27, t);
          t = (ATerm) ATmakeAppl(sym__3, b_48, c_48, i_27);
        }
      }
    else
      {
        t = f_35;
        {
          ATerm o_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
          t = lookup_table_0_1(b_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_11(c_48, o_27, t);
          t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        }
      }
  }
  t = j_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_148 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  z_27 = t;
  t = u_148(t);
  x_27 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_28 = NULL;
        t = term_k_35;
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_k_35);
        t = v_11(x_27, d_28, t);
        {
          ATerm l_35 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_35;
            }
        }
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_27, term_k_35, t_27);
  t = lookup_table_0_1(x_27, t);
  c_28 = t;
  t = term_k_35;
  a_28 = t;
  t = c_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(a_28, t_27, b_28, t);
  t = w_27;
  {
    static ATerm o_8 (ATerm t);
    static ATerm o_8 (ATerm t)
    {
      ATerm i_28 = NULL;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_27, i_28);
      t = v_9(x_27, i_28, t);
      return(t);
    }
    t = map_1_0(o_8, t);
  }
  t = z_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_140(t);
      t = h_140(t);
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = h_140(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_148 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,w_28 = NULL,x_28 = NULL;
  p_28 = t;
  t = t_148(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, term_k_35);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            ATerm w_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_35;
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_28, term_k_35);
        t = v_11(o_28, b_29, t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        t = (ATerm) ATempty;
      }
  }
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_28, term_k_35, (ATerm) ATinsert(CheckATermList(q_28), (ATerm) ATempty));
  t = lookup_table_0_1(o_28, t);
  x_28 = t;
  t = term_k_35;
  r_28 = t;
  t = (ATerm) ATinsert(CheckATermList(q_28), (ATerm) ATempty);
  u_28 = t;
  t = x_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(r_28, u_28, w_28, t);
  t = p_28;
  return(t);
}
ATerm scope_2_0 (ATerm v_148 (ATerm), ATerm w_148 (ATerm), ATerm t)
{
  static ATerm q_8 (ATerm t);
  static ATerm q_8 (ATerm t)
  {
    t = end_scope_1_0(v_148, t);
    return(t);
  }
  t = begin_scope_1_0(v_148, t);
  t = restore_always_2_0(w_148, q_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,v_29 = NULL,x_29 = NULL,z_29 = NULL,a_30 = NULL;
  s_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_29;
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
      {
        ATerm x_35 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29;
            if((v_29 != t))
              {
                _fail(t);
              }
            t = r_29;
            LocalPopChoice(d_36);
          }
        else
          {
            t = x_35;
            t = (ATerm) ATmakeAppl(sym__2, v_29, a_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_29, a_30);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(((ATgetType(g_36) != AT_LIST) || !(ATisEmpty(g_36))))
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(((ATgetType(h_36) != AT_LIST) || !(ATisEmpty(h_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,z_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
        {
          s_31 = ATgetFirst((ATermList) i_36);
          t_31 = (ATerm) ATgetNext((ATermList) i_36);
        }
      else
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
          {
            u_31 = ATgetFirst((ATermList) j_36);
            z_31 = (ATerm) ATgetNext((ATermList) j_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_31, u_31), (ATerm) ATmakeAppl(sym__2, t_31, z_31));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm a_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_32), a_32);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,l_31 = NULL,m_31 = NULL;
  c_31 = t;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_36 = ATgetArgument(t, 0);
            ATerm n_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_36);
        t = c_31;
      }
    else
      {
        t = k_36;
        {
          ATerm r_31 = NULL;
          if(match_cons(t, sym__3))
            {
              d_31 = ATgetArgument(t, 0);
              l_31 = ATgetArgument(t, 1);
              m_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_31, l_31);
          t = genzip_4_0(r_8, t_8, v_8, _id, t);
          r_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_31, m_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,g_32 = NULL;
  static ATerm w_8 (ATerm t);
  static ATerm w_8 (ATerm t)
  {
    ATerm c_19 = NULL;
    t = e_136(t);
    c_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_19, not_null(g_32));
    t = lookup_0_0(t);
    t = f_136(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((g_32 != NULL) && (g_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_32;
  t = alltd_1_0(w_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm o_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_32 = ATgetArgument(t, 0);
      {
        ATerm o_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_32;
  return(t);
}
static ATerm z_8 (ATerm t)
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
static ATerm a_9 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
        _fail(t);
      {
        ATerm r_36 = ATgetArgument(t, 1);
        if(((ATgetType(r_36) != AT_LIST) || !(ATisEmpty(r_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
        {
          v_32 = ATgetFirst((ATermList) s_36);
          w_32 = (ATerm) ATgetNext((ATermList) s_36);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
          {
            y_32 = ATgetFirst((ATermList) u_36);
            z_32 = (ATerm) ATgetNext((ATermList) u_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_32, y_32), (ATerm) ATmakeAppl(sym__2, w_32, z_32));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_33), b_33);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,j_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_36 = ATgetArgument(t, 0);
      if(match_cons(v_36, sym_VarDec_2))
        {
          d_33 = ATgetArgument(v_36, 0);
          {
            ATerm x_36 = ATgetArgument(v_36, 1);
          }
        }
      else
        _fail(t);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, d_33);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_37, e_33);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, d_33), (ATerm) ATmakeAppl(sym_Defined_2, term_b_37, e_33));
  t = d_11(k_9, j_33, k_33, t);
  t = f_33;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,h_19 = NULL;
  m_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_p_36;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_36, m_33);
  t = h_11(h_19, m_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_33;
  return(t);
}
static ATerm z_9 (ATerm w_84, ATerm x_84, ATerm b_85, ATerm y_84, ATerm a_85, ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,l_32 = NULL;
  t = y_84;
  t = map_1_0(y_8, t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_32, x_84, a_85);
  t = substitute_2_0(z_8, _id, t);
  j_32 = t;
  {
    static ATerm b_9 (ATerm t);
    static ATerm b_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, b_85, w_84);
      t = genzip_4_0(d_9, g_9, h_9, i_9, t);
      t = j_32;
      t = alltd_1_0(l_9, t);
      if(((l_32 != NULL) && (l_32 != t)))
        _fail(t);
      else
        l_32 = t;
      return(t);
    }
    t = scope_2_0(a_9, b_9, t);
  }
  t = not_null(l_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL,n_6 = NULL;
  i_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_34);
  d_34 = t;
  t = e_34;
  t = new_0_0(t);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_34, f_34);
  n_6 = t;
  t = SSLsetAnnotations(n_6, d_34);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm l_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,v_6 = NULL;
  r_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  l_34 = t;
  t = o_34;
  t = new_0_0(t);
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_34, p_34);
  v_6 = t;
  t = SSLsetAnnotations(v_6, l_34);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_34 = ATgetArgument(t, 0);
      {
        ATerm f_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, s_34);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm v_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_34 = ATgetArgument(t, 0);
      {
        ATerm g_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_34);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,y_33 = NULL,a_34 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_37 = ATgetFirst((ATermList) t);
      if(match_cons(h_37, sym_SDefT_4))
        {
          p_33 = ATgetArgument(h_37, 0);
          q_33 = ATgetArgument(h_37, 1);
          s_33 = ATgetArgument(h_37, 2);
          {
            ATerm m_37 = ATgetArgument(h_37, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm l_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_33;
  t = map_1_0(s_9, t);
  t_33 = t;
  t = s_33;
  t = map_1_0(w_9, t);
  u_33 = t;
  t = t_33;
  t = map_1_0(x_9, t);
  w_33 = t;
  t = u_33;
  t = map_1_0(y_9, t);
  y_33 = t;
  t = v_33;
  {
    static ATerm a_10 (ATerm t);
    static ATerm a_10 (ATerm t)
    {
      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm n_37 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
          y_34 = ATgetArgument(t, 2);
          z_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_9(w_33, y_33, x_34, y_34, z_34, t);
      return(t);
    }
    t = map_1_0(a_10, t);
  }
  t = choices_0_0(t);
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_33, t_33, u_33, a_34);
  return(t);
}
static ATerm e_78 (ATerm d_77, ATerm e_77, ATerm f_77, ATerm g_77, ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,i_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_77, e_77);
  t = Definitions_0_0(t);
  k_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_77, f_77);
  n_77 = t;
  if(match_cons(t, sym__2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      ATerm q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_77);
  l_77 = t;
  t = k_77;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_77 = NULL,q_77 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_77 = ATgetFirst((ATermList) t);
            q_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_77;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_77;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm y_37 = t;
          int z_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(z_37);
            }
          else
            {
              t = y_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, f_77);
  i_7 = t;
  t = SSLsetAnnotations(i_7, l_77);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  u_77 = t;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_77;
  if(match_cons(t, sym__2))
    {
      w_77 = ATgetArgument(t, 0);
      x_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_77;
  if(match_cons(t, sym_Mod_2))
    {
      s_77 = ATgetArgument(t, 0);
      t_77 = ATgetArgument(t, 1);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, s_77, t_77, x_77);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            d_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_78, y_77);
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            t = e_78(w_77, x_77, y_77, u_77, t);
          }
      }
    }
  else
    {
      t = e_78(w_77, x_77, y_77, u_77, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_154 (ATerm), ATerm t)
{
  static ATerm z_78 (ATerm t);
  static ATerm z_78 (ATerm t)
  {
    ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
    y_78 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_78 = ATgetFirst((ATermList) t);
        x_78 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_37 = NULL,r_37 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(y_78);
          o_37 = t;
          t = x_78;
          t = z_78(t);
          r_37 = t;
          t = (ATerm) ATinsert(CheckATermList(r_37), w_78);
          l_7 = t;
          t = SSLsetAnnotations(l_7, o_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_78;
        t = v_154(t);
      }
    return(t);
  }
  t = z_78(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_78;
    }
  else
    {
      static ATerm b_10 (ATerm t);
      static ATerm b_10 (ATerm t)
      {
        t = not_null(i_78);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_78 = ATgetFirst((ATermList) t);
          if(((i_78 != NULL) && (i_78 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_78;
      t = at_end_1_0(b_10, t);
    }
  return(t);
}
static ATerm l_79 (ATerm d_79, ATerm t)
{
  ATerm e_79 = NULL;
  t = SSL_explode_term(d_79);
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL;
  i_79 = t;
  if(match_cons(t, sym__2))
    {
      g_79 = ATgetArgument(t, 0);
      h_79 = ATgetArgument(t, 1);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_10 (ATerm t);
            static ATerm c_10 (ATerm t)
            {
              t = h_79;
              return(t);
            }
            t = g_79;
            t = at_end_1_0(c_10, t);
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = l_79(i_79, t);
          }
      }
    }
  else
    {
      t = l_79(i_79, t);
    }
  return(t);
}
static ATerm t_10 (ATerm i_156 (ATerm), ATerm a_71, ATerm z_70, ATerm t)
{
  static ATerm b_80 (ATerm t);
  static ATerm b_80 (ATerm t)
  {
    ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
    w_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_79;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_79 = ATgetFirst((ATermList) t);
            y_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_38 = t;
          int i_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_79;
              {
                static ATerm d_10 (ATerm t);
                static ATerm d_10 (ATerm t)
                {
                  t = z_70;
                  return(t);
                }
                t = e_11(i_156, d_10, x_79, y_79, t);
              }
              t = b_80(t);
              LocalPopChoice(i_38);
            }
          else
            {
              t = h_38;
              {
                ATerm d_38 = NULL,g_38 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(w_79);
                d_38 = t;
                t = y_79;
                t = b_80(t);
                g_38 = t;
                t = (ATerm) ATinsert(CheckATermList(g_38), x_79);
                o_7 = t;
                t = SSLsetAnnotations(o_7, d_38);
              }
            }
        }
      }
    return(t);
  }
  t = a_71;
  t = b_80(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm p_141 (ATerm), ATerm t)
{
  static ATerm j_80 (ATerm t);
  static ATerm j_80 (ATerm t)
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_141(t);
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        {
          ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,r_7 = NULL;
          t = n_141(t);
          i_80 = t;
          if(match_cons(t, sym__2))
            {
              e_80 = ATgetArgument(t, 0);
              f_80 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_80);
          d_80 = t;
          t = e_80;
          t = p_141(t);
          g_80 = t;
          t = f_80;
          t = j_80(t);
          h_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_80, h_80);
          r_7 = t;
          t = SSLsetAnnotations(r_7, d_80);
          t = o_141(t);
        }
      }
    return(t);
  }
  t = j_80(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) != AT_LIST) || !(ATisEmpty(l_38))))
        _fail(t);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(((ATgetType(m_38) != AT_LIST) || !(ATisEmpty(m_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
        {
          s_80 = ATgetFirst((ATermList) n_38);
          t_80 = (ATerm) ATgetNext((ATermList) n_38);
        }
      else
        _fail(t);
      {
        ATerm o_38 = ATgetArgument(t, 1);
        if(((ATgetType(o_38) == AT_LIST) && !(ATisEmpty(o_38))))
          {
            u_80 = ATgetFirst((ATermList) o_38);
            v_80 = (ATerm) ATgetNext((ATermList) o_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_80, u_80), (ATerm) ATmakeAppl(sym__2, t_80, v_80));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  if(match_cons(t, sym__2))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_80), w_80);
  return(t);
}
static ATerm y_10 (ATerm n_951, ATerm s_951, ATerm t_96, ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,p_80 = NULL,q_80 = NULL;
  t = SSL_explode_term(s_951);
  if(match_cons(t, sym__2))
    {
      l_80 = ATgetArgument(t, 0);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_951);
  if(match_cons(t, sym__2))
    {
      if((l_80 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_80, p_80);
  t = genzip_4_0(e_10, g_10, i_10, _id, t);
  q_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_80, t_96);
  t = conc_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_81);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,t_7 = NULL;
  j_81 = t;
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_81);
  g_81 = t;
  t = i_81;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_81, i_81);
  t_7 = t;
  t = SSLsetAnnotations(t_7, g_81);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  r_83 = t;
  if(match_cons(t, sym__2))
    {
      s_83 = ATgetArgument(t, 0);
      w_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_83 = ATgetFirst((ATermList) t);
      y_83 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_84(s_83, w_83, r_83, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_83), x_83), y_83);
          }
      }
    }
  else
    {
      t = i_84(s_83, w_83, r_83, t);
    }
  return(t);
}
static ATerm i_84 (ATerm k_81, ATerm l_81, ATerm m_81, ATerm t)
{
  ATerm n_81 = NULL,f_83 = NULL,u_7 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL;
  t = SSLgetAnnotations(m_81);
  n_81 = t;
  t = l_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_83 = ATgetFirst((ATermList) t);
      l_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_83;
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      k_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83;
        if((j_83 != t))
          {
            _fail(t);
          }
        t = l_83;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = l_81;
        t = y_10(j_83, k_83, l_83, t);
      }
  }
  f_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, f_83);
  u_7 = t;
  t = SSLsetAnnotations(u_7, n_81);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm h_84 = NULL;
  if(match_cons(t, sym__2))
    {
      h_84 = ATgetArgument(t, 0);
      if((h_84 != ATgetArgument(t, 1)))
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
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_10, o_10, p_10, t);
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      {
        ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL;
        c_84 = t;
        if(match_cons(t, sym__2))
          {
            d_84 = ATgetArgument(t, 0);
            e_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_84;
        t = t_10(q_10, d_84, e_84, t);
      }
    }
  return(t);
}
static ATerm a_11 (ATerm d_175 (ATerm), ATerm e_175 (ATerm), ATerm f_175 (ATerm), ATerm y_99, ATerm v_99, ATerm d_100, ATerm z_99, ATerm w_99, ATerm x_99, ATerm t)
{
  ATerm t_84 = NULL,v_84 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_99, z_99);
  t = d_175(t);
  if(match_cons(t, sym__2))
    {
      v_84 = ATgetArgument(t, 0);
      t_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_84;
  t = e_175(t);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_85, d_100);
  t = diff_0_0(t);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_85, v_99);
  t = conc_0_0(t);
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_85, d_100);
  t = conc_0_0(t);
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_99, v_84, w_99);
  t = f_175(t);
  j_85 = t;
  t = (ATerm) ATmakeAppl(sym__5, h_85, i_85, t_84, j_85, x_99);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm d_175 (ATerm), ATerm e_175 (ATerm), ATerm f_175 (ATerm), ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,p_85 = NULL,v_85 = NULL,y_85 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
        {
          l_85 = ATgetFirst((ATermList) w_38);
          m_85 = (ATerm) ATgetNext((ATermList) w_38);
        }
      else
        _fail(t);
      n_85 = ATgetArgument(t, 1);
      p_85 = ATgetArgument(t, 2);
      v_85 = ATgetArgument(t, 3);
      y_85 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = a_11(d_175, e_175, f_175, l_85, m_85, n_85, p_85, v_85, y_85, t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t)
{
  static ATerm z_85 (ATerm t);
  static ATerm z_85 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_143(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = n_143(t);
        t = z_85(t);
      }
    return(t);
  }
  t = z_85(t);
  return(t);
}
ATerm for_3_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t)
{
  t = p_143(t);
  t = while_not_2_0(q_143, r_143, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  if(match_cons(t, sym__3))
    {
      f_87 = ATgetArgument(t, 0);
      g_87 = ATgetArgument(t, 1);
      h_87 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, f_87, f_87, g_87, h_87, (ATerm) ATempty);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(((ATgetType(z_38) != AT_LIST) || !(ATisEmpty(z_38))))
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
      }
      {
        ATerm b_39 = ATgetArgument(t, 2);
      }
      o_87 = ATgetArgument(t, 3);
      p_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_87, p_87);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm c_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, b_11, c_11, t);
      LocalPopChoice(e_39);
    }
  else
    {
      t = c_39;
      {
        ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
        if(match_cons(t, sym__5))
          {
            v_87 = ATgetArgument(t, 0);
            y_87 = ATgetArgument(t, 1);
            z_87 = ATgetArgument(t, 2);
            a_88 = ATgetArgument(t, 3);
            b_88 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = v_87;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_87 = ATgetFirst((ATermList) t);
            x_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, x_87, y_87, z_87, a_88, (ATerm) ATinsert(CheckATermList(b_88), w_87));
      }
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(g_11, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_39 = ATgetArgument(t, 0);
      s_87 = ATgetArgument(t, 1);
      t_87 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_87), s_87);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,h_40 = NULL,i_40 = NULL;
  y_39 = t;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_40;
  if(match_cons(t, sym_Mod_2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
      {
        ATerm k_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_39;
            t = o_9(w_39, x_39, i_40, t);
            LocalPopChoice(n_39);
          }
        else
          {
            t = k_39;
            t = q_40(h_40, i_40, t);
          }
      }
    }
  else
    {
      t = q_40(h_40, i_40, t);
    }
  return(t);
}
static ATerm q_40 (ATerm d_39, ATerm m_39, ATerm t)
{
  ATerm q_39 = NULL,v_39 = NULL;
  t = term_s_16;
  q_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), m_39), term_v_16), d_39), term_t_16);
  v_39 = t;
  t = SSL_printnl(q_39, v_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), m_39), term_v_16), d_39), term_t_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  t = for_3_0(v_10, x_10, z_10, t);
  e_89 = t;
  if(match_cons(t, sym__2))
    {
      f_89 = ATgetArgument(t, 0);
      g_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_89;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_89;
    }
  else
    {
      ATerm v_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_89 = ATgetFirst((ATermList) t);
          i_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(i_89), h_89);
      t = map_1_0(r_11, t);
      t = term_f_20;
      v_38 = t;
      t = SSL_exit(v_38);
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL;
  if(match_cons(t, sym__2))
    {
      a_90 = ATgetArgument(t, 0);
      b_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(a_90, b_90, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL;
  if(match_cons(t, sym__2))
    {
      c_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(c_90, d_90, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm e_90 = NULL;
  if(match_cons(t, sym__2))
    {
      e_90 = ATgetArgument(t, 0);
      if((e_90 != ATgetArgument(t, 1)))
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
  t = term_p_39;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
  o_89 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      r_89 = ATgetArgument(t, 0);
      m_89 = ATgetArgument(t, 1);
      n_89 = ATgetArgument(t, 2);
      {
        ATerm b_40 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_89 = t;
  t = m_89;
  t = foldr_3_0(u_11, x_11, b_12, t);
  p_89 = t;
  t = n_89;
  t = foldr_3_0(c_12, d_12, f_12, t);
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_89, (ATerm) ATmakeAppl(sym__2, p_89, q_89));
  {
    ATerm e_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATempty;
      }
  }
  v_89 = t;
  t = r_89;
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATempty;
      }
  }
  u_89 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_89, q_89));
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_89, q_89)), u_89);
  t = f_11(g_12, z_89, u_89, t);
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_89, (ATerm) ATmakeAppl(sym__2, p_89, q_89));
  x_89 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_40, (ATerm) ATinsert(CheckATermList(v_89), o_89));
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_89, (ATerm) ATmakeAppl(sym__2, p_89, q_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_40, (ATerm) ATinsert(CheckATermList(v_89), o_89)));
  t = d_11(h_12, x_89, y_89, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_40, s_89);
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_89, (ATerm) ATmakeAppl(sym_Defined_2, term_n_40, s_89));
  t = d_11(l_12, r_89, w_89, t);
  t = t_89;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL;
  if(match_cons(t, sym__2))
    {
      t_90 = ATgetArgument(t, 0);
      u_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(t_90, u_90, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL;
  if(match_cons(t, sym__2))
    {
      v_90 = ATgetArgument(t, 0);
      w_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(v_90, w_90, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm x_90 = NULL;
  if(match_cons(t, sym__2))
    {
      x_90 = ATgetArgument(t, 0);
      if((x_90 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
  h_90 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      k_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      g_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  m_90 = t;
  t = f_90;
  t = foldr_3_0(m_12, n_12, o_12, t);
  i_90 = t;
  t = g_90;
  t = foldr_3_0(p_12, q_12, r_12, t);
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_90, (ATerm) ATmakeAppl(sym__2, i_90, j_90));
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = (ATerm) ATempty;
      }
  }
  o_90 = t;
  t = k_90;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
        t = (ATerm) ATempty;
      }
  }
  n_90 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_90, j_90));
  s_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_90, j_90)), n_90);
  t = f_11(s_12, s_90, n_90, t);
  l_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_90, (ATerm) ATmakeAppl(sym__2, i_90, j_90));
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(o_90), h_90));
  r_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_90, (ATerm) ATmakeAppl(sym__2, i_90, j_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_40, (ATerm) ATinsert(CheckATermList(o_90), h_90)));
  t = d_11(t_12, q_90, r_90, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, l_90);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_90, (ATerm) ATmakeAppl(sym_Defined_2, term_c_41, l_90));
  t = d_11(v_12, k_90, p_90, t);
  t = m_90;
  return(t);
}
static ATerm d_11 (ATerm x_148 (ATerm), ATerm p_46, ATerm m_46, ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  b_91 = t;
  t = x_148(t);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_90, p_46, m_46);
  t = w_11(y_90, p_46, m_46, t);
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_91 = NULL;
        t = term_k_35;
        g_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_90, term_k_35);
        t = v_11(y_90, g_91, t);
        {
          ATerm g_41 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_41;
            }
        }
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_90 = ATgetFirst((ATermList) t);
      a_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_90, term_k_35, (ATerm) ATinsert(CheckATermList(a_91), (ATerm) ATinsert(CheckATermList(z_90), p_46)));
  t = lookup_table_0_1(y_90, t);
  f_91 = t;
  t = term_k_35;
  c_91 = t;
  t = (ATerm) ATinsert(CheckATermList(a_91), (ATerm) ATinsert(CheckATermList(z_90), p_46));
  d_91 = t;
  t = f_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(c_91, d_91, e_91, t);
  t = b_91;
  return(t);
}
static ATerm e_11 (ATerm q_156 (ATerm), ATerm r_156 (ATerm), ATerm g_71, ATerm f_71, ATerm t)
{
  t = r_156(t);
  {
    static ATerm w_12 (ATerm t);
    static ATerm w_12 (ATerm t)
    {
      ATerm h_91 = NULL;
      h_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_71, h_91);
      t = q_156(t);
      return(t);
    }
    t = fetch_1_0(w_12, t);
  }
  t = f_71;
  return(t);
}
static ATerm f_11 (ATerm n_156 (ATerm), ATerm c_71, ATerm b_71, ATerm t)
{
  static ATerm x_91 (ATerm t);
  static ATerm x_91 (ATerm t)
  {
    ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
    s_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_91 = ATgetFirst((ATermList) t);
            u_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_91;
              {
                static ATerm x_12 (ATerm t);
                static ATerm x_12 (ATerm t)
                {
                  t = b_71;
                  return(t);
                }
                t = e_11(n_156, x_12, t_91, u_91, t);
              }
              t = x_91(t);
              LocalPopChoice(l_41);
            }
          else
            {
              t = h_41;
              {
                ATerm n_41 = NULL,a_42 = NULL,y_7 = NULL;
                t = SSLgetAnnotations(s_91);
                n_41 = t;
                t = u_91;
                t = x_91(t);
                a_42 = t;
                t = (ATerm) ATinsert(CheckATermList(a_42), t_91);
                y_7 = t;
                t = SSLsetAnnotations(y_7, n_41);
              }
            }
        }
      }
    return(t);
  }
  t = c_71;
  t = x_91(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm l_92 = NULL;
  l_92 = t;
  {
    ATerm m_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL,z_42 = NULL;
        t = term_a_40;
        z_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_40, l_92);
        t = h_11(z_42, l_92, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_41) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            v_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_42;
        LocalPopChoice(q_41);
      }
    else
      {
        t = m_41;
        {
          ATerm y_41 = t;
          int z_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_43 = NULL,q_43 = NULL;
              t = term_a_40;
              q_43 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_40, l_92);
              t = h_11(q_43, l_92, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_42) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  h_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_43;
              LocalPopChoice(z_41);
            }
          else
            {
              t = y_41;
              {
                ATerm u_43 = NULL,d_44 = NULL;
                t = term_a_40;
                d_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_40, l_92);
                t = h_11(d_44, l_92, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_42) != ATmakeSymbol("v_0", 0, ATtrue)))
                      _fail(t);
                    u_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_43;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm p_92 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_48, i_48);
  t = v_11(h_48, i_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_92 = ATgetFirst((ATermList) t);
      {
        ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_92;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm g_93 = NULL,i_93 = NULL;
  g_93 = t;
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      i_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_93;
  if(match_cons(t, sym__2))
    {
      ATerm f_42 = ATgetArgument(t, 0);
      ATerm g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL,y_45 = NULL;
        t = term_p_39;
        y_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_39, g_93);
        t = h_11(y_45, g_93, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_42) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            s_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_45;
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        {
          ATerm k_42 = t;
          int l_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_46 = NULL,j_46 = NULL;
              t = term_p_39;
              j_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_39, g_93);
              t = h_11(j_46, g_93, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_42) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  f_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_46;
              LocalPopChoice(l_42);
            }
          else
            {
              t = k_42;
              {
                ATerm r_46 = NULL,x_46 = NULL;
                t = term_p_39;
                x_46 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_39, g_93);
                t = h_11(x_46, g_93, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_42 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_42) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    r_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_46;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_159 (ATerm), ATerm t_159 (ATerm), ATerm u_159 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
  p_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_93;
      t = s_159(t);
    }
  else
    {
      ATerm u_93 = NULL,v_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_93 = ATgetFirst((ATermList) t);
          r_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_93;
      t = u_159(t);
      u_93 = t;
      t = r_93;
      t = foldr_3_0(s_159, t_159, u_159, t);
      v_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_93, v_93);
      t = t_159(t);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL;
  if(match_cons(t, sym__2))
    {
      k_94 = ATgetArgument(t, 0);
      l_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(k_94, l_94, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  if(match_cons(t, sym__2))
    {
      m_94 = ATgetArgument(t, 0);
      n_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(m_94, n_94, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm o_94 = NULL;
  if(match_cons(t, sym__2))
    {
      o_94 = ATgetArgument(t, 0);
      if((o_94 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL;
  y_93 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_94 = ATgetArgument(t, 0);
      w_93 = ATgetArgument(t, 1);
      x_93 = ATgetArgument(t, 2);
      {
        ATerm o_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_94 = t;
  t = w_93;
  t = foldr_3_0(a_13, b_13, c_13, t);
  z_93 = t;
  t = x_93;
  t = foldr_3_0(d_13, e_13, f_13, t);
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, (ATerm) ATmakeAppl(sym__2, z_93, a_94));
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        t = (ATerm) ATempty;
      }
  }
  f_94 = t;
  t = b_94;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = (ATerm) ATempty;
      }
  }
  e_94 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_93, a_94));
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_93, a_94)), e_94);
  t = f_11(g_13, j_94, e_94, t);
  c_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, (ATerm) ATmakeAppl(sym__2, z_93, a_94));
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, (ATerm) ATinsert(CheckATermList(f_94), y_93));
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_94, (ATerm) ATmakeAppl(sym__2, z_93, a_94)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, (ATerm) ATinsert(CheckATermList(f_94), y_93)));
  t = d_11(h_13, h_94, i_94, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_42, c_94);
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, (ATerm) ATmakeAppl(sym_Defined_2, term_u_42, c_94));
  t = d_11(j_13, b_94, g_94, t);
  t = d_94;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      {
        ATerm y_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(a_43);
          }
        else
          {
            t = y_42;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm p_94 = NULL;
  t = map_1_0(k_13, t);
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_f_43), p_94, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,a_8 = NULL;
  v_94 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_94 = ATgetFirst((ATermList) t);
      s_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_94);
  q_94 = t;
  t = r_94;
  t = v_110(t);
  t_94 = t;
  t = s_94;
  t = w_110(t);
  u_94 = t;
  t = (ATerm) ATinsert(CheckATermList(u_94), t_94);
  a_8 = t;
  t = SSLsetAnnotations(a_8, q_94);
  return(t);
}
static ATerm i_11 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm w_94 = NULL;
  t = SSL_fputc(s_37, t_37);
  w_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_94);
  return(t);
}
static ATerm j_11 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm c_95 = NULL;
  t = SSL_write_term_to_stream_text(y_35, z_35);
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_95);
  return(t);
}
static ATerm l_11 (ATerm k_144 (ATerm), ATerm z_289, ATerm e_36, ATerm t)
{
  ATerm d_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_289, term_g_43);
  t = p_11(t);
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_95, e_36);
  t = k_144(t);
  t = fclose_0_0(t);
  t = e_36;
  return(t);
}
static ATerm k_11 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm e_95 = NULL;
  t = SSL_write_term_to_stream_baf(u_35, v_35);
  e_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_95);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm l_95 = NULL,n_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_43 = ATgetArgument(t, 0);
      if(match_cons(j_43, sym_Stream_1))
        {
          l_95 = ATgetArgument(j_43, 0);
        }
      else
        _fail(t);
      n_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(l_95, n_95, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(match_cons(l_43, sym_Stream_1))
        {
          r_95 = ATgetArgument(l_43, 0);
        }
      else
        _fail(t);
      s_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(r_95, s_95, t);
  o_95 = t;
  t = term_i_21;
  p_95 = t;
  t = o_95;
  if(match_cons(t, sym_Stream_1))
    {
      q_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, o_95);
  t = i_11(p_95, q_95, t);
  return(t);
}
ATerm output_1_0 (ATerm m_170 (ATerm), ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL;
  t = m_170(t);
  g_95 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_95 = NULL,i_95 = NULL;
        t = term_o_43;
        h_95 = t;
        t = term_p_43;
        i_95 = t;
        t = term_r_43;
        t = v_11(h_95, i_95, t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = term_s_43;
      }
  }
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_95, g_95);
  {
    ATerm t_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_95 = NULL,k_95 = NULL;
        t = term_o_43;
        j_95 = t;
        t = term_w_43;
        k_95 = t;
        t = term_x_43;
        t = v_11(j_95, k_95, t);
        t = (ATerm) ATmakeAppl(sym__2, f_95, g_95);
        LocalPopChoice(v_43);
        if(match_cons(t, sym__2))
          {
            ATerm y_43 = ATgetArgument(t, 0);
            ATerm z_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_11(l_13, f_95, g_95, t);
      }
    else
      {
        t = t_43;
        if(match_cons(t, sym__2))
          {
            ATerm a_44 = ATgetArgument(t, 0);
            ATerm b_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_11(o_13, f_95, g_95, t);
      }
  }
  return(t);
}
static ATerm g_96 (ATerm a_96, ATerm t)
{
  t = SSL_fclose(a_96);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL;
  e_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_96 = ATgetArgument(t, 0);
      {
        ATerm c_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_96);
            LocalPopChoice(e_44);
          }
        else
          {
            t = c_44;
            t = g_96(e_96, t);
          }
      }
    }
  else
    {
      t = g_96(e_96, t);
    }
  return(t);
}
static ATerm m_11 (ATerm a_36, ATerm t)
{
  t = SSL_read_term_from_stream(a_36);
  return(t);
}
static ATerm n_11 (ATerm n_80, ATerm o_80, ATerm t)
{
  t = SSL_strcat(n_80, o_80);
  return(t);
}
static ATerm o_11 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm h_96 = NULL;
  t = SSL_fopen(u_37, v_37);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_96);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_96 = NULL;
  t = SSL_stdin_stream();
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_96);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_96 = NULL;
  t = SSL_stdout_stream();
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_96);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_96 = NULL;
  t = SSL_stderr_stream();
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_96);
  return(t);
}
static ATerm w_97 (ATerm v_96, ATerm t)
{
  ATerm w_96 = NULL;
  t = SSL_explode_term(v_96);
  if(match_cons(t, sym__2))
    {
      ATerm f_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_44 = ATgetArgument(t, 1);
        if(((ATgetType(g_44) == AT_LIST) && !(ATisEmpty(g_44))))
          {
            w_96 = ATgetFirst((ATermList) g_44);
            {
              ATerm h_44 = (ATerm) ATgetNext((ATermList) g_44);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_96;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_96;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_96;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_96;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_97 (ATerm z_96, ATerm a_97, ATerm b_97, ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,h_97 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(b_97);
  e_97 = t;
  t = z_96;
  if(match_cons(t, sym_Path_1))
    {
      h_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_97, a_97);
  c_8 = t;
  t = SSLsetAnnotations(c_8, e_97);
  if(match_cons(t, sym__2))
    {
      c_97 = ATgetArgument(t, 0);
      d_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(c_97, d_97, t);
  return(t);
}
static ATerm y_97 (ATerm j_97, ATerm k_97, ATerm l_97, ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,r_97 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(l_97);
  o_97 = t;
  t = SSL_is_string(j_97);
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_97, k_97);
  d_8 = t;
  t = SSLsetAnnotations(d_8, o_97);
  if(match_cons(t, sym__2))
    {
      m_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(m_97, n_97, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
  t_97 = t;
  if(match_cons(t, sym__2))
    {
      u_97 = ATgetArgument(t, 0);
      v_97 = ATgetArgument(t, 1);
      {
        ATerm i_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_97(t_97, t);
            LocalPopChoice(j_44);
          }
        else
          {
            t = i_44;
            {
              ATerm k_44 = t;
              int l_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_97(u_97, v_97, t_97, t);
                  LocalPopChoice(l_44);
                }
              else
                {
                  t = k_44;
                  t = y_97(u_97, v_97, t_97, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_97(t_97, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,h_98 = NULL;
  h_98 = t;
  {
    ATerm m_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_98, term_q_44);
        t = p_11(t);
        LocalPopChoice(p_44);
      }
    else
      {
        t = m_44;
        {
          ATerm t_47 = NULL,u_47 = NULL;
          t = term_r_44;
          u_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_44, h_98);
          t = n_11(u_47, h_98, t);
          t_47 = t;
          t = SSL_perror(t_47);
          _fail(t);
        }
      }
  }
  b_98 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(c_98, t);
  a_98 = t;
  t = b_98;
  t = fclose_0_0(t);
  t = a_98;
  return(t);
}
ATerm input_1_0 (ATerm n_170 (ATerm), ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_98 = NULL,l_98 = NULL;
      t = term_o_43;
      k_98 = t;
      t = term_u_44;
      l_98 = t;
      t = term_x_44;
      t = v_11(k_98, l_98, t);
      LocalPopChoice(t_44);
    }
  else
    {
      t = s_44;
      t = term_y_44;
    }
  t = ReadFromFile_0_0(t);
  t = n_170(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  t = term_o_43;
  m_98 = t;
  t = term_z_44;
  n_98 = t;
  t = term_a_45;
  t = v_11(m_98, n_98, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
  p_98 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_98;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_45 = ATgetFirst((ATermList) t);
                ATerm e_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_98;
          }
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = (ATerm) ATinsert(ATempty, p_98);
      }
  }
  q_98 = t;
  t = term_s_43;
  r_98 = t;
  t = SSL_printnl(r_98, q_98);
  t = p_98;
  return(t);
}
ATerm map_1_0 (ATerm g_154 (ATerm), ATerm t)
{
  static ATerm j_99 (ATerm t);
  static ATerm j_99 (ATerm t)
  {
    ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL;
    g_99 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_99;
      }
    else
      {
        ATerm j_48 = NULL,o_48 = NULL,p_48 = NULL,m_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_99 = ATgetFirst((ATermList) t);
            i_99 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_99);
        j_48 = t;
        t = h_99;
        t = g_154(t);
        o_48 = t;
        t = i_99;
        t = j_99(t);
        p_48 = t;
        t = (ATerm) ATinsert(CheckATermList(p_48), o_48);
        m_8 = t;
        t = SSLsetAnnotations(m_8, j_48);
      }
    return(t);
  }
  t = j_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_99 = ATgetFirst((ATermList) t);
      n_99 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_99 = NULL,s_99 = NULL;
        static ATerm p_13 (ATerm t);
        static ATerm p_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_99)), not_null(s_99));
          return(t);
        }
        t = n_99;
        t = r_0(t);
        if(((r_99 != NULL) && (r_99 != t)))
          _fail(t);
        else
          r_99 = t;
        t = m_99;
        t = p_0(t);
        if(((s_99 != NULL) && (s_99 != t)))
          _fail(t);
        else
          s_99 = t;
        t = n_99;
        t = reverse_acc_2_0(p_0, p_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_30;
      t = r_0(t);
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,p_8 = NULL;
  m_100 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_100);
  k_100 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_100);
  p_8 = t;
  t = SSLsetAnnotations(p_8, k_100);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm a_101 = NULL;
  a_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_101), term_f_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_172 (ATerm), ATerm m_172 (ATerm), ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_100 = NULL,j_100 = NULL;
      t = term_o_43;
      i_100 = t;
      t = term_z_44;
      j_100 = t;
      t = term_a_45;
      t = v_11(i_100, j_100, t);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      t = fetch_1_0(q_13, t);
    }
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_172(t);
        t = echo_0_0(t);
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
      }
  }
  t = term_k_45;
  t = echo_0_0(t);
  t = term_l_45;
  g_100 = t;
  t = term_m_45;
  h_100 = t;
  t = term_n_45;
  t = v_11(g_100, h_100, t);
  t = reverse_acc_2_0(_id, r_13, t);
  t = map_1_0(s_13, t);
  {
    ATerm o_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_101 = NULL;
        t = m_172(t);
        b_101 = t;
        t = (ATerm) ATinsert(CheckATermList(b_101), term_q_45);
        t = echo_0_0(t);
        LocalPopChoice(p_45);
      }
    else
      {
        t = o_45;
      }
  }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL,s_8 = NULL;
  j_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_101);
  h_101 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_101);
  s_8 = t;
  t = SSLsetAnnotations(s_8, h_101);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  {
    ATerm r_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_101 = NULL,g_101 = NULL;
        t = term_o_43;
        f_101 = t;
        t = term_z_44;
        g_101 = t;
        t = term_a_45;
        t = v_11(f_101, g_101, t);
        LocalPopChoice(t_45);
      }
    else
      {
        t = r_45;
        t = fetch_1_0(t_13, t);
      }
  }
  t = e_101;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm l_101 = NULL;
  l_101 = t;
  if(match_string(t, "-k"))
    {
      t = l_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_101;
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL;
  m_101 = t;
  t = SSL_string_to_int(m_101);
  n_101 = t;
  t = term_u_45;
  o_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_45, n_101);
  t = y_11(o_101, n_101, t);
  t = m_101;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_13, v_13, w_13, t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm q_101 = NULL;
  q_101 = t;
  if(match_string(t, "-S"))
    {
      t = q_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_101;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL;
  t = term_z_45;
  o_102 = t;
  t = term_e_20;
  p_102 = t;
  t = term_a_46;
  t = y_11(o_102, p_102, t);
  t = term_b_46;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
  q_102 = t;
  t = SSL_string_to_int(q_102);
  r_102 = t;
  t = term_z_45;
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_45, r_102);
  t = y_11(s_102, r_102, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_102);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  t = term_h_46;
  t_102 = t;
  t = term_j_30;
  u_102 = t;
  t = term_i_46;
  t = y_11(t_102, u_102, t);
  t = term_k_46;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_13, y_13, z_13, t);
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm q_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_14, b_14, c_14, t);
            LocalPopChoice(s_46);
          }
        else
          {
            t = q_46;
            t = Option_3_0(d_14, e_14, f_14, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL;
  t = term_o_43;
  v_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_43, o_41, p_41);
  t = lookup_table_0_1(v_102, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(o_41, p_41, w_102, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_43, o_41, p_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL;
      t = term_j_30;
      t = g_0(t);
      c_103 = t;
      t = term_l_45;
      d_103 = t;
      t = term_m_45;
      e_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_45, term_m_45, c_103);
      t = w_11(d_103, e_103, c_103, t);
      _fail(t);
    }
  else
    {
      ATerm v_103 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_103 = ATgetFirst((ATermList) t);
          b_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_103;
      t = d_0(t);
      t = term_j_30;
      t = f_0(t);
      v_103 = t;
      t = (ATerm) ATinsert(CheckATermList(b_103), v_103);
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm x_103 = NULL;
  x_103 = t;
  if(match_string(t, "-o"))
    {
      t = x_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_103;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL;
  y_103 = t;
  t = term_p_43;
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_43, y_103);
  t = y_11(z_103, y_103, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_103);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_u_46;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_14, h_14, i_14, t);
  return(t);
}
static ATerm w_11 (ATerm w_47, ATerm x_47, ATerm v_47, ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,y_105 = NULL,z_105 = NULL;
  g_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
  {
    ATerm w_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_46 = ATgetArgument(t, 0);
            ATerm b_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
        t = v_11(w_47, x_47, t);
        LocalPopChoice(y_46);
      }
    else
      {
        t = w_46;
        t = (ATerm) ATempty;
      }
  }
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_47, x_47, (ATerm) ATinsert(CheckATermList(h_104), v_47));
  t = lookup_table_0_1(w_47, t);
  z_105 = t;
  t = (ATerm) ATinsert(CheckATermList(h_104), v_47);
  i_104 = t;
  t = z_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(x_47, i_104, y_105, t);
  t = g_104;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_106 = NULL,t_106 = NULL,u_106 = NULL;
      t = term_j_30;
      t = n_0(t);
      k_106 = t;
      t = term_l_45;
      t_106 = t;
      t = term_m_45;
      u_106 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_45, term_m_45, k_106);
      t = w_11(t_106, u_106, k_106, t);
      _fail(t);
    }
  else
    {
      ATerm y_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_106 = ATgetFirst((ATermList) t);
          h_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_106;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_106 = ATgetFirst((ATermList) t);
          j_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_106;
      t = j_0(t);
      t = i_106;
      t = l_0(t);
      y_106 = t;
      t = (ATerm) ATinsert(CheckATermList(j_106), y_106);
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm a_107 = NULL;
  a_107 = t;
  if(match_string(t, "-i"))
    {
      t = a_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_107;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL;
  l_107 = t;
  t = term_u_44;
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_44, l_107);
  t = y_11(m_107, l_107, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_107);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_c_47;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_14, k_14, l_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_107 = NULL,o_107 = NULL,p_107 = NULL,e_108 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_30;
  t = whoami_0_0(t);
  n_107 = t;
  t = term_s_16;
  p_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_47), n_107);
  e_108 = t;
  t = SSL_printnl(p_107, e_108);
  t = term_f_20;
  o_107 = t;
  t = SSL_exit(o_107);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL;
  t = term_o_43;
  y_108 = t;
  t = term_z_44;
  z_108 = t;
  t = term_a_45;
  t = v_11(y_108, z_108, t);
  return(t);
}
static ATerm q_11 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_44, o_44);
      LocalPopChoice(f_47);
    }
  else
    {
      t = e_47;
      t = SSL_addr(n_44, o_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_159 (ATerm), ATerm r_159 (ATerm), ATerm t)
{
  ATerm b_109 = NULL,c_109 = NULL,d_109 = NULL;
  b_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_109;
      t = q_159(t);
    }
  else
    {
      ATerm o_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_109 = ATgetFirst((ATermList) t);
          d_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_109;
      t = foldr_2_0(q_159, r_159, t);
      o_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_109, o_110);
      t = r_159(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_e_20;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(k_49, l_49, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_110 = NULL,b_49 = NULL,d_49 = NULL;
  t = times_0_0(t);
  d_49 = t;
  t = SSL_explode_term(d_49);
  if(match_cons(t, sym__2))
    {
      ATerm g_47 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_49;
  t = foldr_2_0(m_14, n_14, t);
  y_110 = t;
  t = SSL_TicksToSeconds(y_110);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL;
  j_111 = t;
  if(match_cons(t, sym__2))
    {
      k_111 = ATgetArgument(t, 0);
      l_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_111;
        if((k_111 != t))
          {
            _fail(t);
          }
        t = j_111;
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = (ATerm) ATmakeAppl(sym__2, k_111, l_111);
        {
          ATerm j_47 = t;
          int k_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_111, l_111);
              LocalPopChoice(k_47);
            }
          else
            {
              t = j_47;
              t = SSL_gtr(k_111, l_111);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_111, l_111);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_146 (ATerm), ATerm t)
{
  ATerm p_111 = NULL;
  p_111 = t;
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL;
        t = term_o_43;
        s_111 = t;
        t = term_z_45;
        t_111 = t;
        t = term_n_47;
        t = v_11(s_111, t_111, t);
        r_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_111, term_f_20);
        t = geq_0_0(t);
        t = p_111;
        t = b_146(t);
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        t = p_111;
      }
  }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,y_111 = NULL,z_111 = NULL;
  t = run_time_0_0(t);
  v_111 = t;
  t = term_j_30;
  t = whoami_0_0(t);
  w_111 = t;
  t = term_s_16;
  y_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_47), v_111), term_o_47), w_111);
  z_111 = t;
  t = SSL_printnl(y_111, z_111);
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_47), v_111), term_o_47), w_111));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_112 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_20;
  a_112 = t;
  t = SSL_exit(a_112);
  return(t);
}
static ATerm z_11 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm b_112 = NULL;
  t = SSL_hashtable_put(n_52, l_52, m_52);
  b_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_112);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_49, ATerm t)
{
  ATerm k_112 = NULL;
  t = table_hashtable_0_0(t);
  k_112 = t;
  {
    ATerm q_47 = t;
    int r_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_50 = NULL;
        t = k_112;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(i_49, c_50, t);
        LocalPopChoice(r_47);
      }
    else
      {
        t = q_47;
        {
          ATerm q_50 = NULL;
          t = i_49;
          t = table_create_0_0(t);
          t = k_112;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(i_49, q_50, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm n_112 = NULL;
  t = SSL_hashtable_create(t_52, u_52);
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_112);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,s_112 = NULL,t_112 = NULL;
  o_112 = t;
  t = term_y_47;
  s_112 = t;
  t = term_a_48;
  t_112 = t;
  t = o_112;
  t = new_hashtable_0_2(s_112, t_112, t);
  p_112 = t;
  t = o_112;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(o_112, p_112, q_112, t);
  t = o_112;
  return(t);
}
static ATerm s_11 (ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm u_112 = NULL;
  t = SSL_hashtable_remove(r_52, q_52);
  u_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_112);
  return(t);
}
static ATerm t_11 (ATerm v_52, ATerm t)
{
  ATerm v_112 = NULL;
  t = SSL_hashtable_destroy(v_52);
  v_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_112);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_112 = NULL;
  t = SSL_table_hashtable();
  w_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL;
  x_112 = t;
  t = table_hashtable_0_0(t);
  y_112 = t;
  t = lookup_table_0_1(x_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(a_113, t);
  t = y_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(x_112, z_112, t);
  t = x_112;
  return(t);
}
ATerm fetch_1_0 (ATerm o_154 (ATerm), ATerm t)
{
  static ATerm x_113 (ATerm t);
  static ATerm x_113 (ATerm t)
  {
    ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
    u_113 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_113 = ATgetFirst((ATermList) t);
        w_113 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_48 = t;
      int e_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_51 = NULL,i_51 = NULL,u_8 = NULL;
          t = SSLgetAnnotations(u_113);
          f_51 = t;
          t = v_113;
          t = o_154(t);
          i_51 = t;
          t = (ATerm) ATinsert(CheckATermList(w_113), i_51);
          u_8 = t;
          t = SSLsetAnnotations(u_8, f_51);
          LocalPopChoice(e_48);
        }
      else
        {
          t = d_48;
          {
            ATerm x_51 = NULL,g_52 = NULL,x_8 = NULL;
            t = SSLgetAnnotations(u_113);
            x_51 = t;
            t = w_113;
            t = x_113(t);
            g_52 = t;
            t = (ATerm) ATinsert(CheckATermList(g_52), v_113);
            x_8 = t;
            t = SSLsetAnnotations(x_8, x_51);
          }
        }
    }
    return(t);
  }
  t = x_113(t);
  return(t);
}
static ATerm a_12 (ATerm o_52, ATerm p_52, ATerm t)
{
  t = SSL_hashtable_get(p_52, o_52);
  return(t);
}
static ATerm v_11 (ATerm p_49, ATerm q_49, ATerm t)
{
  ATerm a_114 = NULL;
  t = lookup_table_0_1(p_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(q_49, a_114, t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL;
  t = term_k_48;
  c_114 = t;
  t = term_j_30;
  d_114 = t;
  t = term_l_48;
  t = y_11(c_114, d_114, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL;
  t = term_k_48;
  g_114 = t;
  t = term_j_30;
  h_114 = t;
  t = term_l_48;
  t = y_11(g_114, h_114, t);
  t = term_r_48;
  e_114 = t;
  t = term_j_30;
  f_114 = t;
  t = term_s_48;
  t = y_11(e_114, f_114, t);
  t = term_u_48;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_v_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_14, q_14, r_14, t);
      LocalPopChoice(f_49);
    }
  else
    {
      t = a_49;
      t = Option_3_0(s_14, u_14, v_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_172 (ATerm), ATerm t)
{
  ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL,r_114 = NULL,s_114 = NULL,c_9 = NULL;
  m_114 = t;
  {
    ATerm h_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_49;
        t = g_172(t);
        LocalPopChoice(j_49);
      }
    else
      {
        t = h_49;
      }
  }
  t = m_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_114 = ATgetFirst((ATermList) t);
      p_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_114);
  n_114 = t;
  t = term_z_44;
  s_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_44, o_114);
  t = y_11(s_114, o_114, t);
  t = p_114;
  {
    static ATerm c_115 (ATerm t);
    static ATerm c_115 (ATerm t)
    {
      ATerm n_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_114 = NULL;
              v_114 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_114;
              LocalPopChoice(t_49);
            }
          else
            {
              t = s_49;
              t = g_172(t);
              t = Cons_2_0(_id, c_115, t);
            }
          LocalPopChoice(o_49);
        }
      else
        {
          t = n_49;
          {
            ATerm y_114 = NULL,z_114 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_114 = ATgetFirst((ATermList) t);
                z_114 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_114), (ATerm) ATmakeAppl(sym_Undefined_1, y_114));
          }
        }
      return(t);
    }
    t = c_115(t);
  }
  r_114 = t;
  t = (ATerm) ATinsert(CheckATermList(r_114), (ATerm) ATmakeAppl(sym_Program_1, o_114));
  c_9 = t;
  t = SSLsetAnnotations(c_9, n_114);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm p_115 = NULL;
  p_115 = t;
  if(match_string(t, "--help"))
    {
      t = p_115;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_115;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_115;
        }
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm q_115 = NULL,r_115 = NULL;
  t = term_u_49;
  q_115 = t;
  t = term_j_30;
  r_115 = t;
  t = term_v_49;
  t = y_11(q_115, r_115, t);
  t = term_w_49;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_y_49;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_172 (ATerm), ATerm e_172 (ATerm), ATerm f_172 (ATerm), ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
  j_115 = t;
  t = term_l_45;
  k_115 = t;
  t = term_z_49;
  t = lookup_table_0_1(k_115, t);
  o_115 = t;
  t = term_m_45;
  l_115 = t;
  t = (ATerm) ATempty;
  m_115 = t;
  t = o_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(l_115, m_115, n_115, t);
  t = j_115;
  {
    static ATerm x_14 (ATerm t);
    static ATerm x_14 (ATerm t)
    {
      ATerm a_50 = t;
      int g_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_172(t);
          LocalPopChoice(g_50);
        }
      else
        {
          t = a_50;
          {
            ATerm j_50 = t;
            int n_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_14, d_15, e_15, t);
                LocalPopChoice(n_50);
              }
            else
              {
                t = j_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_14, t);
  }
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_116 = NULL;
        c_116 = t;
        {
          ATerm s_50 = t;
          int w_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_55 = NULL;
              t = c_116;
              {
                ATerm z_50 = t;
                int a_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_55 = NULL,j_55 = NULL;
                    t = term_o_43;
                    i_55 = t;
                    t = term_u_49;
                    j_55 = t;
                    t = term_d_51;
                    t = v_11(i_55, j_55, t);
                    LocalPopChoice(a_51);
                  }
                else
                  {
                    t = z_50;
                    t = fetch_1_0(g_15, t);
                  }
              }
              t = c_116;
              t = e_172(t);
              t = term_e_20;
              b_55 = t;
              t = SSL_exit(b_55);
              LocalPopChoice(w_50);
            }
          else
            {
              t = s_50;
              {
                ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
                t = term_o_43;
                r_55 = t;
                t = term_k_48;
                s_55 = t;
                t = term_e_51;
                t = v_11(r_55, s_55, t);
                t = c_116;
                t = f_172(t);
                t = term_e_20;
                q_55 = t;
                t = SSL_exit(q_55);
              }
            }
        }
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
        {
          ATerm g_51 = t;
          int h_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
              static ATerm i_15 (ATerm t);
              static ATerm i_15 (ATerm t)
              {
                ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL,e_9 = NULL;
                i_116 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_116 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_116);
                g_116 = t;
                t = h_116;
                if(((h_115 != NULL) && (h_115 != t)))
                  _fail(t);
                else
                  h_115 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_116);
                e_9 = t;
                t = SSLsetAnnotations(e_9, g_116);
                return(t);
              }
              t = fetch_1_0(i_15, t);
              t = term_s_16;
              e_116 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_115)), term_j_51);
              f_116 = t;
              t = SSL_printnl(e_116, f_116);
              t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_115)), term_j_51));
              t = e_172(t);
              t = term_f_20;
              d_116 = t;
              t = SSL_exit(d_116);
              LocalPopChoice(h_51);
            }
          else
            {
              t = g_51;
            }
        }
      }
  }
  i_115 = t;
  t = term_l_45;
  t = table_destroy_0_0(t);
  t = i_115;
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_170 (ATerm), ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm), ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL;
  t = parse_options_3_0(g_170, h_170, i_170, t);
  n_116 = t;
  t = term_k_51;
  t = table_create_0_0(t);
  t = term_k_51;
  o_116 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_51, term_l_51, n_116);
  t = lookup_table_0_1(o_116, t);
  r_116 = t;
  t = term_l_51;
  p_116 = t;
  t = r_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(p_116, n_116, q_116, t);
  t = n_116;
  t = j_170(t);
  {
    ATerm m_51 = t;
    int n_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_170(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_51);
      }
    else
      {
        t = m_51;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_51);
    }
  else
    {
      t = o_51;
      {
        ATerm q_51 = t;
        int r_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_51);
          }
        else
          {
            t = q_51;
            {
              ATerm s_51 = t;
              int t_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_15, m_15, n_15, t);
                  LocalPopChoice(t_51);
                }
              else
                {
                  t = s_51;
                  {
                    ATerm u_51 = t;
                    int v_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_51);
                      }
                    else
                      {
                        t = u_51;
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
static ATerm k_15 (ATerm t)
{
  t = input_1_0(o_15, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm t_116 = NULL,u_116 = NULL;
  t = term_w_43;
  t_116 = t;
  t = term_j_30;
  u_116 = t;
  t = term_w_51;
  t = y_11(t_116, u_116, t);
  t = term_y_51;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_z_51;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = output_1_0(p_15, t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,f_10 = NULL,t_9 = NULL;
  f_117 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_117);
  y_116 = t;
  t = z_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_117 = ATgetFirst((ATermList) t);
      c_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_116);
  a_117 = t;
  t = c_117;
  t = Cons_2_0(q_15, s_15, t);
  d_117 = t;
  t = (ATerm) ATinsert(CheckATermList(d_117), b_117);
  t_9 = t;
  t = SSLsetAnnotations(t_9, a_117);
  e_117 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_117);
  f_10 = t;
  t = SSLsetAnnotations(f_10, y_116);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm a_52 = ATgetArgument(t, 0);
      if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
        {
          w_116 = ATgetFirst((ATermList) a_52);
          {
            ATerm b_52 = (ATerm) ATgetNext((ATermList) a_52);
            if(((ATgetType(b_52) == AT_LIST) && !(ATisEmpty(b_52))))
              {
                ATerm c_52 = ATgetFirst((ATermList) b_52);
                if(match_cons(c_52, sym_Strategies_1))
                  {
                    x_116 = ATgetArgument(c_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm d_52 = (ATerm) ATgetNext((ATermList) b_52);
                  if(((ATgetType(d_52) != AT_LIST) || !(ATisEmpty(d_52))))
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
  else
    _fail(t);
  t = m_9(w_116, x_116, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,j_9 = NULL;
  j_117 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_117);
  g_117 = t;
  t = h_117;
  t = needed_defs_0_0(t);
  i_117 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_117);
  j_9 = t;
  t = SSLsetAnnotations(j_9, g_117);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(j_15, default_system_usage_0_0, default_system_about_0_0, _id, k_15, t);
  return(t);
}
