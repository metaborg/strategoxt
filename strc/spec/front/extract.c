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
static ATerm term_t_53;
static ATerm term_s_53;
static ATerm term_r_53;
static ATerm term_g_53;
static ATerm term_c_53;
static ATerm term_u_52;
static ATerm term_q_52;
static ATerm term_p_52;
static ATerm term_d_52;
static ATerm term_c_52;
static ATerm term_b_52;
static ATerm term_a_52;
static ATerm term_z_51;
static ATerm term_u_51;
static ATerm term_p_51;
static ATerm term_o_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_l_51;
static ATerm term_k_51;
static ATerm term_j_51;
static ATerm term_g_51;
static ATerm term_f_51;
static ATerm term_y_50;
static ATerm term_t_50;
static ATerm term_p_50;
static ATerm term_u_49;
static ATerm term_q_49;
static ATerm term_g_49;
static ATerm term_y_48;
static ATerm term_w_48;
static ATerm term_v_48;
static ATerm term_k_48;
static ATerm term_j_48;
static ATerm term_i_48;
static ATerm term_e_48;
static ATerm term_c_48;
static ATerm term_b_48;
static ATerm term_a_48;
static ATerm term_v_47;
static ATerm term_i_47;
static ATerm term_h_47;
static ATerm term_g_47;
static ATerm term_f_47;
static ATerm term_e_47;
static ATerm term_z_46;
static ATerm term_s_46;
static ATerm term_r_46;
static ATerm term_p_46;
static ATerm term_o_46;
static ATerm term_n_46;
static ATerm term_j_46;
static ATerm term_h_46;
static ATerm term_j_45;
static ATerm term_i_45;
static ATerm term_f_45;
static ATerm term_b_45;
static ATerm term_a_45;
static ATerm term_z_44;
static ATerm term_r_44;
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
static ATerm term_z_40;
static ATerm term_v_40;
static ATerm term_u_40;
static ATerm term_q_37;
static ATerm term_f_37;
static ATerm term_f_36;
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
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_r_24;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_i_23;
static ATerm term_h_23;
static ATerm term_g_23;
static ATerm term_e_23;
static ATerm term_d_23;
static ATerm term_b_23;
static ATerm term_a_23;
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
static ATerm term_y_20;
static ATerm term_e_18;
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
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
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
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATempty);
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
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Call_2, term_t_24, (ATerm) ATempty);
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
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("/(", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol(",", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
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
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_y_20);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_p_44);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_a_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_i_45);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_n_46);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_r_46);
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
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym__2, term_b_48, term_y_20);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_t_30);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_b_48);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym__2, term_j_51, term_t_30);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym__2, term_m_51, term_t_30);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym__2, term_z_51, term_t_30);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, (ATerm) ATempty);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_z_51);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__2, term_z_44, term_j_51);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_t_30);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_162 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm c_10 (ATerm v_111, ATerm u_111, ATerm t);
static ATerm e_10 (ATerm c_84, ATerm d_84, ATerm e_84, ATerm t);
static ATerm m_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm d_137 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm k_10 (ATerm k_29, ATerm j_29, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm free_vars2_4_0 (ATerm p_164 (ATerm), ATerm q_164 (ATerm), ATerm r_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_164 (ATerm), ATerm t);
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
ATerm escape_chars_1_0 (ATerm q_166 (ATerm), ATerm t);
static ATerm o_47 (ATerm h_39, ATerm i_39, ATerm t);
static ATerm q_47 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm t);
static ATerm r_47 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm s_47 (ATerm x_40, ATerm y_40, ATerm t);
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
ATerm pat_td_1_0 (ATerm x_176 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm x_10 (ATerm n_106, ATerm o_106, ATerm p_106, ATerm t);
static ATerm r_59 (ATerm q_58, ATerm t);
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
ATerm repeat_2_0 (ATerm f_144 (ATerm), ATerm g_144 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm j_139 (ATerm), ATerm t);
static ATerm b_11 (ATerm a_102, ATerm b_102, ATerm c_102, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm f_138 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm m_142 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm c_11 (ATerm d_45, ATerm e_45, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm copy_1_0 (ATerm r_161 (ATerm), ATerm t);
static ATerm d_11 (ATerm f_83, ATerm g_83, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm m_77 (ATerm y_74, ATerm b_75, ATerm d_75, ATerm e_75, ATerm t);
static ATerm n_77 (ATerm o_76, ATerm p_76, ATerm q_76, ATerm r_76, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_156 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
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
ATerm alltd_1_0 (ATerm x_139 (ATerm), ATerm t);
static ATerm l_10 (ATerm l_48, ATerm m_48, ATerm t);
ATerm end_scope_1_0 (ATerm f_150 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_150 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm p_10 (ATerm l_85, ATerm m_85, ATerm q_85, ATerm n_85, ATerm p_85, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm z_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm x_77, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm g_156 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_80 (ATerm y_79, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_11 (ATerm t_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t);
ATerm genzip_4_0 (ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm o_11 (ATerm p_982, ATerm u_982, ATerm d_98, ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm e_86 (ATerm u_83, ATerm v_83, ATerm w_83, ATerm t);
static ATerm m_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_11 (ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm i_101, ATerm f_101, ATerm n_101, ATerm j_101, ATerm g_101, ATerm h_101, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm a_41 (ATerm l_39, ATerm m_39, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
ATerm debug_1_0 (ATerm s_145 (ATerm), ATerm t);
static ATerm t_11 (ATerm t_84, ATerm u_84, ATerm v_84, ATerm t);
ATerm ExtDefinition_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm u_11 (ATerm q_84, ATerm r_84, ATerm s_84, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm check_ext_overload_0_0 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
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
static ATerm v_11 (ATerm i_150 (ATerm), ATerm t_46, ATerm q_46, ATerm t);
static ATerm w_11 (ATerm b_158 (ATerm), ATerm c_158 (ATerm), ATerm q_71, ATerm p_71, ATerm t);
static ATerm x_11 (ATerm y_157 (ATerm), ATerm m_71, ATerm l_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm z_11 (ATerm r_48, ATerm s_48, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm f_161 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
static ATerm a_12 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm b_12 (ATerm c_36, ATerm d_36, ATerm t);
static ATerm d_12 (ATerm u_145 (ATerm), ATerm n_291, ATerm i_36, ATerm t);
static ATerm c_12 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm output_1_0 (ATerm y_171 (ATerm), ATerm t);
static ATerm n_99 (ATerm h_99, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_12 (ATerm e_36, ATerm t);
static ATerm f_12 (ATerm w_80, ATerm x_80, ATerm t);
static ATerm g_12 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_100 (ATerm x_99, ATerm t);
static ATerm z_100 (ATerm b_100, ATerm c_100, ATerm d_100, ATerm t);
static ATerm a_101 (ATerm l_100, ATerm m_100, ATerm n_100, ATerm t);
static ATerm h_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_171 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t);
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
static ATerm q_12 (ATerm y_41, ATerm z_41, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_12 (ATerm g_48, ATerm h_48, ATerm f_48, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_12 (ATerm x_44, ATerm y_44, ATerm t);
ATerm foldr_2_0 (ATerm b_161 (ATerm), ATerm c_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_147 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_12 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t);
ATerm lookup_table_0_1 (ATerm s_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_53, ATerm e_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_12 (ATerm a_53, ATerm b_53, ATerm t);
static ATerm l_12 (ATerm f_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_155 (ATerm), ATerm t);
static ATerm s_12 (ATerm y_52, ATerm z_52, ATerm t);
static ATerm n_12 (ATerm z_49, ATerm a_50, ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_173 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm parse_options_3_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm s_171 (ATerm), ATerm t_171 (ATerm), ATerm u_171 (ATerm), ATerm v_171 (ATerm), ATerm w_171 (ATerm), ATerm t);
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
        t = z_11(w_1, s_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("x_1", 0, ATtrue)))
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
          t = z_11(h_3, v_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm s_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("v_1", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm f_162 (ATerm), ATerm t)
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
            t = f_162(t);
            e_4 = t;
            t = r_2;
            t = filter_1_0(f_162, t);
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
            t = filter_1_0(f_162, t);
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
          t = v_11(b_0, b_3, c_3, t);
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
          t = v_11(i_0, f_3, g_3, t);
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
static ATerm c_10 (ATerm v_111, ATerm u_111, ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,h_0 = NULL,e_0 = NULL,c_0 = NULL;
  t = u_111;
  t = topdown_1_0(k_0, t);
  t = v_111;
  if(match_cons(t, sym_Signature_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_111);
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
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, u_111)), k_3));
  return(t);
}
static ATerm e_10 (ATerm c_84, ATerm d_84, ATerm e_84, ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  t = term_l_17;
  x_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), e_84), term_o_17), d_84), term_n_17), c_84), term_m_17);
  y_3 = t;
  t = SSL_printnl(x_3, y_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), e_84), term_o_17), d_84), term_n_17), c_84), term_m_17);
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
          ATerm d_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(m_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_18;
            }
        }
        t = term_l_17;
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
ATerm sboundin_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t)
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
        t = z_136(t);
        f_7 = t;
        t = e_15;
        t = z_136(t);
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
            ATerm t_7 = NULL,z_7 = NULL,c_8 = NULL,g_8 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(c_15);
            t_7 = t;
            t = d_15;
            t = b_137(t);
            z_7 = t;
            t = e_15;
            t = b_137(t);
            c_8 = t;
            t = b_15;
            t = z_136(t);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_7, c_8, g_8);
            w_0 = t;
            t = SSLsetAnnotations(w_0, t_7);
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
                ATerm l_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(c_15);
                l_9 = t;
                t = d_15;
                t = b_137(t);
                x_9 = t;
                t = e_15;
                t = b_137(t);
                y_9 = t;
                t = b_15;
                t = b_137(t);
                z_9 = t;
                t = a_15;
                t = z_136(t);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_9, y_9, z_9, a_10);
                x_0 = t;
                t = SSLsetAnnotations(x_0, l_9);
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
                    ATerm s_10 = NULL,z_10 = NULL,a_11 = NULL,e_11 = NULL,f_11 = NULL,c_1 = NULL;
                    t = SSLgetAnnotations(c_15);
                    s_10 = t;
                    t = d_15;
                    t = b_137(t);
                    z_10 = t;
                    t = e_15;
                    t = b_137(t);
                    a_11 = t;
                    t = b_15;
                    t = b_137(t);
                    e_11 = t;
                    t = a_15;
                    t = z_136(t);
                    f_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, z_10, a_11, e_11, f_11);
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
                        ATerm j_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(c_15);
                        j_12 = t;
                        t = d_15;
                        t = b_137(t);
                        v_12 = t;
                        t = e_15;
                        t = b_137(t);
                        w_12 = t;
                        t = b_15;
                        t = b_137(t);
                        x_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, v_12, w_12, x_12);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, j_12);
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
                            t = b_137(t);
                            k_13 = t;
                            t = e_15;
                            t = z_136(t);
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
                                t = b_137(t);
                                y_13 = t;
                                t = e_15;
                                t = z_136(t);
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
                                    t = b_137(t);
                                    m_15 = t;
                                    t = e_15;
                                    t = z_136(t);
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
                                  t = b_137(t);
                                  c_16 = t;
                                  t = e_15;
                                  t = z_136(t);
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
ATerm dynrule_sargs_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,t_16 = NULL;
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          q_16 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = q_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          r_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_18 = ATgetArgument(t, 0);
          t_16 = ATgetArgument(t, 1);
          {
            ATerm n_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_16;
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
                q_16 = ATgetArgument(t, 0);
                {
                  ATerm v_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_18);
            t = q_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_18 = ATgetArgument(t, 0);
                t_16 = ATgetArgument(t, 1);
                {
                  ATerm a_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = t_16;
          }
        else
          {
            t = q_18;
            if(match_cons(t, sym_AddDynRule_2))
              {
                q_16 = ATgetArgument(t, 0);
                {
                  ATerm c_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = q_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_19 = ATgetArgument(t, 0);
                t_16 = ATgetArgument(t, 1);
                {
                  ATerm f_19 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = t_16;
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
  ATerm k_19 = t;
  int l_19 = stack_ptr;
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
      LocalPopChoice(l_19);
      t = a_18;
    }
  else
    {
      t = k_19;
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
static ATerm k_10 (ATerm k_29, ATerm j_29, ATerm t)
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
  t = x_11(r_1, c_17, d_17, t);
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
  ATerm w_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(z_1, w_17, b_18, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      if((c_18 != ATgetArgument(t, 1)))
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
ATerm free_vars2_4_0 (ATerm p_164 (ATerm), ATerm q_164 (ATerm), ATerm r_164 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_164 (ATerm), ATerm t)
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
          t = p_164(t);
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
          ATerm t_20 = NULL,n_16 = NULL,o_16 = NULL;
          t = q_164(t);
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
              t = j_11(s_164, i_16, t_20, t);
              return(t);
            }
            t = r_164(a_1, m_21, g_1, t);
          }
          o_16 = t;
          t = SSL_explode_term(o_16);
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
    t = x_11(a_2, q_20, r_20, t);
    return(t);
  }
  t = m_21(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,x_21 = NULL,a_22 = NULL,e_22 = NULL;
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
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_21;
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
          t = k_10(m_22, n_22, t);
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
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(v_20);
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
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(h_22, i_22, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_21;
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
  t = i_12(j_22, k_22, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_b_21;
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
ATerm escape_chars_1_0 (ATerm q_166 (ATerm), ATerm t)
{
  static ATerm u_36 (ATerm t);
  static ATerm u_36 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,i_35 = NULL,m_35 = NULL,p_35 = NULL,q_35 = NULL,n_2 = NULL;
        t = q_166(t);
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
        t = Cons_2_0(_id, u_36, t);
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
          ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
          t_36 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_36 = ATgetFirst((ATermList) t);
              s_36 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm z_19 = NULL,f_20 = NULL,o_2 = NULL;
                t = SSLgetAnnotations(t_36);
                z_19 = t;
                t = s_36;
                t = u_36(t);
                f_20 = t;
                t = (ATerm) ATinsert(CheckATermList(f_20), r_36);
                o_2 = t;
                t = SSLsetAnnotations(o_2, z_19);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_36;
            }
        }
      }
    return(t);
  }
  t = u_36(t);
  return(t);
}
static ATerm o_47 (ATerm h_39, ATerm i_39, ATerm t)
{
  t = h_39;
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,f_4 = NULL;
        r_39 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_39 = ATgetFirst((ATermList) t);
            q_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_39);
        k_39 = t;
        t = q_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_39), p_39);
        f_4 = t;
        t = SSLsetAnnotations(f_4, k_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, h_39);
  return(t);
}
static ATerm q_47 (ATerm s_39, ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm x_39 = NULL,c_40 = NULL;
  t = SSL_explode_string(s_39);
  t = escape_chars_1_0(t_2, t);
  c_40 = t;
  t = SSL_implode_string(c_40);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, x_39, t_39);
  return(t);
}
static ATerm r_47 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = o_40;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL,h_4 = NULL;
        w_40 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_40 = ATgetFirst((ATermList) t);
            t_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_40);
        r_40 = t;
        t = t_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_40), s_40);
        h_4 = t;
        t = SSLsetAnnotations(h_4, r_40);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, o_40);
  return(t);
}
static ATerm s_47 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm e_41 = NULL;
  t = x_40;
  {
    ATerm w_21 = t;
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
        t = w_21;
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
  ATerm e_40 = NULL,f_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_40 = ATgetFirst((ATermList) t);
      f_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_40;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(f_40), term_x_22), term_w_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(f_40), term_w_22), term_w_22);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_40), term_y_22), term_w_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_40), term_a_23), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_20 = ATgetFirst((ATermList) t);
      a_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_20;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_21), term_x_22), term_w_22);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_21), term_w_22), term_w_22);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_21), term_y_22), term_w_22);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_21), term_a_23), term_w_22);
            }
        }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm j_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, n_42), j_42));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_h_23;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, w_42), p_42));
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, s_45), r_45));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, x_45), u_45));
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_i_23;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_46 = NULL,y_46 = NULL,q_21 = NULL;
  g_46 = t;
  t = SSL_explode_term(g_46);
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            y_46 = ATgetFirst((ATermList) k_23);
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
  t = SSL_explode_term(g_46);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_b_23, (ATerm) ATinsert(ATinsert(ATempty, q_21), y_46));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,s_41 = NULL,t_41 = NULL;
  m_41 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
      {
        ATerm p_20 = NULL,u_20 = NULL;
        t = SSL_explode_string(s_41);
        t = escape_chars_1_0(u_2, t);
        u_20 = t;
        t = SSL_implode_string(u_20);
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_20), t_41);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          s_41 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, s_41));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              s_41 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, s_41));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  s_41 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, s_41));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      s_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, s_41));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          s_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              s_41 = ATgetArgument(t, 0);
                              t_41 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_41), t_41);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  s_41 = ATgetArgument(t, 0);
                                  t_41 = ATgetArgument(t, 1);
                                  {
                                    static ATerm y_2 (ATerm t);
                                    static ATerm y_2 (ATerm t)
                                    {
                                      t = t_41;
                                      return(t);
                                    }
                                    t = s_41;
                                    t = foldr_2_0(y_2, z_2, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      s_41 = ATgetArgument(t, 0);
                                      t = s_41;
                                      t = foldr_2_0(a_3, d_3, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          s_41 = ATgetArgument(t, 0);
                                          t_41 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATinsert(CheckATermList(t_41), s_41));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              s_41 = ATgetArgument(t, 0);
                                              t = s_41;
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
                                                          t = o_47(s_41, m_41, t);
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
                                                      t = o_47(s_41, m_41, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_47(s_41, m_41, t);
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
                                                      s_41 = ATgetArgument(t, 0);
                                                      t_41 = ATgetArgument(t, 1);
                                                      t = t_41;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          h_41 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, h_41), s_41));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          s_41 = ATgetArgument(t, 0);
                                                          t = s_41;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              s_41 = ATgetArgument(t, 0);
                                                              t_41 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, s_41, t_41, term_x_23);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  s_41 = ATgetArgument(t, 0);
                                                                  t_41 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, s_41, t_41, term_x_23);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      s_41 = ATgetArgument(t, 0);
                                                                      t_41 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, s_41, (ATerm)ATempty, t_41);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          s_41 = ATgetArgument(t, 0);
                                                                          t_41 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_41, s_41);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              s_41 = ATgetArgument(t, 0);
                                                                              t_41 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, s_41, t_41, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  s_41 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, s_41, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      s_41 = ATgetArgument(t, 0);
                                                                                      t_41 = ATgetArgument(t, 1);
                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_41, t_41, (ATerm)ATempty, l_41);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          s_41 = ATgetArgument(t, 0);
                                                                                          t_41 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_41, (ATerm)ATempty, (ATerm)ATempty, t_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              s_41 = ATgetArgument(t, 0);
                                                                                              t_41 = ATgetArgument(t, 1);
                                                                                              l_41 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, s_41, t_41, (ATerm)ATempty, l_41);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  s_41 = ATgetArgument(t, 0);
                                                                                                  t_41 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, s_41, (ATerm)ATempty, (ATerm)ATempty, t_41);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      s_41 = ATgetArgument(t, 0);
                                                                                                      t_41 = ATgetArgument(t, 1);
                                                                                                      l_41 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, s_41, t_41, (ATerm)ATempty, l_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          s_41 = ATgetArgument(t, 0);
                                                                                                          t_41 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, s_41, (ATerm)ATempty, (ATerm)ATempty, t_41);
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
                                                                                                                  t_41 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(z_23);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, t_41);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_23;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  s_41 = ATgetArgument(t, 0);
                                                                                                                  t_41 = ATgetArgument(t, 1);
                                                                                                                  t = q_47(s_41, t_41, m_41, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      s_41 = ATgetArgument(t, 0);
                                                                                                                      t_41 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm e_3 (ATerm t);
                                                                                                                        static ATerm e_3 (ATerm t)
                                                                                                                        {
                                                                                                                          t = t_41;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = s_41;
                                                                                                                        t = foldr_2_0(e_3, q_3, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          s_41 = ATgetArgument(t, 0);
                                                                                                                          t = s_41;
                                                                                                                          t = foldr_2_0(s_3, v_3, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              s_41 = ATgetArgument(t, 0);
                                                                                                                              t = s_41;
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
                                                                                                                                          t = r_47(s_41, m_41, t);
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
                                                                                                                                      t = r_47(s_41, m_41, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = r_47(s_41, m_41, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  s_41 = ATgetArgument(t, 0);
                                                                                                                                  t_41 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm e_46 = NULL;
                                                                                                                                    t = t_41;
                                                                                                                                    t = foldr_2_0(w_3, z_3, t);
                                                                                                                                    e_46 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, s_41, e_46);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      s_41 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, s_41, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          s_41 = ATgetArgument(t, 0);
                                                                                                                                          t = s_47(s_41, m_41, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm e_24 = t;
                                                                                                                                          int k_24 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  s_41 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm m_24 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  l_41 = ATgetArgument(t, 2);
                                                                                                                                                  k_41 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(k_24);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, s_41, l_41, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_41), (ATerm) ATempty));
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
                                                                                                                                                        s_41 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm q_24 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        l_41 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(p_24);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, s_41, l_41, term_u_24);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = o_24;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        s_41 = ATgetArgument(t, 0);
                                                                                                                                                        t_41 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, s_41, t_41, term_u_24);
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
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  y_47 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_47 = ATgetArgument(t, 0);
      x_47 = ATgetArgument(t, 1);
      {
        ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,t_48 = NULL;
        t = y_47;
        t = new_0_0(t);
        o_48 = t;
        t = new_0_0(t);
        p_48 = t;
        t = new_0_0(t);
        q_48 = t;
        t = new_0_0(t);
        t_48 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_48), q_48), p_48), o_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_48), (ATerm) ATmakeAppl(sym_Var_1, q_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_47, (ATerm)ATmakeAppl(sym_Var_1, o_48), (ATerm) ATmakeAppl(sym_Var_1, p_48)), (ATerm) ATmakeAppl(sym_BAM_3, x_47, (ATerm)ATmakeAppl(sym_Var_1, q_48), (ATerm) ATmakeAppl(sym_Var_1, t_48)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_48)), (ATerm) ATmakeAppl(sym_Var_1, p_48))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_47 = ATgetArgument(t, 0);
          {
            ATerm u_48 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL;
            t = y_47;
            t = new_0_0(t);
            e_49 = t;
            t = z_47;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_49)), not_null(u_48))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_49)), (ATerm) ATmakeAppl(sym_Build_1, f_49))));
          }
        }
      else
        {
          ATerm h_49 = NULL,i_49 = NULL,l_49 = NULL,n_49 = NULL,o_49 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_47;
          t = new_0_0(t);
          l_49 = t;
          t = new_0_0(t);
          n_49 = t;
          t = z_47;
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
          o_49 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_49), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_49)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_49))))), (ATerm)ATmakeAppl(sym_Var_1, l_49), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_49)), not_null(h_49)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_49 = NULL,e_50 = NULL;
  y_49 = t;
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
        t = y_49;
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
              t = y_49;
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
                t = y_49;
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
ATerm pat_td_1_0 (ATerm x_176 (ATerm), ATerm t)
{
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_176(t);
      LocalPopChoice(g_25);
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
              ATerm y_21 = NULL,c_22 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(h_54);
              y_21 = t;
              t = j_54;
              {
                static ATerm m_4 (ATerm t);
                static ATerm m_4 (ATerm t)
                {
                  t = pat_td_1_0(x_176, t);
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
                      ATerm c_23 = NULL,f_23 = NULL,l_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      c_23 = t;
                      t = j_54;
                      t = pat_td_1_0(x_176, t);
                      f_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_54, f_23);
                      l_4 = t;
                      t = SSLsetAnnotations(l_4, c_23);
                      LocalPopChoice(i_25);
                    }
                  else
                    {
                      t = h_25;
                      {
                        ATerm j_24 = NULL,n_24 = NULL,n_4 = NULL;
                        t = SSLgetAnnotations(h_54);
                        j_24 = t;
                        t = i_54;
                        t = pat_td_1_0(x_176, t);
                        n_24 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, n_24, j_54);
                        n_4 = t;
                        t = SSLsetAnnotations(n_4, j_24);
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
                      ATerm f_25 = NULL,p_25 = NULL,o_4 = NULL;
                      t = SSLgetAnnotations(h_54);
                      f_25 = t;
                      t = g_54;
                      {
                        static ATerm q_4 (ATerm t);
                        static ATerm q_4 (ATerm t)
                        {
                          t = pat_td_1_0(x_176, t);
                          return(t);
                        }
                        t = fetch_1_0(q_4, t);
                      }
                      p_25 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_54, j_54, p_25);
                      o_4 = t;
                      t = SSLsetAnnotations(o_4, f_25);
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
                          ATerm h_26 = NULL,t_26 = NULL,p_4 = NULL;
                          t = SSLgetAnnotations(h_54);
                          h_26 = t;
                          t = g_54;
                          {
                            static ATerm w_4 (ATerm t);
                            static ATerm w_4 (ATerm t)
                            {
                              t = pat_td_1_0(x_176, t);
                              return(t);
                            }
                            t = fetch_1_0(w_4, t);
                          }
                          t_26 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_54, j_54, t_26);
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
                        t = pat_td_1_0(x_176, t);
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
  ATerm g_58 = NULL,i_58 = NULL,j_58 = NULL,m_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          g_58 = ATgetArgument(u_25, 0);
          i_58 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            j_58 = ATgetArgument(v_25, 0);
            m_58 = ATgetArgument(v_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_58), g_58), (ATerm) ATinsert(CheckATermList(m_58), i_58));
  return(t);
}
static ATerm x_10 (ATerm n_106, ATerm o_106, ATerm p_106, ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,r_57 = NULL,s_57 = NULL,w_5 = NULL;
  t = p_106;
  t = fetch_1_0(b_5, t);
  t = p_106;
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
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, r_57);
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
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_57, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_57), (ATerm) ATmakeAppl(sym_CallT_3, n_106, o_106, h_57)));
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
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,a_33 = NULL;
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
            a_33 = ATgetArgument(k_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_32), v_32), (ATerm) ATinsert(CheckATermList(a_33), w_32));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_64 = ATgetArgument(t, 0);
      d_64 = ATgetArgument(t, 1);
      a_64 = ATgetArgument(t, 2);
      {
        ATerm r_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,c_6 = NULL;
        t = a_64;
        t = fetch_1_0(k_5, t);
        t = a_64;
        t = genzip_4_0(n_5, o_5, p_5, LiftPrimArg_0_0, t);
        d_29 = t;
        if(match_cons(t, sym__2))
          {
            w_28 = ATgetArgument(t, 0);
            a_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_29);
        v_28 = t;
        t = w_28;
        t = concat_0_0(t);
        b_29 = t;
        t = a_29;
        t = genzip_4_0(q_5, r_5, s_5, _id, t);
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
        c_6 = t;
        t = SSLsetAnnotations(c_6, v_28);
        if(match_cons(t, sym__2))
          {
            r_28 = ATgetArgument(t, 0);
            {
              ATerm l_26 = ATgetArgument(t, 1);
              if(match_cons(l_26, sym__2))
                {
                  t_28 = ATgetArgument(l_26, 0);
                  u_28 = ATgetArgument(l_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_28), (ATerm) ATmakeAppl(sym_PrimT_3, c_64, d_64, u_28)));
      }
    }
  else
    {
      ATerm a_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,q_31 = NULL,r_31 = NULL,e_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          c_64 = ATgetArgument(t, 0);
          d_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_64;
      t = fetch_1_0(t_5, t);
      t = d_64;
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_31, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_31), (ATerm) ATmakeAppl(sym_PrimT_3, c_64, (ATerm)ATempty, e_31)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_144 (ATerm), ATerm g_144 (ATerm), ATerm t)
{
  static ATerm g_64 (ATerm t);
  static ATerm g_64 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_144(t);
        t = g_64(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = g_144(t);
      }
    return(t);
  }
  t = g_64(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  b_65 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
      a_65 = ATgetArgument(t, 2);
      {
        ATerm z_33 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(b_65);
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_64, z_64, a_65);
        j_6 = t;
        t = SSLsetAnnotations(j_6, z_33);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = b_65;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_26;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,x_66 = NULL,y_66 = NULL;
  v_66 = t;
  if(match_cons(t, sym_Con_3))
    {
      x_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
      u_66 = ATgetArgument(t, 2);
      {
        ATerm f_35 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(v_66);
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_66, y_66, u_66);
        l_6 = t;
        t = SSLsetAnnotations(l_6, f_35);
      }
    }
  else
    {
      ATerm a_36 = NULL,m_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          x_66 = ATgetArgument(t, 0);
          y_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_66);
      a_36 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, x_66, y_66);
      m_6 = t;
      t = SSLsetAnnotations(m_6, a_36);
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
  ATerm h_67 = NULL,i_67 = NULL,l_67 = NULL,m_67 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_67;
  if(match_cons(t, sym_StratRule_3))
    {
      i_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
      m_67 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_67), (ATerm) ATmakeAppl(sym_Where_1, m_67)), i_67));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_67 = ATgetArgument(t, 0);
          l_67 = ATgetArgument(t, 1);
          m_67 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_67;
      t = pureterm_0_0(t);
      t = l_67;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, l_67)), (ATerm) ATmakeAppl(sym_Where_1, m_67)), (ATerm) ATmakeAppl(sym_Match_1, i_67)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_139 (ATerm), ATerm t)
{
  static ATerm z_67 (ATerm t);
  static ATerm z_67 (ATerm t)
  {
    ATerm s_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_139(t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = s_26;
        t = SRTS_one(z_67, t);
      }
    return(t);
  }
  t = z_67(t);
  return(t);
}
static ATerm b_11 (ATerm a_102, ATerm b_102, ATerm c_102, ATerm t)
{
  ATerm a_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  t = new_0_0(t);
  g_68 = t;
  t = a_102;
  {
    static ATerm k_6 (ATerm t);
    static ATerm k_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_26 = ATgetArgument(t, 0);
          if(match_cons(y_26, sym_Var_1))
            {
              if(((f_68 != NULL) && (f_68 != ATgetArgument(y_26, 0))))
                _fail(ATgetArgument(y_26, 0));
              else
                f_68 = ATgetArgument(y_26, 0);
            }
          else
            _fail(t);
          if(((d_68 != NULL) && (d_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_68 = ATgetArgument(t, 1);
          {
            ATerm z_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_68);
      return(t);
    }
    t = oncetd_1_0(k_6, t);
  }
  h_68 = t;
  t = b_102;
  {
    static ATerm n_6 (ATerm t);
    static ATerm n_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_27 = ATgetArgument(t, 0);
          if(match_cons(a_27, sym_Var_1))
            {
              if(((f_68 != NULL) && (f_68 != ATgetArgument(a_27, 0))))
                _fail(ATgetArgument(a_27, 0));
              else
                f_68 = ATgetArgument(a_27, 0);
            }
          else
            _fail(t);
          if(((e_68 != NULL) && (e_68 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_68 = ATgetArgument(t, 1);
          {
            ATerm b_27 = ATgetArgument(t, 2);
            if(match_cons(b_27, sym_CallT_3))
              {
                if(((a_68 != NULL) && (a_68 != ATgetArgument(b_27, 0))))
                  _fail(ATgetArgument(b_27, 0));
                else
                  a_68 = ATgetArgument(b_27, 0);
                {
                  ATerm c_27 = ATgetArgument(b_27, 1);
                  if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, g_68);
      return(t);
    }
    t = oncetd_1_0(n_6, t);
  }
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_68), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_68, i_68, (ATerm) ATmakeAppl(sym_Seq_2, c_102, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_68), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_68), not_null(e_68), term_x_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_68)), (ATerm) ATmakeAppl(sym_Var_1, g_68))))));
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
          ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,i_69 = NULL;
          f_69 = t;
          if(match_cons(t, sym_SRule_1))
            {
              g_69 = ATgetArgument(t, 0);
              t = g_69;
              if(match_cons(t, sym_Rule_3))
                {
                  c_69 = ATgetArgument(t, 0);
                  d_69 = ATgetArgument(t, 1);
                  e_69 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_69;
              t = b_11(c_69, d_69, e_69, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_37 = NULL,d_37 = NULL,p_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  g_69 = ATgetArgument(t, 0);
                  i_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_69);
              a_37 = t;
              t = i_69;
              t = desugarRule_0_0(t);
              d_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, g_69, d_37);
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
ATerm topdown_1_0 (ATerm f_138 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    t = topdown_1_0(f_138, t);
    return(t);
  }
  t = f_138(t);
  t = SRTS_all(o_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm m_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(o_27);
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
  ATerm q_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = q_27;
      {
        ATerm w_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
            m_70 = t;
            if(match_cons(t, sym_CallT_3))
              {
                n_70 = ATgetArgument(t, 0);
                o_70 = ATgetArgument(t, 1);
                p_70 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_70;
            t = x_10(n_70, o_70, p_70, t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = w_27;
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
                              int s_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_70 = NULL,x_70 = NULL,b_71 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_70 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_70;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      x_70 = ATgetArgument(t, 0);
                                      t = x_70;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          x_70 = ATgetArgument(t, 0);
                                          b_71 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, x_70, b_71);
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
  ATerm c_72 = NULL,d_72 = NULL;
  d_72 = t;
  t = SSL_explode_term(d_72);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) == AT_LIST) && !(ATisEmpty(z_29))))
          {
            c_72 = ATgetFirst((ATermList) z_29);
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
  t = c_72;
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
ATerm tuple_unzip_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL;
  static ATerm e_72 (ATerm t);
  static ATerm e_72 (ATerm t)
  {
    ATerm f_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
        x_71 = t;
        t = map_1_0(u_6, t);
        t = m_142(t);
        y_71 = t;
        t = x_71;
        t = map_1_0(v_6, t);
        t = e_72(t);
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
  t = e_72(t);
  w_71 = t;
  t = term_r_21;
  v_71 = t;
  t = SSL_mkterm(v_71, w_71);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm f_72 = NULL;
  f_72 = t;
  {
    ATerm i_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
        t = f_72;
        t = new_0_0(t);
        j_72 = t;
        t = new_0_0(t);
        k_72 = t;
        t = new_0_0(t);
        l_72 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, f_72), (ATerm) ATmakeAppl(sym_Var_1, k_72))), (ATerm) ATmakeAppl(sym_Var_1, l_72)), (ATerm)ATmakeAppl(sym_VarDec_2, j_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), k_72, (ATerm)ATmakeAppl(sym_Var_1, k_72), l_72, (ATerm) ATmakeAppl(sym_Var_1, l_72));
        LocalPopChoice(l_30);
      }
    else
      {
        t = i_30;
        {
          ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
          t = f_72;
          t = new_0_0(t);
          n_72 = t;
          t = new_0_0(t);
          o_72 = t;
          t = new_0_0(t);
          p_72 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_72), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, f_72), (ATerm) ATmakeAppl(sym_Var_1, o_72))), (ATerm) ATmakeAppl(sym_Var_1, p_72)), (ATerm)ATmakeAppl(sym_VarDec_2, n_72, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), o_72, (ATerm)ATmakeAppl(sym_Var_1, o_72), p_72, (ATerm) ATmakeAppl(sym_Var_1, p_72));
        }
      }
  }
  return(t);
}
static ATerm c_11 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_45, e_45);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      t = SSL_subtr(d_45, e_45);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_72, r_72, (ATerm) ATempty);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm s_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_30 = ATgetArgument(t, 0);
      if(((ATgetType(r_30) != AT_INT) || (ATgetInt((ATermInt) r_30) != 0)))
        _fail(t);
      {
        ATerm s_30 = ATgetArgument(t, 1);
      }
      s_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_72;
  return(t);
}
ATerm copy_1_0 (ATerm r_161 (ATerm), ATerm t)
{
  static ATerm d_7 (ATerm t);
  static ATerm d_7 (ATerm t)
  {
    ATerm t_72 = NULL,u_72 = NULL,b_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
    if(match_cons(t, sym__3))
      {
        t_72 = ATgetArgument(t, 0);
        u_72 = ATgetArgument(t, 1);
        b_73 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, t_72, term_b_21);
    t = geq_0_0(t);
    t = term_b_21;
    g_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_72, term_b_21);
    t = c_11(t_72, g_73, t);
    e_73 = t;
    t = u_72;
    t = r_161(t);
    f_73 = t;
    t = (ATerm) ATmakeAppl(sym__3, e_73, u_72, (ATerm) ATinsert(CheckATermList(b_73), f_73));
    return(t);
  }
  t = for_3_0(a_7, c_7, d_7, t);
  return(t);
}
static ATerm d_11 (ATerm f_83, ATerm g_83, ATerm t)
{
  ATerm h_73 = NULL,k_73 = NULL,n_73 = NULL;
  t = new_0_0(t);
  h_73 = t;
  t = new_0_0(t);
  k_73 = t;
  t = new_0_0(t);
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_73), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_83)), (ATerm) ATmakeAppl(sym_Var_1, k_73))), (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_83)), (ATerm) ATmakeAppl(sym_Var_1, n_73)))), (ATerm)ATmakeAppl(sym_VarDec_2, h_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_30), term_o_30)), k_73, (ATerm)ATmakeAppl(sym_Var_1, k_73), n_73, (ATerm) ATmakeAppl(sym_Var_1, n_73));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_73 = ATgetFirst((ATermList) t);
      y_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_73;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_73;
    }
  else
    {
      t = y_73;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm m_77 (ATerm y_74, ATerm b_75, ATerm d_75, ATerm e_75, ATerm t)
{
  ATerm l_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,t_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,a_76 = NULL,d_76 = NULL,e_76 = NULL;
  t = term_b_21;
  e_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_75, term_b_21);
  t = i_12(b_75, e_76, t);
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_76, term_t_30);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_75 = ATgetFirst((ATermList) t);
      p_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_75;
  t = last_0_0(t);
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_75), o_75), p_75);
  t = genzip_4_0(e_7, h_7, i_7, k_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      q_75 = ATgetArgument(t, 0);
      t_75 = ATgetArgument(t, 1);
      v_75 = ATgetArgument(t, 2);
      w_75 = ATgetArgument(t, 3);
      x_75 = ATgetArgument(t, 4);
      y_75 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_75), v_75), p_75);
  t = concat_0_0(t);
  a_76 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, y_74, term_u_30), t_75, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_76), o_75), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_75)), (ATerm) ATmakeAppl(sym_Op_2, y_74, w_75))), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_75)), (ATerm) ATmakeAppl(sym_Op_2, y_74, y_75))), (ATerm) ATmakeAppl(sym_Seqs_1, q_75)))));
  return(t);
}
static ATerm n_77 (ATerm o_76, ATerm p_76, ATerm q_76, ATerm r_76, ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  t = r_76;
  t = new_0_0(t);
  v_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_76, (ATerm) ATmakeAppl(sym_Var_1, v_76));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_76 = ATgetArgument(t, 0);
      x_76 = ATgetArgument(t, 1);
      y_76 = ATgetArgument(t, 2);
      z_76 = ATgetArgument(t, 3);
      a_77 = ATgetArgument(t, 4);
      b_77 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_76, a_77);
  t = conc_0_0(t);
  c_77 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_76, term_v_30), x_76, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(c_77), v_76), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_76)), (ATerm) ATmakeAppl(sym_Op_2, o_76, z_76))), (ATerm)ATmakeAppl(sym_Op_2, o_76, b_77), (ATerm) ATmakeAppl(sym_Seqs_1, w_76)))));
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
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
        {
          f_76 = ATgetFirst((ATermList) z_30);
          g_76 = (ATerm) ATgetNext((ATermList) z_30);
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
          {
            h_76 = ATgetFirst((ATermList) h_31);
            i_76 = (ATerm) ATgetNext((ATermList) h_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_76, h_76), (ATerm) ATmakeAppl(sym__2, g_76, i_76));
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_76), j_76);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL;
  if(match_cons(t, sym__2))
    {
      l_76 = ATgetArgument(t, 0);
      m_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(l_76, m_76, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  e_77 = t;
  if(match_cons(t, sym__3))
    {
      f_77 = ATgetArgument(t, 0);
      g_77 = ATgetArgument(t, 1);
      h_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_77;
  if(match_string(t, "T"))
    {
      t = h_77;
      if(match_cons(t, sym__2))
        {
          i_77 = ATgetArgument(t, 0);
          j_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_77;
      if(match_int(t, 0))
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_77(f_77, i_77, j_77, e_77, t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              {
                ATerm l_77 = NULL;
                t = e_77;
                t = new_0_0(t);
                l_77 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, f_77, term_u_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_77), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_77)), (ATerm) ATmakeAppl(sym_Op_2, f_77, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_77)), (ATerm) ATmakeAppl(sym_Op_2, f_77, (ATerm) ATempty))), term_x_23))));
              }
            }
        }
      else
        {
          t = m_77(f_77, i_77, j_77, e_77, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = h_77;
      if(match_cons(t, sym__2))
        {
          i_77 = ATgetArgument(t, 0);
          j_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_77(f_77, i_77, j_77, e_77, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_156 (ATerm), ATerm t)
{
  ATerm g_24 = NULL;
  static ATerm l_7 (ATerm t);
  static ATerm l_7 (ATerm t)
  {
    t = b_156(t);
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
  ATerm h_24 = NULL,i_24 = NULL,l_24 = NULL;
  t = term_l_17;
  i_24 = t;
  t = (ATerm) ATinsert(ATempty, term_z_31);
  l_24 = t;
  t = SSL_printnl(i_24, l_24);
  t = term_b_21;
  h_24 = t;
  t = SSL_exit(h_24);
  t = (ATerm) ATinsert(ATempty, term_z_31);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL;
  ATerm c_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm i_33 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_33);
      t = k_18;
      t = foldr_3_0(s_7, u_7, v_7, t);
      t = i_18;
      t = foldr_3_0(w_7, x_7, y_7, t);
    }
  else
    {
      t = c_33;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm l_33 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          k_18 = ATgetArgument(t, 2);
          {
            ATerm o_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_18;
      t = foldr_3_0(b_8, e_8, i_8, t);
      t = i_18;
      t = foldr_3_0(j_8, l_8, m_8, t);
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_y_20;
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
  t = i_12(o_18, p_18, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_y_20;
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
  t = i_12(r_18, s_18, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_y_20;
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
  t = i_12(w_18, x_18, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_y_20;
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
  t = i_12(z_18, b_19, t);
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
      ATerm r_33 = ATgetArgument(t, 0);
      ATerm t_33 = ATgetArgument(t, 1);
      ATerm w_33 = ATgetArgument(t, 2);
      ATerm x_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm a_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24 = NULL;
      static ATerm m_7 (ATerm t);
      static ATerm m_7 (ATerm t)
      {
        ATerm v_24 = NULL,w_24 = NULL;
        v_24 = t;
        {
          ATerm j_34 = t;
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
                    ATerm m_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_34);
              t = w_24;
              if(((s_24 != NULL) && (s_24 != t)))
                _fail(t);
              else
                s_24 = t;
              t = v_24;
            }
          else
            {
              t = j_34;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm r_34 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm t_34 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm u_34 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = w_24;
              if(((s_24 != NULL) && (s_24 != t)))
                _fail(t);
              else
                s_24 = t;
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
              if(((s_24 != NULL) && (s_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_24 = ATgetArgument(t, 0);
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
      t = not_null(s_24);
      t = debug_1_0(q_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = a_34;
      {
        ATerm q_26 = NULL;
        q_26 = t;
        t = map_1_0(r_7, t);
        t = q_26;
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
  ATerm v_26 = NULL,w_26 = NULL,j_19 = NULL;
  v_26 = t;
  t = SSL_explode_term(v_26);
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            w_26 = ATgetFirst((ATermList) g_35);
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
  t = SSL_explode_term(v_26);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_26, j_19);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(q_8, t_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  static ATerm x_26 (ATerm t);
  static ATerm x_26 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_139(t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = SRTS_all(x_26, t);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
static ATerm l_10 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  e_27 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        t = n_12(l_48, m_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_35 = ATgetFirst((ATermList) t);
            d_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_35);
        {
          ATerm n_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, l_48, m_48, d_27);
          t = lookup_table_0_1(l_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_12(m_48, d_27, n_27, t);
          t = (ATerm) ATmakeAppl(sym__3, l_48, m_48, d_27);
        }
      }
    else
      {
        t = u_35;
        {
          ATerm p_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
          t = lookup_table_0_1(l_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_12(m_48, p_27, t);
          t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        }
      }
  }
  t = e_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_150 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  u_27 = t;
  t = f_150(t);
  t_27 = t;
  {
    ATerm x_35 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL;
        t = term_f_36;
        a_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_27, term_f_36);
        t = n_12(t_27, a_28, t);
        {
          ATerm g_36 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_36;
            }
        }
        LocalPopChoice(b_36);
      }
    else
      {
        t = x_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_27, term_f_36, r_27);
  t = lookup_table_0_1(t_27, t);
  z_27 = t;
  t = term_f_36;
  x_27 = t;
  t = z_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(x_27, r_27, y_27, t);
  t = s_27;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      ATerm d_28 = NULL;
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_27, d_28);
      t = l_10(t_27, d_28, t);
      return(t);
    }
    t = map_1_0(u_8, t);
  }
  t = u_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t)
{
  ATerm h_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_141(t);
      t = r_141(t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = h_36;
      t = r_141(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_150 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  i_28 = t;
  t = e_150(t);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_28, term_f_36);
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
        t = term_f_36;
        z_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_28, term_f_36);
        t = n_12(h_28, z_28, t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
  }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_28, term_f_36, (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty));
  t = lookup_table_0_1(h_28, t);
  n_28 = t;
  t = term_f_36;
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
  t = r_12(k_28, l_28, m_28, t);
  t = i_28;
  return(t);
}
ATerm scope_2_0 (ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    t = end_scope_1_0(g_150, t);
    return(t);
  }
  t = begin_scope_1_0(g_150, t);
  t = restore_always_2_0(h_150, v_8, t);
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
      ATerm q_36 = ATgetArgument(t, 0);
      if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
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
ATerm substitute_2_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  static ATerm z_8 (ATerm t);
  static ATerm z_8 (ATerm t)
  {
    ATerm o_19 = NULL;
    t = o_137(t);
    o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_19, not_null(b_32));
    t = lookup_0_0(t);
    t = p_137(t);
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
  ATerm z_32 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(match_cons(n_37, sym_VarDec_2))
        {
          z_32 = ATgetArgument(n_37, 0);
          {
            ATerm p_37 = ATgetArgument(n_37, 1);
          }
        }
      else
        _fail(t);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, z_32);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, b_33);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, z_32), (ATerm) ATmakeAppl(sym_Defined_2, term_q_37, b_33));
  t = v_11(o_9, e_33, g_33, t);
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
  ATerm h_33 = NULL,j_33 = NULL,u_19 = NULL;
  h_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_37;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_37, h_33);
  t = z_11(u_19, h_33, t);
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
static ATerm p_10 (ATerm l_85, ATerm m_85, ATerm q_85, ATerm n_85, ATerm p_85, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,g_32 = NULL;
  t = n_85;
  t = map_1_0(a_9, t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_32, m_85, p_85);
  t = substitute_2_0(b_9, _id, t);
  e_32 = t;
  {
    static ATerm e_9 (ATerm t);
    static ATerm e_9 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, q_85, l_85);
      t = genzip_4_0(g_9, h_9, m_9, n_9, t);
      t = e_32;
      t = alltd_1_0(p_9, t);
      if(((g_32 != NULL) && (g_32 != t)))
        _fail(t);
      else
        g_32 = t;
      return(t);
    }
    t = scope_2_0(d_9, e_9, t);
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
  ATerm b_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,r_6 = NULL;
  g_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_34 = ATgetArgument(t, 0);
      e_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_34);
  b_34 = t;
  t = d_34;
  t = new_0_0(t);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_34, e_34);
  r_6 = t;
  t = SSLsetAnnotations(r_6, b_34);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,s_6 = NULL;
  p_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_34);
  h_34 = t;
  t = i_34;
  t = new_0_0(t);
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_34, n_34);
  s_6 = t;
  t = SSLsetAnnotations(s_6, h_34);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm q_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_34 = ATgetArgument(t, 0);
      {
        ATerm u_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_34);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm s_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_34 = ATgetArgument(t, 0);
      {
        ATerm v_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_34);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm k_33 = NULL,m_33 = NULL,n_33 = NULL,p_33 = NULL,q_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL,y_33 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_38 = ATgetFirst((ATermList) t);
      if(match_cons(a_38, sym_SDefT_4))
        {
          k_33 = ATgetArgument(a_38, 0);
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
  q_33 = t;
  t = p_33;
  t = map_1_0(s_9, t);
  u_33 = t;
  t = q_33;
  t = map_1_0(t_9, t);
  v_33 = t;
  t = s_33;
  {
    static ATerm u_9 (ATerm t);
    static ATerm u_9 (ATerm t)
    {
      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm e_38 = ATgetArgument(t, 0);
          v_34 = ATgetArgument(t, 1);
          w_34 = ATgetArgument(t, 2);
          x_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_10(u_33, v_33, v_34, w_34, x_34, t);
      return(t);
    }
    t = map_1_0(u_9, t);
  }
  t = choices_0_0(t);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_33, p_33, q_33, y_33);
  return(t);
}
static ATerm z_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm x_77, ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,i_78 = NULL,w_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_77, v_77);
  t = Definitions_0_0(t);
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, w_77);
  i_78 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      ATerm g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_78);
  e_78 = t;
  t = d_78;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_78 = NULL,l_78 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_78 = ATgetFirst((ATermList) t);
            l_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_78;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_78;
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
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_78, w_77);
  w_6 = t;
  t = SSLsetAnnotations(w_6, e_78);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  p_78 = t;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_78;
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_78;
  if(match_cons(t, sym_Mod_2))
    {
      n_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_78 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, n_78, o_78, s_78);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            y_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_78, t_78);
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            t = z_78(r_78, s_78, t_78, p_78, t);
          }
      }
    }
  else
    {
      t = z_78(r_78, s_78, t_78, p_78, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_156 (ATerm), ATerm t)
{
  static ATerm u_79 (ATerm t);
  static ATerm u_79 (ATerm t)
  {
    ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
    t_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_79 = ATgetFirst((ATermList) t);
        s_79 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_37 = NULL,r_37 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(t_79);
          o_37 = t;
          t = s_79;
          t = u_79(t);
          r_37 = t;
          t = (ATerm) ATinsert(CheckATermList(r_37), r_79);
          z_6 = t;
          t = SSLsetAnnotations(z_6, o_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_79;
        t = g_156(t);
      }
    return(t);
  }
  t = u_79(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_79;
    }
  else
    {
      static ATerm v_9 (ATerm t);
      static ATerm v_9 (ATerm t)
      {
        t = not_null(d_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_79 = ATgetFirst((ATermList) t);
          if(((d_79 != NULL) && (d_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_79;
      t = at_end_1_0(v_9, t);
    }
  return(t);
}
static ATerm g_80 (ATerm y_79, ATerm t)
{
  ATerm z_79 = NULL;
  t = SSL_explode_term(y_79);
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_79;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  d_80 = t;
  if(match_cons(t, sym__2))
    {
      b_80 = ATgetArgument(t, 0);
      c_80 = ATgetArgument(t, 1);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_9 (ATerm t);
            static ATerm w_9 (ATerm t)
            {
              t = c_80;
              return(t);
            }
            t = b_80;
            t = at_end_1_0(w_9, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = g_80(d_80, t);
          }
      }
    }
  else
    {
      t = g_80(d_80, t);
    }
  return(t);
}
static ATerm j_11 (ATerm t_157 (ATerm), ATerm k_71, ATerm j_71, ATerm t)
{
  static ATerm y_80 (ATerm t);
  static ATerm y_80 (ATerm t)
  {
    ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
    r_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_80;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_80 = ATgetFirst((ATermList) t);
            t_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_80;
              {
                static ATerm b_10 (ATerm t);
                static ATerm b_10 (ATerm t)
                {
                  t = j_71;
                  return(t);
                }
                t = w_11(t_157, b_10, s_80, t_80, t);
              }
              t = y_80(t);
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
              {
                ATerm d_38 = NULL,l_38 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(r_80);
                d_38 = t;
                t = t_80;
                t = y_80(t);
                l_38 = t;
                t = (ATerm) ATinsert(CheckATermList(l_38), s_80);
                b_7 = t;
                t = SSLsetAnnotations(b_7, d_38);
              }
            }
        }
      }
    return(t);
  }
  t = k_71;
  t = y_80(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm t)
{
  static ATerm g_81 (ATerm t);
  static ATerm g_81 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_142(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,j_7 = NULL;
          t = x_142(t);
          f_81 = t;
          if(match_cons(t, sym__2))
            {
              b_81 = ATgetArgument(t, 0);
              c_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_81);
          a_81 = t;
          t = b_81;
          t = z_142(t);
          d_81 = t;
          t = c_81;
          t = g_81(t);
          e_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_81, e_81);
          j_7 = t;
          t = SSLsetAnnotations(j_7, a_81);
          t = y_142(t);
        }
      }
    return(t);
  }
  t = g_81(t);
  return(t);
}
static ATerm d_10 (ATerm t)
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
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
        {
          n_81 = ATgetFirst((ATermList) x_38);
          o_81 = (ATerm) ATgetNext((ATermList) x_38);
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
          {
            p_81 = ATgetFirst((ATermList) y_38);
            q_81 = (ATerm) ATgetNext((ATermList) y_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_81, p_81), (ATerm) ATmakeAppl(sym__2, o_81, q_81));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  if(match_cons(t, sym__2))
    {
      r_81 = ATgetArgument(t, 0);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_81), r_81);
  return(t);
}
static ATerm o_11 (ATerm p_982, ATerm u_982, ATerm d_98, ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
  t = SSL_explode_term(u_982);
  if(match_cons(t, sym__2))
    {
      i_81 = ATgetArgument(t, 0);
      k_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_982);
  if(match_cons(t, sym__2))
    {
      if((i_81 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  t = genzip_4_0(d_10, f_10, g_10, _id, t);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, d_98);
  t = conc_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm p_83 = NULL;
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_83);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,o_7 = NULL;
  t_83 = t;
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      s_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_83);
  q_83 = t;
  t = s_83;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_83, s_83);
  o_7 = t;
  t = SSLsetAnnotations(o_7, q_83);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm p_84 = NULL,w_84 = NULL,x_84 = NULL,i_85 = NULL,k_85 = NULL;
  p_84 = t;
  if(match_cons(t, sym__2))
    {
      w_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_85 = ATgetFirst((ATermList) t);
      k_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_86(w_84, x_84, p_84, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_84), i_85), k_85);
          }
      }
    }
  else
    {
      t = e_86(w_84, x_84, p_84, t);
    }
  return(t);
}
static ATerm e_86 (ATerm u_83, ATerm v_83, ATerm w_83, ATerm t)
{
  ATerm x_83 = NULL,a_84 = NULL,p_7 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
  t = SSLgetAnnotations(w_83);
  x_83 = t;
  t = v_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_84 = ATgetFirst((ATermList) t);
      j_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_84;
  if(match_cons(t, sym__2))
    {
      h_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_84;
        if((h_84 != t))
          {
            _fail(t);
          }
        t = j_84;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = v_83;
        t = o_11(h_84, i_84, j_84, t);
      }
  }
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_83, a_84);
  p_7 = t;
  t = SSLsetAnnotations(p_7, x_83);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm c_86 = NULL;
  if(match_cons(t, sym__2))
    {
      c_86 = ATgetArgument(t, 0);
      if((c_86 != ATgetArgument(t, 1)))
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
      t = for_3_0(h_10, i_10, j_10, t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
        x_85 = t;
        if(match_cons(t, sym__2))
          {
            y_85 = ATgetArgument(t, 0);
            z_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_85;
        t = j_11(m_10, y_85, z_85, t);
      }
    }
  return(t);
}
static ATerm q_11 (ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm i_101, ATerm f_101, ATerm n_101, ATerm j_101, ATerm g_101, ATerm h_101, ATerm t)
{
  ATerm k_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,s_86 = NULL,x_86 = NULL,d_87 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_101, j_101);
  t = t_176(t);
  if(match_cons(t, sym__2))
    {
      n_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_86;
  t = u_176(t);
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_86, n_101);
  t = diff_0_0(t);
  p_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, f_101);
  t = conc_0_0(t);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, n_101);
  t = conc_0_0(t);
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_101, n_86, g_101);
  t = v_176(t);
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__5, s_86, x_86, k_86, d_87, h_101);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm t)
{
  ATerm f_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,n_87 = NULL,q_87 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          f_87 = ATgetFirst((ATermList) g_39);
          i_87 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      j_87 = ATgetArgument(t, 1);
      k_87 = ATgetArgument(t, 2);
      n_87 = ATgetArgument(t, 3);
      q_87 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = q_11(t_176, u_176, v_176, f_87, i_87, j_87, k_87, n_87, q_87, t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t)
{
  static ATerm t_87 (ATerm t);
  static ATerm t_87 (ATerm t)
  {
    ATerm j_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_144(t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = j_39;
        t = x_144(t);
        t = t_87(t);
      }
    return(t);
  }
  t = t_87(t);
  return(t);
}
ATerm for_3_0 (ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t)
{
  t = z_144(t);
  t = while_not_2_0(a_145, b_145, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  if(match_cons(t, sym__3))
    {
      o_88 = ATgetArgument(t, 0);
      p_88 = ATgetArgument(t, 1);
      q_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, o_88, o_88, p_88, q_88, (ATerm) ATempty);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
        _fail(t);
      {
        ATerm v_39 = ATgetArgument(t, 1);
      }
      {
        ATerm w_39 = ATgetArgument(t, 2);
      }
      t_88 = ATgetArgument(t, 3);
      u_88 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_88, u_88);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm d_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, r_10, t_10, t);
      LocalPopChoice(j_40);
    }
  else
    {
      t = d_40;
      {
        ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
        if(match_cons(t, sym__5))
          {
            a_89 = ATgetArgument(t, 0);
            d_89 = ATgetArgument(t, 1);
            e_89 = ATgetArgument(t, 2);
            f_89 = ATgetArgument(t, 3);
            g_89 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = a_89;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_89 = ATgetFirst((ATermList) t);
            c_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, c_89, d_89, e_89, f_89, (ATerm) ATinsert(CheckATermList(g_89), b_89));
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
  ATerm x_88 = NULL,y_88 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      x_88 = ATgetArgument(t, 1);
      y_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_88), x_88);
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
  ATerm a_40 = NULL,b_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
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
      b_40 = ATgetArgument(t, 1);
      {
        ATerm n_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_40;
            t = e_10(a_40, b_40, i_40, t);
            LocalPopChoice(q_40);
          }
        else
          {
            t = n_40;
            t = a_41(h_40, i_40, t);
          }
      }
    }
  else
    {
      t = a_41(h_40, i_40, t);
    }
  return(t);
}
static ATerm a_41 (ATerm l_39, ATerm m_39, ATerm t)
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
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  t = for_3_0(n_10, o_10, q_10, t);
  j_90 = t;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_90;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_90;
    }
  else
    {
      ATerm d_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_90 = ATgetFirst((ATermList) t);
          n_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_90), m_90);
      t = map_1_0(v_10, t);
      t = term_b_21;
      d_39 = t;
      t = SSL_exit(d_39);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_145 (ATerm), ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  r_90 = t;
  t = s_145(t);
  s_90 = t;
  t = term_l_17;
  t_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_90), s_90);
  u_90 = t;
  t = SSL_printnl(t_90, u_90);
  t = r_90;
  return(t);
}
static ATerm t_11 (ATerm t_84, ATerm u_84, ATerm v_84, ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
  t = SSL_int_to_string(u_84);
  w_90 = t;
  t = SSL_int_to_string(v_84);
  x_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_40), x_90), term_v_40), w_90), term_u_40), t_84);
  y_90 = t;
  t = SSL_concat_strings(y_90);
  return(t);
}
ATerm ExtDefinition_0_0 (ATerm t)
{
  ATerm j_91 = NULL,l_91 = NULL;
  j_91 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      l_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_91;
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
        t = (ATerm) ATmakeAppl(sym__2, term_o_41, j_91);
        t = z_11(q_42, j_91, t);
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
          ATerm u_42 = NULL,a_43 = NULL;
          t = term_o_41;
          a_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_41, j_91);
          t = z_11(a_43, j_91, t);
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
static ATerm w_10 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL;
  if(match_cons(t, sym__2))
    {
      t_91 = ATgetArgument(t, 0);
      u_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(t_91, u_91, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL;
  if(match_cons(t, sym__2))
    {
      v_91 = ATgetArgument(t, 0);
      w_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(v_91, w_91, t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm u_11 (ATerm q_84, ATerm r_84, ATerm s_84, ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL;
  t = r_84;
  t = foldr_3_0(w_10, y_10, g_11, t);
  q_91 = t;
  t = s_84;
  t = foldr_3_0(h_11, i_11, k_11, t);
  r_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_84, (ATerm) ATmakeAppl(sym__2, q_91, r_91));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm z_91 = NULL;
  z_91 = t;
  {
    ATerm r_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm v_41 = ATgetArgument(t, 0);
            ATerm w_41 = ATgetArgument(t, 1);
            ATerm x_41 = ATgetArgument(t, 2);
            ATerm a_42 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        LocalPopChoice(u_41);
        {
          ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              a_92 = ATgetArgument(t, 0);
              b_92 = ATgetArgument(t, 1);
              c_92 = ATgetArgument(t, 2);
              {
                ATerm b_42 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = u_11(a_92, b_92, c_92, t);
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_92 = NULL;
                d_92 = t;
                t = ExtDefinition_0_0(t);
                t = d_92;
                LocalPopChoice(d_42);
                {
                  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_92 = ATgetArgument(t, 0);
                      {
                        ATerm e_42 = ATgetArgument(t, 1);
                        if(match_cons(e_42, sym__2))
                          {
                            g_92 = ATgetArgument(e_42, 0);
                            h_92 = ATgetArgument(e_42, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = t_11(f_92, g_92, h_92, t);
                  t = debug_1_0(m_11, t);
                  t = term_b_21;
                  e_92 = t;
                  t = SSL_exit(e_92);
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
        t = r_41;
      }
  }
  t = z_91;
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
static ATerm p_11 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL;
  if(match_cons(t, sym__2))
    {
      a_93 = ATgetArgument(t, 0);
      b_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(a_93, b_93, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL;
  if(match_cons(t, sym__2))
    {
      c_93 = ATgetArgument(t, 0);
      d_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(c_93, d_93, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_93 = NULL;
  if(match_cons(t, sym__2))
    {
      e_93 = ATgetArgument(t, 0);
      if((e_93 != ATgetArgument(t, 1)))
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
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL;
  o_92 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      p_92 = ATgetArgument(t, 0);
      k_92 = ATgetArgument(t, 1);
      l_92 = ATgetArgument(t, 2);
      {
        ATerm h_42 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_92 = t;
  t = k_92;
  t = foldr_3_0(n_11, p_11, r_11, t);
  m_92 = t;
  t = l_92;
  t = foldr_3_0(s_11, y_11, m_12, t);
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  {
    ATerm i_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = i_42;
        t = (ATerm) ATempty;
      }
  }
  t_92 = t;
  t = p_92;
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
  s_92 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_92, n_92)), s_92);
  t = x_11(p_12, z_92, s_92, t);
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_42, (ATerm) ATinsert(CheckATermList(t_92), o_92));
  y_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_42, (ATerm) ATinsert(CheckATermList(t_92), o_92)));
  t = v_11(t_12, x_92, y_92, t);
  t = (ATerm) ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92));
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, o_92);
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym__2, m_92, n_92)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_42, o_92));
  t = v_11(u_12, v_92, w_92, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, q_92);
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_92, (ATerm) ATmakeAppl(sym_Defined_2, term_t_42, q_92));
  t = v_11(y_12, p_92, u_92, t);
  t = r_92;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL;
  if(match_cons(t, sym__2))
    {
      v_93 = ATgetArgument(t, 0);
      w_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(v_93, w_93, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL;
  if(match_cons(t, sym__2))
    {
      x_93 = ATgetArgument(t, 0);
      y_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(x_93, y_93, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm z_93 = NULL;
  if(match_cons(t, sym__2))
    {
      z_93 = ATgetArgument(t, 0);
      if((z_93 != ATgetArgument(t, 1)))
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
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL;
  j_93 = t;
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
  t = foldr_3_0(z_12, a_13, b_13, t);
  h_93 = t;
  t = g_93;
  t = foldr_3_0(c_13, d_13, e_13, t);
  i_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, h_93, i_93));
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
  o_93 = t;
  t = k_93;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = (ATerm) ATempty;
      }
  }
  n_93 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_93, i_93));
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_93, i_93)), n_93);
  t = x_11(f_13, u_93, n_93, t);
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, h_93, i_93));
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_43, (ATerm) ATinsert(CheckATermList(o_93), j_93));
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, h_93, i_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_43, (ATerm) ATinsert(CheckATermList(o_93), j_93)));
  t = v_11(g_13, s_93, t_93, t);
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, h_93, i_93));
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_43, j_93);
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym__2, h_93, i_93)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_43, j_93));
  t = v_11(i_13, q_93, r_93, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_43, l_93);
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_93, (ATerm) ATmakeAppl(sym_Defined_2, term_d_43, l_93));
  t = v_11(j_13, k_93, p_93, t);
  t = m_93;
  return(t);
}
static ATerm v_11 (ATerm i_150 (ATerm), ATerm t_46, ATerm q_46, ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  d_94 = t;
  t = i_150(t);
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_94, t_46, q_46);
  t = o_12(a_94, t_46, q_46, t);
  {
    ATerm e_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_94 = NULL;
        t = term_f_36;
        i_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_94, term_f_36);
        t = n_12(a_94, i_94, t);
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
        t = e_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_94 = ATgetFirst((ATermList) t);
      c_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_94, term_f_36, (ATerm) ATinsert(CheckATermList(c_94), (ATerm) ATinsert(CheckATermList(b_94), t_46)));
  t = lookup_table_0_1(a_94, t);
  h_94 = t;
  t = term_f_36;
  e_94 = t;
  t = (ATerm) ATinsert(CheckATermList(c_94), (ATerm) ATinsert(CheckATermList(b_94), t_46));
  f_94 = t;
  t = h_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(e_94, f_94, g_94, t);
  t = d_94;
  return(t);
}
static ATerm w_11 (ATerm b_158 (ATerm), ATerm c_158 (ATerm), ATerm q_71, ATerm p_71, ATerm t)
{
  t = c_158(t);
  {
    static ATerm m_13 (ATerm t);
    static ATerm m_13 (ATerm t)
    {
      ATerm j_94 = NULL;
      j_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_71, j_94);
      t = b_158(t);
      return(t);
    }
    t = fetch_1_0(m_13, t);
  }
  t = p_71;
  return(t);
}
static ATerm x_11 (ATerm y_157 (ATerm), ATerm m_71, ATerm l_71, ATerm t)
{
  static ATerm z_94 (ATerm t);
  static ATerm z_94 (ATerm t)
  {
    ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL;
    u_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_94 = ATgetFirst((ATermList) t);
            w_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_94;
              {
                static ATerm n_13 (ATerm t);
                static ATerm n_13 (ATerm t)
                {
                  t = l_71;
                  return(t);
                }
                t = w_11(y_157, n_13, v_94, w_94, t);
              }
              t = z_94(t);
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm f_43 = NULL,i_43 = NULL,a_8 = NULL;
                t = SSLgetAnnotations(u_94);
                f_43 = t;
                t = w_94;
                t = z_94(t);
                i_43 = t;
                t = (ATerm) ATinsert(CheckATermList(i_43), v_94);
                a_8 = t;
                t = SSLsetAnnotations(a_8, f_43);
              }
            }
        }
      }
    return(t);
  }
  t = m_71;
  t = z_94(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm n_95 = NULL;
  n_95 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_44 = NULL,c_45 = NULL;
        t = term_g_42;
        c_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_42, n_95);
        t = z_11(c_45, n_95, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_43) != ATmakeSymbol("l_1", 0, ATtrue)))
              _fail(t);
            t_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_44;
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
              ATerm q_45 = NULL,a_46 = NULL;
              t = term_g_42;
              a_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_42, n_95);
              t = z_11(a_46, n_95, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_43 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_43) != ATmakeSymbol("e_1", 0, ATtrue)))
                    _fail(t);
                  q_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_45;
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
              {
                ATerm i_46 = NULL,l_46 = NULL;
                t = term_g_42;
                l_46 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_42, n_95);
                t = z_11(l_46, n_95, t);
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
static ATerm z_11 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm r_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
  t = n_12(r_48, s_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_95 = ATgetFirst((ATermList) t);
      {
        ATerm s_43 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_95;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm o_96 = NULL,q_96 = NULL;
  o_96 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_96;
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
        ATerm j_47 = NULL,p_47 = NULL;
        t = term_f_42;
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_42, o_96);
        t = z_11(p_47, o_96, t);
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
              ATerm w_47 = NULL,d_48 = NULL;
              t = term_f_42;
              d_48 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_42, o_96);
              t = z_11(d_48, o_96, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_44 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_44) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  w_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_47;
              LocalPopChoice(a_44);
            }
          else
            {
              t = z_43;
              {
                ATerm n_48 = NULL,x_48 = NULL;
                t = term_f_42;
                x_48 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_42, o_96);
                t = z_11(x_48, o_96, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_44 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_44) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    n_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_48;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm f_161 (ATerm), ATerm t)
{
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
  x_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_96;
      t = d_161(t);
    }
  else
    {
      ATerm c_97 = NULL,d_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_96 = ATgetFirst((ATermList) t);
          z_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_96;
      t = f_161(t);
      c_97 = t;
      t = z_96;
      t = foldr_3_0(d_161, e_161, f_161, t);
      d_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_97, d_97);
      t = e_161(t);
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
  ATerm s_97 = NULL,t_97 = NULL;
  if(match_cons(t, sym__2))
    {
      s_97 = ATgetArgument(t, 0);
      t_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(s_97, t_97, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL;
  if(match_cons(t, sym__2))
    {
      u_97 = ATgetArgument(t, 0);
      v_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(u_97, v_97, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm w_97 = NULL;
  if(match_cons(t, sym__2))
    {
      w_97 = ATgetArgument(t, 0);
      if((w_97 != ATgetArgument(t, 1)))
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
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
  g_97 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_97 = ATgetArgument(t, 0);
      e_97 = ATgetArgument(t, 1);
      f_97 = ATgetArgument(t, 2);
      {
        ATerm d_44 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  l_97 = t;
  t = e_97;
  t = foldr_3_0(o_13, p_13, q_13, t);
  h_97 = t;
  t = f_97;
  t = foldr_3_0(r_13, s_13, t_13, t);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, h_97, i_97));
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
  n_97 = t;
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
  m_97 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_97, i_97));
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_97, i_97)), m_97);
  t = x_11(u_13, r_97, m_97, t);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, h_97, i_97));
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_44, (ATerm) ATinsert(CheckATermList(n_97), g_97));
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym__2, h_97, i_97)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_44, (ATerm) ATinsert(CheckATermList(n_97), g_97)));
  t = v_11(w_13, p_97, q_97, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_44, k_97);
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, (ATerm) ATmakeAppl(sym_Defined_2, term_j_44, k_97));
  t = v_11(x_13, j_97, o_97, t);
  t = l_97;
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
  ATerm y_97 = NULL;
  t = map_1_0(a_14, t);
  t = check_ext_overload_0_0(t);
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_q_44), y_97, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm z_97 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,d_8 = NULL;
  i_98 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_98 = ATgetFirst((ATermList) t);
      f_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_98);
  z_97 = t;
  t = e_98;
  t = f_112(t);
  g_98 = t;
  t = f_98;
  t = g_112(t);
  h_98 = t;
  t = (ATerm) ATinsert(CheckATermList(h_98), g_98);
  d_8 = t;
  t = SSLsetAnnotations(d_8, z_97);
  return(t);
}
static ATerm a_12 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm j_98 = NULL;
  t = SSL_fputc(w_37, x_37);
  j_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_98);
  return(t);
}
static ATerm b_12 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm k_98 = NULL;
  t = SSL_write_term_to_stream_text(c_36, d_36);
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_98);
  return(t);
}
static ATerm d_12 (ATerm u_145 (ATerm), ATerm n_291, ATerm i_36, ATerm t)
{
  ATerm l_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_291, term_r_44);
  t = h_12(t);
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_98, i_36);
  t = u_145(t);
  t = fclose_0_0(t);
  t = i_36;
  return(t);
}
static ATerm c_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm m_98 = NULL;
  t = SSL_write_term_to_stream_baf(y_35, z_35);
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_98);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_44 = ATgetArgument(t, 0);
      if(match_cons(s_44, sym_Stream_1))
        {
          t_98 = ATgetArgument(s_44, 0);
        }
      else
        _fail(t);
      u_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(t_98, u_98, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_44 = ATgetArgument(t, 0);
      if(match_cons(u_44, sym_Stream_1))
        {
          y_98 = ATgetArgument(u_44, 0);
        }
      else
        _fail(t);
      z_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(y_98, z_98, t);
  v_98 = t;
  t = term_g_22;
  w_98 = t;
  t = v_98;
  if(match_cons(t, sym_Stream_1))
    {
      x_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, v_98);
  t = a_12(w_98, x_98, t);
  return(t);
}
ATerm output_1_0 (ATerm y_171 (ATerm), ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL;
  t = y_171(t);
  o_98 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_98 = NULL,q_98 = NULL;
        t = term_z_44;
        p_98 = t;
        t = term_a_45;
        q_98 = t;
        t = term_b_45;
        t = n_12(p_98, q_98, t);
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        t = term_f_45;
      }
  }
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_98, o_98);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_98 = NULL,s_98 = NULL;
        t = term_z_44;
        r_98 = t;
        t = term_i_45;
        s_98 = t;
        t = term_j_45;
        t = n_12(r_98, s_98, t);
        t = (ATerm) ATmakeAppl(sym__2, n_98, o_98);
        LocalPopChoice(h_45);
        if(match_cons(t, sym__2))
          {
            ATerm k_45 = ATgetArgument(t, 0);
            ATerm l_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(b_14, n_98, o_98, t);
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
        t = d_12(c_14, n_98, o_98, t);
      }
  }
  return(t);
}
static ATerm n_99 (ATerm h_99, ATerm t)
{
  t = SSL_fclose(h_99);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL;
  l_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_99 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_99);
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            t = n_99(l_99, t);
          }
      }
    }
  else
    {
      t = n_99(l_99, t);
    }
  return(t);
}
static ATerm e_12 (ATerm e_36, ATerm t)
{
  t = SSL_read_term_from_stream(e_36);
  return(t);
}
static ATerm f_12 (ATerm w_80, ATerm x_80, ATerm t)
{
  t = SSL_strcat(w_80, x_80);
  return(t);
}
static ATerm g_12 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm o_99 = NULL;
  t = SSL_fopen(y_37, z_37);
  o_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_99 = NULL;
  t = SSL_stdin_stream();
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_99 = NULL;
  t = SSL_stdout_stream();
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_99 = NULL;
  t = SSL_stderr_stream();
  r_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_99);
  return(t);
}
static ATerm y_100 (ATerm x_99, ATerm t)
{
  ATerm y_99 = NULL;
  t = SSL_explode_term(x_99);
  if(match_cons(t, sym__2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_45 = ATgetArgument(t, 1);
        if(((ATgetType(v_45) == AT_LIST) && !(ATisEmpty(v_45))))
          {
            y_99 = ATgetFirst((ATermList) v_45);
            {
              ATerm w_45 = (ATerm) ATgetNext((ATermList) v_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_99;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_99;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_99;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_99;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_100 (ATerm b_100, ATerm c_100, ATerm d_100, ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL,j_100 = NULL,f_8 = NULL;
  t = SSLgetAnnotations(d_100);
  g_100 = t;
  t = b_100;
  if(match_cons(t, sym_Path_1))
    {
      j_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_100, c_100);
  f_8 = t;
  t = SSLsetAnnotations(f_8, g_100);
  if(match_cons(t, sym__2))
    {
      e_100 = ATgetArgument(t, 0);
      f_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(e_100, f_100, t);
  return(t);
}
static ATerm a_101 (ATerm l_100, ATerm m_100, ATerm n_100, ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL,t_100 = NULL,h_8 = NULL;
  t = SSLgetAnnotations(n_100);
  q_100 = t;
  t = SSL_is_string(l_100);
  t_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_100, m_100);
  h_8 = t;
  t = SSLsetAnnotations(h_8, q_100);
  if(match_cons(t, sym__2))
    {
      o_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(o_100, p_100, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL;
  v_100 = t;
  if(match_cons(t, sym__2))
    {
      w_100 = ATgetArgument(t, 0);
      x_100 = ATgetArgument(t, 1);
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_100(v_100, t);
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
                  t = z_100(w_100, x_100, v_100, t);
                  LocalPopChoice(c_46);
                }
              else
                {
                  t = b_46;
                  t = a_101(w_100, x_100, v_100, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_100(v_100, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL,t_101 = NULL;
  t_101 = t;
  {
    ATerm d_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_101, term_h_46);
        t = h_12(t);
        LocalPopChoice(f_46);
      }
    else
      {
        t = d_46;
        {
          ATerm r_49 = NULL,t_49 = NULL;
          t = term_j_46;
          t_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_46, t_101);
          t = f_12(t_49, t_101, t);
          r_49 = t;
          t = SSL_perror(r_49);
          _fail(t);
        }
      }
  }
  d_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12(e_101, t);
  c_101 = t;
  t = d_101;
  t = fclose_0_0(t);
  t = c_101;
  return(t);
}
ATerm input_1_0 (ATerm z_171 (ATerm), ATerm t)
{
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_101 = NULL,x_101 = NULL;
      t = term_z_44;
      w_101 = t;
      t = term_n_46;
      x_101 = t;
      t = term_o_46;
      t = n_12(w_101, x_101, t);
      LocalPopChoice(m_46);
    }
  else
    {
      t = k_46;
      t = term_p_46;
    }
  t = ReadFromFile_0_0(t);
  t = z_171(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL;
  t = term_z_44;
  y_101 = t;
  t = term_r_46;
  z_101 = t;
  t = term_s_46;
  t = n_12(y_101, z_101, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL;
  l_102 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_46 = ATgetFirst((ATermList) t);
                ATerm x_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_102;
          }
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = (ATerm) ATinsert(ATempty, l_102);
      }
  }
  m_102 = t;
  t = term_f_45;
  n_102 = t;
  t = SSL_printnl(n_102, m_102);
  t = l_102;
  return(t);
}
ATerm map_1_0 (ATerm r_155 (ATerm), ATerm t)
{
  static ATerm c_104 (ATerm t);
  static ATerm c_104 (ATerm t)
  {
    ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL;
    z_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_103;
      }
    else
      {
        ATerm b_50 = NULL,f_50 = NULL,h_50 = NULL,k_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_104 = ATgetFirst((ATermList) t);
            b_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_103);
        b_50 = t;
        t = a_104;
        t = r_155(t);
        f_50 = t;
        t = b_104;
        t = c_104(t);
        h_50 = t;
        t = (ATerm) ATinsert(CheckATermList(h_50), f_50);
        k_8 = t;
        t = SSLsetAnnotations(k_8, b_50);
      }
    return(t);
  }
  t = c_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_104 = ATgetFirst((ATermList) t);
      g_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_104 = NULL,l_104 = NULL;
        static ATerm d_14 (ATerm t);
        static ATerm d_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_104)), not_null(l_104));
          return(t);
        }
        t = g_104;
        t = r_0(t);
        if(((k_104 != NULL) && (k_104 != t)))
          _fail(t);
        else
          k_104 = t;
        t = f_104;
        t = p_0(t);
        if(((l_104 != NULL) && (l_104 != t)))
          _fail(t);
        else
          l_104 = t;
        t = g_104;
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
  ATerm i_105 = NULL,j_105 = NULL,p_105 = NULL,n_8 = NULL;
  p_105 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_105);
  i_105 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_105);
  n_8 = t;
  t = SSLsetAnnotations(n_8, i_105);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm i_107 = NULL;
  i_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_107), term_z_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL;
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_105 = NULL,h_105 = NULL;
      t = term_z_44;
      g_105 = t;
      t = term_r_46;
      h_105 = t;
      t = term_s_46;
      t = n_12(g_105, h_105, t);
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
        t = x_173(t);
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
  e_105 = t;
  t = term_g_47;
  f_105 = t;
  t = term_h_47;
  t = n_12(e_105, f_105, t);
  t = reverse_acc_2_0(_id, f_14, t);
  t = map_1_0(g_14, t);
  t = term_i_47;
  t = echo_0_0(t);
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_173(t);
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_107 = NULL;
              j_107 = t;
              t = SSL_is_string(j_107);
              t = j_107;
              LocalPopChoice(n_47);
              {
                ATerm k_107 = NULL;
                k_107 = t;
                t = (ATerm) ATinsert(ATempty, k_107);
              }
            }
          else
            {
              t = m_47;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
      }
  }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL,p_8 = NULL;
  t_107 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_107);
  r_107 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_107);
  p_8 = t;
  t = SSLsetAnnotations(p_8, r_107);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_107 = NULL;
  o_107 = t;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_107 = NULL,q_107 = NULL;
        t = term_z_44;
        p_107 = t;
        t = term_r_46;
        q_107 = t;
        t = term_s_46;
        t = n_12(p_107, q_107, t);
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        t = fetch_1_0(h_14, t);
      }
  }
  t = o_107;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm d_108 = NULL;
  d_108 = t;
  if(match_string(t, "-k"))
    {
      t = d_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_108;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
  e_108 = t;
  t = SSL_string_to_int(e_108);
  f_108 = t;
  t = term_v_47;
  g_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, f_108);
  t = q_12(g_108, f_108, t);
  t = e_108;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_14, j_14, k_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm i_108 = NULL;
  i_108 = t;
  if(match_string(t, "-S"))
    {
      t = i_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_108;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm j_108 = NULL,k_108 = NULL;
  t = term_b_48;
  j_108 = t;
  t = term_y_20;
  k_108 = t;
  t = term_c_48;
  t = q_12(j_108, k_108, t);
  t = term_e_48;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_i_48;
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
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL;
  v_108 = t;
  t = SSL_string_to_int(v_108);
  w_108 = t;
  t = term_b_48;
  x_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_48, w_108);
  t = q_12(x_108, w_108, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_108);
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
  ATerm y_108 = NULL,z_108 = NULL;
  t = term_k_48;
  y_108 = t;
  t = term_t_30;
  z_108 = t;
  t = term_v_48;
  t = q_12(y_108, z_108, t);
  t = term_w_48;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, n_14, t);
      LocalPopChoice(a_49);
    }
  else
    {
      t = z_48;
      {
        ATerm b_49 = t;
        int d_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_14, p_14, r_14, t);
            LocalPopChoice(d_49);
          }
        else
          {
            t = b_49;
            t = Option_3_0(s_14, t_14, u_14, t);
          }
      }
    }
  return(t);
}
static ATerm q_12 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm o_109 = NULL,i_110 = NULL;
  t = term_z_44;
  o_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_44, y_41, z_41);
  t = lookup_table_0_1(o_109, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(y_41, z_41, i_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_44, y_41, z_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_111 = NULL,w_111 = NULL,y_111 = NULL;
      t = term_t_30;
      t = g_0(t);
      t_111 = t;
      t = term_f_47;
      w_111 = t;
      t = term_g_47;
      y_111 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, t_111);
      t = o_12(w_111, y_111, t_111, t);
      _fail(t);
    }
  else
    {
      ATerm i_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_110 = ATgetFirst((ATermList) t);
          n_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_110;
      t = d_0(t);
      t = term_t_30;
      t = f_0(t);
      i_112 = t;
      t = (ATerm) ATinsert(CheckATermList(n_110), i_112);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm k_112 = NULL;
  k_112 = t;
  if(match_string(t, "-o"))
    {
      t = k_112;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_112;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm l_112 = NULL,m_112 = NULL;
  l_112 = t;
  t = term_a_45;
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_45, l_112);
  t = q_12(m_112, l_112, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_112);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_g_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_14, w_14, x_14, t);
  return(t);
}
static ATerm o_12 (ATerm g_48, ATerm h_48, ATerm f_48, ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
  {
    ATerm j_49 = t;
    int k_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_49 = ATgetArgument(t, 0);
            ATerm p_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
        t = n_12(g_48, h_48, t);
        LocalPopChoice(k_49);
      }
    else
      {
        t = j_49;
        t = (ATerm) ATempty;
      }
  }
  p_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_48, h_48, (ATerm) ATinsert(CheckATermList(p_112), f_48));
  t = lookup_table_0_1(g_48, t);
  s_112 = t;
  t = (ATerm) ATinsert(CheckATermList(p_112), f_48);
  q_112 = t;
  t = s_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(h_48, q_112, r_112, t);
  t = o_112;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
      t = term_t_30;
      t = n_0(t);
      d_113 = t;
      t = term_f_47;
      e_113 = t;
      t = term_g_47;
      f_113 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, d_113);
      t = o_12(e_113, f_113, d_113, t);
      _fail(t);
    }
  else
    {
      ATerm j_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_112 = ATgetFirst((ATermList) t);
          a_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_113;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_113 = ATgetFirst((ATermList) t);
          c_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_112;
      t = j_0(t);
      t = b_113;
      t = l_0(t);
      j_113 = t;
      t = (ATerm) ATinsert(CheckATermList(c_113), j_113);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm l_113 = NULL;
  l_113 = t;
  if(match_string(t, "-i"))
    {
      t = l_113;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_113;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL;
  m_113 = t;
  t = term_n_46;
  n_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_46, m_113);
  t = q_12(n_113, m_113, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_113);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_q_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_14, z_14, f_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_30;
  t = whoami_0_0(t);
  o_113 = t;
  t = term_l_17;
  q_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_49), o_113);
  r_113 = t;
  t = SSL_printnl(q_113, r_113);
  t = term_b_21;
  p_113 = t;
  t = SSL_exit(p_113);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL;
  t = term_z_44;
  s_113 = t;
  t = term_r_46;
  t_113 = t;
  t = term_s_46;
  t = n_12(s_113, t_113, t);
  return(t);
}
static ATerm i_12 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_44, y_44);
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      t = SSL_addr(x_44, y_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_161 (ATerm), ATerm c_161 (ATerm), ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL;
  v_113 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_113;
      t = b_161(t);
    }
  else
    {
      ATerm a_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_113 = ATgetFirst((ATermList) t);
          x_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_113;
      t = foldr_2_0(b_161, c_161, t);
      a_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_113, a_114);
      t = c_161(t);
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
  t = i_12(d_51, e_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_114 = NULL,z_50 = NULL,a_51 = NULL;
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
  d_114 = t;
  t = SSL_TicksToSeconds(d_114);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
  o_114 = t;
  if(match_cons(t, sym__2))
    {
      p_114 = ATgetArgument(t, 0);
      q_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_50 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_114;
        if((p_114 != t))
          {
            _fail(t);
          }
        t = o_114;
        LocalPopChoice(d_50);
      }
    else
      {
        t = c_50;
        t = (ATerm) ATmakeAppl(sym__2, p_114, q_114);
        {
          ATerm g_50 = t;
          int i_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_114, q_114);
              LocalPopChoice(i_50);
            }
          else
            {
              t = g_50;
              t = SSL_gtr(p_114, q_114);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_114, q_114);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_147 (ATerm), ATerm t)
{
  ATerm u_114 = NULL;
  u_114 = t;
  {
    ATerm j_50 = t;
    int l_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
        t = term_z_44;
        x_114 = t;
        t = term_b_48;
        y_114 = t;
        t = term_p_50;
        t = n_12(x_114, y_114, t);
        w_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_114, term_b_21);
        t = geq_0_0(t);
        t = u_114;
        t = m_147(t);
        LocalPopChoice(l_50);
      }
    else
      {
        t = j_50;
        t = u_114;
      }
  }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL,d_115 = NULL,e_115 = NULL;
  t = run_time_0_0(t);
  a_115 = t;
  t = term_t_30;
  t = whoami_0_0(t);
  b_115 = t;
  t = term_l_17;
  d_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_50), a_115), term_t_50), b_115);
  e_115 = t;
  t = SSL_printnl(d_115, e_115);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_50), a_115), term_t_50), b_115));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_115 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_20;
  f_115 = t;
  t = SSL_exit(f_115);
  return(t);
}
static ATerm r_12 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t)
{
  ATerm g_115 = NULL;
  t = SSL_hashtable_put(x_52, v_52, w_52);
  g_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_115);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_49, ATerm t)
{
  ATerm p_115 = NULL;
  t = table_hashtable_0_0(t);
  p_115 = t;
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL;
        t = p_115;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_52 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_12(s_49, h_52, t);
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
        {
          ATerm s_52 = NULL;
          t = s_49;
          t = table_create_0_0(t);
          t = p_115;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_12(s_49, s_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm s_115 = NULL;
  t = SSL_hashtable_create(d_53, e_53);
  s_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_115);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,x_115 = NULL,y_115 = NULL;
  t_115 = t;
  t = term_f_51;
  x_115 = t;
  t = term_g_51;
  y_115 = t;
  t = t_115;
  t = new_hashtable_0_2(x_115, y_115, t);
  u_115 = t;
  t = t_115;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(t_115, u_115, v_115, t);
  t = t_115;
  return(t);
}
static ATerm k_12 (ATerm a_53, ATerm b_53, ATerm t)
{
  ATerm z_115 = NULL;
  t = SSL_hashtable_remove(b_53, a_53);
  z_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_115);
  return(t);
}
static ATerm l_12 (ATerm f_53, ATerm t)
{
  ATerm a_116 = NULL;
  t = SSL_hashtable_destroy(f_53);
  a_116 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_116);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_116 = NULL;
  t = SSL_table_hashtable();
  b_116 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_116);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL;
  c_116 = t;
  t = table_hashtable_0_0(t);
  d_116 = t;
  t = lookup_table_0_1(c_116, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(f_116, t);
  t = d_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(c_116, e_116, t);
  t = c_116;
  return(t);
}
ATerm fetch_1_0 (ATerm z_155 (ATerm), ATerm t)
{
  static ATerm c_117 (ATerm t);
  static ATerm c_117 (ATerm t)
  {
    ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL;
    z_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_117 = ATgetFirst((ATermList) t);
        b_117 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_51 = t;
      int i_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_55 = NULL,m_55 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(z_116);
          j_55 = t;
          t = a_117;
          t = z_155(t);
          m_55 = t;
          t = (ATerm) ATinsert(CheckATermList(b_117), m_55);
          r_8 = t;
          t = SSLsetAnnotations(r_8, j_55);
          LocalPopChoice(i_51);
        }
      else
        {
          t = h_51;
          {
            ATerm h_56 = NULL,k_56 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(z_116);
            h_56 = t;
            t = b_117;
            t = c_117(t);
            k_56 = t;
            t = (ATerm) ATinsert(CheckATermList(k_56), a_117);
            s_8 = t;
            t = SSLsetAnnotations(s_8, h_56);
          }
        }
    }
    return(t);
  }
  t = c_117(t);
  return(t);
}
static ATerm s_12 (ATerm y_52, ATerm z_52, ATerm t)
{
  t = SSL_hashtable_get(z_52, y_52);
  return(t);
}
static ATerm n_12 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm f_117 = NULL;
  t = lookup_table_0_1(z_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(a_50, f_117, t);
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
  ATerm h_117 = NULL,i_117 = NULL;
  t = term_j_51;
  h_117 = t;
  t = term_t_30;
  i_117 = t;
  t = term_k_51;
  t = q_12(h_117, i_117, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_l_51;
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
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL;
  t = term_j_51;
  l_117 = t;
  t = term_t_30;
  m_117 = t;
  t = term_k_51;
  t = q_12(l_117, m_117, t);
  t = term_m_51;
  j_117 = t;
  t = term_t_30;
  k_117 = t;
  t = term_n_51;
  t = q_12(j_117, k_117, t);
  t = term_o_51;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_p_51;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_15, k_15, l_15, t);
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      t = Option_3_0(o_15, p_15, q_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_173 (ATerm), ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,w_117 = NULL,x_117 = NULL,c_9 = NULL;
  r_117 = t;
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_51;
        t = s_173(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
      }
  }
  t = r_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_117 = ATgetFirst((ATermList) t);
      u_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_117);
  s_117 = t;
  t = term_r_46;
  x_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_46, t_117);
  t = q_12(x_117, t_117, t);
  t = u_117;
  {
    static ATerm h_118 (ATerm t);
    static ATerm h_118 (ATerm t)
    {
      ATerm v_51 = t;
      int w_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_51 = t;
          int y_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_118 = NULL;
              a_118 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_118;
              LocalPopChoice(y_51);
            }
          else
            {
              t = x_51;
              t = s_173(t);
              t = Cons_2_0(_id, h_118, t);
            }
          LocalPopChoice(w_51);
        }
      else
        {
          t = v_51;
          {
            ATerm d_118 = NULL,e_118 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_118 = ATgetFirst((ATermList) t);
                e_118 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_118), (ATerm) ATmakeAppl(sym_Undefined_1, d_118));
          }
        }
      return(t);
    }
    t = h_118(t);
  }
  w_117 = t;
  t = (ATerm) ATinsert(CheckATermList(w_117), (ATerm) ATmakeAppl(sym_Program_1, t_117));
  c_9 = t;
  t = SSLsetAnnotations(c_9, s_117);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm u_118 = NULL;
  u_118 = t;
  if(match_string(t, "--help"))
    {
      t = u_118;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_118;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_118;
        }
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL;
  t = term_z_51;
  v_118 = t;
  t = term_t_30;
  w_118 = t;
  t = term_a_52;
  t = q_12(v_118, w_118, t);
  t = term_b_52;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_c_52;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
  o_118 = t;
  t = term_f_47;
  p_118 = t;
  t = term_d_52;
  t = lookup_table_0_1(p_118, t);
  t_118 = t;
  t = term_g_47;
  q_118 = t;
  t = (ATerm) ATempty;
  r_118 = t;
  t = t_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(q_118, r_118, s_118, t);
  t = o_118;
  {
    static ATerm r_15 (ATerm t);
    static ATerm r_15 (ATerm t)
    {
      ATerm e_52 = t;
      int f_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_173(t);
          LocalPopChoice(f_52);
        }
      else
        {
          t = e_52;
          {
            ATerm g_52 = t;
            int i_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_15, t_15, u_15, t);
                LocalPopChoice(i_52);
              }
            else
              {
                t = g_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_15, t);
  }
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_119 = NULL;
        h_119 = t;
        {
          ATerm l_52 = t;
          int m_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_57 = NULL;
              t = h_119;
              {
                ATerm n_52 = t;
                int o_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_57 = NULL,n_57 = NULL;
                    t = term_z_44;
                    m_57 = t;
                    t = term_z_51;
                    n_57 = t;
                    t = term_p_52;
                    t = n_12(m_57, n_57, t);
                    LocalPopChoice(o_52);
                  }
                else
                  {
                    t = n_52;
                    t = fetch_1_0(v_15, t);
                  }
              }
              t = h_119;
              t = q_173(t);
              t = term_y_20;
              e_57 = t;
              t = SSL_exit(e_57);
              LocalPopChoice(m_52);
            }
          else
            {
              t = l_52;
              {
                ATerm c_58 = NULL,d_58 = NULL,h_58 = NULL;
                t = term_z_44;
                d_58 = t;
                t = term_j_51;
                h_58 = t;
                t = term_q_52;
                t = n_12(d_58, h_58, t);
                t = h_119;
                t = r_173(t);
                t = term_y_20;
                c_58 = t;
                t = SSL_exit(c_58);
              }
            }
        }
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        {
          ATerm r_52 = t;
          int t_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_119 = NULL,j_119 = NULL,k_119 = NULL;
              static ATerm w_15 (ATerm t);
              static ATerm w_15 (ATerm t)
              {
                ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL,f_9 = NULL;
                n_119 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_119 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_119);
                l_119 = t;
                t = m_119;
                if(((m_118 != NULL) && (m_118 != t)))
                  _fail(t);
                else
                  m_118 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_119);
                f_9 = t;
                t = SSLsetAnnotations(f_9, l_119);
                return(t);
              }
              t = fetch_1_0(w_15, t);
              t = term_l_17;
              j_119 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_118)), term_u_52);
              k_119 = t;
              t = SSL_printnl(j_119, k_119);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_118)), term_u_52));
              t = q_173(t);
              t = term_b_21;
              i_119 = t;
              t = SSL_exit(i_119);
              LocalPopChoice(t_52);
            }
          else
            {
              t = r_52;
            }
        }
      }
  }
  n_118 = t;
  t = term_f_47;
  t = table_destroy_0_0(t);
  t = n_118;
  return(t);
}
ATerm option_wrap_5_0 (ATerm s_171 (ATerm), ATerm t_171 (ATerm), ATerm u_171 (ATerm), ATerm v_171 (ATerm), ATerm w_171 (ATerm), ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL;
  t = parse_options_3_0(s_171, t_171, u_171, t);
  s_119 = t;
  t = term_c_53;
  t = table_create_0_0(t);
  t = term_c_53;
  t_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_53, term_g_53, s_119);
  t = lookup_table_0_1(t_119, t);
  w_119 = t;
  t = term_g_53;
  u_119 = t;
  t = w_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(u_119, s_119, v_119, t);
  t = s_119;
  t = v_171(t);
  {
    ATerm h_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_171(t);
        t = report_success_0_0(t);
        LocalPopChoice(i_53);
      }
    else
      {
        t = h_53;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(a_16, b_16, e_16, t);
                  LocalPopChoice(o_53);
                }
              else
                {
                  t = n_53;
                  {
                    ATerm p_53 = t;
                    int q_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_53);
                      }
                    else
                      {
                        t = p_53;
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
  ATerm y_119 = NULL,z_119 = NULL;
  t = term_i_45;
  y_119 = t;
  t = term_t_30;
  z_119 = t;
  t = term_r_53;
  t = q_12(y_119, z_119, t);
  t = term_s_53;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_t_53;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = output_1_0(g_16, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,k_9 = NULL,j_9 = NULL;
  k_120 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_120);
  d_120 = t;
  t = e_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_120 = ATgetFirst((ATermList) t);
      h_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_120);
  f_120 = t;
  t = h_120;
  t = Cons_2_0(h_16, j_16, t);
  i_120 = t;
  t = (ATerm) ATinsert(CheckATermList(i_120), g_120);
  j_9 = t;
  t = SSLsetAnnotations(j_9, f_120);
  j_120 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_120);
  k_9 = t;
  t = SSLsetAnnotations(k_9, d_120);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm u_53 = ATgetArgument(t, 0);
      if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
        {
          b_120 = ATgetFirst((ATermList) u_53);
          {
            ATerm v_53 = (ATerm) ATgetNext((ATermList) u_53);
            if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
              {
                ATerm w_53 = ATgetFirst((ATermList) v_53);
                if(match_cons(w_53, sym_Strategies_1))
                  {
                    c_120 = ATgetArgument(w_53, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm x_53 = (ATerm) ATgetNext((ATermList) v_53);
                  if(((ATgetType(x_53) != AT_LIST) || !(ATisEmpty(x_53))))
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
  t = c_10(b_120, c_120, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,i_9 = NULL;
  o_120 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_120);
  l_120 = t;
  t = m_120;
  t = needed_defs_0_0(t);
  n_120 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_120);
  i_9 = t;
  t = SSLsetAnnotations(i_9, l_120);
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
