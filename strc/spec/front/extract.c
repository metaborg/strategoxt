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
static ATerm term_m_50;
static ATerm term_l_50;
static ATerm term_k_50;
static ATerm term_z_49;
static ATerm term_y_49;
static ATerm term_x_49;
static ATerm term_u_49;
static ATerm term_t_49;
static ATerm term_d_49;
static ATerm term_c_49;
static ATerm term_a_49;
static ATerm term_z_48;
static ATerm term_y_48;
static ATerm term_t_48;
static ATerm term_n_48;
static ATerm term_m_48;
static ATerm term_l_48;
static ATerm term_k_48;
static ATerm term_j_48;
static ATerm term_g_48;
static ATerm term_f_48;
static ATerm term_a_48;
static ATerm term_z_47;
static ATerm term_t_47;
static ATerm term_s_47;
static ATerm term_r_47;
static ATerm term_d_47;
static ATerm term_c_47;
static ATerm term_u_46;
static ATerm term_l_46;
static ATerm term_k_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_c_46;
static ATerm term_a_46;
static ATerm term_z_45;
static ATerm term_w_45;
static ATerm term_u_45;
static ATerm term_s_45;
static ATerm term_n_45;
static ATerm term_h_45;
static ATerm term_f_45;
static ATerm term_c_45;
static ATerm term_b_45;
static ATerm term_j_44;
static ATerm term_a_44;
static ATerm term_z_43;
static ATerm term_y_43;
static ATerm term_x_43;
static ATerm term_u_43;
static ATerm term_p_43;
static ATerm term_o_43;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_o_42;
static ATerm term_n_42;
static ATerm term_m_42;
static ATerm term_l_42;
static ATerm term_f_42;
static ATerm term_d_42;
static ATerm term_c_42;
static ATerm term_b_42;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_k_40;
static ATerm term_j_40;
static ATerm term_d_40;
static ATerm term_c_40;
static ATerm term_w_39;
static ATerm term_v_39;
static ATerm term_h_36;
static ATerm term_t_35;
static ATerm term_s_34;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_b_30;
static ATerm term_a_30;
static ATerm term_z_29;
static ATerm term_h_29;
static ATerm term_e_29;
static ATerm term_d_29;
static ATerm term_o_24;
static ATerm term_m_24;
static ATerm term_d_24;
static ATerm term_p_23;
static ATerm term_k_23;
static ATerm term_j_23;
static ATerm term_h_23;
static ATerm term_g_23;
static ATerm term_f_23;
static ATerm term_e_23;
static ATerm term_z_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_g_22;
static ATerm term_f_22;
static ATerm term_c_22;
static ATerm term_q_21;
static ATerm term_o_21;
static ATerm term_k_21;
static ATerm term_j_21;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_s_20;
static ATerm term_d_20;
static ATerm term_b_20;
static ATerm term_g_17;
static ATerm term_q_16;
static ATerm term_p_16;
static ATerm term_o_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_i_16;
static ATerm term_e_16;
static ATerm term_c_16;
static ATerm term_b_16;
static ATerm term_q_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("t_1", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_20);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Call_2, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Call_2, term_x_22, (ATerm) ATempty);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_d_29, (ATerm) ATempty);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameSVar", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_b_20);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_b_42, term_c_42);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_m_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_r_42);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_u_43);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_z_43);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_f_45);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_w_45, term_b_20);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym__2, term_h_46, term_z_29);
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
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_w_45);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_z_29);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_z_29);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_y_48, term_z_29);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym__3, term_c_45, term_f_45, (ATerm) ATempty);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_y_48);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_f_48);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym__2, term_r_42, term_z_29);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_160 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm k_9 (ATerm d_110, ATerm c_110, ATerm t);
static ATerm m_9 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm t);
static ATerm m_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm l_135 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm s_9 (ATerm g_29, ATerm f_29, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm w_162 (ATerm), ATerm x_162 (ATerm), ATerm y_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_162 (ATerm), ATerm t);
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
static ATerm h_43 (ATerm k_36, ATerm l_36, ATerm t);
static ATerm i_43 (ATerm v_36, ATerm w_36, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm v_174 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm b_10 (ATerm z_104, ATerm a_105, ATerm b_105, ATerm t);
static ATerm b_57 (ATerm m_56, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm r_137 (ATerm), ATerm t);
static ATerm f_10 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_136 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm u_140 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm g_10 (ATerm x_44, ATerm y_44, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm copy_1_0 (ATerm y_159 (ATerm), ATerm t);
static ATerm h_10 (ATerm s_82, ATerm t_82, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_73 (ATerm y_70, ATerm d_71, ATerm e_71, ATerm i_71, ATerm t);
static ATerm w_73 (ATerm l_72, ATerm s_72, ATerm t_72, ATerm u_72, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_154 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_144 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm f_138 (ATerm), ATerm t);
static ATerm t_9 (ATerm b_48, ATerm c_48, ATerm t);
ATerm end_scope_1_0 (ATerm m_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm x_9 (ATerm s_84, ATerm t_84, ATerm x_84, ATerm u_84, ATerm w_84, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm e_75 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm g_74, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_154 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_76 (ATerm d_76, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_10 (ATerm a_156 (ATerm), ATerm a_71, ATerm z_70, ATerm t);
ATerm genzip_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm s_10 (ATerm v_947, ATerm a_948, ATerm p_96, ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_79 (ATerm i_78, ATerm j_78, ATerm k_78, ATerm t);
static ATerm m_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_10 (ATerm r_174 (ATerm), ATerm s_174 (ATerm), ATerm t_174 (ATerm), ATerm u_99, ATerm r_99, ATerm z_99, ATerm v_99, ATerm s_99, ATerm t_99, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm r_174 (ATerm), ATerm s_174 (ATerm), ATerm t_174 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_39 (ATerm u_38, ATerm v_38, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm x_10 (ATerm p_148 (ATerm), ATerm r_46, ATerm o_46, ATerm t);
static ATerm y_10 (ATerm i_156 (ATerm), ATerm j_156 (ATerm), ATerm g_71, ATerm f_71, ATerm t);
static ATerm z_10 (ATerm f_156 (ATerm), ATerm c_71, ATerm b_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm b_11 (ATerm h_48, ATerm i_48, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm k_159 (ATerm), ATerm l_159 (ATerm), ATerm m_159 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t);
static ATerm c_11 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm d_11 (ATerm y_35, ATerm z_35, ATerm t);
static ATerm f_11 (ATerm c_144 (ATerm), ATerm n_289, ATerm e_36, ATerm t);
static ATerm e_11 (ATerm u_35, ATerm v_35, ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm output_1_0 (ATerm a_170 (ATerm), ATerm t);
static ATerm a_93 (ATerm u_92, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm a_36, ATerm t);
static ATerm h_11 (ATerm j_80, ATerm k_80, ATerm t);
static ATerm i_11 (ATerm u_37, ATerm v_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_94 (ATerm k_93, ATerm t);
static ATerm m_94 (ATerm o_93, ATerm p_93, ATerm q_93, ATerm t);
static ATerm n_94 (ATerm y_93, ATerm z_93, ATerm a_94, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_170 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_153 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_171 (ATerm), ATerm a_172 (ATerm), ATerm t);
static ATerm n_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm o_41, ATerm p_41, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_11 (ATerm w_47, ATerm x_47, ATerm v_47, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm n_44, ATerm o_44, ATerm t);
ATerm foldr_2_0 (ATerm i_159 (ATerm), ATerm j_159 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_145 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_11 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t);
ATerm lookup_table_0_1 (ATerm i_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_52, ATerm u_52, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm q_52, ATerm r_52, ATerm t);
static ATerm n_11 (ATerm v_52, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_154 (ATerm), ATerm t);
static ATerm u_11 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm p_11 (ATerm p_49, ATerm q_49, ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm u_171 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm parse_options_3_0 (ATerm r_171 (ATerm), ATerm s_171 (ATerm), ATerm t_171 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_169 (ATerm), ATerm v_169 (ATerm), ATerm w_169 (ATerm), ATerm x_169 (ATerm), ATerm y_169 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
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
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,v_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
        u_1 = t;
        t = term_q_15;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
        t = b_11(v_1, u_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm r_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("t_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, o_1);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm o_2 = NULL,u_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
          o_2 = t;
          t = term_q_15;
          u_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty));
          t = b_11(u_2, o_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm s_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("r_1", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm m_160 (ATerm), ATerm t)
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
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,c_4 = NULL,d_4 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(p_2);
            z_3 = t;
            t = q_2;
            t = m_160(t);
            c_4 = t;
            t = r_2;
            t = filter_1_0(m_160, t);
            d_4 = t;
            t = (ATerm) ATinsert(CheckATermList(d_4), c_4);
            a_0 = t;
            t = SSLsetAnnotations(a_0, z_3);
            LocalPopChoice(u_15);
          }
        else
          {
            t = t_15;
            t = r_2;
            t = filter_1_0(m_160, t);
          }
      }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_q_15;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_q_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  v_2 = t;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            w_2 = ATgetArgument(t, 0);
            {
              ATerm a_16 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_15);
        {
          ATerm a_3 = NULL,b_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty);
          a_3 = t;
          t = term_c_16;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty), term_c_16);
          t = x_10(b_0, a_3, b_3, t);
          t = v_2;
        }
      }
    else
      {
        t = w_15;
        {
          ATerm e_3 = NULL,f_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              w_2 = ATgetArgument(t, 0);
              {
                ATerm d_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty);
          e_3 = t;
          t = term_i_16;
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty), term_i_16);
          t = x_10(i_0, e_3, f_3, t);
          t = v_2;
        }
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
    }
  return(t);
}
static ATerm k_9 (ATerm d_110, ATerm c_110, ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,h_0 = NULL,e_0 = NULL,c_0 = NULL;
  t = c_110;
  t = topdown_1_0(k_0, t);
  t = d_110;
  if(match_cons(t, sym_Signature_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_110);
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
      q_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  o_3 = t;
  t = q_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, s_3);
  c_0 = t;
  t = SSLsetAnnotations(c_0, o_3);
  t_3 = t;
  t = m_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_3), t_3);
  e_0 = t;
  t = SSLsetAnnotations(e_0, k_3);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_3);
  h_0 = t;
  t = SSLsetAnnotations(h_0, h_3);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, c_110)), j_3));
  return(t);
}
static ATerm m_9 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = term_m_16;
  w_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), r_83), term_p_16), q_83), term_o_16), p_83), term_n_16);
  x_3 = t;
  t = SSL_printnl(w_3, x_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), r_83), term_p_16), q_83), term_o_16), p_83), term_n_16);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(((ATgetType(r_16) != AT_INT) || (ATgetInt((ATermInt) r_16) != 0)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) != AT_INT) || (ATgetInt((ATermInt) s_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  r_4 = t;
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
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL,d_5 = NULL;
        t = s_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_16 = ATgetFirst((ATermList) t);
            ATerm b_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(b_17) == AT_LIST) && !(ATisEmpty(b_17))))
              {
                ATerm d_17 = ATgetFirst((ATermList) b_17);
                ATerm e_17 = (ATerm) ATgetNext((ATermList) b_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm f_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(m_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_17;
            }
        }
        t = term_m_16;
        c_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_g_17);
        d_5 = t;
        t = SSL_printnl(c_5, d_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_g_17);
        t = giving_up_0_0(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm j_5 = NULL,k_5 = NULL;
          t = s_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_17 = ATgetFirst((ATermList) t);
              if(match_cons(j_17, sym__2))
                {
                  j_5 = ATgetArgument(j_17, 0);
                  k_5 = ATgetArgument(j_17, 1);
                }
              else
                _fail(t);
              {
                ATerm l_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(l_17) != AT_LIST) || !(ATisEmpty(l_17))))
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
ATerm sboundin_3_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
      {
        ATerm p_6 = NULL,s_6 = NULL,u_6 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(f_15);
        p_6 = t;
        t = g_15;
        t = h_135(t);
        s_6 = t;
        t = h_15;
        t = h_135(t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_6, u_6);
        u_0 = t;
        t = SSLsetAnnotations(u_0, p_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_15 = ATgetArgument(t, 0);
          h_15 = ATgetArgument(t, 1);
          d_15 = ATgetArgument(t, 2);
          {
            ATerm f_7 = NULL,u_7 = NULL,d_8 = NULL,e_8 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(f_15);
            f_7 = t;
            t = g_15;
            t = j_135(t);
            u_7 = t;
            t = h_15;
            t = j_135(t);
            d_8 = t;
            t = d_15;
            t = h_135(t);
            e_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_7, d_8, e_8);
            w_0 = t;
            t = SSLsetAnnotations(w_0, f_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_15 = ATgetArgument(t, 0);
              h_15 = ATgetArgument(t, 1);
              d_15 = ATgetArgument(t, 2);
              y_14 = ATgetArgument(t, 3);
              {
                ATerm d_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,x_0 = NULL;
                t = SSLgetAnnotations(f_15);
                d_9 = t;
                t = g_15;
                t = j_135(t);
                l_9 = t;
                t = h_15;
                t = j_135(t);
                n_9 = t;
                t = d_15;
                t = j_135(t);
                o_9 = t;
                t = y_14;
                t = h_135(t);
                p_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_9, n_9, o_9, p_9);
                x_0 = t;
                t = SSLsetAnnotations(x_0, d_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_15 = ATgetArgument(t, 0);
                  h_15 = ATgetArgument(t, 1);
                  d_15 = ATgetArgument(t, 2);
                  y_14 = ATgetArgument(t, 3);
                  {
                    ATerm k_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,w_10 = NULL,c_1 = NULL;
                    t = SSLgetAnnotations(f_15);
                    k_10 = t;
                    t = g_15;
                    t = j_135(t);
                    q_10 = t;
                    t = h_15;
                    t = j_135(t);
                    r_10 = t;
                    t = d_15;
                    t = j_135(t);
                    t_10 = t;
                    t = y_14;
                    t = h_135(t);
                    w_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, q_10, r_10, t_10, w_10);
                    c_1 = t;
                    t = SSLsetAnnotations(c_1, k_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      g_15 = ATgetArgument(t, 0);
                      h_15 = ATgetArgument(t, 1);
                      d_15 = ATgetArgument(t, 2);
                      {
                        ATerm b_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,d_1 = NULL;
                        t = SSLgetAnnotations(f_15);
                        b_12 = t;
                        t = g_15;
                        t = j_135(t);
                        g_12 = t;
                        t = h_15;
                        t = j_135(t);
                        h_12 = t;
                        t = d_15;
                        t = j_135(t);
                        i_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_12, h_12, i_12);
                        d_1 = t;
                        t = SSLsetAnnotations(d_1, b_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_15 = ATgetArgument(t, 0);
                          h_15 = ATgetArgument(t, 1);
                          {
                            ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,f_1 = NULL;
                            t = SSLgetAnnotations(f_15);
                            s_12 = t;
                            t = g_15;
                            t = j_135(t);
                            w_12 = t;
                            t = h_15;
                            t = h_135(t);
                            x_12 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_12, x_12);
                            f_1 = t;
                            t = SSLsetAnnotations(f_1, s_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_15 = ATgetArgument(t, 0);
                              h_15 = ATgetArgument(t, 1);
                              {
                                ATerm g_13 = NULL,o_13 = NULL,t_13 = NULL,i_1 = NULL;
                                t = SSLgetAnnotations(f_15);
                                g_13 = t;
                                t = g_15;
                                t = j_135(t);
                                o_13 = t;
                                t = h_15;
                                t = h_135(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, o_13, t_13);
                                i_1 = t;
                                t = SSLsetAnnotations(i_1, g_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_15 = ATgetArgument(t, 0);
                                  h_15 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_14 = NULL,z_14 = NULL,a_15 = NULL,k_1 = NULL;
                                    t = SSLgetAnnotations(f_15);
                                    u_14 = t;
                                    t = g_15;
                                    t = j_135(t);
                                    z_14 = t;
                                    t = h_15;
                                    t = h_135(t);
                                    a_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, z_14, a_15);
                                    k_1 = t;
                                    t = SSLsetAnnotations(k_1, u_14);
                                  }
                                }
                              else
                                {
                                  ATerm v_15 = NULL,y_15 = NULL,z_15 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      g_15 = ATgetArgument(t, 0);
                                      h_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(f_15);
                                  v_15 = t;
                                  t = g_15;
                                  t = j_135(t);
                                  y_15 = t;
                                  t = h_15;
                                  t = h_135(t);
                                  z_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_15, z_15);
                                  p_1 = t;
                                  t = SSLsetAnnotations(p_1, v_15);
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
ATerm dynrule_sargs_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,l_16 = NULL;
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm o_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_17);
      t = f_16;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_16;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_17 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
          {
            ATerm t_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_16;
    }
  else
    {
      t = m_17;
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                f_16 = ATgetArgument(t, 0);
                {
                  ATerm w_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_17);
            t = f_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm x_17 = ATgetArgument(t, 0);
                l_16 = ATgetArgument(t, 1);
                {
                  ATerm z_17 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = l_16;
          }
        else
          {
            t = u_17;
            if(match_cons(t, sym_AddDynRule_2))
              {
                f_16 = ATgetArgument(t, 0);
                {
                  ATerm d_18 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = f_16;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_16;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_18 = ATgetArgument(t, 0);
                l_16 = ATgetArgument(t, 1);
                {
                  ATerm f_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = l_16;
          }
      }
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm i_18 = NULL;
  ATerm g_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm n_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_18);
      t = i_18;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm f_19 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_19 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_18);
      t = f_19;
    }
  else
    {
      t = p_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_19;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm v_18 = ATgetArgument(t, 0);
          q_17 = ATgetArgument(t, 1);
          {
            ATerm w_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = q_17;
      t = map_1_0(o_0, t);
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm y_18 = ATgetArgument(t, 0);
          q_17 = ATgetArgument(t, 1);
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
          {
            ATerm a_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_17;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_19 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_19 = ATgetArgument(t, 0);
          {
            ATerm e_19 = ATgetArgument(t, 1);
          }
          {
            ATerm g_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = u_19;
    }
  else
    {
      t = b_19;
      if(match_cons(t, sym_SDefT_4))
        {
          u_19 = ATgetArgument(t, 0);
          {
            ATerm h_19 = ATgetArgument(t, 1);
          }
          {
            ATerm j_19 = ATgetArgument(t, 2);
          }
          {
            ATerm k_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_19;
    }
  return(t);
}
static ATerm s_9 (ATerm g_29, ATerm f_29, ATerm t)
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
  t = z_10(q_1, y_16, z_16, t);
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
  ATerm h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(x_1, h_17, i_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      if((k_17 != ATgetArgument(t, 1)))
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
  ATerm f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      if((f_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm w_162 (ATerm), ATerm x_162 (ATerm), ATerm y_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_162 (ATerm), ATerm t)
{
  static ATerm g_21 (ATerm t);
  static ATerm g_21 (ATerm t)
  {
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
    q_20 = t;
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_162(t);
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          t = (ATerm) ATempty;
        }
    }
    o_20 = t;
    t = q_20;
    {
      ATerm o_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL,t_16 = NULL,u_16 = NULL;
          t = x_162(t);
          t_20 = t;
          t = q_20;
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              ATerm h_16 = NULL;
              t = g_21(t);
              h_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_16, t_20);
              t = n_10(z_162, h_16, t_20, t);
              return(t);
            }
            t = y_162(a_1, g_21, g_1, t);
          }
          u_16 = t;
          t = SSL_explode_term(u_16);
          if(match_cons(t, sym__2))
            {
              ATerm r_19 = ATgetArgument(t, 0);
              t_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_16;
          t = foldr_3_0(j_1, m_1, _id, t);
          LocalPopChoice(q_19);
        }
      else
        {
          t = o_19;
          {
            ATerm c_17 = NULL;
            t = SSL_explode_term(q_20);
            if(match_cons(t, sym__2))
              {
                ATerm s_19 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_17;
            t = foldr_3_0(s_1, w_1, g_21, t);
          }
        }
    }
    p_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
    t = z_10(y_1, o_20, p_20, t);
    return(t);
  }
  t = g_21(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,p_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if(match_cons(t_19, sym_SVar_1))
        {
          l_21 = ATgetArgument(t_19, 0);
        }
      else
        _fail(t);
      m_21 = ATgetArgument(t, 1);
      p_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_21;
  t = foldr_3_0(c_2, d_2, e_2, t);
  r_21 = t;
  t = p_21;
  t = foldr_3_0(f_2, g_2, h_2, t);
  s_21 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_21, (ATerm) ATmakeAppl(sym__2, r_21, s_21)));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,d_22 = NULL,e_22 = NULL;
      z_21 = t;
      if(match_cons(t, sym_Let_2))
        {
          a_22 = ATgetArgument(t, 0);
          b_22 = ATgetArgument(t, 1);
          t = z_21;
          t = s_9(a_22, b_22, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              a_22 = ATgetArgument(t, 0);
              b_22 = ATgetArgument(t, 1);
              d_22 = ATgetArgument(t, 2);
              t = b_22;
              t = map_1_0(i_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  a_22 = ATgetArgument(t, 0);
                  b_22 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, a_22);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_22 = ATgetArgument(t, 0);
                      b_22 = ATgetArgument(t, 1);
                      d_22 = ATgetArgument(t, 2);
                      e_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_22;
                  t = map_1_0(j_2, t);
                }
            }
        }
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(match_cons(z_19, sym__2))
        {
          y_23 = ATgetArgument(z_19, 0);
          {
            ATerm a_20 = ATgetArgument(z_19, 1);
          }
        }
      else
        _fail(t);
      if((y_23 != ATgetArgument(t, 1)))
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
  t = term_b_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(t_21, u_21, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(v_21, w_21, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_22 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = y_22;
    }
  else
    {
      t = e_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_22;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm n_23 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_20);
      t = n_23;
    }
  else
    {
      t = h_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_23;
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
  ATerm u_23 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_23 = ATgetArgument(t, 0);
          {
            ATerm n_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_20);
      t = u_23;
    }
  else
    {
      t = l_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_23;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(z_1, a_2, sboundin_3_0, b_2, t);
  return(t);
}
static ATerm h_43 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = k_36;
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        ATerm n_36 = NULL,o_36 = NULL,t_36 = NULL,u_36 = NULL,m_2 = NULL;
        u_36 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_36 = ATgetFirst((ATermList) t);
            t_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_36);
        n_36 = t;
        t = t_36;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_36), o_36);
        m_2 = t;
        t = SSLsetAnnotations(m_2, n_36);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_20, k_36);
  return(t);
}
static ATerm i_43 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = v_36;
  {
    ATerm u_20 = t;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,n_2 = NULL;
        f_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            e_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_37);
        c_37 = t;
        t = e_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_37), d_37);
        n_2 = t;
        t = SSLsetAnnotations(n_2, c_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, v_36);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_19 = NULL;
  g_38 = t;
  t = SSL_explode_term(g_38);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_20 = ATgetArgument(t, 1);
        if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
          {
            h_38 = ATgetFirst((ATermList) z_20);
            {
              ATerm a_21 = (ATerm) ATgetNext((ATermList) z_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_38);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
          {
            ATerm d_21 = ATgetFirst((ATermList) c_21);
            ATerm e_21 = (ATerm) ATgetNext((ATermList) c_21);
            if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
              {
                i_19 = ATgetFirst((ATermList) e_21);
                {
                  ATerm h_21 = (ATerm) ATgetNext((ATermList) e_21);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, i_19), h_38));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL;
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, m_39), l_39));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_21, (ATerm) ATinsert(ATinsert(ATempty, r_39), q_39));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm o_40 = NULL,q_40 = NULL;
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, q_40), o_40));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, u_40), t_40));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
      {
        ATerm e_38 = NULL;
        t = r_37;
        t = foldr_2_0(s_2, t_2, t);
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_37, e_38);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_37 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_37, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_37 = ATgetArgument(t, 0);
              {
                ATerm n_19 = NULL;
                t = q_37;
                {
                  ATerm x_21 = t;
                  int y_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_c_22;
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
                                  t = term_g_22;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_h_22;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_i_22;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(y_21);
                    }
                  else
                    {
                      t = x_21;
                      {
                        ATerm p_19 = NULL;
                        t = SSL_explode_string(q_37);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm j_22 = ATgetFirst((ATermList) t);
                            if(((ATgetType(j_22) != AT_INT) || (ATgetInt((ATermInt) j_22) != 39)))
                              _fail(t);
                            {
                              ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
                                {
                                  p_19 = ATgetFirst((ATermList) l_22);
                                  {
                                    ATerm m_22 = (ATerm) ATgetNext((ATermList) l_22);
                                    if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                                      {
                                        ATerm o_22 = ATgetFirst((ATermList) m_22);
                                        if(((ATgetType(o_22) != AT_INT) || (ATgetInt((ATermInt) o_22) != 39)))
                                          _fail(t);
                                        {
                                          ATerm p_22 = (ATerm) ATgetNext((ATermList) m_22);
                                          if(((ATgetType(p_22) != AT_LIST) || !(ATisEmpty(p_22))))
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
                        t = p_19;
                      }
                    }
                }
                n_19 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, n_19);
              }
            }
          else
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_37 = ATgetArgument(t, 0);
                      {
                        ATerm s_22 = ATgetArgument(t, 1);
                      }
                      o_37 = ATgetArgument(t, 2);
                      g_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_22);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_37, o_37, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_37), (ATerm) ATempty));
                }
              else
                {
                  t = q_22;
                  {
                    ATerm t_22 = t;
                    int u_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_37 = ATgetArgument(t, 0);
                            {
                              ATerm v_22 = ATgetArgument(t, 1);
                            }
                            o_37 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_22);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_37, o_37, term_z_22);
                      }
                    else
                      {
                        t = t_22;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_37 = ATgetArgument(t, 0);
                            r_37 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_37, r_37, term_z_22);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_37 = ATgetArgument(t, 0);
                                r_37 = ATgetArgument(t, 1);
                                {
                                  static ATerm x_2 (ATerm t);
                                  static ATerm x_2 (ATerm t)
                                  {
                                    t = r_37;
                                    return(t);
                                  }
                                  t = q_37;
                                  t = foldr_2_0(x_2, y_2, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_37 = ATgetArgument(t, 0);
                                    t = q_37;
                                    t = foldr_2_0(z_2, c_3, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_37 = ATgetArgument(t, 0);
                                        t = q_37;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            h_37 = ATgetFirst((ATermList) t);
                                            i_37 = (ATerm) ATgetNext((ATermList) t);
                                            t = i_37;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm a_23 = t;
                                                int b_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = h_43(q_37, p_37, t);
                                                    LocalPopChoice(b_23);
                                                  }
                                                else
                                                  {
                                                    t = a_23;
                                                    t = h_37;
                                                  }
                                              }
                                            else
                                              {
                                                t = h_43(q_37, p_37, t);
                                              }
                                          }
                                        else
                                          {
                                            t = h_43(q_37, p_37, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_37 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_37));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_37 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_37));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_37 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_37));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_37 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_37));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_37 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_37), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_37 = ATgetArgument(t, 0);
                                                                r_37 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_37), r_37);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_37 = ATgetArgument(t, 0);
                                                                    r_37 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm d_3 (ATerm t);
                                                                      static ATerm d_3 (ATerm t)
                                                                      {
                                                                        t = r_37;
                                                                        return(t);
                                                                      }
                                                                      t = q_37;
                                                                      t = foldr_2_0(d_3, g_3, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_37 = ATgetArgument(t, 0);
                                                                        t = q_37;
                                                                        t = foldr_2_0(p_3, r_3, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_37 = ATgetArgument(t, 0);
                                                                            r_37 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_v_20, (ATerm) ATinsert(CheckATermList(r_37), q_37));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_37 = ATgetArgument(t, 0);
                                                                                t = q_37;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    h_37 = ATgetFirst((ATermList) t);
                                                                                    i_37 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = i_37;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm c_23 = t;
                                                                                        int d_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = i_43(q_37, p_37, t);
                                                                                            LocalPopChoice(d_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_23;
                                                                                            t = h_37;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_43(q_37, p_37, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_43(q_37, p_37, t);
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
                                                                                        q_37 = ATgetArgument(t, 0);
                                                                                        r_37 = ATgetArgument(t, 1);
                                                                                        t = r_37;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            j_37 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, j_37), q_37));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_37 = ATgetArgument(t, 0);
                                                                                            t = q_37;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_37 = ATgetArgument(t, 0);
                                                                                                r_37 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_37, r_37, term_h_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_37 = ATgetArgument(t, 0);
                                                                                                    r_37 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_37, r_37, term_h_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_37 = ATgetArgument(t, 0);
                                                                                                        r_37 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_37, (ATerm)ATempty, r_37);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_37 = ATgetArgument(t, 0);
                                                                                                            r_37 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, r_37, q_37);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_37 = ATgetArgument(t, 0);
                                                                                                                r_37 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_37, r_37, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_37 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_37, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_37 = ATgetArgument(t, 0);
                                                                                                                        r_37 = ATgetArgument(t, 1);
                                                                                                                        o_37 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_37, r_37, (ATerm)ATempty, o_37);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_37 = ATgetArgument(t, 0);
                                                                                                                            r_37 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_37, (ATerm)ATempty, (ATerm)ATempty, r_37);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_37 = ATgetArgument(t, 0);
                                                                                                                                r_37 = ATgetArgument(t, 1);
                                                                                                                                o_37 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_37, r_37, (ATerm)ATempty, o_37);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_37 = ATgetArgument(t, 0);
                                                                                                                                    r_37 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_37, (ATerm)ATempty, (ATerm)ATempty, r_37);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_37 = ATgetArgument(t, 0);
                                                                                                                                        r_37 = ATgetArgument(t, 1);
                                                                                                                                        o_37 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_37, r_37, (ATerm)ATempty, o_37);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_37 = ATgetArgument(t, 0);
                                                                                                                                            r_37 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_37, (ATerm)ATempty, (ATerm)ATempty, r_37);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm i_23 = ATgetArgument(t, 0);
                                                                                                                                                r_37 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_37);
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
  ATerm l_43 = NULL,q_43 = NULL,s_43 = NULL;
  q_43 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
      {
        ATerm v_43 = NULL,w_43 = NULL,f_44 = NULL,g_44 = NULL;
        t = q_43;
        t = new_0_0(t);
        v_43 = t;
        t = new_0_0(t);
        w_43 = t;
        t = new_0_0(t);
        f_44 = t;
        t = new_0_0(t);
        g_44 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_44), f_44), w_43), v_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, v_43), (ATerm) ATmakeAppl(sym_Var_1, f_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, s_43, (ATerm)ATmakeAppl(sym_Var_1, v_43), (ATerm) ATmakeAppl(sym_Var_1, w_43)), (ATerm) ATmakeAppl(sym_BAM_3, l_43, (ATerm)ATmakeAppl(sym_Var_1, f_44), (ATerm) ATmakeAppl(sym_Var_1, g_44)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_44)), (ATerm) ATmakeAppl(sym_Var_1, w_43))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_43 = ATgetArgument(t, 0);
          {
            ATerm h_44 = NULL,i_44 = NULL,k_44 = NULL,p_44 = NULL;
            t = q_43;
            t = new_0_0(t);
            k_44 = t;
            t = s_43;
            {
              static ATerm u_3 (ATerm t);
              static ATerm u_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((h_44 != NULL) && (h_44 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_44 = ATgetArgument(t, 0);
                    if(((i_44 != NULL) && (i_44 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      i_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, k_44);
                return(t);
              }
              t = oncetd_1_0(u_3, t);
            }
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_44)), not_null(h_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_44)), (ATerm) ATmakeAppl(sym_Build_1, p_44))));
          }
        }
      else
        {
          ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              s_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_43;
          t = new_0_0(t);
          u_44 = t;
          t = new_0_0(t);
          v_44 = t;
          t = s_43;
          {
            static ATerm v_3 (ATerm t);
            static ATerm v_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((s_44 != NULL) && (s_44 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_44 = ATgetArgument(t, 0);
                  if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    t_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, u_44);
              return(t);
            }
            t = oncetd_1_0(v_3, t);
          }
          w_44 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_44), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_44)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_44))))), (ATerm)ATmakeAppl(sym_Var_1, u_44), (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_44)), not_null(s_44)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_45 = NULL,m_45 = NULL,q_45 = NULL,t_45 = NULL;
        t = d_45;
        t = new_0_0(t);
        q_45 = t;
        t = e_45;
        {
          static ATerm y_3 (ATerm t);
          static ATerm y_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_45 != NULL) && (k_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_45 = ATgetArgument(t, 0);
                if(((m_45 != NULL) && (m_45 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  m_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_45), k_45);
            return(t);
          }
          t = pat_td_1_0(y_3, t);
        }
        t_45 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_45), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_45))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_45))))));
        LocalPopChoice(o_23);
      }
    else
      {
        t = m_23;
        {
          ATerm q_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_45 = NULL,y_45 = NULL,b_46 = NULL;
              t = d_45;
              t = new_0_0(t);
              y_45 = t;
              t = e_45;
              {
                static ATerm a_4 (ATerm t);
                static ATerm a_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_45 != NULL) && (x_45 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_45);
                  return(t);
                }
                t = pat_td_1_0(a_4, t);
              }
              b_46 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_45)), not_null(x_45))));
              LocalPopChoice(r_23);
            }
          else
            {
              t = q_23;
              {
                ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,j_46 = NULL;
                t = d_45;
                t = new_0_0(t);
                f_46 = t;
                t = e_45;
                {
                  static ATerm b_4 (ATerm t);
                  static ATerm b_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_46 = ATgetArgument(t, 0);
                        if(((d_46 != NULL) && (d_46 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_46);
                    return(t);
                  }
                  t = pat_td_1_0(b_4, t);
                }
                j_46 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_46)), not_null(e_46)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_174 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_174(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
        w_50 = t;
        if(match_cons(t, sym_Op_2))
          {
            x_50 = ATgetArgument(t, 0);
            y_50 = ATgetArgument(t, 1);
            {
              ATerm c_20 = NULL,j_20 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(w_50);
              c_20 = t;
              t = y_50;
              {
                static ATerm f_4 (ATerm t);
                static ATerm f_4 (ATerm t)
                {
                  t = pat_td_1_0(v_174, t);
                  return(t);
                }
                t = fetch_1_0(f_4, t);
              }
              j_20 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, x_50, j_20);
              e_4 = t;
              t = SSLsetAnnotations(e_4, c_20);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                x_50 = ATgetArgument(t, 0);
                y_50 = ATgetArgument(t, 1);
                {
                  ATerm w_23 = t;
                  int x_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_21 = NULL,n_21 = NULL,g_4 = NULL;
                      t = SSLgetAnnotations(w_50);
                      i_21 = t;
                      t = y_50;
                      t = pat_td_1_0(v_174, t);
                      n_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, x_50, n_21);
                      g_4 = t;
                      t = SSLsetAnnotations(g_4, i_21);
                      LocalPopChoice(x_23);
                    }
                  else
                    {
                      t = w_23;
                      {
                        ATerm k_22 = NULL,n_22 = NULL,h_4 = NULL;
                        t = SSLgetAnnotations(w_50);
                        k_22 = t;
                        t = x_50;
                        t = pat_td_1_0(v_174, t);
                        n_22 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, n_22, y_50);
                        h_4 = t;
                        t = SSLsetAnnotations(h_4, k_22);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    x_50 = ATgetArgument(t, 0);
                    y_50 = ATgetArgument(t, 1);
                    v_50 = ATgetArgument(t, 2);
                    {
                      ATerm l_23 = NULL,v_23 = NULL,i_4 = NULL;
                      t = SSLgetAnnotations(w_50);
                      l_23 = t;
                      t = v_50;
                      {
                        static ATerm l_4 (ATerm t);
                        static ATerm l_4 (ATerm t)
                        {
                          t = pat_td_1_0(v_174, t);
                          return(t);
                        }
                        t = fetch_1_0(l_4, t);
                      }
                      v_23 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_50, y_50, v_23);
                      i_4 = t;
                      t = SSLsetAnnotations(i_4, l_23);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        x_50 = ATgetArgument(t, 0);
                        y_50 = ATgetArgument(t, 1);
                        v_50 = ATgetArgument(t, 2);
                        {
                          ATerm q_24 = NULL,u_24 = NULL,j_4 = NULL;
                          t = SSLgetAnnotations(w_50);
                          q_24 = t;
                          t = v_50;
                          {
                            static ATerm m_4 (ATerm t);
                            static ATerm m_4 (ATerm t)
                            {
                              t = pat_td_1_0(v_174, t);
                              return(t);
                            }
                            t = fetch_1_0(m_4, t);
                          }
                          u_24 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, x_50, y_50, u_24);
                          j_4 = t;
                          t = SSLsetAnnotations(j_4, q_24);
                        }
                      }
                    else
                      {
                        ATerm p_25 = NULL,s_25 = NULL,k_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            x_50 = ATgetArgument(t, 0);
                            y_50 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_50);
                        p_25 = t;
                        t = y_50;
                        t = pat_td_1_0(v_174, t);
                        s_25 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, x_50, s_25);
                        k_4 = t;
                        t = SSLsetAnnotations(k_4, p_25);
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
  ATerm l_51 = NULL,m_51 = NULL;
  l_51 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_51 = NULL,s_51 = NULL,u_51 = NULL,v_51 = NULL;
        t = l_51;
        t = new_0_0(t);
        u_51 = t;
        t = m_51;
        {
          static ATerm n_4 (ATerm t);
          static ATerm n_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_51 != NULL) && (r_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_51 = ATgetArgument(t, 0);
                if(((s_51 != NULL) && (s_51 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, u_51);
            return(t);
          }
          t = pat_td_1_0(n_4, t);
        }
        v_51 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_51)), not_null(r_51))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_51)))), (ATerm) ATmakeAppl(sym_Build_1, v_51)));
        LocalPopChoice(c_24);
      }
    else
      {
        t = a_24;
        {
          ATerm i_24 = t;
          int l_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_51 = NULL,y_51 = NULL,z_51 = NULL;
              t = l_51;
              t = new_0_0(t);
              y_51 = t;
              t = m_51;
              {
                static ATerm o_4 (ATerm t);
                static ATerm o_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_51 != NULL) && (w_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_51);
                  return(t);
                }
                t = pat_td_1_0(o_4, t);
              }
              z_51 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_51), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_51)))), (ATerm) ATmakeAppl(sym_Build_1, z_51)));
              LocalPopChoice(l_24);
            }
          else
            {
              t = i_24;
              {
                ATerm g_52 = NULL,h_52 = NULL,j_52 = NULL,k_52 = NULL;
                t = l_51;
                t = new_0_0(t);
                j_52 = t;
                t = m_51;
                {
                  static ATerm p_4 (ATerm t);
                  static ATerm p_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_52 = ATgetArgument(t, 0);
                        if(((h_52 != NULL) && (h_52 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_52 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_52);
                    return(t);
                  }
                  t = pat_td_1_0(p_4, t);
                }
                k_52 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_52), not_null(h_52), (ATerm) ATmakeAppl(sym_Var_1, j_52))), (ATerm) ATmakeAppl(sym_Build_1, k_52)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,e_53 = NULL,i_53 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      e_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, e_53, i_53);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          e_53 = ATgetArgument(t, 0);
          t = e_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_52 = ATgetFirst((ATermList) t);
              a_53 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, z_52, (ATerm) ATmakeAppl(sym_LChoices_1, a_53));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              e_53 = ATgetArgument(t, 0);
              t = e_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_52 = ATgetFirst((ATermList) t);
                  a_53 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_52, (ATerm) ATmakeAppl(sym_Choices_1, a_53));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  e_53 = ATgetArgument(t, 0);
                  t = e_53;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_52 = ATgetFirst((ATermList) t);
                      a_53 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_52, (ATerm) ATmakeAppl(sym_Seqs_1, a_53));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      e_53 = ATgetArgument(t, 0);
                      i_53 = ATgetArgument(t, 1);
                      b_53 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, i_53, (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, b_53), e_53)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          e_53 = ATgetArgument(t, 0);
                          i_53 = ATgetArgument(t, 1);
                          b_53 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_53)), e_53), (ATerm) ATmakeAppl(sym_Build_1, i_53)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              e_53 = ATgetArgument(t, 0);
                              i_53 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_53, (ATerm) ATmakeAppl(sym_Match_1, i_53));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  e_53 = ATgetArgument(t, 0);
                                  i_53 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_53), i_53);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      e_53 = ATgetArgument(t, 0);
                                      i_53 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_53), e_53);
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
static ATerm q_4 (ATerm t)
{
  ATerm n_24 = t;
  if((PushChoice() == 0))
    {
      ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,l_5 = NULL;
      p_55 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_55);
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_55);
      l_5 = t;
      t = SSLsetAnnotations(l_5, n_55);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_24;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_55 = ATgetFirst((ATermList) t);
      s_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_55, s_55);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,a_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_24 = ATgetArgument(t, 0);
      if(match_cons(p_24, sym__2))
        {
          t_55 = ATgetArgument(p_24, 0);
          u_55 = ATgetArgument(p_24, 1);
        }
      else
        _fail(t);
      {
        ATerm r_24 = ATgetArgument(t, 1);
        if(match_cons(r_24, sym__2))
          {
            v_55 = ATgetArgument(r_24, 0);
            a_56 = ATgetArgument(r_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_55), t_55), (ATerm) ATinsert(CheckATermList(a_56), u_55));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_56 = ATgetFirst((ATermList) t);
      e_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      if(match_cons(s_24, sym__2))
        {
          f_56 = ATgetArgument(s_24, 0);
          g_56 = ATgetArgument(s_24, 1);
        }
      else
        _fail(t);
      {
        ATerm t_24 = ATgetArgument(t, 1);
        if(match_cons(t_24, sym__2))
          {
            h_56 = ATgetArgument(t_24, 0);
            i_56 = ATgetArgument(t_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_56), f_56), (ATerm) ATinsert(CheckATermList(i_56), g_56));
  return(t);
}
static ATerm b_10 (ATerm z_104, ATerm a_105, ATerm b_105, ATerm t)
{
  ATerm r_54 = NULL,v_54 = NULL,w_54 = NULL,y_54 = NULL,e_55 = NULL,f_55 = NULL,j_55 = NULL,k_55 = NULL,m_55 = NULL,m_5 = NULL;
  t = b_105;
  t = fetch_1_0(q_4, t);
  t = b_105;
  t = genzip_4_0(w_4, x_4, y_4, LiftPrimArg_0_0, t);
  m_55 = t;
  if(match_cons(t, sym__2))
    {
      e_55 = ATgetArgument(t, 0);
      f_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_55);
  y_54 = t;
  t = e_55;
  t = concat_0_0(t);
  j_55 = t;
  t = f_55;
  t = genzip_4_0(z_4, a_5, b_5, _id, t);
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
  m_5 = t;
  t = SSLsetAnnotations(m_5, y_54);
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      {
        ATerm v_24 = ATgetArgument(t, 1);
        if(match_cons(v_24, sym__2))
          {
            v_54 = ATgetArgument(v_24, 0);
            w_54 = ATgetArgument(v_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_54, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_54), (ATerm) ATmakeAppl(sym_CallT_3, z_104, a_105, w_54)));
  return(t);
}
static ATerm b_57 (ATerm m_56, ATerm t)
{
  ATerm o_56 = NULL;
  t = m_56;
  {
    ATerm w_24 = t;
    if((PushChoice() == 0))
      {
        ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,p_5 = NULL;
        s_56 = t;
        if(match_cons(t, sym_Var_1))
          {
            r_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_56);
        q_56 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, r_56);
        p_5 = t;
        t = SSLsetAnnotations(p_5, q_56);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_24;
      }
  }
  t = new_0_0(t);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_56), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_56), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_56)))), (ATerm) ATmakeAppl(sym_Var_1, o_56)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  t_56 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_56 = ATgetArgument(t, 0);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_57(t_56, t);
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATmakeAppl(sym_Var_1, u_56)));
          }
      }
    }
  else
    {
      t = b_57(t_56, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm c_25 = t;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,r_5 = NULL;
      b_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_28);
      z_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_28);
      r_5 = t;
      t = SSLsetAnnotations(r_5, z_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_28 = ATgetFirst((ATermList) t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_28, e_28);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if(match_cons(d_25, sym__2))
        {
          f_28 = ATgetArgument(d_25, 0);
          h_28 = ATgetArgument(d_25, 1);
        }
      else
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(match_cons(e_25, sym__2))
          {
            j_28 = ATgetArgument(e_25, 0);
            k_28 = ATgetArgument(e_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_28), f_28), (ATerm) ATinsert(CheckATermList(k_28), h_28));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_28 = ATgetFirst((ATermList) t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(match_cons(f_25, sym__2))
        {
          n_28 = ATgetArgument(f_25, 0);
          o_28 = ATgetArgument(f_25, 1);
        }
      else
        _fail(t);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(match_cons(g_25, sym__2))
          {
            p_28 = ATgetArgument(g_25, 0);
            q_28 = ATgetArgument(g_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_28), n_28), (ATerm) ATinsert(CheckATermList(q_28), o_28));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_25 = t;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,t_5 = NULL;
      p_30 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_30);
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_30);
      t_5 = t;
      t = SSLsetAnnotations(t_5, n_30);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_25;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_30 = ATgetFirst((ATermList) t);
      s_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if(match_cons(i_25, sym__2))
        {
          t_30 = ATgetArgument(i_25, 0);
          v_30 = ATgetArgument(i_25, 1);
        }
      else
        _fail(t);
      {
        ATerm j_25 = ATgetArgument(t, 1);
        if(match_cons(j_25, sym__2))
          {
            w_30 = ATgetArgument(j_25, 0);
            x_30 = ATgetArgument(j_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_30), t_30), (ATerm) ATinsert(CheckATermList(x_30), v_30));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_24;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_30 = ATgetFirst((ATermList) t);
      z_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      if(match_cons(k_25, sym__2))
        {
          a_31 = ATgetArgument(k_25, 0);
          b_31 = ATgetArgument(k_25, 1);
        }
      else
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
        if(match_cons(l_25, sym__2))
          {
            e_31 = ATgetArgument(l_25, 0);
            f_31 = ATgetArgument(l_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_31), a_31), (ATerm) ATinsert(CheckATermList(f_31), b_31));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_61 = NULL,h_61 = NULL,l_61 = NULL,m_61 = NULL;
  h_61 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_61 = ATgetArgument(t, 0);
      m_61 = ATgetArgument(t, 1);
      f_61 = ATgetArgument(t, 2);
      {
        ATerm u_26 = NULL,v_26 = NULL,e_27 = NULL,f_27 = NULL,k_27 = NULL,l_27 = NULL,o_27 = NULL,p_27 = NULL,y_27 = NULL,s_5 = NULL;
        t = f_61;
        t = fetch_1_0(e_5, t);
        t = f_61;
        t = genzip_4_0(f_5, g_5, h_5, LiftPrimArg_0_0, t);
        y_27 = t;
        if(match_cons(t, sym__2))
          {
            k_27 = ATgetArgument(t, 0);
            l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_27);
        f_27 = t;
        t = k_27;
        t = concat_0_0(t);
        o_27 = t;
        t = l_27;
        t = genzip_4_0(i_5, n_5, o_5, _id, t);
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
        s_5 = t;
        t = SSLsetAnnotations(s_5, f_27);
        if(match_cons(t, sym__2))
          {
            u_26 = ATgetArgument(t, 0);
            {
              ATerm m_25 = ATgetArgument(t, 1);
              if(match_cons(m_25, sym__2))
                {
                  v_26 = ATgetArgument(m_25, 0);
                  e_27 = ATgetArgument(m_25, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_26, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_26), (ATerm) ATmakeAppl(sym_PrimT_3, l_61, m_61, e_27)));
      }
    }
  else
    {
      ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,c_30 = NULL,f_30 = NULL,m_30 = NULL,u_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          l_61 = ATgetArgument(t, 0);
          m_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_61;
      t = fetch_1_0(q_5, t);
      t = m_61;
      t = genzip_4_0(v_5, w_5, x_5, LiftPrimArg_0_0, t);
      m_30 = t;
      if(match_cons(t, sym__2))
        {
          r_29 = ATgetArgument(t, 0);
          s_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_30);
      q_29 = t;
      t = r_29;
      t = concat_0_0(t);
      c_30 = t;
      t = s_29;
      t = genzip_4_0(y_5, a_6, c_6, _id, t);
      f_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_30, f_30);
      u_5 = t;
      t = SSLsetAnnotations(u_5, q_29);
      if(match_cons(t, sym__2))
        {
          n_29 = ATgetArgument(t, 0);
          {
            ATerm n_25 = ATgetArgument(t, 1);
            if(match_cons(n_25, sym__2))
              {
                o_29 = ATgetArgument(n_25, 0);
                p_29 = ATgetArgument(n_25, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_29), (ATerm) ATmakeAppl(sym_PrimT_3, l_61, (ATerm)ATempty, p_29)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t)
{
  static ATerm q_61 (ATerm t);
  static ATerm q_61 (ATerm t)
  {
    ATerm o_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_142(t);
        t = q_61(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = o_25;
        t = o_142(t);
      }
    return(t);
  }
  t = q_61(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm i_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  q_62 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
      p_62 = ATgetArgument(t, 2);
      {
        ATerm g_32 = NULL,z_5 = NULL;
        t = SSLgetAnnotations(q_62);
        g_32 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_62, o_62, p_62);
        z_5 = t;
        t = SSLsetAnnotations(z_5, g_32);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = q_62;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_25 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_25;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  v_63 = t;
  if(match_cons(t, sym_Con_3))
    {
      w_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
      u_63 = ATgetArgument(t, 2);
      {
        ATerm n_33 = NULL,b_6 = NULL;
        t = SSLgetAnnotations(v_63);
        n_33 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, w_63, x_63, u_63);
        b_6 = t;
        t = SSLsetAnnotations(b_6, n_33);
      }
    }
  else
    {
      ATerm r_34 = NULL,d_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          w_63 = ATgetArgument(t, 0);
          x_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_63);
      r_34 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, w_63, x_63);
      d_6 = t;
      t = SSLsetAnnotations(d_6, r_34);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm t_25 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(f_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_25;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      f_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_64;
  if(match_cons(t, sym_StratRule_3))
    {
      g_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
      i_64 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_64), (ATerm) ATmakeAppl(sym_Where_1, i_64)), g_64));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_64 = ATgetArgument(t, 0);
          h_64 = ATgetArgument(t, 1);
          i_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_64;
      t = pureterm_0_0(t);
      t = h_64;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, h_64)), (ATerm) ATmakeAppl(sym_Where_1, i_64)), (ATerm) ATmakeAppl(sym_Match_1, g_64)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  static ATerm x_64 (ATerm t);
  static ATerm x_64 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_137(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = SRTS_one(x_64, t);
      }
    return(t);
  }
  t = x_64(t);
  return(t);
}
static ATerm f_10 (ATerm m_100, ATerm n_100, ATerm o_100, ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,h_65 = NULL;
  t = new_0_0(t);
  c_65 = t;
  t = m_100;
  {
    static ATerm g_6 (ATerm t);
    static ATerm g_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm w_25 = ATgetArgument(t, 0);
          if(match_cons(w_25, sym_Var_1))
            {
              if(((b_65 != NULL) && (b_65 != ATgetArgument(w_25, 0))))
                _fail(ATgetArgument(w_25, 0));
              else
                b_65 = ATgetArgument(w_25, 0);
            }
          else
            _fail(t);
          if(((z_64 != NULL) && (z_64 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_64 = ATgetArgument(t, 1);
          {
            ATerm x_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_65);
      return(t);
    }
    t = oncetd_1_0(g_6, t);
  }
  d_65 = t;
  t = n_100;
  {
    static ATerm i_6 (ATerm t);
    static ATerm i_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_25 = ATgetArgument(t, 0);
          if(match_cons(y_25, sym_Var_1))
            {
              if(((b_65 != NULL) && (b_65 != ATgetArgument(y_25, 0))))
                _fail(ATgetArgument(y_25, 0));
              else
                b_65 = ATgetArgument(y_25, 0);
            }
          else
            _fail(t);
          if(((a_65 != NULL) && (a_65 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_65 = ATgetArgument(t, 1);
          {
            ATerm z_25 = ATgetArgument(t, 2);
            if(match_cons(z_25, sym_CallT_3))
              {
                if(((y_64 != NULL) && (y_64 != ATgetArgument(z_25, 0))))
                  _fail(ATgetArgument(z_25, 0));
                else
                  y_64 = ATgetArgument(z_25, 0);
                {
                  ATerm a_26 = ATgetArgument(z_25, 1);
                  if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
                    _fail(t);
                }
                {
                  ATerm b_26 = ATgetArgument(z_25, 2);
                  if(((ATgetType(b_26) != AT_LIST) || !(ATisEmpty(b_26))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_65);
      return(t);
    }
    t = oncetd_1_0(i_6, t);
  }
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_65), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_65, h_65, (ATerm) ATmakeAppl(sym_Seq_2, o_100, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_64), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_64), not_null(a_65), term_h_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_65)), (ATerm) ATmakeAppl(sym_Var_1, c_65))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,f_66 = NULL;
          b_66 = t;
          if(match_cons(t, sym_SRule_1))
            {
              c_66 = ATgetArgument(t, 0);
              t = c_66;
              if(match_cons(t, sym_Rule_3))
                {
                  y_65 = ATgetArgument(t, 0);
                  z_65 = ATgetArgument(t, 1);
                  a_66 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_66;
              t = f_10(y_65, z_65, a_66, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm h_35 = NULL,k_35 = NULL,h_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  c_66 = ATgetArgument(t, 0);
                  f_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_66);
              h_35 = t;
              t = f_66;
              t = desugarRule_0_0(t);
              k_35 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, c_66, k_35);
              h_6 = t;
              t = SSLsetAnnotations(h_6, h_35);
            }
          LocalPopChoice(f_26);
        }
      else
        {
          t = e_26;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t);
  static ATerm l_6 (ATerm t)
  {
    t = topdown_1_0(n_136, t);
    return(t);
  }
  t = n_136(t);
  t = SRTS_all(l_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
    }
  t = repeat_2_0(n_6, _id, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,f_67 = NULL;
            a_67 = t;
            if(match_cons(t, sym_CallT_3))
              {
                b_67 = ATgetArgument(t, 0);
                c_67 = ATgetArgument(t, 1);
                f_67 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = a_67;
            t = b_10(b_67, c_67, f_67, t);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm m_26 = t;
              int n_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(n_26);
                }
              else
                {
                  t = m_26;
                  {
                    ATerm o_26 = t;
                    int p_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(p_26);
                      }
                    else
                      {
                        t = o_26;
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_26 = t;
                              int t_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_67 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_67;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      o_67 = ATgetArgument(t, 0);
                                      t = o_67;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          o_67 = ATgetArgument(t, 0);
                                          p_67 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, o_67, p_67);
                                    }
                                  LocalPopChoice(t_26);
                                }
                              else
                                {
                                  t = s_26;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm w_26 = t;
                                int y_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(y_26);
                                  }
                                else
                                  {
                                    t = w_26;
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
  t = topdown_1_0(m_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL;
  t_68 = t;
  t = SSL_explode_term(t_68);
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            s_68 = ATgetFirst((ATermList) i_27);
            {
              ATerm m_27 = (ATerm) ATgetNext((ATermList) i_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_68;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  r_35 = t;
  t = SSL_explode_term(r_35);
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_28 = ATgetArgument(t, 1);
        if(((ATgetType(s_28) == AT_LIST) && !(ATisEmpty(s_28))))
          {
            ATerm x_28 = ATgetFirst((ATermList) s_28);
            p_35 = (ATerm) ATgetNext((ATermList) s_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_s_20;
  q_35 = t;
  t = SSL_mkterm(q_35, p_35);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm g_68 = NULL,j_68 = NULL;
  static ATerm w_68 (ATerm t);
  static ATerm w_68 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_68 = NULL,m_68 = NULL,q_68 = NULL;
        l_68 = t;
        t = map_1_0(o_6, t);
        t = u_140(t);
        m_68 = t;
        t = l_68;
        t = map_1_0(q_6, t);
        t = w_68(t);
        q_68 = t;
        t = (ATerm) ATinsert(CheckATermList(q_68), m_68);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = map_1_0(r_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = w_68(t);
  j_68 = t;
  t = term_s_20;
  g_68 = t;
  t = SSL_mkterm(g_68, j_68);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm x_68 = NULL;
  x_68 = t;
  {
    ATerm a_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_69 = NULL,d_69 = NULL,e_69 = NULL;
        t = x_68;
        t = new_0_0(t);
        b_69 = t;
        t = new_0_0(t);
        d_69 = t;
        t = new_0_0(t);
        e_69 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, x_68), (ATerm) ATmakeAppl(sym_Var_1, d_69))), (ATerm) ATmakeAppl(sym_Var_1, e_69)), (ATerm)ATmakeAppl(sym_VarDec_2, b_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), d_69, (ATerm)ATmakeAppl(sym_Var_1, d_69), e_69, (ATerm) ATmakeAppl(sym_Var_1, e_69));
        LocalPopChoice(c_29);
      }
    else
      {
        t = a_29;
        {
          ATerm h_69 = NULL,p_69 = NULL,q_69 = NULL;
          t = x_68;
          t = new_0_0(t);
          h_69 = t;
          t = new_0_0(t);
          p_69 = t;
          t = new_0_0(t);
          q_69 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_69), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, x_68), (ATerm) ATmakeAppl(sym_Var_1, p_69))), (ATerm) ATmakeAppl(sym_Var_1, q_69)), (ATerm)ATmakeAppl(sym_VarDec_2, h_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), p_69, (ATerm)ATmakeAppl(sym_Var_1, p_69), q_69, (ATerm) ATmakeAppl(sym_Var_1, q_69));
        }
      }
  }
  return(t);
}
static ATerm g_10 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_44, y_44);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = SSL_subtr(x_44, y_44);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  if(match_cons(t, sym__2))
    {
      r_69 = ATgetArgument(t, 0);
      s_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_69, s_69, (ATerm) ATempty);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm t_69 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(((ATgetType(l_29) != AT_INT) || (ATgetInt((ATermInt) l_29) != 0)))
        _fail(t);
      {
        ATerm y_29 = ATgetArgument(t, 1);
      }
      t_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_69;
  return(t);
}
ATerm copy_1_0 (ATerm y_159 (ATerm), ATerm t)
{
  static ATerm x_6 (ATerm t);
  static ATerm x_6 (ATerm t)
  {
    ATerm u_69 = NULL,v_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
    if(match_cons(t, sym__3))
      {
        u_69 = ATgetArgument(t, 0);
        v_69 = ATgetArgument(t, 1);
        x_69 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_69, term_d_20);
    t = geq_0_0(t);
    t = term_d_20;
    a_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_69, term_d_20);
    t = g_10(u_69, a_70, t);
    y_69 = t;
    t = v_69;
    t = y_159(t);
    z_69 = t;
    t = (ATerm) ATmakeAppl(sym__3, y_69, v_69, (ATerm) ATinsert(CheckATermList(x_69), z_69));
    return(t);
  }
  t = for_3_0(t_6, v_6, x_6, t);
  return(t);
}
static ATerm h_10 (ATerm s_82, ATerm t_82, ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  t = new_0_0(t);
  b_70 = t;
  t = new_0_0(t);
  c_70 = t;
  t = new_0_0(t);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_70), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_82)), (ATerm) ATmakeAppl(sym_Var_1, c_70))), (ATerm) ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_82)), (ATerm) ATmakeAppl(sym_Var_1, d_70)))), (ATerm)ATmakeAppl(sym_VarDec_2, b_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_29), term_h_29)), c_70, (ATerm)ATmakeAppl(sym_Var_1, c_70), d_70, (ATerm) ATmakeAppl(sym_Var_1, d_70));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_70 = ATgetFirst((ATermList) t);
      k_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_70;
    }
  else
    {
      t = k_70;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_73 (ATerm y_70, ATerm d_71, ATerm e_71, ATerm i_71, ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  t = term_d_20;
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, term_d_20);
  t = k_11(d_71, z_71, t);
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_71, term_z_29);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_71 = ATgetFirst((ATermList) t);
      q_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_71;
  t = last_0_0(t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_71), p_71), q_71);
  t = genzip_4_0(y_6, z_6, a_7, b_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      r_71 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
      t_71 = ATgetArgument(t, 2);
      u_71 = ATgetArgument(t, 3);
      v_71 = ATgetArgument(t, 4);
      w_71 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_71), t_71), q_71);
  t = concat_0_0(t);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, y_70, term_a_30), s_71, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(x_71), p_71), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_71)), (ATerm) ATmakeAppl(sym_Op_2, y_70, u_71))), (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_71)), (ATerm) ATmakeAppl(sym_Op_2, y_70, w_71))), (ATerm) ATmakeAppl(sym_Seqs_1, r_71)))));
  return(t);
}
static ATerm w_73 (ATerm l_72, ATerm s_72, ATerm t_72, ATerm u_72, ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,e_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  t = u_72;
  t = new_0_0(t);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_72, (ATerm) ATmakeAppl(sym_Var_1, y_72));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
      b_73 = ATgetArgument(t, 2);
      e_73 = ATgetArgument(t, 3);
      j_73 = ATgetArgument(t, 4);
      k_73 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_73, j_73);
  t = conc_0_0(t);
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, l_72, term_b_30), a_73, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_73), y_72), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_72)), (ATerm) ATmakeAppl(sym_Op_2, l_72, e_73))), (ATerm)ATmakeAppl(sym_Op_2, l_72, k_73), (ATerm) ATmakeAppl(sym_Seqs_1, z_72)))));
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      ATerm e_30 = ATgetArgument(t, 1);
      if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm a_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
        {
          a_72 = ATgetFirst((ATermList) g_30);
          d_72 = (ATerm) ATgetNext((ATermList) g_30);
        }
      else
        _fail(t);
      {
        ATerm h_30 = ATgetArgument(t, 1);
        if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
          {
            e_72 = ATgetFirst((ATermList) h_30);
            f_72 = (ATerm) ATgetNext((ATermList) h_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_72, e_72), (ATerm) ATmakeAppl(sym__2, d_72, f_72));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_72), g_72);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL;
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      j_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(i_72, j_72, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  n_73 = t;
  if(match_cons(t, sym__3))
    {
      o_73 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
      q_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_73;
  if(match_string(t, "T"))
    {
      t = q_73;
      if(match_cons(t, sym__2))
        {
          r_73 = ATgetArgument(t, 0);
          s_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_73;
      if(match_int(t, 0))
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_73(o_73, r_73, s_73, n_73, t);
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              {
                ATerm u_73 = NULL;
                t = n_73;
                t = new_0_0(t);
                u_73 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_73, term_a_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_73), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_73)), (ATerm) ATmakeAppl(sym_Op_2, o_73, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_73)), (ATerm) ATmakeAppl(sym_Op_2, o_73, (ATerm) ATempty))), term_h_23))));
              }
            }
        }
      else
        {
          t = v_73(o_73, r_73, s_73, n_73, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_73;
      if(match_cons(t, sym__2))
        {
          r_73 = ATgetArgument(t, 0);
          s_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_73(o_73, r_73, s_73, n_73, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_154 (ATerm), ATerm t)
{
  ATerm z_23 = NULL;
  static ATerm c_7 (ATerm t);
  static ATerm c_7 (ATerm t)
  {
    t = i_154(t);
    if(((z_23 != NULL) && (z_23 != t)))
      _fail(t);
    else
      z_23 = t;
    return(t);
  }
  t = fetch_1_0(c_7, t);
  t = not_null(z_23);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm b_24 = NULL,e_24 = NULL,f_24 = NULL;
  t = term_m_16;
  e_24 = t;
  t = (ATerm) ATinsert(ATempty, term_k_30);
  f_24 = t;
  t = SSL_printnl(e_24, f_24);
  t = term_d_20;
  b_24 = t;
  t = SSL_exit(b_24);
  t = (ATerm) ATinsert(ATempty, term_k_30);
  return(t);
}
ATerm debug_1_0 (ATerm a_144 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL;
  g_24 = t;
  t = a_144(t);
  h_24 = t;
  t = term_m_16;
  j_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_24), h_24);
  k_24 = t;
  t = SSL_printnl(j_24, k_24);
  t = g_24;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  ATerm q_30 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm i_31 = ATgetArgument(t, 0);
          r_17 = ATgetArgument(t, 1);
          s_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(g_31);
      t = s_17;
      t = foldr_3_0(k_7, l_7, n_7, t);
      t = r_17;
      t = foldr_3_0(o_7, r_7, s_7, t);
    }
  else
    {
      t = q_30;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm j_31 = ATgetArgument(t, 0);
          r_17 = ATgetArgument(t, 1);
          s_17 = ATgetArgument(t, 2);
          {
            ATerm k_31 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_17;
      t = foldr_3_0(v_7, x_7, a_8, t);
      t = r_17;
      t = foldr_3_0(b_8, f_8, g_8, t);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm y_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(y_17, a_18, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(b_18, c_18, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(h_18, j_18, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(k_18, l_18, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      ATerm n_31 = ATgetArgument(t, 1);
      ATerm o_31 = ATgetArgument(t, 2);
      ATerm p_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL;
      static ATerm d_7 (ATerm t);
      static ATerm d_7 (ATerm t)
      {
        ATerm y_24 = NULL,z_24 = NULL;
        y_24 = t;
        {
          ATerm b_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  z_24 = ATgetArgument(t, 0);
                  {
                    ATerm h_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm j_32 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_32);
              t = z_24;
              if(((x_24 != NULL) && (x_24 != t)))
                _fail(t);
              else
                x_24 = t;
              t = y_24;
            }
          else
            {
              t = b_32;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  z_24 = ATgetArgument(t, 0);
                  {
                    ATerm k_32 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm o_32 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm p_32 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = z_24;
              if(((x_24 != NULL) && (x_24 != t)))
                _fail(t);
              else
                x_24 = t;
              t = y_24;
            }
        }
        return(t);
      }
      t = fetch_1_0(d_7, t);
      {
        static ATerm e_7 (ATerm t);
        static ATerm e_7 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_24 = ATgetArgument(t, 0);
              {
                ATerm q_32 = ATgetArgument(t, 1);
              }
              {
                ATerm r_32 = ATgetArgument(t, 2);
              }
              {
                ATerm a_33 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_7, t);
      }
      t = not_null(x_24);
      t = debug_1_0(h_7, t);
      t = giving_up_0_0(t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = w_31;
      {
        ATerm x_26 = NULL;
        x_26 = t;
        t = map_1_0(i_7, t);
        t = x_26;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(h_8, t);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              {
                ATerm o_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_18 = ATgetFirst((ATermList) t);
                    {
                      ATerm g_33 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = o_18;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,u_18 = NULL;
  a_27 = t;
  t = SSL_explode_term(a_27);
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_33 = ATgetArgument(t, 1);
        if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
          {
            b_27 = ATgetFirst((ATermList) m_33);
            {
              ATerm q_33 = (ATerm) ATgetNext((ATermList) m_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_27);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_33 = ATgetArgument(t, 1);
        if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
          {
            ATerm w_33 = ATgetFirst((ATermList) u_33);
            ATerm x_33 = (ATerm) ATgetNext((ATermList) u_33);
            if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
              {
                u_18 = ATgetFirst((ATermList) x_33);
                {
                  ATerm y_33 = (ATerm) ATgetNext((ATermList) x_33);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, b_27, u_18);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(i_8, j_8, t);
  return(t);
}
ATerm alltd_1_0 (ATerm f_138 (ATerm), ATerm t)
{
  static ATerm c_27 (ATerm t);
  static ATerm c_27 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_138(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = SRTS_all(c_27, t);
      }
    return(t);
  }
  t = c_27(t);
  return(t);
}
static ATerm t_9 (ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm d_27 = NULL,g_27 = NULL;
  g_27 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        t = p_11(b_48, c_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_34 = ATgetFirst((ATermList) t);
            d_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_34);
        {
          ATerm h_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_48, c_48, d_27);
          t = lookup_table_0_1(b_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(c_48, d_27, h_27, t);
          t = (ATerm) ATmakeAppl(sym__3, b_48, c_48, d_27);
        }
      }
    else
      {
        t = h_34;
        {
          ATerm j_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
          t = lookup_table_0_1(b_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_11(c_48, j_27, t);
          t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        }
      }
  }
  t = g_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_148 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  s_27 = t;
  t = m_148(t);
  r_27 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_27 = NULL;
        t = term_s_34;
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_s_34);
        t = p_11(r_27, w_27, t);
        {
          ATerm t_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_34;
            }
        }
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      n_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_27, term_s_34, n_27);
  t = lookup_table_0_1(r_27, t);
  v_27 = t;
  t = term_s_34;
  t_27 = t;
  t = v_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(t_27, n_27, u_27, t);
  t = q_27;
  {
    static ATerm l_8 (ATerm t);
    static ATerm l_8 (ATerm t)
    {
      ATerm x_27 = NULL;
      x_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_27, x_27);
      t = t_9(r_27, x_27, t);
      return(t);
    }
    t = map_1_0(l_8, t);
  }
  t = s_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t)
{
  ATerm v_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_139(t);
      t = z_139(t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = v_34;
      t = z_139(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_148 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,g_28 = NULL,i_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  g_28 = t;
  t = l_148(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, term_s_34);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_35 = ATgetArgument(t, 0);
            ATerm c_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_34;
        b_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_s_34);
        t = p_11(d_28, b_29, t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
  }
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_28, term_s_34, (ATerm) ATinsert(CheckATermList(i_28), (ATerm) ATempty));
  t = lookup_table_0_1(d_28, t);
  w_28 = t;
  t = term_s_34;
  t_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), (ATerm) ATempty);
  u_28 = t;
  t = w_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(t_28, u_28, v_28, t);
  t = g_28;
  return(t);
}
ATerm scope_2_0 (ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t)
{
  static ATerm m_8 (ATerm t);
  static ATerm m_8 (ATerm t)
  {
    t = end_scope_1_0(n_148, t);
    return(t);
  }
  t = begin_scope_1_0(n_148, t);
  t = restore_always_2_0(o_148, m_8, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_29 = NULL,m_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  t_29 = t;
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_29;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_29;
            if((u_29 != t))
              {
                _fail(t);
              }
            t = m_29;
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            t = (ATerm) ATmakeAppl(sym__2, u_29, x_29);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, u_29, x_29);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(((ATgetType(f_35) != AT_LIST) || !(ATisEmpty(f_35))))
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) != AT_LIST) || !(ATisEmpty(g_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
        {
          q_31 = ATgetFirst((ATermList) i_35);
          r_31 = (ATerm) ATgetNext((ATermList) i_35);
        }
      else
        _fail(t);
      {
        ATerm j_35 = ATgetArgument(t, 1);
        if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
          {
            s_31 = ATgetFirst((ATermList) j_35);
            t_31 = (ATerm) ATgetNext((ATermList) j_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_31, s_31), (ATerm) ATmakeAppl(sym__2, r_31, t_31));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  if(match_cons(t, sym__2))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_31), u_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm u_30 = NULL,c_31 = NULL,d_31 = NULL,h_31 = NULL;
  u_30 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_35 = ATgetArgument(t, 0);
            ATerm o_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(m_35);
        t = u_30;
      }
    else
      {
        t = l_35;
        {
          ATerm l_31 = NULL;
          if(match_cons(t, sym__3))
            {
              c_31 = ATgetArgument(t, 0);
              d_31 = ATgetArgument(t, 1);
              h_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
          t = genzip_4_0(o_8, p_8, s_8, _id, t);
          l_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_31, h_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm w_135 (ATerm), ATerm x_135 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  static ATerm t_8 (ATerm t);
  static ATerm t_8 (ATerm t)
  {
    ATerm x_18 = NULL;
    t = w_135(t);
    x_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_18, not_null(y_31));
    t = lookup_0_0(t);
    t = x_135(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((y_31 != NULL) && (y_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_31;
  t = alltd_1_0(t_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm e_32 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_32 = ATgetArgument(t, 0);
      {
        ATerm s_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_32;
  return(t);
}
static ATerm v_8 (ATerm t)
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
static ATerm x_8 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
        if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,s_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
        {
          l_32 = ATgetFirst((ATermList) b_36);
          m_32 = (ATerm) ATgetNext((ATermList) b_36);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
        if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
          {
            n_32 = ATgetFirst((ATermList) c_36);
            s_32 = (ATerm) ATgetNext((ATermList) c_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_32, n_32), (ATerm) ATmakeAppl(sym__2, m_32, s_32));
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym__2))
    {
      t_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_32), t_32);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym_VarDec_2))
        {
          v_32 = ATgetArgument(f_36, 0);
          {
            ATerm g_36 = ATgetArgument(f_36, 1);
          }
        }
      else
        _fail(t);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_32);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_36, w_32);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SVar_1, v_32), (ATerm) ATmakeAppl(sym_Defined_2, term_h_36, w_32));
  t = x_10(i_9, y_32, z_32, t);
  t = x_32;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,d_19 = NULL;
  d_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      ATerm i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_t_35;
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, d_33);
  t = b_11(d_19, d_33, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_36) != ATmakeSymbol("q_0", 0, ATtrue)))
        _fail(t);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_33;
  return(t);
}
static ATerm x_9 (ATerm s_84, ATerm t_84, ATerm x_84, ATerm u_84, ATerm w_84, ATerm t)
{
  ATerm a_32 = NULL,c_32 = NULL,d_32 = NULL;
  t = u_84;
  t = map_1_0(u_8, t);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_32, t_84, w_84);
  t = substitute_2_0(v_8, _id, t);
  c_32 = t;
  {
    static ATerm y_8 (ATerm t);
    static ATerm y_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, x_84, s_84);
      t = genzip_4_0(z_8, b_9, e_9, g_9, t);
      t = c_32;
      t = alltd_1_0(j_9, t);
      if(((d_32 != NULL) && (d_32 != t)))
        _fail(t);
      else
        d_32 = t;
      return(t);
    }
    t = scope_2_0(x_8, y_8, t);
  }
  t = not_null(d_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm v_33 = NULL,z_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,j_6 = NULL;
  e_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_33 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_34);
  v_33 = t;
  t = z_33;
  t = new_0_0(t);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_34, c_34);
  j_6 = t;
  t = SSLsetAnnotations(j_6, v_33);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,j_34 = NULL,n_34 = NULL,o_34 = NULL,k_6 = NULL;
  o_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_34);
  f_34 = t;
  t = g_34;
  t = new_0_0(t);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_34, j_34);
  k_6 = t;
  t = SSLsetAnnotations(k_6, f_34);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_34 = ATgetArgument(t, 0);
      {
        ATerm m_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SVar_1, p_34);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm q_34 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_34 = ATgetArgument(t, 0);
      {
        ATerm q_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_34);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm f_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,o_33 = NULL,p_33 = NULL,r_33 = NULL,t_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_36 = ATgetFirst((ATermList) t);
      if(match_cons(r_36, sym_SDefT_4))
        {
          f_33 = ATgetArgument(r_36, 0);
          h_33 = ATgetArgument(r_36, 1);
          i_33 = ATgetArgument(r_36, 2);
          {
            ATerm x_36 = ATgetArgument(r_36, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm s_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_33;
  t = map_1_0(q_9, t);
  j_33 = t;
  t = i_33;
  t = map_1_0(r_9, t);
  k_33 = t;
  t = j_33;
  t = map_1_0(u_9, t);
  p_33 = t;
  t = k_33;
  t = map_1_0(v_9, t);
  r_33 = t;
  t = o_33;
  {
    static ATerm w_9 (ATerm t);
    static ATerm w_9 (ATerm t)
    {
      ATerm u_34 = NULL,w_34 = NULL,x_34 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm y_36 = ATgetArgument(t, 0);
          u_34 = ATgetArgument(t, 1);
          w_34 = ATgetArgument(t, 2);
          x_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_9(p_33, r_33, u_34, w_34, x_34, t);
      return(t);
    }
    t = map_1_0(w_9, t);
  }
  t = choices_0_0(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_33, j_33, k_33, t_33);
  return(t);
}
static ATerm e_75 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm g_74, ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,w_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_74, e_74);
  t = Definitions_0_0(t);
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_74, f_74);
  n_74 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      ATerm a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_74);
  l_74 = t;
  t = k_74;
  {
    ATerm b_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_74 = NULL,q_74 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_74 = ATgetFirst((ATermList) t);
            q_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_74;
        LocalPopChoice(l_37);
      }
    else
      {
        t = b_37;
        {
          ATerm m_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(w_37);
            }
          else
            {
              t = m_37;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_74, f_74);
  w_6 = t;
  t = SSLsetAnnotations(w_6, l_74);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  u_74 = t;
  if(match_cons(t, sym__2))
    {
      v_74 = ATgetArgument(t, 0);
      y_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_74;
  if(match_cons(t, sym__2))
    {
      w_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_74;
  if(match_cons(t, sym_Mod_2))
    {
      s_74 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_75 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, s_74, t_74, x_74);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            d_75 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_75, y_74);
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            t = e_75(w_74, x_74, y_74, u_74, t);
          }
      }
    }
  else
    {
      t = e_75(w_74, x_74, y_74, u_74, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_154 (ATerm), ATerm t)
{
  static ATerm z_75 (ATerm t);
  static ATerm z_75 (ATerm t)
  {
    ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
    y_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_75 = ATgetFirst((ATermList) t);
        x_75 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_36 = NULL,p_36 = NULL,g_7 = NULL;
          t = SSLgetAnnotations(y_75);
          d_36 = t;
          t = x_75;
          t = z_75(t);
          p_36 = t;
          t = (ATerm) ATinsert(CheckATermList(p_36), w_75);
          g_7 = t;
          t = SSLsetAnnotations(g_7, d_36);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_75;
        t = n_154(t);
      }
    return(t);
  }
  t = z_75(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL;
  g_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_75;
    }
  else
    {
      static ATerm y_9 (ATerm t);
      static ATerm y_9 (ATerm t)
      {
        t = not_null(i_75);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_75 = ATgetFirst((ATermList) t);
          if(((i_75 != NULL) && (i_75 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_75;
      t = at_end_1_0(y_9, t);
    }
  return(t);
}
static ATerm l_76 (ATerm d_76, ATerm t)
{
  ATerm e_76 = NULL;
  t = SSL_explode_term(d_76);
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_76;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  i_76 = t;
  if(match_cons(t, sym__2))
    {
      g_76 = ATgetArgument(t, 0);
      h_76 = ATgetArgument(t, 1);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_9 (ATerm t);
            static ATerm z_9 (ATerm t)
            {
              t = h_76;
              return(t);
            }
            t = g_76;
            t = at_end_1_0(z_9, t);
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            t = l_76(i_76, t);
          }
      }
    }
  else
    {
      t = l_76(i_76, t);
    }
  return(t);
}
static ATerm n_10 (ATerm a_156 (ATerm), ATerm a_71, ATerm z_70, ATerm t)
{
  static ATerm b_77 (ATerm t);
  static ATerm b_77 (ATerm t)
  {
    ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
    w_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_76;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_76 = ATgetFirst((ATermList) t);
            y_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_76;
              {
                static ATerm a_10 (ATerm t);
                static ATerm a_10 (ATerm t)
                {
                  t = z_70;
                  return(t);
                }
                t = y_10(a_156, a_10, x_76, y_76, t);
              }
              t = b_77(t);
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              {
                ATerm k_37 = NULL,n_37 = NULL,j_7 = NULL;
                t = SSLgetAnnotations(w_76);
                k_37 = t;
                t = y_76;
                t = b_77(t);
                n_37 = t;
                t = (ATerm) ATinsert(CheckATermList(n_37), x_76);
                j_7 = t;
                t = SSLsetAnnotations(j_7, k_37);
              }
            }
        }
      }
    return(t);
  }
  t = a_71;
  t = b_77(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t)
{
  static ATerm j_77 (ATerm t);
  static ATerm j_77 (ATerm t)
  {
    ATerm f_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_141(t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = f_38;
        {
          ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,m_7 = NULL;
          t = f_141(t);
          i_77 = t;
          if(match_cons(t, sym__2))
            {
              e_77 = ATgetArgument(t, 0);
              f_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_77);
          d_77 = t;
          t = e_77;
          t = h_141(t);
          g_77 = t;
          t = f_77;
          t = j_77(t);
          h_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_77, h_77);
          m_7 = t;
          t = SSLsetAnnotations(m_7, d_77);
          t = g_141(t);
        }
      }
    return(t);
  }
  t = j_77(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      if(((ATgetType(j_38) != AT_LIST) || !(ATisEmpty(j_38))))
        _fail(t);
      {
        ATerm k_38 = ATgetArgument(t, 1);
        if(((ATgetType(k_38) != AT_LIST) || !(ATisEmpty(k_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_38 = ATgetArgument(t, 0);
      if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
        {
          q_77 = ATgetFirst((ATermList) l_38);
          r_77 = (ATerm) ATgetNext((ATermList) l_38);
        }
      else
        _fail(t);
      {
        ATerm m_38 = ATgetArgument(t, 1);
        if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
          {
            s_77 = ATgetFirst((ATermList) m_38);
            t_77 = (ATerm) ATgetNext((ATermList) m_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_77, s_77), (ATerm) ATmakeAppl(sym__2, r_77, t_77));
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_77), u_77);
  return(t);
}
static ATerm s_10 (ATerm v_947, ATerm a_948, ATerm p_96, ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL;
  t = SSL_explode_term(a_948);
  if(match_cons(t, sym__2))
    {
      l_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_947);
  if(match_cons(t, sym__2))
    {
      if((l_77 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_77, n_77);
  t = genzip_4_0(c_10, d_10, e_10, _id, t);
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_77, p_96);
  t = conc_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm d_78 = NULL;
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_78);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,p_7 = NULL;
  h_78 = t;
  if(match_cons(t, sym__2))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_78);
  e_78 = t;
  t = g_78;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_78, g_78);
  p_7 = t;
  t = SSLsetAnnotations(p_7, e_78);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL;
  a_79 = t;
  if(match_cons(t, sym__2))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_79 = ATgetFirst((ATermList) t);
      e_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_79(b_79, c_79, a_79, t);
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_79), d_79), e_79);
          }
      }
    }
  else
    {
      t = o_79(b_79, c_79, a_79, t);
    }
  return(t);
}
static ATerm o_79 (ATerm i_78, ATerm j_78, ATerm k_78, ATerm t)
{
  ATerm l_78 = NULL,o_78 = NULL,q_7 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  t = SSLgetAnnotations(k_78);
  l_78 = t;
  t = j_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_78 = ATgetFirst((ATermList) t);
      u_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_78;
  if(match_cons(t, sym__2))
    {
      s_78 = ATgetArgument(t, 0);
      t_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_78;
        if((s_78 != t))
          {
            _fail(t);
          }
        t = u_78;
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = j_78;
        t = s_10(s_78, t_78, u_78, t);
      }
  }
  o_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_78, o_78);
  q_7 = t;
  t = SSLsetAnnotations(q_7, l_78);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm n_79 = NULL;
  if(match_cons(t, sym__2))
    {
      n_79 = ATgetArgument(t, 0);
      if((n_79 != ATgetArgument(t, 1)))
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
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_10, j_10, l_10, t);
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
        i_79 = t;
        if(match_cons(t, sym__2))
          {
            j_79 = ATgetArgument(t, 0);
            k_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_79;
        t = n_10(m_10, j_79, k_79, t);
      }
    }
  return(t);
}
static ATerm u_10 (ATerm r_174 (ATerm), ATerm s_174 (ATerm), ATerm t_174 (ATerm), ATerm u_99, ATerm r_99, ATerm z_99, ATerm v_99, ATerm s_99, ATerm t_99, ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_99, v_99);
  t = r_174(t);
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_79;
  t = s_174(t);
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_79, z_99);
  t = diff_0_0(t);
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_79, r_99);
  t = conc_0_0(t);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_79, z_99);
  t = conc_0_0(t);
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_99, q_79, s_99);
  t = t_174(t);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_79, u_79, p_79, v_79, t_99);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm r_174 (ATerm), ATerm s_174 (ATerm), ATerm t_174 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
        {
          x_79 = ATgetFirst((ATermList) w_38);
          y_79 = (ATerm) ATgetNext((ATermList) w_38);
        }
      else
        _fail(t);
      z_79 = ATgetArgument(t, 1);
      a_80 = ATgetArgument(t, 2);
      b_80 = ATgetArgument(t, 3);
      c_80 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = u_10(r_174, s_174, t_174, x_79, y_79, z_79, a_80, b_80, c_80, t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t)
{
  static ATerm d_80 (ATerm t);
  static ATerm d_80 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_143(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = f_143(t);
        t = d_80(t);
      }
    return(t);
  }
  t = d_80(t);
  return(t);
}
ATerm for_3_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t)
{
  t = h_143(t);
  t = while_not_2_0(i_143, j_143, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
  if(match_cons(t, sym__3))
    {
      p_80 = ATgetArgument(t, 0);
      q_80 = ATgetArgument(t, 1);
      r_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, p_80, p_80, q_80, r_80, (ATerm) ATempty);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL;
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
      u_80 = ATgetArgument(t, 3);
      v_80 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_80, v_80);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm h_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, a_11, l_11, t);
      LocalPopChoice(k_39);
    }
  else
    {
      t = h_39;
      {
        ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
        if(match_cons(t, sym__5))
          {
            b_81 = ATgetArgument(t, 0);
            e_81 = ATgetArgument(t, 1);
            f_81 = ATgetArgument(t, 2);
            g_81 = ATgetArgument(t, 3);
            h_81 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = b_81;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_81 = ATgetFirst((ATermList) t);
            d_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, d_81, e_81, f_81, g_81, (ATerm) ATinsert(CheckATermList(h_81), c_81));
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(o_11, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      y_80 = ATgetArgument(t, 1);
      z_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_80), y_80);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,i_39 = NULL,j_39 = NULL;
  g_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_39;
  if(match_cons(t, sym_Mod_2))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_39;
            t = m_9(e_39, f_39, j_39, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            t = s_39(i_39, j_39, t);
          }
      }
    }
  else
    {
      t = s_39(i_39, j_39, t);
    }
  return(t);
}
static ATerm s_39 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  t = term_m_16;
  c_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), v_38), term_p_16), u_38), term_n_16);
  d_39 = t;
  t = SSL_printnl(c_39, d_39);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), v_38), term_p_16), u_38), term_n_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,p_84 = NULL,r_84 = NULL;
  t = for_3_0(o_10, p_10, v_10, t);
  c_84 = t;
  if(match_cons(t, sym__2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_84;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_84;
    }
  else
    {
      ATerm p_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_84 = ATgetFirst((ATermList) t);
          r_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(r_84), p_84);
      t = map_1_0(r_11, t);
      t = term_d_20;
      p_38 = t;
      t = SSL_exit(p_38);
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL;
  if(match_cons(t, sym__2))
    {
      l_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(l_86, m_86, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm p_86 = NULL,s_86 = NULL;
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      s_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(p_86, s_86, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm y_86 = NULL;
  if(match_cons(t, sym__2))
    {
      y_86 = ATgetArgument(t, 0);
      if((y_86 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,l_85 = NULL,r_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,z_85 = NULL,h_86 = NULL,k_86 = NULL;
  g_85 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      j_85 = ATgetArgument(t, 0);
      e_85 = ATgetArgument(t, 1);
      f_85 = ATgetArgument(t, 2);
      {
        ATerm x_39 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_85 = t;
  t = e_85;
  t = foldr_3_0(v_11, w_11, x_11, t);
  h_85 = t;
  t = f_85;
  t = foldr_3_0(y_11, z_11, a_12, t);
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_85, (ATerm) ATmakeAppl(sym__2, h_85, i_85));
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATempty;
      }
  }
  v_85 = t;
  t = j_85;
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        t = (ATerm) ATempty;
      }
  }
  u_85 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_85, i_85));
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_85, i_85)), u_85);
  t = z_10(c_12, k_86, u_85, t);
  l_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_85, (ATerm) ATmakeAppl(sym__2, h_85, i_85));
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, (ATerm) ATinsert(CheckATermList(v_85), g_85));
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_85, (ATerm) ATmakeAppl(sym__2, h_85, i_85)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_40, (ATerm) ATinsert(CheckATermList(v_85), g_85)));
  t = x_10(d_12, z_85, h_86, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_40, l_85);
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_85, (ATerm) ATmakeAppl(sym_Defined_2, term_d_40, l_85));
  t = x_10(e_12, j_85, w_85, t);
  t = r_85;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL;
  if(match_cons(t, sym__2))
    {
      t_87 = ATgetArgument(t, 0);
      u_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(t_87, u_87, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL;
  if(match_cons(t, sym__2))
    {
      v_87 = ATgetArgument(t, 0);
      w_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(v_87, w_87, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm x_87 = NULL;
  if(match_cons(t, sym__2))
    {
      x_87 = ATgetArgument(t, 0);
      if((x_87 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,g_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
  d_87 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      k_87 = ATgetArgument(t, 0);
      b_87 = ATgetArgument(t, 1);
      c_87 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  m_87 = t;
  t = b_87;
  t = foldr_3_0(f_12, j_12, k_12, t);
  g_87 = t;
  t = c_87;
  t = foldr_3_0(l_12, m_12, n_12, t);
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_87, (ATerm) ATmakeAppl(sym__2, g_87, j_87));
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATempty;
      }
  }
  o_87 = t;
  t = k_87;
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = (ATerm) ATempty;
      }
  }
  n_87 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_87, j_87));
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_87, j_87)), n_87);
  t = z_10(o_12, s_87, n_87, t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_87, (ATerm) ATmakeAppl(sym__2, g_87, j_87));
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_40, (ATerm) ATinsert(CheckATermList(o_87), d_87));
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_87, (ATerm) ATmakeAppl(sym__2, g_87, j_87)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_40, (ATerm) ATinsert(CheckATermList(o_87), d_87)));
  t = x_10(p_12, q_87, r_87, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, l_87);
  p_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_87, (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, l_87));
  t = x_10(q_12, k_87, p_87, t);
  t = m_87;
  return(t);
}
static ATerm x_10 (ATerm p_148 (ATerm), ATerm r_46, ATerm o_46, ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
  b_88 = t;
  t = p_148(t);
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_87, r_46, o_46);
  t = q_11(y_87, r_46, o_46, t);
  {
    ATerm l_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_88 = NULL;
        t = term_s_34;
        g_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_87, term_s_34);
        t = p_11(y_87, g_88, t);
        {
          ATerm p_40 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_40;
            }
        }
        LocalPopChoice(n_40);
      }
    else
      {
        t = l_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_87 = ATgetFirst((ATermList) t);
      a_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_87, term_s_34, (ATerm) ATinsert(CheckATermList(a_88), (ATerm) ATinsert(CheckATermList(z_87), r_46)));
  t = lookup_table_0_1(y_87, t);
  f_88 = t;
  t = term_s_34;
  c_88 = t;
  t = (ATerm) ATinsert(CheckATermList(a_88), (ATerm) ATinsert(CheckATermList(z_87), r_46));
  d_88 = t;
  t = f_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(c_88, d_88, e_88, t);
  t = b_88;
  return(t);
}
static ATerm y_10 (ATerm i_156 (ATerm), ATerm j_156 (ATerm), ATerm g_71, ATerm f_71, ATerm t)
{
  t = j_156(t);
  {
    static ATerm r_12 (ATerm t);
    static ATerm r_12 (ATerm t)
    {
      ATerm h_88 = NULL;
      h_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_71, h_88);
      t = i_156(t);
      return(t);
    }
    t = fetch_1_0(r_12, t);
  }
  t = f_71;
  return(t);
}
static ATerm z_10 (ATerm f_156 (ATerm), ATerm c_71, ATerm b_71, ATerm t)
{
  static ATerm x_88 (ATerm t);
  static ATerm x_88 (ATerm t)
  {
    ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
    s_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_88 = ATgetFirst((ATermList) t);
            u_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_88;
              {
                static ATerm t_12 (ATerm t);
                static ATerm t_12 (ATerm t)
                {
                  t = b_71;
                  return(t);
                }
                t = y_10(f_156, t_12, t_88, u_88, t);
              }
              t = x_88(t);
              LocalPopChoice(s_40);
            }
          else
            {
              t = r_40;
              {
                ATerm i_40 = NULL,m_40 = NULL,t_7 = NULL;
                t = SSLgetAnnotations(s_88);
                i_40 = t;
                t = u_88;
                t = x_88(t);
                m_40 = t;
                t = (ATerm) ATinsert(CheckATermList(m_40), t_88);
                t_7 = t;
                t = SSLsetAnnotations(t_7, i_40);
              }
            }
        }
      }
    return(t);
  }
  t = c_71;
  t = x_88(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL,e_42 = NULL;
        t = term_w_39;
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_39, l_89);
        t = b_11(e_42, l_89, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_40) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            y_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_41;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_42 = NULL,u_42 = NULL;
              t = term_w_39;
              u_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_39, l_89);
              t = b_11(u_42, l_89, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm a_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_41) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  i_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_42;
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              {
                ATerm g_43 = NULL,m_43 = NULL;
                t = term_w_39;
                m_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_39, l_89);
                t = b_11(m_43, l_89, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_41) != ATmakeSymbol("v_0", 0, ATtrue)))
                      _fail(t);
                    g_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_43;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_11 (ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm p_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_48, i_48);
  t = p_11(h_48, i_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      {
        ATerm c_41 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_89;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm g_90 = NULL,i_90 = NULL;
  g_90 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_41 = ATgetArgument(t, 0);
      i_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90;
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      ATerm f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL,z_44 = NULL;
        t = term_v_39;
        z_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_39, g_90);
        t = b_11(z_44, g_90, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_41) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            l_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_44;
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        {
          ATerm j_41 = t;
          int k_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_45 = NULL,j_45 = NULL;
              t = term_v_39;
              j_45 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_39, g_90);
              t = b_11(j_45, g_90, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_41) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  g_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_45;
              LocalPopChoice(k_41);
            }
          else
            {
              t = j_41;
              {
                ATerm p_45 = NULL,v_45 = NULL;
                t = term_v_39;
                v_45 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_39, g_90);
                t = b_11(v_45, g_90, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm m_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_41) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    p_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_45;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_159 (ATerm), ATerm l_159 (ATerm), ATerm m_159 (ATerm), ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_90;
      t = k_159(t);
    }
  else
    {
      ATerm u_90 = NULL,v_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_90 = ATgetFirst((ATermList) t);
          r_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_90;
      t = m_159(t);
      u_90 = t;
      t = r_90;
      t = foldr_3_0(k_159, l_159, m_159, t);
      v_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_90, v_90);
      t = l_159(t);
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  if(match_cons(t, sym__2))
    {
      k_91 = ATgetArgument(t, 0);
      l_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(k_91, l_91, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      n_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(m_91, n_91, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm o_91 = NULL;
  if(match_cons(t, sym__2))
    {
      o_91 = ATgetArgument(t, 0);
      if((o_91 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL;
  y_90 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_91 = ATgetArgument(t, 0);
      w_90 = ATgetArgument(t, 1);
      x_90 = ATgetArgument(t, 2);
      {
        ATerm n_41 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_91 = t;
  t = w_90;
  t = foldr_3_0(u_12, v_12, y_12, t);
  z_90 = t;
  t = x_90;
  t = foldr_3_0(z_12, a_13, b_13, t);
  a_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_91, (ATerm) ATmakeAppl(sym__2, z_90, a_91));
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = (ATerm) ATempty;
      }
  }
  f_91 = t;
  t = b_91;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = (ATerm) ATempty;
      }
  }
  e_91 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_90, a_91));
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_90, a_91)), e_91);
  t = z_10(c_13, j_91, e_91, t);
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_91, (ATerm) ATmakeAppl(sym__2, z_90, a_91));
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_41, (ATerm) ATinsert(CheckATermList(f_91), y_90));
  i_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_91, (ATerm) ATmakeAppl(sym__2, z_90, a_91)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_41, (ATerm) ATinsert(CheckATermList(f_91), y_90)));
  t = x_10(d_13, h_91, i_91, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_41, c_91);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_91, (ATerm) ATmakeAppl(sym_Defined_2, term_v_41, c_91));
  t = x_10(e_13, b_91, g_91, t);
  t = d_91;
  return(t);
}
static ATerm f_13 (ATerm t)
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
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm p_91 = NULL;
  t = map_1_0(f_13, t);
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_d_42), p_91, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,w_7 = NULL;
  v_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_91 = ATgetFirst((ATermList) t);
      s_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_91);
  q_91 = t;
  t = r_91;
  t = n_110(t);
  t_91 = t;
  t = s_91;
  t = o_110(t);
  u_91 = t;
  t = (ATerm) ATinsert(CheckATermList(u_91), t_91);
  w_7 = t;
  t = SSLsetAnnotations(w_7, q_91);
  return(t);
}
static ATerm c_11 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm w_91 = NULL;
  t = SSL_fputc(s_37, t_37);
  w_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_91);
  return(t);
}
static ATerm d_11 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm x_91 = NULL;
  t = SSL_write_term_to_stream_text(y_35, z_35);
  x_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_91);
  return(t);
}
static ATerm f_11 (ATerm c_144 (ATerm), ATerm n_289, ATerm e_36, ATerm t)
{
  ATerm y_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_289, term_f_42);
  t = j_11(t);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_91, e_36);
  t = c_144(t);
  t = fclose_0_0(t);
  t = e_36;
  return(t);
}
static ATerm e_11 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm z_91 = NULL;
  t = SSL_write_term_to_stream_baf(u_35, v_35);
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_91);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if(match_cons(g_42, sym_Stream_1))
        {
          g_92 = ATgetArgument(g_42, 0);
        }
      else
        _fail(t);
      h_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(g_92, h_92, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_42 = ATgetArgument(t, 0);
      if(match_cons(h_42, sym_Stream_1))
        {
          l_92 = ATgetArgument(h_42, 0);
        }
      else
        _fail(t);
      m_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(l_92, m_92, t);
  i_92 = t;
  t = term_h_22;
  j_92 = t;
  t = i_92;
  if(match_cons(t, sym_Stream_1))
    {
      k_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, i_92);
  t = c_11(j_92, k_92, t);
  return(t);
}
ATerm output_1_0 (ATerm a_170 (ATerm), ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL;
  t = a_170(t);
  b_92 = t;
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_92 = NULL,d_92 = NULL;
        t = term_l_42;
        c_92 = t;
        t = term_m_42;
        d_92 = t;
        t = term_n_42;
        t = p_11(c_92, d_92, t);
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        t = term_o_42;
      }
  }
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_92, b_92);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_92 = NULL,f_92 = NULL;
        t = term_l_42;
        e_92 = t;
        t = term_r_42;
        f_92 = t;
        t = term_s_42;
        t = p_11(e_92, f_92, t);
        t = (ATerm) ATmakeAppl(sym__2, a_92, b_92);
        LocalPopChoice(q_42);
        if(match_cons(t, sym__2))
          {
            ATerm t_42 = ATgetArgument(t, 0);
            ATerm v_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(h_13, a_92, b_92, t);
      }
    else
      {
        t = p_42;
        if(match_cons(t, sym__2))
          {
            ATerm w_42 = ATgetArgument(t, 0);
            ATerm x_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(i_13, a_92, b_92, t);
      }
  }
  return(t);
}
static ATerm a_93 (ATerm u_92, ATerm t)
{
  t = SSL_fclose(u_92);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL;
  y_92 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_92 = ATgetArgument(t, 0);
      {
        ATerm y_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_92);
            LocalPopChoice(z_42);
          }
        else
          {
            t = y_42;
            t = a_93(y_92, t);
          }
      }
    }
  else
    {
      t = a_93(y_92, t);
    }
  return(t);
}
static ATerm g_11 (ATerm a_36, ATerm t)
{
  t = SSL_read_term_from_stream(a_36);
  return(t);
}
static ATerm h_11 (ATerm j_80, ATerm k_80, ATerm t)
{
  t = SSL_strcat(j_80, k_80);
  return(t);
}
static ATerm i_11 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm b_93 = NULL;
  t = SSL_fopen(u_37, v_37);
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_93);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_93 = NULL;
  t = SSL_stdin_stream();
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_93);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_stdout_stream();
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_93);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_93 = NULL;
  t = SSL_stderr_stream();
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_93);
  return(t);
}
static ATerm l_94 (ATerm k_93, ATerm t)
{
  ATerm l_93 = NULL;
  t = SSL_explode_term(k_93);
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_43 = ATgetArgument(t, 1);
        if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
          {
            l_93 = ATgetFirst((ATermList) b_43);
            {
              ATerm c_43 = (ATerm) ATgetNext((ATermList) b_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_93;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_93;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_93;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_93;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_94 (ATerm o_93, ATerm p_93, ATerm q_93, ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL,w_93 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(q_93);
  t_93 = t;
  t = o_93;
  if(match_cons(t, sym_Path_1))
    {
      w_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_93, p_93);
  y_7 = t;
  t = SSLsetAnnotations(y_7, t_93);
  if(match_cons(t, sym__2))
    {
      r_93 = ATgetArgument(t, 0);
      s_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(r_93, s_93, t);
  return(t);
}
static ATerm n_94 (ATerm y_93, ATerm z_93, ATerm a_94, ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,g_94 = NULL,z_7 = NULL;
  t = SSLgetAnnotations(a_94);
  d_94 = t;
  t = SSL_is_string(y_93);
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_94, z_93);
  z_7 = t;
  t = SSLsetAnnotations(z_7, d_94);
  if(match_cons(t, sym__2))
    {
      b_94 = ATgetArgument(t, 0);
      c_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(b_94, c_94, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  i_94 = t;
  if(match_cons(t, sym__2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
      {
        ATerm d_43 = t;
        int e_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_94(i_94, t);
            LocalPopChoice(e_43);
          }
        else
          {
            t = d_43;
            {
              ATerm f_43 = t;
              int j_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_94(j_94, k_94, i_94, t);
                  LocalPopChoice(j_43);
                }
              else
                {
                  t = f_43;
                  t = n_94(j_94, k_94, i_94, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_94(i_94, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,b_95 = NULL;
  b_95 = t;
  {
    ATerm k_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_95, term_o_43);
        t = j_11(t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = k_43;
        {
          ATerm n_46 = NULL,p_46 = NULL;
          t = term_p_43;
          p_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_43, b_95);
          t = h_11(p_46, b_95, t);
          n_46 = t;
          t = SSL_perror(n_46);
          _fail(t);
        }
      }
  }
  q_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(r_94, t);
  p_94 = t;
  t = q_94;
  t = fclose_0_0(t);
  t = p_94;
  return(t);
}
ATerm input_1_0 (ATerm b_170 (ATerm), ATerm t)
{
  ATerm r_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_95 = NULL,f_95 = NULL;
      t = term_l_42;
      e_95 = t;
      t = term_u_43;
      f_95 = t;
      t = term_x_43;
      t = p_11(e_95, f_95, t);
      LocalPopChoice(t_43);
    }
  else
    {
      t = r_43;
      t = term_y_43;
    }
  t = ReadFromFile_0_0(t);
  t = b_170(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL;
  t = term_l_42;
  g_95 = t;
  t = term_z_43;
  h_95 = t;
  t = term_a_44;
  t = p_11(g_95, h_95, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_44 = ATgetFirst((ATermList) t);
                ATerm e_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_95;
          }
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = (ATerm) ATinsert(ATempty, k_95);
      }
  }
  l_95 = t;
  t = term_o_42;
  m_95 = t;
  t = SSL_printnl(m_95, l_95);
  t = k_95;
  return(t);
}
ATerm map_1_0 (ATerm y_153 (ATerm), ATerm t)
{
  static ATerm e_96 (ATerm t);
  static ATerm e_96 (ATerm t)
  {
    ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL;
    b_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_96;
      }
    else
      {
        ATerm v_46 = NULL,y_46 = NULL,z_46 = NULL,c_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_96 = ATgetFirst((ATermList) t);
            d_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_96);
        v_46 = t;
        t = c_96;
        t = y_153(t);
        y_46 = t;
        t = d_96;
        t = e_96(t);
        z_46 = t;
        t = (ATerm) ATinsert(CheckATermList(z_46), y_46);
        c_8 = t;
        t = SSLsetAnnotations(c_8, v_46);
      }
    return(t);
  }
  t = e_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_96 = ATgetFirst((ATermList) t);
      i_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_96 = NULL,s_96 = NULL;
        static ATerm j_13 (ATerm t);
        static ATerm j_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_96)), not_null(s_96));
          return(t);
        }
        t = i_96;
        t = r_0(t);
        if(((r_96 != NULL) && (r_96 != t)))
          _fail(t);
        else
          r_96 = t;
        t = h_96;
        t = p_0(t);
        if(((s_96 != NULL) && (s_96 != t)))
          _fail(t);
        else
          s_96 = t;
        t = i_96;
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
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,k_8 = NULL;
  c_97 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_97);
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_97);
  k_8 = t;
  t = SSLsetAnnotations(k_8, a_97);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm g_97 = NULL;
  g_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_97), term_j_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm z_171 (ATerm), ATerm a_172 (ATerm), ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL;
  ATerm m_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_96 = NULL,z_96 = NULL;
      t = term_l_42;
      y_96 = t;
      t = term_z_43;
      z_96 = t;
      t = term_a_44;
      t = p_11(y_96, z_96, t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = m_44;
      t = fetch_1_0(k_13, t);
    }
  {
    ATerm r_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_171(t);
        t = echo_0_0(t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = r_44;
      }
  }
  t = term_b_45;
  t = echo_0_0(t);
  t = term_c_45;
  w_96 = t;
  t = term_f_45;
  x_96 = t;
  t = term_h_45;
  t = p_11(w_96, x_96, t);
  t = reverse_acc_2_0(_id, l_13, t);
  t = map_1_0(m_13, t);
  {
    ATerm i_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_97 = NULL;
        t = a_172(t);
        h_97 = t;
        t = (ATerm) ATinsert(CheckATermList(h_97), term_n_45);
        t = echo_0_0(t);
        LocalPopChoice(l_45);
      }
    else
      {
        t = i_45;
      }
  }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL,n_8 = NULL;
  p_97 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_97);
  n_97 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_97);
  n_8 = t;
  t = SSLsetAnnotations(n_8, n_97);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_97 = NULL;
  k_97 = t;
  {
    ATerm o_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_97 = NULL,m_97 = NULL;
        t = term_l_42;
        l_97 = t;
        t = term_z_43;
        m_97 = t;
        t = term_a_44;
        t = p_11(l_97, m_97, t);
        LocalPopChoice(r_45);
      }
    else
      {
        t = o_45;
        t = fetch_1_0(n_13, t);
      }
  }
  t = k_97;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm r_97 = NULL;
  r_97 = t;
  if(match_string(t, "-k"))
    {
      t = r_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_97;
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
  s_97 = t;
  t = SSL_string_to_int(s_97);
  t_97 = t;
  t = term_s_45;
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_45, t_97);
  t = s_11(u_97, t_97, t);
  t = s_97;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_u_45;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_13, q_13, r_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  if(match_string(t, "-S"))
    {
      t = w_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_97;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL;
  t = term_w_45;
  x_97 = t;
  t = term_b_20;
  y_97 = t;
  t = term_z_45;
  t = s_11(x_97, y_97, t);
  t = term_a_46;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
  z_97 = t;
  t = SSL_string_to_int(z_97);
  a_98 = t;
  t = term_w_45;
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_45, a_98);
  t = s_11(b_98, a_98, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_97);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  t = term_h_46;
  c_98 = t;
  t = term_z_29;
  d_98 = t;
  t = term_i_46;
  t = s_11(c_98, d_98, t);
  t = term_k_46;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_l_46;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_13, u_13, v_13, t);
      LocalPopChoice(q_46);
    }
  else
    {
      t = m_46;
      {
        ATerm s_46 = t;
        int t_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_13, x_13, y_13, t);
            LocalPopChoice(t_46);
          }
        else
          {
            t = s_46;
            t = Option_3_0(z_13, a_14, b_14, t);
          }
      }
    }
  return(t);
}
static ATerm s_11 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL;
  t = term_l_42;
  e_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_42, o_41, p_41);
  t = lookup_table_0_1(e_98, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(o_41, p_41, f_98, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_42, o_41, p_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL;
      t = term_z_29;
      t = g_0(t);
      l_98 = t;
      t = term_c_45;
      m_98 = t;
      t = term_f_45;
      n_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_45, term_f_45, l_98);
      t = q_11(m_98, n_98, l_98, t);
      _fail(t);
    }
  else
    {
      ATerm q_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_98 = ATgetFirst((ATermList) t);
          k_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_98;
      t = d_0(t);
      t = term_z_29;
      t = f_0(t);
      q_98 = t;
      t = (ATerm) ATinsert(CheckATermList(k_98), q_98);
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm s_98 = NULL;
  s_98 = t;
  if(match_string(t, "-o"))
    {
      t = s_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_98;
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  t_98 = t;
  t = term_m_42;
  u_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_42, t_98);
  t = s_11(u_98, t_98, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_98);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_u_46;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_14, d_14, e_14, t);
  return(t);
}
static ATerm q_11 (ATerm w_47, ATerm x_47, ATerm v_47, ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_47 = ATgetArgument(t, 0);
            ATerm b_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
        t = p_11(w_47, x_47, t);
        LocalPopChoice(x_46);
      }
    else
      {
        t = w_46;
        t = (ATerm) ATempty;
      }
  }
  x_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_47, x_47, (ATerm) ATinsert(CheckATermList(x_98), v_47));
  t = lookup_table_0_1(w_47, t);
  a_99 = t;
  t = (ATerm) ATinsert(CheckATermList(x_98), v_47);
  y_98 = t;
  t = a_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(x_47, y_98, z_98, t);
  t = w_98;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
      t = term_z_29;
      t = n_0(t);
      l_99 = t;
      t = term_c_45;
      m_99 = t;
      t = term_f_45;
      n_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_45, term_f_45, l_99);
      t = q_11(m_99, n_99, l_99, t);
      _fail(t);
    }
  else
    {
      ATerm b_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_99 = ATgetFirst((ATermList) t);
          i_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_99 = ATgetFirst((ATermList) t);
          k_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_99;
      t = j_0(t);
      t = j_99;
      t = l_0(t);
      b_100 = t;
      t = (ATerm) ATinsert(CheckATermList(k_99), b_100);
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm d_100 = NULL;
  d_100 = t;
  if(match_string(t, "-i"))
    {
      t = d_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_100;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL;
  e_100 = t;
  t = term_u_43;
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_43, e_100);
  t = s_11(f_100, e_100, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_100);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_c_47;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_14, g_14, h_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_29;
  t = whoami_0_0(t);
  g_100 = t;
  t = term_m_16;
  i_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_47), g_100);
  j_100 = t;
  t = SSL_printnl(i_100, j_100);
  t = term_d_20;
  h_100 = t;
  t = SSL_exit(h_100);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL;
  t = term_l_42;
  k_100 = t;
  t = term_z_43;
  l_100 = t;
  t = term_a_44;
  t = p_11(k_100, l_100, t);
  return(t);
}
static ATerm k_11 (ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_44, o_44);
      LocalPopChoice(h_47);
    }
  else
    {
      t = g_47;
      t = SSL_addr(n_44, o_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_159 (ATerm), ATerm j_159 (ATerm), ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  x_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_100;
      t = i_159(t);
    }
  else
    {
      ATerm c_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_100 = ATgetFirst((ATermList) t);
          z_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_100;
      t = foldr_2_0(i_159, j_159, t);
      c_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_100, c_101);
      t = j_159(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm k_47 = NULL,p_47 = NULL;
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(k_47, p_47, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_101 = NULL,e_47 = NULL,f_47 = NULL;
  t = times_0_0(t);
  f_47 = t;
  t = SSL_explode_term(f_47);
  if(match_cons(t, sym__2))
    {
      ATerm i_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_47;
  t = foldr_2_0(i_14, j_14, t);
  f_101 = t;
  t = SSL_TicksToSeconds(f_101);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
  n_102 = t;
  if(match_cons(t, sym__2))
    {
      o_102 = ATgetArgument(t, 0);
      p_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_102;
        if((o_102 != t))
          {
            _fail(t);
          }
        t = n_102;
        LocalPopChoice(l_47);
      }
    else
      {
        t = j_47;
        t = (ATerm) ATmakeAppl(sym__2, o_102, p_102);
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_102, p_102);
              LocalPopChoice(n_47);
            }
          else
            {
              t = m_47;
              t = SSL_gtr(o_102, p_102);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_102, p_102);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_145 (ATerm), ATerm t)
{
  ATerm t_102 = NULL;
  t_102 = t;
  {
    ATerm o_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL;
        t = term_l_42;
        w_102 = t;
        t = term_w_45;
        x_102 = t;
        t = term_r_47;
        t = p_11(w_102, x_102, t);
        v_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_102, term_d_20);
        t = geq_0_0(t);
        t = t_102;
        t = t_145(t);
        LocalPopChoice(q_47);
      }
    else
      {
        t = o_47;
        t = t_102;
      }
  }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL,q_103 = NULL,r_103 = NULL;
  t = run_time_0_0(t);
  z_102 = t;
  t = term_z_29;
  t = whoami_0_0(t);
  a_103 = t;
  t = term_m_16;
  q_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_47), z_102), term_s_47), a_103);
  r_103 = t;
  t = SSL_printnl(q_103, r_103);
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_47), z_102), term_s_47), a_103));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_103 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_20;
  s_103 = t;
  t = SSL_exit(s_103);
  return(t);
}
static ATerm t_11 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm t_103 = NULL;
  t = SSL_hashtable_put(n_52, l_52, m_52);
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_103);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_49, ATerm t)
{
  ATerm w_105 = NULL;
  t = table_hashtable_0_0(t);
  w_105 = t;
  {
    ATerm u_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL;
        t = w_105;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11(i_49, s_48, t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = u_47;
        {
          ATerm b_49 = NULL;
          t = i_49;
          t = table_create_0_0(t);
          t = w_105;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(i_49, b_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm z_105 = NULL;
  t = SSL_hashtable_create(t_52, u_52);
  z_105 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_105);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,e_106 = NULL,f_106 = NULL;
  a_106 = t;
  t = term_z_47;
  e_106 = t;
  t = term_a_48;
  f_106 = t;
  t = a_106;
  t = new_hashtable_0_2(e_106, f_106, t);
  b_106 = t;
  t = a_106;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(a_106, b_106, c_106, t);
  t = a_106;
  return(t);
}
static ATerm m_11 (ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm g_106 = NULL;
  t = SSL_hashtable_remove(r_52, q_52);
  g_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_106);
  return(t);
}
static ATerm n_11 (ATerm v_52, ATerm t)
{
  ATerm p_106 = NULL;
  t = SSL_hashtable_destroy(v_52);
  p_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_106);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_106 = NULL;
  t = SSL_table_hashtable();
  q_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_106);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL;
  r_106 = t;
  t = table_hashtable_0_0(t);
  s_106 = t;
  t = lookup_table_0_1(r_106, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(u_106, t);
  t = s_106;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(r_106, t_106, t);
  t = r_106;
  return(t);
}
ATerm fetch_1_0 (ATerm g_154 (ATerm), ATerm t)
{
  static ATerm t_110 (ATerm t);
  static ATerm t_110 (ATerm t)
  {
    ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL;
    q_110 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_110 = ATgetFirst((ATermList) t);
        s_110 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_48 = t;
      int e_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_49 = NULL,n_49 = NULL,q_8 = NULL;
          t = SSLgetAnnotations(q_110);
          j_49 = t;
          t = r_110;
          t = g_154(t);
          n_49 = t;
          t = (ATerm) ATinsert(CheckATermList(s_110), n_49);
          q_8 = t;
          t = SSLsetAnnotations(q_8, j_49);
          LocalPopChoice(e_48);
        }
      else
        {
          t = d_48;
          {
            ATerm g_51 = NULL,o_51 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(q_110);
            g_51 = t;
            t = s_110;
            t = t_110(t);
            o_51 = t;
            t = (ATerm) ATinsert(CheckATermList(o_51), r_110);
            r_8 = t;
            t = SSLsetAnnotations(r_8, g_51);
          }
        }
    }
    return(t);
  }
  t = t_110(t);
  return(t);
}
static ATerm u_11 (ATerm o_52, ATerm p_52, ATerm t)
{
  t = SSL_hashtable_get(p_52, o_52);
  return(t);
}
static ATerm p_11 (ATerm p_49, ATerm q_49, ATerm t)
{
  ATerm w_110 = NULL;
  t = lookup_table_0_1(p_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(q_49, w_110, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL;
  t = term_f_48;
  y_110 = t;
  t = term_z_29;
  z_110 = t;
  t = term_g_48;
  t = s_11(y_110, z_110, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_j_48;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL;
  t = term_f_48;
  c_111 = t;
  t = term_z_29;
  d_111 = t;
  t = term_g_48;
  t = s_11(c_111, d_111, t);
  t = term_k_48;
  a_111 = t;
  t = term_z_29;
  b_111 = t;
  t = term_l_48;
  t = s_11(a_111, b_111, t);
  t = term_m_48;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_n_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, n_14, t);
      LocalPopChoice(p_48);
    }
  else
    {
      t = o_48;
      t = Option_3_0(o_14, p_14, q_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_171 (ATerm), ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,n_111 = NULL,o_111 = NULL,w_8 = NULL;
  i_111 = t;
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_48;
        t = u_171(t);
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
      }
  }
  t = i_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_111 = ATgetFirst((ATermList) t);
      l_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_111);
  j_111 = t;
  t = term_z_43;
  o_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_43, k_111);
  t = s_11(o_111, k_111, t);
  t = l_111;
  {
    static ATerm y_111 (ATerm t);
    static ATerm y_111 (ATerm t)
    {
      ATerm u_48 = t;
      int v_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_48 = t;
          int x_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_111 = NULL;
              r_111 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_111;
              LocalPopChoice(x_48);
            }
          else
            {
              t = w_48;
              t = u_171(t);
              t = Cons_2_0(_id, y_111, t);
            }
          LocalPopChoice(v_48);
        }
      else
        {
          t = u_48;
          {
            ATerm u_111 = NULL,v_111 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_111 = ATgetFirst((ATermList) t);
                v_111 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_111), (ATerm) ATmakeAppl(sym_Undefined_1, u_111));
          }
        }
      return(t);
    }
    t = y_111(t);
  }
  n_111 = t;
  t = (ATerm) ATinsert(CheckATermList(n_111), (ATerm) ATmakeAppl(sym_Program_1, k_111));
  w_8 = t;
  t = SSLsetAnnotations(w_8, j_111);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm l_112 = NULL;
  l_112 = t;
  if(match_string(t, "--help"))
    {
      t = l_112;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_112;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_112;
        }
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL;
  t = term_y_48;
  m_112 = t;
  t = term_z_29;
  n_112 = t;
  t = term_z_48;
  t = s_11(m_112, n_112, t);
  t = term_a_49;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_c_49;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_171 (ATerm), ATerm s_171 (ATerm), ATerm t_171 (ATerm), ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  f_112 = t;
  t = term_c_45;
  g_112 = t;
  t = term_d_49;
  t = lookup_table_0_1(g_112, t);
  k_112 = t;
  t = term_f_45;
  h_112 = t;
  t = (ATerm) ATempty;
  i_112 = t;
  t = k_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(h_112, i_112, j_112, t);
  t = f_112;
  {
    static ATerm r_14 (ATerm t);
    static ATerm r_14 (ATerm t)
    {
      ATerm e_49 = t;
      int f_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_171(t);
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
                t = Option_3_0(s_14, t_14, v_14, t);
                LocalPopChoice(h_49);
              }
            else
              {
                t = g_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_14, t);
  }
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_112 = NULL;
        y_112 = t;
        {
          ATerm m_49 = t;
          int o_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_52 = NULL;
              t = y_112;
              {
                ATerm r_49 = t;
                int s_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_52 = NULL,s_52 = NULL;
                    t = term_l_42;
                    f_52 = t;
                    t = term_y_48;
                    s_52 = t;
                    t = term_t_49;
                    t = p_11(f_52, s_52, t);
                    LocalPopChoice(s_49);
                  }
                else
                  {
                    t = r_49;
                    t = fetch_1_0(w_14, t);
                  }
              }
              t = y_112;
              t = s_171(t);
              t = term_b_20;
              e_52 = t;
              t = SSL_exit(e_52);
              LocalPopChoice(o_49);
            }
          else
            {
              t = m_49;
              {
                ATerm c_53 = NULL,f_53 = NULL,g_53 = NULL;
                t = term_l_42;
                f_53 = t;
                t = term_f_48;
                g_53 = t;
                t = term_u_49;
                t = p_11(f_53, g_53, t);
                t = y_112;
                t = t_171(t);
                t = term_b_20;
                c_53 = t;
                t = SSL_exit(c_53);
              }
            }
        }
        LocalPopChoice(l_49);
      }
    else
      {
        t = k_49;
        {
          ATerm v_49 = t;
          int w_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
              static ATerm x_14 (ATerm t);
              static ATerm x_14 (ATerm t)
              {
                ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL,a_9 = NULL;
                e_113 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_113 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_113);
                c_113 = t;
                t = d_113;
                if(((d_112 != NULL) && (d_112 != t)))
                  _fail(t);
                else
                  d_112 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_113);
                a_9 = t;
                t = SSLsetAnnotations(a_9, c_113);
                return(t);
              }
              t = fetch_1_0(x_14, t);
              t = term_m_16;
              a_113 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_112)), term_x_49);
              b_113 = t;
              t = SSL_printnl(a_113, b_113);
              t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_112)), term_x_49));
              t = s_171(t);
              t = term_d_20;
              z_112 = t;
              t = SSL_exit(z_112);
              LocalPopChoice(w_49);
            }
          else
            {
              t = v_49;
            }
        }
      }
  }
  e_112 = t;
  t = term_c_45;
  t = table_destroy_0_0(t);
  t = e_112;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_169 (ATerm), ATerm v_169 (ATerm), ATerm w_169 (ATerm), ATerm x_169 (ATerm), ATerm y_169 (ATerm), ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL;
  t = parse_options_3_0(u_169, v_169, w_169, t);
  j_113 = t;
  t = term_y_49;
  t = table_create_0_0(t);
  t = term_y_49;
  k_113 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_49, term_z_49, j_113);
  t = lookup_table_0_1(k_113, t);
  n_113 = t;
  t = term_z_49;
  l_113 = t;
  t = n_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(l_113, j_113, m_113, t);
  t = j_113;
  t = x_169(t);
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_169(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = a_50;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_50);
    }
  else
    {
      t = c_50;
      {
        ATerm e_50 = t;
        int f_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_50);
          }
        else
          {
            t = e_50;
            {
              ATerm g_50 = t;
              int h_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_15, i_15, j_15, t);
                  LocalPopChoice(h_50);
                }
              else
                {
                  t = g_50;
                  {
                    ATerm i_50 = t;
                    int j_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_50);
                      }
                    else
                      {
                        t = i_50;
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
static ATerm c_15 (ATerm t)
{
  t = input_1_0(k_15, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm p_113 = NULL,q_113 = NULL;
  t = term_r_42;
  p_113 = t;
  t = term_z_29;
  q_113 = t;
  t = term_k_50;
  t = s_11(p_113, q_113, t);
  t = term_l_50;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_m_50;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = output_1_0(l_15, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL,h_9 = NULL,f_9 = NULL;
  b_114 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_114);
  u_113 = t;
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
  t = y_113;
  t = Cons_2_0(m_15, n_15, t);
  z_113 = t;
  t = (ATerm) ATinsert(CheckATermList(z_113), x_113);
  f_9 = t;
  t = SSLsetAnnotations(f_9, w_113);
  a_114 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_114);
  h_9 = t;
  t = SSLsetAnnotations(h_9, u_113);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm n_50 = ATgetArgument(t, 0);
      if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
        {
          s_113 = ATgetFirst((ATermList) n_50);
          {
            ATerm o_50 = (ATerm) ATgetNext((ATermList) n_50);
            if(((ATgetType(o_50) == AT_LIST) && !(ATisEmpty(o_50))))
              {
                ATerm p_50 = ATgetFirst((ATermList) o_50);
                if(match_cons(p_50, sym_Strategies_1))
                  {
                    t_113 = ATgetArgument(p_50, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm q_50 = (ATerm) ATgetNext((ATermList) o_50);
                  if(((ATgetType(q_50) != AT_LIST) || !(ATisEmpty(q_50))))
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
  t = k_9(s_113, t_113, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL,c_9 = NULL;
  f_114 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_114);
  c_114 = t;
  t = d_114;
  t = needed_defs_0_0(t);
  e_114 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_114);
  c_9 = t;
  t = SSLsetAnnotations(c_9, c_114);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(b_15, default_system_usage_0_0, default_system_about_0_0, _id, c_15, t);
  return(t);
}
