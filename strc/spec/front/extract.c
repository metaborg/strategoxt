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
static ATerm term_r_53;
static ATerm term_q_53;
static ATerm term_p_53;
static ATerm term_e_53;
static ATerm term_d_53;
static ATerm term_c_53;
static ATerm term_o_52;
static ATerm term_n_52;
static ATerm term_b_52;
static ATerm term_a_52;
static ATerm term_z_51;
static ATerm term_y_51;
static ATerm term_x_51;
static ATerm term_s_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_l_51;
static ATerm term_k_51;
static ATerm term_j_51;
static ATerm term_i_51;
static ATerm term_h_51;
static ATerm term_c_51;
static ATerm term_b_51;
static ATerm term_p_50;
static ATerm term_l_50;
static ATerm term_j_50;
static ATerm term_o_49;
static ATerm term_n_49;
static ATerm term_b_49;
static ATerm term_u_48;
static ATerm term_o_48;
static ATerm term_n_48;
static ATerm term_k_48;
static ATerm term_j_48;
static ATerm term_h_48;
static ATerm term_e_48;
static ATerm term_d_48;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_t_47;
static ATerm term_l_47;
static ATerm term_h_47;
static ATerm term_g_47;
static ATerm term_f_47;
static ATerm term_e_47;
static ATerm term_z_46;
static ATerm term_t_46;
static ATerm term_r_46;
static ATerm term_q_46;
static ATerm term_o_46;
static ATerm term_n_46;
static ATerm term_j_46;
static ATerm term_g_46;
static ATerm term_j_45;
static ATerm term_i_45;
static ATerm term_f_45;
static ATerm term_e_45;
static ATerm term_c_45;
static ATerm term_b_45;
static ATerm term_t_44;
static ATerm term_q_44;
static ATerm term_p_44;
static ATerm term_o_44;
static ATerm term_j_44;
static ATerm term_i_44;
static ATerm term_d_43;
static ATerm term_c_43;
static ATerm term_b_43;
static ATerm term_t_42;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_g_42;
static ATerm term_f_42;
static ATerm term_o_41;
static ATerm term_a_41;
static ATerm term_u_40;
static ATerm term_t_40;
static ATerm term_q_37;
static ATerm term_f_37;
static ATerm term_b_36;
static ATerm term_n_32;
static ATerm term_z_31;
static ATerm term_v_30;
static ATerm term_u_30;
static ATerm term_t_30;
static ATerm term_o_30;
static ATerm term_n_30;
static ATerm term_m_30;
static ATerm term_r_25;
static ATerm term_o_25;
static ATerm term_l_25;
static ATerm term_b_25;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_t_24;
static ATerm term_s_24;
static ATerm term_r_24;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_h_23;
static ATerm term_g_23;
static ATerm term_f_23;
static ATerm term_d_23;
static ATerm term_c_23;
static ATerm term_a_23;
static ATerm term_z_22;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_q_22;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_d_22;
static ATerm term_b_22;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_d_18;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_m_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_23);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_23);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATempty);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Op_2, term_d_23, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Call_2, term_s_24, (ATerm) ATempty);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_30, (ATerm) ATempty);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("error: redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("/(", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ExtDefinition", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_a_21);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_p_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_c_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_i_45);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_n_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_r_46);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_f_47, term_g_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_a_21);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_21);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_t_30);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_v_47);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym__2, term_h_51, term_t_30);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_t_30);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym__2, term_x_51, term_t_30);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, (ATerm) ATempty);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_x_51);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_h_51);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_t_30);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_161 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm b_10 (ATerm f_111, ATerm e_111, ATerm t);
static ATerm d_10 (ATerm x_83, ATerm y_83, ATerm z_83, ATerm t);
static ATerm m_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm n_136 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm j_10 (ATerm k_29, ATerm j_29, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm y_163 (ATerm), ATerm z_163 (ATerm), ATerm a_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_164 (ATerm), ATerm t);
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
static ATerm m_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm z_165 (ATerm), ATerm t);
static ATerm n_47 (ATerm g_39, ATerm h_39, ATerm t);
static ATerm p_47 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm t);
static ATerm q_47 (ATerm n_40, ATerm o_40, ATerm t);
static ATerm r_47 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm c_176 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm w_10 (ATerm x_105, ATerm y_105, ATerm z_105, ATerm t);
static ATerm u_59 (ATerm v_58, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_138 (ATerm), ATerm t);
static ATerm a_11 (ATerm k_101, ATerm l_101, ATerm m_101, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_137 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm w_141 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm b_11 (ATerm x_44, ATerm y_44, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm copy_1_0 (ATerm a_161 (ATerm), ATerm t);
static ATerm c_11 (ATerm a_83, ATerm b_83, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm l_77 (ATerm a_75, ATerm b_75, ATerm f_75, ATerm g_75, ATerm t);
static ATerm m_77 (ATerm n_76, ATerm o_76, ATerm p_76, ATerm q_76, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_155 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm h_139 (ATerm), ATerm t);
static ATerm k_10 (ATerm f_48, ATerm g_48, ATerm t);
ATerm end_scope_1_0 (ATerm o_149 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_149 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm o_10 (ATerm g_85, ATerm h_85, ATerm l_85, ATerm i_85, ATerm k_85, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm y_78 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm y_77, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_155 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_80 (ATerm x_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_11 (ATerm c_157 (ATerm), ATerm e_71, ATerm d_71, ATerm t);
ATerm genzip_4_0 (ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm n_11 (ATerm l_958, ATerm q_958, ATerm n_97, ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm k_86 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t);
static ATerm m_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm p_11 (ATerm y_175 (ATerm), ATerm z_175 (ATerm), ATerm a_176 (ATerm), ATerm s_100, ATerm p_100, ATerm x_100, ATerm t_100, ATerm q_100, ATerm r_100, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm y_175 (ATerm), ATerm z_175 (ATerm), ATerm a_176 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm z_40 (ATerm l_39, ATerm m_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_145 (ATerm), ATerm t);
static ATerm s_11 (ATerm o_84, ATerm p_84, ATerm q_84, ATerm t);
ATerm ExtDefinition_0_0 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm t_11 (ATerm l_84, ATerm m_84, ATerm n_84, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm check_ext_overload_0_0 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm u_11 (ATerm r_149 (ATerm), ATerm s_46, ATerm p_46, ATerm t);
static ATerm v_11 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t);
static ATerm w_11 (ATerm h_157 (ATerm), ATerm g_71, ATerm f_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm y_11 (ATerm l_48, ATerm m_48, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t);
static ATerm z_11 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm a_12 (ATerm c_36, ATerm d_36, ATerm t);
static ATerm c_12 (ATerm e_145 (ATerm), ATerm s_290, ATerm i_36, ATerm t);
static ATerm b_12 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm output_1_0 (ATerm h_171 (ATerm), ATerm t);
static ATerm m_99 (ATerm g_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_12 (ATerm e_36, ATerm t);
static ATerm e_12 (ATerm r_80, ATerm s_80, ATerm t);
static ATerm f_12 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_101 (ATerm w_99, ATerm t);
static ATerm i_101 (ATerm a_100, ATerm b_100, ATerm c_100, ATerm t);
static ATerm j_101 (ATerm k_100, ATerm l_100, ATerm m_100, ATerm t);
static ATerm g_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_171 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm default_system_usage_2_0 (ATerm g_173 (ATerm), ATerm h_173 (ATerm), ATerm t);
static ATerm h_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_12 (ATerm s_41, ATerm t_41, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_12 (ATerm a_48, ATerm b_48, ATerm z_47, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_12 (ATerm r_44, ATerm s_44, ATerm t);
ATerm foldr_2_0 (ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_146 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_12 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm t);
ATerm lookup_table_0_1 (ATerm m_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_52, ATerm y_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_12 (ATerm u_52, ATerm v_52, ATerm t);
static ATerm k_12 (ATerm z_52, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_155 (ATerm), ATerm t);
static ATerm r_12 (ATerm s_52, ATerm t_52, ATerm t);
static ATerm m_12 (ATerm t_49, ATerm u_49, ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm b_173 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm parse_options_3_0 (ATerm y_172 (ATerm), ATerm z_172 (ATerm), ATerm a_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm b_171 (ATerm), ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm f_171 (ATerm), ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,w_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty);
        s_1 = t;
        t = term_m_16;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
        t = y_11(w_1, s_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("x_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, q_1);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm v_2 = NULL,h_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty);
          v_2 = t;
          t = term_m_16;
          h_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
          t = y_11(h_3, v_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm r_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("v_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, q_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_161 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_2 = ATgetFirst((ATermList) t);
          r_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 = NULL,e_4 = NULL,g_4 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(p_2);
            b_4 = t;
            t = q_2;
            t = o_161(t);
            e_4 = t;
            t = r_2;
            t = filter_1_0(o_161, t);
            g_4 = t;
            t = (ATerm) ATinsert(CheckATermList(g_4), e_4);
            a_0 = t;
            t = SSLsetAnnotations(a_0, b_4);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = r_2;
            t = filter_1_0(o_161, t);
          }
      }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_m_16;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  w_2 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            x_2 = ATgetArgument(t, 0);
            {
              ATerm y_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_16);
        {
          ATerm b_3 = NULL,c_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_2, (ATerm) ATempty);
          b_3 = t;
          t = term_a_17;
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, x_2, (ATerm) ATempty), term_a_17);
          t = u_11(b_0, b_3, c_3, t);
          t = w_2;
        }
      }
    else
      {
        t = w_16;
        {
          ATerm f_3 = NULL,g_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              x_2 = ATgetArgument(t, 0);
              {
                ATerm b_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_2, (ATerm) ATempty);
          f_3 = t;
          t = term_f_17;
          g_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, x_2, (ATerm) ATempty), term_f_17);
          t = u_11(i_0, f_3, g_3, t);
          t = w_2;
        }
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm i_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = i_17;
    }
  return(t);
}
static ATerm b_10 (ATerm f_111, ATerm e_111, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,h_0 = NULL,e_0 = NULL,c_0 = NULL;
  t = e_111;
  t = topdown_1_0(k_0, t);
  t = f_111;
  if(match_cons(t, sym_Signature_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_111);
  i_3 = t;
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_3 = ATgetFirst((ATermList) t);
      n_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  l_3 = t;
  t = m_3;
  if(match_cons(t, sym_Constructors_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  p_3 = t;
  t = r_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, t_3);
  c_0 = t;
  t = SSLsetAnnotations(c_0, p_3);
  u_3 = t;
  t = n_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_3), u_3);
  e_0 = t;
  t = SSLsetAnnotations(e_0, l_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_3);
  h_0 = t;
  t = SSLsetAnnotations(h_0, i_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, e_111)), k_3));
  return(t);
}
static ATerm d_10 (ATerm x_83, ATerm y_83, ATerm z_83, ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  t = term_l_17;
  x_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), z_83), term_o_17), y_83), term_n_17), x_83), term_m_17);
  y_3 = t;
  t = SSL_printnl(x_3, y_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), z_83), term_o_17), y_83), term_n_17), x_83), term_m_17);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
        _fail(t);
      {
        ATerm s_17 = ATgetArgument(t, 1);
        if(((ATgetType(s_17) != AT_INT) || (ATgetInt((ATermInt) s_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL;
  s_4 = t;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = x_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,f_5 = NULL;
        t = t_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_17 = ATgetFirst((ATermList) t);
            ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
              {
                ATerm y_17 = ATgetFirst((ATermList) x_17);
                ATerm z_17 = (ATerm) ATgetNext((ATermList) x_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm c_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(m_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_18;
            }
        }
        t = term_l_17;
        e_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_d_18);
        f_5 = t;
        t = SSL_printnl(e_5, f_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_d_18);
        t = giving_up_0_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm l_5 = NULL,m_5 = NULL;
          t = t_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_18 = ATgetFirst((ATermList) t);
              if(match_cons(f_18, sym__2))
                {
                  l_5 = ATgetArgument(f_18, 0);
                  m_5 = ATgetArgument(f_18, 1);
                }
              else
                _fail(t);
              {
                ATerm g_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(g_18) != AT_LIST) || !(ATisEmpty(g_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATmakeAppl(sym__2, l_5, m_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATmakeAppl(sym__2, l_5, m_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      {
        ATerm x_6 = NULL,f_7 = NULL,g_7 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(c_15);
        x_6 = t;
        t = d_15;
        t = j_136(t);
        f_7 = t;
        t = e_15;
        t = j_136(t);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_7, g_7);
        u_0 = t;
        t = SSLsetAnnotations(u_0, x_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
          b_15 = ATgetArgument(t, 2);
          {
            ATerm s_7 = NULL,y_7 = NULL,b_8 = NULL,f_8 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(c_15);
            s_7 = t;
            t = d_15;
            t = l_136(t);
            y_7 = t;
            t = e_15;
            t = l_136(t);
            b_8 = t;
            t = b_15;
            t = j_136(t);
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_7, b_8, f_8);
            w_0 = t;
            t = SSLsetAnnotations(w_0, s_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              d_15 = ATgetArgument(t, 0);
              e_15 = ATgetArgument(t, 1);
              b_15 = ATgetArgument(t, 2);
              a_15 = ATgetArgument(t, 3);
              {
                ATerm k_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(c_15);
                k_9 = t;
                t = d_15;
                t = l_136(t);
                x_9 = t;
                t = e_15;
                t = l_136(t);
                y_9 = t;
                t = b_15;
                t = l_136(t);
                z_9 = t;
                t = a_15;
                t = j_136(t);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_9, y_9, z_9, a_10);
                x_0 = t;
                t = SSLsetAnnotations(x_0, k_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  d_15 = ATgetArgument(t, 0);
                  e_15 = ATgetArgument(t, 1);
                  b_15 = ATgetArgument(t, 2);
                  a_15 = ATgetArgument(t, 3);
                  {
                    ATerm s_10 = NULL,z_10 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,c_1 = NULL;
                    t = SSLgetAnnotations(c_15);
                    s_10 = t;
                    t = d_15;
                    t = l_136(t);
                    z_10 = t;
                    t = e_15;
                    t = l_136(t);
                    d_11 = t;
                    t = b_15;
                    t = l_136(t);
                    e_11 = t;
                    t = a_15;
                    t = j_136(t);
                    f_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, z_10, d_11, e_11, f_11);
                    c_1 = t;
                    t = SSLsetAnnotations(c_1, s_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      d_15 = ATgetArgument(t, 0);
                      e_15 = ATgetArgument(t, 1);
                      b_15 = ATgetArgument(t, 2);
                      {
                        ATerm l_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(c_15);
                        l_12 = t;
                        t = d_15;
                        t = l_136(t);
                        v_12 = t;
                        t = e_15;
                        t = l_136(t);
                        w_12 = t;
                        t = b_15;
                        t = l_136(t);
                        x_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, v_12, w_12, x_12);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, l_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_15 = ATgetArgument(t, 0);
                          e_15 = ATgetArgument(t, 1);
                          {
                            ATerm h_13 = NULL,k_13 = NULL,l_13 = NULL,f_1 = NULL;
                            t = SSLgetAnnotations(c_15);
                            h_13 = t;
                            t = d_15;
                            t = l_136(t);
                            k_13 = t;
                            t = e_15;
                            t = j_136(t);
                            l_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, k_13, l_13);
                            f_1 = t;
                            t = SSLsetAnnotations(f_1, h_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_15 = ATgetArgument(t, 0);
                              e_15 = ATgetArgument(t, 1);
                              {
                                ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,i_1 = NULL;
                                t = SSLgetAnnotations(c_15);
                                v_13 = t;
                                t = d_15;
                                t = l_136(t);
                                y_13 = t;
                                t = e_15;
                                t = j_136(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, y_13, z_13);
                                i_1 = t;
                                t = SSLsetAnnotations(i_1, v_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_15 = ATgetArgument(t, 0);
                                  e_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_14 = NULL,m_15 = NULL,n_15 = NULL,m_1 = NULL;
                                    t = SSLgetAnnotations(c_15);
                                    q_14 = t;
                                    t = d_15;
                                    t = l_136(t);
                                    m_15 = t;
                                    t = e_15;
                                    t = j_136(t);
                                    n_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_15, n_15);
                                    m_1 = t;
                                    t = SSLsetAnnotations(m_1, q_14);
                                  }
                                }
                              else
                                {
                                  ATerm z_15 = NULL,c_16 = NULL,d_16 = NULL,t_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      d_15 = ATgetArgument(t, 0);
                                      e_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(c_15);
                                  z_15 = t;
                                  t = d_15;
                                  t = l_136(t);
                                  c_16 = t;
                                  t = e_15;
                                  t = j_136(t);
                                  d_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, c_16, d_16);
                                  t_1 = t;
                                  t = SSLsetAnnotations(t_1, z_15);
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
ATerm dynrule_sargs_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL;
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = p_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_18 = ATgetArgument(t, 0);
          s_16 = ATgetArgument(t, 1);
          {
            ATerm n_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_16;
    }
  else
    {
      t = h_18;
      {
        ATerm q_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                p_16 = ATgetArgument(t, 0);
                {
                  ATerm v_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_18);
            t = p_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_18 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm a_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = s_16;
          }
        else
          {
            t = q_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                p_16 = ATgetArgument(t, 0);
                {
                  ATerm c_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = p_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_19 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm f_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = s_16;
          }
      }
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_17 = ATgetArgument(t, 0);
          {
            ATerm i_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_19);
      t = q_17;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_17;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_18 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_19);
      t = e_18;
    }
  else
    {
      t = k_19;
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
ATerm Bind7_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm n_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_19 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          {
            ATerm r_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = g_17;
      t = map_1_0(o_0, t);
    }
  else
    {
      t = n_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm s_19 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          {
            ATerm t_19 = ATgetArgument(t, 2);
          }
          {
            ATerm v_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_17;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm t_18 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_18 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
          {
            ATerm a_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_19);
      t = t_18;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_SDefT_4))
        {
          t_18 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
          {
            ATerm c_20 = ATgetArgument(t, 2);
          }
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = t_18;
    }
  return(t);
}
static ATerm j_10 (ATerm k_29, ATerm j_29, ATerm t)
{
  t = k_29;
  t = map_1_0(z_0, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(r_1, c_17, d_17, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      if((h_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm w_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(z_1, w_17, a_18, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      if((b_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      if((l_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm y_163 (ATerm), ATerm z_163 (ATerm), ATerm a_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_164 (ATerm), ATerm t)
{
  static ATerm m_21 (ATerm t);
  static ATerm m_21 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
    s_20 = t;
    {
      ATerm f_20 = t;
      int g_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_163(t);
          LocalPopChoice(g_20);
        }
      else
        {
          t = f_20;
          t = (ATerm) ATempty;
        }
    }
    q_20 = t;
    t = s_20;
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_20 = NULL,n_16 = NULL,t_16 = NULL;
          t = z_163(t);
          v_20 = t;
          t = s_20;
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              ATerm i_16 = NULL;
              t = m_21(t);
              i_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_16, v_20);
              t = i_11(b_164, i_16, v_20, t);
              return(t);
            }
            t = a_164(a_1, m_21, g_1, t);
          }
          t_16 = t;
          t = SSL_explode_term(t_16);
          if(match_cons(t, sym__2))
            {
              ATerm j_20 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_16;
          t = foldr_3_0(k_1, o_1, _id, t);
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          {
            ATerm j_17 = NULL;
            t = SSL_explode_term(s_20);
            if(match_cons(t, sym__2))
              {
                ATerm k_20 = ATgetArgument(t, 0);
                j_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_17;
            t = foldr_3_0(u_1, y_1, m_21, t);
          }
        }
    }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
    t = w_11(a_2, q_20, r_20, t);
    return(t);
  }
  t = m_21(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if(match_cons(l_20, sym_SVar_1))
        {
          t_21 = ATgetArgument(l_20, 0);
        }
      else
        _fail(t);
      w_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_21;
  t = foldr_3_0(e_2, f_2, g_2, t);
  a_22 = t;
  t = x_21;
  t = foldr_3_0(h_2, i_2, j_2, t);
  e_22 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_21, (ATerm) ATmakeAppl(sym__2, a_22, e_22)));
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
      l_22 = t;
      if(match_cons(t, sym_Let_2))
        {
          m_22 = ATgetArgument(t, 0);
          n_22 = ATgetArgument(t, 1);
          t = l_22;
          t = j_10(m_22, n_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              m_22 = ATgetArgument(t, 0);
              n_22 = ATgetArgument(t, 1);
              o_22 = ATgetArgument(t, 2);
              t = n_22;
              t = map_1_0(k_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  m_22 = ATgetArgument(t, 0);
                  n_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, m_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_22 = ATgetArgument(t, 0);
                      n_22 = ATgetArgument(t, 1);
                      o_22 = ATgetArgument(t, 2);
                      p_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_22;
                  t = map_1_0(l_2, t);
                }
            }
        }
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm o_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = o_20;
            t = dynrule_sargs_1_0(m_2, t);
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym__2))
        {
          f_24 = ATgetArgument(w_20, 0);
          {
            ATerm x_20 = ATgetArgument(w_20, 1);
          }
        }
      else
        _fail(t);
      if((f_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(h_22, i_22, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(j_22, k_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = j_23;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_23;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_23 = ATgetArgument(t, 0);
          {
            ATerm h_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = v_23;
    }
  else
    {
      t = f_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_23;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = map_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_24 = ATgetArgument(t, 0);
          {
            ATerm k_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_21);
      t = a_24;
    }
  else
    {
      t = i_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_24;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(b_2, c_2, sboundin_3_0, d_2, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm z_165 (ATerm), ATerm t)
{
  static ATerm t_36 (ATerm t);
  static ATerm t_36 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,i_35 = NULL,m_35 = NULL,p_35 = NULL,q_35 = NULL,n_2 = NULL;
        t = z_165(t);
        q_35 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            m_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_35);
        h_35 = t;
        t = m_35;
        t = Cons_2_0(_id, t_36, t);
        p_35 = t;
        t = (ATerm) ATinsert(CheckATermList(p_35), i_35);
        n_2 = t;
        t = SSLsetAnnotations(n_2, h_35);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
          s_36 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_36 = ATgetFirst((ATermList) t);
              r_36 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm z_19 = NULL,e_20 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(s_36);
                z_19 = t;
                t = r_36;
                t = t_36(t);
                e_20 = t;
                t = (ATerm) ATinsert(CheckATermList(e_20), q_36);
                o_2 = t;
                t = SSLsetAnnotations(o_2, z_19);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_36;
            }
        }
      }
    return(t);
  }
  t = t_36(t);
  return(t);
}
static ATerm n_47 (ATerm g_39, ATerm h_39, ATerm t)
{
  t = g_39;
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,f_4 = NULL;
        q_39 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_39 = ATgetFirst((ATermList) t);
            p_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_39);
        j_39 = t;
        t = p_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_39), o_39);
        f_4 = t;
        t = SSLsetAnnotations(f_4, j_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, g_39);
  return(t);
}
static ATerm p_47 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm t)
{
  ATerm x_39 = NULL,b_40 = NULL;
  t = SSL_explode_string(r_39);
  t = escape_chars_1_0(t_2, t);
  b_40 = t;
  t = SSL_implode_string(b_40);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, x_39, s_39);
  return(t);
}
static ATerm q_47 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = n_40;
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL,s_40 = NULL,v_40 = NULL,w_40 = NULL,h_4 = NULL;
        w_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_40 = ATgetFirst((ATermList) t);
            v_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_40);
        q_40 = t;
        t = v_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_40), s_40);
        h_4 = t;
        t = SSLsetAnnotations(h_4, q_40);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, n_40);
  return(t);
}
static ATerm r_47 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm e_41 = NULL;
  t = x_40;
  {
    ATerm v_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_b_22;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_d_22;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_f_22;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_g_22;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_q_22;
                      }
                  }
              }
          }
        LocalPopChoice(z_21);
      }
    else
      {
        t = v_21;
        {
          ATerm g_41 = NULL;
          t = SSL_explode_string(x_40);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_22 = ATgetFirst((ATermList) t);
              if(((ATgetType(r_22) != AT_INT) || (ATgetInt((ATermInt) r_22) != 39)))
                _fail(t);
              {
                ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                  {
                    g_41 = ATgetFirst((ATermList) s_22);
                    {
                      ATerm t_22 = (ATerm) ATgetNext((ATermList) s_22);
                      if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                        {
                          ATerm u_22 = ATgetFirst((ATermList) t_22);
                          if(((ATgetType(u_22) != AT_INT) || (ATgetInt((ATermInt) u_22) != 39)))
                            _fail(t);
                          {
                            ATerm v_22 = (ATerm) ATgetNext((ATermList) t_22);
                            if(((ATgetType(v_22) != AT_LIST) || !(ATisEmpty(v_22))))
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
          t = g_41;
        }
      }
  }
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, e_41);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_40 = ATgetFirst((ATermList) t);
      e_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_40;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_40), term_x_22), term_w_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(e_40), term_w_22), term_w_22);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_40), term_y_22), term_w_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_40), term_z_22), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_20 = ATgetFirst((ATermList) t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_20;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_20), term_x_22), term_w_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_20), term_w_22), term_w_22);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_20), term_y_22), term_w_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(z_20), term_z_22), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm i_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, n_42), i_42));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_42 = NULL,w_42 = NULL;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, w_42), p_42));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, s_45), r_45));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, x_45), w_45));
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_46 = NULL,x_46 = NULL,q_21 = NULL;
  h_46 = t;
  t = SSL_explode_term(h_46);
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            x_46 = ATgetFirst((ATermList) k_23);
            {
              ATerm l_23 = (ATerm) ATgetNext((ATermList) k_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_46);
  if(match_cons(t, sym__2))
    {
      ATerm m_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_23 = ATgetArgument(t, 1);
        if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
          {
            ATerm o_23 = ATgetFirst((ATermList) n_23);
            ATerm p_23 = (ATerm) ATgetNext((ATermList) n_23);
            if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
              {
                q_21 = ATgetFirst((ATermList) p_23);
                {
                  ATerm q_23 = (ATerm) ATgetNext((ATermList) p_23);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_23, (ATerm) ATinsert(ATinsert(ATempty, q_21), x_46));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,r_41 = NULL,u_41 = NULL;
  m_41 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      r_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
      {
        ATerm p_20 = NULL,t_20 = NULL;
        t = SSL_explode_string(r_41);
        t = escape_chars_1_0(u_2, t);
        t_20 = t;
        t = SSL_implode_string(t_20);
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_20), u_41);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          r_41 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, r_41));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              r_41 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, r_41));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  r_41 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, r_41));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      r_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, r_41));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          r_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              r_41 = ATgetArgument(t, 0);
                              u_41 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_41), u_41);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  r_41 = ATgetArgument(t, 0);
                                  u_41 = ATgetArgument(t, 1);
                                  {
                                    static ATerm y_2 (ATerm t);
                                    static ATerm y_2 (ATerm t)
                                    {
                                      t = u_41;
                                      return(t);
                                    }
                                    t = r_41;
                                    t = foldr_2_0(y_2, z_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      r_41 = ATgetArgument(t, 0);
                                      t = r_41;
                                      t = foldr_2_0(a_3, d_3, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          r_41 = ATgetArgument(t, 0);
                                          u_41 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATinsert(CheckATermList(u_41), r_41));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              r_41 = ATgetArgument(t, 0);
                                              t = r_41;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  i_41 = ATgetFirst((ATermList) t);
                                                  j_41 = (ATerm) ATgetNext((ATermList) t);
                                                  t = j_41;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm r_23 = t;
                                                      int s_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = n_47(r_41, m_41, t);
                                                          LocalPopChoice(s_23);
                                                        }
                                                      else
                                                        {
                                                          t = r_23;
                                                          t = i_41;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = n_47(r_41, m_41, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = n_47(r_41, m_41, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_t_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      r_41 = ATgetArgument(t, 0);
                                                      u_41 = ATgetArgument(t, 1);
                                                      t = u_41;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          h_41 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, h_41), r_41));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          r_41 = ATgetArgument(t, 0);
                                                          t = r_41;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              r_41 = ATgetArgument(t, 0);
                                                              u_41 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, r_41, u_41, term_x_23);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  r_41 = ATgetArgument(t, 0);
                                                                  u_41 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, r_41, u_41, term_x_23);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      r_41 = ATgetArgument(t, 0);
                                                                      u_41 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, r_41, (ATerm)ATempty, u_41);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          r_41 = ATgetArgument(t, 0);
                                                                          u_41 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_41, r_41);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              r_41 = ATgetArgument(t, 0);
                                                                              u_41 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, r_41, u_41, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  r_41 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, r_41, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      r_41 = ATgetArgument(t, 0);
                                                                                      u_41 = ATgetArgument(t, 1);
                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_41, u_41, (ATerm)ATempty, l_41);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          r_41 = ATgetArgument(t, 0);
                                                                                          u_41 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, r_41, (ATerm)ATempty, (ATerm)ATempty, u_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              r_41 = ATgetArgument(t, 0);
                                                                                              u_41 = ATgetArgument(t, 1);
                                                                                              l_41 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_41, u_41, (ATerm)ATempty, l_41);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  r_41 = ATgetArgument(t, 0);
                                                                                                  u_41 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_41, (ATerm)ATempty, (ATerm)ATempty, u_41);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      r_41 = ATgetArgument(t, 0);
                                                                                                      u_41 = ATgetArgument(t, 1);
                                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, r_41, u_41, (ATerm)ATempty, l_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          r_41 = ATgetArgument(t, 0);
                                                                                                          u_41 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_41, (ATerm)ATempty, (ATerm)ATempty, u_41);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm y_23 = t;
                                                                                                          int z_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm b_24 = ATgetArgument(t, 0);
                                                                                                                  u_41 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(z_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, u_41);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_23;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  r_41 = ATgetArgument(t, 0);
                                                                                                                  u_41 = ATgetArgument(t, 1);
                                                                                                                  t = p_47(r_41, u_41, m_41, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      r_41 = ATgetArgument(t, 0);
                                                                                                                      u_41 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm e_3 (ATerm t);
                                                                                                                        static ATerm e_3 (ATerm t)
                                                                                                                        {
                                                                                                                          t = u_41;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = r_41;
                                                                                                                        t = foldr_2_0(e_3, q_3, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          r_41 = ATgetArgument(t, 0);
                                                                                                                          t = r_41;
                                                                                                                          t = foldr_2_0(s_3, v_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              r_41 = ATgetArgument(t, 0);
                                                                                                                              t = r_41;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  i_41 = ATgetFirst((ATermList) t);
                                                                                                                                  j_41 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = j_41;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm c_24 = t;
                                                                                                                                      int d_24 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = q_47(r_41, m_41, t);
                                                                                                                                          LocalPopChoice(d_24);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = c_24;
                                                                                                                                          t = i_41;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_47(r_41, m_41, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_47(r_41, m_41, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  r_41 = ATgetArgument(t, 0);
                                                                                                                                  u_41 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm e_46 = NULL;
                                                                                                                                    t = u_41;
                                                                                                                                    t = foldr_2_0(w_3, z_3, t);
                                                                                                                                    e_46 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, r_41, e_46);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      r_41 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, r_41, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          r_41 = ATgetArgument(t, 0);
                                                                                                                                          t = r_47(r_41, m_41, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm e_24 = t;
                                                                                                                                          int j_24 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  r_41 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm l_24 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  l_41 = ATgetArgument(t, 2);
                                                                                                                                                  k_41 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(j_24);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, r_41, l_41, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_41), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_24;
                                                                                                                                              {
                                                                                                                                                ATerm o_24 = t;
                                                                                                                                                int p_24 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        r_41 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm q_24 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        l_41 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(p_24);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, r_41, l_41, term_t_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = o_24;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        r_41 = ATgetArgument(t, 0);
                                                                                                                                                        u_41 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, r_41, u_41, term_t_24);
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
  ATerm w_47 = NULL,x_47 = NULL,c_48 = NULL;
  x_47 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      c_48 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
      {
        ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
        t = x_47;
        t = new_0_0(t);
        q_48 = t;
        t = new_0_0(t);
        r_48 = t;
        t = new_0_0(t);
        s_48 = t;
        t = new_0_0(t);
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_48), s_48), r_48), q_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_48), (ATerm) ATmakeAppl(sym_Var_1, s_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, c_48, (ATerm)ATmakeAppl(sym_Var_1, q_48), (ATerm) ATmakeAppl(sym_Var_1, r_48)), (ATerm) ATmakeAppl(sym_BAM_3, w_47, (ATerm)ATmakeAppl(sym_Var_1, s_48), (ATerm) ATmakeAppl(sym_Var_1, t_48)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_48)), (ATerm) ATmakeAppl(sym_Var_1, r_48))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_48 = ATgetArgument(t, 0);
          {
            ATerm w_48 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL;
            t = x_47;
            t = new_0_0(t);
            e_49 = t;
            t = c_48;
            {
              static ATerm a_4 (ATerm t);
              static ATerm a_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_48 != NULL) && (w_48 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_48 = ATgetArgument(t, 0);
                    if(((c_49 != NULL) && (c_49 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      c_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_49);
                return(t);
              }
              t = oncetd_1_0(a_4, t);
            }
            f_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_49)), not_null(w_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_49)), (ATerm) ATmakeAppl(sym_Build_1, f_49))));
          }
        }
      else
        {
          ATerm h_49 = NULL,i_49 = NULL,l_49 = NULL,r_49 = NULL,s_49 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              c_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_47;
          t = new_0_0(t);
          l_49 = t;
          t = new_0_0(t);
          r_49 = t;
          t = c_48;
          {
            static ATerm c_4 (ATerm t);
            static ATerm c_4 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((h_49 != NULL) && (h_49 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_49 = ATgetArgument(t, 0);
                  if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    i_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_49);
              return(t);
            }
            t = oncetd_1_0(c_4, t);
          }
          s_49 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_49), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_49)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_49))))), (ATerm)ATmakeAppl(sym_Var_1, l_49), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_49)), not_null(h_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm a_50 = NULL,e_50 = NULL;
  a_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
        t = a_50;
        t = new_0_0(t);
        n_50 = t;
        t = e_50;
        {
          static ATerm d_4 (ATerm t);
          static ATerm d_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_50 != NULL) && (k_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_50 = ATgetArgument(t, 0);
                if(((m_50 != NULL) && (m_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_50), k_50);
            return(t);
          }
          t = pat_td_1_0(d_4, t);
        }
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_50))))));
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
              t = a_50;
              t = new_0_0(t);
              r_50 = t;
              t = e_50;
              {
                static ATerm i_4 (ATerm t);
                static ATerm i_4 (ATerm t)
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
                t = pat_td_1_0(i_4, t);
              }
              s_50 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_50)), not_null(q_50))));
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              {
                ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
                t = a_50;
                t = new_0_0(t);
                w_50 = t;
                t = e_50;
                {
                  static ATerm j_4 (ATerm t);
                  static ATerm j_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_50 = ATgetArgument(t, 0);
                        if(((u_50 != NULL) && (u_50 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_50 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_50);
                    return(t);
                  }
                  t = pat_td_1_0(j_4, t);
                }
                x_50 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_50)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_50)), not_null(v_50)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm c_176 (ATerm), ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_176(t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
        h_54 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_54 = ATgetArgument(t, 0);
            j_54 = ATgetArgument(t, 1);
            {
              ATerm y_21 = NULL,c_22 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(h_54);
              y_21 = t;
              t = j_54;
              {
                static ATerm m_4 (ATerm t);
                static ATerm m_4 (ATerm t)
                {
                  t = pat_td_1_0(c_176, t);
                  return(t);
                }
                t = fetch_1_0(m_4, t);
              }
              c_22 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_54, c_22);
              k_4 = t;
              t = SSLsetAnnotations(k_4, y_21);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_54 = ATgetArgument(t, 0);
                j_54 = ATgetArgument(t, 1);
                {
                  ATerm h_25 = t;
                  int i_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_23 = NULL,e_23 = NULL,l_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      b_23 = t;
                      t = j_54;
                      t = pat_td_1_0(c_176, t);
                      e_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_54, e_23);
                      l_4 = t;
                      t = SSLsetAnnotations(l_4, b_23);
                      LocalPopChoice(i_25);
                    }
                  else
                    {
                      t = h_25;
                      {
                        ATerm i_24 = NULL,n_24 = NULL,n_4 = NULL;
                        t = SSLgetAnnotations(h_54);
                        i_24 = t;
                        t = i_54;
                        t = pat_td_1_0(c_176, t);
                        n_24 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, n_24, j_54);
                        n_4 = t;
                        t = SSLsetAnnotations(n_4, i_24);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_54 = ATgetArgument(t, 0);
                    j_54 = ATgetArgument(t, 1);
                    g_54 = ATgetArgument(t, 2);
                    {
                      ATerm e_25 = NULL,p_25 = NULL,o_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      e_25 = t;
                      t = g_54;
                      {
                        static ATerm q_4 (ATerm t);
                        static ATerm q_4 (ATerm t)
                        {
                          t = pat_td_1_0(c_176, t);
                          return(t);
                        }
                        t = fetch_1_0(q_4, t);
                      }
                      p_25 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_54, j_54, p_25);
                      o_4 = t;
                      t = SSLsetAnnotations(o_4, e_25);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_54 = ATgetArgument(t, 0);
                        j_54 = ATgetArgument(t, 1);
                        g_54 = ATgetArgument(t, 2);
                        {
                          ATerm h_26 = NULL,x_26 = NULL,p_4 = NULL;
                          t = SSLgetAnnotations(h_54);
                          h_26 = t;
                          t = g_54;
                          {
                            static ATerm w_4 (ATerm t);
                            static ATerm w_4 (ATerm t)
                            {
                              t = pat_td_1_0(c_176, t);
                              return(t);
                            }
                            t = fetch_1_0(w_4, t);
                          }
                          x_26 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_54, j_54, x_26);
                          p_4 = t;
                          t = SSLsetAnnotations(p_4, h_26);
                        }
                      }
                    else
                      {
                        ATerm i_27 = NULL,l_27 = NULL,r_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_54 = ATgetArgument(t, 0);
                            j_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_54);
                        i_27 = t;
                        t = j_54;
                        t = pat_td_1_0(c_176, t);
                        l_27 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_54, l_27);
                        r_4 = t;
                        t = SSLsetAnnotations(r_4, i_27);
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
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_54 = NULL,u_54 = NULL,w_54 = NULL,x_54 = NULL;
        t = r_54;
        t = new_0_0(t);
        w_54 = t;
        t = s_54;
        {
          static ATerm y_4 (ATerm t);
          static ATerm y_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_54 = ATgetArgument(t, 0);
                if(((u_54 != NULL) && (u_54 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_54);
            return(t);
          }
          t = pat_td_1_0(y_4, t);
        }
        x_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_54)), not_null(t_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_54)))), (ATerm) ATmakeAppl(sym_Build_1, x_54)));
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_54 = NULL,a_55 = NULL,b_55 = NULL;
              t = r_54;
              t = new_0_0(t);
              a_55 = t;
              t = s_54;
              {
                static ATerm z_4 (ATerm t);
                static ATerm z_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_54 != NULL) && (y_54 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_55);
                  return(t);
                }
                t = pat_td_1_0(z_4, t);
              }
              b_55 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_55)))), (ATerm) ATmakeAppl(sym_Build_1, b_55)));
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              {
                ATerm c_55 = NULL,d_55 = NULL,f_55 = NULL,g_55 = NULL;
                t = r_54;
                t = new_0_0(t);
                f_55 = t;
                t = s_54;
                {
                  static ATerm a_5 (ATerm t);
                  static ATerm a_5 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_55 != NULL) && (c_55 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_55 = ATgetArgument(t, 0);
                        if(((d_55 != NULL) && (d_55 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_55);
                    return(t);
                  }
                  t = pat_td_1_0(a_5, t);
                }
                g_55 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_55), not_null(d_55), (ATerm) ATmakeAppl(sym_Var_1, f_55))), (ATerm) ATmakeAppl(sym_Build_1, g_55)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,y_55 = NULL,z_55 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_55, z_55);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_55 = ATgetArgument(t, 0);
          t = y_55;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_55 = ATgetFirst((ATermList) t);
              r_55 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_55, (ATerm) ATmakeAppl(sym_LChoices_1, r_55));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_55 = ATgetArgument(t, 0);
              t = y_55;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_55 = ATgetFirst((ATermList) t);
                  r_55 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_55, (ATerm) ATmakeAppl(sym_Choices_1, r_55));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_55 = ATgetArgument(t, 0);
                  t = y_55;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_55 = ATgetFirst((ATermList) t);
                      r_55 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_55, (ATerm) ATmakeAppl(sym_Seqs_1, r_55));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_x_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_55 = ATgetArgument(t, 0);
                      z_55 = ATgetArgument(t, 1);
                      s_55 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_55, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, s_55), y_55)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          y_55 = ATgetArgument(t, 0);
                          z_55 = ATgetArgument(t, 1);
                          s_55 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, s_55)), y_55), (ATerm) ATmakeAppl(sym_Build_1, z_55)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              y_55 = ATgetArgument(t, 0);
                              z_55 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_55, (ATerm) ATmakeAppl(sym_Match_1, z_55));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  y_55 = ATgetArgument(t, 0);
                                  z_55 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_55), z_55);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      y_55 = ATgetArgument(t, 0);
                                      z_55 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_55), y_55);
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
static ATerm b_5 (ATerm t)
{
  ATerm q_25 = t;
  if((PushChoice() == 0))
    {
      ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,v_5 = NULL;
      v_57 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_57);
      t_57 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_57);
      v_5 = t;
      t = SSLsetAnnotations(v_5, t_57);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_25;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_57 = ATgetFirst((ATermList) t);
      x_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_57, x_57);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(match_cons(s_25, sym__2))
        {
          y_57 = ATgetArgument(s_25, 0);
          z_57 = ATgetArgument(s_25, 1);
        }
      else
        _fail(t);
      {
        ATerm t_25 = ATgetArgument(t, 1);
        if(match_cons(t_25, sym__2))
          {
            a_58 = ATgetArgument(t_25, 0);
            d_58 = ATgetArgument(t_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_58), y_57), (ATerm) ATinsert(CheckATermList(d_58), z_57));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_58 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,l_58 = NULL,m_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          h_58 = ATgetArgument(u_25, 0);
          i_58 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            l_58 = ATgetArgument(v_25, 0);
            m_58 = ATgetArgument(v_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_58), h_58), (ATerm) ATinsert(CheckATermList(m_58), i_58));
  return(t);
}
static ATerm w_10 (ATerm x_105, ATerm y_105, ATerm z_105, ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,w_5 = NULL;
  t = z_105;
  t = fetch_1_0(b_5, t);
  t = z_105;
  t = genzip_4_0(c_5, d_5, g_5, LiftPrimArg_0_0, t);
  s_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_57);
  i_57 = t;
  t = j_57;
  t = concat_0_0(t);
  q_57 = t;
  t = k_57;
  t = genzip_4_0(h_5, i_5, j_5, _id, t);
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
  w_5 = t;
  t = SSLsetAnnotations(w_5, i_57);
  if(match_cons(t, sym__2))
    {
      f_57 = ATgetArgument(t, 0);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(match_cons(w_25, sym__2))
          {
            g_57 = ATgetArgument(w_25, 0);
            h_57 = ATgetArgument(w_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_57, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_57), (ATerm) ATmakeAppl(sym_CallT_3, x_105, y_105, h_57)));
  return(t);
}
static ATerm u_59 (ATerm v_58, ATerm t)
{
  ATerm x_58 = NULL;
  t = v_58;
  {
    ATerm x_25 = t;
    if((PushChoice() == 0))
      {
        ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,z_5 = NULL;
        a_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_59);
        y_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_58);
        z_5 = t;
        t = SSLsetAnnotations(z_5, y_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_25;
      }
  }
  t = new_0_0(t);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_58)))), (ATerm) ATmakeAppl(sym_Var_1, x_58)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_59 = NULL,p_59 = NULL;
  b_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_59 = ATgetArgument(t, 0);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_59(b_59, t);
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Var_1, p_59)));
          }
      }
    }
  else
    {
      t = u_59(b_59, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_26 = t;
  if((PushChoice() == 0))
    {
      ATerm e_29 = NULL,f_29 = NULL,n_29 = NULL,b_6 = NULL;
      n_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_29);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_29);
      b_6 = t;
      t = SSLsetAnnotations(b_6, e_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_26;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_29 = NULL,q_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_29 = ATgetFirst((ATermList) t);
      q_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_29, q_29);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          s_29 = ATgetArgument(b_26, 0);
          t_29 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            u_29 = ATgetArgument(c_26, 0);
            v_29 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_29), s_29), (ATerm) ATinsert(CheckATermList(v_29), t_29));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm c_30 = NULL,g_30 = NULL,j_30 = NULL,k_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          c_30 = ATgetArgument(d_26, 0);
          g_30 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            j_30 = ATgetArgument(e_26, 0);
            k_30 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_30), c_30), (ATerm) ATinsert(CheckATermList(k_30), g_30));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      ATerm s_31 = NULL,t_31 = NULL,x_31 = NULL,d_6 = NULL;
      x_31 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_31);
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_31);
      d_6 = t;
      t = SSLsetAnnotations(d_6, s_31);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm c_32 = NULL,f_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_32, f_32);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym__2))
        {
          h_32 = ATgetArgument(g_26, 0);
          i_32 = ATgetArgument(g_26, 1);
        }
      else
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(match_cons(i_26, sym__2))
          {
            j_32 = ATgetArgument(i_26, 0);
            k_32 = ATgetArgument(i_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_32), h_32), (ATerm) ATinsert(CheckATermList(k_32), i_32));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_25;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_32 = NULL,q_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_32 = ATgetFirst((ATermList) t);
      q_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_32, q_32);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          v_32 = ATgetArgument(j_26, 0);
          w_32 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            x_32 = ATgetArgument(k_26, 0);
            z_32 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_32), v_32), (ATerm) ATinsert(CheckATermList(z_32), w_32));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  a_64 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
      z_63 = ATgetArgument(t, 2);
      {
        ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,c_6 = NULL;
        t = z_63;
        t = fetch_1_0(k_5, t);
        t = z_63;
        t = genzip_4_0(n_5, o_5, p_5, LiftPrimArg_0_0, t);
        d_29 = t;
        if(match_cons(t, sym__2))
          {
            v_28 = ATgetArgument(t, 0);
            a_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_29);
        u_28 = t;
        t = v_28;
        t = concat_0_0(t);
        b_29 = t;
        t = a_29;
        t = genzip_4_0(q_5, r_5, s_5, _id, t);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
        c_6 = t;
        t = SSLsetAnnotations(c_6, u_28);
        if(match_cons(t, sym__2))
          {
            r_28 = ATgetArgument(t, 0);
            {
              ATerm l_26 = ATgetArgument(t, 1);
              if(match_cons(l_26, sym__2))
                {
                  s_28 = ATgetArgument(l_26, 0);
                  t_28 = ATgetArgument(l_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_28), (ATerm) ATmakeAppl(sym_PrimT_3, b_64, c_64, t_28)));
      }
    }
  else
    {
      ATerm a_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,q_31 = NULL,r_31 = NULL,e_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_64 = ATgetArgument(t, 0);
          c_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_64;
      t = fetch_1_0(t_5, t);
      t = c_64;
      t = genzip_4_0(u_5, x_5, y_5, LiftPrimArg_0_0, t);
      r_31 = t;
      if(match_cons(t, sym__2))
        {
          i_31 = ATgetArgument(t, 0);
          j_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_31);
      f_31 = t;
      t = i_31;
      t = concat_0_0(t);
      k_31 = t;
      t = j_31;
      t = genzip_4_0(a_6, f_6, g_6, _id, t);
      q_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, q_31);
      e_6 = t;
      t = SSLsetAnnotations(e_6, f_31);
      if(match_cons(t, sym__2))
        {
          a_31 = ATgetArgument(t, 0);
          {
            ATerm m_26 = ATgetArgument(t, 1);
            if(match_cons(m_26, sym__2))
              {
                d_31 = ATgetArgument(m_26, 0);
                e_31 = ATgetArgument(m_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_31, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_31), (ATerm) ATmakeAppl(sym_PrimT_3, b_64, (ATerm)ATempty, e_31)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm t)
{
  static ATerm f_64 (ATerm t);
  static ATerm f_64 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_143(t);
        t = f_64(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = q_143(t);
      }
    return(t);
  }
  t = f_64(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  a_65 = t;
  if(match_cons(t, sym_Con_3))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      z_64 = ATgetArgument(t, 2);
      {
        ATerm y_33 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(a_65);
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_64, y_64, z_64);
        j_6 = t;
        t = SSLsetAnnotations(j_6, y_33);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = a_65;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_26;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,y_66 = NULL,a_67 = NULL;
  v_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
      u_66 = ATgetArgument(t, 2);
      {
        ATerm f_35 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(v_66);
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_66, a_67, u_66);
        l_6 = t;
        t = SSLsetAnnotations(l_6, f_35);
      }
    }
  else
    {
      ATerm h_36 = NULL,m_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          y_66 = ATgetArgument(t, 0);
          a_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_66);
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, y_66, a_67);
      m_6 = t;
      t = SSLsetAnnotations(m_6, h_36);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,m_67 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_67;
  if(match_cons(t, sym_StratRule_3))
    {
      j_67 = ATgetArgument(t, 0);
      k_67 = ATgetArgument(t, 1);
      m_67 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_67), (ATerm) ATmakeAppl(sym_Where_1, m_67)), j_67));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_67 = ATgetArgument(t, 0);
          k_67 = ATgetArgument(t, 1);
          m_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_67;
      t = pureterm_0_0(t);
      t = k_67;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_67)), (ATerm) ATmakeAppl(sym_Where_1, m_67)), (ATerm) ATmakeAppl(sym_Match_1, j_67)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_138 (ATerm), ATerm t)
{
  static ATerm a_68 (ATerm t);
  static ATerm a_68 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = SRTS_one(a_68, t);
      }
    return(t);
  }
  t = a_68(t);
  return(t);
}
static ATerm a_11 (ATerm k_101, ATerm l_101, ATerm m_101, ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,i_68 = NULL,j_68 = NULL;
  t = new_0_0(t);
  f_68 = t;
  t = k_101;
  {
    static ATerm k_6 (ATerm t);
    static ATerm k_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_26 = ATgetArgument(t, 0);
          if(match_cons(y_26, sym_Var_1))
            {
              if(((e_68 != NULL) && (e_68 != ATgetArgument(y_26, 0))))
                _fail(ATgetArgument(y_26, 0));
              else
                e_68 = ATgetArgument(y_26, 0);
            }
          else
            _fail(t);
          if(((c_68 != NULL) && (c_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_68 = ATgetArgument(t, 1);
          {
            ATerm z_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, e_68);
      return(t);
    }
    t = oncetd_1_0(k_6, t);
  }
  i_68 = t;
  t = l_101;
  {
    static ATerm n_6 (ATerm t);
    static ATerm n_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_27 = ATgetArgument(t, 0);
          if(match_cons(a_27, sym_Var_1))
            {
              if(((e_68 != NULL) && (e_68 != ATgetArgument(a_27, 0))))
                _fail(ATgetArgument(a_27, 0));
              else
                e_68 = ATgetArgument(a_27, 0);
            }
          else
            _fail(t);
          if(((d_68 != NULL) && (d_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_68 = ATgetArgument(t, 1);
          {
            ATerm b_27 = ATgetArgument(t, 2);
            if(match_cons(b_27, sym_CallT_3))
              {
                if(((b_68 != NULL) && (b_68 != ATgetArgument(b_27, 0))))
                  _fail(ATgetArgument(b_27, 0));
                else
                  b_68 = ATgetArgument(b_27, 0);
                {
                  ATerm e_27 = ATgetArgument(b_27, 1);
                  if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
                    _fail(t);
                }
                {
                  ATerm f_27 = ATgetArgument(b_27, 2);
                  if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_68);
      return(t);
    }
    t = oncetd_1_0(n_6, t);
  }
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_68, j_68, (ATerm) ATmakeAppl(sym_Seq_2, m_101, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(b_68), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_68), not_null(d_68), term_x_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_68)), (ATerm) ATmakeAppl(sym_Var_1, f_68))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,f_69 = NULL,h_69 = NULL,i_69 = NULL;
          f_69 = t;
          if(match_cons(t, sym_SRule_1))
            {
              h_69 = ATgetArgument(t, 0);
              t = h_69;
              if(match_cons(t, sym_Rule_3))
                {
                  b_69 = ATgetArgument(t, 0);
                  c_69 = ATgetArgument(t, 1);
                  d_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_69;
              t = a_11(b_69, c_69, d_69, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_37 = NULL,d_37 = NULL,p_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  h_69 = ATgetArgument(t, 0);
                  i_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_69);
              a_37 = t;
              t = i_69;
              t = desugarRule_0_0(t);
              d_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, h_69, d_37);
              p_6 = t;
              t = SSLsetAnnotations(p_6, a_37);
            }
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_137 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    t = topdown_1_0(p_137, t);
    return(t);
  }
  t = p_137(t);
  t = SRTS_all(o_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = n_27;
    }
  t = repeat_2_0(t_6, _id, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
            n_70 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_70 = ATgetArgument(t, 0);
                p_70 = ATgetArgument(t, 1);
                q_70 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_70;
            t = w_10(o_70, p_70, q_70, t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm c_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = c_28;
                  {
                    ATerm f_28 = t;
                    int g_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(g_28);
                      }
                    else
                      {
                        t = f_28;
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_28 = t;
                              int w_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_70 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_70;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_70 = ATgetArgument(t, 0);
                                      t = z_70;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_70 = ATgetArgument(t, 0);
                                          a_71 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_70, a_71);
                                    }
                                  LocalPopChoice(w_28);
                                }
                              else
                                {
                                  t = q_28;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(p_28);
                            }
                          else
                            {
                              t = o_28;
                              {
                                ATerm x_28 = t;
                                int y_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(y_28);
                                  }
                                else
                                  {
                                    t = x_28;
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
  t = topdown_1_0(q_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL;
  c_72 = t;
  t = SSL_explode_term(c_72);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            b_72 = ATgetFirst((ATermList) z_29);
            {
              ATerm a_30 = (ATerm) ATgetNext((ATermList) z_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_72;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  t = SSL_explode_term(k_37);
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_30 = ATgetArgument(t, 1);
        if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
          {
            ATerm e_30 = ATgetFirst((ATermList) d_30);
            i_37 = (ATerm) ATgetNext((ATermList) d_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_r_21;
  j_37 = t;
  t = SSL_mkterm(j_37, i_37);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  static ATerm f_72 (ATerm t);
  static ATerm f_72 (ATerm t)
  {
    ATerm f_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL,y_71 = NULL,z_71 = NULL;
        w_71 = t;
        t = map_1_0(u_6, t);
        t = w_141(t);
        y_71 = t;
        t = w_71;
        t = map_1_0(v_6, t);
        t = f_72(t);
        z_71 = t;
        t = (ATerm) ATinsert(CheckATermList(z_71), y_71);
        LocalPopChoice(h_30);
      }
    else
      {
        t = f_30;
        t = map_1_0(y_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = f_72(t);
  v_71 = t;
  t = term_r_21;
  u_71 = t;
  t = SSL_mkterm(u_71, v_71);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm g_72 = NULL;
  g_72 = t;
  {
    ATerm i_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
        t = g_72;
        t = new_0_0(t);
        i_72 = t;
        t = new_0_0(t);
        j_72 = t;
        t = new_0_0(t);
        k_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, g_72), (ATerm) ATmakeAppl(sym_Var_1, j_72))), (ATerm) ATmakeAppl(sym_Var_1, k_72)), (ATerm)ATmakeAppl(sym_VarDec_2, i_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), j_72, (ATerm)ATmakeAppl(sym_Var_1, j_72), k_72, (ATerm) ATmakeAppl(sym_Var_1, k_72));
        LocalPopChoice(l_30);
      }
    else
      {
        t = i_30;
        {
          ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
          t = g_72;
          t = new_0_0(t);
          m_72 = t;
          t = new_0_0(t);
          n_72 = t;
          t = new_0_0(t);
          o_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, g_72), (ATerm) ATmakeAppl(sym_Var_1, n_72))), (ATerm) ATmakeAppl(sym_Var_1, o_72)), (ATerm)ATmakeAppl(sym_VarDec_2, m_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), n_72, (ATerm)ATmakeAppl(sym_Var_1, n_72), o_72, (ATerm) ATmakeAppl(sym_Var_1, o_72));
        }
      }
  }
  return(t);
}
static ATerm b_11 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_44, y_44);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      t = SSL_subtr(x_44, y_44);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL;
  if(match_cons(t, sym__2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_72, q_72, (ATerm) ATempty);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm v_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_30 = ATgetArgument(t, 0);
      if(((ATgetType(r_30) != AT_INT) || (ATgetInt((ATermInt) r_30) != 0)))
        _fail(t);
      {
        ATerm s_30 = ATgetArgument(t, 1);
      }
      v_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_72;
  return(t);
}
ATerm copy_1_0 (ATerm a_161 (ATerm), ATerm t)
{
  static ATerm d_7 (ATerm t);
  static ATerm d_7 (ATerm t)
  {
    ATerm y_72 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,i_73 = NULL;
    if(match_cons(t, sym__3))
      {
        y_72 = ATgetArgument(t, 0);
        b_73 = ATgetArgument(t, 1);
        c_73 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_72, term_b_21);
    t = geq_0_0(t);
    t = term_b_21;
    i_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_72, term_b_21);
    t = b_11(y_72, i_73, t);
    d_73 = t;
    t = b_73;
    t = a_161(t);
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_73, b_73, (ATerm) ATinsert(CheckATermList(c_73), e_73));
    return(t);
  }
  t = for_3_0(a_7, c_7, d_7, t);
  return(t);
}
static ATerm c_11 (ATerm a_83, ATerm b_83, ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  t = new_0_0(t);
  o_73 = t;
  t = new_0_0(t);
  p_73 = t;
  t = new_0_0(t);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_83)), (ATerm) ATmakeAppl(sym_Var_1, p_73))), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_83)), (ATerm) ATmakeAppl(sym_Var_1, q_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, o_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), p_73, (ATerm)ATmakeAppl(sym_Var_1, p_73), q_73, (ATerm) ATmakeAppl(sym_Var_1, q_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_73 = NULL,a_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_73 = ATgetFirst((ATermList) t);
      a_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_73;
    }
  else
    {
      t = a_74;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm l_77 (ATerm a_75, ATerm b_75, ATerm f_75, ATerm g_75, ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,q_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,x_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  t = term_b_21;
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_75, term_b_21);
  t = h_12(b_75, d_76, t);
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_76, term_t_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_75 = ATgetFirst((ATermList) t);
      q_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_75;
  t = last_0_0(t);
  m_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_75), n_75), q_75);
  t = genzip_4_0(e_7, h_7, i_7, j_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      s_75 = ATgetArgument(t, 0);
      t_75 = ATgetArgument(t, 1);
      u_75 = ATgetArgument(t, 2);
      v_75 = ATgetArgument(t, 3);
      x_75 = ATgetArgument(t, 4);
      a_76 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_75), u_75), q_75);
  t = concat_0_0(t);
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_75, term_u_30), t_75, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_76), n_75), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_75)), (ATerm) ATmakeAppl(sym_Op_2, a_75, v_75))), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_75)), (ATerm) ATmakeAppl(sym_Op_2, a_75, a_76))), (ATerm) ATmakeAppl(sym_Seqs_1, s_75)))));
  return(t);
}
static ATerm m_77 (ATerm n_76, ATerm o_76, ATerm p_76, ATerm q_76, ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
  t = q_76;
  t = new_0_0(t);
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_76, (ATerm) ATmakeAppl(sym_Var_1, u_76));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_76 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
      x_76 = ATgetArgument(t, 2);
      y_76 = ATgetArgument(t, 3);
      z_76 = ATgetArgument(t, 4);
      a_77 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_76, z_76);
  t = conc_0_0(t);
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, n_76, term_v_30), w_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_77), u_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_76)), (ATerm) ATmakeAppl(sym_Op_2, n_76, y_76))), (ATerm)ATmakeAppl(sym_Op_2, n_76, a_77), (ATerm) ATmakeAppl(sym_Seqs_1, v_76)))));
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      ATerm x_30 = ATgetArgument(t, 1);
      if(((ATgetType(x_30) != AT_LIST) || !(ATisEmpty(x_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
        {
          e_76 = ATgetFirst((ATermList) z_30);
          f_76 = (ATerm) ATgetNext((ATermList) z_30);
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
          {
            g_76 = ATgetFirst((ATermList) h_31);
            h_76 = (ATerm) ATgetNext((ATermList) h_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_76, g_76), (ATerm) ATmakeAppl(sym__2, f_76, h_76));
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  if(match_cons(t, sym__2))
    {
      i_76 = ATgetArgument(t, 0);
      j_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_76), i_76);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  if(match_cons(t, sym__2))
    {
      k_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(k_76, l_76, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL;
  d_77 = t;
  if(match_cons(t, sym__3))
    {
      e_77 = ATgetArgument(t, 0);
      f_77 = ATgetArgument(t, 1);
      g_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_77;
  if(match_string(t, "T"))
    {
      t = g_77;
      if(match_cons(t, sym__2))
        {
          h_77 = ATgetArgument(t, 0);
          i_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_77;
      if(match_int(t, 0))
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_77(e_77, h_77, i_77, d_77, t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              {
                ATerm k_77 = NULL;
                t = d_77;
                t = new_0_0(t);
                k_77 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, e_77, term_u_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_77), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_77)), (ATerm) ATmakeAppl(sym_Op_2, e_77, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_77)), (ATerm) ATmakeAppl(sym_Op_2, e_77, (ATerm) ATempty))), term_x_23))));
              }
            }
        }
      else
        {
          t = l_77(e_77, h_77, i_77, d_77, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = g_77;
      if(match_cons(t, sym__2))
        {
          h_77 = ATgetArgument(t, 0);
          i_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_77(e_77, h_77, i_77, d_77, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_155 (ATerm), ATerm t)
{
  ATerm g_24 = NULL;
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = k_155(t);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    return(t);
  }
  t = fetch_1_0(l_7, t);
  t = not_null(g_24);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm h_24 = NULL,k_24 = NULL,m_24 = NULL;
  t = term_l_17;
  k_24 = t;
  t = (ATerm) ATinsert(ATempty, term_z_31);
  m_24 = t;
  t = SSL_printnl(k_24, m_24);
  t = term_b_21;
  h_24 = t;
  t = SSL_exit(h_24);
  t = (ATerm) ATinsert(ATempty, term_z_31);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL;
  ATerm b_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm h_33 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_33);
      t = k_18;
      t = foldr_3_0(r_7, u_7, v_7, t);
      t = i_18;
      t = foldr_3_0(w_7, x_7, z_7, t);
    }
  else
    {
      t = b_33;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm k_33 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
          {
            ATerm o_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_18;
      t = foldr_3_0(c_8, e_8, i_8, t);
      t = i_18;
      t = foldr_3_0(j_8, l_8, m_8, t);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(o_18, p_18, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(r_18, s_18, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(w_18, x_18, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(z_18, b_19, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      ATerm s_33 = ATgetArgument(t, 1);
      ATerm v_33 = ATgetArgument(t, 2);
      ATerm x_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_24 = NULL;
      static ATerm m_7 (ATerm t);
      static ATerm m_7 (ATerm t)
      {
        ATerm v_24 = NULL,w_24 = NULL;
        v_24 = t;
        {
          ATerm h_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm l_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm q_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_34);
              t = w_24;
              if(((u_24 != NULL) && (u_24 != t)))
                _fail(t);
              else
                u_24 = t;
              t = v_24;
            }
          else
            {
              t = h_34;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm s_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_34 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm v_34 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = w_24;
              if(((u_24 != NULL) && (u_24 != t)))
                _fail(t);
              else
                u_24 = t;
              t = v_24;
            }
        }
        return(t);
      }
      t = fetch_1_0(m_7, t);
      {
        static ATerm n_7 (ATerm t);
        static ATerm n_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_24 = ATgetArgument(t, 0);
              {
                ATerm y_34 = ATgetArgument(t, 1);
              }
              {
                ATerm z_34 = ATgetArgument(t, 2);
              }
              {
                ATerm a_35 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_7, t);
      }
      t = not_null(u_24);
      t = debug_1_0(p_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm p_26 = NULL;
        p_26 = t;
        t = map_1_0(q_7, t);
        t = p_26;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(o_8, t);
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              {
                ATerm d_19 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_19 = ATgetFirst((ATermList) t);
                    {
                      ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = d_19;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,j_19 = NULL;
  u_26 = t;
  t = SSL_explode_term(u_26);
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            v_26 = ATgetFirst((ATermList) g_35);
            {
              ATerm j_35 = (ATerm) ATgetNext((ATermList) g_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_26);
  if(match_cons(t, sym__2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_35 = ATgetArgument(t, 1);
        if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
          {
            ATerm n_35 = ATgetFirst((ATermList) l_35);
            ATerm o_35 = (ATerm) ATgetNext((ATermList) l_35);
            if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
              {
                j_19 = ATgetFirst((ATermList) o_35);
                {
                  ATerm r_35 = (ATerm) ATgetNext((ATermList) o_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, v_26, j_19);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(q_8, t_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm h_139 (ATerm), ATerm t)
{
  static ATerm w_26 (ATerm t);
  static ATerm w_26 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_139(t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = SRTS_all(w_26, t);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
static ATerm k_10 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  d_27 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        t = m_12(f_48, g_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            c_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_35);
        {
          ATerm m_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, f_48, g_48, c_27);
          t = lookup_table_0_1(f_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_12(g_48, c_27, m_27, t);
          t = (ATerm) ATmakeAppl(sym__3, f_48, g_48, c_27);
        }
      }
    else
      {
        t = u_35;
        {
          ATerm o_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
          t = lookup_table_0_1(f_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_12(g_48, o_27, t);
          t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        }
      }
  }
  t = d_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_149 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t_27 = t;
  t = o_149(t);
  s_27 = t;
  {
    ATerm x_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_27 = NULL;
        t = term_b_36;
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_b_36);
        t = m_12(s_27, z_27, t);
        {
          ATerm f_36 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_36;
            }
        }
        LocalPopChoice(a_36);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      q_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_27, term_b_36, q_27);
  t = lookup_table_0_1(s_27, t);
  y_27 = t;
  t = term_b_36;
  w_27 = t;
  t = y_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(w_27, q_27, x_27, t);
  t = r_27;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      ATerm d_28 = NULL;
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, d_28);
      t = k_10(s_27, d_28, t);
      return(t);
    }
    t = map_1_0(u_8, t);
  }
  t = t_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_141(t);
      t = b_141(t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = g_36;
      t = b_141(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_149 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  i_28 = t;
  t = n_149(t);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_28, term_b_36);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_36 = ATgetArgument(t, 0);
            ATerm n_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_36;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_28, term_b_36);
        t = m_12(h_28, z_28, t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
  }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_28, term_b_36, (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty));
  t = lookup_table_0_1(h_28, t);
  n_28 = t;
  t = term_b_36;
  k_28 = t;
  t = (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty);
  l_28 = t;
  t = n_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(k_28, l_28, m_28, t);
  t = i_28;
  return(t);
}
ATerm scope_2_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    t = end_scope_1_0(p_149, t);
    return(t);
  }
  t = begin_scope_1_0(p_149, t);
  t = restore_always_2_0(q_149, v_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,l_29 = NULL,m_29 = NULL,p_29 = NULL,r_29 = NULL;
  i_29 = t;
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_29 = ATgetFirst((ATermList) t);
      r_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_29;
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_29;
            if((l_29 != t))
              {
                _fail(t);
              }
            t = h_29;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = (ATerm) ATmakeAppl(sym__2, l_29, r_29);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_29, r_29);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_36 = ATgetArgument(t, 0);
      if(((ATgetType(u_36) != AT_LIST) || !(ATisEmpty(u_36))))
        _fail(t);
      {
        ATerm v_36 = ATgetArgument(t, 1);
        if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,u_31 = NULL,v_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          o_31 = ATgetFirst((ATermList) w_36);
          p_31 = (ATerm) ATgetNext((ATermList) w_36);
        }
      else
        _fail(t);
      {
        ATerm x_36 = ATgetArgument(t, 1);
        if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
          {
            u_31 = ATgetFirst((ATermList) x_36);
            v_31 = (ATerm) ATgetNext((ATermList) x_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_31, u_31), (ATerm) ATmakeAppl(sym__2, p_31, v_31));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm w_31 = NULL,y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_31), w_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm y_30 = NULL,b_31 = NULL,c_31 = NULL,g_31 = NULL;
  y_30 = t;
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_37 = ATgetArgument(t, 0);
            ATerm c_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_36);
        t = y_30;
      }
    else
      {
        t = y_36;
        {
          ATerm n_31 = NULL;
          if(match_cons(t, sym__3))
            {
              b_31 = ATgetArgument(t, 0);
              c_31 = ATgetArgument(t, 1);
              g_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, b_31, c_31);
          t = genzip_4_0(w_8, x_8, y_8, _id, t);
          n_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_31, g_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm y_136 (ATerm), ATerm z_136 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  static ATerm z_8 (ATerm t);
  static ATerm z_8 (ATerm t)
  {
    ATerm o_19 = NULL;
    t = y_136(t);
    o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_19, not_null(b_32));
    t = lookup_0_0(t);
    t = z_136(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((b_32 != NULL) && (b_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_32 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_32;
  t = alltd_1_0(z_8, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm l_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_32 = ATgetArgument(t, 0);
      {
        ATerm e_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_32;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_32;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      if(((ATgetType(g_37) != AT_LIST) || !(ATisEmpty(g_37))))
        _fail(t);
      {
        ATerm h_37 = ATgetArgument(t, 1);
        if(((ATgetType(h_37) != AT_LIST) || !(ATisEmpty(h_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm p_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(((ATgetType(l_37) == AT_LIST) && !(ATisEmpty(l_37))))
        {
          p_32 = ATgetFirst((ATermList) l_37);
          r_32 = (ATerm) ATgetNext((ATermList) l_37);
        }
      else
        _fail(t);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
          {
            s_32 = ATgetFirst((ATermList) m_37);
            t_32 = (ATerm) ATgetNext((ATermList) m_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_32, s_32), (ATerm) ATmakeAppl(sym__2, r_32, t_32));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_32 = NULL,y_32 = NULL;
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_32), u_32);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm a_33 = NULL,c_33 = NULL,d_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(match_cons(n_37, sym_VarDec_2))
        {
          a_33 = ATgetArgument(n_37, 0);
          {
            ATerm p_37 = ATgetArgument(n_37, 1);
          }
        }
      else
        _fail(t);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, a_33);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, c_33);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, a_33), (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, c_33));
  t = u_11(o_9, f_33, g_33, t);
  t = d_33;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,u_19 = NULL;
  i_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_37;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_37, i_33);
  t = y_11(u_19, i_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_37) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_33;
  return(t);
}
static ATerm o_10 (ATerm g_85, ATerm h_85, ATerm l_85, ATerm i_85, ATerm k_85, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,g_32 = NULL;
  t = i_85;
  t = map_1_0(a_9, t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_32, h_85, k_85);
  t = substitute_2_0(b_9, _id, t);
  e_32 = t;
  {
    static ATerm f_9 (ATerm t);
    static ATerm f_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, l_85, g_85);
      t = genzip_4_0(g_9, h_9, m_9, n_9, t);
      t = e_32;
      t = alltd_1_0(p_9, t);
      if(((g_32 != NULL) && (g_32 != t)))
        _fail(t);
      else
        g_32 = t;
      return(t);
    }
    t = scope_2_0(d_9, f_9, t);
  }
  t = not_null(g_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,r_6 = NULL;
  g_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_34);
  c_34 = t;
  t = d_34;
  t = new_0_0(t);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_34, e_34);
  r_6 = t;
  t = SSLsetAnnotations(r_6, c_34);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,s_6 = NULL;
  o_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_34);
  i_34 = t;
  t = j_34;
  t = new_0_0(t);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_34, m_34);
  s_6 = t;
  t = SSLsetAnnotations(s_6, i_34);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_34 = ATgetArgument(t, 0);
      {
        ATerm u_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, p_34);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm r_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_34 = ATgetArgument(t, 0);
      {
        ATerm v_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, r_34);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,p_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL,w_33 = NULL,z_33 = NULL;
  t_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_38 = ATgetFirst((ATermList) t);
      if(match_cons(a_38, sym_SDefT_4))
        {
          l_33 = ATgetArgument(a_38, 0);
          m_33 = ATgetArgument(a_38, 1);
          n_33 = ATgetArgument(a_38, 2);
          {
            ATerm c_38 = ATgetArgument(a_38, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm b_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_33;
  t = map_1_0(q_9, t);
  p_33 = t;
  t = n_33;
  t = map_1_0(r_9, t);
  r_33 = t;
  t = p_33;
  t = map_1_0(s_9, t);
  u_33 = t;
  t = r_33;
  t = map_1_0(t_9, t);
  w_33 = t;
  t = t_33;
  {
    static ATerm u_9 (ATerm t);
    static ATerm u_9 (ATerm t)
    {
      ATerm t_34 = NULL,w_34 = NULL,x_34 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm e_38 = ATgetArgument(t, 0);
          t_34 = ATgetArgument(t, 1);
          w_34 = ATgetArgument(t, 2);
          x_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_10(u_33, w_33, t_34, w_34, x_34, t);
      return(t);
    }
    t = map_1_0(u_9, t);
  }
  t = choices_0_0(t);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_33, p_33, r_33, z_33);
  return(t);
}
static ATerm y_78 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm y_77, ATerm t)
{
  ATerm c_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,w_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_77, u_77);
  t = Definitions_0_0(t);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_78, v_77);
  h_78 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      ATerm g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_78);
  f_78 = t;
  t = c_78;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_78 = NULL,k_78 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_78 = ATgetFirst((ATermList) t);
            k_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_78;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_78;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_78, v_77);
  w_6 = t;
  t = SSLsetAnnotations(w_6, f_78);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  o_78 = t;
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_78;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_78;
  if(match_cons(t, sym_Mod_2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, m_78, n_78, r_78);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            x_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_78, s_78);
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            t = y_78(q_78, r_78, s_78, o_78, t);
          }
      }
    }
  else
    {
      t = y_78(q_78, r_78, s_78, o_78, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_155 (ATerm), ATerm t)
{
  static ATerm t_79 (ATerm t);
  static ATerm t_79 (ATerm t)
  {
    ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
    s_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_79 = ATgetFirst((ATermList) t);
        r_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_37 = NULL,r_37 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(s_79);
          o_37 = t;
          t = r_79;
          t = t_79(t);
          r_37 = t;
          t = (ATerm) ATinsert(CheckATermList(r_37), q_79);
          z_6 = t;
          t = SSLsetAnnotations(z_6, o_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_79;
        t = p_155(t);
      }
    return(t);
  }
  t = t_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_79;
    }
  else
    {
      static ATerm v_9 (ATerm t);
      static ATerm v_9 (ATerm t)
      {
        t = not_null(c_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_79 = ATgetFirst((ATermList) t);
          if(((c_79 != NULL) && (c_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_79;
      t = at_end_1_0(v_9, t);
    }
  return(t);
}
static ATerm f_80 (ATerm x_79, ATerm t)
{
  ATerm y_79 = NULL;
  t = SSL_explode_term(x_79);
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  c_80 = t;
  if(match_cons(t, sym__2))
    {
      a_80 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_9 (ATerm t);
            static ATerm w_9 (ATerm t)
            {
              t = b_80;
              return(t);
            }
            t = a_80;
            t = at_end_1_0(w_9, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = f_80(c_80, t);
          }
      }
    }
  else
    {
      t = f_80(c_80, t);
    }
  return(t);
}
static ATerm i_11 (ATerm c_157 (ATerm), ATerm e_71, ATerm d_71, ATerm t)
{
  static ATerm x_80 (ATerm t);
  static ATerm x_80 (ATerm t)
  {
    ATerm q_80 = NULL,t_80 = NULL,u_80 = NULL;
    q_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_80;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_80 = ATgetFirst((ATermList) t);
            u_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_80;
              {
                static ATerm c_10 (ATerm t);
                static ATerm c_10 (ATerm t)
                {
                  t = d_71;
                  return(t);
                }
                t = v_11(c_157, c_10, t_80, u_80, t);
              }
              t = x_80(t);
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                ATerm d_38 = NULL,l_38 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(q_80);
                d_38 = t;
                t = u_80;
                t = x_80(t);
                l_38 = t;
                t = (ATerm) ATinsert(CheckATermList(l_38), t_80);
                b_7 = t;
                t = SSLsetAnnotations(b_7, d_38);
              }
            }
        }
      }
    return(t);
  }
  t = e_71;
  t = x_80(t);
  return(t);
}
ATerm genzip_4_0 (ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm t)
{
  static ATerm f_81 (ATerm t);
  static ATerm f_81 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_142(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,k_7 = NULL;
          t = h_142(t);
          e_81 = t;
          if(match_cons(t, sym__2))
            {
              a_81 = ATgetArgument(t, 0);
              b_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_81);
          z_80 = t;
          t = a_81;
          t = j_142(t);
          c_81 = t;
          t = b_81;
          t = f_81(t);
          d_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_81, d_81);
          k_7 = t;
          t = SSLsetAnnotations(k_7, z_80);
          t = i_142(t);
        }
      }
    return(t);
  }
  t = f_81(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
        {
          m_81 = ATgetFirst((ATermList) x_38);
          n_81 = (ATerm) ATgetNext((ATermList) x_38);
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
          {
            o_81 = ATgetFirst((ATermList) y_38);
            p_81 = (ATerm) ATgetNext((ATermList) y_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_81, o_81), (ATerm) ATmakeAppl(sym__2, n_81, p_81));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  if(match_cons(t, sym__2))
    {
      q_81 = ATgetArgument(t, 0);
      r_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_81), q_81);
  return(t);
}
static ATerm n_11 (ATerm l_958, ATerm q_958, ATerm n_97, ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
  t = SSL_explode_term(q_958);
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_958);
  if(match_cons(t, sym__2))
    {
      if((h_81 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_81, j_81);
  t = genzip_4_0(e_10, f_10, g_10, _id, t);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, n_97);
  t = conc_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm o_83 = NULL;
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_83);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,o_7 = NULL;
  s_83 = t;
  if(match_cons(t, sym__2))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_83);
  p_83 = t;
  t = r_83;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_83, r_83);
  o_7 = t;
  t = SSLsetAnnotations(o_7, p_83);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm f_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  f_85 = t;
  if(match_cons(t, sym__2))
    {
      p_85 = ATgetArgument(t, 0);
      q_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_85 = ATgetFirst((ATermList) t);
      s_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_86(p_85, q_85, f_85, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_85), r_85), s_85);
          }
      }
    }
  else
    {
      t = k_86(p_85, q_85, f_85, t);
    }
  return(t);
}
static ATerm k_86 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t)
{
  ATerm w_83 = NULL,c_84 = NULL,t_7 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  t = SSLgetAnnotations(v_83);
  w_83 = t;
  t = u_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_84 = ATgetFirst((ATermList) t);
      i_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_84;
  if(match_cons(t, sym__2))
    {
      g_84 = ATgetArgument(t, 0);
      h_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_84;
        if((g_84 != t))
          {
            _fail(t);
          }
        t = i_84;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = u_83;
        t = n_11(g_84, h_84, i_84, t);
      }
  }
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_83, c_84);
  t_7 = t;
  t = SSLsetAnnotations(t_7, w_83);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm j_86 = NULL;
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      if((j_86 != ATgetArgument(t, 1)))
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
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_10, i_10, l_10, t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm w_85 = NULL,x_85 = NULL,z_85 = NULL;
        w_85 = t;
        if(match_cons(t, sym__2))
          {
            x_85 = ATgetArgument(t, 0);
            z_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_85;
        t = i_11(m_10, x_85, z_85, t);
      }
    }
  return(t);
}
static ATerm p_11 (ATerm y_175 (ATerm), ATerm z_175 (ATerm), ATerm a_176 (ATerm), ATerm s_100, ATerm p_100, ATerm x_100, ATerm t_100, ATerm q_100, ATerm r_100, ATerm t)
{
  ATerm n_86 = NULL,s_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,d_87 = NULL,e_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_100, t_100);
  t = y_175(t);
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_86;
  t = z_175(t);
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_86, x_100);
  t = diff_0_0(t);
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, p_100);
  t = conc_0_0(t);
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, x_100);
  t = conc_0_0(t);
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_100, s_86, q_100);
  t = a_176(t);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, a_87, d_87, n_86, e_87, r_100);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm y_175 (ATerm), ATerm z_175 (ATerm), ATerm a_176 (ATerm), ATerm t)
{
  ATerm i_87 = NULL,l_87 = NULL,o_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          i_87 = ATgetFirst((ATermList) i_39);
          l_87 = (ATerm) ATgetNext((ATermList) i_39);
        }
      else
        _fail(t);
      o_87 = ATgetArgument(t, 1);
      u_87 = ATgetArgument(t, 2);
      v_87 = ATgetArgument(t, 3);
      w_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = p_11(y_175, z_175, a_176, i_87, l_87, o_87, u_87, v_87, w_87, t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_144 (ATerm), ATerm h_144 (ATerm), ATerm t)
{
  static ATerm z_87 (ATerm t);
  static ATerm z_87 (ATerm t)
  {
    ATerm k_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_144(t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = k_39;
        t = h_144(t);
        t = z_87(t);
      }
    return(t);
  }
  t = z_87(t);
  return(t);
}
ATerm for_3_0 (ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t)
{
  t = j_144(t);
  t = while_not_2_0(k_144, l_144, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  if(match_cons(t, sym__3))
    {
      n_88 = ATgetArgument(t, 0);
      o_88 = ATgetArgument(t, 1);
      p_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, n_88, n_88, o_88, p_88, (ATerm) ATempty);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_39 = ATgetArgument(t, 0);
      if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
        _fail(t);
      {
        ATerm v_39 = ATgetArgument(t, 1);
      }
      {
        ATerm w_39 = ATgetArgument(t, 2);
      }
      s_88 = ATgetArgument(t, 3);
      t_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_88, t_88);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm c_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, r_10, t_10, t);
      LocalPopChoice(j_40);
    }
  else
    {
      t = c_40;
      {
        ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
        if(match_cons(t, sym__5))
          {
            z_88 = ATgetArgument(t, 0);
            c_89 = ATgetArgument(t, 1);
            d_89 = ATgetArgument(t, 2);
            e_89 = ATgetArgument(t, 3);
            f_89 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = z_88;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_89 = ATgetFirst((ATermList) t);
            b_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, b_89, c_89, d_89, e_89, (ATerm) ATinsert(CheckATermList(f_89), a_89));
      }
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(u_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      w_88 = ATgetArgument(t, 1);
      x_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_88), w_88);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(m_40);
    }
  else
    {
      t = l_40;
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm a_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
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
      a_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
      {
        ATerm p_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_40;
            t = d_10(a_40, f_40, i_40, t);
            LocalPopChoice(r_40);
          }
        else
          {
            t = p_40;
            t = z_40(h_40, i_40, t);
          }
      }
    }
  else
    {
      t = z_40(h_40, i_40, t);
    }
  return(t);
}
static ATerm z_40 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_l_17;
  y_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), m_39), term_o_17), l_39), term_m_17);
  z_39 = t;
  t = SSL_printnl(y_39, z_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), m_39), term_o_17), l_39), term_m_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  t = for_3_0(n_10, p_10, q_10, t);
  i_90 = t;
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_90;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_90;
    }
  else
    {
      ATerm d_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_90 = ATgetFirst((ATermList) t);
          m_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_90), l_90);
      t = map_1_0(v_10, t);
      t = term_b_21;
      d_39 = t;
      t = SSL_exit(d_39);
    }
  return(t);
}
ATerm debug_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  t = c_145(t);
  r_90 = t;
  t = term_l_17;
  s_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_90), r_90);
  t_90 = t;
  t = SSL_printnl(s_90, t_90);
  t = q_90;
  return(t);
}
static ATerm s_11 (ATerm o_84, ATerm p_84, ATerm q_84, ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  t = SSL_int_to_string(p_84);
  v_90 = t;
  t = SSL_int_to_string(q_84);
  w_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_41), w_90), term_u_40), v_90), term_t_40), o_84);
  x_90 = t;
  t = SSL_concat_strings(x_90);
  return(t);
}
ATerm ExtDefinition_0_0 (ATerm t)
{
  ATerm i_91 = NULL,k_91 = NULL;
  i_91 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_91;
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      ATerm d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_42 = NULL,q_42 = NULL;
        t = term_o_41;
        q_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_41, i_91);
        t = y_11(q_42, i_91, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_41) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            k_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_42;
        LocalPopChoice(n_41);
      }
    else
      {
        t = f_41;
        {
          ATerm u_42 = NULL,z_42 = NULL;
          t = term_o_41;
          z_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_41, i_91);
          t = y_11(z_42, i_91, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_41) != ATmakeSymbol("b_1", 0, ATtrue)))
                _fail(t);
              u_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_42;
        }
      }
  }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL;
  if(match_cons(t, sym__2))
    {
      s_91 = ATgetArgument(t, 0);
      t_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(s_91, t_91, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL;
  if(match_cons(t, sym__2))
    {
      u_91 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(u_91, v_91, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm t_11 (ATerm l_84, ATerm m_84, ATerm n_84, ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL;
  t = m_84;
  t = foldr_3_0(x_10, y_10, g_11, t);
  p_91 = t;
  t = n_84;
  t = foldr_3_0(h_11, j_11, k_11, t);
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_84, (ATerm) ATmakeAppl(sym__2, p_91, q_91));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm y_91 = NULL;
  y_91 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm x_41 = ATgetArgument(t, 0);
            ATerm y_41 = ATgetArgument(t, 1);
            ATerm z_41 = ATgetArgument(t, 2);
            ATerm a_42 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        LocalPopChoice(w_41);
        {
          ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              z_91 = ATgetArgument(t, 0);
              a_92 = ATgetArgument(t, 1);
              b_92 = ATgetArgument(t, 2);
              {
                ATerm b_42 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = t_11(z_91, a_92, b_92, t);
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_92 = NULL;
                c_92 = t;
                t = ExtDefinition_0_0(t);
                t = c_92;
                LocalPopChoice(d_42);
                {
                  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      e_92 = ATgetArgument(t, 0);
                      {
                        ATerm e_42 = ATgetArgument(t, 1);
                        if(match_cons(e_42, sym__2))
                          {
                            f_92 = ATgetArgument(e_42, 0);
                            g_92 = ATgetArgument(e_42, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = s_11(e_92, f_92, g_92, t);
                  t = debug_1_0(m_11, t);
                  t = term_b_21;
                  d_92 = t;
                  t = SSL_exit(d_92);
                }
              }
            else
              {
                t = c_42;
              }
          }
        }
      }
    else
      {
        t = v_41;
      }
  }
  t = y_91;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm check_ext_overload_0_0 (ATerm t)
{
  t = map_1_0(l_11, t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL;
  if(match_cons(t, sym__2))
    {
      z_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(z_92, a_93, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL;
  if(match_cons(t, sym__2))
    {
      b_93 = ATgetArgument(t, 0);
      c_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(b_93, c_93, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm d_93 = NULL;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      if((d_93 != ATgetArgument(t, 1)))
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
  t = term_f_42;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      o_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
      k_92 = ATgetArgument(t, 2);
      {
        ATerm h_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_92 = t;
  t = j_92;
  t = foldr_3_0(o_11, q_11, r_11, t);
  l_92 = t;
  t = k_92;
  t = foldr_3_0(x_11, i_12, o_12, t);
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  {
    ATerm j_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = j_42;
        t = (ATerm) ATempty;
      }
  }
  s_92 = t;
  t = o_92;
  {
    ATerm m_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = m_42;
        t = (ATerm) ATempty;
      }
  }
  r_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  y_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_92, m_92)), r_92);
  t = w_11(s_12, y_92, r_92, t);
  p_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_42, (ATerm) ATinsert(CheckATermList(s_92), n_92));
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_42, (ATerm) ATinsert(CheckATermList(s_92), n_92)));
  t = u_11(t_12, w_92, x_92, t);
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92));
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, n_92);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym__2, l_92, m_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, n_92));
  t = u_11(u_12, u_92, v_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, p_92);
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_92, (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, p_92));
  t = u_11(y_12, o_92, t_92, t);
  t = q_92;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL;
  if(match_cons(t, sym__2))
    {
      u_93 = ATgetArgument(t, 0);
      v_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(u_93, v_93, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL;
  if(match_cons(t, sym__2))
    {
      w_93 = ATgetArgument(t, 0);
      x_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(w_93, x_93, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm y_93 = NULL;
  if(match_cons(t, sym__2))
    {
      y_93 = ATgetArgument(t, 0);
      if((y_93 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  i_93 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      j_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
      f_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  l_93 = t;
  t = e_93;
  t = foldr_3_0(z_12, a_13, b_13, t);
  g_93 = t;
  t = f_93;
  t = foldr_3_0(c_13, d_13, e_13, t);
  h_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym__2, g_93, h_93));
  {
    ATerm v_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(x_42);
      }
    else
      {
        t = v_42;
        t = (ATerm) ATempty;
      }
  }
  n_93 = t;
  t = j_93;
  {
    ATerm y_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(a_43);
      }
    else
      {
        t = y_42;
        t = (ATerm) ATempty;
      }
  }
  m_93 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_93, h_93));
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_93, h_93)), m_93);
  t = w_11(f_13, t_93, m_93, t);
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym__2, g_93, h_93));
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_43, (ATerm) ATinsert(CheckATermList(n_93), i_93));
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym__2, g_93, h_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_43, (ATerm) ATinsert(CheckATermList(n_93), i_93)));
  t = u_11(g_13, r_93, s_93, t);
  t = (ATerm) ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym__2, g_93, h_93));
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_43, i_93);
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym__2, g_93, h_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_43, i_93));
  t = u_11(i_13, p_93, q_93, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_43, k_93);
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_93, (ATerm) ATmakeAppl(sym_Defined_2, term_d_43, k_93));
  t = u_11(j_13, j_93, o_93, t);
  t = l_93;
  return(t);
}
static ATerm u_11 (ATerm r_149 (ATerm), ATerm s_46, ATerm p_46, ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL;
  c_94 = t;
  t = r_149(t);
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_93, s_46, p_46);
  t = n_12(z_93, s_46, p_46, t);
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_94 = NULL;
        t = term_b_36;
        h_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_93, term_b_36);
        t = m_12(z_93, h_94, t);
        {
          ATerm h_43 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_43;
            }
        }
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_94 = ATgetFirst((ATermList) t);
      b_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_93, term_b_36, (ATerm) ATinsert(CheckATermList(b_94), (ATerm) ATinsert(CheckATermList(a_94), s_46)));
  t = lookup_table_0_1(z_93, t);
  g_94 = t;
  t = term_b_36;
  d_94 = t;
  t = (ATerm) ATinsert(CheckATermList(b_94), (ATerm) ATinsert(CheckATermList(a_94), s_46));
  e_94 = t;
  t = g_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(d_94, e_94, f_94, t);
  t = c_94;
  return(t);
}
static ATerm v_11 (ATerm k_157 (ATerm), ATerm l_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t)
{
  t = l_157(t);
  {
    static ATerm m_13 (ATerm t);
    static ATerm m_13 (ATerm t)
    {
      ATerm i_94 = NULL;
      i_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_71, i_94);
      t = k_157(t);
      return(t);
    }
    t = fetch_1_0(m_13, t);
  }
  t = j_71;
  return(t);
}
static ATerm w_11 (ATerm h_157 (ATerm), ATerm g_71, ATerm f_71, ATerm t)
{
  static ATerm y_94 (ATerm t);
  static ATerm y_94 (ATerm t)
  {
    ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
    t_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_94 = ATgetFirst((ATermList) t);
            v_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_94;
              {
                static ATerm n_13 (ATerm t);
                static ATerm n_13 (ATerm t)
                {
                  t = f_71;
                  return(t);
                }
                t = v_11(h_157, n_13, u_94, v_94, t);
              }
              t = y_94(t);
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm e_43 = NULL,i_43 = NULL,a_8 = NULL;
                t = SSLgetAnnotations(t_94);
                e_43 = t;
                t = v_94;
                t = y_94(t);
                i_43 = t;
                t = (ATerm) ATinsert(CheckATermList(i_43), u_94);
                a_8 = t;
                t = SSLsetAnnotations(a_8, e_43);
              }
            }
        }
      }
    return(t);
  }
  t = g_71;
  t = y_94(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_44 = NULL,d_45 = NULL;
        t = term_g_42;
        d_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_42, m_95);
        t = y_11(d_45, m_95, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_43) != ATmakeSymbol("l_1", 0, ATtrue)))
              _fail(t);
            u_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_44;
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_45 = NULL,a_46 = NULL;
              t = term_g_42;
              a_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_42, m_95);
              t = y_11(a_46, m_95, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_43 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_43) != ATmakeSymbol("e_1", 0, ATtrue)))
                    _fail(t);
                  p_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_45;
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
              {
                ATerm i_46 = NULL,l_46 = NULL;
                t = term_g_42;
                l_46 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_42, m_95);
                t = y_11(l_46, m_95, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_43) != ATmakeSymbol("v_0", 0, ATtrue)))
                      _fail(t);
                    i_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_46;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_11 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm q_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
  t = m_12(l_48, m_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_95 = ATgetFirst((ATermList) t);
      {
        ATerm s_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_95;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm n_96 = NULL,p_96 = NULL;
  n_96 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_96;
  if(match_cons(t, sym__2))
    {
      ATerm u_43 = ATgetArgument(t, 0);
      ATerm v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL,s_47 = NULL;
        t = term_f_42;
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_42, n_96);
        t = y_11(s_47, n_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_43) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            j_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_47;
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        {
          ATerm z_43 = t;
          int a_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_47 = NULL,i_48 = NULL;
              t = term_f_42;
              i_48 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_42, n_96);
              t = y_11(i_48, n_96, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_44 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_44) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  y_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_47;
              LocalPopChoice(a_44);
            }
          else
            {
              t = z_43;
              {
                ATerm p_48 = NULL,x_48 = NULL;
                t = term_f_42;
                x_48 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_42, n_96);
                t = y_11(x_48, n_96, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    p_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_48;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
  w_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_96;
      t = m_160(t);
    }
  else
    {
      ATerm b_97 = NULL,c_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_96 = ATgetFirst((ATermList) t);
          y_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_96;
      t = o_160(t);
      b_97 = t;
      t = y_96;
      t = foldr_3_0(m_160, n_160, o_160, t);
      c_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_97, c_97);
      t = n_160(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm w_97 = NULL,x_97 = NULL;
  if(match_cons(t, sym__2))
    {
      w_97 = ATgetArgument(t, 0);
      x_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(w_97, x_97, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      y_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(y_97, z_97, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm a_98 = NULL;
  if(match_cons(t, sym__2))
    {
      a_98 = ATgetArgument(t, 0);
      if((a_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,i_97 = NULL,j_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL;
  f_97 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_97 = ATgetArgument(t, 0);
      d_97 = ATgetArgument(t, 1);
      e_97 = ATgetArgument(t, 2);
      {
        ATerm d_44 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  p_97 = t;
  t = d_97;
  t = foldr_3_0(o_13, p_13, q_13, t);
  g_97 = t;
  t = e_97;
  t = foldr_3_0(r_13, s_13, t_13, t);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, g_97, i_97));
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATempty;
      }
  }
  r_97 = t;
  t = j_97;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = (ATerm) ATempty;
      }
  }
  q_97 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_97, i_97));
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_97, i_97)), q_97);
  t = w_11(u_13, v_97, q_97, t);
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, g_97, i_97));
  t_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_44, (ATerm) ATinsert(CheckATermList(r_97), f_97));
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, g_97, i_97)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_44, (ATerm) ATinsert(CheckATermList(r_97), f_97)));
  t = u_11(w_13, t_97, u_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_44, o_97);
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym_Defined_2, term_j_44, o_97));
  t = u_11(x_13, j_97, s_97, t);
  t = p_97;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm m_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(n_44);
          }
        else
          {
            t = m_44;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm b_98 = NULL;
  t = map_1_0(a_14, t);
  t = check_ext_overload_0_0(t);
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_q_44), b_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,d_8 = NULL;
  h_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_98 = ATgetFirst((ATermList) t);
      e_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_98);
  c_98 = t;
  t = d_98;
  t = p_111(t);
  f_98 = t;
  t = e_98;
  t = q_111(t);
  g_98 = t;
  t = (ATerm) ATinsert(CheckATermList(g_98), f_98);
  d_8 = t;
  t = SSLsetAnnotations(d_8, c_98);
  return(t);
}
static ATerm z_11 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm i_98 = NULL;
  t = SSL_fputc(w_37, x_37);
  i_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_98);
  return(t);
}
static ATerm a_12 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm j_98 = NULL;
  t = SSL_write_term_to_stream_text(c_36, d_36);
  j_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_98);
  return(t);
}
static ATerm c_12 (ATerm e_145 (ATerm), ATerm s_290, ATerm i_36, ATerm t)
{
  ATerm k_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_290, term_t_44);
  t = g_12(t);
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_98, i_36);
  t = e_145(t);
  t = fclose_0_0(t);
  t = i_36;
  return(t);
}
static ATerm b_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm l_98 = NULL;
  t = SSL_write_term_to_stream_baf(y_35, z_35);
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_98);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_44 = ATgetArgument(t, 0);
      if(match_cons(v_44, sym_Stream_1))
        {
          s_98 = ATgetArgument(v_44, 0);
        }
      else
        _fail(t);
      t_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(s_98, t_98, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_44 = ATgetArgument(t, 0);
      if(match_cons(w_44, sym_Stream_1))
        {
          x_98 = ATgetArgument(w_44, 0);
        }
      else
        _fail(t);
      y_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(x_98, y_98, t);
  u_98 = t;
  t = term_g_22;
  v_98 = t;
  t = u_98;
  if(match_cons(t, sym_Stream_1))
    {
      w_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, u_98);
  t = z_11(v_98, w_98, t);
  return(t);
}
ATerm output_1_0 (ATerm h_171 (ATerm), ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  t = h_171(t);
  n_98 = t;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_98 = NULL,p_98 = NULL;
        t = term_b_45;
        o_98 = t;
        t = term_c_45;
        p_98 = t;
        t = term_e_45;
        t = m_12(o_98, p_98, t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        t = term_f_45;
      }
  }
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_98, n_98);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_98 = NULL,r_98 = NULL;
        t = term_b_45;
        q_98 = t;
        t = term_i_45;
        r_98 = t;
        t = term_j_45;
        t = m_12(q_98, r_98, t);
        t = (ATerm) ATmakeAppl(sym__2, m_98, n_98);
        LocalPopChoice(h_45);
        if(match_cons(t, sym__2))
          {
            ATerm k_45 = ATgetArgument(t, 0);
            ATerm l_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12(b_14, m_98, n_98, t);
      }
    else
      {
        t = g_45;
        if(match_cons(t, sym__2))
          {
            ATerm m_45 = ATgetArgument(t, 0);
            ATerm n_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12(c_14, m_98, n_98, t);
      }
  }
  return(t);
}
static ATerm m_99 (ATerm g_99, ATerm t)
{
  t = SSL_fclose(g_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL;
  k_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_99 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_99);
            LocalPopChoice(q_45);
          }
        else
          {
            t = o_45;
            t = m_99(k_99, t);
          }
      }
    }
  else
    {
      t = m_99(k_99, t);
    }
  return(t);
}
static ATerm d_12 (ATerm e_36, ATerm t)
{
  t = SSL_read_term_from_stream(e_36);
  return(t);
}
static ATerm e_12 (ATerm r_80, ATerm s_80, ATerm t)
{
  t = SSL_strcat(r_80, s_80);
  return(t);
}
static ATerm f_12 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm n_99 = NULL;
  t = SSL_fopen(y_37, z_37);
  n_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_99 = NULL;
  t = SSL_stdin_stream();
  o_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_99 = NULL;
  t = SSL_stdout_stream();
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_99 = NULL;
  t = SSL_stderr_stream();
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_99);
  return(t);
}
static ATerm h_101 (ATerm w_99, ATerm t)
{
  ATerm x_99 = NULL;
  t = SSL_explode_term(w_99);
  if(match_cons(t, sym__2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_45 = ATgetArgument(t, 1);
        if(((ATgetType(u_45) == AT_LIST) && !(ATisEmpty(u_45))))
          {
            x_99 = ATgetFirst((ATermList) u_45);
            {
              ATerm v_45 = (ATerm) ATgetNext((ATermList) u_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_99;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_99;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_99;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_99;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_101 (ATerm a_100, ATerm b_100, ATerm c_100, ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,i_100 = NULL,g_8 = NULL;
  t = SSLgetAnnotations(c_100);
  f_100 = t;
  t = a_100;
  if(match_cons(t, sym_Path_1))
    {
      i_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_100, b_100);
  g_8 = t;
  t = SSLsetAnnotations(g_8, f_100);
  if(match_cons(t, sym__2))
    {
      d_100 = ATgetArgument(t, 0);
      e_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(d_100, e_100, t);
  return(t);
}
static ATerm j_101 (ATerm k_100, ATerm l_100, ATerm m_100, ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL,z_100 = NULL,c_101 = NULL,h_8 = NULL;
  t = SSLgetAnnotations(m_100);
  z_100 = t;
  t = SSL_is_string(k_100);
  c_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_101, l_100);
  h_8 = t;
  t = SSLsetAnnotations(h_8, z_100);
  if(match_cons(t, sym__2))
    {
      n_100 = ATgetArgument(t, 0);
      o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(n_100, o_100, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
  e_101 = t;
  if(match_cons(t, sym__2))
    {
      f_101 = ATgetArgument(t, 0);
      g_101 = ATgetArgument(t, 1);
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_101(e_101, t);
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
              ATerm b_46 = t;
              int c_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_101(f_101, g_101, e_101, t);
                  LocalPopChoice(c_46);
                }
              else
                {
                  t = b_46;
                  t = j_101(f_101, g_101, e_101, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_101(e_101, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL,c_102 = NULL;
  c_102 = t;
  {
    ATerm d_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_102, term_g_46);
        t = g_12(t);
        LocalPopChoice(f_46);
      }
    else
      {
        t = d_46;
        {
          ATerm q_49 = NULL,v_49 = NULL;
          t = term_j_46;
          v_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_46, c_102);
          t = e_12(v_49, c_102, t);
          q_49 = t;
          t = SSL_perror(q_49);
          _fail(t);
        }
      }
  }
  w_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12(x_101, t);
  v_101 = t;
  t = w_101;
  t = fclose_0_0(t);
  t = v_101;
  return(t);
}
ATerm input_1_0 (ATerm i_171 (ATerm), ATerm t)
{
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_102 = NULL,g_102 = NULL;
      t = term_b_45;
      f_102 = t;
      t = term_n_46;
      g_102 = t;
      t = term_o_46;
      t = m_12(f_102, g_102, t);
      LocalPopChoice(m_46);
    }
  else
    {
      t = k_46;
      t = term_q_46;
    }
  t = ReadFromFile_0_0(t);
  t = i_171(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL;
  t = term_b_45;
  h_102 = t;
  t = term_r_46;
  i_102 = t;
  t = term_t_46;
  t = m_12(h_102, i_102, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_102 = NULL,i_103 = NULL,j_103 = NULL;
  k_102 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_46 = ATgetFirst((ATermList) t);
                ATerm y_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_102;
          }
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = (ATerm) ATinsert(ATempty, k_102);
      }
  }
  i_103 = t;
  t = term_f_45;
  j_103 = t;
  t = SSL_printnl(j_103, i_103);
  t = k_102;
  return(t);
}
ATerm map_1_0 (ATerm a_155 (ATerm), ATerm t)
{
  static ATerm p_104 (ATerm t);
  static ATerm p_104 (ATerm t)
  {
    ATerm y_103 = NULL,e_104 = NULL,o_104 = NULL;
    y_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_103;
      }
    else
      {
        ATerm b_50 = NULL,f_50 = NULL,h_50 = NULL,k_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_104 = ATgetFirst((ATermList) t);
            o_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_103);
        b_50 = t;
        t = e_104;
        t = a_155(t);
        f_50 = t;
        t = o_104;
        t = p_104(t);
        h_50 = t;
        t = (ATerm) ATinsert(CheckATermList(h_50), f_50);
        k_8 = t;
        t = SSLsetAnnotations(k_8, b_50);
      }
    return(t);
  }
  t = p_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_104 = ATgetFirst((ATermList) t);
      t_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_105 = NULL,s_106 = NULL;
        static ATerm d_14 (ATerm t);
        static ATerm d_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_105)), not_null(s_106));
          return(t);
        }
        t = t_104;
        t = r_0(t);
        if(((c_105 != NULL) && (c_105 != t)))
          _fail(t);
        else
          c_105 = t;
        t = s_104;
        t = p_0(t);
        if(((s_106 != NULL) && (s_106 != t)))
          _fail(t);
        else
          s_106 = t;
        t = t_104;
        t = reverse_acc_2_0(p_0, d_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_30;
      t = r_0(t);
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,n_8 = NULL;
  c_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_107);
  a_107 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_107);
  n_8 = t;
  t = SSLsetAnnotations(n_8, a_107);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm o_107 = NULL;
  o_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_107), term_z_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm g_173 (ATerm), ATerm h_173 (ATerm), ATerm t)
{
  ATerm w_106 = NULL,x_106 = NULL;
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_106 = NULL,z_106 = NULL;
      t = term_b_45;
      y_106 = t;
      t = term_r_46;
      z_106 = t;
      t = term_t_46;
      t = m_12(y_106, z_106, t);
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      t = fetch_1_0(e_14, t);
    }
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_173(t);
        t = echo_0_0(t);
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
      }
  }
  t = term_e_47;
  t = echo_0_0(t);
  t = term_f_47;
  w_106 = t;
  t = term_g_47;
  x_106 = t;
  t = term_h_47;
  t = m_12(w_106, x_106, t);
  t = reverse_acc_2_0(_id, f_14, t);
  t = map_1_0(g_14, t);
  {
    ATerm i_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_107 = NULL;
        t = h_173(t);
        p_107 = t;
        t = (ATerm) ATinsert(CheckATermList(p_107), term_l_47);
        t = echo_0_0(t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = i_47;
      }
  }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL,p_8 = NULL;
  h_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_108);
  f_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_108);
  p_8 = t;
  t = SSLsetAnnotations(p_8, f_108);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_107 = NULL;
  s_107 = t;
  {
    ATerm m_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_107 = NULL,u_107 = NULL;
        t = term_b_45;
        t_107 = t;
        t = term_r_46;
        u_107 = t;
        t = term_t_46;
        t = m_12(t_107, u_107, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = m_47;
        t = fetch_1_0(h_14, t);
      }
  }
  t = s_107;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm j_108 = NULL;
  j_108 = t;
  if(match_string(t, "-k"))
    {
      t = j_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_108;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm y_108 = NULL,s_109 = NULL,t_109 = NULL;
  y_108 = t;
  t = SSL_string_to_int(y_108);
  s_109 = t;
  t = term_t_47;
  t_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_47, s_109);
  t = p_12(t_109, s_109, t);
  t = y_108;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_u_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_14, j_14, k_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm v_109 = NULL;
  v_109 = t;
  if(match_string(t, "-S"))
    {
      t = v_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_109;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm w_109 = NULL,x_109 = NULL;
  t = term_v_47;
  w_109 = t;
  t = term_a_21;
  x_109 = t;
  t = term_d_48;
  t = p_12(w_109, x_109, t);
  t = term_e_48;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm d_111 = NULL,g_111 = NULL,i_111 = NULL;
  d_111 = t;
  t = SSL_string_to_int(d_111);
  g_111 = t;
  t = term_v_47;
  i_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, g_111);
  t = p_12(i_111, g_111, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_111);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_j_48;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm m_111 = NULL,r_111 = NULL;
  t = term_k_48;
  m_111 = t;
  t = term_t_30;
  r_111 = t;
  t = term_n_48;
  t = p_12(m_111, r_111, t);
  t = term_o_48;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, n_14, t);
      LocalPopChoice(y_48);
    }
  else
    {
      t = v_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_14, p_14, r_14, t);
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            t = Option_3_0(s_14, t_14, u_14, t);
          }
      }
    }
  return(t);
}
static ATerm p_12 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL;
  t = term_b_45;
  s_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_45, s_41, t_41);
  t = lookup_table_0_1(s_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(s_41, t_41, t_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_45, s_41, t_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
      t = term_t_30;
      t = g_0(t);
      z_111 = t;
      t = term_f_47;
      a_112 = t;
      t = term_g_47;
      b_112 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, z_111);
      t = n_12(a_112, b_112, z_111, t);
      _fail(t);
    }
  else
    {
      ATerm e_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_111 = ATgetFirst((ATermList) t);
          y_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_111;
      t = d_0(t);
      t = term_t_30;
      t = f_0(t);
      e_112 = t;
      t = (ATerm) ATinsert(CheckATermList(y_111), e_112);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm g_112 = NULL;
  g_112 = t;
  if(match_string(t, "-o"))
    {
      t = g_112;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_112;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm h_112 = NULL,i_112 = NULL;
  h_112 = t;
  t = term_c_45;
  i_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_45, h_112);
  t = p_12(i_112, h_112, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_112);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_14, w_14, x_14, t);
  return(t);
}
static ATerm n_12 (ATerm a_48, ATerm b_48, ATerm z_47, ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL;
  k_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_48, b_48);
  {
    ATerm d_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_49 = ATgetArgument(t, 0);
            ATerm k_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_48, b_48);
        t = m_12(a_48, b_48, t);
        LocalPopChoice(g_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATempty;
      }
  }
  l_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_48, b_48, (ATerm) ATinsert(CheckATermList(l_112), z_47));
  t = lookup_table_0_1(a_48, t);
  o_112 = t;
  t = (ATerm) ATinsert(CheckATermList(l_112), z_47);
  m_112 = t;
  t = o_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(b_48, m_112, n_112, t);
  t = k_112;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
      t = term_t_30;
      t = n_0(t);
      z_112 = t;
      t = term_f_47;
      a_113 = t;
      t = term_g_47;
      b_113 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, z_112);
      t = n_12(a_113, b_113, z_112, t);
      _fail(t);
    }
  else
    {
      ATerm f_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_112 = ATgetFirst((ATermList) t);
          w_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_112;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_112 = ATgetFirst((ATermList) t);
          y_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_112;
      t = j_0(t);
      t = x_112;
      t = l_0(t);
      f_113 = t;
      t = (ATerm) ATinsert(CheckATermList(y_112), f_113);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm h_113 = NULL;
  h_113 = t;
  if(match_string(t, "-i"))
    {
      t = h_113;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_113;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL;
  i_113 = t;
  t = term_n_46;
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, i_113);
  t = p_12(j_113, i_113, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_113);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_n_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, f_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_30;
  t = whoami_0_0(t);
  k_113 = t;
  t = term_l_17;
  m_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_49), k_113);
  n_113 = t;
  t = SSL_printnl(m_113, n_113);
  t = term_b_21;
  l_113 = t;
  t = SSL_exit(l_113);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL;
  t = term_b_45;
  o_113 = t;
  t = term_r_46;
  p_113 = t;
  t = term_t_46;
  t = m_12(o_113, p_113, t);
  return(t);
}
static ATerm h_12 (ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm p_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_44, s_44);
      LocalPopChoice(w_49);
    }
  else
    {
      t = p_49;
      t = SSL_addr(r_44, s_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
  r_113 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_113;
      t = k_160(t);
    }
  else
    {
      ATerm w_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_113 = ATgetFirst((ATermList) t);
          t_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_113;
      t = foldr_2_0(k_160, l_160, t);
      w_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_113, w_113);
      t = l_160(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(d_51, e_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_113 = NULL,z_50 = NULL,a_51 = NULL;
  t = times_0_0(t);
  a_51 = t;
  t = SSL_explode_term(a_51);
  if(match_cons(t, sym__2))
    {
      ATerm x_49 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_50;
  t = foldr_2_0(g_15, h_15, t);
  z_113 = t;
  t = SSL_TicksToSeconds(z_113);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
  k_114 = t;
  if(match_cons(t, sym__2))
    {
      l_114 = ATgetArgument(t, 0);
      m_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_114;
        if((l_114 != t))
          {
            _fail(t);
          }
        t = k_114;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        t = (ATerm) ATmakeAppl(sym__2, l_114, m_114);
        {
          ATerm c_50 = t;
          int d_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_114, m_114);
              LocalPopChoice(d_50);
            }
          else
            {
              t = c_50;
              t = SSL_gtr(l_114, m_114);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_114, m_114);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm q_114 = NULL;
  q_114 = t;
  {
    ATerm g_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
        t = term_b_45;
        t_114 = t;
        t = term_v_47;
        u_114 = t;
        t = term_j_50;
        t = m_12(t_114, u_114, t);
        s_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_114, term_b_21);
        t = geq_0_0(t);
        t = q_114;
        t = v_146(t);
        LocalPopChoice(i_50);
      }
    else
      {
        t = g_50;
        t = q_114;
      }
  }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm w_114 = NULL,x_114 = NULL,z_114 = NULL,a_115 = NULL;
  t = run_time_0_0(t);
  w_114 = t;
  t = term_t_30;
  t = whoami_0_0(t);
  x_114 = t;
  t = term_l_17;
  z_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_50), w_114), term_l_50), x_114);
  a_115 = t;
  t = SSL_printnl(z_114, a_115);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_50), w_114), term_l_50), x_114));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_115 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_21;
  b_115 = t;
  t = SSL_exit(b_115);
  return(t);
}
static ATerm q_12 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm c_115 = NULL;
  t = SSL_hashtable_put(r_52, p_52, q_52);
  c_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_115);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_49, ATerm t)
{
  ATerm l_115 = NULL;
  t = table_hashtable_0_0(t);
  l_115 = t;
  {
    ATerm t_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL;
        t = l_115;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_12(m_49, g_52, t);
        LocalPopChoice(y_50);
      }
    else
      {
        t = t_50;
        {
          ATerm b_53 = NULL;
          t = m_49;
          t = table_create_0_0(t);
          t = l_115;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_12(m_49, b_53, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm o_115 = NULL;
  t = SSL_hashtable_create(x_52, y_52);
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_115);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL,t_115 = NULL,u_115 = NULL;
  p_115 = t;
  t = term_b_51;
  t_115 = t;
  t = term_c_51;
  u_115 = t;
  t = p_115;
  t = new_hashtable_0_2(t_115, u_115, t);
  q_115 = t;
  t = p_115;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(p_115, q_115, r_115, t);
  t = p_115;
  return(t);
}
static ATerm j_12 (ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm v_115 = NULL;
  t = SSL_hashtable_remove(v_52, u_52);
  v_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_115);
  return(t);
}
static ATerm k_12 (ATerm z_52, ATerm t)
{
  ATerm w_115 = NULL;
  t = SSL_hashtable_destroy(z_52);
  w_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_115);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_115 = NULL;
  t = SSL_table_hashtable();
  x_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_115);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL;
  y_115 = t;
  t = table_hashtable_0_0(t);
  z_115 = t;
  t = lookup_table_0_1(y_115, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(b_116, t);
  t = z_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(y_115, a_116, t);
  t = y_115;
  return(t);
}
ATerm fetch_1_0 (ATerm i_155 (ATerm), ATerm t)
{
  static ATerm y_116 (ATerm t);
  static ATerm y_116 (ATerm t)
  {
    ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL;
    v_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_116 = ATgetFirst((ATermList) t);
        x_116 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_51 = t;
      int g_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_55 = NULL,m_55 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(v_116);
          j_55 = t;
          t = w_116;
          t = i_155(t);
          m_55 = t;
          t = (ATerm) ATinsert(CheckATermList(x_116), m_55);
          r_8 = t;
          t = SSLsetAnnotations(r_8, j_55);
          LocalPopChoice(g_51);
        }
      else
        {
          t = f_51;
          {
            ATerm g_56 = NULL,j_56 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(v_116);
            g_56 = t;
            t = x_116;
            t = y_116(t);
            j_56 = t;
            t = (ATerm) ATinsert(CheckATermList(j_56), w_116);
            s_8 = t;
            t = SSLsetAnnotations(s_8, g_56);
          }
        }
    }
    return(t);
  }
  t = y_116(t);
  return(t);
}
static ATerm r_12 (ATerm s_52, ATerm t_52, ATerm t)
{
  t = SSL_hashtable_get(t_52, s_52);
  return(t);
}
static ATerm m_12 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm b_117 = NULL;
  t = lookup_table_0_1(t_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(u_49, b_117, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL;
  t = term_h_51;
  d_117 = t;
  t = term_t_30;
  e_117 = t;
  t = term_i_51;
  t = p_12(d_117, e_117, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL,i_117 = NULL;
  t = term_h_51;
  h_117 = t;
  t = term_t_30;
  i_117 = t;
  t = term_i_51;
  t = p_12(h_117, i_117, t);
  t = term_k_51;
  f_117 = t;
  t = term_t_30;
  g_117 = t;
  t = term_l_51;
  t = p_12(f_117, g_117, t);
  t = term_m_51;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_15, k_15, l_15, t);
      LocalPopChoice(p_51);
    }
  else
    {
      t = o_51;
      t = Option_3_0(o_15, p_15, q_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_173 (ATerm), ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,s_117 = NULL,t_117 = NULL,c_9 = NULL;
  n_117 = t;
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_51;
        t = b_173(t);
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
      }
  }
  t = n_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_117 = ATgetFirst((ATermList) t);
      q_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_117);
  o_117 = t;
  t = term_r_46;
  t_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_46, p_117);
  t = p_12(t_117, p_117, t);
  t = q_117;
  {
    static ATerm d_118 (ATerm t);
    static ATerm d_118 (ATerm t)
    {
      ATerm t_51 = t;
      int u_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_51 = t;
          int w_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_117 = NULL;
              w_117 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_117;
              LocalPopChoice(w_51);
            }
          else
            {
              t = v_51;
              t = b_173(t);
              t = Cons_2_0(_id, d_118, t);
            }
          LocalPopChoice(u_51);
        }
      else
        {
          t = t_51;
          {
            ATerm z_117 = NULL,a_118 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_117 = ATgetFirst((ATermList) t);
                a_118 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_118), (ATerm) ATmakeAppl(sym_Undefined_1, z_117));
          }
        }
      return(t);
    }
    t = d_118(t);
  }
  s_117 = t;
  t = (ATerm) ATinsert(CheckATermList(s_117), (ATerm) ATmakeAppl(sym_Program_1, p_117));
  c_9 = t;
  t = SSLsetAnnotations(c_9, o_117);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm q_118 = NULL;
  q_118 = t;
  if(match_string(t, "--help"))
    {
      t = q_118;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_118;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_118;
        }
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL;
  t = term_x_51;
  r_118 = t;
  t = term_t_30;
  s_118 = t;
  t = term_y_51;
  t = p_12(r_118, s_118, t);
  t = term_z_51;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_a_52;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm y_172 (ATerm), ATerm z_172 (ATerm), ATerm a_173 (ATerm), ATerm t)
{
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL;
  k_118 = t;
  t = term_f_47;
  l_118 = t;
  t = term_b_52;
  t = lookup_table_0_1(l_118, t);
  p_118 = t;
  t = term_g_47;
  m_118 = t;
  t = (ATerm) ATempty;
  n_118 = t;
  t = p_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(m_118, n_118, o_118, t);
  t = k_118;
  {
    static ATerm r_15 (ATerm t);
    static ATerm r_15 (ATerm t)
    {
      ATerm c_52 = t;
      int d_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_172(t);
          LocalPopChoice(d_52);
        }
      else
        {
          t = c_52;
          {
            ATerm e_52 = t;
            int f_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_15, t_15, u_15, t);
                LocalPopChoice(f_52);
              }
            else
              {
                t = e_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_15, t);
  }
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_119 = NULL;
        d_119 = t;
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_57 = NULL;
              t = d_119;
              {
                ATerm l_52 = t;
                int m_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_57 = NULL,m_57 = NULL;
                    t = term_b_45;
                    l_57 = t;
                    t = term_x_51;
                    m_57 = t;
                    t = term_n_52;
                    t = m_12(l_57, m_57, t);
                    LocalPopChoice(m_52);
                  }
                else
                  {
                    t = l_52;
                    t = fetch_1_0(v_15, t);
                  }
              }
              t = d_119;
              t = z_172(t);
              t = term_a_21;
              e_57 = t;
              t = SSL_exit(e_57);
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
              {
                ATerm b_58 = NULL,c_58 = NULL,g_58 = NULL;
                t = term_b_45;
                c_58 = t;
                t = term_h_51;
                g_58 = t;
                t = term_o_52;
                t = m_12(c_58, g_58, t);
                t = d_119;
                t = a_173(t);
                t = term_a_21;
                b_58 = t;
                t = SSL_exit(b_58);
              }
            }
        }
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
        {
          ATerm w_52 = t;
          int a_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL;
              static ATerm w_15 (ATerm t);
              static ATerm w_15 (ATerm t)
              {
                ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL,e_9 = NULL;
                j_119 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_119 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_119);
                h_119 = t;
                t = i_119;
                if(((i_118 != NULL) && (i_118 != t)))
                  _fail(t);
                else
                  i_118 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_119);
                e_9 = t;
                t = SSLsetAnnotations(e_9, h_119);
                return(t);
              }
              t = fetch_1_0(w_15, t);
              t = term_l_17;
              f_119 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_118)), term_c_53);
              g_119 = t;
              t = SSL_printnl(f_119, g_119);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_118)), term_c_53));
              t = z_172(t);
              t = term_b_21;
              e_119 = t;
              t = SSL_exit(e_119);
              LocalPopChoice(a_53);
            }
          else
            {
              t = w_52;
            }
        }
      }
  }
  j_118 = t;
  t = term_f_47;
  t = table_destroy_0_0(t);
  t = j_118;
  return(t);
}
ATerm option_wrap_5_0 (ATerm b_171 (ATerm), ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm f_171 (ATerm), ATerm t)
{
  ATerm o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL;
  t = parse_options_3_0(b_171, c_171, d_171, t);
  o_119 = t;
  t = term_d_53;
  t = table_create_0_0(t);
  t = term_d_53;
  p_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_53, term_e_53, o_119);
  t = lookup_table_0_1(p_119, t);
  s_119 = t;
  t = term_e_53;
  q_119 = t;
  t = s_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(q_119, o_119, r_119, t);
  t = o_119;
  t = e_171(t);
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_171(t);
        t = report_success_0_0(t);
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
      {
        ATerm j_53 = t;
        int k_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(k_53);
          }
        else
          {
            t = j_53;
            {
              ATerm l_53 = t;
              int m_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_16, b_16, e_16, t);
                  LocalPopChoice(m_53);
                }
              else
                {
                  t = l_53;
                  {
                    ATerm n_53 = t;
                    int o_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_53);
                      }
                    else
                      {
                        t = n_53;
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
static ATerm y_15 (ATerm t)
{
  t = input_1_0(f_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm u_119 = NULL,v_119 = NULL;
  t = term_i_45;
  u_119 = t;
  t = term_t_30;
  v_119 = t;
  t = term_p_53;
  t = p_12(u_119, v_119, t);
  t = term_q_53;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_r_53;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = output_1_0(g_16, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,l_9 = NULL,j_9 = NULL;
  g_120 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_120);
  z_119 = t;
  t = a_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_120 = ATgetFirst((ATermList) t);
      d_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_120);
  b_120 = t;
  t = d_120;
  t = Cons_2_0(h_16, j_16, t);
  e_120 = t;
  t = (ATerm) ATinsert(CheckATermList(e_120), c_120);
  j_9 = t;
  t = SSLsetAnnotations(j_9, b_120);
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_120);
  l_9 = t;
  t = SSLsetAnnotations(l_9, z_119);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm s_53 = ATgetArgument(t, 0);
      if(((ATgetType(s_53) == AT_LIST) && !(ATisEmpty(s_53))))
        {
          x_119 = ATgetFirst((ATermList) s_53);
          {
            ATerm t_53 = (ATerm) ATgetNext((ATermList) s_53);
            if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
              {
                ATerm u_53 = ATgetFirst((ATermList) t_53);
                if(match_cons(u_53, sym_Strategies_1))
                  {
                    y_119 = ATgetArgument(u_53, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm v_53 = (ATerm) ATgetNext((ATermList) t_53);
                  if(((ATgetType(v_53) != AT_LIST) || !(ATisEmpty(v_53))))
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
  t = b_10(x_119, y_119, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,i_9 = NULL;
  k_120 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_120);
  h_120 = t;
  t = i_120;
  t = needed_defs_0_0(t);
  j_120 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_120);
  i_9 = t;
  t = SSLsetAnnotations(i_9, h_120);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(x_15, default_system_usage_0_0, default_system_about_0_0, _id, y_15, t);
  return(t);
}
