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
static ATerm term_w_53;
static ATerm term_v_53;
static ATerm term_u_53;
static ATerm term_j_53;
static ATerm term_i_53;
static ATerm term_h_53;
static ATerm term_e_53;
static ATerm term_c_53;
static ATerm term_g_52;
static ATerm term_f_52;
static ATerm term_e_52;
static ATerm term_d_52;
static ATerm term_c_52;
static ATerm term_x_51;
static ATerm term_s_51;
static ATerm term_r_51;
static ATerm term_q_51;
static ATerm term_p_51;
static ATerm term_o_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_j_51;
static ATerm term_i_51;
static ATerm term_f_51;
static ATerm term_c_51;
static ATerm term_b_51;
static ATerm term_b_50;
static ATerm term_a_50;
static ATerm term_o_49;
static ATerm term_c_49;
static ATerm term_b_49;
static ATerm term_a_49;
static ATerm term_y_48;
static ATerm term_x_48;
static ATerm term_w_48;
static ATerm term_q_48;
static ATerm term_o_48;
static ATerm term_n_48;
static ATerm term_i_48;
static ATerm term_h_48;
static ATerm term_x_47;
static ATerm term_q_47;
static ATerm term_m_47;
static ATerm term_k_47;
static ATerm term_j_47;
static ATerm term_e_47;
static ATerm term_z_46;
static ATerm term_y_46;
static ATerm term_x_46;
static ATerm term_w_46;
static ATerm term_v_46;
static ATerm term_r_46;
static ATerm term_q_46;
static ATerm term_o_45;
static ATerm term_n_45;
static ATerm term_k_45;
static ATerm term_j_45;
static ATerm term_i_45;
static ATerm term_h_45;
static ATerm term_b_45;
static ATerm term_a_45;
static ATerm term_z_44;
static ATerm term_v_44;
static ATerm term_o_44;
static ATerm term_n_44;
static ATerm term_j_43;
static ATerm term_i_43;
static ATerm term_h_43;
static ATerm term_n_42;
static ATerm term_l_42;
static ATerm term_k_42;
static ATerm term_a_42;
static ATerm term_z_41;
static ATerm term_y_41;
static ATerm term_z_40;
static ATerm term_w_40;
static ATerm term_v_40;
static ATerm term_q_37;
static ATerm term_f_37;
static ATerm term_b_36;
static ATerm term_n_32;
static ATerm term_y_31;
static ATerm term_v_30;
static ATerm term_u_30;
static ATerm term_t_30;
static ATerm term_o_30;
static ATerm term_n_30;
static ATerm term_k_30;
static ATerm term_q_25;
static ATerm term_o_25;
static ATerm term_l_25;
static ATerm term_b_25;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_s_24;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_i_23;
static ATerm term_h_23;
static ATerm term_f_23;
static ATerm term_e_23;
static ATerm term_c_23;
static ATerm term_b_23;
static ATerm term_a_23;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_q_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_f_22;
static ATerm term_d_22;
static ATerm term_s_21;
static ATerm term_r_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_e_18;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_m_17;
static ATerm term_k_17;
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
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Call_2, term_f_23, (ATerm) ATempty);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Op_2, term_e_23, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Call_2, term_u_24, (ATerm) ATempty);
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
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Sort_2, term_k_30, (ATerm) ATempty);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("error: redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("/(", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ExtDefinitions", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_y_20);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_v_44, term_z_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_n_45);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_v_46);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_y_46);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym__2, term_k_47, term_m_47);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_n_48, term_y_20);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym__2, term_y_48, term_t_30);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_n_48);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym__2, term_m_51, term_t_30);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym__2, term_p_51, term_t_30);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_c_52, term_t_30);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym__3, term_k_47, term_m_47, (ATerm) ATempty);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_c_52);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_m_51);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym__2, term_n_45, term_t_30);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_161 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm d_10 (ATerm h_111, ATerm g_111, ATerm t);
static ATerm f_10 (ATerm x_83, ATerm y_83, ATerm z_83, ATerm t);
static ATerm m_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm p_136 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm l_10 (ATerm k_29, ATerm j_29, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm a_164 (ATerm), ATerm b_164 (ATerm), ATerm c_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_164 (ATerm), ATerm t);
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
ATerm escape_chars_1_0 (ATerm b_166 (ATerm), ATerm t);
static ATerm n_47 (ATerm c_39, ATerm d_39, ATerm t);
static ATerm o_47 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm t);
static ATerm p_47 (ATerm n_40, ATerm o_40, ATerm t);
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
ATerm pat_td_1_0 (ATerm e_176 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm y_10 (ATerm z_105, ATerm a_106, ATerm b_106, ATerm t);
static ATerm r_59 (ATerm q_58, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_138 (ATerm), ATerm t);
static ATerm c_11 (ATerm m_101, ATerm n_101, ATerm o_101, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_137 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm y_141 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm d_11 (ATerm x_44, ATerm y_44, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm copy_1_0 (ATerm c_161 (ATerm), ATerm t);
static ATerm e_11 (ATerm a_83, ATerm b_83, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm l_77 (ATerm x_74, ATerm a_75, ATerm c_75, ATerm d_75, ATerm t);
static ATerm m_77 (ATerm n_76, ATerm o_76, ATerm p_76, ATerm q_76, ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm m_155 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_139 (ATerm), ATerm t);
static ATerm m_10 (ATerm f_48, ATerm g_48, ATerm t);
ATerm end_scope_1_0 (ATerm q_149 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_149 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_10 (ATerm a_85, ATerm b_85, ATerm f_85, ATerm c_85, ATerm e_85, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm y_78 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm w_77, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_155 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_80 (ATerm x_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_11 (ATerm e_157 (ATerm), ATerm e_71, ATerm d_71, ATerm t);
ATerm genzip_4_0 (ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm p_11 (ATerm q_960, ATerm v_960, ATerm p_97, ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_86 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t);
static ATerm k_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_11 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm u_100, ATerm r_100, ATerm z_100, ATerm v_100, ATerm s_100, ATerm t_100, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm b_41 (ATerm n_39, ATerm o_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
ATerm debug_1_0 (ATerm e_145 (ATerm), ATerm t);
static ATerm u_11 (ATerm w_85, ATerm x_85, ATerm y_85, ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm v_11 (ATerm t_85, ATerm u_85, ATerm v_85, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm check_ext_overload_0_0 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
ATerm ExtDefinitions_0_0 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm w_11 (ATerm t_149 (ATerm), ATerm s_46, ATerm p_46, ATerm t);
static ATerm x_11 (ATerm m_157 (ATerm), ATerm n_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t);
static ATerm y_11 (ATerm j_157 (ATerm), ATerm g_71, ATerm f_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm a_12 (ATerm l_48, ATerm m_48, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm o_160 (ATerm), ATerm p_160 (ATerm), ATerm q_160 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t);
static ATerm b_12 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm c_12 (ATerm c_36, ATerm d_36, ATerm t);
static ATerm e_12 (ATerm g_145 (ATerm), ATerm u_290, ATerm i_36, ATerm t);
static ATerm d_12 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm output_1_0 (ATerm j_171 (ATerm), ATerm t);
static ATerm o_99 (ATerm i_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_12 (ATerm e_36, ATerm t);
static ATerm g_12 (ATerm r_80, ATerm s_80, ATerm t);
static ATerm h_12 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_101 (ATerm y_99, ATerm t);
static ATerm k_101 (ATerm c_100, ATerm d_100, ATerm e_100, ATerm t);
static ATerm l_101 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t);
static ATerm i_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_171 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm default_system_usage_2_0 (ATerm i_173 (ATerm), ATerm j_173 (ATerm), ATerm t);
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
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_12 (ATerm s_41, ATerm t_41, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_12 (ATerm a_48, ATerm b_48, ATerm z_47, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_12 (ATerm r_44, ATerm s_44, ATerm t);
ATerm foldr_2_0 (ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_146 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_12 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm t);
ATerm lookup_table_0_1 (ATerm m_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_52, ATerm y_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_12 (ATerm u_52, ATerm v_52, ATerm t);
static ATerm m_12 (ATerm z_52, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_155 (ATerm), ATerm t);
static ATerm t_12 (ATerm s_52, ATerm t_52, ATerm t);
static ATerm o_12 (ATerm t_49, ATerm u_49, ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm q_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm d_173 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm parse_options_3_0 (ATerm a_173 (ATerm), ATerm b_173 (ATerm), ATerm c_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm f_171 (ATerm), ATerm g_171 (ATerm), ATerm h_171 (ATerm), ATerm t);
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
        t = a_12(w_1, s_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("x_1", 0, ATtrue)))
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
          t = a_12(h_3, v_2, t);
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
ATerm filter_1_0 (ATerm q_161 (ATerm), ATerm t)
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
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 = NULL,e_4 = NULL,g_4 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(p_2);
            b_4 = t;
            t = q_2;
            t = q_161(t);
            e_4 = t;
            t = r_2;
            t = filter_1_0(q_161, t);
            g_4 = t;
            t = (ATerm) ATinsert(CheckATermList(g_4), e_4);
            a_0 = t;
            t = SSLsetAnnotations(a_0, b_4);
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            t = r_2;
            t = filter_1_0(q_161, t);
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
          t = w_11(b_0, b_3, c_3, t);
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
          t = w_11(i_0, f_3, g_3, t);
          t = w_2;
        }
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
    }
  return(t);
}
static ATerm d_10 (ATerm h_111, ATerm g_111, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,h_0 = NULL,e_0 = NULL,c_0 = NULL;
  t = g_111;
  t = topdown_1_0(k_0, t);
  t = h_111;
  if(match_cons(t, sym_Signature_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_111);
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
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, g_111)), k_3));
  return(t);
}
static ATerm f_10 (ATerm x_83, ATerm y_83, ATerm z_83, ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  t = term_k_17;
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
            ATerm w_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
              {
                ATerm x_17 = ATgetFirst((ATermList) w_17);
                ATerm z_17 = (ATerm) ATgetNext((ATermList) w_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm b_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(m_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_18;
            }
        }
        t = term_k_17;
        e_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_e_18);
        f_5 = t;
        t = SSL_printnl(e_5, f_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_e_18);
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
ATerm sboundin_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      {
        ATerm z_6 = NULL,h_7 = NULL,i_7 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(c_15);
        z_6 = t;
        t = d_15;
        t = l_136(t);
        h_7 = t;
        t = e_15;
        t = l_136(t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_7, i_7);
        u_0 = t;
        t = SSLsetAnnotations(u_0, z_6);
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
            ATerm u_7 = NULL,a_8 = NULL,d_8 = NULL,h_8 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(c_15);
            u_7 = t;
            t = d_15;
            t = n_136(t);
            a_8 = t;
            t = e_15;
            t = n_136(t);
            d_8 = t;
            t = b_15;
            t = l_136(t);
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_8, d_8, h_8);
            w_0 = t;
            t = SSLsetAnnotations(w_0, u_7);
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
                ATerm m_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(c_15);
                m_9 = t;
                t = d_15;
                t = n_136(t);
                z_9 = t;
                t = e_15;
                t = n_136(t);
                a_10 = t;
                t = b_15;
                t = n_136(t);
                b_10 = t;
                t = a_15;
                t = l_136(t);
                c_10 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_9, a_10, b_10, c_10);
                x_0 = t;
                t = SSLsetAnnotations(x_0, m_9);
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
                    ATerm u_10 = NULL,b_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,c_1 = NULL;
                    t = SSLgetAnnotations(c_15);
                    u_10 = t;
                    t = d_15;
                    t = n_136(t);
                    b_11 = t;
                    t = e_15;
                    t = n_136(t);
                    f_11 = t;
                    t = b_15;
                    t = n_136(t);
                    g_11 = t;
                    t = a_15;
                    t = l_136(t);
                    h_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_11, f_11, g_11, h_11);
                    c_1 = t;
                    t = SSLsetAnnotations(c_1, u_10);
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
                        ATerm n_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(c_15);
                        n_12 = t;
                        t = d_15;
                        t = n_136(t);
                        x_12 = t;
                        t = e_15;
                        t = n_136(t);
                        y_12 = t;
                        t = b_15;
                        t = n_136(t);
                        z_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, x_12, y_12, z_12);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, n_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_15 = ATgetArgument(t, 0);
                          e_15 = ATgetArgument(t, 1);
                          {
                            ATerm j_13 = NULL,m_13 = NULL,n_13 = NULL,f_1 = NULL;
                            t = SSLgetAnnotations(c_15);
                            j_13 = t;
                            t = d_15;
                            t = n_136(t);
                            m_13 = t;
                            t = e_15;
                            t = l_136(t);
                            n_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, m_13, n_13);
                            f_1 = t;
                            t = SSLsetAnnotations(f_1, j_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_15 = ATgetArgument(t, 0);
                              e_15 = ATgetArgument(t, 1);
                              {
                                ATerm x_13 = NULL,a_14 = NULL,b_14 = NULL,i_1 = NULL;
                                t = SSLgetAnnotations(c_15);
                                x_13 = t;
                                t = d_15;
                                t = n_136(t);
                                a_14 = t;
                                t = e_15;
                                t = l_136(t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_14, b_14);
                                i_1 = t;
                                t = SSLsetAnnotations(i_1, x_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_15 = ATgetArgument(t, 0);
                                  e_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_14 = NULL,o_15 = NULL,p_15 = NULL,m_1 = NULL;
                                    t = SSLgetAnnotations(c_15);
                                    s_14 = t;
                                    t = d_15;
                                    t = n_136(t);
                                    o_15 = t;
                                    t = e_15;
                                    t = l_136(t);
                                    p_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, o_15, p_15);
                                    m_1 = t;
                                    t = SSLsetAnnotations(m_1, s_14);
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
                                  t = n_136(t);
                                  c_16 = t;
                                  t = e_15;
                                  t = l_136(t);
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
ATerm dynrule_sargs_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL,s_16 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = o_16;
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
        ATerm p_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                o_16 = ATgetArgument(t, 0);
                {
                  ATerm v_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_18);
            t = o_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm w_18 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm x_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = s_16;
          }
        else
          {
            t = p_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                o_16 = ATgetArgument(t, 0);
                {
                  ATerm a_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = o_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_19 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                {
                  ATerm e_19 = ATgetArgument(t, 2);
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
  ATerm a_18 = NULL;
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_18 = ATgetArgument(t, 0);
          {
            ATerm m_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_19);
      t = a_18;
    }
  else
    {
      t = j_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_18;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_19 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
          {
            ATerm r_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_19);
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
            ATerm u_19 = ATgetArgument(t, 3);
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
  ATerm o_18 = NULL;
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_18 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
          {
            ATerm z_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_19);
      t = o_18;
    }
  else
    {
      t = v_19;
      if(match_cons(t, sym_SDefT_4))
        {
          o_18 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
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
      t = o_18;
    }
  return(t);
}
static ATerm l_10 (ATerm k_29, ATerm j_29, ATerm t)
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
  t = y_11(r_1, c_17, d_17, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      if((j_17 != ATgetArgument(t, 1)))
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
  ATerm y_17 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(z_1, y_17, c_18, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      if((d_18 != ATgetArgument(t, 1)))
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
ATerm free_vars2_4_0 (ATerm a_164 (ATerm), ATerm b_164 (ATerm), ATerm c_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_164 (ATerm), ATerm t)
{
  static ATerm m_21 (ATerm t);
  static ATerm m_21 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
    s_20 = t;
    {
      ATerm e_20 = t;
      int g_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_164(t);
          LocalPopChoice(g_20);
        }
      else
        {
          t = e_20;
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
          ATerm t_20 = NULL,p_16 = NULL,v_16 = NULL;
          t = b_164(t);
          t_20 = t;
          t = s_20;
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              ATerm i_16 = NULL;
              t = m_21(t);
              i_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_16, t_20);
              t = k_11(d_164, i_16, t_20, t);
              return(t);
            }
            t = c_164(a_1, m_21, g_1, t);
          }
          v_16 = t;
          t = SSL_explode_term(v_16);
          if(match_cons(t, sym__2))
            {
              ATerm j_20 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_16;
          t = foldr_3_0(k_1, o_1, _id, t);
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          {
            ATerm l_17 = NULL;
            t = SSL_explode_term(s_20);
            if(match_cons(t, sym__2))
              {
                ATerm k_20 = ATgetArgument(t, 0);
                l_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_17;
            t = foldr_3_0(u_1, y_1, m_21, t);
          }
        }
    }
    r_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
    t = y_11(a_2, q_20, r_20, t);
    return(t);
  }
  t = m_21(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if(match_cons(l_20, sym_SVar_1))
        {
          t_21 = ATgetArgument(l_20, 0);
        }
      else
        _fail(t);
      u_21 = ATgetArgument(t, 1);
      v_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_21;
  t = foldr_3_0(e_2, f_2, g_2, t);
  y_21 = t;
  t = v_21;
  t = foldr_3_0(h_2, i_2, j_2, t);
  z_21 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_21, (ATerm) ATmakeAppl(sym__2, y_21, z_21)));
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
          t = l_10(m_22, n_22, t);
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
  t = term_y_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm c_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(c_22, g_22, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_20;
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
  t = j_12(j_22, k_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_22 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_22 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = z_22;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_22;
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
ATerm escape_chars_1_0 (ATerm b_166 (ATerm), ATerm t)
{
  static ATerm t_36 (ATerm t);
  static ATerm t_36 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,o_35 = NULL,n_2 = NULL;
        t = b_166(t);
        o_35 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_35 = ATgetFirst((ATermList) t);
            j_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_35);
        g_35 = t;
        t = j_35;
        t = Cons_2_0(_id, t_36, t);
        k_35 = t;
        t = (ATerm) ATinsert(CheckATermList(k_35), i_35);
        n_2 = t;
        t = SSLsetAnnotations(n_2, g_35);
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
                ATerm b_20 = NULL,f_20 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(s_36);
                b_20 = t;
                t = r_36;
                t = t_36(t);
                f_20 = t;
                t = (ATerm) ATinsert(CheckATermList(f_20), q_36);
                o_2 = t;
                t = SSLsetAnnotations(o_2, b_20);
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
static ATerm n_47 (ATerm c_39, ATerm d_39, ATerm t)
{
  t = c_39;
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,q_39 = NULL,f_4 = NULL;
        q_39 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_39);
        j_39 = t;
        t = l_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_39), k_39);
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, c_39);
  return(t);
}
static ATerm o_47 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = SSL_explode_string(r_39);
  t = escape_chars_1_0(t_2, t);
  x_39 = t;
  t = SSL_implode_string(x_39);
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, w_39, s_39);
  return(t);
}
static ATerm p_47 (ATerm n_40, ATerm o_40, ATerm t)
{
  t = n_40;
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,u_40 = NULL,h_4 = NULL;
        u_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_40 = ATgetFirst((ATermList) t);
            s_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_40);
        q_40 = t;
        t = s_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(s_40), r_40);
        h_4 = t;
        t = SSLsetAnnotations(h_4, q_40);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, n_40);
  return(t);
}
static ATerm r_47 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm a_41 = NULL;
  t = x_40;
  {
    ATerm x_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_d_22;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_f_22;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_h_22;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_i_22;
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
        LocalPopChoice(b_22);
      }
    else
      {
        t = x_21;
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
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, a_41);
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_40), term_a_23), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_21 = ATgetFirst((ATermList) t);
      b_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_21;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_21), term_x_22), term_w_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_21), term_w_22), term_w_22);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(b_21), term_y_22), term_w_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(b_21), term_a_23), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, j_42), i_42));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_23, (ATerm) ATinsert(ATinsert(ATempty, q_42), p_42));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_45 = NULL,s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, s_45), p_45));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, v_45), u_45));
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_46 = NULL,l_46 = NULL,q_21 = NULL;
  h_46 = t;
  t = SSL_explode_term(h_46);
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            l_46 = ATgetFirst((ATermList) k_23);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, q_21), l_46));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
  m_41 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
      {
        ATerm p_20 = NULL,v_20 = NULL;
        t = SSL_explode_string(n_41);
        t = escape_chars_1_0(u_2, t);
        v_20 = t;
        t = SSL_implode_string(v_20);
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_20), o_41);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          n_41 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, n_41));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              n_41 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, n_41));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  n_41 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, n_41));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      n_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, n_41));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          n_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              n_41 = ATgetArgument(t, 0);
                              o_41 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_41), o_41);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  n_41 = ATgetArgument(t, 0);
                                  o_41 = ATgetArgument(t, 1);
                                  {
                                    static ATerm y_2 (ATerm t);
                                    static ATerm y_2 (ATerm t)
                                    {
                                      t = o_41;
                                      return(t);
                                    }
                                    t = n_41;
                                    t = foldr_2_0(y_2, z_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      n_41 = ATgetArgument(t, 0);
                                      t = n_41;
                                      t = foldr_2_0(a_3, d_3, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          n_41 = ATgetArgument(t, 0);
                                          o_41 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATinsert(CheckATermList(o_41), n_41));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              n_41 = ATgetArgument(t, 0);
                                              t = n_41;
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
                                                          t = n_47(n_41, m_41, t);
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
                                                      t = n_47(n_41, m_41, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = n_47(n_41, m_41, t);
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
                                                      n_41 = ATgetArgument(t, 0);
                                                      o_41 = ATgetArgument(t, 1);
                                                      t = o_41;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          h_41 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, h_41), n_41));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          n_41 = ATgetArgument(t, 0);
                                                          t = n_41;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              n_41 = ATgetArgument(t, 0);
                                                              o_41 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, n_41, o_41, term_x_23);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  n_41 = ATgetArgument(t, 0);
                                                                  o_41 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, n_41, o_41, term_x_23);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      n_41 = ATgetArgument(t, 0);
                                                                      o_41 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, n_41, (ATerm)ATempty, o_41);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          n_41 = ATgetArgument(t, 0);
                                                                          o_41 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, o_41, n_41);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              n_41 = ATgetArgument(t, 0);
                                                                              o_41 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, n_41, o_41, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  n_41 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, n_41, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      n_41 = ATgetArgument(t, 0);
                                                                                      o_41 = ATgetArgument(t, 1);
                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, n_41, o_41, (ATerm)ATempty, l_41);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          n_41 = ATgetArgument(t, 0);
                                                                                          o_41 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, n_41, (ATerm)ATempty, (ATerm)ATempty, o_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              n_41 = ATgetArgument(t, 0);
                                                                                              o_41 = ATgetArgument(t, 1);
                                                                                              l_41 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_41, o_41, (ATerm)ATempty, l_41);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  n_41 = ATgetArgument(t, 0);
                                                                                                  o_41 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, n_41, (ATerm)ATempty, (ATerm)ATempty, o_41);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      n_41 = ATgetArgument(t, 0);
                                                                                                      o_41 = ATgetArgument(t, 1);
                                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, n_41, o_41, (ATerm)ATempty, l_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          n_41 = ATgetArgument(t, 0);
                                                                                                          o_41 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_41, (ATerm)ATempty, (ATerm)ATempty, o_41);
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
                                                                                                                  o_41 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(z_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, o_41);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_23;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  n_41 = ATgetArgument(t, 0);
                                                                                                                  o_41 = ATgetArgument(t, 1);
                                                                                                                  t = o_47(n_41, o_41, m_41, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      n_41 = ATgetArgument(t, 0);
                                                                                                                      o_41 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm e_3 (ATerm t);
                                                                                                                        static ATerm e_3 (ATerm t)
                                                                                                                        {
                                                                                                                          t = o_41;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = n_41;
                                                                                                                        t = foldr_2_0(e_3, q_3, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          n_41 = ATgetArgument(t, 0);
                                                                                                                          t = n_41;
                                                                                                                          t = foldr_2_0(s_3, v_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              n_41 = ATgetArgument(t, 0);
                                                                                                                              t = n_41;
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
                                                                                                                                          t = p_47(n_41, m_41, t);
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
                                                                                                                                      t = p_47(n_41, m_41, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_47(n_41, m_41, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  n_41 = ATgetArgument(t, 0);
                                                                                                                                  o_41 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm b_46 = NULL;
                                                                                                                                    t = o_41;
                                                                                                                                    t = foldr_2_0(w_3, z_3, t);
                                                                                                                                    b_46 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, n_41, b_46);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      n_41 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, n_41, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          n_41 = ATgetArgument(t, 0);
                                                                                                                                          t = r_47(n_41, m_41, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm e_24 = t;
                                                                                                                                          int l_24 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  n_41 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm m_24 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  l_41 = ATgetArgument(t, 2);
                                                                                                                                                  k_41 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(l_24);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, n_41, l_41, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_41), (ATerm) ATempty));
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
                                                                                                                                                        n_41 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm q_24 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        l_41 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(p_24);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, n_41, l_41, term_v_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = o_24;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        n_41 = ATgetArgument(t, 0);
                                                                                                                                                        o_41 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, n_41, o_41, term_v_24);
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
  ATerm t_47 = NULL,u_47 = NULL,y_47 = NULL;
  u_47 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
      {
        ATerm j_48 = NULL,p_48 = NULL,s_48 = NULL,t_48 = NULL;
        t = u_47;
        t = new_0_0(t);
        j_48 = t;
        t = new_0_0(t);
        p_48 = t;
        t = new_0_0(t);
        s_48 = t;
        t = new_0_0(t);
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_48), s_48), p_48), j_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_48), (ATerm) ATmakeAppl(sym_Var_1, s_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_47, (ATerm)ATmakeAppl(sym_Var_1, j_48), (ATerm) ATmakeAppl(sym_Var_1, p_48)), (ATerm) ATmakeAppl(sym_BAM_3, t_47, (ATerm)ATmakeAppl(sym_Var_1, s_48), (ATerm) ATmakeAppl(sym_Var_1, t_48)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_48)), (ATerm) ATmakeAppl(sym_Var_1, p_48))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_47 = ATgetArgument(t, 0);
          {
            ATerm u_48 = NULL,v_48 = NULL,e_49 = NULL,f_49 = NULL;
            t = u_47;
            t = new_0_0(t);
            e_49 = t;
            t = y_47;
            {
              static ATerm a_4 (ATerm t);
              static ATerm a_4 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_48 != NULL) && (u_48 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_48 = ATgetArgument(t, 0);
                    if(((v_48 != NULL) && (v_48 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_49);
                return(t);
              }
              t = oncetd_1_0(a_4, t);
            }
            f_49 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_48)), not_null(u_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_49)), (ATerm) ATmakeAppl(sym_Build_1, f_49))));
          }
        }
      else
        {
          ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,r_49 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              y_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_47;
          t = new_0_0(t);
          j_49 = t;
          t = new_0_0(t);
          k_49 = t;
          t = y_47;
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
              t = (ATerm) ATmakeAppl(sym_Var_1, j_49);
              return(t);
            }
            t = oncetd_1_0(c_4, t);
          }
          r_49 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_49), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_49)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_49))))), (ATerm)ATmakeAppl(sym_Var_1, j_49), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_49)), not_null(h_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_50 = NULL,i_50 = NULL,m_50 = NULL,o_50 = NULL;
        t = w_49;
        t = new_0_0(t);
        m_50 = t;
        t = x_49;
        {
          static ATerm d_4 (ATerm t);
          static ATerm d_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_50 != NULL) && (g_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_50 = ATgetArgument(t, 0);
                if(((i_50 != NULL) && (i_50 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_50), g_50);
            return(t);
          }
          t = pat_td_1_0(d_4, t);
        }
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_50), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_50))))));
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
              t = w_49;
              t = new_0_0(t);
              r_50 = t;
              t = x_49;
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
                t = w_49;
                t = new_0_0(t);
                w_50 = t;
                t = x_49;
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
ATerm pat_td_1_0 (ATerm e_176 (ATerm), ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_176(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
        h_54 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_54 = ATgetArgument(t, 0);
            j_54 = ATgetArgument(t, 1);
            {
              ATerm a_22 = NULL,e_22 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(h_54);
              a_22 = t;
              t = j_54;
              {
                static ATerm m_4 (ATerm t);
                static ATerm m_4 (ATerm t)
                {
                  t = pat_td_1_0(e_176, t);
                  return(t);
                }
                t = fetch_1_0(m_4, t);
              }
              e_22 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_54, e_22);
              k_4 = t;
              t = SSLsetAnnotations(k_4, a_22);
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
                      ATerm d_23 = NULL,g_23 = NULL,l_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      d_23 = t;
                      t = j_54;
                      t = pat_td_1_0(e_176, t);
                      g_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_54, g_23);
                      l_4 = t;
                      t = SSLsetAnnotations(l_4, d_23);
                      LocalPopChoice(i_25);
                    }
                  else
                    {
                      t = h_25;
                      {
                        ATerm k_24 = NULL,n_24 = NULL,n_4 = NULL;
                        t = SSLgetAnnotations(h_54);
                        k_24 = t;
                        t = i_54;
                        t = pat_td_1_0(e_176, t);
                        n_24 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, n_24, j_54);
                        n_4 = t;
                        t = SSLsetAnnotations(n_4, k_24);
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
                      ATerm g_25 = NULL,r_25 = NULL,o_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      g_25 = t;
                      t = g_54;
                      {
                        static ATerm q_4 (ATerm t);
                        static ATerm q_4 (ATerm t)
                        {
                          t = pat_td_1_0(e_176, t);
                          return(t);
                        }
                        t = fetch_1_0(q_4, t);
                      }
                      r_25 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_54, j_54, r_25);
                      o_4 = t;
                      t = SSLsetAnnotations(o_4, g_25);
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
                          ATerm j_26 = NULL,z_26 = NULL,p_4 = NULL;
                          t = SSLgetAnnotations(h_54);
                          j_26 = t;
                          t = g_54;
                          {
                            static ATerm w_4 (ATerm t);
                            static ATerm w_4 (ATerm t)
                            {
                              t = pat_td_1_0(e_176, t);
                              return(t);
                            }
                            t = fetch_1_0(w_4, t);
                          }
                          z_26 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_54, j_54, z_26);
                          p_4 = t;
                          t = SSLsetAnnotations(p_4, j_26);
                        }
                      }
                    else
                      {
                        ATerm k_27 = NULL,n_27 = NULL,r_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_54 = ATgetArgument(t, 0);
                            j_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_54);
                        k_27 = t;
                        t = j_54;
                        t = pat_td_1_0(e_176, t);
                        n_27 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_54, n_27);
                        r_4 = t;
                        t = SSLsetAnnotations(r_4, k_27);
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
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,u_55 = NULL,z_55 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      u_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, u_55, z_55);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          u_55 = ATgetArgument(t, 0);
          t = u_55;
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
              u_55 = ATgetArgument(t, 0);
              t = u_55;
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
                  u_55 = ATgetArgument(t, 0);
                  t = u_55;
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
                      u_55 = ATgetArgument(t, 0);
                      z_55 = ATgetArgument(t, 1);
                      s_55 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_55, (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, s_55), u_55)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          u_55 = ATgetArgument(t, 0);
                          z_55 = ATgetArgument(t, 1);
                          s_55 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, s_55)), u_55), (ATerm) ATmakeAppl(sym_Build_1, z_55)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              u_55 = ATgetArgument(t, 0);
                              z_55 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_55, (ATerm) ATmakeAppl(sym_Match_1, z_55));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  u_55 = ATgetArgument(t, 0);
                                  z_55 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_55), z_55);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      u_55 = ATgetArgument(t, 0);
                                      z_55 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_55), u_55);
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
  ATerm p_25 = t;
  if((PushChoice() == 0))
    {
      ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,t_5 = NULL;
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
      t_5 = t;
      t = SSLsetAnnotations(t_5, t_57);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_25;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
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
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
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
            b_58 = ATgetArgument(t_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_58), y_57), (ATerm) ATinsert(CheckATermList(b_58), z_57));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm c_58 = NULL,f_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_58 = ATgetFirst((ATermList) t);
      f_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_58, f_58);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          g_58 = ATgetArgument(u_25, 0);
          h_58 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            j_58 = ATgetArgument(v_25, 0);
            k_58 = ATgetArgument(v_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_58), g_58), (ATerm) ATinsert(CheckATermList(k_58), h_58));
  return(t);
}
static ATerm y_10 (ATerm z_105, ATerm a_106, ATerm b_106, ATerm t)
{
  ATerm c_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,s_57 = NULL,u_5 = NULL;
  t = b_106;
  t = fetch_1_0(b_5, t);
  t = b_106;
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
  l_57 = t;
  t = k_57;
  t = genzip_4_0(h_5, i_5, j_5, _id, t);
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
  u_5 = t;
  t = SSLsetAnnotations(u_5, i_57);
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
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
  t = (ATerm) ATmakeAppl(sym_Scope_2, c_57, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_57), (ATerm) ATmakeAppl(sym_CallT_3, z_105, a_106, h_57)));
  return(t);
}
static ATerm r_59 (ATerm q_58, ATerm t)
{
  ATerm x_58 = NULL;
  t = q_58;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_58), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_58)))), (ATerm) ATmakeAppl(sym_Var_1, x_58)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL;
  b_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_59 = ATgetArgument(t, 0);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_59(b_59, t);
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATmakeAppl(sym_Var_1, c_59)));
          }
      }
    }
  else
    {
      t = r_59(b_59, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_26 = t;
  if((PushChoice() == 0))
    {
      ATerm e_29 = NULL,g_29 = NULL,p_29 = NULL,b_6 = NULL;
      p_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_29);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_29);
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
  t = term_q_25;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm q_29 = NULL,s_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_29, s_29);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          u_29 = ATgetArgument(b_26, 0);
          v_29 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            w_29 = ATgetArgument(c_26, 0);
            x_29 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_29), u_29), (ATerm) ATinsert(CheckATermList(x_29), v_29));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_30 = NULL,j_30 = NULL,l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(match_cons(d_26, sym__2))
        {
          g_30 = ATgetArgument(d_26, 0);
          j_30 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(match_cons(e_26, sym__2))
          {
            l_30 = ATgetArgument(e_26, 0);
            m_30 = ATgetArgument(e_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_30), g_30), (ATerm) ATinsert(CheckATermList(m_30), j_30));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      ATerm u_31 = NULL,v_31 = NULL,z_31 = NULL,d_6 = NULL;
      z_31 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_31);
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_31);
      d_6 = t;
      t = SSLsetAnnotations(d_6, u_31);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
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
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym__2))
        {
          j_32 = ATgetArgument(g_26, 0);
          k_32 = ATgetArgument(g_26, 1);
        }
      else
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(match_cons(h_26, sym__2))
          {
            l_32 = ATgetArgument(h_26, 0);
            m_32 = ATgetArgument(h_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_32), j_32), (ATerm) ATinsert(CheckATermList(m_32), k_32));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_25;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_32 = NULL,s_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_32 = ATgetFirst((ATermList) t);
      s_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_32, s_32);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,b_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(match_cons(i_26, sym__2))
        {
          x_32 = ATgetArgument(i_26, 0);
          y_32 = ATgetArgument(i_26, 1);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(match_cons(k_26, sym__2))
          {
            z_32 = ATgetArgument(k_26, 0);
            b_33 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_32), x_32), (ATerm) ATinsert(CheckATermList(b_33), y_32));
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
        ATerm r_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,c_6 = NULL;
        t = z_63;
        t = fetch_1_0(k_5, t);
        t = z_63;
        t = genzip_4_0(n_5, o_5, p_5, LiftPrimArg_0_0, t);
        d_29 = t;
        if(match_cons(t, sym__2))
          {
            x_28 = ATgetArgument(t, 0);
            a_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_29);
        w_28 = t;
        t = x_28;
        t = concat_0_0(t);
        b_29 = t;
        t = a_29;
        t = genzip_4_0(q_5, r_5, s_5, _id, t);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
        c_6 = t;
        t = SSLsetAnnotations(c_6, w_28);
        if(match_cons(t, sym__2))
          {
            r_28 = ATgetArgument(t, 0);
            {
              ATerm l_26 = ATgetArgument(t, 1);
              if(match_cons(l_26, sym__2))
                {
                  u_28 = ATgetArgument(l_26, 0);
                  v_28 = ATgetArgument(l_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_28), (ATerm) ATmakeAppl(sym_PrimT_3, b_64, c_64, v_28)));
      }
    }
  else
    {
      ATerm a_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,s_31 = NULL,t_31 = NULL,e_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_64 = ATgetArgument(t, 0);
          c_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_64;
      t = fetch_1_0(v_5, t);
      t = c_64;
      t = genzip_4_0(w_5, x_5, y_5, LiftPrimArg_0_0, t);
      t_31 = t;
      if(match_cons(t, sym__2))
        {
          i_31 = ATgetArgument(t, 0);
          j_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_31);
      f_31 = t;
      t = i_31;
      t = concat_0_0(t);
      k_31 = t;
      t = j_31;
      t = genzip_4_0(a_6, f_6, g_6, _id, t);
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, s_31);
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
ATerm repeat_2_0 (ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t)
{
  static ATerm f_64 (ATerm t);
  static ATerm f_64 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_143(t);
        t = f_64(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = s_143(t);
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
        ATerm a_34 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(a_65);
        a_34 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_64, y_64, z_64);
        j_6 = t;
        t = SSLsetAnnotations(j_6, a_34);
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
  ATerm t_66 = NULL,u_66 = NULL,w_66 = NULL,x_66 = NULL;
  u_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
      t_66 = ATgetArgument(t, 2);
      {
        ATerm f_35 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(u_66);
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, w_66, x_66, t_66);
        l_6 = t;
        t = SSLsetAnnotations(l_6, f_35);
      }
    }
  else
    {
      ATerm h_36 = NULL,m_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          w_66 = ATgetArgument(t, 0);
          x_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_66);
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, w_66, x_66);
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
  ATerm g_67 = NULL,h_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      g_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_67;
  if(match_cons(t, sym_StratRule_3))
    {
      h_67 = ATgetArgument(t, 0);
      k_67 = ATgetArgument(t, 1);
      l_67 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_67), (ATerm) ATmakeAppl(sym_Where_1, l_67)), h_67));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          h_67 = ATgetArgument(t, 0);
          k_67 = ATgetArgument(t, 1);
          l_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_67;
      t = pureterm_0_0(t);
      t = k_67;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_67)), (ATerm) ATmakeAppl(sym_Where_1, l_67)), (ATerm) ATmakeAppl(sym_Match_1, h_67)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  static ATerm y_67 (ATerm t);
  static ATerm y_67 (ATerm t)
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_138(t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = SRTS_one(y_67, t);
      }
    return(t);
  }
  t = y_67(t);
  return(t);
}
static ATerm c_11 (ATerm m_101, ATerm n_101, ATerm o_101, ATerm t)
{
  ATerm z_67 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  t = new_0_0(t);
  f_68 = t;
  t = m_101;
  {
    static ATerm k_6 (ATerm t);
    static ATerm k_6 (ATerm t)
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
          if(((c_68 != NULL) && (c_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_68 = ATgetArgument(t, 1);
          {
            ATerm b_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, e_68);
      return(t);
    }
    t = oncetd_1_0(k_6, t);
  }
  g_68 = t;
  t = n_101;
  {
    static ATerm n_6 (ATerm t);
    static ATerm n_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_27 = ATgetArgument(t, 0);
          if(match_cons(c_27, sym_Var_1))
            {
              if(((e_68 != NULL) && (e_68 != ATgetArgument(c_27, 0))))
                _fail(ATgetArgument(c_27, 0));
              else
                e_68 = ATgetArgument(c_27, 0);
            }
          else
            _fail(t);
          if(((d_68 != NULL) && (d_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_68 = ATgetArgument(t, 1);
          {
            ATerm d_27 = ATgetArgument(t, 2);
            if(match_cons(d_27, sym_CallT_3))
              {
                if(((z_67 != NULL) && (z_67 != ATgetArgument(d_27, 0))))
                  _fail(ATgetArgument(d_27, 0));
                else
                  z_67 = ATgetArgument(d_27, 0);
                {
                  ATerm f_27 = ATgetArgument(d_27, 1);
                  if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
                    _fail(t);
                }
                {
                  ATerm g_27 = ATgetArgument(d_27, 2);
                  if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
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
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_68, h_68, (ATerm) ATmakeAppl(sym_Seq_2, o_101, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(z_67), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_68), not_null(d_68), term_x_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_68)), (ATerm) ATmakeAppl(sym_Var_1, f_68))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,h_69 = NULL;
          e_69 = t;
          if(match_cons(t, sym_SRule_1))
            {
              f_69 = ATgetArgument(t, 0);
              t = f_69;
              if(match_cons(t, sym_Rule_3))
                {
                  b_69 = ATgetArgument(t, 0);
                  c_69 = ATgetArgument(t, 1);
                  d_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_69;
              t = c_11(b_69, c_69, d_69, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_37 = NULL,d_37 = NULL,p_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  f_69 = ATgetArgument(t, 0);
                  h_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_69);
              a_37 = t;
              t = h_69;
              t = desugarRule_0_0(t);
              d_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, f_69, d_37);
              p_6 = t;
              t = SSLsetAnnotations(p_6, a_37);
            }
          LocalPopChoice(l_27);
        }
      else
        {
          t = j_27;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    t = topdown_1_0(r_137, t);
    return(t);
  }
  t = r_137(t);
  t = SRTS_all(o_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm m_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = m_27;
    }
  t = repeat_2_0(t_6, _id, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
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
            t = y_10(o_70, p_70, q_70, t);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  {
                    ATerm g_28 = t;
                    int h_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(h_28);
                      }
                    else
                      {
                        t = g_28;
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_28 = t;
                              int s_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_70 = NULL,w_70 = NULL,a_71 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_70 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_70;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      w_70 = ATgetArgument(t, 0);
                                      t = w_70;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          w_70 = ATgetArgument(t, 0);
                                          a_71 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, w_70, a_71);
                                    }
                                  LocalPopChoice(s_28);
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
                                ATerm t_28 = t;
                                int y_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(y_28);
                                  }
                                else
                                  {
                                    t = t_28;
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
      ATerm r_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_29 = ATgetArgument(t, 1);
        if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
          {
            b_72 = ATgetFirst((ATermList) t_29);
            {
              ATerm a_30 = (ATerm) ATgetNext((ATermList) t_29);
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
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            ATerm d_30 = ATgetFirst((ATermList) c_30);
            i_37 = (ATerm) ATgetNext((ATermList) c_30);
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
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm y_141 (ATerm), ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  static ATerm d_72 (ATerm t);
  static ATerm d_72 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
        w_71 = t;
        t = map_1_0(u_6, t);
        t = y_141(t);
        x_71 = t;
        t = w_71;
        t = map_1_0(v_6, t);
        t = d_72(t);
        y_71 = t;
        t = (ATerm) ATinsert(CheckATermList(y_71), x_71);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = map_1_0(x_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = d_72(t);
  v_71 = t;
  t = term_r_21;
  u_71 = t;
  t = SSL_mkterm(u_71, v_71);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
        t = e_72;
        t = new_0_0(t);
        i_72 = t;
        t = new_0_0(t);
        j_72 = t;
        t = new_0_0(t);
        k_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, e_72), (ATerm) ATmakeAppl(sym_Var_1, j_72))), (ATerm) ATmakeAppl(sym_Var_1, k_72)), (ATerm)ATmakeAppl(sym_VarDec_2, i_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), j_72, (ATerm)ATmakeAppl(sym_Var_1, j_72), k_72, (ATerm) ATmakeAppl(sym_Var_1, k_72));
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        {
          ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
          t = e_72;
          t = new_0_0(t);
          m_72 = t;
          t = new_0_0(t);
          n_72 = t;
          t = new_0_0(t);
          o_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, e_72), (ATerm) ATmakeAppl(sym_Var_1, n_72))), (ATerm) ATmakeAppl(sym_Var_1, o_72)), (ATerm)ATmakeAppl(sym_VarDec_2, m_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), n_72, (ATerm)ATmakeAppl(sym_Var_1, n_72), o_72, (ATerm) ATmakeAppl(sym_Var_1, o_72));
        }
      }
  }
  return(t);
}
static ATerm d_11 (ATerm x_44, ATerm y_44, ATerm t)
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
ATerm copy_1_0 (ATerm c_161 (ATerm), ATerm t)
{
  static ATerm e_7 (ATerm t);
  static ATerm e_7 (ATerm t)
  {
    ATerm w_72 = NULL,x_72 = NULL,a_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
    if(match_cons(t, sym__3))
      {
        w_72 = ATgetArgument(t, 0);
        x_72 = ATgetArgument(t, 1);
        a_73 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_72, term_z_20);
    t = geq_0_0(t);
    t = term_z_20;
    f_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_72, term_z_20);
    t = d_11(w_72, f_73, t);
    d_73 = t;
    t = x_72;
    t = c_161(t);
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_73, x_72, (ATerm) ATinsert(CheckATermList(a_73), e_73));
    return(t);
  }
  t = for_3_0(a_7, c_7, e_7, t);
  return(t);
}
static ATerm e_11 (ATerm a_83, ATerm b_83, ATerm t)
{
  ATerm i_73 = NULL,n_73 = NULL,q_73 = NULL;
  t = new_0_0(t);
  i_73 = t;
  t = new_0_0(t);
  n_73 = t;
  t = new_0_0(t);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_83)), (ATerm) ATmakeAppl(sym_Var_1, n_73))), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_83)), (ATerm) ATmakeAppl(sym_Var_1, q_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, i_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), n_73, (ATerm)ATmakeAppl(sym_Var_1, n_73), q_73, (ATerm) ATmakeAppl(sym_Var_1, q_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_73 = ATgetFirst((ATermList) t);
      x_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_73;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_73;
    }
  else
    {
      t = x_73;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm l_77 (ATerm x_74, ATerm a_75, ATerm c_75, ATerm d_75, ATerm t)
{
  ATerm k_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,s_75 = NULL,t_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,z_75 = NULL,c_76 = NULL,d_76 = NULL;
  t = term_z_20;
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_75, term_z_20);
  t = j_12(a_75, d_76, t);
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_76, term_t_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_75 = ATgetFirst((ATermList) t);
      o_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_75;
  t = last_0_0(t);
  k_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_75), n_75), o_75);
  t = genzip_4_0(f_7, g_7, j_7, k_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      t_75 = ATgetArgument(t, 2);
      v_75 = ATgetArgument(t, 3);
      w_75 = ATgetArgument(t, 4);
      x_75 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_75), t_75), o_75);
  t = concat_0_0(t);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, x_74, term_u_30), s_75, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(z_75), n_75), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_75)), (ATerm) ATmakeAppl(sym_Op_2, x_74, v_75))), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_75)), (ATerm) ATmakeAppl(sym_Op_2, x_74, x_75))), (ATerm) ATmakeAppl(sym_Seqs_1, p_75)))));
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
static ATerm f_7 (ATerm t)
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
static ATerm g_7 (ATerm t)
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
static ATerm j_7 (ATerm t)
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
static ATerm k_7 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  if(match_cons(t, sym__2))
    {
      k_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(k_76, l_76, t);
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
ATerm fetch_elem_1_0 (ATerm m_155 (ATerm), ATerm t)
{
  ATerm g_24 = NULL;
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = m_155(t);
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
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  t = term_k_17;
  i_24 = t;
  t = (ATerm) ATinsert(ATempty, term_y_31);
  j_24 = t;
  t = SSL_printnl(i_24, j_24);
  t = term_z_20;
  h_24 = t;
  t = SSL_exit(h_24);
  t = (ATerm) ATinsert(ATempty, term_y_31);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  ATerm d_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm j_33 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(g_33);
      t = k_18;
      t = foldr_3_0(s_7, t_7, v_7, t);
      t = j_18;
      t = foldr_3_0(w_7, x_7, y_7, t);
    }
  else
    {
      t = d_33;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm m_33 = ATgetArgument(t, 0);
          j_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
          {
            ATerm q_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_18;
      t = foldr_3_0(b_8, e_8, i_8, t);
      t = j_18;
      t = foldr_3_0(j_8, l_8, n_8, t);
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(q_18, r_18, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(t_18, u_18, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(y_18, z_18, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      b_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(b_19, d_19, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      ATerm u_33 = ATgetArgument(t, 1);
      ATerm w_33 = ATgetArgument(t, 2);
      ATerm x_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm z_33 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL;
      static ATerm n_7 (ATerm t);
      static ATerm n_7 (ATerm t)
      {
        ATerm t_24 = NULL,w_24 = NULL;
        t_24 = t;
        {
          ATerm k_34 = t;
          int l_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm n_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_34);
              t = w_24;
              if(((r_24 != NULL) && (r_24 != t)))
                _fail(t);
              else
                r_24 = t;
              t = t_24;
            }
          else
            {
              t = k_34;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm u_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm v_34 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm x_34 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = w_24;
              if(((r_24 != NULL) && (r_24 != t)))
                _fail(t);
              else
                r_24 = t;
              t = t_24;
            }
        }
        return(t);
      }
      t = fetch_1_0(n_7, t);
      {
        static ATerm o_7 (ATerm t);
        static ATerm o_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((r_24 != NULL) && (r_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_24 = ATgetArgument(t, 0);
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
        t = fetch_1_0(o_7, t);
      }
      t = not_null(r_24);
      t = debug_1_0(q_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = z_33;
      {
        ATerm p_26 = NULL;
        p_26 = t;
        t = map_1_0(r_7, t);
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
                ATerm f_19 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_19 = ATgetFirst((ATermList) t);
                    {
                      ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = f_19;
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
  ATerm s_26 = NULL,v_26 = NULL,l_19 = NULL;
  s_26 = t;
  t = SSL_explode_term(s_26);
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
          {
            v_26 = ATgetFirst((ATermList) h_35);
            {
              ATerm l_35 = (ATerm) ATgetNext((ATermList) h_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_26);
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
          {
            ATerm p_35 = ATgetFirst((ATermList) n_35);
            ATerm q_35 = (ATerm) ATgetNext((ATermList) n_35);
            if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
              {
                l_19 = ATgetFirst((ATermList) q_35);
                {
                  ATerm r_35 = (ATerm) ATgetNext((ATermList) q_35);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, v_26, l_19);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(q_8, t_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm j_139 (ATerm), ATerm t)
{
  static ATerm w_26 (ATerm t);
  static ATerm w_26 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_139(t);
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
static ATerm m_10 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  y_26 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        t = o_12(f_48, g_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            x_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_35);
        {
          ATerm e_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, f_48, g_48, x_26);
          t = lookup_table_0_1(f_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_12(g_48, x_26, e_27, t);
          t = (ATerm) ATmakeAppl(sym__3, f_48, g_48, x_26);
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
          t = l_12(g_48, o_27, t);
          t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        }
      }
  }
  t = y_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_149 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,y_27 = NULL;
  t_27 = t;
  t = q_149(t);
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
        t = o_12(s_27, z_27, t);
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
  u_27 = t;
  t = y_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(u_27, q_27, v_27, t);
  t = r_27;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      ATerm a_28 = NULL;
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, a_28);
      t = m_10(s_27, a_28, t);
      return(t);
    }
    t = map_1_0(u_8, t);
  }
  t = t_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_141(t);
      t = d_141(t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = g_36;
      t = d_141(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_149 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  i_28 = t;
  t = p_149(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_28, term_b_36);
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
        t = (ATerm) ATmakeAppl(sym__2, f_28, term_b_36);
        t = o_12(f_28, z_28, t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
  }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_28, term_b_36, (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty));
  t = lookup_table_0_1(f_28, t);
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
  t = s_12(k_28, l_28, m_28, t);
  t = i_28;
  return(t);
}
ATerm scope_2_0 (ATerm r_149 (ATerm), ATerm s_149 (ATerm), ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    t = end_scope_1_0(r_149, t);
    return(t);
  }
  t = begin_scope_1_0(r_149, t);
  t = restore_always_2_0(s_149, v_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_29 = NULL,h_29 = NULL,i_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
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
      n_29 = ATgetFirst((ATermList) t);
      o_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_29;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_29;
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
            t = (ATerm) ATmakeAppl(sym__2, l_29, o_29);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_29, o_29);
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
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
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
            q_31 = ATgetFirst((ATermList) x_36);
            r_31 = (ATerm) ATgetNext((ATermList) x_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_31, q_31), (ATerm) ATmakeAppl(sym__2, p_31, r_31));
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_31), w_31);
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
          t = genzip_4_0(w_8, x_8, z_8, _id, t);
          n_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_31, g_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    ATerm q_19 = NULL;
    t = a_137(t);
    q_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_19, not_null(b_32));
    t = lookup_0_0(t);
    t = b_137(t);
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
  t = alltd_1_0(a_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm h_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_32 = ATgetArgument(t, 0);
      {
        ATerm e_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_32;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm i_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_32;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm i_9 (ATerm t)
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
static ATerm j_9 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(((ATgetType(l_37) == AT_LIST) && !(ATisEmpty(l_37))))
        {
          p_32 = ATgetFirst((ATermList) l_37);
          q_32 = (ATerm) ATgetNext((ATermList) l_37);
        }
      else
        _fail(t);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(((ATgetType(m_37) == AT_LIST) && !(ATisEmpty(m_37))))
          {
            r_32 = ATgetFirst((ATermList) m_37);
            t_32 = (ATerm) ATgetNext((ATermList) m_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_32, r_32), (ATerm) ATmakeAppl(sym__2, q_32, t_32));
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_32), u_32);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm w_32 = NULL,a_33 = NULL,c_33 = NULL,e_33 = NULL,f_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(match_cons(n_37, sym_VarDec_2))
        {
          w_32 = ATgetArgument(n_37, 0);
          {
            ATerm p_37 = ATgetArgument(n_37, 1);
          }
        }
      else
        _fail(t);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_32);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, a_33);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, w_32), (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, a_33));
  t = w_11(o_9, e_33, f_33, t);
  t = c_33;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,w_19 = NULL;
  h_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_37;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_37, h_33);
  t = a_12(w_19, h_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_37) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_33;
  return(t);
}
static ATerm q_10 (ATerm a_85, ATerm b_85, ATerm f_85, ATerm c_85, ATerm e_85, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,g_32 = NULL;
  t = c_85;
  t = map_1_0(b_9, t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_32, b_85, e_85);
  t = substitute_2_0(c_9, _id, t);
  e_32 = t;
  {
    static ATerm f_9 (ATerm t);
    static ATerm f_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, f_85, a_85);
      t = genzip_4_0(i_9, j_9, l_9, n_9, t);
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
  ATerm b_34 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,r_6 = NULL;
  g_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_34);
  b_34 = t;
  t = c_34;
  t = new_0_0(t);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_34, e_34);
  r_6 = t;
  t = SSLsetAnnotations(r_6, b_34);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,m_34 = NULL,o_34 = NULL,s_6 = NULL;
  o_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_34);
  h_34 = t;
  t = i_34;
  t = new_0_0(t);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_34, j_34);
  s_6 = t;
  t = SSLsetAnnotations(s_6, h_34);
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
  ATerm q_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_34 = ATgetArgument(t, 0);
      {
        ATerm v_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_34);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,r_33 = NULL,t_33 = NULL,v_33 = NULL,y_33 = NULL;
  r_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_38 = ATgetFirst((ATermList) t);
      if(match_cons(a_38, sym_SDefT_4))
        {
          k_33 = ATgetArgument(a_38, 0);
          l_33 = ATgetArgument(a_38, 1);
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
  t = l_33;
  t = map_1_0(q_9, t);
  o_33 = t;
  t = n_33;
  t = map_1_0(r_9, t);
  p_33 = t;
  t = o_33;
  t = map_1_0(s_9, t);
  t_33 = t;
  t = p_33;
  t = map_1_0(t_9, t);
  v_33 = t;
  t = r_33;
  {
    static ATerm u_9 (ATerm t);
    static ATerm u_9 (ATerm t)
    {
      ATerm r_34 = NULL,t_34 = NULL,w_34 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm d_38 = ATgetArgument(t, 0);
          r_34 = ATgetArgument(t, 1);
          t_34 = ATgetArgument(t, 2);
          w_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_10(t_33, v_33, r_34, t_34, w_34, t);
      return(t);
    }
    t = map_1_0(u_9, t);
  }
  t = choices_0_0(t);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_33, o_33, p_33, y_33);
  return(t);
}
static ATerm y_78 (ATerm t_77, ATerm u_77, ATerm v_77, ATerm w_77, ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,h_78 = NULL,w_6 = NULL;
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
  d_78 = t;
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
  e_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_78, v_77);
  w_6 = t;
  t = SSLsetAnnotations(w_6, d_78);
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
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, m_78, n_78, r_78);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            x_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_78, s_78);
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
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
ATerm at_end_1_0 (ATerm r_155 (ATerm), ATerm t)
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
          ATerm o_37 = NULL,r_37 = NULL,y_6 = NULL;
          t = SSLgetAnnotations(s_79);
          o_37 = t;
          t = r_79;
          t = t_79(t);
          r_37 = t;
          t = (ATerm) ATinsert(CheckATermList(r_37), q_79);
          y_6 = t;
          t = SSLsetAnnotations(y_6, o_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_79;
        t = r_155(t);
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
static ATerm k_11 (ATerm e_157 (ATerm), ATerm e_71, ATerm d_71, ATerm t)
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
                static ATerm x_9 (ATerm t);
                static ATerm x_9 (ATerm t)
                {
                  t = d_71;
                  return(t);
                }
                t = x_11(e_157, x_9, t_80, u_80, t);
              }
              t = x_80(t);
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                ATerm e_38 = NULL,n_38 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(q_80);
                e_38 = t;
                t = u_80;
                t = x_80(t);
                n_38 = t;
                t = (ATerm) ATinsert(CheckATermList(n_38), t_80);
                b_7 = t;
                t = SSLsetAnnotations(b_7, e_38);
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
ATerm genzip_4_0 (ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  static ATerm f_81 (ATerm t);
  static ATerm f_81 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_142(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,d_7 = NULL;
          t = j_142(t);
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
          t = l_142(t);
          c_81 = t;
          t = b_81;
          t = f_81(t);
          d_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_81, d_81);
          d_7 = t;
          t = SSLsetAnnotations(d_7, z_80);
          t = k_142(t);
        }
      }
    return(t);
  }
  t = f_81(t);
  return(t);
}
static ATerm y_9 (ATerm t)
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
static ATerm e_10 (ATerm t)
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
static ATerm p_11 (ATerm q_960, ATerm v_960, ATerm p_97, ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
  t = SSL_explode_term(v_960);
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_960);
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
  t = genzip_4_0(y_9, e_10, g_10, _id, t);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, p_97);
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
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,m_7 = NULL;
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
  m_7 = t;
  t = SSLsetAnnotations(m_7, p_83);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm z_84 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
  z_84 = t;
  if(match_cons(t, sym__2))
    {
      j_85 = ATgetArgument(t, 0);
      k_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_85 = ATgetFirst((ATermList) t);
      m_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_86(j_85, k_85, z_84, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_85), l_85), m_85);
          }
      }
    }
  else
    {
      t = k_86(j_85, k_85, z_84, t);
    }
  return(t);
}
static ATerm k_86 (ATerm t_83, ATerm u_83, ATerm v_83, ATerm t)
{
  ATerm w_83 = NULL,c_84 = NULL,p_7 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
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
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_84;
        if((g_84 != t))
          {
            _fail(t);
          }
        t = i_84;
        LocalPopChoice(e_39);
      }
    else
      {
        t = b_39;
        t = u_83;
        t = p_11(g_84, h_84, i_84, t);
      }
  }
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_83, c_84);
  p_7 = t;
  t = SSLsetAnnotations(p_7, w_83);
  return(t);
}
static ATerm k_10 (ATerm t)
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
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_10, i_10, j_10, t);
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      {
        ATerm q_85 = NULL,r_85 = NULL,z_85 = NULL;
        q_85 = t;
        if(match_cons(t, sym__2))
          {
            r_85 = ATgetArgument(t, 0);
            z_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_85;
        t = k_11(k_10, r_85, z_85, t);
      }
    }
  return(t);
}
static ATerm r_11 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm u_100, ATerm r_100, ATerm z_100, ATerm v_100, ATerm s_100, ATerm t_100, ATerm t)
{
  ATerm n_86 = NULL,t_86 = NULL,w_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,e_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_100, v_100);
  t = a_176(t);
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_86;
  t = b_176(t);
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_86, z_100);
  t = diff_0_0(t);
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, r_100);
  t = conc_0_0(t);
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, z_100);
  t = conc_0_0(t);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_100, t_86, s_100);
  t = c_176(t);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, a_87, b_87, n_86, e_87, t_100);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm t)
{
  ATerm g_87 = NULL,j_87 = NULL,m_87 = NULL,q_87 = NULL,t_87 = NULL,w_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
        {
          g_87 = ATgetFirst((ATermList) i_39);
          j_87 = (ATerm) ATgetNext((ATermList) i_39);
        }
      else
        _fail(t);
      m_87 = ATgetArgument(t, 1);
      q_87 = ATgetArgument(t, 2);
      t_87 = ATgetArgument(t, 3);
      w_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = r_11(a_176, b_176, c_176, g_87, j_87, m_87, q_87, t_87, w_87, t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm t)
{
  static ATerm x_87 (ATerm t);
  static ATerm x_87 (ATerm t)
  {
    ATerm m_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_144(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = m_39;
        t = j_144(t);
        t = x_87(t);
      }
    return(t);
  }
  t = x_87(t);
  return(t);
}
ATerm for_3_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm t)
{
  t = l_144(t);
  t = while_not_2_0(m_144, n_144, t);
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
static ATerm o_10 (ATerm t)
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
        ATerm y_39 = ATgetArgument(t, 2);
      }
      s_88 = ATgetArgument(t, 3);
      t_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_88, t_88);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm z_39 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, r_10, s_10, t);
      LocalPopChoice(f_40);
    }
  else
    {
      t = z_39;
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
  t = map_1_0(t_10, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      w_88 = ATgetArgument(t, 1);
      x_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_88), w_88);
  return(t);
}
static ATerm t_10 (ATerm t)
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
  ATerm c_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_40;
  if(match_cons(t, sym_Mod_2))
    {
      c_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
      {
        ATerm p_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_40;
            t = f_10(c_40, h_40, k_40, t);
            LocalPopChoice(t_40);
          }
        else
          {
            t = p_40;
            t = b_41(j_40, k_40, t);
          }
      }
    }
  else
    {
      t = b_41(j_40, k_40, t);
    }
  return(t);
}
static ATerm b_41 (ATerm n_39, ATerm o_39, ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = term_k_17;
  a_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), o_39), term_o_17), n_39), term_m_17);
  b_40 = t;
  t = SSL_printnl(a_40, b_40);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), o_39), term_o_17), n_39), term_m_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  t = for_3_0(n_10, o_10, p_10, t);
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
      ATerm f_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_90 = ATgetFirst((ATermList) t);
          m_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_90), l_90);
      t = map_1_0(v_10, t);
      t = term_z_20;
      f_39 = t;
      t = SSL_exit(f_39);
    }
  return(t);
}
ATerm debug_1_0 (ATerm e_145 (ATerm), ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  t = e_145(t);
  r_90 = t;
  t = term_k_17;
  s_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_90), r_90);
  t_90 = t;
  t = SSL_printnl(s_90, t_90);
  t = q_90;
  return(t);
}
static ATerm u_11 (ATerm w_85, ATerm x_85, ATerm y_85, ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  t = SSL_int_to_string(x_85);
  v_90 = t;
  t = SSL_int_to_string(y_85);
  w_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_40), w_90), term_w_40), v_90), term_v_40), w_85);
  x_90 = t;
  t = SSL_concat_strings(x_90);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  if(match_cons(t, sym__2))
    {
      b_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(b_91, c_91, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(d_91, e_91, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm v_11 (ATerm t_85, ATerm u_85, ATerm v_85, ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL;
  t = u_85;
  t = foldr_3_0(w_10, x_10, z_10, t);
  y_90 = t;
  t = v_85;
  t = foldr_3_0(a_11, i_11, j_11, t);
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_85, (ATerm) ATmakeAppl(sym__2, y_90, z_90));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm h_91 = NULL;
  h_91 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm e_41 = ATgetArgument(t, 0);
            ATerm f_41 = ATgetArgument(t, 1);
            ATerm p_41 = ATgetArgument(t, 2);
            ATerm q_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        LocalPopChoice(d_41);
        {
          ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              i_91 = ATgetArgument(t, 0);
              j_91 = ATgetArgument(t, 1);
              k_91 = ATgetArgument(t, 2);
              {
                ATerm r_41 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = v_11(i_91, j_91, k_91, t);
          {
            ATerm u_41 = t;
            int v_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_91 = NULL;
                l_91 = t;
                t = ExtDefinitions_0_0(t);
                {
                  ATerm w_41 = t;
                  if((PushChoice() == 0))
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = w_41;
                    }
                }
                t = l_91;
                LocalPopChoice(v_41);
                {
                  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      n_91 = ATgetArgument(t, 0);
                      {
                        ATerm x_41 = ATgetArgument(t, 1);
                        if(match_cons(x_41, sym__2))
                          {
                            o_91 = ATgetArgument(x_41, 0);
                            p_91 = ATgetArgument(x_41, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = u_11(n_91, o_91, p_91, t);
                  t = debug_1_0(m_11, t);
                  t = term_z_20;
                  m_91 = t;
                  t = SSL_exit(m_91);
                }
              }
            else
              {
                t = u_41;
              }
          }
        }
      }
    else
      {
        t = c_41;
      }
  }
  t = h_91;
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
static ATerm n_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL;
  if(match_cons(t, sym__2))
    {
      j_92 = ATgetArgument(t, 0);
      k_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(j_92, k_92, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL;
  if(match_cons(t, sym__2))
    {
      l_92 = ATgetArgument(t, 0);
      m_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(l_92, m_92, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm n_92 = NULL;
  if(match_cons(t, sym__2))
    {
      n_92 = ATgetArgument(t, 0);
      if((n_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_z_41;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL;
  u_91 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      x_91 = ATgetArgument(t, 0);
      s_91 = ATgetArgument(t, 1);
      t_91 = ATgetArgument(t, 2);
      {
        ATerm b_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  z_91 = t;
  t = s_91;
  t = foldr_3_0(n_11, o_11, q_11, t);
  v_91 = t;
  t = t_91;
  t = foldr_3_0(s_11, t_11, z_11, t);
  w_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91));
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = (ATerm) ATempty;
      }
  }
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91));
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ExtDefinitions_0_0(t);
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = (ATerm) ATempty;
      }
  }
  b_92 = t;
  t = x_91;
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        t = (ATerm) ATempty;
      }
  }
  a_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_91, w_91));
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_91, w_91)), a_92);
  t = y_11(k_12, i_92, a_92, t);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91));
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_42, (ATerm) ATinsert(CheckATermList(c_92), u_91));
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_42, (ATerm) ATinsert(CheckATermList(c_92), u_91)));
  t = w_11(q_12, g_92, h_92, t);
  t = (ATerm) ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91));
  e_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, (ATerm) ATinsert(CheckATermList(b_92), u_91));
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym__2, v_91, w_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_42, (ATerm) ATinsert(CheckATermList(b_92), u_91)));
  t = w_11(u_12, e_92, f_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_42, y_91);
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_91, (ATerm) ATmakeAppl(sym_Defined_2, term_n_42, y_91));
  t = w_11(v_12, x_91, d_92, t);
  t = z_91;
  return(t);
}
ATerm ExtDefinitions_0_0 (ATerm t)
{
  ATerm y_92 = NULL,a_93 = NULL;
  y_92 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_93;
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      ATerm t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL,s_42 = NULL;
        t = term_z_41;
        s_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_41, y_92);
        t = a_12(s_42, y_92, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_42) != ATmakeSymbol("j_1", 0, ATtrue)))
              _fail(t);
            m_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_42;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        {
          ATerm w_42 = NULL,b_43 = NULL;
          t = term_z_41;
          b_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_41, y_92);
          t = a_12(b_43, y_92, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm y_42 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_42) != ATmakeSymbol("b_1", 0, ATtrue)))
                _fail(t);
              w_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_42;
        }
      }
  }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL;
  if(match_cons(t, sym__2))
    {
      w_93 = ATgetArgument(t, 0);
      x_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(w_93, x_93, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL;
  if(match_cons(t, sym__2))
    {
      y_93 = ATgetArgument(t, 0);
      z_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(y_93, z_93, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm a_94 = NULL;
  if(match_cons(t, sym__2))
    {
      a_94 = ATgetArgument(t, 0);
      if((a_94 != ATgetArgument(t, 1)))
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
  t = term_y_41;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_z_41;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL;
  h_93 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      k_93 = ATgetArgument(t, 0);
      f_93 = ATgetArgument(t, 1);
      g_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  m_93 = t;
  t = f_93;
  t = foldr_3_0(w_12, a_13, b_13, t);
  i_93 = t;
  t = g_93;
  t = foldr_3_0(c_13, d_13, e_13, t);
  j_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93));
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(a_43);
      }
    else
      {
        t = z_42;
        t = (ATerm) ATempty;
      }
  }
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93));
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ExtDefinitions_0_0(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        t = (ATerm) ATempty;
      }
  }
  o_93 = t;
  t = k_93;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = (ATerm) ATempty;
      }
  }
  n_93 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_93, j_93));
  v_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_93, j_93)), n_93);
  t = y_11(f_13, v_93, n_93, t);
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93));
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_43, (ATerm) ATinsert(CheckATermList(p_93), h_93));
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_43, (ATerm) ATinsert(CheckATermList(p_93), h_93)));
  t = w_11(g_13, t_93, u_93, t);
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93));
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_43, (ATerm) ATinsert(CheckATermList(o_93), h_93));
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, i_93, j_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_43, (ATerm) ATinsert(CheckATermList(o_93), h_93)));
  t = w_11(h_13, r_93, s_93, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_43, l_93);
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym_Defined_2, term_j_43, l_93));
  t = w_11(i_13, k_93, q_93, t);
  t = m_93;
  return(t);
}
static ATerm w_11 (ATerm t_149 (ATerm), ATerm s_46, ATerm p_46, ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  e_94 = t;
  t = t_149(t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_94, s_46, p_46);
  t = p_12(b_94, s_46, p_46, t);
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_94 = NULL;
        t = term_b_36;
        j_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_94, term_b_36);
        t = o_12(b_94, j_94, t);
        {
          ATerm n_43 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_43;
            }
        }
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_94 = ATgetFirst((ATermList) t);
      d_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_94, term_b_36, (ATerm) ATinsert(CheckATermList(d_94), (ATerm) ATinsert(CheckATermList(c_94), s_46)));
  t = lookup_table_0_1(b_94, t);
  i_94 = t;
  t = term_b_36;
  f_94 = t;
  t = (ATerm) ATinsert(CheckATermList(d_94), (ATerm) ATinsert(CheckATermList(c_94), s_46));
  g_94 = t;
  t = i_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(f_94, g_94, h_94, t);
  t = e_94;
  return(t);
}
static ATerm x_11 (ATerm m_157 (ATerm), ATerm n_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t)
{
  t = n_157(t);
  {
    static ATerm k_13 (ATerm t);
    static ATerm k_13 (ATerm t)
    {
      ATerm k_94 = NULL;
      k_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_71, k_94);
      t = m_157(t);
      return(t);
    }
    t = fetch_1_0(k_13, t);
  }
  t = j_71;
  return(t);
}
static ATerm y_11 (ATerm j_157 (ATerm), ATerm g_71, ATerm f_71, ATerm t)
{
  static ATerm a_95 (ATerm t);
  static ATerm a_95 (ATerm t)
  {
    ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
    v_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_94 = ATgetFirst((ATermList) t);
            x_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_94;
              {
                static ATerm l_13 (ATerm t);
                static ATerm l_13 (ATerm t)
                {
                  t = f_71;
                  return(t);
                }
                t = x_11(j_157, l_13, w_94, x_94, t);
              }
              t = a_95(t);
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
              {
                ATerm g_43 = NULL,k_43 = NULL,z_7 = NULL;
                t = SSLgetAnnotations(v_94);
                g_43 = t;
                t = x_94;
                t = a_95(t);
                k_43 = t;
                t = (ATerm) ATinsert(CheckATermList(k_43), w_94);
                z_7 = t;
                t = SSLsetAnnotations(z_7, g_43);
              }
            }
        }
      }
    return(t);
  }
  t = g_71;
  t = a_95(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL,f_45 = NULL;
        t = term_a_42;
        f_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_42, o_95);
        t = a_12(f_45, o_95, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_43) != ATmakeSymbol("l_1", 0, ATtrue)))
              _fail(t);
            w_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_44;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm t_43 = t;
          int u_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_45 = NULL,c_46 = NULL;
              t = term_a_42;
              c_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_42, o_95);
              t = a_12(c_46, o_95, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_43 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_43) != ATmakeSymbol("e_1", 0, ATtrue)))
                    _fail(t);
                  r_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_45;
              LocalPopChoice(u_43);
            }
          else
            {
              t = t_43;
              {
                ATerm i_46 = NULL,m_46 = NULL;
                t = term_a_42;
                m_46 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_42, o_95);
                t = a_12(m_46, o_95, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_43 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_43) != ATmakeSymbol("v_0", 0, ATtrue)))
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
static ATerm a_12 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm s_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
  t = o_12(l_48, m_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_95 = ATgetFirst((ATermList) t);
      {
        ATerm x_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_95;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm p_96 = NULL,r_96 = NULL;
  p_96 = t;
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_96;
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      ATerm a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL,s_47 = NULL;
        t = term_y_41;
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_41, p_96);
        t = a_12(s_47, p_96, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_44 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_44) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            l_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_47;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm e_44 = t;
          int f_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_48 = NULL,k_48 = NULL;
              t = term_y_41;
              k_48 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_41, p_96);
              t = a_12(k_48, p_96, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_44 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_44) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  d_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_48;
              LocalPopChoice(f_44);
            }
          else
            {
              t = e_44;
              {
                ATerm r_48 = NULL,z_48 = NULL;
                t = term_y_41;
                z_48 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_41, p_96);
                t = a_12(z_48, p_96, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_44) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    r_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_48;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm o_160 (ATerm), ATerm p_160 (ATerm), ATerm q_160 (ATerm), ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  y_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_96;
      t = o_160(t);
    }
  else
    {
      ATerm d_97 = NULL,e_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_96 = ATgetFirst((ATermList) t);
          a_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_96;
      t = q_160(t);
      d_97 = t;
      t = a_97;
      t = foldr_3_0(o_160, p_160, q_160, t);
      e_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_97, e_97);
      t = p_160(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      y_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(y_97, z_97, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL;
  if(match_cons(t, sym__2))
    {
      a_98 = ATgetArgument(t, 0);
      b_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(a_98, b_98, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm c_98 = NULL;
  if(match_cons(t, sym__2))
    {
      c_98 = ATgetArgument(t, 0);
      if((c_98 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,k_97 = NULL,l_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
  h_97 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_97 = ATgetArgument(t, 0);
      f_97 = ATgetArgument(t, 1);
      g_97 = ATgetArgument(t, 2);
      {
        ATerm i_44 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_97 = t;
  t = f_97;
  t = foldr_3_0(o_13, p_13, q_13, t);
  i_97 = t;
  t = g_97;
  t = foldr_3_0(r_13, s_13, t_13, t);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_97, (ATerm) ATmakeAppl(sym__2, i_97, k_97));
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(k_44);
      }
    else
      {
        t = j_44;
        t = (ATerm) ATempty;
      }
  }
  t_97 = t;
  t = l_97;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATempty;
      }
  }
  s_97 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_97, k_97));
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_97, k_97)), s_97);
  t = y_11(u_13, x_97, s_97, t);
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_97, (ATerm) ATmakeAppl(sym__2, i_97, k_97));
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_44, (ATerm) ATinsert(CheckATermList(t_97), h_97));
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_97, (ATerm) ATmakeAppl(sym__2, i_97, k_97)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_44, (ATerm) ATinsert(CheckATermList(t_97), h_97)));
  t = w_11(v_13, v_97, w_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_44, q_97);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_97, (ATerm) ATmakeAppl(sym_Defined_2, term_o_44, q_97));
  t = w_11(w_13, l_97, u_97, t);
  t = r_97;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm d_98 = NULL;
  t = map_1_0(y_13, t);
  t = check_ext_overload_0_0(t);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_a_45), d_98, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,c_8 = NULL;
  j_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_98 = ATgetFirst((ATermList) t);
      g_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_98);
  e_98 = t;
  t = f_98;
  t = r_111(t);
  h_98 = t;
  t = g_98;
  t = s_111(t);
  i_98 = t;
  t = (ATerm) ATinsert(CheckATermList(i_98), h_98);
  c_8 = t;
  t = SSLsetAnnotations(c_8, e_98);
  return(t);
}
static ATerm b_12 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm k_98 = NULL;
  t = SSL_fputc(w_37, x_37);
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_98);
  return(t);
}
static ATerm c_12 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm l_98 = NULL;
  t = SSL_write_term_to_stream_text(c_36, d_36);
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_98);
  return(t);
}
static ATerm e_12 (ATerm g_145 (ATerm), ATerm u_290, ATerm i_36, ATerm t)
{
  ATerm m_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_290, term_b_45);
  t = i_12(t);
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_98, i_36);
  t = g_145(t);
  t = fclose_0_0(t);
  t = i_36;
  return(t);
}
static ATerm d_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm n_98 = NULL;
  t = SSL_write_term_to_stream_baf(y_35, z_35);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_98);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if(match_cons(c_45, sym_Stream_1))
        {
          u_98 = ATgetArgument(c_45, 0);
        }
      else
        _fail(t);
      v_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(u_98, v_98, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_45 = ATgetArgument(t, 0);
      if(match_cons(d_45, sym_Stream_1))
        {
          z_98 = ATgetArgument(d_45, 0);
        }
      else
        _fail(t);
      a_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(z_98, a_99, t);
  w_98 = t;
  t = term_i_22;
  x_98 = t;
  t = w_98;
  if(match_cons(t, sym_Stream_1))
    {
      y_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_22, w_98);
  t = b_12(x_98, y_98, t);
  return(t);
}
ATerm output_1_0 (ATerm j_171 (ATerm), ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL;
  t = j_171(t);
  p_98 = t;
  {
    ATerm e_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_98 = NULL,r_98 = NULL;
        t = term_h_45;
        q_98 = t;
        t = term_i_45;
        r_98 = t;
        t = term_j_45;
        t = o_12(q_98, r_98, t);
        LocalPopChoice(g_45);
      }
    else
      {
        t = e_45;
        t = term_k_45;
      }
  }
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_98, p_98);
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_98 = NULL,t_98 = NULL;
        t = term_h_45;
        s_98 = t;
        t = term_n_45;
        t_98 = t;
        t = term_o_45;
        t = o_12(s_98, t_98, t);
        t = (ATerm) ATmakeAppl(sym__2, o_98, p_98);
        LocalPopChoice(m_45);
        if(match_cons(t, sym__2))
          {
            ATerm q_45 = ATgetArgument(t, 0);
            ATerm t_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12(z_13, o_98, p_98, t);
      }
    else
      {
        t = l_45;
        if(match_cons(t, sym__2))
          {
            ATerm w_45 = ATgetArgument(t, 0);
            ATerm x_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12(c_14, o_98, p_98, t);
      }
  }
  return(t);
}
static ATerm o_99 (ATerm i_99, ATerm t)
{
  t = SSL_fclose(i_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL;
  m_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_99 = ATgetArgument(t, 0);
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_99);
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            t = o_99(m_99, t);
          }
      }
    }
  else
    {
      t = o_99(m_99, t);
    }
  return(t);
}
static ATerm f_12 (ATerm e_36, ATerm t)
{
  t = SSL_read_term_from_stream(e_36);
  return(t);
}
static ATerm g_12 (ATerm r_80, ATerm s_80, ATerm t)
{
  t = SSL_strcat(r_80, s_80);
  return(t);
}
static ATerm h_12 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm p_99 = NULL;
  t = SSL_fopen(y_37, z_37);
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_99 = NULL;
  t = SSL_stdin_stream();
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_99 = NULL;
  t = SSL_stdout_stream();
  r_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_99 = NULL;
  t = SSL_stderr_stream();
  s_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_99);
  return(t);
}
static ATerm j_101 (ATerm y_99, ATerm t)
{
  ATerm z_99 = NULL;
  t = SSL_explode_term(y_99);
  if(match_cons(t, sym__2))
    {
      ATerm a_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_46 = ATgetArgument(t, 1);
        if(((ATgetType(d_46) == AT_LIST) && !(ATisEmpty(d_46))))
          {
            z_99 = ATgetFirst((ATermList) d_46);
            {
              ATerm e_46 = (ATerm) ATgetNext((ATermList) d_46);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_99;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_99;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_99;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_99;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_101 (ATerm c_100, ATerm d_100, ATerm e_100, ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL,k_100 = NULL,f_8 = NULL;
  t = SSLgetAnnotations(e_100);
  h_100 = t;
  t = c_100;
  if(match_cons(t, sym_Path_1))
    {
      k_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_100, d_100);
  f_8 = t;
  t = SSLsetAnnotations(f_8, h_100);
  if(match_cons(t, sym__2))
    {
      f_100 = ATgetArgument(t, 0);
      g_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(f_100, g_100, t);
  return(t);
}
static ATerm l_101 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,b_101 = NULL,e_101 = NULL,g_8 = NULL;
  t = SSLgetAnnotations(o_100);
  b_101 = t;
  t = SSL_is_string(m_100);
  e_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_101, n_100);
  g_8 = t;
  t = SSLsetAnnotations(g_8, b_101);
  if(match_cons(t, sym__2))
    {
      p_100 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(p_100, q_100, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL;
  g_101 = t;
  if(match_cons(t, sym__2))
    {
      h_101 = ATgetArgument(t, 0);
      i_101 = ATgetArgument(t, 1);
      {
        ATerm f_46 = t;
        int g_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_101(g_101, t);
            LocalPopChoice(g_46);
          }
        else
          {
            t = f_46;
            {
              ATerm j_46 = t;
              int k_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_101(h_101, i_101, g_101, t);
                  LocalPopChoice(k_46);
                }
              else
                {
                  t = j_46;
                  t = l_101(h_101, i_101, g_101, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_101(g_101, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL,e_102 = NULL;
  e_102 = t;
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_102, term_q_46);
        t = i_12(t);
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        {
          ATerm s_49 = NULL,v_49 = NULL;
          t = term_r_46;
          v_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_46, e_102);
          t = g_12(v_49, e_102, t);
          s_49 = t;
          t = SSL_perror(s_49);
          _fail(t);
        }
      }
  }
  y_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_12(z_101, t);
  x_101 = t;
  t = y_101;
  t = fclose_0_0(t);
  t = x_101;
  return(t);
}
ATerm input_1_0 (ATerm k_171 (ATerm), ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_102 = NULL,i_102 = NULL;
      t = term_h_45;
      h_102 = t;
      t = term_v_46;
      i_102 = t;
      t = term_w_46;
      t = o_12(h_102, i_102, t);
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = term_x_46;
    }
  t = ReadFromFile_0_0(t);
  t = k_171(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  t = term_h_45;
  j_102 = t;
  t = term_y_46;
  k_102 = t;
  t = term_z_46;
  t = o_12(j_102, k_102, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_102 = NULL,k_103 = NULL,l_103 = NULL;
  m_102 = t;
  {
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_47 = ATgetFirst((ATermList) t);
                ATerm d_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_102;
          }
        LocalPopChoice(b_47);
      }
    else
      {
        t = a_47;
        t = (ATerm) ATinsert(ATempty, m_102);
      }
  }
  k_103 = t;
  t = term_k_45;
  l_103 = t;
  t = SSL_printnl(l_103, k_103);
  t = m_102;
  return(t);
}
ATerm map_1_0 (ATerm c_155 (ATerm), ATerm t)
{
  static ATerm r_104 (ATerm t);
  static ATerm r_104 (ATerm t)
  {
    ATerm a_104 = NULL,g_104 = NULL,q_104 = NULL;
    a_104 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_104;
      }
    else
      {
        ATerm d_50 = NULL,h_50 = NULL,j_50 = NULL,k_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_104 = ATgetFirst((ATermList) t);
            q_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_104);
        d_50 = t;
        t = g_104;
        t = c_155(t);
        h_50 = t;
        t = q_104;
        t = r_104(t);
        j_50 = t;
        t = (ATerm) ATinsert(CheckATermList(j_50), h_50);
        k_8 = t;
        t = SSLsetAnnotations(k_8, d_50);
      }
    return(t);
  }
  t = r_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_104 = ATgetFirst((ATermList) t);
      v_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_105 = NULL,u_106 = NULL;
        static ATerm d_14 (ATerm t);
        static ATerm d_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_105)), not_null(u_106));
          return(t);
        }
        t = v_104;
        t = r_0(t);
        if(((e_105 != NULL) && (e_105 != t)))
          _fail(t);
        else
          e_105 = t;
        t = u_104;
        t = p_0(t);
        if(((u_106 != NULL) && (u_106 != t)))
          _fail(t);
        else
          u_106 = t;
        t = v_104;
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
  ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL,m_8 = NULL;
  e_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_107);
  c_107 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_107);
  m_8 = t;
  t = SSLsetAnnotations(m_8, c_107);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm q_107 = NULL;
  q_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_107), term_e_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm i_173 (ATerm), ATerm j_173 (ATerm), ATerm t)
{
  ATerm y_106 = NULL,z_106 = NULL;
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_107 = NULL,b_107 = NULL;
      t = term_h_45;
      a_107 = t;
      t = term_y_46;
      b_107 = t;
      t = term_z_46;
      t = o_12(a_107, b_107, t);
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      t = fetch_1_0(e_14, t);
    }
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_173(t);
        t = echo_0_0(t);
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
      }
  }
  t = term_j_47;
  t = echo_0_0(t);
  t = term_k_47;
  y_106 = t;
  t = term_m_47;
  z_106 = t;
  t = term_q_47;
  t = o_12(y_106, z_106, t);
  t = reverse_acc_2_0(_id, f_14, t);
  t = map_1_0(g_14, t);
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_107 = NULL;
        t = j_173(t);
        r_107 = t;
        t = (ATerm) ATinsert(CheckATermList(r_107), term_x_47);
        t = echo_0_0(t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
      }
  }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL,p_8 = NULL;
  j_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_108);
  h_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_108);
  p_8 = t;
  t = SSLsetAnnotations(p_8, h_108);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_107 = NULL;
  u_107 = t;
  {
    ATerm c_48 = t;
    int e_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_107 = NULL,w_107 = NULL;
        t = term_h_45;
        v_107 = t;
        t = term_y_46;
        w_107 = t;
        t = term_z_46;
        t = o_12(v_107, w_107, t);
        LocalPopChoice(e_48);
      }
    else
      {
        t = c_48;
        t = fetch_1_0(h_14, t);
      }
  }
  t = u_107;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm l_108 = NULL;
  l_108 = t;
  if(match_string(t, "-k"))
    {
      t = l_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_108;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm a_109 = NULL,u_109 = NULL,v_109 = NULL;
  a_109 = t;
  t = SSL_string_to_int(a_109);
  u_109 = t;
  t = term_h_48;
  v_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_48, u_109);
  t = r_12(v_109, u_109, t);
  t = a_109;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_14, j_14, k_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm x_109 = NULL;
  x_109 = t;
  if(match_string(t, "-S"))
    {
      t = x_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_109;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL;
  t = term_n_48;
  y_109 = t;
  t = term_y_20;
  z_109 = t;
  t = term_o_48;
  t = r_12(y_109, z_109, t);
  t = term_q_48;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_w_48;
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
  ATerm f_111 = NULL,i_111 = NULL,k_111 = NULL;
  f_111 = t;
  t = SSL_string_to_int(f_111);
  i_111 = t;
  t = term_n_48;
  k_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_48, i_111);
  t = r_12(k_111, i_111, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_111);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_x_48;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm o_111 = NULL,t_111 = NULL;
  t = term_y_48;
  o_111 = t;
  t = term_t_30;
  t_111 = t;
  t = term_a_49;
  t = r_12(o_111, t_111, t);
  t = term_b_49;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, n_14, t);
      LocalPopChoice(g_49);
    }
  else
    {
      t = d_49;
      {
        ATerm l_49 = t;
        int n_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_14, p_14, q_14, t);
            LocalPopChoice(n_49);
          }
        else
          {
            t = l_49;
            t = Option_3_0(r_14, t_14, u_14, t);
          }
      }
    }
  return(t);
}
static ATerm r_12 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL;
  t = term_h_45;
  u_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_45, s_41, t_41);
  t = lookup_table_0_1(u_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(s_41, t_41, v_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_45, s_41, t_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
      t = term_t_30;
      t = g_0(t);
      b_112 = t;
      t = term_k_47;
      c_112 = t;
      t = term_m_47;
      d_112 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_47, term_m_47, b_112);
      t = p_12(c_112, d_112, b_112, t);
      _fail(t);
    }
  else
    {
      ATerm g_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_111 = ATgetFirst((ATermList) t);
          a_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_111;
      t = d_0(t);
      t = term_t_30;
      t = f_0(t);
      g_112 = t;
      t = (ATerm) ATinsert(CheckATermList(a_112), g_112);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm i_112 = NULL;
  i_112 = t;
  if(match_string(t, "-o"))
    {
      t = i_112;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_112;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL;
  j_112 = t;
  t = term_i_45;
  k_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, j_112);
  t = r_12(k_112, j_112, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_112);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_14, w_14, x_14, t);
  return(t);
}
static ATerm p_12 (ATerm a_48, ATerm b_48, ATerm z_47, ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL;
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_48, b_48);
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_49 = ATgetArgument(t, 0);
            ATerm z_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_48, b_48);
        t = o_12(a_48, b_48, t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        t = (ATerm) ATempty;
      }
  }
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_48, b_48, (ATerm) ATinsert(CheckATermList(n_112), z_47));
  t = lookup_table_0_1(a_48, t);
  q_112 = t;
  t = (ATerm) ATinsert(CheckATermList(n_112), z_47);
  o_112 = t;
  t = q_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(b_48, o_112, p_112, t);
  t = m_112;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL;
      t = term_t_30;
      t = n_0(t);
      b_113 = t;
      t = term_k_47;
      c_113 = t;
      t = term_m_47;
      d_113 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_47, term_m_47, b_113);
      t = p_12(c_113, d_113, b_113, t);
      _fail(t);
    }
  else
    {
      ATerm h_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_112 = ATgetFirst((ATermList) t);
          y_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_112;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_112 = ATgetFirst((ATermList) t);
          a_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_112;
      t = j_0(t);
      t = z_112;
      t = l_0(t);
      h_113 = t;
      t = (ATerm) ATinsert(CheckATermList(a_113), h_113);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm j_113 = NULL;
  j_113 = t;
  if(match_string(t, "-i"))
    {
      t = j_113;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_113;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm k_113 = NULL,l_113 = NULL;
  k_113 = t;
  t = term_v_46;
  l_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_46, k_113);
  t = r_12(l_113, k_113, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_113);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_a_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, f_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_30;
  t = whoami_0_0(t);
  m_113 = t;
  t = term_k_17;
  o_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_50), m_113);
  p_113 = t;
  t = SSL_printnl(o_113, p_113);
  t = term_z_20;
  n_113 = t;
  t = SSL_exit(n_113);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL;
  t = term_h_45;
  q_113 = t;
  t = term_y_46;
  r_113 = t;
  t = term_z_46;
  t = o_12(q_113, r_113, t);
  return(t);
}
static ATerm j_12 (ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm c_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_44, s_44);
      LocalPopChoice(e_50);
    }
  else
    {
      t = c_50;
      t = SSL_addr(r_44, s_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  t_113 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_113;
      t = m_160(t);
    }
  else
    {
      ATerm y_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_113 = ATgetFirst((ATermList) t);
          v_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_113;
      t = foldr_2_0(m_160, n_160, t);
      y_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_113, y_113);
      t = n_160(t);
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
  t = term_y_20;
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
  t = j_12(d_51, e_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_114 = NULL,z_50 = NULL,a_51 = NULL;
  t = times_0_0(t);
  a_51 = t;
  t = SSL_explode_term(a_51);
  if(match_cons(t, sym__2))
    {
      ATerm f_50 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_50;
  t = foldr_2_0(g_15, h_15, t);
  b_114 = t;
  t = SSL_TicksToSeconds(b_114);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL;
  m_114 = t;
  if(match_cons(t, sym__2))
    {
      n_114 = ATgetArgument(t, 0);
      o_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_50 = t;
    int l_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_114;
        if((n_114 != t))
          {
            _fail(t);
          }
        t = m_114;
        LocalPopChoice(l_50);
      }
    else
      {
        t = k_50;
        t = (ATerm) ATmakeAppl(sym__2, n_114, o_114);
        {
          ATerm n_50 = t;
          int p_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_114, o_114);
              LocalPopChoice(p_50);
            }
          else
            {
              t = n_50;
              t = SSL_gtr(n_114, o_114);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_114, o_114);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_146 (ATerm), ATerm t)
{
  ATerm s_114 = NULL;
  s_114 = t;
  {
    ATerm t_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
        t = term_h_45;
        v_114 = t;
        t = term_n_48;
        w_114 = t;
        t = term_b_51;
        t = o_12(v_114, w_114, t);
        u_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_114, term_z_20);
        t = geq_0_0(t);
        t = s_114;
        t = x_146(t);
        LocalPopChoice(y_50);
      }
    else
      {
        t = t_50;
        t = s_114;
      }
  }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm y_114 = NULL,z_114 = NULL,b_115 = NULL,c_115 = NULL;
  t = run_time_0_0(t);
  y_114 = t;
  t = term_t_30;
  t = whoami_0_0(t);
  z_114 = t;
  t = term_k_17;
  b_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_51), y_114), term_c_51), z_114);
  c_115 = t;
  t = SSL_printnl(b_115, c_115);
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_51), y_114), term_c_51), z_114));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_115 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_20;
  d_115 = t;
  t = SSL_exit(d_115);
  return(t);
}
static ATerm s_12 (ATerm p_52, ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm e_115 = NULL;
  t = SSL_hashtable_put(r_52, p_52, q_52);
  e_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_115);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_49, ATerm t)
{
  ATerm n_115 = NULL;
  t = table_hashtable_0_0(t);
  n_115 = t;
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL;
        t = n_115;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_12(m_49, i_52, t);
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        {
          ATerm d_53 = NULL;
          t = m_49;
          t = table_create_0_0(t);
          t = n_115;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_12(m_49, d_53, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm q_115 = NULL;
  t = SSL_hashtable_create(x_52, y_52);
  q_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_115);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,v_115 = NULL,w_115 = NULL;
  r_115 = t;
  t = term_i_51;
  v_115 = t;
  t = term_j_51;
  w_115 = t;
  t = r_115;
  t = new_hashtable_0_2(v_115, w_115, t);
  s_115 = t;
  t = r_115;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(r_115, s_115, t_115, t);
  t = r_115;
  return(t);
}
static ATerm l_12 (ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm x_115 = NULL;
  t = SSL_hashtable_remove(v_52, u_52);
  x_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_115);
  return(t);
}
static ATerm m_12 (ATerm z_52, ATerm t)
{
  ATerm y_115 = NULL;
  t = SSL_hashtable_destroy(z_52);
  y_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_115);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_115 = NULL;
  t = SSL_table_hashtable();
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_115);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL;
  a_116 = t;
  t = table_hashtable_0_0(t);
  b_116 = t;
  t = lookup_table_0_1(a_116, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_12(d_116, t);
  t = b_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(a_116, c_116, t);
  t = a_116;
  return(t);
}
ATerm fetch_1_0 (ATerm k_155 (ATerm), ATerm t)
{
  static ATerm a_117 (ATerm t);
  static ATerm a_117 (ATerm t)
  {
    ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
    x_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_116 = ATgetFirst((ATermList) t);
        z_116 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_51 = t;
      int l_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_55 = NULL,m_55 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(x_116);
          j_55 = t;
          t = y_116;
          t = k_155(t);
          m_55 = t;
          t = (ATerm) ATinsert(CheckATermList(z_116), m_55);
          r_8 = t;
          t = SSLsetAnnotations(r_8, j_55);
          LocalPopChoice(l_51);
        }
      else
        {
          t = k_51;
          {
            ATerm i_56 = NULL,l_56 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(x_116);
            i_56 = t;
            t = z_116;
            t = a_117(t);
            l_56 = t;
            t = (ATerm) ATinsert(CheckATermList(l_56), y_116);
            s_8 = t;
            t = SSLsetAnnotations(s_8, i_56);
          }
        }
    }
    return(t);
  }
  t = a_117(t);
  return(t);
}
static ATerm t_12 (ATerm s_52, ATerm t_52, ATerm t)
{
  t = SSL_hashtable_get(t_52, s_52);
  return(t);
}
static ATerm o_12 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm d_117 = NULL;
  t = lookup_table_0_1(t_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_12(u_49, d_117, t);
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
  ATerm f_117 = NULL,g_117 = NULL;
  t = term_m_51;
  f_117 = t;
  t = term_t_30;
  g_117 = t;
  t = term_n_51;
  t = r_12(f_117, g_117, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL;
  t = term_m_51;
  j_117 = t;
  t = term_t_30;
  k_117 = t;
  t = term_n_51;
  t = r_12(j_117, k_117, t);
  t = term_p_51;
  h_117 = t;
  t = term_t_30;
  i_117 = t;
  t = term_q_51;
  t = r_12(h_117, i_117, t);
  t = term_r_51;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_s_51;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_15, k_15, l_15, t);
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
      t = Option_3_0(m_15, n_15, q_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_173 (ATerm), ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,u_117 = NULL,v_117 = NULL,y_8 = NULL;
  p_117 = t;
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_51;
        t = d_173(t);
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
      }
  }
  t = p_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_117 = ATgetFirst((ATermList) t);
      s_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_117);
  q_117 = t;
  t = term_y_46;
  v_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_46, r_117);
  t = r_12(v_117, r_117, t);
  t = s_117;
  {
    static ATerm f_118 (ATerm t);
    static ATerm f_118 (ATerm t)
    {
      ATerm y_51 = t;
      int z_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_52 = t;
          int b_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_117 = NULL;
              y_117 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_117;
              LocalPopChoice(b_52);
            }
          else
            {
              t = a_52;
              t = d_173(t);
              t = Cons_2_0(_id, f_118, t);
            }
          LocalPopChoice(z_51);
        }
      else
        {
          t = y_51;
          {
            ATerm b_118 = NULL,c_118 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_118 = ATgetFirst((ATermList) t);
                c_118 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_118), (ATerm) ATmakeAppl(sym_Undefined_1, b_118));
          }
        }
      return(t);
    }
    t = f_118(t);
  }
  u_117 = t;
  t = (ATerm) ATinsert(CheckATermList(u_117), (ATerm) ATmakeAppl(sym_Program_1, r_117));
  y_8 = t;
  t = SSLsetAnnotations(y_8, q_117);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm s_118 = NULL;
  s_118 = t;
  if(match_string(t, "--help"))
    {
      t = s_118;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_118;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_118;
        }
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL;
  t = term_c_52;
  t_118 = t;
  t = term_t_30;
  u_118 = t;
  t = term_d_52;
  t = r_12(t_118, u_118, t);
  t = term_e_52;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_f_52;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm a_173 (ATerm), ATerm b_173 (ATerm), ATerm c_173 (ATerm), ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL;
  m_118 = t;
  t = term_k_47;
  n_118 = t;
  t = term_g_52;
  t = lookup_table_0_1(n_118, t);
  r_118 = t;
  t = term_m_47;
  o_118 = t;
  t = (ATerm) ATempty;
  p_118 = t;
  t = r_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(o_118, p_118, q_118, t);
  t = m_118;
  {
    static ATerm r_15 (ATerm t);
    static ATerm r_15 (ATerm t)
    {
      ATerm h_52 = t;
      int j_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_173(t);
          LocalPopChoice(j_52);
        }
      else
        {
          t = h_52;
          {
            ATerm k_52 = t;
            int l_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_15, t_15, u_15, t);
                LocalPopChoice(l_52);
              }
            else
              {
                t = k_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_15, t);
  }
  {
    ATerm m_52 = t;
    int n_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_119 = NULL;
        f_119 = t;
        {
          ATerm o_52 = t;
          int w_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_57 = NULL;
              t = f_119;
              {
                ATerm a_53 = t;
                int b_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_57 = NULL,o_57 = NULL;
                    t = term_h_45;
                    n_57 = t;
                    t = term_c_52;
                    o_57 = t;
                    t = term_c_53;
                    t = o_12(n_57, o_57, t);
                    LocalPopChoice(b_53);
                  }
                else
                  {
                    t = a_53;
                    t = fetch_1_0(v_15, t);
                  }
              }
              t = f_119;
              t = b_173(t);
              t = term_y_20;
              f_57 = t;
              t = SSL_exit(f_57);
              LocalPopChoice(w_52);
            }
          else
            {
              t = o_52;
              {
                ATerm d_58 = NULL,e_58 = NULL,i_58 = NULL;
                t = term_h_45;
                e_58 = t;
                t = term_m_51;
                i_58 = t;
                t = term_e_53;
                t = o_12(e_58, i_58, t);
                t = f_119;
                t = c_173(t);
                t = term_y_20;
                d_58 = t;
                t = SSL_exit(d_58);
              }
            }
        }
        LocalPopChoice(n_52);
      }
    else
      {
        t = m_52;
        {
          ATerm f_53 = t;
          int g_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL;
              static ATerm w_15 (ATerm t);
              static ATerm w_15 (ATerm t)
              {
                ATerm j_119 = NULL,k_119 = NULL,l_119 = NULL,e_9 = NULL;
                l_119 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_119 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_119);
                j_119 = t;
                t = k_119;
                if(((k_118 != NULL) && (k_118 != t)))
                  _fail(t);
                else
                  k_118 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_119);
                e_9 = t;
                t = SSLsetAnnotations(e_9, j_119);
                return(t);
              }
              t = fetch_1_0(w_15, t);
              t = term_k_17;
              h_119 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_118)), term_h_53);
              i_119 = t;
              t = SSL_printnl(h_119, i_119);
              t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_118)), term_h_53));
              t = b_173(t);
              t = term_z_20;
              g_119 = t;
              t = SSL_exit(g_119);
              LocalPopChoice(g_53);
            }
          else
            {
              t = f_53;
            }
        }
      }
  }
  l_118 = t;
  t = term_k_47;
  t = table_destroy_0_0(t);
  t = l_118;
  return(t);
}
ATerm option_wrap_5_0 (ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm f_171 (ATerm), ATerm g_171 (ATerm), ATerm h_171 (ATerm), ATerm t)
{
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL;
  t = parse_options_3_0(d_171, e_171, f_171, t);
  q_119 = t;
  t = term_i_53;
  t = table_create_0_0(t);
  t = term_i_53;
  r_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_53, term_j_53, q_119);
  t = lookup_table_0_1(r_119, t);
  u_119 = t;
  t = term_j_53;
  s_119 = t;
  t = u_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(s_119, q_119, t_119, t);
  t = q_119;
  t = g_171(t);
  {
    ATerm k_53 = t;
    int l_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_171(t);
        t = report_success_0_0(t);
        LocalPopChoice(l_53);
      }
    else
      {
        t = k_53;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm m_53 = t;
  int n_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_53);
    }
  else
    {
      t = m_53;
      {
        ATerm o_53 = t;
        int p_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_53);
          }
        else
          {
            t = o_53;
            {
              ATerm q_53 = t;
              int r_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_16, b_16, e_16, t);
                  LocalPopChoice(r_53);
                }
              else
                {
                  t = q_53;
                  {
                    ATerm s_53 = t;
                    int t_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_53);
                      }
                    else
                      {
                        t = s_53;
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
  ATerm w_119 = NULL,x_119 = NULL;
  t = term_n_45;
  w_119 = t;
  t = term_t_30;
  x_119 = t;
  t = term_u_53;
  t = r_12(w_119, x_119, t);
  t = term_v_53;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_w_53;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = output_1_0(g_16, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,k_9 = NULL,h_9 = NULL;
  i_120 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_120);
  b_120 = t;
  t = c_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_120 = ATgetFirst((ATermList) t);
      f_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_120);
  d_120 = t;
  t = f_120;
  t = Cons_2_0(h_16, j_16, t);
  g_120 = t;
  t = (ATerm) ATinsert(CheckATermList(g_120), e_120);
  h_9 = t;
  t = SSLsetAnnotations(h_9, d_120);
  h_120 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_120);
  k_9 = t;
  t = SSLsetAnnotations(k_9, b_120);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_53 = ATgetArgument(t, 0);
      if(((ATgetType(x_53) == AT_LIST) && !(ATisEmpty(x_53))))
        {
          z_119 = ATgetFirst((ATermList) x_53);
          {
            ATerm y_53 = (ATerm) ATgetNext((ATermList) x_53);
            if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
              {
                ATerm z_53 = ATgetFirst((ATermList) y_53);
                if(match_cons(z_53, sym_Strategies_1))
                  {
                    a_120 = ATgetArgument(z_53, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_54 = (ATerm) ATgetNext((ATermList) y_53);
                  if(((ATgetType(a_54) != AT_LIST) || !(ATisEmpty(a_54))))
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
  t = d_10(z_119, a_120, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL,m_120 = NULL,g_9 = NULL;
  m_120 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_120);
  j_120 = t;
  t = k_120;
  t = needed_defs_0_0(t);
  l_120 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_120);
  g_9 = t;
  t = SSLsetAnnotations(g_9, j_120);
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
