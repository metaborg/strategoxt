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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  init_constant_terms();
}
ATerm term_l_41;
ATerm term_y_40;
ATerm term_q_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_t_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_u_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_p_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_t_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_l_15;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_l_11;
ATerm term_v_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_z_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_e_7;
ATerm term_d_7;
void init_constant_terms (void)
{
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Op_2, term_p_18, (ATerm) ATempty);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_t_32);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_32);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_y_35, term_o_25);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_o_25);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_b_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_t_39, term_o_25);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_o_25);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_o_25);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__3, term_a_39, term_b_39, (ATerm) ATempty);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm NoMissingDefs_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm error_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm);
ATerm Let_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind3_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm crush_3_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_111 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Snd_0_0 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm IsVar_0_0 (ATerm);
ATerm tsubs_0_0 (ATerm);
ATerm IsSVar_0_0 (ATerm);
ATerm Look2_0_0 (ATerm);
ATerm Look1_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm alltd_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm JoinDefs1_0_0 (ATerm);
ATerm joindefs_0_0 (ATerm);
ATerm OverloadedDef_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp1_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp1_0_0 (ATerm);
ATerm As_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm);
ATerm Op_2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm MkConstType_0_0 (ATerm);
ATerm MkFunType_0_0 (ATerm);
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm UnZip2_0_0 (ATerm);
ATerm UnZip3_0_0 (ATerm);
ATerm UnZip1_0_0 (ATerm);
ATerm unzip_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_113 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm);
ATerm Con_3_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_103 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm _0_0 (ATerm);
ATerm Ttl_0_0 (ATerm);
ATerm Thd_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm copy_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm Zip1b_p__0_0 (ATerm);
ATerm zipr_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm Last_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm GnUndefined_0_0 (ATerm);
ATerm diff_1_0 (ATerm j_114 (ATerm), ATerm);
ATerm UfShift_0_0 (ATerm);
ATerm Zip3_0_0 (ATerm);
ATerm Zip2_0_0 (ATerm);
ATerm Zip1_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm);
ATerm zip_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm UfIdem_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm);
ATerm GnExit_0_0 (ATerm);
ATerm GnInitRoots_0_0 (ATerm);
ATerm while_not_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm);
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm q_129 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm s_129 (ATerm), ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm sort_defs_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm);
ATerm union_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm);
ATerm definition_names_0_0 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm a_85 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm f_85 (ATerm), ATerm);
ATerm _2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_121 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_124 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_121 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm);
ATerm crush_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_123 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_125 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm y_127 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm x_127 (ATerm), ATerm);
ATerm Program_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_126 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_128 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_128 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm z_127 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_125 (ATerm), ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm k_6 (ATerm t)
  {
    ATerm e_4 = NULL,f_5 = NULL,h_5 = NULL;
    t = not_null(d_4);
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    t = not_null(d_4);
    {
      ATerm c_7;
      c_7 = t;
      {
        ATerm g_5 = NULL;
        ATerm l_6 (ATerm t)
        {
          t = not_null(g_5);
          if(((f_5 != NULL) && (f_5 != t)))
            _fail(t);
          else
            f_5 = t;
          t = not_null(g_5);
          return(t);
        }
        t = SSLgetAnnotations(not_null(e_4));
        if(((g_5 != NULL) && (g_5 != t)))
          _fail(t);
        else
          g_5 = t;
        t = l_6(t);
      }
      t = c_7;
      {
        ATerm j_6 = NULL;
        ATerm z_6 (ATerm t)
        {
          t = not_null(j_6);
          if(((h_5 != NULL) && (h_5 != t)))
            _fail(t);
          else
            h_5 = t;
          t = not_null(j_6);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
        if(((j_6 != NULL) && (j_6 != t)))
          _fail(t);
        else
          j_6 = t;
        t = z_6(t);
        t = not_null(h_5);
      }
    }
    return(t);
  }
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = not_null(d_4);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  ATerm k_7 (ATerm t)
  {
    ATerm i_7 = NULL,j_7 = NULL;
    t = not_null(g_7);
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = not_null(h_7);
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(j_7)), term_e_7), not_null(i_7)), term_d_7);
    t = error_0_0(t);
    return(t);
  }
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  t = not_null(f_7);
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
      t = k_7(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  ATerm w_7 (ATerm t)
  {
    ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t = not_null(q_7);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(r_7);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(s_7);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(v_7)), term_e_7), not_null(u_7)), term_m_7), not_null(t_7)), term_d_7);
    t = error_0_0(t);
    return(t);
  }
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(o_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t = not_null(p_7);
      if(match_cons(t, sym_Mod_2))
        {
          q_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
          t = w_7(t);
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
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  ATerm i_8 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
    t = not_null(b_8);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    t = not_null(d_8);
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = not_null(e_8);
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(a_8);
    t = (ATerm) ATinsert(CheckATermList(not_null(h_8)), not_null(g_8));
    {
      ATerm l_0 (ATerm t)
      {
        ATerm n_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MissingDefMod_0_0(t);
            ;
            LocalPopChoice(x_7);
          }
        else
          {
            t = n_7;
            t = MissingDef_0_0(t);
          }
        return(t);
      }
      t = map_1_0(l_0, t);
    }
    t = not_null(f_8);
    return(t);
  }
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = not_null(a_8);
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      t = not_null(c_8);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_8 = ATgetFirst((ATermList) t);
          e_8 = (ATerm) ATgetNext((ATermList) t);
          t = i_8(t);
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
ATerm NoMissingDefs_0_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  ATerm q_8 (ATerm t)
  {
    ATerm p_8 = NULL;
    t = not_null(n_8);
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    t = not_null(p_8);
    return(t);
  }
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = not_null(m_8);
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      t = not_null(o_8);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_8(t);
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
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm y_7;
  y_7 = t;
  t = error_0_0(t);
  t = term_z_7;
  t = exit_0_0(t);
  t = y_7;
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_8);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm k_8;
  k_8 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    ATerm u_8 (ATerm t)
    {
      t = not_null(t_8);
      if(((s_8 != NULL) && (s_8 != t)))
        _fail(t);
      else
        s_8 = t;
      t = not_null(t_8);
      return(t);
    }
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    t = u_8(t);
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(s_8));
    t = printnl_0_0(t);
  }
  t = k_8;
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  ATerm h_10 (ATerm t)
  {
    ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
    ATerm j_10 (ATerm t)
    {
      t = not_null(r_9);
      {
        ATerm r_8 = t;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
              if(((w_9 != NULL) && (w_9 != t)))
                _fail(t);
              else
                w_9 = t;
              t = not_null(w_9);
              if(match_cons(t, sym__2))
                {
                  x_9 = ATgetArgument(t, 0);
                  y_9 = ATgetArgument(t, 1);
                  t = not_null(x_9);
                  if(match_int(t, 0))
                    {
                      t = not_null(y_9);
                      if(match_int(t, 0))
                        {
                          t = not_null(w_9);
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
            t = fetch_1_0(m_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_8;
          }
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_9)), term_v_8);
        t = error_0_0(t);
        t = giving_up_0_0(t);
      }
      return(t);
    }
    t = not_null(m_9);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = not_null(q_9);
    t = Arities_0_0(t);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(r_9);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_9 = ATgetFirst((ATermList) t);
        t_9 = (ATerm) ATgetNext((ATermList) t);
        t = not_null(t_9);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_9 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
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
  ATerm i_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
    t = not_null(m_9);
    if(((z_9 != NULL) && (z_9 != t)))
      _fail(t);
    else
      z_9 = t;
    t = not_null(l_9);
    {
      ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
      ATerm k_10 (ATerm t)
      {
        t = not_null(e_10);
        if(((a_10 != NULL) && (a_10 != t)))
          _fail(t);
        else
          a_10 = t;
        t = not_null(f_10);
        if(((b_10 != NULL) && (b_10 != t)))
          _fail(t);
        else
          b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
        t = Definitions_0_0(t);
        return(t);
      }
      t = not_null(z_9);
      t = Arities_0_0(t);
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
              t = not_null(g_10);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = k_10(t);
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
    }
    return(t);
  }
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = not_null(l_9);
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      t = not_null(n_9);
      if(match_cons(t, sym__2))
        {
          o_9 = ATgetArgument(t, 0);
          p_9 = ATgetArgument(t, 1);
          t = not_null(o_9);
          if(match_int(t, 0))
            {
              t = not_null(p_9);
              if(match_int(t, 0))
                {
                  ATerm w_8 = t;
                  int x_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_10(t);
                      ;
                      LocalPopChoice(x_8);
                    }
                  else
                    {
                      t = w_8;
                      t = i_10(t);
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
ATerm Rec_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  ATerm f_11 (ATerm t)
  {
    ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL;
    ATerm h_11 (ATerm t)
    {
      ATerm a_11 = NULL,b_11 = NULL;
      ATerm i_11 (ATerm t)
      {
        ATerm c_11 = NULL,d_11 = NULL;
        t = not_null(b_11);
        if(((c_11 != NULL) && (c_11 != t)))
          _fail(t);
        else
          c_11 = t;
        t = not_null(b_11);
        {
          ATerm e_11 = NULL;
          ATerm j_11 (ATerm t)
          {
            t = not_null(e_11);
            if(((d_11 != NULL) && (d_11 != t)))
              _fail(t);
            else
              d_11 = t;
            t = not_null(e_11);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(a_11), not_null(c_11)), not_null(x_10));
          if(((e_11 != NULL) && (e_11 != t)))
            _fail(t);
          else
            e_11 = t;
          t = j_11(t);
          t = not_null(d_11);
        }
        return(t);
      }
      t = not_null(z_10);
      if(((a_11 != NULL) && (a_11 != t)))
        _fail(t);
      else
        a_11 = t;
      t = not_null(w_10);
      t = h_90(t);
      if(((b_11 != NULL) && (b_11 != t)))
        _fail(t);
      else
        b_11 = t;
      t = i_11(t);
      return(t);
    }
    t = not_null(r_10);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = not_null(s_10);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = not_null(t_10);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    t = not_null(r_10);
    {
      ATerm y_10 = NULL;
      ATerm g_11 (ATerm t)
      {
        t = not_null(y_10);
        if(((x_10 != NULL) && (x_10 != t)))
          _fail(t);
        else
          x_10 = t;
        t = not_null(y_10);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_10));
      if(((y_10 != NULL) && (y_10 != t)))
        _fail(t);
      else
        y_10 = t;
      t = g_11(t);
      t = not_null(v_10);
      t = g_90(t);
      if(((z_10 != NULL) && (z_10 != t)))
        _fail(t);
      else
        z_10 = t;
      t = h_11(t);
    }
    return(t);
  }
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = not_null(r_10);
  if(match_cons(t, sym_Rec_2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      t = f_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  ATerm o_12 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,e_12 = NULL;
    ATerm q_12 (ATerm t)
    {
      ATerm f_12 = NULL,g_12 = NULL;
      ATerm r_12 (ATerm t)
      {
        ATerm h_12 = NULL,i_12 = NULL;
        ATerm s_12 (ATerm t)
        {
          ATerm j_12 = NULL,k_12 = NULL;
          ATerm t_12 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL;
            t = not_null(k_12);
            if(((l_12 != NULL) && (l_12 != t)))
              _fail(t);
            else
              l_12 = t;
            t = not_null(k_12);
            {
              ATerm n_12 = NULL;
              ATerm u_12 (ATerm t)
              {
                t = not_null(n_12);
                if(((m_12 != NULL) && (m_12 != t)))
                  _fail(t);
                else
                  m_12 = t;
                t = not_null(n_12);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(f_12), not_null(h_12), not_null(j_12), not_null(l_12)), not_null(c_12));
              if(((n_12 != NULL) && (n_12 != t)))
                _fail(t);
              else
                n_12 = t;
              t = u_12(t);
              t = not_null(m_12);
            }
            return(t);
          }
          t = not_null(i_12);
          if(((j_12 != NULL) && (j_12 != t)))
            _fail(t);
          else
            j_12 = t;
          t = not_null(b_12);
          t = e_92(t);
          if(((k_12 != NULL) && (k_12 != t)))
            _fail(t);
          else
            k_12 = t;
          t = t_12(t);
          return(t);
        }
        t = not_null(g_12);
        if(((h_12 != NULL) && (h_12 != t)))
          _fail(t);
        else
          h_12 = t;
        t = not_null(a_12);
        t = d_92(t);
        if(((i_12 != NULL) && (i_12 != t)))
          _fail(t);
        else
          i_12 = t;
        t = s_12(t);
        return(t);
      }
      t = not_null(e_12);
      if(((f_12 != NULL) && (f_12 != t)))
        _fail(t);
      else
        f_12 = t;
      t = not_null(z_11);
      t = c_92(t);
      if(((g_12 != NULL) && (g_12 != t)))
        _fail(t);
      else
        g_12 = t;
      t = r_12(t);
      return(t);
    }
    t = not_null(s_11);
    if(((x_11 != NULL) && (x_11 != t)))
      _fail(t);
    else
      x_11 = t;
    t = not_null(t_11);
    if(((y_11 != NULL) && (y_11 != t)))
      _fail(t);
    else
      y_11 = t;
    t = not_null(u_11);
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = not_null(v_11);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = not_null(w_11);
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = not_null(s_11);
    {
      ATerm d_12 = NULL;
      ATerm p_12 (ATerm t)
      {
        t = not_null(d_12);
        if(((c_12 != NULL) && (c_12 != t)))
          _fail(t);
        else
          c_12 = t;
        t = not_null(d_12);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_11));
      if(((d_12 != NULL) && (d_12 != t)))
        _fail(t);
      else
        d_12 = t;
      t = p_12(t);
      t = not_null(y_11);
      t = b_92(t);
      if(((e_12 != NULL) && (e_12 != t)))
        _fail(t);
      else
        e_12 = t;
      t = q_12(t);
    }
    return(t);
  }
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = not_null(s_11);
  if(match_cons(t, sym_SDefT_4))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
      v_11 = ATgetArgument(t, 2);
      w_11 = ATgetArgument(t, 3);
      t = o_12(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  ATerm u_13 (ATerm t)
  {
    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL;
    ATerm w_13 (ATerm t)
    {
      ATerm n_13 = NULL,o_13 = NULL;
      ATerm x_13 (ATerm t)
      {
        ATerm p_13 = NULL,q_13 = NULL;
        ATerm y_13 (ATerm t)
        {
          ATerm r_13 = NULL,s_13 = NULL;
          t = not_null(q_13);
          if(((r_13 != NULL) && (r_13 != t)))
            _fail(t);
          else
            r_13 = t;
          t = not_null(q_13);
          {
            ATerm t_13 = NULL;
            ATerm z_13 (ATerm t)
            {
              t = not_null(t_13);
              if(((s_13 != NULL) && (s_13 != t)))
                _fail(t);
              else
                s_13 = t;
              t = not_null(t_13);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_13), not_null(p_13), not_null(r_13)), not_null(k_13));
            if(((t_13 != NULL) && (t_13 != t)))
              _fail(t);
            else
              t_13 = t;
            t = z_13(t);
            t = not_null(s_13);
          }
          return(t);
        }
        t = not_null(o_13);
        if(((p_13 != NULL) && (p_13 != t)))
          _fail(t);
        else
          p_13 = t;
        t = not_null(j_13);
        t = a_92(t);
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        t = y_13(t);
        return(t);
      }
      t = not_null(m_13);
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = not_null(i_13);
      t = z_91(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = x_13(t);
      return(t);
    }
    t = not_null(c_13);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = not_null(d_13);
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    t = not_null(e_13);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(f_13);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = not_null(c_13);
    {
      ATerm l_13 = NULL;
      ATerm v_13 (ATerm t)
      {
        t = not_null(l_13);
        if(((k_13 != NULL) && (k_13 != t)))
          _fail(t);
        else
          k_13 = t;
        t = not_null(l_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_13));
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = v_13(t);
      t = not_null(h_13);
      t = y_91(t);
      if(((m_13 != NULL) && (m_13 != t)))
        _fail(t);
      else
        m_13 = t;
      t = w_13(t);
    }
    return(t);
  }
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = not_null(c_13);
  if(match_cons(t, sym_SDef_3))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      f_13 = ATgetArgument(t, 2);
      t = u_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  ATerm u_14 (ATerm t)
  {
    ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,o_14 = NULL;
    ATerm w_14 (ATerm t)
    {
      ATerm p_14 = NULL,q_14 = NULL;
      ATerm x_14 (ATerm t)
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = not_null(q_14);
        if(((r_14 != NULL) && (r_14 != t)))
          _fail(t);
        else
          r_14 = t;
        t = not_null(q_14);
        {
          ATerm t_14 = NULL;
          ATerm y_14 (ATerm t)
          {
            t = not_null(t_14);
            if(((s_14 != NULL) && (s_14 != t)))
              _fail(t);
            else
              s_14 = t;
            t = not_null(t_14);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_14), not_null(r_14)), not_null(m_14));
          if(((t_14 != NULL) && (t_14 != t)))
            _fail(t);
          else
            t_14 = t;
          t = y_14(t);
          t = not_null(s_14);
        }
        return(t);
      }
      t = not_null(o_14);
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = not_null(l_14);
      t = k_89(t);
      if(((q_14 != NULL) && (q_14 != t)))
        _fail(t);
      else
        q_14 = t;
      t = x_14(t);
      return(t);
    }
    t = not_null(g_14);
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
    t = not_null(h_14);
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = not_null(i_14);
    if(((l_14 != NULL) && (l_14 != t)))
      _fail(t);
    else
      l_14 = t;
    t = not_null(g_14);
    {
      ATerm n_14 = NULL;
      ATerm v_14 (ATerm t)
      {
        t = not_null(n_14);
        if(((m_14 != NULL) && (m_14 != t)))
          _fail(t);
        else
          m_14 = t;
        t = not_null(n_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_14));
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      t = v_14(t);
      t = not_null(k_14);
      t = j_89(t);
      if(((o_14 != NULL) && (o_14 != t)))
        _fail(t);
      else
        o_14 = t;
      t = w_14(t);
    }
    return(t);
  }
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = not_null(g_14);
  if(match_cons(t, sym_Let_2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      t = u_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(j_102, j_102, t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(l_102, l_102, j_102, t);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(l_102, l_102, l_102, j_102, t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  t = Rec_2_0(l_102, j_102, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  ATerm k_15 (ATerm t)
  {
    ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
    t = not_null(c_15);
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = not_null(d_15);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(e_15);
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    t = not_null(f_15);
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = not_null(j_15);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(b_15);
  if(match_cons(t, sym_RDefT_4))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
      f_15 = ATgetArgument(t, 3);
      t = k_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  ATerm w_15 (ATerm t)
  {
    ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
    t = not_null(o_15);
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = not_null(p_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = not_null(q_15);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = not_null(r_15);
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = not_null(v_15);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  t = not_null(n_15);
  if(match_cons(t, sym_SDefT_4))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
      r_15 = ATgetArgument(t, 3);
      t = w_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  ATerm e_16 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    t = not_null(a_16);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = not_null(b_16);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = (ATerm) ATinsert(ATempty, not_null(d_16));
    return(t);
  }
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = not_null(z_15);
  if(match_cons(t, sym_Rec_2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      t = e_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
    ATerm n_16 (ATerm t)
    {
      ATerm l_16 = NULL;
      t = not_null(k_16);
      if(((l_16 != NULL) && (l_16 != t)))
        _fail(t);
      else
        l_16 = t;
      t = not_null(l_16);
      return(t);
    }
    ATerm o_16 (ATerm t)
    {
      ATerm m_16 = NULL;
      t = not_null(k_16);
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = not_null(m_16);
      return(t);
    }
    if(((j_16 != NULL) && (j_16 != t)))
      _fail(t);
    else
      j_16 = t;
    t = not_null(j_16);
    if(match_cons(t, sym_VarDec_2))
      {
        k_16 = ATgetArgument(t, 0);
        i_16 = ATgetArgument(t, 1);
        t = n_16(t);
      }
    else
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            k_16 = ATgetArgument(t, 0);
            t = o_16(t);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1_0(o_0, t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  ATerm y_16 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(s_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = not_null(t_16);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    t = not_null(u_16);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    t = not_null(x_16);
    t = declared_vars_0_0(t);
    return(t);
  }
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  t = not_null(r_16);
  if(match_cons(t, sym_SDef_3))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      u_16 = ATgetArgument(t, 2);
      t = y_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm q_17 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL;
    t = not_null(f_17);
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    t = not_null(g_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(i_17);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
        ATerm r_17 (ATerm t)
        {
          ATerm o_17 = NULL;
          t = not_null(k_17);
          if(((o_17 != NULL) && (o_17 != t)))
            _fail(t);
          else
            o_17 = t;
          t = not_null(o_17);
          return(t);
        }
        ATerm s_17 (ATerm t)
        {
          ATerm p_17 = NULL;
          t = not_null(k_17);
          if(((p_17 != NULL) && (p_17 != t)))
            _fail(t);
          else
            p_17 = t;
          t = not_null(p_17);
          return(t);
        }
        if(((j_17 != NULL) && (j_17 != t)))
          _fail(t);
        else
          j_17 = t;
        t = not_null(j_17);
        if(match_cons(t, sym_SDef_3))
          {
            k_17 = ATgetArgument(t, 0);
            l_17 = ATgetArgument(t, 1);
            m_17 = ATgetArgument(t, 2);
            t = r_17(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_17 = ATgetArgument(t, 0);
                l_17 = ATgetArgument(t, 1);
                m_17 = ATgetArgument(t, 2);
                n_17 = ATgetArgument(t, 3);
                t = s_17(t);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      t = map_1_0(r_0, t);
    }
    return(t);
  }
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  t = not_null(e_17);
  if(match_cons(t, sym_Let_2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      t = q_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t)
{
  ATerm x_17 = NULL;
  ATerm f_18 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL;
    t = not_null(x_17);
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    t = not_null(x_17);
    {
      ATerm a_18 = NULL;
      ATerm g_18 (ATerm t)
      {
        ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
        ATerm h_18 (ATerm t)
        {
          t = not_null(e_18);
          if(((z_17 != NULL) && (z_17 != t)))
            _fail(t);
          else
            z_17 = t;
          t = not_null(c_18);
          return(t);
        }
        t = not_null(a_18);
        if(((b_18 != NULL) && (b_18 != t)))
          _fail(t);
        else
          b_18 = t;
        t = not_null(a_18);
        t = SSL_explode_term(not_null(b_18));
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = not_null(c_18);
        if(match_cons(t, sym__2))
          {
            d_18 = ATgetArgument(t, 0);
            e_18 = ATgetArgument(t, 1);
            t = h_18(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(y_17);
      if(((a_18 != NULL) && (a_18 != t)))
        _fail(t);
      else
        a_18 = t;
      t = g_18(t);
      t = not_null(z_17);
      t = foldr_3_0(a_115, b_115, c_115, t);
    }
    return(t);
  }
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = f_18(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm o_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_111 (ATerm), ATerm t)
{
  ATerm l_18 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_111(t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL;
          ATerm i_9;
          i_9 = t;
          {
            ATerm k_18 = NULL;
            ATerm m_18 (ATerm t)
            {
              t = not_null(k_18);
              if(((j_18 != NULL) && (j_18 != t)))
                _fail(t);
              else
                j_18 = t;
              t = not_null(k_18);
              return(t);
            }
            t = n_111(t);
            if(((k_18 != NULL) && (k_18 != t)))
              _fail(t);
            else
              k_18 = t;
            t = m_18(t);
          }
          t = i_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(j_18);
                return(t);
              }
              t = split_2_0(l_18, w_0, t);
              t = diff_1_0(p_111, t);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = o_111(u_0, l_18, v_0, t);
            {
              ATerm x_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3_0(x_0, union_0_0, _id, t);
            }
          }
          ;
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(y_0, union_0_0, l_18, t);
          }
        }
      return(t);
    }
    t = split_2_0(s_0, t_0, t);
    t = union_0_0(t);
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
    ATerm n_19 (ATerm t)
    {
      ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,f_19 = NULL;
      t = not_null(x_18);
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      t = not_null(y_18);
      if(((b_19 != NULL) && (b_19 != t)))
        _fail(t);
      else
        b_19 = t;
      t = not_null(z_18);
      if(((c_19 != NULL) && (c_19 != t)))
        _fail(t);
      else
        c_19 = t;
      t = not_null(v_18);
      {
        ATerm j_9;
        j_9 = t;
        {
          ATerm e_19 = NULL;
          ATerm o_19 (ATerm t)
          {
            t = not_null(e_19);
            if(((d_19 != NULL) && (d_19 != t)))
              _fail(t);
            else
              d_19 = t;
            t = not_null(e_19);
            return(t);
          }
          t = not_null(b_19);
          t = length_0_0(t);
          if(((e_19 != NULL) && (e_19 != t)))
            _fail(t);
          else
            e_19 = t;
          t = o_19(t);
        }
        t = j_9;
        {
          ATerm g_19 = NULL;
          ATerm p_19 (ATerm t)
          {
            t = not_null(g_19);
            if(((f_19 != NULL) && (f_19 != t)))
              _fail(t);
            else
              f_19 = t;
            t = not_null(g_19);
            return(t);
          }
          t = not_null(c_19);
          t = length_0_0(t);
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = p_19(t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(a_19), (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19))));
        }
      }
      return(t);
    }
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(v_18);
    if(match_cons(t, sym_CallT_3))
      {
        w_18 = ATgetArgument(t, 0);
        y_18 = ATgetArgument(t, 1);
        z_18 = ATgetArgument(t, 2);
        t = not_null(w_18);
        if(match_cons(t, sym_SVar_1))
          {
            x_18 = ATgetArgument(t, 0);
            t = n_19(t);
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
  ATerm a_1 (ATerm t)
  {
    ATerm k_9 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_9;
        {
          ATerm m_10 = t;
          int n_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(n_10);
            }
          else
            {
              t = m_10;
              {
                ATerm o_10 = t;
                int p_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0_0(t);
                    ;
                    LocalPopChoice(p_10);
                  }
                else
                  {
                    t = o_10;
                    {
                      ATerm q_10 = t;
                      int k_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(k_11);
                        }
                      else
                        {
                          t = q_10;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
    ATerm q_19 (ATerm t)
    {
      ATerm m_19 = NULL;
      t = not_null(j_19);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = not_null(l_19);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = not_null(h_19);
      return(t);
    }
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    t = not_null(h_19);
    if(match_cons(t, sym__2))
      {
        i_19 = ATgetArgument(t, 0);
        l_19 = ATgetArgument(t, 1);
        t = not_null(i_19);
        if(match_cons(t, sym__2))
          {
            j_19 = ATgetArgument(t, 0);
            k_19 = ATgetArgument(t, 1);
            t = q_19(t);
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
  t = free_vars2_4_0(z_0, a_1, sboundin_3_0, b_1, t);
  return(t);
}
ATerm Snd_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm m_20 (ATerm t)
  {
    ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
    t = not_null(y_19);
    if(((z_19 != NULL) && (z_19 != t)))
      _fail(t);
    else
      z_19 = t;
    t = not_null(y_19);
    {
      ATerm d_20 = NULL;
      ATerm n_20 (ATerm t)
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
        ATerm o_20 (ATerm t)
        {
          t = not_null(i_20);
          if(((a_20 != NULL) && (a_20 != t)))
            _fail(t);
          else
            a_20 = t;
          t = not_null(k_20);
          if(((c_20 != NULL) && (c_20 != t)))
            _fail(t);
          else
            c_20 = t;
          t = not_null(l_20);
          if(((b_20 != NULL) && (b_20 != t)))
            _fail(t);
          else
            b_20 = t;
          t = not_null(f_20);
          return(t);
        }
        t = not_null(d_20);
        if(((e_20 != NULL) && (e_20 != t)))
          _fail(t);
        else
          e_20 = t;
        t = not_null(d_20);
        t = SSL_explode_term(not_null(e_20));
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        t = not_null(f_20);
        if(match_cons(t, sym__2))
          {
            g_20 = ATgetArgument(t, 0);
            h_20 = ATgetArgument(t, 1);
            t = not_null(g_20);
            if(match_string(t, ""))
              {
                t = not_null(h_20);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_20 = ATgetFirst((ATermList) t);
                    j_20 = (ATerm) ATgetNext((ATermList) t);
                    t = not_null(j_20);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        k_20 = ATgetFirst((ATermList) t);
                        l_20 = (ATerm) ATgetNext((ATermList) t);
                        t = o_20(t);
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
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(z_19);
      if(((d_20 != NULL) && (d_20 != t)))
        _fail(t);
      else
        d_20 = t;
      t = n_20(t);
      t = not_null(c_20);
    }
    return(t);
  }
  if(((y_19 != NULL) && (y_19 != t)))
    _fail(t);
  else
    y_19 = t;
  t = m_20(t);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_20 = NULL,t_20 = NULL;
    ATerm m_11;
    m_11 = t;
    {
      ATerm s_20 = NULL;
      ATerm v_20 (ATerm t)
      {
        t = not_null(s_20);
        if(((r_20 != NULL) && (r_20 != t)))
          _fail(t);
        else
          r_20 = t;
        t = not_null(s_20);
        return(t);
      }
      t = Fst_0_0(t);
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      t = v_20(t);
    }
    t = m_11;
    {
      ATerm u_20 = NULL;
      ATerm w_20 (ATerm t)
      {
        t = not_null(u_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(u_20);
        return(t);
      }
      t = Snd_0_0(t);
      if(((u_20 != NULL) && (u_20 != t)))
        _fail(t);
      else
        u_20 = t;
      t = w_20(t);
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_20), not_null(t_20));
    }
    return(t);
  }
  t = foldr_2_0(c_1, d_1, t);
  return(t);
}
ATerm IsVar_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  ATerm c_21 (ATerm t)
  {
    ATerm b_21 = NULL;
    t = not_null(a_21);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = not_null(b_21);
    return(t);
  }
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = not_null(z_20);
  if(match_cons(t, sym_Var_1))
    {
      a_21 = ATgetArgument(t, 0);
      t = c_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tsubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsVar_0_0, t);
  return(t);
}
ATerm IsSVar_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  ATerm s_21 (ATerm t)
  {
    ATerm q_21 = NULL;
    t = not_null(o_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(q_21);
    return(t);
  }
  ATerm t_21 (ATerm t)
  {
    ATerm r_21 = NULL;
    t = not_null(o_21);
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(r_21);
    return(t);
  }
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = not_null(m_21);
  if(match_cons(t, sym_CallT_3))
    {
      n_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
      l_21 = ATgetArgument(t, 2);
      t = not_null(n_21);
      if(match_cons(t, sym_SVar_1))
        {
          o_21 = ATgetArgument(t, 0);
          t = not_null(p_21);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = not_null(l_21);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = s_21(t);
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
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          n_21 = ATgetArgument(t, 0);
          p_21 = ATgetArgument(t, 1);
          t = not_null(n_21);
          if(match_cons(t, sym_SVar_1))
            {
              o_21 = ATgetArgument(t, 0);
              t = not_null(p_21);
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_21(t);
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
    }
  return(t);
}
ATerm Look2_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  ATerm e_22 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL;
    t = not_null(y_21);
    if(((c_22 != NULL) && (c_22 != t)))
      _fail(t);
    else
      c_22 = t;
    t = not_null(b_22);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
    return(t);
  }
  if(((x_21 != NULL) && (x_21 != t)))
    _fail(t);
  else
    x_21 = t;
  t = not_null(x_21);
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
      t = not_null(z_21);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
          t = e_22(t);
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
ATerm Look1_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  ATerm s_22 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL;
    t = not_null(k_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = not_null(n_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = not_null(o_22);
    if(((r_22 != NULL) && (r_22 != t)))
      _fail(t);
    else
      r_22 = t;
    t = not_null(r_22);
    return(t);
  }
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = not_null(j_22);
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
      t = not_null(l_22);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_22);
          if(match_cons(t, sym__2))
            {
              n_22 = ATgetArgument(t, 0);
              o_22 = ATgetArgument(t, 1);
              t = s_22(t);
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
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = Look2_0_0(t);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm x_22 = NULL;
  ATerm d_23 (ATerm t)
  {
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    t = not_null(x_22);
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = not_null(x_22);
    {
      ATerm b_23 = NULL;
      ATerm e_23 (ATerm t)
      {
        ATerm c_23 = NULL;
        ATerm f_23 (ATerm t)
        {
          t = not_null(c_23);
          if(((a_23 != NULL) && (a_23 != t)))
            _fail(t);
          else
            a_23 = t;
          t = not_null(c_23);
          return(t);
        }
        t = not_null(b_23);
        if(((z_22 != NULL) && (z_22 != t)))
          _fail(t);
        else
          z_22 = t;
        t = not_null(b_23);
        t = d_103(t);
        if(((c_23 != NULL) && (c_23 != t)))
          _fail(t);
        else
          c_23 = t;
        t = f_23(t);
        return(t);
      }
      t = not_null(y_22);
      t = c_103(t);
      if(((b_23 != NULL) && (b_23 != t)))
        _fail(t);
      else
        b_23 = t;
      t = e_23(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
      t = lookup_0_0(t);
    }
    return(t);
  }
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = d_23(t);
  return(t);
}
ATerm alltd_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_104(t);
        ;
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = SRTS_all(g_23, t);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  ATerm y_23 (ATerm t)
  {
    ATerm p_23 = NULL,q_23 = NULL;
    t = not_null(m_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(n_23);
    if(((q_23 != NULL) && (q_23 != t)))
      _fail(t);
    else
      q_23 = t;
    t = not_null(l_23);
    return(t);
  }
  ATerm z_23 (ATerm t)
  {
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
    t = not_null(m_23);
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = not_null(n_23);
    if(((u_23 != NULL) && (u_23 != t)))
      _fail(t);
    else
      u_23 = t;
    t = not_null(o_23);
    if(((v_23 != NULL) && (v_23 != t)))
      _fail(t);
    else
      v_23 = t;
    t = not_null(l_23);
    {
      ATerm x_23 = NULL;
      ATerm a_24 (ATerm t)
      {
        t = not_null(x_23);
        if(((w_23 != NULL) && (w_23 != t)))
          _fail(t);
        else
          w_23 = t;
        t = not_null(x_23);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(u_23));
      t = zip_1_0(_id, t);
      if(((x_23 != NULL) && (x_23 != t)))
        _fail(t);
      else
        x_23 = t;
      t = a_24(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(v_23));
    }
    return(t);
  }
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(l_23);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      t = y_23(t);
    }
  else
    {
      if(match_cons(t, sym__3))
        {
          m_23 = ATgetArgument(t, 0);
          n_23 = ATgetArgument(t, 1);
          o_23 = ATgetArgument(t, 2);
          t = z_23(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  ATerm i_24 (ATerm t)
  {
    ATerm g_24 = NULL,h_24 = NULL;
    t = not_null(e_24);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(f_24);
    if(((g_24 != NULL) && (g_24 != t)))
      _fail(t);
    else
      g_24 = t;
    t = not_null(g_24);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = not_null(h_24);
          return(t);
        }
        t = SubsVar_2_0(n_102, f_1, t);
        t = o_102(t);
        return(t);
      }
      t = alltd_1_0(e_1, t);
    }
    return(t);
  }
  t = subs_args_0_0(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(d_24);
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
      t = i_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm substitute_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  t = substitute_2_0(p_102, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  t = substitute_1_0(IsSVar_0_0, t);
  return(t);
}
ATerm VarDec_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  ATerm d_25 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,x_24 = NULL;
    ATerm f_25 (ATerm t)
    {
      ATerm y_24 = NULL,z_24 = NULL;
      ATerm g_25 (ATerm t)
      {
        ATerm a_25 = NULL,b_25 = NULL;
        t = not_null(z_24);
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = not_null(z_24);
        {
          ATerm c_25 = NULL;
          ATerm h_25 (ATerm t)
          {
            t = not_null(c_25);
            if(((b_25 != NULL) && (b_25 != t)))
              _fail(t);
            else
              b_25 = t;
            t = not_null(c_25);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_24), not_null(a_25)), not_null(v_24));
          if(((c_25 != NULL) && (c_25 != t)))
            _fail(t);
          else
            c_25 = t;
          t = h_25(t);
          t = not_null(b_25);
        }
        return(t);
      }
      t = not_null(x_24);
      if(((y_24 != NULL) && (y_24 != t)))
        _fail(t);
      else
        y_24 = t;
      t = not_null(u_24);
      t = v_91(t);
      if(((z_24 != NULL) && (z_24 != t)))
        _fail(t);
      else
        z_24 = t;
      t = g_25(t);
      return(t);
    }
    t = not_null(p_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(q_24);
    if(((t_24 != NULL) && (t_24 != t)))
      _fail(t);
    else
      t_24 = t;
    t = not_null(r_24);
    if(((u_24 != NULL) && (u_24 != t)))
      _fail(t);
    else
      u_24 = t;
    t = not_null(p_24);
    {
      ATerm w_24 = NULL;
      ATerm e_25 (ATerm t)
      {
        t = not_null(w_24);
        if(((v_24 != NULL) && (v_24 != t)))
          _fail(t);
        else
          v_24 = t;
        t = not_null(w_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_24));
      if(((w_24 != NULL) && (w_24 != t)))
        _fail(t);
      else
        w_24 = t;
      t = e_25(t);
      t = not_null(t_24);
      t = u_91(t);
      if(((x_24 != NULL) && (x_24 != t)))
        _fail(t);
      else
        x_24 = t;
      t = f_25(t);
    }
    return(t);
  }
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  t = not_null(p_24);
  if(match_cons(t, sym_VarDec_2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      t = d_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  ATerm i_28 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,g_28 = NULL;
    t = not_null(e_26);
    if(((l_26 != NULL) && (l_26 != t)))
      _fail(t);
    else
      l_26 = t;
    t = not_null(g_26);
    if(((m_26 != NULL) && (m_26 != t)))
      _fail(t);
    else
      m_26 = t;
    t = not_null(h_26);
    if(((n_26 != NULL) && (n_26 != t)))
      _fail(t);
    else
      n_26 = t;
    t = not_null(i_26);
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(j_26);
    if(((p_26 != NULL) && (p_26 != t)))
      _fail(t);
    else
      p_26 = t;
    t = not_null(e_26);
    {
      ATerm r_11;
      r_11 = t;
      {
        ATerm v_26 = NULL;
        ATerm j_28 (ATerm t)
        {
          ATerm w_26 = NULL;
          ATerm k_28 (ATerm t)
          {
            ATerm c_27 = NULL;
            ATerm m_28 (ATerm t)
            {
              ATerm i_27 = NULL;
              ATerm o_28 (ATerm t)
              {
                ATerm f_28 = NULL;
                ATerm v_28 (ATerm t)
                {
                  t = not_null(f_28);
                  if(((u_26 != NULL) && (u_26 != t)))
                    _fail(t);
                  else
                    u_26 = t;
                  t = not_null(f_28);
                  return(t);
                }
                t = not_null(i_27);
                if(((t_26 != NULL) && (t_26 != t)))
                  _fail(t);
                else
                  t_26 = t;
                t = not_null(l_26);
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
                    ATerm p_28 (ATerm t)
                    {
                      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,x_27 = NULL;
                      t = not_null(l_27);
                      if(((o_27 != NULL) && (o_27 != t)))
                        _fail(t);
                      else
                        o_27 = t;
                      t = not_null(m_27);
                      if(((p_27 != NULL) && (p_27 != t)))
                        _fail(t);
                      else
                        p_27 = t;
                      t = not_null(n_27);
                      if(((q_27 != NULL) && (q_27 != t)))
                        _fail(t);
                      else
                        q_27 = t;
                      t = not_null(j_27);
                      {
                        ATerm v_12;
                        v_12 = t;
                        {
                          ATerm w_27 = NULL;
                          ATerm r_28 (ATerm t)
                          {
                            t = not_null(w_27);
                            if(((r_27 != NULL) && (r_27 != t)))
                              _fail(t);
                            else
                              r_27 = t;
                            t = not_null(w_27);
                            return(t);
                          }
                          t = not_null(p_27);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
                              ATerm q_28 (ATerm t)
                              {
                                ATerm v_27 = NULL;
                                t = not_null(t_27);
                                if(((v_27 != NULL) && (v_27 != t)))
                                  _fail(t);
                                else
                                  v_27 = t;
                                t = not_null(v_27);
                                return(t);
                              }
                              if(((s_27 != NULL) && (s_27 != t)))
                                _fail(t);
                              else
                                s_27 = t;
                              t = not_null(s_27);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  t_27 = ATgetArgument(t, 0);
                                  u_27 = ATgetArgument(t, 1);
                                  t = q_28(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(h_1, t);
                            if(((w_27 != NULL) && (w_27 != t)))
                              _fail(t);
                            else
                              w_27 = t;
                            t = r_28(t);
                          }
                        }
                        t = v_12;
                        {
                          ATerm y_27 = NULL,e_28 = NULL;
                          ATerm u_28 (ATerm t)
                          {
                            t = not_null(e_28);
                            if(((x_27 != NULL) && (x_27 != t)))
                              _fail(t);
                            else
                              x_27 = t;
                            t = not_null(e_28);
                            return(t);
                          }
                          ATerm d_28 = NULL;
                          ATerm t_28 (ATerm t)
                          {
                            t = not_null(d_28);
                            if(((y_27 != NULL) && (y_27 != t)))
                              _fail(t);
                            else
                              y_27 = t;
                            t = not_null(d_28);
                            return(t);
                          }
                          t = not_null(o_27);
                          {
                            ATerm i_1 (ATerm t)
                            {
                              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                              ATerm s_28 (ATerm t)
                              {
                                ATerm c_28 = NULL;
                                t = not_null(a_28);
                                if(((c_28 != NULL) && (c_28 != t)))
                                  _fail(t);
                                else
                                  c_28 = t;
                                t = not_null(c_28);
                                return(t);
                              }
                              if(((z_27 != NULL) && (z_27 != t)))
                                _fail(t);
                              else
                                z_27 = t;
                              t = not_null(z_27);
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  a_28 = ATgetArgument(t, 0);
                                  b_28 = ATgetArgument(t, 1);
                                  t = s_28(t);
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = map_1_0(i_1, t);
                            if(((d_28 != NULL) && (d_28 != t)))
                              _fail(t);
                            else
                              d_28 = t;
                            t = t_28(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__3, not_null(y_27), not_null(s_26), not_null(q_27));
                          t = ssubs_0_0(t);
                          if(((e_28 != NULL) && (e_28 != t)))
                            _fail(t);
                          else
                            e_28 = t;
                          t = u_28(t);
                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_27), not_null(t_26), not_null(x_27));
                          t = tsubs_0_0(t);
                        }
                      }
                      return(t);
                    }
                    if(((j_27 != NULL) && (j_27 != t)))
                      _fail(t);
                    else
                      j_27 = t;
                    t = not_null(j_27);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        k_27 = ATgetArgument(t, 0);
                        l_27 = ATgetArgument(t, 1);
                        m_27 = ATgetArgument(t, 2);
                        n_27 = ATgetArgument(t, 3);
                        t = p_28(t);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = map_1_0(g_1, t);
                  if(((f_28 != NULL) && (f_28 != t)))
                    _fail(t);
                  else
                    f_28 = t;
                  t = v_28(t);
                }
                return(t);
              }
              t = not_null(c_27);
              if(((s_26 != NULL) && (s_26 != t)))
                _fail(t);
              else
                s_26 = t;
              t = not_null(r_26);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                  ATerm n_28 (ATerm t)
                  {
                    ATerm g_27 = NULL,h_27 = NULL;
                    t = not_null(e_27);
                    if(((g_27 != NULL) && (g_27 != t)))
                      _fail(t);
                    else
                      g_27 = t;
                    t = not_null(f_27);
                    if(((h_27 != NULL) && (h_27 != t)))
                      _fail(t);
                    else
                      h_27 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27));
                    return(t);
                  }
                  if(((d_27 != NULL) && (d_27 != t)))
                    _fail(t);
                  else
                    d_27 = t;
                  t = not_null(d_27);
                  if(match_cons(t, sym_VarDec_2))
                    {
                      e_27 = ATgetArgument(t, 0);
                      f_27 = ATgetArgument(t, 1);
                      t = n_28(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1_0(j_1, t);
                if(((i_27 != NULL) && (i_27 != t)))
                  _fail(t);
                else
                  i_27 = t;
                t = o_28(t);
              }
              return(t);
            }
            t = not_null(w_26);
            if(((r_26 != NULL) && (r_26 != t)))
              _fail(t);
            else
              r_26 = t;
            t = not_null(q_26);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
                ATerm l_28 (ATerm t)
                {
                  ATerm a_27 = NULL,b_27 = NULL;
                  t = not_null(y_26);
                  if(((a_27 != NULL) && (a_27 != t)))
                    _fail(t);
                  else
                    a_27 = t;
                  t = not_null(z_26);
                  if(((b_27 != NULL) && (b_27 != t)))
                    _fail(t);
                  else
                    b_27 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_27)), (ATerm)ATempty, (ATerm) ATempty);
                  return(t);
                }
                if(((x_26 != NULL) && (x_26 != t)))
                  _fail(t);
                else
                  x_26 = t;
                t = not_null(x_26);
                if(match_cons(t, sym_VarDec_2))
                  {
                    y_26 = ATgetArgument(t, 0);
                    z_26 = ATgetArgument(t, 1);
                    t = l_28(t);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1_0(k_1, t);
              if(((c_27 != NULL) && (c_27 != t)))
                _fail(t);
              else
                c_27 = t;
              t = m_28(t);
            }
            return(t);
          }
          t = not_null(v_26);
          if(((q_26 != NULL) && (q_26 != t)))
            _fail(t);
          else
            q_26 = t;
          t = not_null(o_26);
          {
            ATerm l_1 (ATerm t)
            {
              t = VarDec_2_0(new_0_0, _id, t);
              return(t);
            }
            t = map_1_0(l_1, t);
            if(((w_26 != NULL) && (w_26 != t)))
              _fail(t);
            else
              w_26 = t;
            t = k_28(t);
          }
          return(t);
        }
        t = not_null(n_26);
        {
          ATerm m_1 (ATerm t)
          {
            t = VarDec_2_0(new_0_0, _id, t);
            return(t);
          }
          t = map_1_0(m_1, t);
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
          t = j_28(t);
        }
      }
      t = r_11;
      {
        ATerm h_28 = NULL;
        ATerm w_28 (ATerm t)
        {
          t = not_null(h_28);
          if(((g_28 != NULL) && (g_28 != t)))
            _fail(t);
          else
            g_28 = t;
          t = not_null(h_28);
          return(t);
        }
        t = not_null(u_26);
        t = choices_0_0(t);
        if(((h_28 != NULL) && (h_28 != t)))
          _fail(t);
        else
          h_28 = t;
        t = w_28(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(m_26), not_null(q_26), not_null(r_26), not_null(g_28));
      }
    }
    return(t);
  }
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  t = not_null(e_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      k_26 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(f_26);
      if(match_cons(t, sym_SDefT_4))
        {
          g_26 = ATgetArgument(t, 0);
          h_26 = ATgetArgument(t, 1);
          i_26 = ATgetArgument(t, 2);
          j_26 = ATgetArgument(t, 3);
          t = i_28(t);
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
ATerm JoinDefs1_0_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  ATerm e_29 (ATerm t)
  {
    ATerm d_29 = NULL;
    t = not_null(b_29);
    if(((d_29 != NULL) && (d_29 != t)))
      _fail(t);
    else
      d_29 = t;
    t = not_null(d_29);
    return(t);
  }
  if(((a_29 != NULL) && (a_29 != t)))
    _fail(t);
  else
    a_29 = t;
  t = not_null(a_29);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_29 = ATgetFirst((ATermList) t);
      c_29 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(c_29);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_29(t);
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
ATerm joindefs_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0_0(t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  ATerm t_29 (ATerm t)
  {
    ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
    t = not_null(l_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(m_29);
    if(((p_29 != NULL) && (p_29 != t)))
      _fail(t);
    else
      p_29 = t;
    t = not_null(n_29);
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = not_null(j_29);
    {
      ATerm s_29 = NULL;
      ATerm u_29 (ATerm t)
      {
        t = not_null(s_29);
        if(((r_29 != NULL) && (r_29 != t)))
          _fail(t);
        else
          r_29 = t;
        t = not_null(s_29);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(p_29));
      t = Definitions_0_0(t);
      if(((s_29 != NULL) && (s_29 != t)))
        _fail(t);
      else
        s_29 = t;
      t = u_29(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(q_29));
    }
    return(t);
  }
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = not_null(j_29);
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
      t = not_null(k_29);
      if(match_cons(t, sym__2))
        {
          l_29 = ATgetArgument(t, 0);
          m_29 = ATgetArgument(t, 1);
          t = t_29(t);
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
ATerm Expl_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  ATerm v_31 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
    t = not_null(o_30);
    if(((p_30 != NULL) && (p_30 != t)))
      _fail(t);
    else
      p_30 = t;
    t = not_null(m_30);
    if(((q_30 != NULL) && (q_30 != t)))
      _fail(t);
    else
      q_30 = t;
    t = not_null(n_30);
    {
      ATerm v_30 = NULL;
      ATerm y_31 (ATerm t)
      {
        ATerm w_30 = NULL;
        ATerm z_31 (ATerm t)
        {
          ATerm x_30 = NULL;
          ATerm a_32 (ATerm t)
          {
            ATerm y_30 = NULL;
            ATerm b_32 (ATerm t)
            {
              t = not_null(y_30);
              if(((u_30 != NULL) && (u_30 != t)))
                _fail(t);
              else
                u_30 = t;
              t = not_null(y_30);
              return(t);
            }
            t = not_null(x_30);
            if(((t_30 != NULL) && (t_30 != t)))
              _fail(t);
            else
              t_30 = t;
            t = not_null(x_30);
            t = new_0_0(t);
            if(((y_30 != NULL) && (y_30 != t)))
              _fail(t);
            else
              y_30 = t;
            t = b_32(t);
            return(t);
          }
          t = not_null(w_30);
          if(((s_30 != NULL) && (s_30 != t)))
            _fail(t);
          else
            s_30 = t;
          t = not_null(w_30);
          t = new_0_0(t);
          if(((x_30 != NULL) && (x_30 != t)))
            _fail(t);
          else
            x_30 = t;
          t = a_32(t);
          return(t);
        }
        t = not_null(v_30);
        if(((r_30 != NULL) && (r_30 != t)))
          _fail(t);
        else
          r_30 = t;
        t = not_null(v_30);
        t = new_0_0(t);
        if(((w_30 != NULL) && (w_30 != t)))
          _fail(t);
        else
          w_30 = t;
        t = z_31(t);
        return(t);
      }
      t = new_0_0(t);
      if(((v_30 != NULL) && (v_30 != t)))
        _fail(t);
      else
        v_30 = t;
      t = y_31(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(t_30)), not_null(s_30)), not_null(r_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(p_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30)))))));
    }
    return(t);
  }
  ATerm w_31 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
    t = not_null(o_30);
    if(((z_30 != NULL) && (z_30 != t)))
      _fail(t);
    else
      z_30 = t;
    t = not_null(n_30);
    {
      ATerm e_31 = NULL;
      ATerm c_32 (ATerm t)
      {
        ATerm i_31 = NULL;
        ATerm e_32 (ATerm t)
        {
          t = not_null(i_31);
          if(((d_31 != NULL) && (d_31 != t)))
            _fail(t);
          else
            d_31 = t;
          t = not_null(i_31);
          return(t);
        }
        t = not_null(e_31);
        if(((c_31 != NULL) && (c_31 != t)))
          _fail(t);
        else
          c_31 = t;
        t = not_null(z_30);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
            ATerm d_32 (ATerm t)
            {
              t = not_null(g_31);
              if(((a_31 != NULL) && (a_31 != t)))
                _fail(t);
              else
                a_31 = t;
              t = not_null(h_31);
              if(((b_31 != NULL) && (b_31 != t)))
                _fail(t);
              else
                b_31 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
              return(t);
            }
            if(((f_31 != NULL) && (f_31 != t)))
              _fail(t);
            else
              f_31 = t;
            t = not_null(f_31);
            if(match_cons(t, sym_Explode_2))
              {
                g_31 = ATgetArgument(t, 0);
                h_31 = ATgetArgument(t, 1);
                t = d_32(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(n_1, t);
          if(((i_31 != NULL) && (i_31 != t)))
            _fail(t);
          else
            i_31 = t;
          t = e_32(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((e_31 != NULL) && (e_31 != t)))
        _fail(t);
      else
        e_31 = t;
      t = c_32(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_31)))));
    }
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    t = not_null(o_30);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    t = not_null(n_30);
    {
      ATerm p_31 = NULL;
      ATerm f_32 (ATerm t)
      {
        ATerm q_31 = NULL;
        ATerm g_32 (ATerm t)
        {
          ATerm u_31 = NULL;
          ATerm i_32 (ATerm t)
          {
            t = not_null(u_31);
            if(((o_31 != NULL) && (o_31 != t)))
              _fail(t);
            else
              o_31 = t;
            t = not_null(u_31);
            return(t);
          }
          t = not_null(q_31);
          if(((n_31 != NULL) && (n_31 != t)))
            _fail(t);
          else
            n_31 = t;
          t = not_null(j_31);
          {
            ATerm o_1 (ATerm t)
            {
              ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
              ATerm h_32 (ATerm t)
              {
                t = not_null(s_31);
                if(((k_31 != NULL) && (k_31 != t)))
                  _fail(t);
                else
                  k_31 = t;
                t = not_null(t_31);
                if(((l_31 != NULL) && (l_31 != t)))
                  _fail(t);
                else
                  l_31 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31));
                return(t);
              }
              if(((r_31 != NULL) && (r_31 != t)))
                _fail(t);
              else
                r_31 = t;
              t = not_null(r_31);
              if(match_cons(t, sym_Explode_2))
                {
                  s_31 = ATgetArgument(t, 0);
                  t_31 = ATgetArgument(t, 1);
                  t = h_32(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = oncetd_1_0(o_1, t);
            if(((u_31 != NULL) && (u_31 != t)))
              _fail(t);
            else
              u_31 = t;
            t = i_32(t);
          }
          return(t);
        }
        t = not_null(p_31);
        if(((m_31 != NULL) && (m_31 != t)))
          _fail(t);
        else
          m_31 = t;
        t = not_null(p_31);
        t = new_0_0(t);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = g_32(t);
        return(t);
      }
      t = new_0_0(t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      t = f_32(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_12, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_31)), (ATerm) ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), not_null(k_31)))))));
    }
    return(t);
  }
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  t = not_null(n_30);
  if(match_cons(t, sym_ExplodeCong_2))
    {
      o_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
      t = v_31(t);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_30 = ATgetArgument(t, 0);
          t = w_31(t);
        }
      else
        {
          if(match_cons(t, sym_Match_1))
            {
              o_30 = ATgetArgument(t, 0);
              t = x_31(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  ATerm t_38 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
    t = not_null(a_33);
    if(((b_33 != NULL) && (b_33 != t)))
      _fail(t);
    else
      b_33 = t;
    t = not_null(z_32);
    {
      ATerm g_33 = NULL;
      ATerm w_38 (ATerm t)
      {
        ATerm q_36 = NULL;
        ATerm v_39 (ATerm t)
        {
          t = not_null(q_36);
          if(((f_33 != NULL) && (f_33 != t)))
            _fail(t);
          else
            f_33 = t;
          t = not_null(q_36);
          return(t);
        }
        t = not_null(g_33);
        if(((e_33 != NULL) && (e_33 != t)))
          _fail(t);
        else
          e_33 = t;
        t = not_null(b_33);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm h_33 = NULL,i_33 = NULL,p_36 = NULL;
            ATerm u_39 (ATerm t)
            {
              t = not_null(i_33);
              if(((c_33 != NULL) && (c_33 != t)))
                _fail(t);
              else
                c_33 = t;
              t = not_null(p_36);
              if(((d_33 != NULL) && (d_33 != t)))
                _fail(t);
              else
                d_33 = t;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_33)), not_null(c_33));
              return(t);
            }
            if(((h_33 != NULL) && (h_33 != t)))
              _fail(t);
            else
              h_33 = t;
            t = not_null(h_33);
            if(match_cons(t, sym_Anno_2))
              {
                i_33 = ATgetArgument(t, 0);
                p_36 = ATgetArgument(t, 1);
                t = u_39(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(p_1, t);
          if(((q_36 != NULL) && (q_36 != t)))
            _fail(t);
          else
            q_36 = t;
          t = v_39(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((g_33 != NULL) && (g_33 != t)))
        _fail(t);
      else
        g_33 = t;
      t = w_38(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_13, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_33))))));
    }
    return(t);
  }
  ATerm u_38 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
    t = not_null(a_33);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = not_null(z_32);
    {
      ATerm v_36 = NULL;
      ATerm w_39 (ATerm t)
      {
        ATerm i_38 = NULL;
        ATerm y_39 (ATerm t)
        {
          t = not_null(i_38);
          if(((u_36 != NULL) && (u_36 != t)))
            _fail(t);
          else
            u_36 = t;
          t = not_null(i_38);
          return(t);
        }
        t = not_null(v_36);
        if(((t_36 != NULL) && (t_36 != t)))
          _fail(t);
        else
          t_36 = t;
        t = not_null(r_36);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm g_38 = NULL,h_38 = NULL;
            ATerm x_39 (ATerm t)
            {
              t = not_null(h_38);
              if(((s_36 != NULL) && (s_36 != t)))
                _fail(t);
              else
                s_36 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36));
              return(t);
            }
            if(((g_38 != NULL) && (g_38 != t)))
              _fail(t);
            else
              g_38 = t;
            t = not_null(g_38);
            if(match_cons(t, sym_RootApp_1))
              {
                h_38 = ATgetArgument(t, 0);
                t = x_39(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(q_1, t);
          if(((i_38 != NULL) && (i_38 != t)))
            _fail(t);
          else
            i_38 = t;
          t = y_39(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((v_36 != NULL) && (v_36 != t)))
        _fail(t);
      else
        v_36 = t;
      t = w_39(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36))), not_null(s_36))));
    }
    return(t);
  }
  ATerm v_38 (ATerm t)
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
    t = not_null(a_33);
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    t = not_null(z_32);
    {
      ATerm o_38 = NULL;
      ATerm z_39 (ATerm t)
      {
        ATerm s_38 = NULL;
        ATerm b_40 (ATerm t)
        {
          t = not_null(s_38);
          if(((n_38 != NULL) && (n_38 != t)))
            _fail(t);
          else
            n_38 = t;
          t = not_null(s_38);
          return(t);
        }
        t = not_null(o_38);
        if(((m_38 != NULL) && (m_38 != t)))
          _fail(t);
        else
          m_38 = t;
        t = not_null(j_38);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
            ATerm a_40 (ATerm t)
            {
              t = not_null(q_38);
              if(((l_38 != NULL) && (l_38 != t)))
                _fail(t);
              else
                l_38 = t;
              t = not_null(r_38);
              if(((k_38 != NULL) && (k_38 != t)))
                _fail(t);
              else
                k_38 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38));
              return(t);
            }
            if(((p_38 != NULL) && (p_38 != t)))
              _fail(t);
            else
              p_38 = t;
            t = not_null(p_38);
            if(match_cons(t, sym_App_2))
              {
                q_38 = ATgetArgument(t, 0);
                r_38 = ATgetArgument(t, 1);
                t = a_40(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(r_1, t);
          if(((s_38 != NULL) && (s_38 != t)))
            _fail(t);
          else
            s_38 = t;
          t = b_40(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((o_38 != NULL) && (o_38 != t)))
        _fail(t);
      else
        o_38 = t;
      t = z_39(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_38)), not_null(l_38)))));
    }
    return(t);
  }
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = not_null(z_32);
  if(match_cons(t, sym_Match_1))
    {
      a_33 = ATgetArgument(t, 0);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_38(t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_38(t);
                  ;
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = c_14;
                  t = v_38(t);
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
ATerm Mapp1_0_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  ATerm h_44 (ATerm t)
  {
    ATerm e_44 = NULL;
    t = not_null(c_44);
    if(((e_44 != NULL) && (e_44 != t)))
      _fail(t);
    else
      e_44 = t;
    t = not_null(e_44);
    return(t);
  }
  ATerm i_44 (ATerm t)
  {
    ATerm f_44 = NULL,g_44 = NULL;
    t = not_null(c_44);
    if(((f_44 != NULL) && (f_44 != t)))
      _fail(t);
    else
      f_44 = t;
    t = not_null(d_44);
    if(((g_44 != NULL) && (g_44 != t)))
      _fail(t);
    else
      g_44 = t;
    t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_44), not_null(g_44));
    return(t);
  }
  if(((a_44 != NULL) && (a_44 != t)))
    _fail(t);
  else
    a_44 = t;
  t = not_null(a_44);
  if(match_cons(t, sym_Match_1))
    {
      b_44 = ATgetArgument(t, 0);
      t = not_null(b_44);
      if(match_cons(t, sym_RootApp_1))
        {
          c_44 = ATgetArgument(t, 0);
          t = h_44(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              c_44 = ATgetArgument(t, 0);
              d_44 = ATgetArgument(t, 1);
              t = i_44(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  ATerm y_44 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
    t = not_null(q_44);
    if(((r_44 != NULL) && (r_44 != t)))
      _fail(t);
    else
      r_44 = t;
    t = not_null(p_44);
    {
      ATerm x_44 = NULL;
      ATerm a_45 (ATerm t)
      {
        t = not_null(x_44);
        if(((t_44 != NULL) && (t_44 != t)))
          _fail(t);
        else
          t_44 = t;
        t = not_null(x_44);
        return(t);
      }
      t = not_null(r_44);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
          ATerm z_44 (ATerm t)
          {
            t = not_null(w_44);
            if(((s_44 != NULL) && (s_44 != t)))
              _fail(t);
            else
              s_44 = t;
            t = not_null(s_44);
            return(t);
          }
          if(((u_44 != NULL) && (u_44 != t)))
            _fail(t);
          else
            u_44 = t;
          t = not_null(u_44);
          if(match_cons(t, sym_RootApp_1))
            {
              v_44 = ATgetArgument(t, 0);
              t = not_null(v_44);
              if(match_cons(t, sym_Match_1))
                {
                  w_44 = ATgetArgument(t, 0);
                  t = z_44(t);
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
        t = pat_td_1_0(s_1, t);
        if(((x_44 != NULL) && (x_44 != t)))
          _fail(t);
        else
          x_44 = t;
        t = a_45(t);
      }
      t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_44));
    }
    return(t);
  }
  if(((p_44 != NULL) && (p_44 != t)))
    _fail(t);
  else
    p_44 = t;
  t = not_null(p_44);
  if(match_cons(t, sym_Match_1))
    {
      q_44 = ATgetArgument(t, 0);
      t = y_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0_0(t);
            ;
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  ATerm g_47 (ATerm t)
  {
    ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
    t = not_null(d_46);
    if(((e_46 != NULL) && (e_46 != t)))
      _fail(t);
    else
      e_46 = t;
    t = not_null(c_46);
    {
      ATerm j_46 = NULL;
      ATerm j_47 (ATerm t)
      {
        ATerm n_46 = NULL;
        ATerm l_47 (ATerm t)
        {
          t = not_null(n_46);
          if(((i_46 != NULL) && (i_46 != t)))
            _fail(t);
          else
            i_46 = t;
          t = not_null(n_46);
          return(t);
        }
        t = not_null(j_46);
        if(((h_46 != NULL) && (h_46 != t)))
          _fail(t);
        else
          h_46 = t;
        t = not_null(e_46);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
            ATerm k_47 (ATerm t)
            {
              t = not_null(l_46);
              if(((f_46 != NULL) && (f_46 != t)))
                _fail(t);
              else
                f_46 = t;
              t = not_null(m_46);
              if(((g_46 != NULL) && (g_46 != t)))
                _fail(t);
              else
                g_46 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46));
              return(t);
            }
            if(((k_46 != NULL) && (k_46 != t)))
              _fail(t);
            else
              k_46 = t;
            t = not_null(k_46);
            if(match_cons(t, sym_Anno_2))
              {
                l_46 = ATgetArgument(t, 0);
                m_46 = ATgetArgument(t, 1);
                t = k_47(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          if(((n_46 != NULL) && (n_46 != t)))
            _fail(t);
          else
            n_46 = t;
          t = l_47(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((j_46 != NULL) && (j_46 != t)))
        _fail(t);
      else
        j_46 = t;
      t = j_47(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), not_null(f_46))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_46))));
    }
    return(t);
  }
  ATerm h_47 (ATerm t)
  {
    ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
    t = not_null(d_46);
    if(((o_46 != NULL) && (o_46 != t)))
      _fail(t);
    else
      o_46 = t;
    t = not_null(c_46);
    {
      ATerm s_46 = NULL;
      ATerm m_47 (ATerm t)
      {
        ATerm v_46 = NULL;
        ATerm o_47 (ATerm t)
        {
          t = not_null(v_46);
          if(((r_46 != NULL) && (r_46 != t)))
            _fail(t);
          else
            r_46 = t;
          t = not_null(v_46);
          return(t);
        }
        t = not_null(s_46);
        if(((q_46 != NULL) && (q_46 != t)))
          _fail(t);
        else
          q_46 = t;
        t = not_null(o_46);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm t_46 = NULL,u_46 = NULL;
            ATerm n_47 (ATerm t)
            {
              t = not_null(u_46);
              if(((p_46 != NULL) && (p_46 != t)))
                _fail(t);
              else
                p_46 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46));
              return(t);
            }
            if(((t_46 != NULL) && (t_46 != t)))
              _fail(t);
            else
              t_46 = t;
            t = not_null(t_46);
            if(match_cons(t, sym_RootApp_1))
              {
                u_46 = ATgetArgument(t, 0);
                t = n_47(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(u_1, t);
          if(((v_46 != NULL) && (v_46 != t)))
            _fail(t);
          else
            v_46 = t;
          t = o_47(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((s_46 != NULL) && (s_46 != t)))
        _fail(t);
      else
        s_46 = t;
      t = m_47(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_46))));
    }
    return(t);
  }
  ATerm i_47 (ATerm t)
  {
    ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
    t = not_null(d_46);
    if(((w_46 != NULL) && (w_46 != t)))
      _fail(t);
    else
      w_46 = t;
    t = not_null(c_46);
    {
      ATerm b_47 = NULL;
      ATerm p_47 (ATerm t)
      {
        ATerm f_47 = NULL;
        ATerm r_47 (ATerm t)
        {
          t = not_null(f_47);
          if(((a_47 != NULL) && (a_47 != t)))
            _fail(t);
          else
            a_47 = t;
          t = not_null(f_47);
          return(t);
        }
        t = not_null(b_47);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = not_null(w_46);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
            ATerm q_47 (ATerm t)
            {
              t = not_null(d_47);
              if(((x_46 != NULL) && (x_46 != t)))
                _fail(t);
              else
                x_46 = t;
              t = not_null(e_47);
              if(((y_46 != NULL) && (y_46 != t)))
                _fail(t);
              else
                y_46 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_46));
              return(t);
            }
            if(((c_47 != NULL) && (c_47 != t)))
              _fail(t);
            else
              c_47 = t;
            t = not_null(c_47);
            if(match_cons(t, sym_App_2))
              {
                d_47 = ATgetArgument(t, 0);
                e_47 = ATgetArgument(t, 1);
                t = q_47(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1_0(v_1, t);
          if(((f_47 != NULL) && (f_47 != t)))
            _fail(t);
          else
            f_47 = t;
          t = r_47(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = p_47(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_46), not_null(y_46), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_46)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_47))));
    }
    return(t);
  }
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = not_null(c_46);
  if(match_cons(t, sym_Build_1))
    {
      d_46 = ATgetArgument(t, 0);
      {
        ATerm m_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_47(t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = m_15;
            {
              ATerm y_15 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_47(t);
                  ;
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = y_15;
                  t = i_47(t);
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
ATerm Bapp1_0_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  ATerm d_48 (ATerm t)
  {
    ATerm a_48 = NULL;
    t = not_null(y_47);
    if(((a_48 != NULL) && (a_48 != t)))
      _fail(t);
    else
      a_48 = t;
    t = not_null(a_48);
    return(t);
  }
  ATerm e_48 (ATerm t)
  {
    ATerm b_48 = NULL,c_48 = NULL;
    t = not_null(y_47);
    if(((c_48 != NULL) && (c_48 != t)))
      _fail(t);
    else
      c_48 = t;
    t = not_null(z_47);
    if(((b_48 != NULL) && (b_48 != t)))
      _fail(t);
    else
      b_48 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_48)), not_null(c_48));
    return(t);
  }
  if(((w_47 != NULL) && (w_47 != t)))
    _fail(t);
  else
    w_47 = t;
  t = not_null(w_47);
  if(match_cons(t, sym_Build_1))
    {
      x_47 = ATgetArgument(t, 0);
      t = not_null(x_47);
      if(match_cons(t, sym_RootApp_1))
        {
          y_47 = ATgetArgument(t, 0);
          t = d_48(t);
        }
      else
        {
          if(match_cons(t, sym_App_2))
            {
              y_47 = ATgetArgument(t, 0);
              z_47 = ATgetArgument(t, 1);
              t = e_48(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,q_48 = NULL,r_48 = NULL;
  ATerm d_49 (ATerm t)
  {
    ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,x_48 = NULL;
    ATerm f_49 (ATerm t)
    {
      ATerm y_48 = NULL,z_48 = NULL;
      ATerm g_49 (ATerm t)
      {
        ATerm a_49 = NULL,b_49 = NULL;
        t = not_null(z_48);
        if(((a_49 != NULL) && (a_49 != t)))
          _fail(t);
        else
          a_49 = t;
        t = not_null(z_48);
        {
          ATerm c_49 = NULL;
          ATerm o_49 (ATerm t)
          {
            t = not_null(c_49);
            if(((b_49 != NULL) && (b_49 != t)))
              _fail(t);
            else
              b_49 = t;
            t = not_null(c_49);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(y_48), not_null(a_49)), not_null(v_48));
          if(((c_49 != NULL) && (c_49 != t)))
            _fail(t);
          else
            c_49 = t;
          t = o_49(t);
          t = not_null(b_49);
        }
        return(t);
      }
      t = not_null(x_48);
      if(((y_48 != NULL) && (y_48 != t)))
        _fail(t);
      else
        y_48 = t;
      t = not_null(u_48);
      t = r_86(t);
      if(((z_48 != NULL) && (z_48 != t)))
        _fail(t);
      else
        z_48 = t;
      t = g_49(t);
      return(t);
    }
    t = not_null(l_48);
    if(((s_48 != NULL) && (s_48 != t)))
      _fail(t);
    else
      s_48 = t;
    t = not_null(q_48);
    if(((t_48 != NULL) && (t_48 != t)))
      _fail(t);
    else
      t_48 = t;
    t = not_null(r_48);
    if(((u_48 != NULL) && (u_48 != t)))
      _fail(t);
    else
      u_48 = t;
    t = not_null(l_48);
    {
      ATerm w_48 = NULL;
      ATerm e_49 (ATerm t)
      {
        t = not_null(w_48);
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        t = not_null(w_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_48));
      if(((w_48 != NULL) && (w_48 != t)))
        _fail(t);
      else
        w_48 = t;
      t = e_49(t);
      t = not_null(t_48);
      t = q_86(t);
      if(((x_48 != NULL) && (x_48 != t)))
        _fail(t);
      else
        x_48 = t;
      t = f_49(t);
    }
    return(t);
  }
  if(((l_48 != NULL) && (l_48 != t)))
    _fail(t);
  else
    l_48 = t;
  t = not_null(l_48);
  if(match_cons(t, sym_As_2))
    {
      q_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
      t = d_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,k_50 = NULL;
  ATerm k_51 (ATerm t)
  {
    ATerm l_50 = NULL,m_50 = NULL,p_50 = NULL,q_50 = NULL,z_50 = NULL,c_51 = NULL;
    ATerm m_51 (ATerm t)
    {
      ATerm d_51 = NULL,e_51 = NULL;
      ATerm n_51 (ATerm t)
      {
        ATerm f_51 = NULL,g_51 = NULL;
        ATerm o_51 (ATerm t)
        {
          ATerm h_51 = NULL,i_51 = NULL;
          t = not_null(g_51);
          if(((h_51 != NULL) && (h_51 != t)))
            _fail(t);
          else
            h_51 = t;
          t = not_null(g_51);
          {
            ATerm j_51 = NULL;
            ATerm u_51 (ATerm t)
            {
              t = not_null(j_51);
              if(((i_51 != NULL) && (i_51 != t)))
                _fail(t);
              else
                i_51 = t;
              t = not_null(j_51);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(d_51), not_null(f_51), not_null(h_51)), not_null(z_50));
            if(((j_51 != NULL) && (j_51 != t)))
              _fail(t);
            else
              j_51 = t;
            t = u_51(t);
            t = not_null(i_51);
          }
          return(t);
        }
        t = not_null(e_51);
        if(((f_51 != NULL) && (f_51 != t)))
          _fail(t);
        else
          f_51 = t;
        t = not_null(q_50);
        t = r_90(t);
        if(((g_51 != NULL) && (g_51 != t)))
          _fail(t);
        else
          g_51 = t;
        t = o_51(t);
        return(t);
      }
      t = not_null(c_51);
      if(((d_51 != NULL) && (d_51 != t)))
        _fail(t);
      else
        d_51 = t;
      t = not_null(p_50);
      t = q_90(t);
      if(((e_51 != NULL) && (e_51 != t)))
        _fail(t);
      else
        e_51 = t;
      t = n_51(t);
      return(t);
    }
    t = not_null(e_50);
    if(((l_50 != NULL) && (l_50 != t)))
      _fail(t);
    else
      l_50 = t;
    t = not_null(f_50);
    if(((m_50 != NULL) && (m_50 != t)))
      _fail(t);
    else
      m_50 = t;
    t = not_null(g_50);
    if(((p_50 != NULL) && (p_50 != t)))
      _fail(t);
    else
      p_50 = t;
    t = not_null(k_50);
    if(((q_50 != NULL) && (q_50 != t)))
      _fail(t);
    else
      q_50 = t;
    t = not_null(e_50);
    {
      ATerm b_51 = NULL;
      ATerm l_51 (ATerm t)
      {
        t = not_null(b_51);
        if(((z_50 != NULL) && (z_50 != t)))
          _fail(t);
        else
          z_50 = t;
        t = not_null(b_51);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_50));
      if(((b_51 != NULL) && (b_51 != t)))
        _fail(t);
      else
        b_51 = t;
      t = l_51(t);
      t = not_null(m_50);
      t = p_90(t);
      if(((c_51 != NULL) && (c_51 != t)))
        _fail(t);
      else
        c_51 = t;
      t = m_51(t);
    }
    return(t);
  }
  if(((e_50 != NULL) && (e_50 != t)))
    _fail(t);
  else
    e_50 = t;
  t = not_null(e_50);
  if(match_cons(t, sym_PrimT_3))
    {
      f_50 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
      k_50 = ATgetArgument(t, 2);
      t = k_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  ATerm r_52 (ATerm t)
  {
    ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,l_52 = NULL;
    ATerm t_52 (ATerm t)
    {
      ATerm m_52 = NULL,n_52 = NULL;
      ATerm u_52 (ATerm t)
      {
        ATerm o_52 = NULL,p_52 = NULL;
        t = not_null(n_52);
        if(((o_52 != NULL) && (o_52 != t)))
          _fail(t);
        else
          o_52 = t;
        t = not_null(n_52);
        {
          ATerm q_52 = NULL;
          ATerm v_52 (ATerm t)
          {
            t = not_null(q_52);
            if(((p_52 != NULL) && (p_52 != t)))
              _fail(t);
            else
              p_52 = t;
            t = not_null(q_52);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(m_52), not_null(o_52)), not_null(j_52));
          if(((q_52 != NULL) && (q_52 != t)))
            _fail(t);
          else
            q_52 = t;
          t = v_52(t);
          t = not_null(p_52);
        }
        return(t);
      }
      t = not_null(l_52);
      if(((m_52 != NULL) && (m_52 != t)))
        _fail(t);
      else
        m_52 = t;
      t = not_null(i_52);
      t = k_86(t);
      if(((n_52 != NULL) && (n_52 != t)))
        _fail(t);
      else
        n_52 = t;
      t = u_52(t);
      return(t);
    }
    t = not_null(d_52);
    if(((g_52 != NULL) && (g_52 != t)))
      _fail(t);
    else
      g_52 = t;
    t = not_null(e_52);
    if(((h_52 != NULL) && (h_52 != t)))
      _fail(t);
    else
      h_52 = t;
    t = not_null(f_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(d_52);
    {
      ATerm k_52 = NULL;
      ATerm s_52 (ATerm t)
      {
        t = not_null(k_52);
        if(((j_52 != NULL) && (j_52 != t)))
          _fail(t);
        else
          j_52 = t;
        t = not_null(k_52);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_52));
      if(((k_52 != NULL) && (k_52 != t)))
        _fail(t);
      else
        k_52 = t;
      t = s_52(t);
      t = not_null(h_52);
      t = j_86(t);
      if(((l_52 != NULL) && (l_52 != t)))
        _fail(t);
      else
        l_52 = t;
      t = t_52(t);
    }
    return(t);
  }
  if(((d_52 != NULL) && (d_52 != t)))
    _fail(t);
  else
    d_52 = t;
  t = not_null(d_52);
  if(match_cons(t, sym_Explode_2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
      t = r_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  ATerm q_53 (ATerm t)
  {
    ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,k_53 = NULL;
    ATerm s_53 (ATerm t)
    {
      ATerm l_53 = NULL,m_53 = NULL;
      ATerm t_53 (ATerm t)
      {
        ATerm n_53 = NULL,o_53 = NULL;
        t = not_null(m_53);
        if(((n_53 != NULL) && (n_53 != t)))
          _fail(t);
        else
          n_53 = t;
        t = not_null(m_53);
        {
          ATerm p_53 = NULL;
          ATerm u_53 (ATerm t)
          {
            t = not_null(p_53);
            if(((o_53 != NULL) && (o_53 != t)))
              _fail(t);
            else
              o_53 = t;
            t = not_null(p_53);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(l_53), not_null(n_53)), not_null(i_53));
          if(((p_53 != NULL) && (p_53 != t)))
            _fail(t);
          else
            p_53 = t;
          t = u_53(t);
          t = not_null(o_53);
        }
        return(t);
      }
      t = not_null(k_53);
      if(((l_53 != NULL) && (l_53 != t)))
        _fail(t);
      else
        l_53 = t;
      t = not_null(h_53);
      t = g_86(t);
      if(((m_53 != NULL) && (m_53 != t)))
        _fail(t);
      else
        m_53 = t;
      t = t_53(t);
      return(t);
    }
    t = not_null(c_53);
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    t = not_null(d_53);
    if(((g_53 != NULL) && (g_53 != t)))
      _fail(t);
    else
      g_53 = t;
    t = not_null(e_53);
    if(((h_53 != NULL) && (h_53 != t)))
      _fail(t);
    else
      h_53 = t;
    t = not_null(c_53);
    {
      ATerm j_53 = NULL;
      ATerm r_53 (ATerm t)
      {
        t = not_null(j_53);
        if(((i_53 != NULL) && (i_53 != t)))
          _fail(t);
        else
          i_53 = t;
        t = not_null(j_53);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_53));
      if(((j_53 != NULL) && (j_53 != t)))
        _fail(t);
      else
        j_53 = t;
      t = r_53(t);
      t = not_null(g_53);
      t = f_86(t);
      if(((k_53 != NULL) && (k_53 != t)))
        _fail(t);
      else
        k_53 = t;
      t = s_53(t);
    }
    return(t);
  }
  if(((c_53 != NULL) && (c_53 != t)))
    _fail(t);
  else
    c_53 = t;
  t = not_null(c_53);
  if(match_cons(t, sym_Op_2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
      t = q_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_98(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = pat_td_1_0(s_98, t);
                return(t);
              }
              t = fetch_1_0(x_1, t);
              return(t);
            }
            t = Op_2_0(_id, w_1, t);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = pat_td_1_0(s_98, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, y_1, t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  {
                    ATerm b_17 = t;
                    int c_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = pat_td_1_0(s_98, t);
                          return(t);
                        }
                        t = Explode_2_0(z_1, _id, t);
                        ;
                        LocalPopChoice(c_17);
                      }
                    else
                      {
                        t = b_17;
                        {
                          ATerm d_17 = t;
                          int t_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_2 (ATerm t)
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = pat_td_1_0(s_98, t);
                                  return(t);
                                }
                                t = fetch_1_0(b_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, a_2, t);
                              ;
                              LocalPopChoice(t_17);
                            }
                          else
                            {
                              t = d_17;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = pat_td_1_0(s_98, t);
                                  return(t);
                                }
                                t = As_2_0(_id, c_2, t);
                              }
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  ATerm o_55 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
    t = not_null(t_54);
    if(((u_54 != NULL) && (u_54 != t)))
      _fail(t);
    else
      u_54 = t;
    t = not_null(s_54);
    {
      ATerm a_55 = NULL;
      ATerm r_55 (ATerm t)
      {
        t = not_null(a_55);
        if(((w_54 != NULL) && (w_54 != t)))
          _fail(t);
        else
          w_54 = t;
        t = not_null(a_55);
        return(t);
      }
      t = not_null(u_54);
      {
        ATerm d_2 (ATerm t)
        {
          ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
          ATerm q_55 (ATerm t)
          {
            t = not_null(z_54);
            if(((v_54 != NULL) && (v_54 != t)))
              _fail(t);
            else
              v_54 = t;
            t = not_null(v_54);
            return(t);
          }
          if(((x_54 != NULL) && (x_54 != t)))
            _fail(t);
          else
            x_54 = t;
          t = not_null(x_54);
          if(match_cons(t, sym_RootApp_1))
            {
              y_54 = ATgetArgument(t, 0);
              t = not_null(y_54);
              if(match_cons(t, sym_Build_1))
                {
                  z_54 = ATgetArgument(t, 0);
                  t = q_55(t);
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
        t = pat_td_1_0(d_2, t);
        if(((a_55 != NULL) && (a_55 != t)))
          _fail(t);
        else
          a_55 = t;
        t = r_55(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_54));
    }
    return(t);
  }
  ATerm p_55 (ATerm t)
  {
    ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
    t = not_null(t_54);
    if(((b_55 != NULL) && (b_55 != t)))
      _fail(t);
    else
      b_55 = t;
    t = not_null(s_54);
    {
      ATerm j_55 = NULL;
      ATerm t_55 (ATerm t)
      {
        t = not_null(j_55);
        if(((e_55 != NULL) && (e_55 != t)))
          _fail(t);
        else
          e_55 = t;
        t = not_null(j_55);
        return(t);
      }
      t = not_null(b_55);
      {
        ATerm e_2 (ATerm t)
        {
          ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
          ATerm s_55 (ATerm t)
          {
            t = not_null(h_55);
            if(((d_55 != NULL) && (d_55 != t)))
              _fail(t);
            else
              d_55 = t;
            t = not_null(i_55);
            if(((c_55 != NULL) && (c_55 != t)))
              _fail(t);
            else
              c_55 = t;
            t = not_null(d_55);
            return(t);
          }
          if(((f_55 != NULL) && (f_55 != t)))
            _fail(t);
          else
            f_55 = t;
          t = not_null(f_55);
          if(match_cons(t, sym_App_2))
            {
              g_55 = ATgetArgument(t, 0);
              i_55 = ATgetArgument(t, 1);
              t = not_null(g_55);
              if(match_cons(t, sym_Build_1))
                {
                  h_55 = ATgetArgument(t, 0);
                  t = s_55(t);
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
        t = pat_td_1_0(e_2, t);
        if(((j_55 != NULL) && (j_55 != t)))
          _fail(t);
        else
          j_55 = t;
        t = t_55(t);
      }
      t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_55));
    }
    return(t);
  }
  if(((s_54 != NULL) && (s_54 != t)))
    _fail(t);
  else
    s_54 = t;
  t = not_null(s_54);
  if(match_cons(t, sym_Build_1))
    {
      t_54 = ATgetArgument(t, 0);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_55(t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = p_55(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm w_17 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = w_17;
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0_0(t);
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  ATerm z_55 (ATerm t)
  {
    ATerm y_55 = NULL;
    t = not_null(x_55);
    if(((y_55 != NULL) && (y_55 != t)))
      _fail(t);
    else
      y_55 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_55), term_r_18);
    return(t);
  }
  if(((w_55 != NULL) && (w_55 != t)))
    _fail(t);
  else
    w_55 = t;
  t = not_null(w_55);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_55 = ATgetArgument(t, 0);
      t = z_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  ATerm f_56 (ATerm t)
  {
    ATerm e_56 = NULL;
    t = not_null(d_56);
    if(((e_56 != NULL) && (e_56 != t)))
      _fail(t);
    else
      e_56 = t;
    t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_18), term_r_18));
    return(t);
  }
  if(((c_56 != NULL) && (c_56 != t)))
    _fail(t);
  else
    c_56 = t;
  t = not_null(c_56);
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_56 = ATgetArgument(t, 0);
      t = f_56(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(q_0, _id, t);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = map1_1_0(q_0, t);
            return(t);
          }
          t = try_1_0(g_2, t);
          return(t);
        }
        t = Cons_2_0(_id, f_2, t);
      }
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm h_2 (ATerm t)
        {
          t = map1_1_0(q_0, t);
          return(t);
        }
        t = Cons_2_0(_id, h_2, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  ATerm f_59 (ATerm t)
  {
    ATerm n_57 = NULL,o_57 = NULL;
    t = not_null(l_57);
    if(((n_57 != NULL) && (n_57 != t)))
      _fail(t);
    else
      n_57 = t;
    t = not_null(m_57);
    if(((o_57 != NULL) && (o_57 != t)))
      _fail(t);
    else
      o_57 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_57), not_null(o_57));
    return(t);
  }
  ATerm g_59 (ATerm t)
  {
    ATerm p_57 = NULL,q_57 = NULL;
    t = not_null(f_57);
    if(((p_57 != NULL) && (p_57 != t)))
      _fail(t);
    else
      p_57 = t;
    t = not_null(g_57);
    if(((q_57 != NULL) && (q_57 != t)))
      _fail(t);
    else
      q_57 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_57), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_57)));
    return(t);
  }
  ATerm h_59 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm i_59 (ATerm t)
  {
    ATerm r_57 = NULL,s_57 = NULL;
    t = not_null(f_57);
    if(((r_57 != NULL) && (r_57 != t)))
      _fail(t);
    else
      r_57 = t;
    t = not_null(g_57);
    if(((s_57 != NULL) && (s_57 != t)))
      _fail(t);
    else
      s_57 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_57), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_57)));
    return(t);
  }
  ATerm j_59 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm k_59 (ATerm t)
  {
    ATerm t_57 = NULL,u_57 = NULL;
    t = not_null(f_57);
    if(((t_57 != NULL) && (t_57 != t)))
      _fail(t);
    else
      t_57 = t;
    t = not_null(g_57);
    if(((u_57 != NULL) && (u_57 != t)))
      _fail(t);
    else
      u_57 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_57), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_57)));
    return(t);
  }
  ATerm l_59 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  ATerm m_59 (ATerm t)
  {
    ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
    t = not_null(l_57);
    if(((v_57 != NULL) && (v_57 != t)))
      _fail(t);
    else
      v_57 = t;
    t = not_null(m_57);
    if(((w_57 != NULL) && (w_57 != t)))
      _fail(t);
    else
      w_57 = t;
    t = not_null(i_57);
    if(((x_57 != NULL) && (x_57 != t)))
      _fail(t);
    else
      x_57 = t;
    t = not_null(h_57);
    if(((y_57 != NULL) && (y_57 != t)))
      _fail(t);
    else
      y_57 = t;
    t = not_null(k_57);
    {
      ATerm b_58 = NULL;
      ATerm u_59 (ATerm t)
      {
        ATerm c_58 = NULL;
        ATerm v_59 (ATerm t)
        {
          t = not_null(c_58);
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
          t = not_null(c_58);
          return(t);
        }
        t = not_null(b_58);
        if(((z_57 != NULL) && (z_57 != t)))
          _fail(t);
        else
          z_57 = t;
        t = not_null(x_57);
        {
          ATerm i_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map1_1_0(i_2, t);
          if(((c_58 != NULL) && (c_58 != t)))
            _fail(t);
          else
            c_58 = t;
          t = v_59(t);
        }
        return(t);
      }
      t = not_null(w_57);
      t = map1_1_0(MkFunType_0_0, t);
      if(((b_58 != NULL) && (b_58 != t)))
        _fail(t);
      else
        b_58 = t;
      t = u_59(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(v_57), not_null(z_57), not_null(a_58), not_null(y_57));
    }
    return(t);
  }
  ATerm n_59 (ATerm t)
  {
    ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
    t = not_null(l_57);
    if(((d_58 != NULL) && (d_58 != t)))
      _fail(t);
    else
      d_58 = t;
    t = not_null(m_57);
    if(((e_58 != NULL) && (e_58 != t)))
      _fail(t);
    else
      e_58 = t;
    t = not_null(i_57);
    if(((f_58 != NULL) && (f_58 != t)))
      _fail(t);
    else
      f_58 = t;
    t = not_null(h_57);
    if(((g_58 != NULL) && (g_58 != t)))
      _fail(t);
    else
      g_58 = t;
    t = not_null(k_57);
    {
      ATerm j_58 = NULL;
      ATerm w_59 (ATerm t)
      {
        ATerm k_58 = NULL;
        ATerm x_59 (ATerm t)
        {
          t = not_null(k_58);
          if(((i_58 != NULL) && (i_58 != t)))
            _fail(t);
          else
            i_58 = t;
          t = not_null(k_58);
          return(t);
        }
        t = not_null(j_58);
        if(((h_58 != NULL) && (h_58 != t)))
          _fail(t);
        else
          h_58 = t;
        t = not_null(e_58);
        {
          ATerm j_2 (ATerm t)
          {
            t = try_1_0(MkFunType_0_0, t);
            return(t);
          }
          t = map_1_0(j_2, t);
          if(((k_58 != NULL) && (k_58 != t)))
            _fail(t);
          else
            k_58 = t;
          t = x_59(t);
        }
        return(t);
      }
      t = not_null(f_58);
      t = map1_1_0(MkConstType_0_0, t);
      if(((j_58 != NULL) && (j_58 != t)))
        _fail(t);
      else
        j_58 = t;
      t = w_59(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_58), not_null(i_58), not_null(h_58), not_null(g_58));
    }
    return(t);
  }
  ATerm o_59 (ATerm t)
  {
    ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL;
    t = not_null(l_57);
    if(((l_58 != NULL) && (l_58 != t)))
      _fail(t);
    else
      l_58 = t;
    t = not_null(m_57);
    if(((m_58 != NULL) && (m_58 != t)))
      _fail(t);
    else
      m_58 = t;
    t = not_null(i_57);
    if(((n_58 != NULL) && (n_58 != t)))
      _fail(t);
    else
      n_58 = t;
    t = not_null(h_57);
    if(((o_58 != NULL) && (o_58 != t)))
      _fail(t);
    else
      o_58 = t;
    t = not_null(k_57);
    {
      ATerm r_58 = NULL;
      ATerm y_59 (ATerm t)
      {
        ATerm s_58 = NULL;
        ATerm z_59 (ATerm t)
        {
          t = not_null(s_58);
          if(((q_58 != NULL) && (q_58 != t)))
            _fail(t);
          else
            q_58 = t;
          t = not_null(s_58);
          return(t);
        }
        t = not_null(r_58);
        if(((p_58 != NULL) && (p_58 != t)))
          _fail(t);
        else
          p_58 = t;
        t = not_null(n_58);
        {
          ATerm k_2 (ATerm t)
          {
            t = try_1_0(MkConstType_0_0, t);
            return(t);
          }
          t = map_1_0(k_2, t);
          if(((s_58 != NULL) && (s_58 != t)))
            _fail(t);
          else
            s_58 = t;
          t = z_59(t);
        }
        return(t);
      }
      t = not_null(m_58);
      t = map1_1_0(MkFunType_0_0, t);
      if(((r_58 != NULL) && (r_58 != t)))
        _fail(t);
      else
        r_58 = t;
      t = y_59(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_58), not_null(p_58), not_null(q_58), not_null(o_58));
    }
    return(t);
  }
  ATerm p_59 (ATerm t)
  {
    ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
    t = not_null(l_57);
    if(((u_58 != NULL) && (u_58 != t)))
      _fail(t);
    else
      u_58 = t;
    t = not_null(m_57);
    if(((t_58 != NULL) && (t_58 != t)))
      _fail(t);
    else
      t_58 = t;
    t = not_null(i_57);
    if(((v_58 != NULL) && (v_58 != t)))
      _fail(t);
    else
      v_58 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_58), (ATerm) ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_58)), not_null(u_58))));
    return(t);
  }
  ATerm q_59 (ATerm t)
  {
    ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
    t = not_null(l_57);
    if(((x_58 != NULL) && (x_58 != t)))
      _fail(t);
    else
      x_58 = t;
    t = not_null(m_57);
    if(((w_58 != NULL) && (w_58 != t)))
      _fail(t);
    else
      w_58 = t;
    t = not_null(i_57);
    if(((y_58 != NULL) && (y_58 != t)))
      _fail(t);
    else
      y_58 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(y_58))), not_null(x_58)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_58))));
    return(t);
  }
  ATerm r_59 (ATerm t)
  {
    ATerm z_58 = NULL,a_59 = NULL;
    t = not_null(l_57);
    if(((z_58 != NULL) && (z_58 != t)))
      _fail(t);
    else
      z_58 = t;
    t = not_null(m_57);
    if(((a_59 != NULL) && (a_59 != t)))
      _fail(t);
    else
      a_59 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_58), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_59)));
    return(t);
  }
  ATerm s_59 (ATerm t)
  {
    ATerm b_59 = NULL,c_59 = NULL;
    t = not_null(l_57);
    if(((b_59 != NULL) && (b_59 != t)))
      _fail(t);
    else
      b_59 = t;
    t = not_null(m_57);
    if(((c_59 != NULL) && (c_59 != t)))
      _fail(t);
    else
      c_59 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_59)), not_null(c_59));
    return(t);
  }
  ATerm t_59 (ATerm t)
  {
    ATerm d_59 = NULL,e_59 = NULL;
    t = not_null(l_57);
    if(((e_59 != NULL) && (e_59 != t)))
      _fail(t);
    else
      e_59 = t;
    t = not_null(m_57);
    if(((d_59 != NULL) && (d_59 != t)))
      _fail(t);
    else
      d_59 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_59)), not_null(e_59));
    return(t);
  }
  if(((k_57 != NULL) && (k_57 != t)))
    _fail(t);
  else
    k_57 = t;
  t = not_null(k_57);
  if(match_cons(t, sym_Lets_2))
    {
      l_57 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
      t = f_59(t);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_57 = ATgetArgument(t, 0);
          t = not_null(l_57);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_57 = ATgetFirst((ATermList) t);
              g_57 = (ATerm) ATgetNext((ATermList) t);
              t = g_59(t);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = h_59(t);
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_57 = ATgetArgument(t, 0);
              t = not_null(l_57);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_57 = ATgetFirst((ATermList) t);
                  g_57 = (ATerm) ATgetNext((ATermList) t);
                  t = i_59(t);
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = j_59(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_57 = ATgetArgument(t, 0);
                  t = not_null(l_57);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_57 = ATgetFirst((ATermList) t);
                      g_57 = (ATerm) ATgetNext((ATermList) t);
                      t = k_59(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = l_59(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_57 = ATgetArgument(t, 0);
                      m_57 = ATgetArgument(t, 1);
                      i_57 = ATgetArgument(t, 2);
                      h_57 = ATgetArgument(t, 3);
                      t = m_59(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_57 = ATgetArgument(t, 0);
                          m_57 = ATgetArgument(t, 1);
                          i_57 = ATgetArgument(t, 2);
                          h_57 = ATgetArgument(t, 3);
                          {
                            ATerm r_19 = t;
                            int s_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = n_59(t);
                                ;
                                LocalPopChoice(s_19);
                              }
                            else
                              {
                                t = r_19;
                                t = o_59(t);
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              l_57 = ATgetArgument(t, 0);
                              m_57 = ATgetArgument(t, 1);
                              i_57 = ATgetArgument(t, 2);
                              t = p_59(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_57 = ATgetArgument(t, 0);
                                  m_57 = ATgetArgument(t, 1);
                                  i_57 = ATgetArgument(t, 2);
                                  t = q_59(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_57 = ATgetArgument(t, 0);
                                      m_57 = ATgetArgument(t, 1);
                                      t = r_59(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_57 = ATgetArgument(t, 0);
                                          m_57 = ATgetArgument(t, 1);
                                          t = s_59(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_57 = ATgetArgument(t, 0);
                                              m_57 = ATgetArgument(t, 1);
                                              t = t_59(t);
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
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
ATerm UnZip2_0_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  ATerm p_60 (ATerm t)
  {
    ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
    t = not_null(g_60);
    if(((l_60 != NULL) && (l_60 != t)))
      _fail(t);
    else
      l_60 = t;
    t = not_null(h_60);
    if(((n_60 != NULL) && (n_60 != t)))
      _fail(t);
    else
      n_60 = t;
    t = not_null(j_60);
    if(((m_60 != NULL) && (m_60 != t)))
      _fail(t);
    else
      m_60 = t;
    t = not_null(k_60);
    if(((o_60 != NULL) && (o_60 != t)))
      _fail(t);
    else
      o_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_60)), not_null(l_60)), (ATerm) ATinsert(CheckATermList(not_null(o_60)), not_null(n_60)));
    return(t);
  }
  if(((e_60 != NULL) && (e_60 != t)))
    _fail(t);
  else
    e_60 = t;
  t = not_null(e_60);
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
      t = not_null(f_60);
      if(match_cons(t, sym__2))
        {
          g_60 = ATgetArgument(t, 0);
          h_60 = ATgetArgument(t, 1);
          t = not_null(i_60);
          if(match_cons(t, sym__2))
            {
              j_60 = ATgetArgument(t, 0);
              k_60 = ATgetArgument(t, 1);
              t = p_60(t);
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
ATerm UnZip3_0_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  ATerm x_60 (ATerm t)
  {
    ATerm v_60 = NULL,w_60 = NULL;
    t = not_null(t_60);
    if(((v_60 != NULL) && (v_60 != t)))
      _fail(t);
    else
      v_60 = t;
    t = not_null(u_60);
    if(((w_60 != NULL) && (w_60 != t)))
      _fail(t);
    else
      w_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_60), not_null(w_60));
    return(t);
  }
  if(((s_60 != NULL) && (s_60 != t)))
    _fail(t);
  else
    s_60 = t;
  t = not_null(s_60);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_60 = ATgetFirst((ATermList) t);
      u_60 = (ATerm) ATgetNext((ATermList) t);
      t = x_60(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0_0 (ATerm t)
{
  ATerm a_61 = NULL;
  ATerm b_61 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  if(((a_61 != NULL) && (a_61 != t)))
    _fail(t);
  else
    a_61 = t;
  t = not_null(a_61);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  t = genzip_4_0(UnZip1_0_0, UnZip3_0_0, UnZip2_0_0, a_108, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  ATerm m_61 (ATerm t)
  {
    ATerm i_61 = NULL,j_61 = NULL;
    t = not_null(g_61);
    if(((i_61 != NULL) && (i_61 != t)))
      _fail(t);
    else
      i_61 = t;
    t = not_null(g_61);
    {
      ATerm k_61 = NULL;
      ATerm o_61 (ATerm t)
      {
        t = not_null(k_61);
        if(((j_61 != NULL) && (j_61 != t)))
          _fail(t);
        else
          j_61 = t;
        t = not_null(k_61);
        return(t);
      }
      t = not_null(i_61);
      {
        ATerm u_19 = t;
        if((PushChoice() == 0))
          {
            t = Var_1_0(_id, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_19;
          }
        t = new_0_0(t);
        if(((k_61 != NULL) && (k_61 != t)))
          _fail(t);
        else
          k_61 = t;
        t = o_61(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(j_61)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_61)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61))));
    }
    return(t);
  }
  ATerm n_61 (ATerm t)
  {
    ATerm l_61 = NULL;
    t = not_null(h_61);
    if(((l_61 != NULL) && (l_61 != t)))
      _fail(t);
    else
      l_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_61))));
    return(t);
  }
  if(((g_61 != NULL) && (g_61 != t)))
    _fail(t);
  else
    g_61 = t;
  t = not_null(g_61);
  if(match_cons(t, sym_Var_1))
    {
      h_61 = ATgetArgument(t, 0);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_61(t);
            ;
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = n_61(t);
          }
      }
    }
  else
    {
      t = m_61(t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_62 = NULL,p_62 = NULL;
  ATerm s_63 (ATerm t)
  {
    ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,u_62 = NULL;
    ATerm d_64 (ATerm t)
    {
      ATerm v_62 = NULL,w_62 = NULL;
      t = not_null(u_62);
      if(((v_62 != NULL) && (v_62 != t)))
        _fail(t);
      else
        v_62 = t;
      t = not_null(u_62);
      {
        ATerm x_62 = NULL;
        ATerm e_64 (ATerm t)
        {
          t = not_null(x_62);
          if(((w_62 != NULL) && (w_62 != t)))
            _fail(t);
          else
            w_62 = t;
          t = not_null(x_62);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_62)), not_null(s_62));
        if(((x_62 != NULL) && (x_62 != t)))
          _fail(t);
        else
          x_62 = t;
        t = e_64(t);
        t = not_null(w_62);
      }
      return(t);
    }
    t = not_null(m_62);
    if(((q_62 != NULL) && (q_62 != t)))
      _fail(t);
    else
      q_62 = t;
    t = not_null(p_62);
    if(((r_62 != NULL) && (r_62 != t)))
      _fail(t);
    else
      r_62 = t;
    t = not_null(m_62);
    {
      ATerm t_62 = NULL;
      ATerm c_64 (ATerm t)
      {
        t = not_null(t_62);
        if(((s_62 != NULL) && (s_62 != t)))
          _fail(t);
        else
          s_62 = t;
        t = not_null(t_62);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_62));
      if(((t_62 != NULL) && (t_62 != t)))
        _fail(t);
      else
        t_62 = t;
      t = c_64(t);
      t = not_null(r_62);
      t = p_0(t);
      if(((u_62 != NULL) && (u_62 != t)))
        _fail(t);
      else
        u_62 = t;
      t = d_64(t);
    }
    return(t);
  }
  ATerm t_63 (ATerm t)
  {
    ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,c_63 = NULL;
    ATerm g_64 (ATerm t)
    {
      ATerm d_63 = NULL,e_63 = NULL;
      t = not_null(c_63);
      if(((d_63 != NULL) && (d_63 != t)))
        _fail(t);
      else
        d_63 = t;
      t = not_null(c_63);
      {
        ATerm f_63 = NULL;
        ATerm h_64 (ATerm t)
        {
          t = not_null(f_63);
          if(((e_63 != NULL) && (e_63 != t)))
            _fail(t);
          else
            e_63 = t;
          t = not_null(f_63);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_63)), not_null(a_63));
        if(((f_63 != NULL) && (f_63 != t)))
          _fail(t);
        else
          f_63 = t;
        t = h_64(t);
        t = not_null(e_63);
      }
      return(t);
    }
    t = not_null(m_62);
    if(((y_62 != NULL) && (y_62 != t)))
      _fail(t);
    else
      y_62 = t;
    t = not_null(p_62);
    if(((z_62 != NULL) && (z_62 != t)))
      _fail(t);
    else
      z_62 = t;
    t = not_null(m_62);
    {
      ATerm b_63 = NULL;
      ATerm f_64 (ATerm t)
      {
        t = not_null(b_63);
        if(((a_63 != NULL) && (a_63 != t)))
          _fail(t);
        else
          a_63 = t;
        t = not_null(b_63);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_62));
      if(((b_63 != NULL) && (b_63 != t)))
        _fail(t);
      else
        b_63 = t;
      t = f_64(t);
      t = not_null(z_62);
      t = p_0(t);
      if(((c_63 != NULL) && (c_63 != t)))
        _fail(t);
      else
        c_63 = t;
      t = g_64(t);
    }
    return(t);
  }
  ATerm b_64 (ATerm t)
  {
    ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,o_63 = NULL;
    ATerm j_64 (ATerm t)
    {
      ATerm p_63 = NULL,q_63 = NULL;
      t = not_null(o_63);
      if(((p_63 != NULL) && (p_63 != t)))
        _fail(t);
      else
        p_63 = t;
      t = not_null(o_63);
      {
        ATerm r_63 = NULL;
        ATerm k_64 (ATerm t)
        {
          t = not_null(r_63);
          if(((q_63 != NULL) && (q_63 != t)))
            _fail(t);
          else
            q_63 = t;
          t = not_null(r_63);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_63)), not_null(m_63));
        if(((r_63 != NULL) && (r_63 != t)))
          _fail(t);
        else
          r_63 = t;
        t = k_64(t);
        t = not_null(q_63);
      }
      return(t);
    }
    t = not_null(m_62);
    if(((k_63 != NULL) && (k_63 != t)))
      _fail(t);
    else
      k_63 = t;
    t = not_null(p_62);
    if(((l_63 != NULL) && (l_63 != t)))
      _fail(t);
    else
      l_63 = t;
    t = not_null(m_62);
    {
      ATerm n_63 = NULL;
      ATerm i_64 (ATerm t)
      {
        t = not_null(n_63);
        if(((m_63 != NULL) && (m_63 != t)))
          _fail(t);
        else
          m_63 = t;
        t = not_null(n_63);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_63));
      if(((n_63 != NULL) && (n_63 != t)))
        _fail(t);
      else
        n_63 = t;
      t = i_64(t);
      t = not_null(l_63);
      t = p_0(t);
      if(((o_63 != NULL) && (o_63 != t)))
        _fail(t);
      else
        o_63 = t;
      t = j_64(t);
    }
    return(t);
  }
  if(((m_62 != NULL) && (m_62 != t)))
    _fail(t);
  else
    m_62 = t;
  t = not_null(m_62);
  if(match_cons(t, sym_Var_1))
    {
      p_62 = ATgetArgument(t, 0);
      {
        ATerm x_19 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_63(t);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = x_19;
            {
              ATerm q_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_63(t);
                  ;
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = q_20;
                  t = b_64(t);
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
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
  ATerm y_65 (ATerm t)
  {
    ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL;
    t = not_null(w_64);
    if(((y_64 != NULL) && (y_64 != t)))
      _fail(t);
    else
      y_64 = t;
    t = not_null(x_64);
    if(((z_64 != NULL) && (z_64 != t)))
      _fail(t);
    else
      z_64 = t;
    t = not_null(u_64);
    if(((a_65 != NULL) && (a_65 != t)))
      _fail(t);
    else
      a_65 = t;
    t = not_null(v_64);
    {
      ATerm e_65 = NULL,f_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
      ATerm a_66 (ATerm t)
      {
        t = not_null(f_65);
        if(((b_65 != NULL) && (b_65 != t)))
          _fail(t);
        else
          b_65 = t;
        t = not_null(i_65);
        if(((c_65 != NULL) && (c_65 != t)))
          _fail(t);
        else
          c_65 = t;
        t = not_null(j_65);
        if(((d_65 != NULL) && (d_65 != t)))
          _fail(t);
        else
          d_65 = t;
        t = not_null(e_65);
        return(t);
      }
      t = not_null(a_65);
      {
        ATerm l_2 (ATerm t)
        {
          ATerm y_20 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_20;
            }
          return(t);
        }
        t = fetch_1_0(l_2, t);
        t = not_null(a_65);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm m_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, m_2, t);
          if(((e_65 != NULL) && (e_65 != t)))
            _fail(t);
          else
            e_65 = t;
          t = not_null(e_65);
          if(match_cons(t, sym__2))
            {
              f_65 = ATgetArgument(t, 0);
              h_65 = ATgetArgument(t, 1);
              t = not_null(h_65);
              if(match_cons(t, sym__2))
                {
                  i_65 = ATgetArgument(t, 0);
                  j_65 = ATgetArgument(t, 1);
                  t = a_66(t);
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
      }
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(y_64), not_null(z_64), not_null(d_65))));
    }
    return(t);
  }
  ATerm z_65 (ATerm t)
  {
    ATerm k_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
    t = not_null(w_64);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
    t = not_null(x_64);
    if(((n_65 != NULL) && (n_65 != t)))
      _fail(t);
    else
      n_65 = t;
    t = not_null(v_64);
    {
      ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
      ATerm b_66 (ATerm t)
      {
        t = not_null(u_65);
        if(((o_65 != NULL) && (o_65 != t)))
          _fail(t);
        else
          o_65 = t;
        t = not_null(w_65);
        if(((p_65 != NULL) && (p_65 != t)))
          _fail(t);
        else
          p_65 = t;
        t = not_null(x_65);
        if(((q_65 != NULL) && (q_65 != t)))
          _fail(t);
        else
          q_65 = t;
        t = not_null(t_65);
        return(t);
      }
      t = not_null(n_65);
      {
        ATerm n_2 (ATerm t)
        {
          ATerm d_21 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_21;
            }
          return(t);
        }
        t = fetch_1_0(n_2, t);
        t = not_null(n_65);
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm o_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, o_2, t);
          if(((t_65 != NULL) && (t_65 != t)))
            _fail(t);
          else
            t_65 = t;
          t = not_null(t_65);
          if(match_cons(t, sym__2))
            {
              u_65 = ATgetArgument(t, 0);
              v_65 = ATgetArgument(t, 1);
              t = not_null(v_65);
              if(match_cons(t, sym__2))
                {
                  w_65 = ATgetArgument(t, 0);
                  x_65 = ATgetArgument(t, 1);
                  t = b_66(t);
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
      }
      t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(k_65), (ATerm)ATempty, not_null(q_65))));
    }
    return(t);
  }
  if(((v_64 != NULL) && (v_64 != t)))
    _fail(t);
  else
    v_64 = t;
  t = not_null(v_64);
  if(match_cons(t, sym_PrimT_3))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      u_64 = ATgetArgument(t, 2);
      t = y_65(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          w_64 = ATgetArgument(t, 0);
          x_64 = ATgetArgument(t, 1);
          t = z_65(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm c_66 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = l_113(t);
      t = c_66(t);
      return(t);
    }
    t = try_1_0(p_2, t);
    return(t);
  }
  t = c_66(t);
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm h_66 = NULL;
  ATerm p_66 (ATerm t)
  {
    ATerm i_66 = NULL,j_66 = NULL,n_66 = NULL;
    t = not_null(h_66);
    if(((i_66 != NULL) && (i_66 != t)))
      _fail(t);
    else
      i_66 = t;
    t = not_null(h_66);
    {
      ATerm e_21;
      e_21 = t;
      {
        ATerm k_66 = NULL;
        ATerm q_66 (ATerm t)
        {
          t = not_null(k_66);
          if(((j_66 != NULL) && (j_66 != t)))
            _fail(t);
          else
            j_66 = t;
          t = not_null(k_66);
          return(t);
        }
        t = SSLgetAnnotations(not_null(i_66));
        if(((k_66 != NULL) && (k_66 != t)))
          _fail(t);
        else
          k_66 = t;
        t = q_66(t);
      }
      t = e_21;
      {
        ATerm o_66 = NULL;
        ATerm s_66 (ATerm t)
        {
          t = not_null(o_66);
          if(((n_66 != NULL) && (n_66 != t)))
            _fail(t);
          else
            n_66 = t;
          t = not_null(o_66);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(j_66));
        if(((o_66 != NULL) && (o_66 != t)))
          _fail(t);
        else
          o_66 = t;
        t = s_66(t);
        t = not_null(n_66);
      }
    }
    return(t);
  }
  if(((h_66 != NULL) && (h_66 != t)))
    _fail(t);
  else
    h_66 = t;
  t = not_null(h_66);
  if(match_cons(t, sym_Wld_0))
    {
      t = p_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm f_21 = t;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = Wld_0_0(t);
          }
        return(t);
      }
      t = topdown_1_0(q_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_21;
    }
  return(t);
}
ATerm App_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  ATerm n_67 (ATerm t)
  {
    ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,h_67 = NULL;
    ATerm p_67 (ATerm t)
    {
      ATerm i_67 = NULL,j_67 = NULL;
      ATerm q_67 (ATerm t)
      {
        ATerm k_67 = NULL,l_67 = NULL;
        t = not_null(j_67);
        if(((k_67 != NULL) && (k_67 != t)))
          _fail(t);
        else
          k_67 = t;
        t = not_null(j_67);
        {
          ATerm m_67 = NULL;
          ATerm r_67 (ATerm t)
          {
            t = not_null(m_67);
            if(((l_67 != NULL) && (l_67 != t)))
              _fail(t);
            else
              l_67 = t;
            t = not_null(m_67);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(i_67), not_null(k_67)), not_null(f_67));
          if(((m_67 != NULL) && (m_67 != t)))
            _fail(t);
          else
            m_67 = t;
          t = r_67(t);
          t = not_null(l_67);
        }
        return(t);
      }
      t = not_null(h_67);
      if(((i_67 != NULL) && (i_67 != t)))
        _fail(t);
      else
        i_67 = t;
      t = not_null(e_67);
      t = o_86(t);
      if(((j_67 != NULL) && (j_67 != t)))
        _fail(t);
      else
        j_67 = t;
      t = q_67(t);
      return(t);
    }
    t = not_null(z_66);
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = not_null(a_67);
    if(((d_67 != NULL) && (d_67 != t)))
      _fail(t);
    else
      d_67 = t;
    t = not_null(b_67);
    if(((e_67 != NULL) && (e_67 != t)))
      _fail(t);
    else
      e_67 = t;
    t = not_null(z_66);
    {
      ATerm g_67 = NULL;
      ATerm o_67 (ATerm t)
      {
        t = not_null(g_67);
        if(((f_67 != NULL) && (f_67 != t)))
          _fail(t);
        else
          f_67 = t;
        t = not_null(g_67);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_67));
      if(((g_67 != NULL) && (g_67 != t)))
        _fail(t);
      else
        g_67 = t;
      t = o_67(t);
      t = not_null(d_67);
      t = n_86(t);
      if(((h_67 != NULL) && (h_67 != t)))
        _fail(t);
      else
        h_67 = t;
      t = p_67(t);
    }
    return(t);
  }
  if(((z_66 != NULL) && (z_66 != t)))
    _fail(t);
  else
    z_66 = t;
  t = not_null(z_66);
  if(match_cons(t, sym_App_2))
    {
      a_67 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
      t = n_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  ATerm r_68 (ATerm t)
  {
    ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,j_68 = NULL;
    ATerm t_68 (ATerm t)
    {
      ATerm k_68 = NULL,l_68 = NULL;
      ATerm a_69 (ATerm t)
      {
        ATerm m_68 = NULL,n_68 = NULL;
        ATerm b_69 (ATerm t)
        {
          ATerm o_68 = NULL,p_68 = NULL;
          t = not_null(n_68);
          if(((o_68 != NULL) && (o_68 != t)))
            _fail(t);
          else
            o_68 = t;
          t = not_null(n_68);
          {
            ATerm q_68 = NULL;
            ATerm c_69 (ATerm t)
            {
              t = not_null(q_68);
              if(((p_68 != NULL) && (p_68 != t)))
                _fail(t);
              else
                p_68 = t;
              t = not_null(q_68);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(k_68), not_null(m_68), not_null(o_68)), not_null(h_68));
            if(((q_68 != NULL) && (q_68 != t)))
              _fail(t);
            else
              q_68 = t;
            t = c_69(t);
            t = not_null(p_68);
          }
          return(t);
        }
        t = not_null(l_68);
        if(((m_68 != NULL) && (m_68 != t)))
          _fail(t);
        else
          m_68 = t;
        t = not_null(g_68);
        t = b_87(t);
        if(((n_68 != NULL) && (n_68 != t)))
          _fail(t);
        else
          n_68 = t;
        t = b_69(t);
        return(t);
      }
      t = not_null(j_68);
      if(((k_68 != NULL) && (k_68 != t)))
        _fail(t);
      else
        k_68 = t;
      t = not_null(f_68);
      t = a_87(t);
      if(((l_68 != NULL) && (l_68 != t)))
        _fail(t);
      else
        l_68 = t;
      t = a_69(t);
      return(t);
    }
    t = not_null(z_67);
    if(((d_68 != NULL) && (d_68 != t)))
      _fail(t);
    else
      d_68 = t;
    t = not_null(a_68);
    if(((e_68 != NULL) && (e_68 != t)))
      _fail(t);
    else
      e_68 = t;
    t = not_null(b_68);
    if(((f_68 != NULL) && (f_68 != t)))
      _fail(t);
    else
      f_68 = t;
    t = not_null(c_68);
    if(((g_68 != NULL) && (g_68 != t)))
      _fail(t);
    else
      g_68 = t;
    t = not_null(z_67);
    {
      ATerm i_68 = NULL;
      ATerm s_68 (ATerm t)
      {
        t = not_null(i_68);
        if(((h_68 != NULL) && (h_68 != t)))
          _fail(t);
        else
          h_68 = t;
        t = not_null(i_68);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_68));
      if(((i_68 != NULL) && (i_68 != t)))
        _fail(t);
      else
        i_68 = t;
      t = s_68(t);
      t = not_null(e_68);
      t = z_86(t);
      if(((j_68 != NULL) && (j_68 != t)))
        _fail(t);
      else
        j_68 = t;
      t = t_68(t);
    }
    return(t);
  }
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  t = not_null(z_67);
  if(match_cons(t, sym_Con_3))
    {
      a_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
      c_68 = ATgetArgument(t, 2);
      t = r_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_21 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(r_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_21;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  ATerm s_69 (ATerm t)
  {
    ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
    t = not_null(j_69);
    if(((m_69 != NULL) && (m_69 != t)))
      _fail(t);
    else
      m_69 = t;
    t = not_null(k_69);
    if(((o_69 != NULL) && (o_69 != t)))
      _fail(t);
    else
      o_69 = t;
    t = not_null(l_69);
    if(((n_69 != NULL) && (n_69 != t)))
      _fail(t);
    else
      n_69 = t;
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_69)), (ATerm) ATmakeAppl(sym_Where_1, not_null(n_69))), not_null(m_69)));
    return(t);
  }
  ATerm t_69 (ATerm t)
  {
    ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
    t = not_null(j_69);
    if(((q_69 != NULL) && (q_69 != t)))
      _fail(t);
    else
      q_69 = t;
    t = not_null(k_69);
    if(((r_69 != NULL) && (r_69 != t)))
      _fail(t);
    else
      r_69 = t;
    t = not_null(l_69);
    if(((p_69 != NULL) && (p_69 != t)))
      _fail(t);
    else
      p_69 = t;
    t = not_null(h_69);
    t = not_null(q_69);
    t = pureterm_0_0(t);
    t = not_null(r_69);
    t = buildterm_0_0(t);
    t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(r_69))), (ATerm) ATmakeAppl(sym_Where_1, not_null(p_69))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_69))));
    return(t);
  }
  if(((h_69 != NULL) && (h_69 != t)))
    _fail(t);
  else
    h_69 = t;
  t = not_null(h_69);
  if(match_cons(t, sym_SRule_1))
    {
      i_69 = ATgetArgument(t, 0);
      t = not_null(i_69);
      if(match_cons(t, sym_StratRule_3))
        {
          j_69 = ATgetArgument(t, 0);
          k_69 = ATgetArgument(t, 1);
          l_69 = ATgetArgument(t, 2);
          t = s_69(t);
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              j_69 = ATgetArgument(t, 0);
              k_69 = ATgetArgument(t, 1);
              l_69 = ATgetArgument(t, 2);
              t = t_69(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  ATerm o_70 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,i_70 = NULL;
    ATerm q_70 (ATerm t)
    {
      ATerm j_70 = NULL,k_70 = NULL;
      ATerm r_70 (ATerm t)
      {
        ATerm l_70 = NULL,m_70 = NULL;
        t = not_null(k_70);
        if(((l_70 != NULL) && (l_70 != t)))
          _fail(t);
        else
          l_70 = t;
        t = not_null(k_70);
        {
          ATerm n_70 = NULL;
          ATerm s_70 (ATerm t)
          {
            t = not_null(n_70);
            if(((m_70 != NULL) && (m_70 != t)))
              _fail(t);
            else
              m_70 = t;
            t = not_null(n_70);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_70), not_null(l_70)), not_null(g_70));
          if(((n_70 != NULL) && (n_70 != t)))
            _fail(t);
          else
            n_70 = t;
          t = s_70(t);
          t = not_null(m_70);
        }
        return(t);
      }
      t = not_null(i_70);
      if(((j_70 != NULL) && (j_70 != t)))
        _fail(t);
      else
        j_70 = t;
      t = not_null(f_70);
      t = u_89(t);
      if(((k_70 != NULL) && (k_70 != t)))
        _fail(t);
      else
        k_70 = t;
      t = r_70(t);
      return(t);
    }
    t = not_null(a_70);
    if(((d_70 != NULL) && (d_70 != t)))
      _fail(t);
    else
      d_70 = t;
    t = not_null(b_70);
    if(((e_70 != NULL) && (e_70 != t)))
      _fail(t);
    else
      e_70 = t;
    t = not_null(c_70);
    if(((f_70 != NULL) && (f_70 != t)))
      _fail(t);
    else
      f_70 = t;
    t = not_null(a_70);
    {
      ATerm h_70 = NULL;
      ATerm p_70 (ATerm t)
      {
        t = not_null(h_70);
        if(((g_70 != NULL) && (g_70 != t)))
          _fail(t);
        else
          g_70 = t;
        t = not_null(h_70);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_70));
      if(((h_70 != NULL) && (h_70 != t)))
        _fail(t);
      else
        h_70 = t;
      t = p_70(t);
      t = not_null(e_70);
      t = t_89(t);
      if(((i_70 != NULL) && (i_70 != t)))
        _fail(t);
      else
        i_70 = t;
      t = q_70(t);
    }
    return(t);
  }
  if(((a_70 != NULL) && (a_70 != t)))
    _fail(t);
  else
    a_70 = t;
  t = not_null(a_70);
  if(match_cons(t, sym_Scope_2))
    {
      b_70 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
      t = o_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm t_70 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_104(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = SRTS_one(t_70, t);
      }
    return(t);
  }
  t = t_70(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  ATerm y_72 (ATerm t)
  {
    ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
    t = not_null(l_71);
    if(((o_71 != NULL) && (o_71 != t)))
      _fail(t);
    else
      o_71 = t;
    t = not_null(m_71);
    if(((p_71 != NULL) && (p_71 != t)))
      _fail(t);
    else
      p_71 = t;
    t = not_null(n_71);
    if(((q_71 != NULL) && (q_71 != t)))
      _fail(t);
    else
      q_71 = t;
    t = not_null(j_71);
    {
      ATerm z_71 = NULL;
      ATerm z_72 (ATerm t)
      {
        ATerm o_72 = NULL;
        ATerm b_73 (ATerm t)
        {
          ATerm x_72 = NULL;
          ATerm d_73 (ATerm t)
          {
            t = not_null(x_72);
            if(((y_71 != NULL) && (y_71 != t)))
              _fail(t);
            else
              y_71 = t;
            t = not_null(x_72);
            return(t);
          }
          t = not_null(o_72);
          if(((x_71 != NULL) && (x_71 != t)))
            _fail(t);
          else
            x_71 = t;
          t = not_null(p_71);
          {
            ATerm s_2 (ATerm t)
            {
              ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
              ATerm c_73 (ATerm t)
              {
                t = not_null(r_72);
                if(((v_71 != NULL) && (v_71 != t)))
                  _fail(t);
                else
                  v_71 = t;
                t = not_null(s_72);
                if(((u_71 != NULL) && (u_71 != t)))
                  _fail(t);
                else
                  u_71 = t;
                t = not_null(u_72);
                if(((s_71 != NULL) && (s_71 != t)))
                  _fail(t);
                else
                  s_71 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71));
                return(t);
              }
              if(((p_72 != NULL) && (p_72 != t)))
                _fail(t);
              else
                p_72 = t;
              t = not_null(p_72);
              if(match_cons(t, sym_Con_3))
                {
                  q_72 = ATgetArgument(t, 0);
                  s_72 = ATgetArgument(t, 1);
                  t_72 = ATgetArgument(t, 2);
                  t = not_null(q_72);
                  if(match_cons(t, sym_Var_1))
                    {
                      r_72 = ATgetArgument(t, 0);
                      t = not_null(t_72);
                      if(match_cons(t, sym_CallT_3))
                        {
                          u_72 = ATgetArgument(t, 0);
                          v_72 = ATgetArgument(t, 1);
                          w_72 = ATgetArgument(t, 2);
                          t = not_null(v_72);
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = not_null(w_72);
                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                {
                                  t = c_73(t);
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
            t = oncetd_1_0(s_2, t);
            if(((x_72 != NULL) && (x_72 != t)))
              _fail(t);
            else
              x_72 = t;
            t = d_73(t);
          }
          return(t);
        }
        t = not_null(z_71);
        if(((w_71 != NULL) && (w_71 != t)))
          _fail(t);
        else
          w_71 = t;
        t = not_null(o_71);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm a_72 = NULL,b_72 = NULL,g_72 = NULL,h_72 = NULL,n_72 = NULL;
            ATerm a_73 (ATerm t)
            {
              t = not_null(g_72);
              if(((v_71 != NULL) && (v_71 != t)))
                _fail(t);
              else
                v_71 = t;
              t = not_null(h_72);
              if(((t_71 != NULL) && (t_71 != t)))
                _fail(t);
              else
                t_71 = t;
              t = not_null(n_72);
              if(((r_71 != NULL) && (r_71 != t)))
                _fail(t);
              else
                r_71 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71));
              return(t);
            }
            if(((a_72 != NULL) && (a_72 != t)))
              _fail(t);
            else
              a_72 = t;
            t = not_null(a_72);
            if(match_cons(t, sym_Con_3))
              {
                b_72 = ATgetArgument(t, 0);
                h_72 = ATgetArgument(t, 1);
                n_72 = ATgetArgument(t, 2);
                t = not_null(b_72);
                if(match_cons(t, sym_Var_1))
                  {
                    g_72 = ATgetArgument(t, 0);
                    t = a_73(t);
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
          t = oncetd_1_0(t_2, t);
          if(((o_72 != NULL) && (o_72 != t)))
            _fail(t);
          else
            o_72 = t;
          t = b_73(t);
        }
        return(t);
      }
      t = new_0_0(t);
      if(((z_71 != NULL) && (z_71 != t)))
        _fail(t);
      else
        z_71 = t;
      t = z_72(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_71), not_null(y_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_71), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_71), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_71), not_null(u_71), term_u_18))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71)))))));
    }
    return(t);
  }
  if(((j_71 != NULL) && (j_71 != t)))
    _fail(t);
  else
    j_71 = t;
  t = not_null(j_71);
  if(match_cons(t, sym_SRule_1))
    {
      k_71 = ATgetArgument(t, 0);
      t = not_null(k_71);
      if(match_cons(t, sym_Rule_3))
        {
          l_71 = ATgetArgument(t, 0);
          m_71 = ATgetArgument(t, 1);
          n_71 = ATgetArgument(t, 2);
          t = y_72(t);
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
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm w_21 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(f_22);
      }
    else
      {
        t = w_21;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(u_2, t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  t = e_103(t);
  {
    ATerm v_2 (ATerm t)
    {
      t = topdown_1_0(e_103, t);
      return(t);
    }
    t = SRTS_all(v_2, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm i_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = i_22;
            {
              ATerm u_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = u_22;
                  {
                    ATerm w_22 = t;
                    int h_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(h_23);
                      }
                    else
                      {
                        t = w_22;
                        {
                          ATerm i_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = i_23;
                              t = Expl_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(x_2, t);
    }
    return(t);
  }
  t = topdown_1_0(w_2, t);
  return(t);
}
ATerm _0_0 (ATerm t)
{
  ATerm j_73 = NULL;
  ATerm r_73 (ATerm t)
  {
    ATerm k_73 = NULL,n_73 = NULL,p_73 = NULL;
    t = not_null(j_73);
    if(((k_73 != NULL) && (k_73 != t)))
      _fail(t);
    else
      k_73 = t;
    t = not_null(j_73);
    {
      ATerm k_23;
      k_23 = t;
      {
        ATerm o_73 = NULL;
        ATerm s_73 (ATerm t)
        {
          t = not_null(o_73);
          if(((n_73 != NULL) && (n_73 != t)))
            _fail(t);
          else
            n_73 = t;
          t = not_null(o_73);
          return(t);
        }
        t = SSLgetAnnotations(not_null(k_73));
        if(((o_73 != NULL) && (o_73 != t)))
          _fail(t);
        else
          o_73 = t;
        t = s_73(t);
      }
      t = k_23;
      {
        ATerm q_73 = NULL;
        ATerm t_73 (ATerm t)
        {
          t = not_null(q_73);
          if(((p_73 != NULL) && (p_73 != t)))
            _fail(t);
          else
            p_73 = t;
          t = not_null(q_73);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(n_73));
        if(((q_73 != NULL) && (q_73 != t)))
          _fail(t);
        else
          q_73 = t;
        t = t_73(t);
        t = not_null(p_73);
      }
    }
    return(t);
  }
  if(((j_73 != NULL) && (j_73 != t)))
    _fail(t);
  else
    j_73 = t;
  t = not_null(j_73);
  if(match_cons(t, sym__0))
    {
      t = r_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0_0 (ATerm t)
{
  ATerm h_74 = NULL;
  ATerm x_74 (ATerm t)
  {
    ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL,t_74 = NULL,v_74 = NULL;
    ATerm b_75 (ATerm t)
    {
      ATerm w_74 = NULL;
      t = not_null(v_74);
      if(((w_74 != NULL) && (w_74 != t)))
        _fail(t);
      else
        w_74 = t;
      t = not_null(w_74);
      return(t);
    }
    t = not_null(h_74);
    if(((i_74 != NULL) && (i_74 != t)))
      _fail(t);
    else
      i_74 = t;
    t = not_null(h_74);
    {
      ATerm r_23;
      r_23 = t;
      {
        ATerm l_74 = NULL;
        ATerm y_74 (ATerm t)
        {
          ATerm m_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
          ATerm z_74 (ATerm t)
          {
            t = not_null(r_74);
            if(((j_74 != NULL) && (j_74 != t)))
              _fail(t);
            else
              j_74 = t;
            t = not_null(s_74);
            if(((k_74 != NULL) && (k_74 != t)))
              _fail(t);
            else
              k_74 = t;
            t = not_null(o_74);
            return(t);
          }
          t = not_null(l_74);
          if(((m_74 != NULL) && (m_74 != t)))
            _fail(t);
          else
            m_74 = t;
          t = not_null(l_74);
          t = SSL_explode_term(not_null(m_74));
          if(((o_74 != NULL) && (o_74 != t)))
            _fail(t);
          else
            o_74 = t;
          t = not_null(o_74);
          if(match_cons(t, sym__2))
            {
              p_74 = ATgetArgument(t, 0);
              q_74 = ATgetArgument(t, 1);
              t = not_null(p_74);
              if(match_string(t, ""))
                {
                  t = not_null(q_74);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_74 = ATgetFirst((ATermList) t);
                      s_74 = (ATerm) ATgetNext((ATermList) t);
                      t = z_74(t);
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
        t = not_null(i_74);
        if(((l_74 != NULL) && (l_74 != t)))
          _fail(t);
        else
          l_74 = t;
        t = y_74(t);
      }
      t = r_23;
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm u_74 = NULL;
          ATerm a_75 (ATerm t)
          {
            t = not_null(u_74);
            if(((t_74 != NULL) && (t_74 != t)))
              _fail(t);
            else
              t_74 = t;
            t = not_null(u_74);
            return(t);
          }
          t = term_a_13;
          if(((u_74 != NULL) && (u_74 != t)))
            _fail(t);
          else
            u_74 = t;
          t = a_75(t);
        }
        t = s_23;
        t = SSL_mkterm(not_null(t_74), not_null(k_74));
        if(((v_74 != NULL) && (v_74 != t)))
          _fail(t);
        else
          v_74 = t;
        t = b_75(t);
      }
    }
    return(t);
  }
  if(((h_74 != NULL) && (h_74 != t)))
    _fail(t);
  else
    h_74 = t;
  t = x_74(t);
  return(t);
}
ATerm Thd_0_0 (ATerm t)
{
  t = Fst_0_0(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm s_75 = NULL,u_75 = NULL,w_75 = NULL;
  ATerm d_76 (ATerm t)
  {
    ATerm x_75 = NULL;
    t = not_null(w_75);
    if(((x_75 != NULL) && (x_75 != t)))
      _fail(t);
    else
      x_75 = t;
    t = not_null(x_75);
    return(t);
  }
  ATerm y_75 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_75 = NULL,q_75 = NULL;
        ATerm j_24;
        j_24 = t;
        {
          ATerm p_75 = NULL;
          ATerm z_75 (ATerm t)
          {
            t = not_null(p_75);
            if(((o_75 != NULL) && (o_75 != t)))
              _fail(t);
            else
              o_75 = t;
            t = not_null(p_75);
            return(t);
          }
          t = map_1_0(Thd_0_0, t);
          t = g_107(t);
          if(((p_75 != NULL) && (p_75 != t)))
            _fail(t);
          else
            p_75 = t;
          t = z_75(t);
        }
        t = j_24;
        {
          ATerm r_75 = NULL;
          ATerm a_76 (ATerm t)
          {
            t = not_null(r_75);
            if(((q_75 != NULL) && (q_75 != t)))
              _fail(t);
            else
              q_75 = t;
            t = not_null(r_75);
            return(t);
          }
          t = map_1_0(Ttl_0_0, t);
          t = y_75(t);
          if(((r_75 != NULL) && (r_75 != t)))
            _fail(t);
          else
            r_75 = t;
          t = a_76(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(q_75)), not_null(o_75));
        }
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = map_1_0(_0_0, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = y_75(t);
  {
    ATerm k_24;
    k_24 = t;
    {
      ATerm t_75 = NULL;
      ATerm b_76 (ATerm t)
      {
        t = not_null(t_75);
        if(((s_75 != NULL) && (s_75 != t)))
          _fail(t);
        else
          s_75 = t;
        t = not_null(t_75);
        return(t);
      }
      if(((t_75 != NULL) && (t_75 != t)))
        _fail(t);
      else
        t_75 = t;
      t = b_76(t);
    }
    t = k_24;
    {
      ATerm l_24;
      l_24 = t;
      {
        ATerm v_75 = NULL;
        ATerm c_76 (ATerm t)
        {
          t = not_null(v_75);
          if(((u_75 != NULL) && (u_75 != t)))
            _fail(t);
          else
            u_75 = t;
          t = not_null(v_75);
          return(t);
        }
        t = term_a_13;
        if(((v_75 != NULL) && (v_75 != t)))
          _fail(t);
        else
          v_75 = t;
        t = c_76(t);
      }
      t = l_24;
      t = SSL_mkterm(not_null(u_75), not_null(s_75));
      if(((w_75 != NULL) && (w_75 != t)))
        _fail(t);
      else
        w_75 = t;
      t = d_76(t);
    }
  }
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm m_76 = NULL;
  ATerm b_77 (ATerm t)
  {
    ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
    t = not_null(m_76);
    if(((n_76 != NULL) && (n_76 != t)))
      _fail(t);
    else
      n_76 = t;
    t = not_null(m_76);
    {
      ATerm r_76 = NULL;
      ATerm d_77 (ATerm t)
      {
        ATerm s_76 = NULL;
        ATerm e_77 (ATerm t)
        {
          ATerm t_76 = NULL;
          ATerm f_77 (ATerm t)
          {
            t = not_null(t_76);
            if(((q_76 != NULL) && (q_76 != t)))
              _fail(t);
            else
              q_76 = t;
            t = not_null(t_76);
            return(t);
          }
          t = not_null(s_76);
          if(((p_76 != NULL) && (p_76 != t)))
            _fail(t);
          else
            p_76 = t;
          t = not_null(s_76);
          t = new_0_0(t);
          if(((t_76 != NULL) && (t_76 != t)))
            _fail(t);
          else
            t_76 = t;
          t = f_77(t);
          return(t);
        }
        t = not_null(r_76);
        if(((o_76 != NULL) && (o_76 != t)))
          _fail(t);
        else
          o_76 = t;
        t = not_null(r_76);
        t = new_0_0(t);
        if(((s_76 != NULL) && (s_76 != t)))
          _fail(t);
        else
          s_76 = t;
        t = e_77(t);
        return(t);
      }
      t = new_0_0(t);
      if(((r_76 != NULL) && (r_76 != t)))
        _fail(t);
      else
        r_76 = t;
      t = d_77(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_18), term_r_18)), not_null(p_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_76)), not_null(q_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_76)));
    }
    return(t);
  }
  ATerm c_77 (ATerm t)
  {
    ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
    t = not_null(m_76);
    if(((u_76 != NULL) && (u_76 != t)))
      _fail(t);
    else
      u_76 = t;
    t = not_null(m_76);
    {
      ATerm y_76 = NULL;
      ATerm g_77 (ATerm t)
      {
        ATerm z_76 = NULL;
        ATerm h_77 (ATerm t)
        {
          ATerm a_77 = NULL;
          ATerm i_77 (ATerm t)
          {
            t = not_null(a_77);
            if(((x_76 != NULL) && (x_76 != t)))
              _fail(t);
            else
              x_76 = t;
            t = not_null(a_77);
            return(t);
          }
          t = not_null(z_76);
          if(((w_76 != NULL) && (w_76 != t)))
            _fail(t);
          else
            w_76 = t;
          t = not_null(z_76);
          t = new_0_0(t);
          if(((a_77 != NULL) && (a_77 != t)))
            _fail(t);
          else
            a_77 = t;
          t = i_77(t);
          return(t);
        }
        t = not_null(y_76);
        if(((v_76 != NULL) && (v_76 != t)))
          _fail(t);
        else
          v_76 = t;
        t = not_null(y_76);
        t = new_0_0(t);
        if(((z_76 != NULL) && (z_76 != t)))
          _fail(t);
        else
          z_76 = t;
        t = h_77(t);
        return(t);
      }
      t = new_0_0(t);
      if(((y_76 != NULL) && (y_76 != t)))
        _fail(t);
      else
        y_76 = t;
      t = g_77(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_18), term_r_18)), not_null(w_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_76)), not_null(x_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_76)));
    }
    return(t);
  }
  if(((m_76 != NULL) && (m_76 != t)))
    _fail(t);
  else
    m_76 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_77(t);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = c_77(t);
      }
  }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  ATerm q_77 (ATerm t)
  {
    ATerm o_77 = NULL,p_77 = NULL;
    t = not_null(m_77);
    if(((o_77 != NULL) && (o_77 != t)))
      _fail(t);
    else
      o_77 = t;
    t = not_null(n_77);
    if(((p_77 != NULL) && (p_77 != t)))
      _fail(t);
    else
      p_77 = t;
    t = not_null(l_77);
    {
      ATerm o_24 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(o_77), not_null(p_77));
          ;
          LocalPopChoice(i_25);
        }
      else
        {
          t = o_24;
          t = SSL_subtr(not_null(o_77), not_null(p_77));
        }
    }
    return(t);
  }
  if(((l_77 != NULL) && (l_77 != t)))
    _fail(t);
  else
    l_77 = t;
  t = not_null(l_77);
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
      t = q_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm f_78 = NULL,n_78 = NULL,o_78 = NULL;
    ATerm k_79 (ATerm t)
    {
      ATerm p_78 = NULL,q_78 = NULL;
      t = not_null(n_78);
      if(((p_78 != NULL) && (p_78 != t)))
        _fail(t);
      else
        p_78 = t;
      t = not_null(o_78);
      if(((q_78 != NULL) && (q_78 != t)))
        _fail(t);
      else
        q_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, not_null(p_78), not_null(q_78), (ATerm) ATempty);
      return(t);
    }
    if(((f_78 != NULL) && (f_78 != t)))
      _fail(t);
    else
      f_78 = t;
    t = not_null(f_78);
    if(match_cons(t, sym__2))
      {
        n_78 = ATgetArgument(t, 0);
        o_78 = ATgetArgument(t, 1);
        t = k_79(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm r_78 = NULL,s_78 = NULL,v_78 = NULL,w_78 = NULL;
    ATerm l_79 (ATerm t)
    {
      ATerm x_78 = NULL,y_78 = NULL;
      t = not_null(v_78);
      if(((x_78 != NULL) && (x_78 != t)))
        _fail(t);
      else
        x_78 = t;
      t = not_null(w_78);
      if(((y_78 != NULL) && (y_78 != t)))
        _fail(t);
      else
        y_78 = t;
      t = not_null(y_78);
      return(t);
    }
    if(((r_78 != NULL) && (r_78 != t)))
      _fail(t);
    else
      r_78 = t;
    t = not_null(r_78);
    if(match_cons(t, sym__3))
      {
        s_78 = ATgetArgument(t, 0);
        v_78 = ATgetArgument(t, 1);
        w_78 = ATgetArgument(t, 2);
        t = not_null(s_78);
        if(match_int(t, 0))
          {
            t = l_79(t);
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
  ATerm a_3 (ATerm t)
  {
    ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
    ATerm m_79 (ATerm t)
    {
      ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,i_79 = NULL;
      t = not_null(a_79);
      if(((d_79 != NULL) && (d_79 != t)))
        _fail(t);
      else
        d_79 = t;
      t = not_null(b_79);
      if(((e_79 != NULL) && (e_79 != t)))
        _fail(t);
      else
        e_79 = t;
      t = not_null(c_79);
      if(((f_79 != NULL) && (f_79 != t)))
        _fail(t);
      else
        f_79 = t;
      t = not_null(z_78);
      {
        ATerm j_25;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_79), term_z_7);
        t = geq_0_0(t);
        t = j_25;
        {
          ATerm k_25;
          k_25 = t;
          {
            ATerm h_79 = NULL;
            ATerm n_79 (ATerm t)
            {
              t = not_null(h_79);
              if(((g_79 != NULL) && (g_79 != t)))
                _fail(t);
              else
                g_79 = t;
              t = not_null(h_79);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_79), term_z_7);
            t = subt_0_0(t);
            if(((h_79 != NULL) && (h_79 != t)))
              _fail(t);
            else
              h_79 = t;
            t = n_79(t);
          }
          t = k_25;
          {
            ATerm j_79 = NULL;
            ATerm o_79 (ATerm t)
            {
              t = not_null(j_79);
              if(((i_79 != NULL) && (i_79 != t)))
                _fail(t);
              else
                i_79 = t;
              t = not_null(j_79);
              return(t);
            }
            t = not_null(e_79);
            t = j_117(t);
            if(((j_79 != NULL) && (j_79 != t)))
              _fail(t);
            else
              j_79 = t;
            t = o_79(t);
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_79), not_null(e_79), (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(i_79)));
          }
        }
      }
      return(t);
    }
    if(((z_78 != NULL) && (z_78 != t)))
      _fail(t);
    else
      z_78 = t;
    t = not_null(z_78);
    if(match_cons(t, sym__3))
      {
        a_79 = ATgetArgument(t, 0);
        b_79 = ATgetArgument(t, 1);
        c_79 = ATgetArgument(t, 2);
        t = m_79(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  ATerm m_80 (ATerm t)
  {
    ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL;
    t = not_null(c_80);
    if(((e_80 != NULL) && (e_80 != t)))
      _fail(t);
    else
      e_80 = t;
    t = not_null(d_80);
    if(((f_80 != NULL) && (f_80 != t)))
      _fail(t);
    else
      f_80 = t;
    t = not_null(b_80);
    {
      ATerm j_80 = NULL;
      ATerm n_80 (ATerm t)
      {
        ATerm k_80 = NULL;
        ATerm o_80 (ATerm t)
        {
          ATerm l_80 = NULL;
          ATerm p_80 (ATerm t)
          {
            t = not_null(l_80);
            if(((i_80 != NULL) && (i_80 != t)))
              _fail(t);
            else
              i_80 = t;
            t = not_null(l_80);
            return(t);
          }
          t = not_null(k_80);
          if(((h_80 != NULL) && (h_80 != t)))
            _fail(t);
          else
            h_80 = t;
          t = not_null(k_80);
          t = new_0_0(t);
          if(((l_80 != NULL) && (l_80 != t)))
            _fail(t);
          else
            l_80 = t;
          t = p_80(t);
          return(t);
        }
        t = not_null(j_80);
        if(((g_80 != NULL) && (g_80 != t)))
          _fail(t);
        else
          g_80 = t;
        t = not_null(j_80);
        t = new_0_0(t);
        if(((k_80 != NULL) && (k_80 != t)))
          _fail(t);
        else
          k_80 = t;
        t = o_80(t);
        return(t);
      }
      t = new_0_0(t);
      if(((j_80 != NULL) && (j_80 != t)))
        _fail(t);
      else
        j_80 = t;
      t = n_80(t);
      t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_80)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_80))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_80)))), (ATerm) ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_80))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_80))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_80), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_18), term_r_18)), not_null(h_80), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_80)), not_null(i_80), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_80)));
    }
    return(t);
  }
  if(((b_80 != NULL) && (b_80 != t)))
    _fail(t);
  else
    b_80 = t;
  t = not_null(b_80);
  if(match_cons(t, sym__2))
    {
      c_80 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
      t = m_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  ATerm w_80 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((t_80 != NULL) && (t_80 != t)))
    _fail(t);
  else
    t_80 = t;
  t = not_null(t_80);
  if(match_cons(t, sym__2))
    {
      u_80 = ATgetArgument(t, 0);
      v_80 = ATgetArgument(t, 1);
      t = not_null(v_80);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_80(t);
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
ATerm zipr_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1b_p__0_0, Zip2_0_0, Zip3_0_0, y_107, t);
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,l_81 = NULL;
  ATerm n_81 (ATerm t)
  {
    ATerm m_81 = NULL;
    t = not_null(l_81);
    if(((m_81 != NULL) && (m_81 != t)))
      _fail(t);
    else
      m_81 = t;
    t = not_null(m_81);
    return(t);
  }
  if(((z_80 != NULL) && (z_80 != t)))
    _fail(t);
  else
    z_80 = t;
  t = not_null(z_80);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_81 = ATgetFirst((ATermList) t);
      l_81 = (ATerm) ATgetNext((ATermList) t);
      t = n_81(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0_0 (ATerm t)
{
  ATerm r_81 = NULL,v_81 = NULL,w_81 = NULL;
  ATerm y_81 (ATerm t)
  {
    ATerm x_81 = NULL;
    t = not_null(v_81);
    if(((x_81 != NULL) && (x_81 != t)))
      _fail(t);
    else
      x_81 = t;
    t = not_null(x_81);
    return(t);
  }
  if(((r_81 != NULL) && (r_81 != t)))
    _fail(t);
  else
    r_81 = t;
  t = not_null(r_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_81 = ATgetFirst((ATermList) t);
      w_81 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(w_81);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_81(t);
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
ATerm last_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      t = Tl_0_0(t);
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  ATerm h_86 (ATerm t)
  {
    ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,e_85 = NULL;
    t = not_null(x_83);
    if(((c_84 != NULL) && (c_84 != t)))
      _fail(t);
    else
      c_84 = t;
    t = not_null(a_84);
    if(((d_84 != NULL) && (d_84 != t)))
      _fail(t);
    else
      d_84 = t;
    t = not_null(b_84);
    if(((e_84 != NULL) && (e_84 != t)))
      _fail(t);
    else
      e_84 = t;
    t = not_null(w_83);
    {
      ATerm n_25;
      n_25 = t;
      {
        ATerm o_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
        ATerm p_86 (ATerm t)
        {
          ATerm t_84 = NULL;
          ATerm s_86 (ATerm t)
          {
            ATerm u_84 = NULL,v_84 = NULL,y_84 = NULL,z_84 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL;
            ATerm t_86 (ATerm t)
            {
              t = not_null(v_84);
              if(((i_84 != NULL) && (i_84 != t)))
                _fail(t);
              else
                i_84 = t;
              t = not_null(y_84);
              if(((j_84 != NULL) && (j_84 != t)))
                _fail(t);
              else
                j_84 = t;
              t = not_null(z_84);
              if(((k_84 != NULL) && (k_84 != t)))
                _fail(t);
              else
                k_84 = t;
              t = not_null(b_85);
              if(((l_84 != NULL) && (l_84 != t)))
                _fail(t);
              else
                l_84 = t;
              t = not_null(c_85);
              if(((m_84 != NULL) && (m_84 != t)))
                _fail(t);
              else
                m_84 = t;
              t = not_null(d_85);
              if(((n_84 != NULL) && (n_84 != t)))
                _fail(t);
              else
                n_84 = t;
              t = not_null(u_84);
              return(t);
            }
            t = not_null(t_84);
            if(((f_84 != NULL) && (f_84 != t)))
              _fail(t);
            else
              f_84 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_84)), not_null(g_84)), not_null(h_84));
            t = zipr_1_0(MkThreadApplication_0_0, t);
            t = tuple_unzip_1_0(_id, t);
            if(((u_84 != NULL) && (u_84 != t)))
              _fail(t);
            else
              u_84 = t;
            t = not_null(u_84);
            if(match_cons(t, sym__6))
              {
                v_84 = ATgetArgument(t, 0);
                y_84 = ATgetArgument(t, 1);
                z_84 = ATgetArgument(t, 2);
                b_85 = ATgetArgument(t, 3);
                c_85 = ATgetArgument(t, 4);
                d_85 = ATgetArgument(t, 5);
                t = t_86(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(r_84);
          if(((g_84 != NULL) && (g_84 != t)))
            _fail(t);
          else
            g_84 = t;
          t = not_null(s_84);
          if(((h_84 != NULL) && (h_84 != t)))
            _fail(t);
          else
            h_84 = t;
          t = not_null(h_84);
          t = last_0_0(t);
          if(((t_84 != NULL) && (t_84 != t)))
            _fail(t);
          else
            t_84 = t;
          t = s_86(t);
          return(t);
        }
        ATerm p_84 = NULL;
        ATerm m_86 (ATerm t)
        {
          t = not_null(p_84);
          if(((o_84 != NULL) && (o_84 != t)))
            _fail(t);
          else
            o_84 = t;
          t = not_null(p_84);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_84), term_z_7);
        t = add_0_0(t);
        if(((p_84 != NULL) && (p_84 != t)))
          _fail(t);
        else
          p_84 = t;
        t = m_86(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_84), term_o_25);
        t = copy_1_0(new_0_0, t);
        if(((q_84 != NULL) && (q_84 != t)))
          _fail(t);
        else
          q_84 = t;
        t = not_null(q_84);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_84 = ATgetFirst((ATermList) t);
            s_84 = (ATerm) ATgetNext((ATermList) t);
            t = p_86(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = n_25;
      {
        ATerm g_85 = NULL;
        ATerm u_86 (ATerm t)
        {
          t = not_null(g_85);
          if(((e_85 != NULL) && (e_85 != t)))
            _fail(t);
          else
            e_85 = t;
          t = not_null(g_85);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_84)), not_null(k_84)), not_null(h_84));
        t = concat_0_0(t);
        if(((g_85 != NULL) && (g_85 != t)))
          _fail(t);
        else
          g_85 = t;
        t = u_86(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_84), term_p_25), not_null(j_84), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_85)), not_null(g_84)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_84))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_84), not_null(l_84)))), (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_84))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_84), not_null(n_84)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_84))))));
      }
    }
    return(t);
  }
  ATerm i_86 (ATerm t)
  {
    ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
    t = not_null(x_83);
    if(((h_85 != NULL) && (h_85 != t)))
      _fail(t);
    else
      h_85 = t;
    t = not_null(b_84);
    if(((i_85 != NULL) && (i_85 != t)))
      _fail(t);
    else
      i_85 = t;
    t = not_null(w_83);
    {
      ATerm k_85 = NULL;
      ATerm v_86 (ATerm t)
      {
        t = not_null(k_85);
        if(((j_85 != NULL) && (j_85 != t)))
          _fail(t);
        else
          j_85 = t;
        t = not_null(k_85);
        return(t);
      }
      t = new_0_0(t);
      if(((k_85 != NULL) && (k_85 != t)))
        _fail(t);
      else
        k_85 = t;
      t = v_86(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_85), term_p_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_85), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_85), (ATerm) ATempty))), term_u_18))));
    }
    return(t);
  }
  ATerm l_86 (ATerm t)
  {
    ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,d_86 = NULL;
    t = not_null(x_83);
    if(((l_85 != NULL) && (l_85 != t)))
      _fail(t);
    else
      l_85 = t;
    t = not_null(a_84);
    if(((m_85 != NULL) && (m_85 != t)))
      _fail(t);
    else
      m_85 = t;
    t = not_null(b_84);
    if(((n_85 != NULL) && (n_85 != t)))
      _fail(t);
    else
      n_85 = t;
    t = not_null(w_83);
    {
      ATerm q_25;
      q_25 = t;
      {
        ATerm v_85 = NULL;
        ATerm w_86 (ATerm t)
        {
          ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
          ATerm x_86 (ATerm t)
          {
            t = not_null(x_85);
            if(((p_85 != NULL) && (p_85 != t)))
              _fail(t);
            else
              p_85 = t;
            t = not_null(y_85);
            if(((q_85 != NULL) && (q_85 != t)))
              _fail(t);
            else
              q_85 = t;
            t = not_null(z_85);
            if(((r_85 != NULL) && (r_85 != t)))
              _fail(t);
            else
              r_85 = t;
            t = not_null(a_86);
            if(((s_85 != NULL) && (s_85 != t)))
              _fail(t);
            else
              s_85 = t;
            t = not_null(b_86);
            if(((t_85 != NULL) && (t_85 != t)))
              _fail(t);
            else
              t_85 = t;
            t = not_null(c_86);
            if(((u_85 != NULL) && (u_85 != t)))
              _fail(t);
            else
              u_85 = t;
            t = not_null(w_85);
            return(t);
          }
          t = not_null(v_85);
          if(((o_85 != NULL) && (o_85 != t)))
            _fail(t);
          else
            o_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_85), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_85)));
          t = copy_1_0(MkDistApplication_0_0, t);
          t = tuple_unzip_1_0(_id, t);
          if(((w_85 != NULL) && (w_85 != t)))
            _fail(t);
          else
            w_85 = t;
          t = not_null(w_85);
          if(match_cons(t, sym__6))
            {
              x_85 = ATgetArgument(t, 0);
              y_85 = ATgetArgument(t, 1);
              z_85 = ATgetArgument(t, 2);
              a_86 = ATgetArgument(t, 3);
              b_86 = ATgetArgument(t, 4);
              c_86 = ATgetArgument(t, 5);
              t = x_86(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = new_0_0(t);
        if(((v_85 != NULL) && (v_85 != t)))
          _fail(t);
        else
          v_85 = t;
        t = w_86(t);
      }
      t = q_25;
      {
        ATerm e_86 = NULL;
        ATerm y_86 (ATerm t)
        {
          t = not_null(e_86);
          if(((d_86 != NULL) && (d_86 != t)))
            _fail(t);
          else
            d_86 = t;
          t = not_null(e_86);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_85), not_null(t_85));
        t = conc_0_0(t);
        if(((e_86 != NULL) && (e_86 != t)))
          _fail(t);
        else
          e_86 = t;
        t = y_86(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_85), term_r_25), not_null(q_85), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(d_86)), not_null(o_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_85), not_null(s_85)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(l_85), not_null(u_85)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_85))))));
      }
    }
    return(t);
  }
  if(((w_83 != NULL) && (w_83 != t)))
    _fail(t);
  else
    w_83 = t;
  t = not_null(w_83);
  if(match_cons(t, sym__3))
    {
      x_83 = ATgetArgument(t, 0);
      y_83 = ATgetArgument(t, 1);
      z_83 = ATgetArgument(t, 2);
      t = not_null(y_83);
      if(match_string(t, "T"))
        {
          t = not_null(z_83);
          if(match_cons(t, sym__2))
            {
              a_84 = ATgetArgument(t, 0);
              b_84 = ATgetArgument(t, 1);
              t = not_null(a_84);
              if(match_int(t, 0))
                {
                  ATerm s_25 = t;
                  int t_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_86(t);
                      ;
                      LocalPopChoice(t_25);
                    }
                  else
                    {
                      t = s_25;
                      t = i_86(t);
                    }
                }
              else
                {
                  t = h_86(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(t, "D"))
            {
              t = not_null(z_83);
              if(match_cons(t, sym__2))
                {
                  a_84 = ATgetArgument(t, 0);
                  b_84 = ATgetArgument(t, 1);
                  t = l_86(t);
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  ATerm u_87 (ATerm t)
  {
    ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
    t = not_null(k_87);
    if(((o_87 != NULL) && (o_87 != t)))
      _fail(t);
    else
      o_87 = t;
    t = not_null(l_87);
    if(((p_87 != NULL) && (p_87 != t)))
      _fail(t);
    else
      p_87 = t;
    t = not_null(m_87);
    if(((q_87 != NULL) && (q_87 != t)))
      _fail(t);
    else
      q_87 = t;
    t = not_null(n_87);
    if(((r_87 != NULL) && (r_87 != t)))
      _fail(t);
    else
      r_87 = t;
    t = not_null(h_87);
    {
      ATerm t_87 = NULL;
      ATerm v_87 (ATerm t)
      {
        t = not_null(t_87);
        if(((s_87 != NULL) && (s_87 != t)))
          _fail(t);
        else
          s_87 = t;
        t = not_null(t_87);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(o_87), not_null(p_87), not_null(q_87));
      t = DefineCongruence_0_0(t);
      t = desugar_0_0(t);
      if(((t_87 != NULL) && (t_87 != t)))
        _fail(t);
      else
        t_87 = t;
      t = v_87(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), not_null(r_87));
    }
    return(t);
  }
  if(((h_87 != NULL) && (h_87 != t)))
    _fail(t);
  else
    h_87 = t;
  t = not_null(h_87);
  if(match_cons(t, sym__2))
    {
      i_87 = ATgetArgument(t, 0);
      n_87 = ATgetArgument(t, 1);
      t = not_null(i_87);
      if(match_cons(t, sym__2))
        {
          j_87 = ATgetArgument(t, 0);
          m_87 = ATgetArgument(t, 1);
          t = not_null(j_87);
          if(match_cons(t, sym_Mod_2))
            {
              k_87 = ATgetArgument(t, 0);
              l_87 = ATgetArgument(t, 1);
              t = u_87(t);
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
ATerm get_definition_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      t = OverloadedDef_0_0(t);
      t = _2_0(joindefs_0_0, _id, t);
    }
  return(t);
}
ATerm GnUndefined_0_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  ATerm n_88 (ATerm t)
  {
    ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
    t = not_null(b_88);
    if(((l_88 != NULL) && (l_88 != t)))
      _fail(t);
    else
      l_88 = t;
    t = not_null(c_88);
    if(((h_88 != NULL) && (h_88 != t)))
      _fail(t);
    else
      h_88 = t;
    t = not_null(d_88);
    if(((i_88 != NULL) && (i_88 != t)))
      _fail(t);
    else
      i_88 = t;
    t = not_null(e_88);
    if(((j_88 != NULL) && (j_88 != t)))
      _fail(t);
    else
      j_88 = t;
    t = not_null(f_88);
    if(((k_88 != NULL) && (k_88 != t)))
      _fail(t);
    else
      k_88 = t;
    t = not_null(g_88);
    if(((m_88 != NULL) && (m_88 != t)))
      _fail(t);
    else
      m_88 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(h_88), not_null(i_88), not_null(j_88), not_null(k_88), (ATerm) ATinsert(CheckATermList(not_null(m_88)), not_null(l_88)));
    return(t);
  }
  if(((z_87 != NULL) && (z_87 != t)))
    _fail(t);
  else
    z_87 = t;
  t = not_null(z_87);
  if(match_cons(t, sym__5))
    {
      a_88 = ATgetArgument(t, 0);
      d_88 = ATgetArgument(t, 1);
      e_88 = ATgetArgument(t, 2);
      f_88 = ATgetArgument(t, 3);
      g_88 = ATgetArgument(t, 4);
      t = not_null(a_88);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_88 = ATgetFirst((ATermList) t);
          c_88 = (ATerm) ATgetNext((ATermList) t);
          t = n_88(t);
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
ATerm diff_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  ATerm v_88 (ATerm t)
  {
    ATerm t_88 = NULL,u_88 = NULL;
    t = not_null(r_88);
    if(((u_88 != NULL) && (u_88 != t)))
      _fail(t);
    else
      u_88 = t;
    t = not_null(s_88);
    if(((t_88 != NULL) && (t_88 != t)))
      _fail(t);
    else
      t_88 = t;
    t = not_null(u_88);
    {
      ATerm w_88 (ATerm t)
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_3 (ATerm t)
                  {
                    t = not_null(t_88);
                    return(t);
                  }
                  t = HdMember_p__2_0(j_114, b_3, t);
                  t = w_88(t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  t = Cons_2_0(_id, w_88, t);
                }
            }
          }
        return(t);
      }
      t = w_88(t);
    }
    return(t);
  }
  if(((q_88 != NULL) && (q_88 != t)))
    _fail(t);
  else
    q_88 = t;
  t = not_null(q_88);
  if(match_cons(t, sym__2))
    {
      r_88 = ATgetArgument(t, 0);
      s_88 = ATgetArgument(t, 1);
      t = v_88(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
  ATerm i_89 (ATerm t)
  {
    ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
    t = not_null(b_89);
    if(((g_89 != NULL) && (g_89 != t)))
      _fail(t);
    else
      g_89 = t;
    t = not_null(d_89);
    if(((f_89 != NULL) && (f_89 != t)))
      _fail(t);
    else
      f_89 = t;
    t = not_null(e_89);
    if(((h_89 != NULL) && (h_89 != t)))
      _fail(t);
    else
      h_89 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_89)), not_null(f_89)), not_null(h_89));
    return(t);
  }
  if(((a_89 != NULL) && (a_89 != t)))
    _fail(t);
  else
    a_89 = t;
  t = not_null(a_89);
  if(match_cons(t, sym__2))
    {
      b_89 = ATgetArgument(t, 0);
      c_89 = ATgetArgument(t, 1);
      t = not_null(c_89);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_89 = ATgetFirst((ATermList) t);
          e_89 = (ATerm) ATgetNext((ATermList) t);
          t = i_89(t);
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
ATerm Zip3_0_0 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  ATerm s_89 (ATerm t)
  {
    ATerm q_89 = NULL,r_89 = NULL;
    t = not_null(o_89);
    if(((q_89 != NULL) && (q_89 != t)))
      _fail(t);
    else
      q_89 = t;
    t = not_null(p_89);
    if(((r_89 != NULL) && (r_89 != t)))
      _fail(t);
    else
      r_89 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(r_89)), not_null(q_89));
    return(t);
  }
  if(((n_89 != NULL) && (n_89 != t)))
    _fail(t);
  else
    n_89 = t;
  t = not_null(n_89);
  if(match_cons(t, sym__2))
    {
      o_89 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
      t = s_89(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
  ATerm m_90 (ATerm t)
  {
    ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
    t = not_null(b_90);
    if(((i_90 != NULL) && (i_90 != t)))
      _fail(t);
    else
      i_90 = t;
    t = not_null(c_90);
    if(((k_90 != NULL) && (k_90 != t)))
      _fail(t);
    else
      k_90 = t;
    t = not_null(e_90);
    if(((j_90 != NULL) && (j_90 != t)))
      _fail(t);
    else
      j_90 = t;
    t = not_null(f_90);
    if(((l_90 != NULL) && (l_90 != t)))
      _fail(t);
    else
      l_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_90), not_null(j_90)), (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(l_90)));
    return(t);
  }
  if(((z_89 != NULL) && (z_89 != t)))
    _fail(t);
  else
    z_89 = t;
  t = not_null(z_89);
  if(match_cons(t, sym__2))
    {
      a_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
      t = not_null(a_90);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_90 = ATgetFirst((ATermList) t);
          c_90 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_90);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_90 = ATgetFirst((ATermList) t);
              f_90 = (ATerm) ATgetNext((ATermList) t);
              t = m_90(t);
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
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
  ATerm x_90 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  if(((u_90 != NULL) && (u_90 != t)))
    _fail(t);
  else
    u_90 = t;
  t = not_null(u_90);
  if(match_cons(t, sym__2))
    {
      v_90 = ATgetArgument(t, 0);
      w_90 = ATgetArgument(t, 1);
      t = not_null(v_90);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = not_null(w_90);
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = x_90(t);
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
ATerm genzip_4_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t)
{
  ATerm y_90 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_107(t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = r_107(t);
        t = _2_0(t_107, y_90, t);
        t = s_107(t);
      }
    return(t);
  }
  t = y_90(t);
  return(t);
}
ATerm zip_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  t = genzip_4_0(Zip1_0_0, Zip2_0_0, Zip3_0_0, v_107, t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
  ATerm p_92 (ATerm t)
  {
    ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL,h_92 = NULL,n_92 = NULL;
    t = not_null(l_91);
    if(((o_91 != NULL) && (o_91 != t)))
      _fail(t);
    else
      o_91 = t;
    t = not_null(m_91);
    if(((p_91 != NULL) && (p_91 != t)))
      _fail(t);
    else
      p_91 = t;
    t = not_null(n_91);
    if(((q_91 != NULL) && (q_91 != t)))
      _fail(t);
    else
      q_91 = t;
    t = not_null(j_91);
    {
      ATerm c_26;
      c_26 = t;
      {
        ATerm t_91 = NULL;
        ATerm q_92 (ATerm t)
        {
          ATerm w_91 = NULL,x_91 = NULL,f_92 = NULL,g_92 = NULL;
          ATerm r_92 (ATerm t)
          {
            t = not_null(f_92);
            if(((r_91 != NULL) && (r_91 != t)))
              _fail(t);
            else
              r_91 = t;
            t = not_null(g_92);
            if(((s_91 != NULL) && (s_91 != t)))
              _fail(t);
            else
              s_91 = t;
            t = not_null(x_91);
            return(t);
          }
          t = not_null(t_91);
          if(((w_91 != NULL) && (w_91 != t)))
            _fail(t);
          else
            w_91 = t;
          t = not_null(t_91);
          t = SSL_explode_term(not_null(w_91));
          if(((x_91 != NULL) && (x_91 != t)))
            _fail(t);
          else
            x_91 = t;
          t = not_null(x_91);
          if(match_cons(t, sym__2))
            {
              f_92 = ATgetArgument(t, 0);
              g_92 = ATgetArgument(t, 1);
              t = r_92(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = not_null(p_91);
        if(((t_91 != NULL) && (t_91 != t)))
          _fail(t);
        else
          t_91 = t;
        t = q_92(t);
      }
      t = c_26;
      {
        ATerm d_26;
        d_26 = t;
        {
          ATerm i_92 = NULL;
          ATerm s_92 (ATerm t)
          {
            ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
            ATerm t_92 (ATerm t)
            {
              t = not_null(l_92);
              if(((r_91 != NULL) && (r_91 != t)))
                _fail(t);
              else
                r_91 = t;
              t = not_null(m_92);
              if(((h_92 != NULL) && (h_92 != t)))
                _fail(t);
              else
                h_92 = t;
              t = not_null(k_92);
              return(t);
            }
            t = not_null(i_92);
            if(((j_92 != NULL) && (j_92 != t)))
              _fail(t);
            else
              j_92 = t;
            t = not_null(i_92);
            t = SSL_explode_term(not_null(j_92));
            if(((k_92 != NULL) && (k_92 != t)))
              _fail(t);
            else
              k_92 = t;
            t = not_null(k_92);
            if(match_cons(t, sym__2))
              {
                l_92 = ATgetArgument(t, 0);
                m_92 = ATgetArgument(t, 1);
                t = t_92(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = not_null(o_91);
          if(((i_92 != NULL) && (i_92 != t)))
            _fail(t);
          else
            i_92 = t;
          t = s_92(t);
        }
        t = d_26;
        {
          ATerm o_92 = NULL;
          ATerm u_92 (ATerm t)
          {
            t = not_null(o_92);
            if(((n_92 != NULL) && (n_92 != t)))
              _fail(t);
            else
              n_92 = t;
            t = not_null(o_92);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(s_91));
          t = zip_1_0(_id, t);
          if(((o_92 != NULL) && (o_92 != t)))
            _fail(t);
          else
            o_92 = t;
          t = u_92(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_92), not_null(q_91));
          t = conc_0_0(t);
        }
      }
    }
    return(t);
  }
  if(((j_91 != NULL) && (j_91 != t)))
    _fail(t);
  else
    j_91 = t;
  t = not_null(j_91);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_91 = ATgetFirst((ATermList) t);
      n_91 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(k_91);
      if(match_cons(t, sym__2))
        {
          l_91 = ATgetArgument(t, 0);
          m_91 = ATgetArgument(t, 1);
          t = p_92(t);
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
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  ATerm f_93 (ATerm t)
  {
    ATerm d_93 = NULL,e_93 = NULL;
    t = not_null(a_93);
    if(((d_93 != NULL) && (d_93 != t)))
      _fail(t);
    else
      d_93 = t;
    t = not_null(b_93);
    if(((d_93 != NULL) && (d_93 != t)))
      _fail(t);
    else
      d_93 = t;
    t = not_null(c_93);
    if(((e_93 != NULL) && (e_93 != t)))
      _fail(t);
    else
      e_93 = t;
    t = not_null(e_93);
    return(t);
  }
  if(((y_92 != NULL) && (y_92 != t)))
    _fail(t);
  else
    y_92 = t;
  t = not_null(y_92);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_92 = ATgetFirst((ATermList) t);
      c_93 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(z_92);
      if(match_cons(t, sym__2))
        {
          a_93 = ATgetArgument(t, 0);
          b_93 = ATgetArgument(t, 1);
          t = f_93(t);
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
ATerm diff_0_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm h_93 = NULL;
        ATerm j_93 (ATerm t)
        {
          ATerm i_93 = NULL;
          t = not_null(h_93);
          if(((i_93 != NULL) && (i_93 != t)))
            _fail(t);
          else
            i_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_93));
          return(t);
        }
        if(((h_93 != NULL) && (h_93 != t)))
          _fail(t);
        else
          h_93 = t;
        t = j_93(t);
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = _2_0(_id, Nil_0_0, t);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm z_28 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0_0(t);
                  ;
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, f_3, t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = z_28;
            t = UfShift_0_0(t);
          }
        return(t);
      }
      t = for_3_0(c_3, d_3, e_3, t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = diff_1_0(eq_0_0, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL;
  ATerm z_94 (ATerm t)
  {
    ATerm c_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,t_94 = NULL,v_94 = NULL,x_94 = NULL;
    t = not_null(w_93);
    if(((c_94 != NULL) && (c_94 != t)))
      _fail(t);
    else
      c_94 = t;
    t = not_null(x_93);
    if(((f_94 != NULL) && (f_94 != t)))
      _fail(t);
    else
      f_94 = t;
    t = not_null(y_93);
    if(((g_94 != NULL) && (g_94 != t)))
      _fail(t);
    else
      g_94 = t;
    t = not_null(z_93);
    if(((h_94 != NULL) && (h_94 != t)))
      _fail(t);
    else
      h_94 = t;
    t = not_null(a_94);
    if(((i_94 != NULL) && (i_94 != t)))
      _fail(t);
    else
      i_94 = t;
    t = not_null(b_94);
    if(((j_94 != NULL) && (j_94 != t)))
      _fail(t);
    else
      j_94 = t;
    t = not_null(u_93);
    {
      ATerm i_29;
      i_29 = t;
      {
        ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
        ATerm a_95 (ATerm t)
        {
          ATerm r_94 = NULL;
          ATerm b_95 (ATerm t)
          {
            ATerm s_94 = NULL;
            ATerm c_95 (ATerm t)
            {
              t = not_null(s_94);
              if(((n_94 != NULL) && (n_94 != t)))
                _fail(t);
              else
                n_94 = t;
              t = not_null(s_94);
              return(t);
            }
            t = not_null(r_94);
            if(((m_94 != NULL) && (m_94 != t)))
              _fail(t);
            else
              m_94 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_94), not_null(g_94));
            t = diff_0_0(t);
            if(((s_94 != NULL) && (s_94 != t)))
              _fail(t);
            else
              s_94 = t;
            t = c_95(t);
            return(t);
          }
          t = not_null(p_94);
          if(((l_94 != NULL) && (l_94 != t)))
            _fail(t);
          else
            l_94 = t;
          t = not_null(q_94);
          if(((k_94 != NULL) && (k_94 != t)))
            _fail(t);
          else
            k_94 = t;
          t = not_null(l_94);
          t = i_129(t);
          if(((r_94 != NULL) && (r_94 != t)))
            _fail(t);
          else
            r_94 = t;
          t = b_95(t);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_94), not_null(h_94));
        t = h_129(t);
        if(((o_94 != NULL) && (o_94 != t)))
          _fail(t);
        else
          o_94 = t;
        t = not_null(o_94);
        if(match_cons(t, sym__2))
          {
            p_94 = ATgetArgument(t, 0);
            q_94 = ATgetArgument(t, 1);
            t = a_95(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = i_29;
      {
        ATerm v_29;
        v_29 = t;
        {
          ATerm u_94 = NULL;
          ATerm d_95 (ATerm t)
          {
            t = not_null(u_94);
            if(((t_94 != NULL) && (t_94 != t)))
              _fail(t);
            else
              t_94 = t;
            t = not_null(u_94);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), not_null(f_94));
          t = conc_0_0(t);
          if(((u_94 != NULL) && (u_94 != t)))
            _fail(t);
          else
            u_94 = t;
          t = d_95(t);
        }
        t = v_29;
        {
          ATerm w_29;
          w_29 = t;
          {
            ATerm w_94 = NULL;
            ATerm e_95 (ATerm t)
            {
              t = not_null(w_94);
              if(((v_94 != NULL) && (v_94 != t)))
                _fail(t);
              else
                v_94 = t;
              t = not_null(w_94);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), not_null(g_94));
            t = conc_0_0(t);
            if(((w_94 != NULL) && (w_94 != t)))
              _fail(t);
            else
              w_94 = t;
            t = e_95(t);
          }
          t = w_29;
          {
            ATerm y_94 = NULL;
            ATerm f_95 (ATerm t)
            {
              t = not_null(y_94);
              if(((x_94 != NULL) && (x_94 != t)))
                _fail(t);
              else
                x_94 = t;
              t = not_null(y_94);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_94), not_null(l_94), not_null(i_94));
            t = j_129(t);
            if(((y_94 != NULL) && (y_94 != t)))
              _fail(t);
            else
              y_94 = t;
            t = f_95(t);
            t = (ATerm) ATmakeAppl(sym__5, not_null(t_94), not_null(v_94), not_null(k_94), not_null(x_94), not_null(j_94));
          }
        }
      }
    }
    return(t);
  }
  if(((u_93 != NULL) && (u_93 != t)))
    _fail(t);
  else
    u_93 = t;
  t = not_null(u_93);
  if(match_cons(t, sym__5))
    {
      v_93 = ATgetArgument(t, 0);
      y_93 = ATgetArgument(t, 1);
      z_93 = ATgetArgument(t, 2);
      a_94 = ATgetArgument(t, 3);
      b_94 = ATgetArgument(t, 4);
      t = not_null(v_93);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_93 = ATgetFirst((ATermList) t);
          x_93 = (ATerm) ATgetNext((ATermList) t);
          t = z_94(t);
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
ATerm GnExit_0_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  ATerm t_95 (ATerm t)
  {
    ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
    t = not_null(l_95);
    if(((p_95 != NULL) && (p_95 != t)))
      _fail(t);
    else
      p_95 = t;
    t = not_null(m_95);
    if(((q_95 != NULL) && (q_95 != t)))
      _fail(t);
    else
      q_95 = t;
    t = not_null(n_95);
    if(((r_95 != NULL) && (r_95 != t)))
      _fail(t);
    else
      r_95 = t;
    t = not_null(o_95);
    if(((s_95 != NULL) && (s_95 != t)))
      _fail(t);
    else
      s_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_95), not_null(s_95));
    return(t);
  }
  if(((j_95 != NULL) && (j_95 != t)))
    _fail(t);
  else
    j_95 = t;
  t = not_null(j_95);
  if(match_cons(t, sym__5))
    {
      k_95 = ATgetArgument(t, 0);
      l_95 = ATgetArgument(t, 1);
      m_95 = ATgetArgument(t, 2);
      n_95 = ATgetArgument(t, 3);
      o_95 = ATgetArgument(t, 4);
      t = not_null(k_95);
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_95(t);
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
ATerm GnInitRoots_0_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  ATerm d_96 (ATerm t)
  {
    ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
    t = not_null(x_95);
    if(((a_96 != NULL) && (a_96 != t)))
      _fail(t);
    else
      a_96 = t;
    t = not_null(y_95);
    if(((b_96 != NULL) && (b_96 != t)))
      _fail(t);
    else
      b_96 = t;
    t = not_null(z_95);
    if(((c_96 != NULL) && (c_96 != t)))
      _fail(t);
    else
      c_96 = t;
    t = (ATerm) ATmakeAppl(sym__5, not_null(a_96), not_null(a_96), not_null(b_96), not_null(c_96), (ATerm) ATempty);
    return(t);
  }
  if(((w_95 != NULL) && (w_95 != t)))
    _fail(t);
  else
    w_95 = t;
  t = not_null(w_95);
  if(match_cons(t, sym__3))
    {
      x_95 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
      z_95 = ATgetArgument(t, 2);
      t = d_96(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm e_96 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_114(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = b_114(t);
        t = e_96(t);
      }
    return(t);
  }
  t = e_96(t);
  return(t);
}
ATerm for_3_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  t = d_114(t);
  t = while_not_2_0(e_114, f_114, t);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3_0(s_128, t_128, u_128, t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = GnUndefined_0_0(t);
      }
    return(t);
  }
  t = for_3_0(GnInitRoots_0_0, GnExit_0_0, g_3, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = svars_arity_0_0(t);
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1_0(DefinitionExists_0_0, t);
        return(t);
      }
      t = map_1_0(j_3, t);
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
    ATerm n_96 (ATerm t)
    {
      ATerm l_96 = NULL,m_96 = NULL;
      t = not_null(j_96);
      if(((l_96 != NULL) && (l_96 != t)))
        _fail(t);
      else
        l_96 = t;
      t = not_null(k_96);
      if(((m_96 != NULL) && (m_96 != t)))
        _fail(t);
      else
        m_96 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(m_96)), not_null(l_96));
      return(t);
    }
    if(((h_96 != NULL) && (h_96 != t)))
      _fail(t);
    else
      h_96 = t;
    t = not_null(h_96);
    if(match_cons(t, sym__3))
      {
        i_96 = ATgetArgument(t, 0);
        j_96 = ATgetArgument(t, 1);
        k_96 = ATgetArgument(t, 2);
        t = n_96(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3_0(get_definition_0_0, h_3, i_3, t);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0_0(t);
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = MissingDefs_0_0(t);
        t = term_z_7;
        t = exit_0_0(t);
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  ATerm f_97 (ATerm t)
  {
    ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL;
    t = not_null(u_96);
    if(((w_96 != NULL) && (w_96 != t)))
      _fail(t);
    else
      w_96 = t;
    t = not_null(v_96);
    if(((x_96 != NULL) && (x_96 != t)))
      _fail(t);
    else
      x_96 = t;
    t = not_null(t_96);
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm b_97 = NULL;
        ATerm g_97 (ATerm t)
        {
          ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
          ATerm h_97 (ATerm t)
          {
            t = not_null(d_97);
            if(((z_96 != NULL) && (z_96 != t)))
              _fail(t);
            else
              z_96 = t;
            t = not_null(e_97);
            if(((a_97 != NULL) && (a_97 != t)))
              _fail(t);
            else
              a_97 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_96), term_e_30, (ATerm) ATinsert(CheckATermList(not_null(a_97)), (ATerm) ATinsert(CheckATermList(not_null(z_96)), not_null(w_96))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(b_97);
          if(((y_96 != NULL) && (y_96 != t)))
            _fail(t);
          else
            y_96 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(y_96), not_null(w_96), not_null(x_96));
          t = table_push_0_0(t);
          {
            ATerm f_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_96), term_e_30);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(g_30);
              }
            else
              {
                t = f_30;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((c_97 != NULL) && (c_97 != t)))
              _fail(t);
            else
              c_97 = t;
            t = not_null(c_97);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_97 = ATgetFirst((ATermList) t);
                e_97 = (ATerm) ATgetNext((ATermList) t);
                t = h_97(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = q_129(t);
        if(((b_97 != NULL) && (b_97 != t)))
          _fail(t);
        else
          b_97 = t;
        t = g_97(t);
      }
      t = d_30;
    }
    return(t);
  }
  if(((t_96 != NULL) && (t_96 != t)))
    _fail(t);
  else
    t_96 = t;
  t = not_null(t_96);
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
      t = f_97(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm q_97 = NULL;
  ATerm d_98 (ATerm t)
  {
    ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
    t = not_null(q_97);
    if(((r_97 != NULL) && (r_97 != t)))
      _fail(t);
    else
      r_97 = t;
    t = not_null(q_97);
    if(((s_97 != NULL) && (s_97 != t)))
      _fail(t);
    else
      s_97 = t;
    t = not_null(q_97);
    {
      ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL;
      ATerm f_98 (ATerm t)
      {
        t = not_null(w_97);
        if(((t_97 != NULL) && (t_97 != t)))
          _fail(t);
        else
          t_97 = t;
        t = not_null(u_97);
        return(t);
      }
      t = not_null(r_97);
      {
        ATerm k_3 (ATerm t)
        {
          t = term_h_30;
          return(t);
        }
        t = rewrite_1_0(k_3, t);
        if(((u_97 != NULL) && (u_97 != t)))
          _fail(t);
        else
          u_97 = t;
        t = not_null(u_97);
        if(match_cons(t, sym_Defined_2))
          {
            v_97 = ATgetArgument(t, 0);
            w_97 = ATgetArgument(t, 1);
            t = not_null(v_97);
            if(match_string(t, "j_0"))
              {
                t = f_98(t);
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
      t = not_null(t_97);
    }
    return(t);
  }
  ATerm e_98 (ATerm t)
  {
    ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
    t = not_null(q_97);
    if(((x_97 != NULL) && (x_97 != t)))
      _fail(t);
    else
      x_97 = t;
    t = not_null(q_97);
    if(((y_97 != NULL) && (y_97 != t)))
      _fail(t);
    else
      y_97 = t;
    t = not_null(q_97);
    {
      ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
      ATerm g_98 (ATerm t)
      {
        t = not_null(c_98);
        if(((z_97 != NULL) && (z_97 != t)))
          _fail(t);
        else
          z_97 = t;
        t = not_null(a_98);
        return(t);
      }
      t = not_null(x_97);
      {
        ATerm l_3 (ATerm t)
        {
          t = term_h_30;
          return(t);
        }
        t = rewrite_1_0(l_3, t);
        if(((a_98 != NULL) && (a_98 != t)))
          _fail(t);
        else
          a_98 = t;
        t = not_null(a_98);
        if(match_cons(t, sym_Defined_2))
          {
            b_98 = ATgetArgument(t, 0);
            c_98 = ATgetArgument(t, 1);
            t = not_null(b_98);
            if(match_string(t, "e_0"))
              {
                t = g_98(t);
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
      t = not_null(z_97);
    }
    return(t);
  }
  if(((q_97 != NULL) && (q_97 != t)))
    _fail(t);
  else
    q_97 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = e_98(t);
      }
  }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL;
  ATerm n_98 (ATerm t)
  {
    ATerm m_98 = NULL;
    t = not_null(k_98);
    if(((m_98 != NULL) && (m_98 != t)))
      _fail(t);
    else
      m_98 = t;
    t = not_null(m_98);
    return(t);
  }
  if(((j_98 != NULL) && (j_98 != t)))
    _fail(t);
  else
    j_98 = t;
  t = not_null(j_98);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_98 = ATgetFirst((ATermList) t);
      l_98 = (ATerm) ATgetNext((ATermList) t);
      t = n_98(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm q_98 = NULL,t_98 = NULL,u_98 = NULL;
  ATerm x_98 (ATerm t)
  {
    ATerm v_98 = NULL,w_98 = NULL;
    t = not_null(t_98);
    if(((v_98 != NULL) && (v_98 != t)))
      _fail(t);
    else
      v_98 = t;
    t = not_null(u_98);
    if(((w_98 != NULL) && (w_98 != t)))
      _fail(t);
    else
      w_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_98), not_null(w_98));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((q_98 != NULL) && (q_98 != t)))
    _fail(t);
  else
    q_98 = t;
  t = not_null(q_98);
  if(match_cons(t, sym__2))
    {
      t_98 = ATgetArgument(t, 0);
      u_98 = ATgetArgument(t, 1);
      t = x_98(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm s_129 (ATerm), ATerm t)
{
  ATerm a_99 = NULL;
  ATerm e_99 (ATerm t)
  {
    ATerm b_99 = NULL,c_99 = NULL;
    t = not_null(a_99);
    if(((b_99 != NULL) && (b_99 != t)))
      _fail(t);
    else
      b_99 = t;
    t = not_null(a_99);
    {
      ATerm d_99 = NULL;
      ATerm f_99 (ATerm t)
      {
        t = not_null(d_99);
        if(((c_99 != NULL) && (c_99 != t)))
          _fail(t);
        else
          c_99 = t;
        t = not_null(d_99);
        return(t);
      }
      t = term_o_25;
      t = s_129(t);
      if(((d_99 != NULL) && (d_99 != t)))
        _fail(t);
      else
        d_99 = t;
      t = f_99(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_99), not_null(b_99));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((a_99 != NULL) && (a_99 != t)))
    _fail(t);
  else
    a_99 = t;
  t = e_99(t);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL;
  ATerm t_100 (ATerm t)
  {
    ATerm a_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL;
    t = not_null(x_99);
    if(((a_100 != NULL) && (a_100 != t)))
      _fail(t);
    else
      a_100 = t;
    t = not_null(y_99);
    if(((d_100 != NULL) && (d_100 != t)))
      _fail(t);
    else
      d_100 = t;
    t = not_null(t_99);
    if(((e_100 != NULL) && (e_100 != t)))
      _fail(t);
    else
      e_100 = t;
    t = not_null(u_99);
    if(((f_100 != NULL) && (f_100 != t)))
      _fail(t);
    else
      f_100 = t;
    t = not_null(x_99);
    {
      ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL;
      ATerm v_100 (ATerm t)
      {
        t = not_null(j_100);
        if(((g_100 != NULL) && (g_100 != t)))
          _fail(t);
        else
          g_100 = t;
        t = not_null(h_100);
        return(t);
      }
      t = not_null(a_100);
      {
        ATerm m_3 (ATerm t)
        {
          t = term_k_30;
          return(t);
        }
        t = rewrite_1_0(m_3, t);
        if(((h_100 != NULL) && (h_100 != t)))
          _fail(t);
        else
          h_100 = t;
        t = not_null(h_100);
        if(match_cons(t, sym_Defined_2))
          {
            i_100 = ATgetArgument(t, 0);
            j_100 = ATgetArgument(t, 1);
            t = not_null(i_100);
            if(match_string(t, "h_0"))
              {
                t = v_100(t);
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
      t = not_null(g_100);
    }
    return(t);
  }
  ATerm u_100 (ATerm t)
  {
    ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
    t = not_null(x_99);
    if(((k_100 != NULL) && (k_100 != t)))
      _fail(t);
    else
      k_100 = t;
    t = not_null(y_99);
    if(((l_100 != NULL) && (l_100 != t)))
      _fail(t);
    else
      l_100 = t;
    t = not_null(z_99);
    if(((m_100 != NULL) && (m_100 != t)))
      _fail(t);
    else
      m_100 = t;
    t = not_null(x_99);
    {
      ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL;
      ATerm w_100 (ATerm t)
      {
        t = not_null(r_100);
        if(((n_100 != NULL) && (n_100 != t)))
          _fail(t);
        else
          n_100 = t;
        t = not_null(s_100);
        if(((o_100 != NULL) && (o_100 != t)))
          _fail(t);
        else
          o_100 = t;
        t = not_null(p_100);
        return(t);
      }
      t = not_null(k_100);
      {
        ATerm n_3 (ATerm t)
        {
          t = term_k_30;
          return(t);
        }
        t = rewrite_1_0(n_3, t);
        if(((p_100 != NULL) && (p_100 != t)))
          _fail(t);
        else
          p_100 = t;
        t = not_null(p_100);
        if(match_cons(t, sym_Defined_3))
          {
            q_100 = ATgetArgument(t, 0);
            r_100 = ATgetArgument(t, 1);
            s_100 = ATgetArgument(t, 2);
            t = not_null(q_100);
            if(match_string(t, "c_0"))
              {
                t = w_100(t);
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
      t = (ATerm) ATinsert(CheckATermList(not_null(o_100)), not_null(n_100));
    }
    return(t);
  }
  if(((x_99 != NULL) && (x_99 != t)))
    _fail(t);
  else
    x_99 = t;
  t = not_null(x_99);
  if(match_cons(t, sym__2))
    {
      y_99 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
      t = not_null(z_99);
      if(match_cons(t, sym__2))
        {
          t_99 = ATgetArgument(t, 0);
          u_99 = ATgetArgument(t, 1);
          {
            ATerm l_30 = t;
            int j_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_100(t);
                ;
                LocalPopChoice(j_32);
              }
            else
              {
                t = l_30;
                t = u_100(t);
              }
          }
        }
      else
        {
          t = u_100(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
  ATerm b_102 (ATerm t)
  {
    ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
    t = not_null(f_101);
    if(((k_101 != NULL) && (k_101 != t)))
      _fail(t);
    else
      k_101 = t;
    t = not_null(g_101);
    if(((l_101 != NULL) && (l_101 != t)))
      _fail(t);
    else
      l_101 = t;
    t = not_null(h_101);
    if(((m_101 != NULL) && (m_101 != t)))
      _fail(t);
    else
      m_101 = t;
    t = not_null(i_101);
    if(((n_101 != NULL) && (n_101 != t)))
      _fail(t);
    else
      n_101 = t;
    t = not_null(j_101);
    if(((o_101 != NULL) && (o_101 != t)))
      _fail(t);
    else
      o_101 = t;
    t = not_null(f_101);
    {
      ATerm k_32;
      k_32 = t;
      {
        ATerm t_101 = NULL;
        ATerm c_102 (ATerm t)
        {
          ATerm u_101 = NULL;
          ATerm d_102 (ATerm t)
          {
            ATerm v_101 = NULL,x_101 = NULL;
            ATerm f_102 (ATerm t)
            {
              ATerm y_101 = NULL,a_102 = NULL;
              ATerm h_102 (ATerm t)
              {
                t = not_null(a_102);
                if(((s_101 != NULL) && (s_101 != t)))
                  _fail(t);
                else
                  s_101 = t;
                t = not_null(a_102);
                {
                  ATerm l_32;
                  l_32 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_101), (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101))), (ATerm) ATmakeAppl(sym_Defined_2, term_m_32, not_null(r_101)));
                  {
                    ATerm o_3 (ATerm t)
                    {
                      t = term_k_30;
                      return(t);
                    }
                    t = assert_1_0(o_3, t);
                  }
                  t = l_32;
                  {
                    ATerm n_32;
                    n_32 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_101), (ATerm) ATmakeAppl(sym_Defined_2, term_o_32, not_null(s_101)));
                    {
                      ATerm p_3 (ATerm t)
                      {
                        t = term_h_30;
                        return(t);
                      }
                      t = assert_1_0(p_3, t);
                    }
                    t = n_32;
                  }
                }
                return(t);
              }
              t = not_null(x_101);
              if(((r_101 != NULL) && (r_101 != t)))
                _fail(t);
              else
                r_101 = t;
              t = not_null(x_101);
              {
                ATerm z_101 = NULL;
                ATerm g_102 (ATerm t)
                {
                  t = not_null(z_101);
                  if(((y_101 != NULL) && (y_101 != t)))
                    _fail(t);
                  else
                    y_101 = t;
                  t = not_null(z_101);
                  return(t);
                }
                t = not_null(l_101);
                {
                  ATerm p_32 = t;
                  int q_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arities_0_0(t);
                      ;
                      LocalPopChoice(q_32);
                    }
                  else
                    {
                      t = p_32;
                      t = (ATerm) ATempty;
                    }
                  if(((z_101 != NULL) && (z_101 != t)))
                    _fail(t);
                  else
                    z_101 = t;
                  t = g_102(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101))), not_null(y_101));
                t = union_0_0(t);
                if(((a_102 != NULL) && (a_102 != t)))
                  _fail(t);
                else
                  a_102 = t;
                t = h_102(t);
              }
              return(t);
            }
            t = not_null(u_101);
            if(((q_101 != NULL) && (q_101 != t)))
              _fail(t);
            else
              q_101 = t;
            t = not_null(u_101);
            {
              ATerm w_101 = NULL;
              ATerm e_102 (ATerm t)
              {
                t = not_null(w_101);
                if(((v_101 != NULL) && (v_101 != t)))
                  _fail(t);
                else
                  v_101 = t;
                t = not_null(w_101);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_101), (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101)));
              {
                ATerm r_32 = t;
                int s_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Definitions_0_0(t);
                    ;
                    LocalPopChoice(s_32);
                  }
                else
                  {
                    t = r_32;
                    t = (ATerm) ATempty;
                  }
                if(((w_101 != NULL) && (w_101 != t)))
                  _fail(t);
                else
                  w_101 = t;
                t = e_102(t);
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_101)), not_null(k_101));
              if(((x_101 != NULL) && (x_101 != t)))
                _fail(t);
              else
                x_101 = t;
              t = f_102(t);
            }
            return(t);
          }
          t = not_null(t_101);
          if(((p_101 != NULL) && (p_101 != t)))
            _fail(t);
          else
            p_101 = t;
          t = not_null(n_101);
          t = length_0_0(t);
          if(((u_101 != NULL) && (u_101 != t)))
            _fail(t);
          else
            u_101 = t;
          t = d_102(t);
          return(t);
        }
        t = not_null(m_101);
        t = length_0_0(t);
        if(((t_101 != NULL) && (t_101 != t)))
          _fail(t);
        else
          t_101 = t;
        t = c_102(t);
      }
      t = k_32;
    }
    return(t);
  }
  if(((f_101 != NULL) && (f_101 != t)))
    _fail(t);
  else
    f_101 = t;
  t = not_null(f_101);
  if(match_cons(t, sym_SDefT_4))
    {
      g_101 = ATgetArgument(t, 0);
      h_101 = ATgetArgument(t, 1);
      i_101 = ATgetArgument(t, 2);
      j_101 = ATgetArgument(t, 3);
      t = b_102(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0_0 (ATerm t)
{
  t = map_1_0(RegisterSDefT_0_0, t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = term_t_32;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_z_7;
    return(t);
  }
  t = foldr_3_0(q_3, add_0_0, r_3, t);
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  ATerm h_103 (ATerm t)
  {
    ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,f_103 = NULL;
    t = not_null(t_102);
    if(((x_102 != NULL) && (x_102 != t)))
      _fail(t);
    else
      x_102 = t;
    t = not_null(u_102);
    if(((y_102 != NULL) && (y_102 != t)))
      _fail(t);
    else
      y_102 = t;
    t = not_null(v_102);
    if(((z_102 != NULL) && (z_102 != t)))
      _fail(t);
    else
      z_102 = t;
    t = not_null(s_102);
    {
      ATerm u_32;
      u_32 = t;
      {
        ATerm b_103 = NULL;
        ATerm i_103 (ATerm t)
        {
          t = not_null(b_103);
          if(((a_103 != NULL) && (a_103 != t)))
            _fail(t);
          else
            a_103 = t;
          t = not_null(b_103);
          return(t);
        }
        t = not_null(y_102);
        t = length_0_0(t);
        if(((b_103 != NULL) && (b_103 != t)))
          _fail(t);
        else
          b_103 = t;
        t = i_103(t);
      }
      t = u_32;
      {
        ATerm g_103 = NULL;
        ATerm j_103 (ATerm t)
        {
          t = not_null(g_103);
          if(((f_103 != NULL) && (f_103 != t)))
            _fail(t);
          else
            f_103 = t;
          t = not_null(g_103);
          return(t);
        }
        t = not_null(z_102);
        t = length_0_0(t);
        if(((g_103 != NULL) && (g_103 != t)))
          _fail(t);
        else
          g_103 = t;
        t = j_103(t);
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_102), (ATerm) ATmakeAppl(sym__2, not_null(a_103), not_null(f_103))));
      }
    }
    return(t);
  }
  if(((s_102 != NULL) && (s_102 != t)))
    _fail(t);
  else
    s_102 = t;
  t = not_null(s_102);
  if(match_cons(t, sym_SDefT_4))
    {
      t_102 = ATgetArgument(t, 0);
      u_102 = ATgetArgument(t, 1);
      v_102 = ATgetArgument(t, 2);
      w_102 = ATgetArgument(t, 3);
      t = h_103(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  ATerm q_103 (ATerm t)
  {
    ATerm p_103 = NULL;
    t = not_null(n_103);
    if(((p_103 != NULL) && (p_103 != t)))
      _fail(t);
    else
      p_103 = t;
    t = not_null(o_103);
    if(((p_103 != NULL) && (p_103 != t)))
      _fail(t);
    else
      p_103 = t;
    t = not_null(m_103);
    return(t);
  }
  if(((m_103 != NULL) && (m_103 != t)))
    _fail(t);
  else
    m_103 = t;
  t = not_null(m_103);
  if(match_cons(t, sym__2))
    {
      n_103 = ATgetArgument(t, 0);
      o_103 = ATgetArgument(t, 1);
      t = q_103(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL;
  ATerm b_104 (ATerm t)
  {
    ATerm x_103 = NULL,y_103 = NULL;
    t = not_null(v_103);
    if(((y_103 != NULL) && (y_103 != t)))
      _fail(t);
    else
      y_103 = t;
    t = not_null(w_103);
    if(((x_103 != NULL) && (x_103 != t)))
      _fail(t);
    else
      x_103 = t;
    t = not_null(u_103);
    t = s_114(t);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm z_103 = NULL;
        ATerm c_104 (ATerm t)
        {
          ATerm a_104 = NULL;
          t = not_null(z_103);
          if(((a_104 != NULL) && (a_104 != t)))
            _fail(t);
          else
            a_104 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_103), not_null(a_104));
          t = r_114(t);
          return(t);
        }
        if(((z_103 != NULL) && (z_103 != t)))
          _fail(t);
        else
          z_103 = t;
        t = c_104(t);
        return(t);
      }
      t = fetch_1_0(s_3, t);
    }
    t = not_null(x_103);
    return(t);
  }
  if(((u_103 != NULL) && (u_103 != t)))
    _fail(t);
  else
    u_103 = t;
  t = not_null(u_103);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_103 = ATgetFirst((ATermList) t);
      w_103 = (ATerm) ATgetNext((ATermList) t);
      t = b_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
  ATerm m_104 (ATerm t)
  {
    ATerm k_104 = NULL,l_104 = NULL;
    t = not_null(g_104);
    if(((l_104 != NULL) && (l_104 != t)))
      _fail(t);
    else
      l_104 = t;
    t = not_null(h_104);
    if(((k_104 != NULL) && (k_104 != t)))
      _fail(t);
    else
      k_104 = t;
    t = not_null(l_104);
    {
      ATerm n_104 (ATerm t)
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(k_104);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            {
              ATerm x_32 = t;
              int y_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_3 (ATerm t)
                  {
                    t = not_null(k_104);
                    return(t);
                  }
                  t = HdMember_p__2_0(n_114, t_3, t);
                  t = n_104(t);
                  ;
                  LocalPopChoice(y_32);
                }
              else
                {
                  t = x_32;
                  t = Cons_2_0(_id, n_104, t);
                }
            }
          }
        return(t);
      }
      t = n_104(t);
    }
    return(t);
  }
  if(((f_104 != NULL) && (f_104 != t)))
    _fail(t);
  else
    f_104 = t;
  t = not_null(f_104);
  if(match_cons(t, sym__2))
    {
      g_104 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
      t = m_104(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = w_116(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL;
        ATerm d_105 (ATerm t)
        {
          ATerm v_104 = NULL,y_104 = NULL,z_104 = NULL,b_105 = NULL;
          t = not_null(t_104);
          if(((v_104 != NULL) && (v_104 != t)))
            _fail(t);
          else
            v_104 = t;
          t = not_null(u_104);
          if(((y_104 != NULL) && (y_104 != t)))
            _fail(t);
          else
            y_104 = t;
          t = not_null(s_104);
          {
            ATerm l_33;
            l_33 = t;
            {
              ATerm a_105 = NULL;
              ATerm e_105 (ATerm t)
              {
                t = not_null(a_105);
                if(((z_104 != NULL) && (z_104 != t)))
                  _fail(t);
                else
                  z_104 = t;
                t = not_null(a_105);
                return(t);
              }
              t = not_null(v_104);
              t = y_116(t);
              if(((a_105 != NULL) && (a_105 != t)))
                _fail(t);
              else
                a_105 = t;
              t = e_105(t);
            }
            t = l_33;
            {
              ATerm c_105 = NULL;
              ATerm f_105 (ATerm t)
              {
                t = not_null(c_105);
                if(((b_105 != NULL) && (b_105 != t)))
                  _fail(t);
                else
                  b_105 = t;
                t = not_null(c_105);
                return(t);
              }
              t = not_null(y_104);
              t = foldr_3_0(w_116, x_116, y_116, t);
              if(((c_105 != NULL) && (c_105 != t)))
                _fail(t);
              else
                c_105 = t;
              t = f_105(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(b_105));
              t = x_116(t);
            }
          }
          return(t);
        }
        if(((s_104 != NULL) && (s_104 != t)))
          _fail(t);
        else
          s_104 = t;
        t = not_null(s_104);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_104 = ATgetFirst((ATermList) t);
            u_104 = (ATerm) ATgetNext((ATermList) t);
            t = d_105(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm definition_names_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_3_0(u_3, union_0_0, DefinitionName_0_0, t);
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm i_105 = NULL,k_105 = NULL;
  ATerm m_33;
  m_33 = t;
  {
    ATerm j_105 = NULL;
    ATerm m_105 (ATerm t)
    {
      t = not_null(j_105);
      if(((i_105 != NULL) && (i_105 != t)))
        _fail(t);
      else
        i_105 = t;
      t = not_null(j_105);
      return(t);
    }
    t = definition_names_0_0(t);
    if(((j_105 != NULL) && (j_105 != t)))
      _fail(t);
    else
      j_105 = t;
    t = m_105(t);
  }
  t = m_33;
  {
    ATerm l_105 = NULL;
    ATerm n_105 (ATerm t)
    {
      t = not_null(l_105);
      if(((k_105 != NULL) && (k_105 != t)))
        _fail(t);
      else
        k_105 = t;
      t = not_null(l_105);
      return(t);
    }
    t = sort_defs_0_0(t);
    if(((l_105 != NULL) && (l_105 != t)))
      _fail(t);
    else
      l_105 = t;
    t = n_105(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_105), not_null(k_105), (ATerm) ATempty);
    t = extract_needed_defs_0_0(t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL;
  ATerm e_106 (ATerm t)
  {
    ATerm v_105 = NULL,x_105 = NULL,y_105 = NULL,a_106 = NULL;
    ATerm g_106 (ATerm t)
    {
      ATerm b_106 = NULL,c_106 = NULL;
      t = not_null(a_106);
      if(((b_106 != NULL) && (b_106 != t)))
        _fail(t);
      else
        b_106 = t;
      t = not_null(a_106);
      {
        ATerm d_106 = NULL;
        ATerm h_106 (ATerm t)
        {
          t = not_null(d_106);
          if(((c_106 != NULL) && (c_106 != t)))
            _fail(t);
          else
            c_106 = t;
          t = not_null(d_106);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_106)), not_null(y_105));
        if(((d_106 != NULL) && (d_106 != t)))
          _fail(t);
        else
          d_106 = t;
        t = h_106(t);
        t = not_null(c_106);
      }
      return(t);
    }
    t = not_null(t_105);
    if(((v_105 != NULL) && (v_105 != t)))
      _fail(t);
    else
      v_105 = t;
    t = not_null(u_105);
    if(((x_105 != NULL) && (x_105 != t)))
      _fail(t);
    else
      x_105 = t;
    t = not_null(t_105);
    {
      ATerm z_105 = NULL;
      ATerm f_106 (ATerm t)
      {
        t = not_null(z_105);
        if(((y_105 != NULL) && (y_105 != t)))
          _fail(t);
        else
          y_105 = t;
        t = not_null(z_105);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_105));
      if(((z_105 != NULL) && (z_105 != t)))
        _fail(t);
      else
        z_105 = t;
      t = f_106(t);
      t = not_null(x_105);
      t = a_85(t);
      if(((a_106 != NULL) && (a_106 != t)))
        _fail(t);
      else
        a_106 = t;
      t = g_106(t);
    }
    return(t);
  }
  if(((t_105 != NULL) && (t_105 != t)))
    _fail(t);
  else
    t_105 = t;
  t = not_null(t_105);
  if(match_cons(t, sym_Strategies_1))
    {
      u_105 = ATgetArgument(t, 0);
      t = e_106(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL,s_106 = NULL;
  ATerm e_107 (ATerm t)
  {
    ATerm t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,y_106 = NULL;
    ATerm i_107 (ATerm t)
    {
      ATerm z_106 = NULL,a_107 = NULL;
      ATerm j_107 (ATerm t)
      {
        ATerm b_107 = NULL,c_107 = NULL;
        t = not_null(a_107);
        if(((b_107 != NULL) && (b_107 != t)))
          _fail(t);
        else
          b_107 = t;
        t = not_null(a_107);
        {
          ATerm d_107 = NULL;
          ATerm k_107 (ATerm t)
          {
            t = not_null(d_107);
            if(((c_107 != NULL) && (c_107 != t)))
              _fail(t);
            else
              c_107 = t;
            t = not_null(d_107);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_107)), not_null(z_106)), not_null(w_106));
          if(((d_107 != NULL) && (d_107 != t)))
            _fail(t);
          else
            d_107 = t;
          t = k_107(t);
          t = not_null(c_107);
        }
        return(t);
      }
      t = not_null(y_106);
      if(((z_106 != NULL) && (z_106 != t)))
        _fail(t);
      else
        z_106 = t;
      t = not_null(v_106);
      t = x_84(t);
      if(((a_107 != NULL) && (a_107 != t)))
        _fail(t);
      else
        a_107 = t;
      t = j_107(t);
      return(t);
    }
    t = not_null(o_106);
    if(((t_106 != NULL) && (t_106 != t)))
      _fail(t);
    else
      t_106 = t;
    t = not_null(p_106);
    if(((u_106 != NULL) && (u_106 != t)))
      _fail(t);
    else
      u_106 = t;
    t = not_null(s_106);
    if(((v_106 != NULL) && (v_106 != t)))
      _fail(t);
    else
      v_106 = t;
    t = not_null(o_106);
    {
      ATerm x_106 = NULL;
      ATerm f_107 (ATerm t)
      {
        t = not_null(x_106);
        if(((w_106 != NULL) && (w_106 != t)))
          _fail(t);
        else
          w_106 = t;
        t = not_null(x_106);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_106));
      if(((x_106 != NULL) && (x_106 != t)))
        _fail(t);
      else
        x_106 = t;
      t = f_107(t);
      t = not_null(u_106);
      t = w_84(t);
      if(((y_106 != NULL) && (y_106 != t)))
        _fail(t);
      else
        y_106 = t;
      t = i_107(t);
    }
    return(t);
  }
  if(((o_106 != NULL) && (o_106 != t)))
    _fail(t);
  else
    o_106 = t;
  t = not_null(o_106);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_106 = ATgetFirst((ATermList) t);
      s_106 = (ATerm) ATgetNext((ATermList) t);
      t = e_107(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL;
  ATerm i_108 (ATerm t)
  {
    ATerm z_107 = NULL,b_108 = NULL,c_108 = NULL,e_108 = NULL;
    ATerm k_108 (ATerm t)
    {
      ATerm f_108 = NULL,g_108 = NULL;
      t = not_null(e_108);
      if(((f_108 != NULL) && (f_108 != t)))
        _fail(t);
      else
        f_108 = t;
      t = not_null(e_108);
      {
        ATerm h_108 = NULL;
        ATerm l_108 (ATerm t)
        {
          t = not_null(h_108);
          if(((g_108 != NULL) && (g_108 != t)))
            _fail(t);
          else
            g_108 = t;
          t = not_null(h_108);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_108)), not_null(c_108));
        if(((h_108 != NULL) && (h_108 != t)))
          _fail(t);
        else
          h_108 = t;
        t = l_108(t);
        t = not_null(g_108);
      }
      return(t);
    }
    t = not_null(w_107);
    if(((z_107 != NULL) && (z_107 != t)))
      _fail(t);
    else
      z_107 = t;
    t = not_null(x_107);
    if(((b_108 != NULL) && (b_108 != t)))
      _fail(t);
    else
      b_108 = t;
    t = not_null(w_107);
    {
      ATerm d_108 = NULL;
      ATerm j_108 (ATerm t)
      {
        t = not_null(d_108);
        if(((c_108 != NULL) && (c_108 != t)))
          _fail(t);
        else
          c_108 = t;
        t = not_null(d_108);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_107));
      if(((d_108 != NULL) && (d_108 != t)))
        _fail(t);
      else
        d_108 = t;
      t = j_108(t);
      t = not_null(b_108);
      t = f_85(t);
      if(((e_108 != NULL) && (e_108 != t)))
        _fail(t);
      else
        e_108 = t;
      t = k_108(t);
    }
    return(t);
  }
  if(((w_107 != NULL) && (w_107 != t)))
    _fail(t);
  else
    w_107 = t;
  t = not_null(w_107);
  if(match_cons(t, sym_Specification_1))
    {
      x_107 = ATgetArgument(t, 0);
      t = i_108(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
  ATerm h_109 (ATerm t)
  {
    ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,b_109 = NULL;
    ATerm j_109 (ATerm t)
    {
      ATerm c_109 = NULL,d_109 = NULL;
      ATerm k_109 (ATerm t)
      {
        ATerm e_109 = NULL,f_109 = NULL;
        t = not_null(d_109);
        if(((e_109 != NULL) && (e_109 != t)))
          _fail(t);
        else
          e_109 = t;
        t = not_null(d_109);
        {
          ATerm g_109 = NULL;
          ATerm l_109 (ATerm t)
          {
            t = not_null(g_109);
            if(((f_109 != NULL) && (f_109 != t)))
              _fail(t);
            else
              f_109 = t;
            t = not_null(g_109);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_109), not_null(e_109)), not_null(y_108));
          if(((g_109 != NULL) && (g_109 != t)))
            _fail(t);
          else
            g_109 = t;
          t = l_109(t);
          t = not_null(f_109);
        }
        return(t);
      }
      t = not_null(b_109);
      if(((c_109 != NULL) && (c_109 != t)))
        _fail(t);
      else
        c_109 = t;
      t = not_null(x_108);
      t = o_83(t);
      if(((d_109 != NULL) && (d_109 != t)))
        _fail(t);
      else
        d_109 = t;
      t = k_109(t);
      return(t);
    }
    t = not_null(s_108);
    if(((v_108 != NULL) && (v_108 != t)))
      _fail(t);
    else
      v_108 = t;
    t = not_null(t_108);
    if(((w_108 != NULL) && (w_108 != t)))
      _fail(t);
    else
      w_108 = t;
    t = not_null(u_108);
    if(((x_108 != NULL) && (x_108 != t)))
      _fail(t);
    else
      x_108 = t;
    t = not_null(s_108);
    {
      ATerm a_109 = NULL;
      ATerm i_109 (ATerm t)
      {
        t = not_null(a_109);
        if(((y_108 != NULL) && (y_108 != t)))
          _fail(t);
        else
          y_108 = t;
        t = not_null(a_109);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_108));
      if(((a_109 != NULL) && (a_109 != t)))
        _fail(t);
      else
        a_109 = t;
      t = i_109(t);
      t = not_null(w_108);
      t = n_83(t);
      if(((b_109 != NULL) && (b_109 != t)))
        _fail(t);
      else
        b_109 = t;
      t = j_109(t);
    }
    return(t);
  }
  if(((s_108 != NULL) && (s_108 != t)))
    _fail(t);
  else
    s_108 = t;
  t = not_null(s_108);
  if(match_cons(t, sym__2))
    {
      t_108 = ATgetArgument(t, 0);
      u_108 = ATgetArgument(t, 1);
      t = h_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_33;
  n_33 = t;
  {
    ATerm n_109 = NULL;
    ATerm o_109 = NULL;
    ATerm p_109 (ATerm t)
    {
      t = not_null(o_109);
      if(((n_109 != NULL) && (n_109 != t)))
        _fail(t);
      else
        n_109 = t;
      t = not_null(o_109);
      return(t);
    }
    t = term_o_25;
    t = whoami_0_0(t);
    if(((o_109 != NULL) && (o_109 != t)))
      _fail(t);
    else
      o_109 = t;
    t = p_109(t);
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_33), not_null(n_109)), term_o_33));
    t = printnl_0_0(t);
    t = term_z_7;
    t = exit_0_0(t);
  }
  t = n_33;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  ATerm x_109 (ATerm t)
  {
    ATerm v_109 = NULL,w_109 = NULL;
    t = not_null(t_109);
    if(((v_109 != NULL) && (v_109 != t)))
      _fail(t);
    else
      v_109 = t;
    t = not_null(u_109);
    if(((w_109 != NULL) && (w_109 != t)))
      _fail(t);
    else
      w_109 = t;
    t = not_null(s_109);
    {
      ATerm q_33;
      q_33 = t;
      t = SSL_printnl(not_null(v_109), not_null(w_109));
      t = q_33;
    }
    return(t);
  }
  if(((s_109 != NULL) && (s_109 != t)))
    _fail(t);
  else
    s_109 = t;
  t = not_null(s_109);
  if(match_cons(t, sym__2))
    {
      t_109 = ATgetArgument(t, 0);
      u_109 = ATgetArgument(t, 1);
      t = x_109(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm z_109 = NULL;
  ATerm b_110 (ATerm t)
  {
    ATerm a_110 = NULL;
    t = not_null(z_109);
    if(((a_110 != NULL) && (a_110 != t)))
      _fail(t);
    else
      a_110 = t;
    t = not_null(z_109);
    t = SSL_implode_string(not_null(a_110));
    return(t);
  }
  if(((z_109 != NULL) && (z_109 != t)))
    _fail(t);
  else
    z_109 = t;
  t = b_110(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
        ATerm k_110 (ATerm t)
        {
          ATerm h_110 = NULL,i_110 = NULL;
          t = not_null(f_110);
          if(((h_110 != NULL) && (h_110 != t)))
            _fail(t);
          else
            h_110 = t;
          t = not_null(g_110);
          if(((i_110 != NULL) && (i_110 != t)))
            _fail(t);
          else
            i_110 = t;
          t = not_null(h_110);
          {
            ATerm v_3 (ATerm t)
            {
              t = not_null(i_110);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(v_3, t);
          }
          return(t);
        }
        if(((e_110 != NULL) && (e_110 != t)))
          _fail(t);
        else
          e_110 = t;
        t = not_null(e_110);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_110 = ATgetFirst((ATermList) t);
            g_110 = (ATerm) ATgetNext((ATermList) t);
            t = k_110(t);
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
  ATerm q_110 = NULL;
  ATerm y_110 (ATerm t)
  {
    ATerm r_110 = NULL,s_110 = NULL;
    t = not_null(q_110);
    if(((r_110 != NULL) && (r_110 != t)))
      _fail(t);
    else
      r_110 = t;
    t = not_null(q_110);
    {
      ATerm t_110 = NULL;
      ATerm z_110 (ATerm t)
      {
        ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL;
        ATerm a_111 (ATerm t)
        {
          t = not_null(x_110);
          if(((s_110 != NULL) && (s_110 != t)))
            _fail(t);
          else
            s_110 = t;
          t = not_null(v_110);
          return(t);
        }
        t = not_null(t_110);
        if(((u_110 != NULL) && (u_110 != t)))
          _fail(t);
        else
          u_110 = t;
        t = not_null(t_110);
        t = SSL_explode_term(not_null(u_110));
        if(((v_110 != NULL) && (v_110 != t)))
          _fail(t);
        else
          v_110 = t;
        t = not_null(v_110);
        if(match_cons(t, sym__2))
          {
            w_110 = ATgetArgument(t, 0);
            x_110 = ATgetArgument(t, 1);
            t = not_null(w_110);
            if(match_string(t, ""))
              {
                t = a_111(t);
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
      t = not_null(r_110);
      if(((t_110 != NULL) && (t_110 != t)))
        _fail(t);
      else
        t_110 = t;
      t = z_110(t);
      t = not_null(s_110);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((q_110 != NULL) && (q_110 != t)))
    _fail(t);
  else
    q_110 = t;
  t = y_110(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm b_111 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_111, t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = Nil_0_0(t);
        t = b_100(t);
      }
    return(t);
  }
  t = b_111(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  ATerm j_111 (ATerm t)
  {
    ATerm h_111 = NULL,i_111 = NULL;
    t = not_null(f_111);
    if(((i_111 != NULL) && (i_111 != t)))
      _fail(t);
    else
      i_111 = t;
    t = not_null(g_111);
    if(((h_111 != NULL) && (h_111 != t)))
      _fail(t);
    else
      h_111 = t;
    t = not_null(i_111);
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(h_111);
        return(t);
      }
      t = at_end_1_0(w_3, t);
    }
    return(t);
  }
  if(((e_111 != NULL) && (e_111 != t)))
    _fail(t);
  else
    e_111 = t;
  t = not_null(e_111);
  if(match_cons(t, sym__2))
    {
      f_111 = ATgetArgument(t, 0);
      g_111 = ATgetArgument(t, 1);
      t = j_111(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm l_111 = NULL;
  ATerm s_111 (ATerm t)
  {
    ATerm r_111 = NULL;
    t = not_null(l_111);
    if(((r_111 != NULL) && (r_111 != t)))
      _fail(t);
    else
      r_111 = t;
    t = not_null(l_111);
    t = SSL_explode_string(not_null(r_111));
    return(t);
  }
  if(((l_111 != NULL) && (l_111 != t)))
    _fail(t);
  else
    l_111 = t;
  t = s_111(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(x_3, t);
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            {
              ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
              ATerm k_112 (ATerm t)
              {
                ATerm c_112 = NULL;
                t = not_null(a_112);
                if(((c_112 != NULL) && (c_112 != t)))
                  _fail(t);
                else
                  c_112 = t;
                t = not_null(c_112);
                return(t);
              }
              ATerm l_112 (ATerm t)
              {
                ATerm d_112 = NULL;
                t = not_null(a_112);
                if(((d_112 != NULL) && (d_112 != t)))
                  _fail(t);
                else
                  d_112 = t;
                t = not_null(d_112);
                {
                  ATerm b_34 = t;
                  int c_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_34);
                    }
                  else
                    {
                      t = b_34;
                      {
                        ATerm y_3 (ATerm t)
                        {
                          t = term_d_34;
                          return(t);
                        }
                        t = debug_1_0(y_3, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm m_112 (ATerm t)
              {
                ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,i_112 = NULL;
                t = not_null(a_112);
                if(((e_112 != NULL) && (e_112 != t)))
                  _fail(t);
                else
                  e_112 = t;
                t = not_null(b_112);
                if(((f_112 != NULL) && (f_112 != t)))
                  _fail(t);
                else
                  f_112 = t;
                t = not_null(z_111);
                {
                  ATerm e_34;
                  e_34 = t;
                  {
                    ATerm h_112 = NULL;
                    ATerm n_112 (ATerm t)
                    {
                      t = not_null(h_112);
                      if(((g_112 != NULL) && (g_112 != t)))
                        _fail(t);
                      else
                        g_112 = t;
                      t = not_null(h_112);
                      return(t);
                    }
                    t = not_null(e_112);
                    t = eval_config_0_0(t);
                    if(((h_112 != NULL) && (h_112 != t)))
                      _fail(t);
                    else
                      h_112 = t;
                    t = n_112(t);
                  }
                  t = e_34;
                  {
                    ATerm j_112 = NULL;
                    ATerm o_112 (ATerm t)
                    {
                      t = not_null(j_112);
                      if(((i_112 != NULL) && (i_112 != t)))
                        _fail(t);
                      else
                        i_112 = t;
                      t = not_null(j_112);
                      return(t);
                    }
                    t = not_null(f_112);
                    t = eval_config_0_0(t);
                    if(((j_112 != NULL) && (j_112 != t)))
                      _fail(t);
                    else
                      j_112 = t;
                    t = o_112(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_112), not_null(i_112));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((z_111 != NULL) && (z_111 != t)))
                _fail(t);
              else
                z_111 = t;
              t = not_null(z_111);
              if(match_cons(t, sym_Path_1))
                {
                  a_112 = ATgetArgument(t, 0);
                  t = k_112(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_112 = ATgetArgument(t, 0);
                      t = l_112(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_112 = ATgetArgument(t, 0);
                          b_112 = ATgetArgument(t, 1);
                          t = m_112(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_112 = NULL;
  ATerm v_112 (ATerm t)
  {
    ATerm s_112 = NULL;
    t = not_null(r_112);
    if(((s_112 != NULL) && (s_112 != t)))
      _fail(t);
    else
      s_112 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_34, not_null(s_112));
    t = table_get_0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm g_34;
          g_34 = t;
          {
            ATerm t_112 = NULL;
            ATerm u_112 = NULL;
            ATerm w_112 (ATerm t)
            {
              t = not_null(u_112);
              if(((t_112 != NULL) && (t_112 != t)))
                _fail(t);
              else
                t_112 = t;
              t = not_null(u_112);
              return(t);
            }
            if(((u_112 != NULL) && (u_112 != t)))
              _fail(t);
            else
              u_112 = t;
            t = w_112(t);
            t = (ATerm) ATmakeAppl(sym__3, term_f_34, not_null(s_112), not_null(t_112));
            t = table_put_0_0(t);
          }
          t = g_34;
        }
        return(t);
      }
      t = try_1_0(z_3, t);
    }
    return(t);
  }
  if(((r_112 != NULL) && (r_112 != t)))
    _fail(t);
  else
    r_112 = t;
  t = v_112(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm h_34;
    h_34 = t;
    {
      ATerm y_112 = NULL;
      ATerm z_112 = NULL;
      ATerm a_113 (ATerm t)
      {
        t = not_null(z_112);
        if(((y_112 != NULL) && (y_112 != t)))
          _fail(t);
        else
          y_112 = t;
        t = not_null(z_112);
        return(t);
      }
      t = term_i_34;
      t = get_config_0_0(t);
      if(((z_112 != NULL) && (z_112 != t)))
        _fail(t);
      else
        z_112 = t;
      t = a_113(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_112), term_j_34);
      t = geq_0_0(t);
    }
    t = h_34;
    t = b_123(t);
    return(t);
  }
  t = try_1_0(a_4, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL;
  ATerm p_113 (ATerm t)
  {
    ATerm j_113 = NULL,k_113 = NULL,n_113 = NULL;
    t = not_null(g_113);
    if(((j_113 != NULL) && (j_113 != t)))
      _fail(t);
    else
      j_113 = t;
    t = not_null(i_113);
    if(((k_113 != NULL) && (k_113 != t)))
      _fail(t);
    else
      k_113 = t;
    t = not_null(f_113);
    t = SSL_fputc(not_null(j_113), not_null(k_113));
    {
      ATerm o_113 = NULL;
      ATerm q_113 (ATerm t)
      {
        t = not_null(o_113);
        if(((n_113 != NULL) && (n_113 != t)))
          _fail(t);
        else
          n_113 = t;
        t = not_null(o_113);
        return(t);
      }
      if(((o_113 != NULL) && (o_113 != t)))
        _fail(t);
      else
        o_113 = t;
      t = q_113(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_113));
    }
    return(t);
  }
  if(((f_113 != NULL) && (f_113 != t)))
    _fail(t);
  else
    f_113 = t;
  t = not_null(f_113);
  if(match_cons(t, sym__2))
    {
      g_113 = ATgetArgument(t, 0);
      h_113 = ATgetArgument(t, 1);
      t = not_null(h_113);
      if(match_cons(t, sym_Stream_1))
        {
          i_113 = ATgetArgument(t, 0);
          t = p_113(t);
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
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
  ATerm l_114 (ATerm t)
  {
    ATerm z_113 = NULL,g_114 = NULL,h_114 = NULL;
    t = not_null(x_113);
    if(((z_113 != NULL) && (z_113 != t)))
      _fail(t);
    else
      z_113 = t;
    t = not_null(y_113);
    if(((g_114 != NULL) && (g_114 != t)))
      _fail(t);
    else
      g_114 = t;
    t = not_null(v_113);
    t = SSL_write_term_to_stream_text(not_null(z_113), not_null(g_114));
    {
      ATerm i_114 = NULL;
      ATerm m_114 (ATerm t)
      {
        t = not_null(i_114);
        if(((h_114 != NULL) && (h_114 != t)))
          _fail(t);
        else
          h_114 = t;
        t = not_null(i_114);
        return(t);
      }
      if(((i_114 != NULL) && (i_114 != t)))
        _fail(t);
      else
        i_114 = t;
      t = m_114(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_114));
    }
    return(t);
  }
  if(((v_113 != NULL) && (v_113 != t)))
    _fail(t);
  else
    v_113 = t;
  t = not_null(v_113);
  if(match_cons(t, sym__2))
    {
      w_113 = ATgetArgument(t, 0);
      y_113 = ATgetArgument(t, 1);
      t = not_null(w_113);
      if(match_cons(t, sym_Stream_1))
        {
          x_113 = ATgetArgument(t, 0);
          t = l_114(t);
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
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm q_114 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm t_114 = NULL;
      ATerm u_114 (ATerm t)
      {
        t = not_null(t_114);
        if(((q_114 != NULL) && (q_114 != t)))
          _fail(t);
        else
          q_114 = t;
        t = not_null(t_114);
        return(t);
      }
      if(((t_114 != NULL) && (t_114 != t)))
        _fail(t);
      else
        t_114 = t;
      t = u_114(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_34, not_null(q_114));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(b_4, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL;
  ATerm m_115 (ATerm t)
  {
    ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL;
    t = not_null(g_115);
    if(((i_115 != NULL) && (i_115 != t)))
      _fail(t);
    else
      i_115 = t;
    t = not_null(h_115);
    if(((j_115 != NULL) && (j_115 != t)))
      _fail(t);
    else
      j_115 = t;
    t = not_null(e_115);
    t = SSL_write_term_to_stream_baf(not_null(i_115), not_null(j_115));
    {
      ATerm l_115 = NULL;
      ATerm n_115 (ATerm t)
      {
        t = not_null(l_115);
        if(((k_115 != NULL) && (k_115 != t)))
          _fail(t);
        else
          k_115 = t;
        t = not_null(l_115);
        return(t);
      }
      if(((l_115 != NULL) && (l_115 != t)))
        _fail(t);
      else
        l_115 = t;
      t = n_115(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_115));
    }
    return(t);
  }
  if(((e_115 != NULL) && (e_115 != t)))
    _fail(t);
  else
    e_115 = t;
  t = not_null(e_115);
  if(match_cons(t, sym__2))
    {
      f_115 = ATgetArgument(t, 0);
      h_115 = ATgetArgument(t, 1);
      t = not_null(f_115);
      if(match_cons(t, sym_Stream_1))
        {
          g_115 = ATgetArgument(t, 0);
          t = m_115(t);
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
ATerm WriteToFile_1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  ATerm b_116 (ATerm t)
  {
    ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,z_115 = NULL;
    t = not_null(t_115);
    if(((v_115 != NULL) && (v_115 != t)))
      _fail(t);
    else
      v_115 = t;
    t = not_null(u_115);
    if(((w_115 != NULL) && (w_115 != t)))
      _fail(t);
    else
      w_115 = t;
    t = not_null(v_115);
    {
      ATerm y_115 = NULL;
      ATerm c_116 (ATerm t)
      {
        t = not_null(y_115);
        if(((x_115 != NULL) && (x_115 != t)))
          _fail(t);
        else
          x_115 = t;
        t = not_null(y_115);
        return(t);
      }
      if(((y_115 != NULL) && (y_115 != t)))
        _fail(t);
      else
        y_115 = t;
      t = c_116(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_115), term_l_34);
      t = open_stream_0_0(t);
      {
        ATerm a_116 = NULL;
        ATerm d_116 (ATerm t)
        {
          t = not_null(a_116);
          if(((z_115 != NULL) && (z_115 != t)))
            _fail(t);
          else
            z_115 = t;
          t = not_null(a_116);
          return(t);
        }
        if(((a_116 != NULL) && (a_116 != t)))
          _fail(t);
        else
          a_116 = t;
        t = d_116(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_115), not_null(w_115));
        t = x_121(t);
        t = fclose_0_0(t);
        t = not_null(w_115);
      }
    }
    return(t);
  }
  if(((s_115 != NULL) && (s_115 != t)))
    _fail(t);
  else
    s_115 = t;
  t = not_null(s_115);
  if(match_cons(t, sym__2))
    {
      t_115 = ATgetArgument(t, 0);
      u_115 = ATgetArgument(t, 1);
      t = b_116(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_116 = NULL;
  ATerm m_34;
  m_34 = t;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_4 (ATerm t)
          {
            ATerm j_116 = NULL,k_116 = NULL;
            ATerm n_116 (ATerm t)
            {
              t = not_null(k_116);
              if(((i_116 != NULL) && (i_116 != t)))
                _fail(t);
              else
                i_116 = t;
              t = not_null(j_116);
              return(t);
            }
            if(((j_116 != NULL) && (j_116 != t)))
              _fail(t);
            else
              j_116 = t;
            t = not_null(j_116);
            if(match_cons(t, sym_Output_1))
              {
                k_116 = ATgetArgument(t, 0);
                t = n_116(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(f_4, t);
          ;
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          {
            ATerm l_116 = NULL;
            ATerm o_116 (ATerm t)
            {
              t = not_null(l_116);
              if(((i_116 != NULL) && (i_116 != t)))
                _fail(t);
              else
                i_116 = t;
              t = not_null(l_116);
              return(t);
            }
            t = term_p_34;
            if(((l_116 != NULL) && (l_116 != t)))
              _fail(t);
            else
              l_116 = t;
            t = o_116(t);
          }
        }
      return(t);
    }
    t = _2_0(c_4, _id, t);
  }
  t = m_34;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(i_116);
        return(t);
      }
      t = split_2_0(h_4, _id, t);
      return(t);
    }
    t = _2_0(_id, g_4, t);
    {
      ATerm q_34 = t;
      int r_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_4 (ATerm t)
          {
            ATerm j_4 (ATerm t)
            {
              ATerm m_116 = NULL;
              if(((m_116 != NULL) && (m_116 != t)))
                _fail(t);
              else
                m_116 = t;
              t = not_null(m_116);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(m_116);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(j_4, t);
            return(t);
          }
          t = _2_0(i_4, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(r_34);
        }
      else
        {
          t = q_34;
          t = _2_0(_id, WriteToTextFile_0_0, t);
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm z_124 (ATerm), ATerm t)
{
  ATerm s_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL;
  ATerm f_117 (ATerm t)
  {
    ATerm c_117 = NULL,d_117 = NULL;
    t = not_null(a_117);
    if(((c_117 != NULL) && (c_117 != t)))
      _fail(t);
    else
      c_117 = t;
    t = not_null(b_117);
    if(((d_117 != NULL) && (d_117 != t)))
      _fail(t);
    else
      d_117 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_117)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(s_116))), not_null(d_117));
    return(t);
  }
  ATerm s_34;
  s_34 = t;
  t = dtime_0_0(t);
  t = s_34;
  t = z_124(t);
  {
    ATerm t_34;
    t_34 = t;
    {
      ATerm t_116 = NULL;
      ATerm e_117 (ATerm t)
      {
        t = not_null(t_116);
        if(((s_116 != NULL) && (s_116 != t)))
          _fail(t);
        else
          s_116 = t;
        t = not_null(t_116);
        return(t);
      }
      t = dtime_0_0(t);
      if(((t_116 != NULL) && (t_116 != t)))
        _fail(t);
      else
        t_116 = t;
      t = e_117(t);
    }
    t = t_34;
    if(((z_116 != NULL) && (z_116 != t)))
      _fail(t);
    else
      z_116 = t;
    t = not_null(z_116);
    if(match_cons(t, sym__2))
      {
        a_117 = ATgetArgument(t, 0);
        b_117 = ATgetArgument(t, 1);
        t = f_117(t);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL;
  ATerm r_117 (ATerm t)
  {
    ATerm n_117 = NULL;
    t = not_null(l_117);
    if(((n_117 != NULL) && (n_117 != t)))
      _fail(t);
    else
      n_117 = t;
    t = not_null(m_117);
    t = SSL_fclose(not_null(n_117));
    return(t);
  }
  ATerm s_117 (ATerm t)
  {
    ATerm q_117 = NULL;
    t = not_null(m_117);
    if(((q_117 != NULL) && (q_117 != t)))
      _fail(t);
    else
      q_117 = t;
    t = not_null(m_117);
    t = SSL_fclose(not_null(q_117));
    return(t);
  }
  if(((m_117 != NULL) && (m_117 != t)))
    _fail(t);
  else
    m_117 = t;
  t = not_null(m_117);
  if(match_cons(t, sym_Stream_1))
    {
      l_117 = ATgetArgument(t, 0);
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_117(t);
            ;
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            t = s_117(t);
          }
      }
    }
  else
    {
      t = s_117(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL;
  ATerm y_117 (ATerm t)
  {
    ATerm x_117 = NULL;
    t = not_null(w_117);
    if(((x_117 != NULL) && (x_117 != t)))
      _fail(t);
    else
      x_117 = t;
    t = not_null(v_117);
    t = SSL_read_term_from_stream(not_null(x_117));
    return(t);
  }
  if(((v_117 != NULL) && (v_117 != t)))
    _fail(t);
  else
    v_117 = t;
  t = not_null(v_117);
  if(match_cons(t, sym_Stream_1))
    {
      w_117 = ATgetArgument(t, 0);
      t = y_117(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm j_121 (ATerm), ATerm t)
{
  ATerm w_34;
  w_34 = t;
  {
    ATerm b_118 = NULL,d_118 = NULL;
    ATerm x_34;
    x_34 = t;
    {
      ATerm c_118 = NULL;
      ATerm f_118 (ATerm t)
      {
        t = not_null(c_118);
        if(((b_118 != NULL) && (b_118 != t)))
          _fail(t);
        else
          b_118 = t;
        t = not_null(c_118);
        return(t);
      }
      t = j_121(t);
      if(((c_118 != NULL) && (c_118 != t)))
        _fail(t);
      else
        c_118 = t;
      t = f_118(t);
    }
    t = x_34;
    {
      ATerm e_118 = NULL;
      ATerm g_118 (ATerm t)
      {
        t = not_null(e_118);
        if(((d_118 != NULL) && (d_118 != t)))
          _fail(t);
        else
          d_118 = t;
        t = not_null(e_118);
        return(t);
      }
      if(((e_118 != NULL) && (e_118 != t)))
        _fail(t);
      else
        e_118 = t;
      t = g_118(t);
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_118)), not_null(b_118)));
      t = printnl_0_0(t);
    }
  }
  t = w_34;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL;
  ATerm r_118 (ATerm t)
  {
    ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL;
    t = not_null(l_118);
    if(((n_118 != NULL) && (n_118 != t)))
      _fail(t);
    else
      n_118 = t;
    t = not_null(m_118);
    if(((o_118 != NULL) && (o_118 != t)))
      _fail(t);
    else
      o_118 = t;
    t = not_null(k_118);
    t = SSL_fopen(not_null(n_118), not_null(o_118));
    {
      ATerm q_118 = NULL;
      ATerm s_118 (ATerm t)
      {
        t = not_null(q_118);
        if(((p_118 != NULL) && (p_118 != t)))
          _fail(t);
        else
          p_118 = t;
        t = not_null(q_118);
        return(t);
      }
      if(((q_118 != NULL) && (q_118 != t)))
        _fail(t);
      else
        q_118 = t;
      t = s_118(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_118));
    }
    return(t);
  }
  if(((k_118 != NULL) && (k_118 != t)))
    _fail(t);
  else
    k_118 = t;
  t = not_null(k_118);
  if(match_cons(t, sym__2))
    {
      l_118 = ATgetArgument(t, 0);
      m_118 = ATgetArgument(t, 1);
      t = r_118(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm u_118 = NULL;
  ATerm w_118 (ATerm t)
  {
    ATerm v_118 = NULL;
    t = not_null(u_118);
    if(((v_118 != NULL) && (v_118 != t)))
      _fail(t);
    else
      v_118 = t;
    t = not_null(u_118);
    t = SSL_is_string(not_null(v_118));
    return(t);
  }
  if(((u_118 != NULL) && (u_118 != t)))
    _fail(t);
  else
    u_118 = t;
  t = w_118(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_118 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_118 = NULL;
    ATerm a_119 (ATerm t)
    {
      t = not_null(z_118);
      if(((y_118 != NULL) && (y_118 != t)))
        _fail(t);
      else
        y_118 = t;
      t = not_null(z_118);
      return(t);
    }
    if(((z_118 != NULL) && (z_118 != t)))
      _fail(t);
    else
      z_118 = t;
    t = a_119(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_118));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_119 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_119 = NULL;
    ATerm e_119 (ATerm t)
    {
      t = not_null(d_119);
      if(((c_119 != NULL) && (c_119 != t)))
        _fail(t);
      else
        c_119 = t;
      t = not_null(d_119);
      return(t);
    }
    if(((d_119 != NULL) && (d_119 != t)))
      _fail(t);
    else
      d_119 = t;
    t = e_119(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_119));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_119 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_119 = NULL;
    ATerm i_119 (ATerm t)
    {
      t = not_null(h_119);
      if(((g_119 != NULL) && (g_119 != t)))
        _fail(t);
      else
        g_119 = t;
      t = not_null(h_119);
      return(t);
    }
    if(((h_119 != NULL) && (h_119 != t)))
      _fail(t);
    else
      h_119 = t;
    t = i_119(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_119));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_119 = NULL;
  ATerm o_119 (ATerm t)
  {
    t = not_null(n_119);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm p_119 (ATerm t)
  {
    t = not_null(n_119);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm q_119 (ATerm t)
  {
    t = not_null(n_119);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((n_119 != NULL) && (n_119 != t)))
    _fail(t);
  else
    n_119 = t;
  t = not_null(n_119);
  if(match_cons(t, sym_stderr_0))
    {
      t = o_119(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_119(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = q_119(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm x_119 = NULL;
  ATerm i_120 (ATerm t)
  {
    ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
    t = not_null(x_119);
    if(((y_119 != NULL) && (y_119 != t)))
      _fail(t);
    else
      y_119 = t;
    t = not_null(x_119);
    {
      ATerm b_120 = NULL;
      ATerm j_120 (ATerm t)
      {
        ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL;
        ATerm k_120 (ATerm t)
        {
          t = not_null(g_120);
          if(((a_120 != NULL) && (a_120 != t)))
            _fail(t);
          else
            a_120 = t;
          t = not_null(h_120);
          if(((z_119 != NULL) && (z_119 != t)))
            _fail(t);
          else
            z_119 = t;
          t = not_null(d_120);
          return(t);
        }
        t = not_null(b_120);
        if(((c_120 != NULL) && (c_120 != t)))
          _fail(t);
        else
          c_120 = t;
        t = not_null(b_120);
        t = SSL_explode_term(not_null(c_120));
        if(((d_120 != NULL) && (d_120 != t)))
          _fail(t);
        else
          d_120 = t;
        t = not_null(d_120);
        if(match_cons(t, sym__2))
          {
            e_120 = ATgetArgument(t, 0);
            f_120 = ATgetArgument(t, 1);
            t = not_null(e_120);
            if(match_string(t, ""))
              {
                t = not_null(f_120);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_120 = ATgetFirst((ATermList) t);
                    h_120 = (ATerm) ATgetNext((ATermList) t);
                    t = k_120(t);
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
      t = not_null(y_119);
      if(((b_120 != NULL) && (b_120 != t)))
        _fail(t);
      else
        b_120 = t;
      t = j_120(t);
      t = not_null(a_120);
    }
    return(t);
  }
  if(((x_119 != NULL) && (x_119 != t)))
    _fail(t);
  else
    x_119 = t;
  t = i_120(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  ATerm v_120 (ATerm t)
  {
    t = not_null(p_120);
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          {
            ATerm a_35 = t;
            int b_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm s_120 = NULL,t_120 = NULL;
                  ATerm w_120 (ATerm t)
                  {
                    ATerm u_120 = NULL;
                    t = not_null(t_120);
                    if(((u_120 != NULL) && (u_120 != t)))
                      _fail(t);
                    else
                      u_120 = t;
                    t = not_null(u_120);
                    return(t);
                  }
                  if(((s_120 != NULL) && (s_120 != t)))
                    _fail(t);
                  else
                    s_120 = t;
                  t = not_null(s_120);
                  if(match_cons(t, sym_Path_1))
                    {
                      t_120 = ATgetArgument(t, 0);
                      t = w_120(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(k_4, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(b_35);
              }
            else
              {
                t = a_35;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((p_120 != NULL) && (p_120 != t)))
    _fail(t);
  else
    p_120 = t;
  t = not_null(p_120);
  if(match_cons(t, sym__2))
    {
      q_120 = ATgetArgument(t, 0);
      r_120 = ATgetArgument(t, 1);
      t = v_120(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_121 = NULL;
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_120 = NULL;
      ATerm a_121 = NULL;
      ATerm d_121 (ATerm t)
      {
        t = not_null(a_121);
        if(((z_120 != NULL) && (z_120 != t)))
          _fail(t);
        else
          z_120 = t;
        t = not_null(a_121);
        return(t);
      }
      if(((a_121 != NULL) && (a_121 != t)))
        _fail(t);
      else
        a_121 = t;
      t = d_121(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_120), term_e_35);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm l_4 (ATerm t)
        {
          t = term_f_35;
          return(t);
        }
        t = debug_1_0(l_4, t);
        _fail(t);
      }
    }
  {
    ATerm g_35;
    g_35 = t;
    {
      ATerm c_121 = NULL;
      ATerm e_121 (ATerm t)
      {
        t = not_null(c_121);
        if(((b_121 != NULL) && (b_121 != t)))
          _fail(t);
        else
          b_121 = t;
        t = not_null(c_121);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((c_121 != NULL) && (c_121 != t)))
        _fail(t);
      else
        c_121 = t;
      t = e_121(t);
    }
    t = g_35;
    t = fclose_0_0(t);
    t = not_null(b_121);
  }
  return(t);
}
ATerm split_2_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm h_121 = NULL,k_121 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    ATerm i_121 = NULL;
    ATerm m_121 (ATerm t)
    {
      t = not_null(i_121);
      if(((h_121 != NULL) && (h_121 != t)))
        _fail(t);
      else
        h_121 = t;
      t = not_null(i_121);
      return(t);
    }
    t = q_106(t);
    if(((i_121 != NULL) && (i_121 != t)))
      _fail(t);
    else
      i_121 = t;
    t = m_121(t);
  }
  t = h_35;
  {
    ATerm l_121 = NULL;
    ATerm n_121 (ATerm t)
    {
      t = not_null(l_121);
      if(((k_121 != NULL) && (k_121 != t)))
        _fail(t);
      else
        k_121 = t;
      t = not_null(l_121);
      return(t);
    }
    t = r_106(t);
    if(((l_121 != NULL) && (l_121 != t)))
      _fail(t);
    else
      l_121 = t;
    t = n_121(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_121), not_null(k_121));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm r_121 = NULL;
  ATerm i_35;
  i_35 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 (ATerm t)
        {
          ATerm s_121 = NULL,t_121 = NULL;
          ATerm v_121 (ATerm t)
          {
            t = not_null(t_121);
            if(((r_121 != NULL) && (r_121 != t)))
              _fail(t);
            else
              r_121 = t;
            t = not_null(s_121);
            return(t);
          }
          if(((s_121 != NULL) && (s_121 != t)))
            _fail(t);
          else
            s_121 = t;
          t = not_null(s_121);
          if(match_cons(t, sym_Input_1))
            {
              t_121 = ATgetArgument(t, 0);
              t = v_121(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(m_4, t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm u_121 = NULL;
          ATerm w_121 (ATerm t)
          {
            t = not_null(u_121);
            if(((r_121 != NULL) && (r_121 != t)))
              _fail(t);
            else
              r_121 = t;
            t = not_null(u_121);
            return(t);
          }
          t = term_l_35;
          if(((u_121 != NULL) && (u_121 != t)))
            _fail(t);
          else
            u_121 = t;
          t = w_121(t);
        }
      }
  }
  t = i_35;
  {
    ATerm n_4 (ATerm t)
    {
      t = not_null(r_121);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, n_4, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm a_122 = NULL;
    if(((a_122 != NULL) && (a_122 != t)))
      _fail(t);
    else
      a_122 = t;
    t = not_null(a_122);
    if(match_string(t, "-k"))
      {
        t = not_null(a_122);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(a_122);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm m_35;
    m_35 = t;
    {
      ATerm b_122 = NULL;
      ATerm c_122 = NULL;
      ATerm d_122 (ATerm t)
      {
        t = not_null(c_122);
        if(((b_122 != NULL) && (b_122 != t)))
          _fail(t);
        else
          b_122 = t;
        t = not_null(c_122);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((c_122 != NULL) && (c_122 != t)))
        _fail(t);
      else
        c_122 = t;
      t = d_122(t);
      t = (ATerm) ATmakeAppl(sym__2, term_n_35, not_null(b_122));
      t = set_config_0_0(t);
    }
    t = m_35;
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_o_35;
    return(t);
  }
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm f_122 = NULL;
  ATerm h_122 (ATerm t)
  {
    ATerm g_122 = NULL;
    t = not_null(f_122);
    if(((g_122 != NULL) && (g_122 != t)))
      _fail(t);
    else
      g_122 = t;
    t = not_null(f_122);
    t = SSL_string_to_int(not_null(g_122));
    return(t);
  }
  if(((f_122 != NULL) && (f_122 != t)))
    _fail(t);
  else
    f_122 = t;
  t = h_122(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        ATerm n_122 = NULL;
        if(((n_122 != NULL) && (n_122 != t)))
          _fail(t);
        else
          n_122 = t;
        t = not_null(n_122);
        if(match_string(t, "-S"))
          {
            t = not_null(n_122);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(n_122);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_r_35;
        t = set_config_0_0(t);
        t = term_s_35;
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = term_t_35;
        return(t);
      }
      t = Option_3_0(r_4, s_4, t_4, t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              ATerm o_122 = NULL;
              if(((o_122 != NULL) && (o_122 != t)))
                _fail(t);
              else
                o_122 = t;
              t = not_null(o_122);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(o_122);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              ATerm r_122 = NULL;
              ATerm w_35;
              w_35 = t;
              {
                ATerm p_122 = NULL;
                ATerm q_122 = NULL;
                ATerm u_122 (ATerm t)
                {
                  t = not_null(q_122);
                  if(((p_122 != NULL) && (p_122 != t)))
                    _fail(t);
                  else
                    p_122 = t;
                  t = not_null(q_122);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((q_122 != NULL) && (q_122 != t)))
                  _fail(t);
                else
                  q_122 = t;
                t = u_122(t);
                t = (ATerm) ATmakeAppl(sym__2, term_i_34, not_null(p_122));
                t = set_config_0_0(t);
              }
              t = w_35;
              {
                ATerm s_122 = NULL;
                ATerm v_122 (ATerm t)
                {
                  t = not_null(s_122);
                  if(((r_122 != NULL) && (r_122 != t)))
                    _fail(t);
                  else
                    r_122 = t;
                  t = not_null(s_122);
                  return(t);
                }
                if(((s_122 != NULL) && (s_122 != t)))
                  _fail(t);
                else
                  s_122 = t;
                t = v_122(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_122));
              }
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = term_x_35;
              return(t);
            }
            t = ArgOption_3_0(u_4, v_4, w_4, t);
            ;
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm t_122 = NULL;
                if(((t_122 != NULL) && (t_122 != t)))
                  _fail(t);
                else
                  t_122 = t;
                t = not_null(t_122);
                if(match_string(t, "-s"))
                  {
                    t = not_null(t_122);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_z_35;
                t = set_config_0_0(t);
                t = term_a_36;
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                t = term_b_36;
                return(t);
              }
              t = Option_3_0(x_4, y_4, z_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm z_122 = NULL;
    if(((z_122 != NULL) && (z_122 != t)))
      _fail(t);
    else
      z_122 = t;
    t = not_null(z_122);
    if(match_string(t, "-o"))
      {
        t = not_null(z_122);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(z_122);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm e_123 = NULL;
    ATerm e_36;
    e_36 = t;
    {
      ATerm c_123 = NULL;
      ATerm d_123 = NULL;
      ATerm g_123 (ATerm t)
      {
        t = not_null(d_123);
        if(((c_123 != NULL) && (c_123 != t)))
          _fail(t);
        else
          c_123 = t;
        t = not_null(d_123);
        return(t);
      }
      if(((d_123 != NULL) && (d_123 != t)))
        _fail(t);
      else
        d_123 = t;
      t = g_123(t);
      t = (ATerm) ATmakeAppl(sym__2, term_f_36, not_null(c_123));
      t = set_config_0_0(t);
    }
    t = e_36;
    {
      ATerm f_123 = NULL;
      ATerm h_123 (ATerm t)
      {
        t = not_null(f_123);
        if(((e_123 != NULL) && (e_123 != t)))
          _fail(t);
        else
          e_123 = t;
        t = not_null(f_123);
        return(t);
      }
      if(((f_123 != NULL) && (f_123 != t)))
        _fail(t);
      else
        f_123 = t;
      t = h_123(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_123));
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_g_36;
    return(t);
  }
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm j_123 = NULL;
          if(((j_123 != NULL) && (j_123 != t)))
            _fail(t);
          else
            j_123 = t;
          t = not_null(j_123);
          if(match_string(t, "-b"))
            {
              t = not_null(j_123);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_k_36;
          t = set_config_0_0(t);
          t = term_l_36;
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = term_m_36;
          return(t);
        }
        t = Option_3_0(d_5, e_5, i_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL;
  ATerm z_123 (ATerm t)
  {
    t = not_null(p_123);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm a_124 (ATerm t)
  {
    ATerm u_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL;
    t = not_null(q_123);
    if(((u_123 != NULL) && (u_123 != t)))
      _fail(t);
    else
      u_123 = t;
    t = not_null(s_123);
    if(((v_123 != NULL) && (v_123 != t)))
      _fail(t);
    else
      v_123 = t;
    t = not_null(t_123);
    if(((w_123 != NULL) && (w_123 != t)))
      _fail(t);
    else
      w_123 = t;
    t = not_null(p_123);
    {
      ATerm n_36;
      n_36 = t;
      t = not_null(u_123);
      t = i_0(t);
      t = n_36;
      {
        ATerm y_123 = NULL;
        ATerm b_124 (ATerm t)
        {
          t = not_null(y_123);
          if(((x_123 != NULL) && (x_123 != t)))
            _fail(t);
          else
            x_123 = t;
          t = not_null(y_123);
          return(t);
        }
        t = not_null(v_123);
        t = k_0(t);
        if(((y_123 != NULL) && (y_123 != t)))
          _fail(t);
        else
          y_123 = t;
        t = b_124(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(w_123)), not_null(x_123));
      }
    }
    return(t);
  }
  if(((p_123 != NULL) && (p_123 != t)))
    _fail(t);
  else
    p_123 = t;
  t = not_null(p_123);
  if(match_string(t, "register-usage-info"))
    {
      t = z_123(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_123 = ATgetFirst((ATermList) t);
          r_123 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(r_123);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_123 = ATgetFirst((ATermList) t);
              t_123 = (ATerm) ATgetNext((ATermList) t);
              t = a_124(t);
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
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm f_124 = NULL;
    if(((f_124 != NULL) && (f_124 != t)))
      _fail(t);
    else
      f_124 = t;
    t = not_null(f_124);
    if(match_string(t, "-i"))
      {
        t = not_null(f_124);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(f_124);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm i_124 = NULL;
    ATerm o_36;
    o_36 = t;
    {
      ATerm g_124 = NULL;
      ATerm h_124 = NULL;
      ATerm k_124 (ATerm t)
      {
        t = not_null(h_124);
        if(((g_124 != NULL) && (g_124 != t)))
          _fail(t);
        else
          g_124 = t;
        t = not_null(h_124);
        return(t);
      }
      if(((h_124 != NULL) && (h_124 != t)))
        _fail(t);
      else
        h_124 = t;
      t = k_124(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_36, not_null(g_124));
      t = set_config_0_0(t);
    }
    t = o_36;
    {
      ATerm j_124 = NULL;
      ATerm l_124 (ATerm t)
      {
        t = not_null(j_124);
        if(((i_124 != NULL) && (i_124 != t)))
          _fail(t);
        else
          i_124 = t;
        t = not_null(j_124);
        return(t);
      }
      if(((j_124 != NULL) && (j_124 != t)))
        _fail(t);
      else
        j_124 = t;
      t = l_124(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_124));
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_x_36;
    return(t);
  }
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_124 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm o_124 = NULL;
    ATerm p_124 (ATerm t)
    {
      t = not_null(o_124);
      if(((n_124 != NULL) && (n_124 != t)))
        _fail(t);
      else
        n_124 = t;
      t = not_null(o_124);
      return(t);
    }
    t = term_o_25;
    t = whoami_0_0(t);
    if(((o_124 != NULL) && (o_124 != t)))
      _fail(t);
    else
      o_124 = t;
    t = p_124(t);
    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, term_c_37), not_null(n_124)));
    t = printnl_0_0(t);
    t = term_z_7;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_37;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm r_124 = NULL;
  ATerm t_124 (ATerm t)
  {
    ATerm s_124 = NULL;
    t = not_null(r_124);
    if(((s_124 != NULL) && (s_124 != t)))
      _fail(t);
    else
      s_124 = t;
    t = not_null(r_124);
    t = SSL_TicksToSeconds(not_null(s_124));
    return(t);
  }
  if(((r_124 != NULL) && (r_124 != t)))
    _fail(t);
  else
    r_124 = t;
  t = t_124(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL;
  ATerm c_125 (ATerm t)
  {
    ATerm a_125 = NULL,b_125 = NULL;
    t = not_null(x_124);
    if(((a_125 != NULL) && (a_125 != t)))
      _fail(t);
    else
      a_125 = t;
    t = not_null(y_124);
    if(((b_125 != NULL) && (b_125 != t)))
      _fail(t);
    else
      b_125 = t;
    t = not_null(w_124);
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(a_125), not_null(b_125));
          ;
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          t = SSL_addr(not_null(a_125), not_null(b_125));
        }
    }
    return(t);
  }
  if(((w_124 != NULL) && (w_124 != t)))
    _fail(t);
  else
    w_124 = t;
  t = not_null(w_124);
  if(match_cons(t, sym__2))
    {
      x_124 = ATgetArgument(t, 0);
      y_124 = ATgetArgument(t, 1);
      t = c_125(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = u_116(t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm m_125 = NULL,n_125 = NULL,s_125 = NULL;
        ATerm y_125 (ATerm t)
        {
          ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL;
          t = not_null(n_125);
          if(((t_125 != NULL) && (t_125 != t)))
            _fail(t);
          else
            t_125 = t;
          t = not_null(s_125);
          if(((u_125 != NULL) && (u_125 != t)))
            _fail(t);
          else
            u_125 = t;
          t = not_null(m_125);
          {
            ATerm w_125 = NULL;
            ATerm d_126 (ATerm t)
            {
              t = not_null(w_125);
              if(((v_125 != NULL) && (v_125 != t)))
                _fail(t);
              else
                v_125 = t;
              t = not_null(w_125);
              return(t);
            }
            t = not_null(u_125);
            t = foldr_2_0(u_116, v_116, t);
            if(((w_125 != NULL) && (w_125 != t)))
              _fail(t);
            else
              w_125 = t;
            t = d_126(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_125), not_null(v_125));
            t = v_116(t);
          }
          return(t);
        }
        if(((m_125 != NULL) && (m_125 != t)))
          _fail(t);
        else
          m_125 = t;
        t = not_null(m_125);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_125 = ATgetFirst((ATermList) t);
            s_125 = (ATerm) ATgetNext((ATermList) t);
            t = y_125(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t)
{
  ATerm i_126 = NULL;
  ATerm q_126 (ATerm t)
  {
    ATerm j_126 = NULL,k_126 = NULL;
    t = not_null(i_126);
    if(((j_126 != NULL) && (j_126 != t)))
      _fail(t);
    else
      j_126 = t;
    t = not_null(i_126);
    {
      ATerm l_126 = NULL;
      ATerm r_126 (ATerm t)
      {
        ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL;
        ATerm s_126 (ATerm t)
        {
          t = not_null(p_126);
          if(((k_126 != NULL) && (k_126 != t)))
            _fail(t);
          else
            k_126 = t;
          t = not_null(n_126);
          return(t);
        }
        t = not_null(l_126);
        if(((m_126 != NULL) && (m_126 != t)))
          _fail(t);
        else
          m_126 = t;
        t = not_null(l_126);
        t = SSL_explode_term(not_null(m_126));
        if(((n_126 != NULL) && (n_126 != t)))
          _fail(t);
        else
          n_126 = t;
        t = not_null(n_126);
        if(match_cons(t, sym__2))
          {
            o_126 = ATgetArgument(t, 0);
            p_126 = ATgetArgument(t, 1);
            t = s_126(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(j_126);
      if(((l_126 != NULL) && (l_126 != t)))
        _fail(t);
      else
        l_126 = t;
      t = r_126(t);
      t = not_null(k_126);
      t = foldr_2_0(y_114, z_114, t);
    }
    return(t);
  }
  if(((i_126 != NULL) && (i_126 != t)))
    _fail(t);
  else
    i_126 = t;
  t = q_126(t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm m_5 (ATerm t)
    {
      t = term_t_32;
      return(t);
    }
    t = crush_2_0(m_5, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL,y_126 = NULL;
  ATerm b_127 (ATerm t)
  {
    ATerm z_126 = NULL,a_127 = NULL;
    t = not_null(w_126);
    if(((z_126 != NULL) && (z_126 != t)))
      _fail(t);
    else
      z_126 = t;
    t = not_null(y_126);
    if(((a_127 != NULL) && (a_127 != t)))
      _fail(t);
    else
      a_127 = t;
    t = not_null(v_126);
    {
      ATerm i_37;
      i_37 = t;
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(z_126), not_null(a_127));
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            t = SSL_gtr(not_null(z_126), not_null(a_127));
          }
      }
      t = i_37;
    }
    return(t);
  }
  if(((v_126 != NULL) && (v_126 != t)))
    _fail(t);
  else
    v_126 = t;
  t = not_null(v_126);
  if(match_cons(t, sym__2))
    {
      w_126 = ATgetArgument(t, 0);
      y_126 = ATgetArgument(t, 1);
      t = b_127(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_127 = NULL;
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL;
      ATerm i_127 (ATerm t)
      {
        t = not_null(g_127);
        if(((e_127 != NULL) && (e_127 != t)))
          _fail(t);
        else
          e_127 = t;
        t = not_null(h_127);
        if(((e_127 != NULL) && (e_127 != t)))
          _fail(t);
        else
          e_127 = t;
        t = not_null(f_127);
        return(t);
      }
      if(((f_127 != NULL) && (f_127 != t)))
        _fail(t);
      else
        f_127 = t;
      t = not_null(f_127);
      if(match_cons(t, sym__2))
        {
          g_127 = ATgetArgument(t, 0);
          h_127 = ATgetArgument(t, 1);
          t = i_127(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm n_37;
    n_37 = t;
    {
      ATerm k_127 = NULL;
      ATerm l_127 = NULL;
      ATerm m_127 (ATerm t)
      {
        t = not_null(l_127);
        if(((k_127 != NULL) && (k_127 != t)))
          _fail(t);
        else
          k_127 = t;
        t = not_null(l_127);
        return(t);
      }
      t = term_i_34;
      t = get_config_0_0(t);
      if(((l_127 != NULL) && (l_127 != t)))
        _fail(t);
      else
        l_127 = t;
      t = m_127(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_127), term_z_7);
      t = geq_0_0(t);
    }
    t = n_37;
    t = a_123(t);
    return(t);
  }
  t = try_1_0(n_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm p_127 = NULL,r_127 = NULL;
    ATerm o_37;
    o_37 = t;
    {
      ATerm q_127 = NULL;
      ATerm t_127 (ATerm t)
      {
        t = not_null(q_127);
        if(((p_127 != NULL) && (p_127 != t)))
          _fail(t);
        else
          p_127 = t;
        t = not_null(q_127);
        return(t);
      }
      t = run_time_0_0(t);
      if(((q_127 != NULL) && (q_127 != t)))
        _fail(t);
      else
        q_127 = t;
      t = t_127(t);
    }
    t = o_37;
    {
      ATerm s_127 = NULL;
      ATerm u_127 (ATerm t)
      {
        t = not_null(s_127);
        if(((r_127 != NULL) && (r_127 != t)))
          _fail(t);
        else
          r_127 = t;
        t = not_null(s_127);
        return(t);
      }
      t = term_o_25;
      t = whoami_0_0(t);
      if(((s_127 != NULL) && (s_127 != t)))
        _fail(t);
      else
        s_127 = t;
      t = u_127(t);
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_37), not_null(p_127)), term_p_37), not_null(r_127)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_t_32;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm f_128 = NULL;
  ATerm l_128 (ATerm t)
  {
    ATerm g_128 = NULL,h_128 = NULL,j_128 = NULL;
    t = not_null(f_128);
    if(((g_128 != NULL) && (g_128 != t)))
      _fail(t);
    else
      g_128 = t;
    t = not_null(f_128);
    {
      ATerm r_37;
      r_37 = t;
      {
        ATerm i_128 = NULL;
        ATerm m_128 (ATerm t)
        {
          t = not_null(i_128);
          if(((h_128 != NULL) && (h_128 != t)))
            _fail(t);
          else
            h_128 = t;
          t = not_null(i_128);
          return(t);
        }
        t = SSLgetAnnotations(not_null(g_128));
        if(((i_128 != NULL) && (i_128 != t)))
          _fail(t);
        else
          i_128 = t;
        t = m_128(t);
      }
      t = r_37;
      {
        ATerm k_128 = NULL;
        ATerm n_128 (ATerm t)
        {
          t = not_null(k_128);
          if(((j_128 != NULL) && (j_128 != t)))
            _fail(t);
          else
            j_128 = t;
          t = not_null(k_128);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_128));
        if(((k_128 != NULL) && (k_128 != t)))
          _fail(t);
        else
          k_128 = t;
        t = n_128(t);
        t = not_null(j_128);
      }
    }
    return(t);
  }
  if(((f_128 != NULL) && (f_128 != t)))
    _fail(t);
  else
    f_128 = t;
  t = not_null(f_128);
  if(match_cons(t, sym_Version_0))
    {
      t = l_128(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_125 (ATerm), ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              {
                ATerm x_37 = t;
                int y_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(y_37);
                  }
                else
                  {
                    t = x_37;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_5, t);
      }
    }
  t = x_125(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_128 = NULL;
  ATerm r_128 (ATerm t)
  {
    ATerm q_128 = NULL;
    t = not_null(p_128);
    if(((q_128 != NULL) && (q_128 != t)))
      _fail(t);
    else
      q_128 = t;
    t = not_null(p_128);
    t = SSL_table_create(not_null(q_128));
    return(t);
  }
  if(((p_128 != NULL) && (p_128 != t)))
    _fail(t);
  else
    p_128 = t;
  t = r_128(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm w_128 = NULL;
  ATerm y_128 (ATerm t)
  {
    ATerm x_128 = NULL;
    t = not_null(w_128);
    if(((x_128 != NULL) && (x_128 != t)))
      _fail(t);
    else
      x_128 = t;
    t = not_null(w_128);
    {
      ATerm z_37;
      z_37 = t;
      t = term_a_38;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_a_38, term_b_38, not_null(x_128));
      t = table_put_0_0(t);
      t = z_37;
    }
    return(t);
  }
  if(((w_128 != NULL) && (w_128 != t)))
    _fail(t);
  else
    w_128 = t;
  t = y_128(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_129 = NULL;
  ATerm c_129 (ATerm t)
  {
    ATerm b_129 = NULL;
    t = not_null(a_129);
    if(((b_129 != NULL) && (b_129 != t)))
      _fail(t);
    else
      b_129 = t;
    t = not_null(a_129);
    t = SSL_table_destroy(not_null(b_129));
    return(t);
  }
  if(((a_129 != NULL) && (a_129 != t)))
    _fail(t);
  else
    a_129 = t;
  t = c_129(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm e_129 = NULL;
  ATerm g_129 (ATerm t)
  {
    ATerm f_129 = NULL;
    t = not_null(e_129);
    if(((f_129 != NULL) && (f_129 != t)))
      _fail(t);
    else
      f_129 = t;
    t = not_null(e_129);
    t = SSL_exit(not_null(f_129));
    return(t);
  }
  if(((e_129 != NULL) && (e_129 != t)))
    _fail(t);
  else
    e_129 = t;
  t = g_129(t);
  return(t);
}
ATerm long_description_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm k_129 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = Cons_2_0(l_99, k_129, t);
      }
    return(t);
  }
  t = k_129(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL;
  ATerm e_130 (ATerm t)
  {
    ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL;
    t = not_null(t_129);
    if(((w_129 != NULL) && (w_129 != t)))
      _fail(t);
    else
      w_129 = t;
    t = not_null(u_129);
    if(((x_129 != NULL) && (x_129 != t)))
      _fail(t);
    else
      x_129 = t;
    t = not_null(x_129);
    {
      ATerm e_38;
      e_38 = t;
      {
        ATerm z_129 = NULL,b_130 = NULL,d_130 = NULL;
        ATerm i_130 (ATerm t)
        {
          t = not_null(d_130);
          if(((y_129 != NULL) && (y_129 != t)))
            _fail(t);
          else
            y_129 = t;
          t = not_null(d_130);
          return(t);
        }
        ATerm f_38;
        f_38 = t;
        {
          ATerm a_130 = NULL;
          ATerm g_130 (ATerm t)
          {
            t = not_null(a_130);
            if(((z_129 != NULL) && (z_129 != t)))
              _fail(t);
            else
              z_129 = t;
            t = not_null(a_130);
            return(t);
          }
          t = g_0(t);
          if(((a_130 != NULL) && (a_130 != t)))
            _fail(t);
          else
            a_130 = t;
          t = g_130(t);
        }
        t = f_38;
        {
          ATerm c_130 = NULL;
          ATerm h_130 (ATerm t)
          {
            t = not_null(c_130);
            if(((b_130 != NULL) && (b_130 != t)))
              _fail(t);
            else
              b_130 = t;
            t = not_null(c_130);
            return(t);
          }
          t = not_null(w_129);
          t = f_0(t);
          if(((c_130 != NULL) && (c_130 != t)))
            _fail(t);
          else
            c_130 = t;
          t = h_130(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(z_129)), not_null(b_130));
          if(((d_130 != NULL) && (d_130 != t)))
            _fail(t);
          else
            d_130 = t;
          t = i_130(t);
        }
      }
      t = e_38;
      {
        ATerm q_5 (ATerm t)
        {
          t = not_null(y_129);
          return(t);
        }
        t = reverse_acc_2_0(f_0, q_5, t);
      }
    }
    return(t);
  }
  ATerm f_130 (ATerm t)
  {
    t = term_o_25;
    t = g_0(t);
    return(t);
  }
  if(((v_129 != NULL) && (v_129 != t)))
    _fail(t);
  else
    v_129 = t;
  t = not_null(v_129);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_129 = ATgetFirst((ATermList) t);
      u_129 = (ATerm) ATgetNext((ATermList) t);
      t = e_130(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_130(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, r_5, t);
  return(t);
}
ATerm short_description_1_0 (ATerm x_127 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL;
  ATerm y_130 (ATerm t)
  {
    ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,u_130 = NULL;
    ATerm a_131 (ATerm t)
    {
      ATerm v_130 = NULL,w_130 = NULL;
      t = not_null(u_130);
      if(((v_130 != NULL) && (v_130 != t)))
        _fail(t);
      else
        v_130 = t;
      t = not_null(u_130);
      {
        ATerm x_130 = NULL;
        ATerm b_131 (ATerm t)
        {
          t = not_null(x_130);
          if(((w_130 != NULL) && (w_130 != t)))
            _fail(t);
          else
            w_130 = t;
          t = not_null(x_130);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_130)), not_null(s_130));
        if(((x_130 != NULL) && (x_130 != t)))
          _fail(t);
        else
          x_130 = t;
        t = b_131(t);
        t = not_null(w_130);
      }
      return(t);
    }
    t = not_null(o_130);
    if(((q_130 != NULL) && (q_130 != t)))
      _fail(t);
    else
      q_130 = t;
    t = not_null(p_130);
    if(((r_130 != NULL) && (r_130 != t)))
      _fail(t);
    else
      r_130 = t;
    t = not_null(o_130);
    {
      ATerm t_130 = NULL;
      ATerm z_130 (ATerm t)
      {
        t = not_null(t_130);
        if(((s_130 != NULL) && (s_130 != t)))
          _fail(t);
        else
          s_130 = t;
        t = not_null(t_130);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_130));
      if(((t_130 != NULL) && (t_130 != t)))
        _fail(t);
      else
        t_130 = t;
      t = z_130(t);
      t = not_null(r_130);
      t = d_94(t);
      if(((u_130 != NULL) && (u_130 != t)))
        _fail(t);
      else
        u_130 = t;
      t = a_131(t);
    }
    return(t);
  }
  if(((o_130 != NULL) && (o_130 != t)))
    _fail(t);
  else
    o_130 = t;
  t = not_null(o_130);
  if(match_cons(t, sym_Program_1))
    {
      p_130 = ATgetArgument(t, 0);
      t = y_130(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_131 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_131 = NULL;
      ATerm n_131 (ATerm t)
      {
        t = not_null(h_131);
        if(((g_131 != NULL) && (g_131 != t)))
          _fail(t);
        else
          g_131 = t;
        t = not_null(h_131);
        return(t);
      }
      t = term_d_37;
      t = get_config_0_0(t);
      if(((h_131 != NULL) && (h_131 != t)))
        _fail(t);
      else
        h_131 = t;
      t = n_131(t);
      ;
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm i_131 = NULL;
            ATerm o_131 (ATerm t)
            {
              t = not_null(i_131);
              if(((g_131 != NULL) && (g_131 != t)))
                _fail(t);
              else
                g_131 = t;
              t = not_null(i_131);
              return(t);
            }
            if(((i_131 != NULL) && (i_131 != t)))
              _fail(t);
            else
              i_131 = t;
            t = o_131(t);
            return(t);
          }
          t = Program_1_0(t_5, t);
          return(t);
        }
        t = option_defined_1_0(s_5, t);
      }
    }
  {
    ATerm u_5 (ATerm t)
    {
      ATerm v_5 (ATerm t)
      {
        t = not_null(g_131);
        return(t);
      }
      t = short_description_1_0(v_5, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(u_5, t);
    t = term_z_38;
    t = echo_0_0(t);
    t = term_c_39;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm j_131 = NULL;
        ATerm k_131 = NULL;
        ATerm p_131 (ATerm t)
        {
          t = not_null(k_131);
          if(((j_131 != NULL) && (j_131 != t)))
            _fail(t);
          else
            j_131 = t;
          t = not_null(k_131);
          return(t);
        }
        if(((k_131 != NULL) && (k_131 != t)))
          _fail(t);
        else
          k_131 = t;
        t = p_131(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_131)), term_d_39);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(w_5, t);
      {
        ATerm x_5 (ATerm t)
        {
          ATerm l_131 = NULL;
          ATerm m_131 = NULL;
          ATerm q_131 (ATerm t)
          {
            t = not_null(m_131);
            if(((l_131 != NULL) && (l_131 != t)))
              _fail(t);
            else
              l_131 = t;
            t = not_null(m_131);
            return(t);
          }
          ATerm y_5 (ATerm t)
          {
            t = not_null(g_131);
            return(t);
          }
          t = long_description_1_0(y_5, t);
          if(((m_131 != NULL) && (m_131 != t)))
            _fail(t);
          else
            m_131 = t;
          t = q_131(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(l_131)), term_e_39);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(x_5, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL;
  ATerm g_132 (ATerm t)
  {
    ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL,c_132 = NULL;
    ATerm i_132 (ATerm t)
    {
      ATerm d_132 = NULL,e_132 = NULL;
      t = not_null(c_132);
      if(((d_132 != NULL) && (d_132 != t)))
        _fail(t);
      else
        d_132 = t;
      t = not_null(c_132);
      {
        ATerm f_132 = NULL;
        ATerm j_132 (ATerm t)
        {
          t = not_null(f_132);
          if(((e_132 != NULL) && (e_132 != t)))
            _fail(t);
          else
            e_132 = t;
          t = not_null(f_132);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_132)), not_null(a_132));
        if(((f_132 != NULL) && (f_132 != t)))
          _fail(t);
        else
          f_132 = t;
        t = j_132(t);
        t = not_null(e_132);
      }
      return(t);
    }
    t = not_null(w_131);
    if(((y_131 != NULL) && (y_131 != t)))
      _fail(t);
    else
      y_131 = t;
    t = not_null(x_131);
    if(((z_131 != NULL) && (z_131 != t)))
      _fail(t);
    else
      z_131 = t;
    t = not_null(w_131);
    {
      ATerm b_132 = NULL;
      ATerm h_132 (ATerm t)
      {
        t = not_null(b_132);
        if(((a_132 != NULL) && (a_132 != t)))
          _fail(t);
        else
          a_132 = t;
        t = not_null(b_132);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_131));
      if(((b_132 != NULL) && (b_132 != t)))
        _fail(t);
      else
        b_132 = t;
      t = h_132(t);
      t = not_null(z_131);
      t = e_94(t);
      if(((c_132 != NULL) && (c_132 != t)))
        _fail(t);
      else
        c_132 = t;
      t = i_132(t);
    }
    return(t);
  }
  if(((w_131 != NULL) && (w_131 != t)))
    _fail(t);
  else
    w_131 = t;
  t = not_null(w_131);
  if(match_cons(t, sym_Undefined_1))
    {
      x_131 = ATgetArgument(t, 0);
      t = g_132(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm k_132 (ATerm t)
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_99, _id, t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = Cons_2_0(_id, k_132, t);
      }
    return(t);
  }
  t = k_132(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  t = fetch_1_0(x_126, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL;
  if(((m_132 != NULL) && (m_132 != t)))
    _fail(t);
  else
    m_132 = t;
  t = not_null(m_132);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(m_132);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_132 = ATgetFirst((ATermList) t);
          o_132 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(m_132);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_39;
  j_39 = t;
  {
    ATerm r_132 = NULL;
    ATerm u_132 = NULL;
    ATerm w_132 (ATerm t)
    {
      t = not_null(u_132);
      if(((r_132 != NULL) && (r_132 != t)))
        _fail(t);
      else
        r_132 = t;
      t = not_null(u_132);
      return(t);
    }
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        {
          ATerm s_132 = NULL;
          ATerm t_132 = NULL;
          ATerm v_132 (ATerm t)
          {
            t = not_null(t_132);
            if(((s_132 != NULL) && (s_132 != t)))
              _fail(t);
            else
              s_132 = t;
            t = not_null(t_132);
            return(t);
          }
          if(((t_132 != NULL) && (t_132 != t)))
            _fail(t);
          else
            t_132 = t;
          t = v_132(t);
          t = (ATerm) ATinsert(ATempty, not_null(s_132));
        }
      }
    if(((u_132 != NULL) && (u_132 != t)))
      _fail(t);
    else
      u_132 = t;
    t = w_132(t);
    t = (ATerm) ATmakeAppl(sym__2, term_p_34, not_null(r_132));
    t = printnl_0_0(t);
  }
  t = j_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_37;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm b_133 = NULL;
  ATerm h_133 (ATerm t)
  {
    ATerm c_133 = NULL,d_133 = NULL,f_133 = NULL;
    t = not_null(b_133);
    if(((c_133 != NULL) && (c_133 != t)))
      _fail(t);
    else
      c_133 = t;
    t = not_null(b_133);
    {
      ATerm o_39;
      o_39 = t;
      {
        ATerm e_133 = NULL;
        ATerm i_133 (ATerm t)
        {
          t = not_null(e_133);
          if(((d_133 != NULL) && (d_133 != t)))
            _fail(t);
          else
            d_133 = t;
          t = not_null(e_133);
          return(t);
        }
        t = SSLgetAnnotations(not_null(c_133));
        if(((e_133 != NULL) && (e_133 != t)))
          _fail(t);
        else
          e_133 = t;
        t = i_133(t);
      }
      t = o_39;
      {
        ATerm g_133 = NULL;
        ATerm j_133 (ATerm t)
        {
          t = not_null(g_133);
          if(((f_133 != NULL) && (f_133 != t)))
            _fail(t);
          else
            f_133 = t;
          t = not_null(g_133);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_133));
        if(((g_133 != NULL) && (g_133 != t)))
          _fail(t);
        else
          g_133 = t;
        t = j_133(t);
        t = not_null(f_133);
      }
    }
    return(t);
  }
  if(((b_133 != NULL) && (b_133 != t)))
    _fail(t);
  else
    b_133 = t;
  t = not_null(b_133);
  if(match_cons(t, sym_Help_0))
    {
      t = h_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_105(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 (ATerm t)
      {
        ATerm m_133 = NULL;
        if(((m_133 != NULL) && (m_133 != t)))
          _fail(t);
        else
          m_133 = t;
        t = not_null(m_133);
        if(match_string(t, "--about"))
          {
            t = not_null(m_133);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = term_c_40;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = term_d_40;
        return(t);
      }
      t = Option_3_0(z_5, a_6, b_6, t);
      ;
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      {
        ATerm c_6 (ATerm t)
        {
          ATerm n_133 = NULL;
          if(((n_133 != NULL) && (n_133 != t)))
            _fail(t);
          else
            n_133 = t;
          t = not_null(n_133);
          if(match_string(t, "--version"))
            {
              t = not_null(n_133);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_c_40;
          t = set_config_0_0(t);
          t = term_f_40;
          t = set_config_0_0(t);
          t = term_g_40;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = term_h_40;
          return(t);
        }
        t = Option_3_0(c_6, d_6, e_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
  ATerm v_133 (ATerm t)
  {
    ATerm t_133 = NULL,u_133 = NULL;
    t = not_null(r_133);
    if(((t_133 != NULL) && (t_133 != t)))
      _fail(t);
    else
      t_133 = t;
    t = not_null(s_133);
    if(((u_133 != NULL) && (u_133 != t)))
      _fail(t);
    else
      u_133 = t;
    t = not_null(q_133);
    t = SSL_table_get(not_null(t_133), not_null(u_133));
    return(t);
  }
  if(((q_133 != NULL) && (q_133 != t)))
    _fail(t);
  else
    q_133 = t;
  t = not_null(q_133);
  if(match_cons(t, sym__2))
    {
      r_133 = ATgetArgument(t, 0);
      s_133 = ATgetArgument(t, 1);
      t = v_133(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL;
  ATerm i_134 (ATerm t)
  {
    ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
    t = not_null(a_134);
    if(((e_134 != NULL) && (e_134 != t)))
      _fail(t);
    else
      e_134 = t;
    t = not_null(b_134);
    if(((f_134 != NULL) && (f_134 != t)))
      _fail(t);
    else
      f_134 = t;
    t = not_null(c_134);
    if(((d_134 != NULL) && (d_134 != t)))
      _fail(t);
    else
      d_134 = t;
    t = not_null(z_133);
    {
      ATerm i_40;
      i_40 = t;
      {
        ATerm g_134 = NULL;
        ATerm h_134 = NULL;
        ATerm j_134 (ATerm t)
        {
          t = not_null(h_134);
          if(((g_134 != NULL) && (g_134 != t)))
            _fail(t);
          else
            g_134 = t;
          t = not_null(h_134);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_134), not_null(f_134));
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(k_40);
            }
          else
            {
              t = j_40;
              t = (ATerm) ATempty;
            }
          if(((h_134 != NULL) && (h_134 != t)))
            _fail(t);
          else
            h_134 = t;
          t = j_134(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_134), not_null(f_134), (ATerm) ATinsert(CheckATermList(not_null(g_134)), not_null(d_134)));
        t = table_put_0_0(t);
      }
      t = i_40;
    }
    return(t);
  }
  if(((z_133 != NULL) && (z_133 != t)))
    _fail(t);
  else
    z_133 = t;
  t = not_null(z_133);
  if(match_cons(t, sym__3))
    {
      a_134 = ATgetArgument(t, 0);
      b_134 = ATgetArgument(t, 1);
      c_134 = ATgetArgument(t, 2);
      t = i_134(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_128 (ATerm), ATerm t)
{
  ATerm l_134 = NULL;
  ATerm m_134 = NULL;
  ATerm n_134 (ATerm t)
  {
    t = not_null(m_134);
    if(((l_134 != NULL) && (l_134 != t)))
      _fail(t);
    else
      l_134 = t;
    t = not_null(m_134);
    return(t);
  }
  t = term_o_25;
  t = c_128(t);
  if(((m_134 != NULL) && (m_134 != t)))
    _fail(t);
  else
    m_134 = t;
  t = n_134(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_39, term_b_39, not_null(l_134));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL;
  ATerm z_134 (ATerm t)
  {
    t = not_null(s_134);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm a_135 (ATerm t)
  {
    ATerm v_134 = NULL,w_134 = NULL,x_134 = NULL;
    t = not_null(t_134);
    if(((v_134 != NULL) && (v_134 != t)))
      _fail(t);
    else
      v_134 = t;
    t = not_null(u_134);
    if(((w_134 != NULL) && (w_134 != t)))
      _fail(t);
    else
      w_134 = t;
    t = not_null(s_134);
    {
      ATerm l_40;
      l_40 = t;
      t = not_null(v_134);
      t = a_0(t);
      t = l_40;
      {
        ATerm y_134 = NULL;
        ATerm b_135 (ATerm t)
        {
          t = not_null(y_134);
          if(((x_134 != NULL) && (x_134 != t)))
            _fail(t);
          else
            x_134 = t;
          t = not_null(y_134);
          return(t);
        }
        t = term_o_25;
        t = b_0(t);
        if(((y_134 != NULL) && (y_134 != t)))
          _fail(t);
        else
          y_134 = t;
        t = b_135(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(w_134)), not_null(x_134));
      }
    }
    return(t);
  }
  if(((s_134 != NULL) && (s_134 != t)))
    _fail(t);
  else
    s_134 = t;
  t = not_null(s_134);
  if(match_string(t, "register-usage-info"))
    {
      t = z_134(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_134 = ATgetFirst((ATermList) t);
          u_134 = (ATerm) ATgetNext((ATermList) t);
          t = a_135(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm d_135 = NULL;
    if(((d_135 != NULL) && (d_135 != t)))
      _fail(t);
    else
      d_135 = t;
    t = not_null(d_135);
    if(match_string(t, "--help"))
      {
        t = not_null(d_135);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(d_135);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(d_135);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_m_40;
    t = set_config_0_0(t);
    t = term_n_40;
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_o_40;
    return(t);
  }
  t = Option_3_0(f_6, g_6, h_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  ATerm l_135 (ATerm t)
  {
    ATerm j_135 = NULL,k_135 = NULL;
    t = not_null(h_135);
    if(((j_135 != NULL) && (j_135 != t)))
      _fail(t);
    else
      j_135 = t;
    t = not_null(i_135);
    if(((k_135 != NULL) && (k_135 != t)))
      _fail(t);
    else
      k_135 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(k_135)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_135)));
    return(t);
  }
  if(((g_135 != NULL) && (g_135 != t)))
    _fail(t);
  else
    g_135 = t;
  t = not_null(g_135);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_135 = ATgetFirst((ATermList) t);
      i_135 = (ATerm) ATgetNext((ATermList) t);
      t = l_135(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL,q_135 = NULL;
  ATerm t_135 (ATerm t)
  {
    ATerm r_135 = NULL,s_135 = NULL;
    t = not_null(p_135);
    if(((r_135 != NULL) && (r_135 != t)))
      _fail(t);
    else
      r_135 = t;
    t = not_null(q_135);
    if(((s_135 != NULL) && (s_135 != t)))
      _fail(t);
    else
      s_135 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_f_34, not_null(r_135), not_null(s_135));
    t = table_put_0_0(t);
    return(t);
  }
  if(((o_135 != NULL) && (o_135 != t)))
    _fail(t);
  else
    o_135 = t;
  t = not_null(o_135);
  if(match_cons(t, sym__2))
    {
      p_135 = ATgetArgument(t, 0);
      q_135 = ATgetArgument(t, 1);
      t = t_135(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm p_40;
  p_40 = t;
  {
    ATerm i_6 (ATerm t)
    {
      t = term_q_40;
      t = a_128(t);
      return(t);
    }
    t = try_1_0(i_6, t);
  }
  t = p_40;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm y_135 = NULL;
      ATerm r_40;
      r_40 = t;
      {
        ATerm w_135 = NULL;
        ATerm x_135 = NULL;
        ATerm a_136 (ATerm t)
        {
          t = not_null(x_135);
          if(((w_135 != NULL) && (w_135 != t)))
            _fail(t);
          else
            w_135 = t;
          t = not_null(x_135);
          return(t);
        }
        if(((x_135 != NULL) && (x_135 != t)))
          _fail(t);
        else
          x_135 = t;
        t = a_136(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_37, not_null(w_135));
        t = set_config_0_0(t);
      }
      t = r_40;
      {
        ATerm z_135 = NULL;
        ATerm b_136 (ATerm t)
        {
          t = not_null(z_135);
          if(((y_135 != NULL) && (y_135 != t)))
            _fail(t);
          else
            y_135 = t;
          t = not_null(z_135);
          return(t);
        }
        if(((z_135 != NULL) && (z_135 != t)))
          _fail(t);
        else
          z_135 = t;
        t = b_136(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_135));
      }
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm s_40 = t;
      int t_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(v_40);
            }
          else
            {
              t = u_40;
              t = a_128(t);
              t = Cons_2_0(_id, n_6, t);
            }
          ;
          LocalPopChoice(t_40);
        }
      else
        {
          t = s_40;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(m_6, n_6, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_136 = NULL,g_136 = NULL,h_136 = NULL;
  ATerm w_40;
  w_40 = t;
  {
    ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
    ATerm m_136 (ATerm t)
    {
      t = not_null(j_136);
      if(((f_136 != NULL) && (f_136 != t)))
        _fail(t);
      else
        f_136 = t;
      t = not_null(k_136);
      if(((g_136 != NULL) && (g_136 != t)))
        _fail(t);
      else
        g_136 = t;
      t = not_null(l_136);
      if(((h_136 != NULL) && (h_136 != t)))
        _fail(t);
      else
        h_136 = t;
      t = not_null(i_136);
      t = SSL_table_put(not_null(f_136), not_null(g_136), not_null(h_136));
      return(t);
    }
    if(((i_136 != NULL) && (i_136 != t)))
      _fail(t);
    else
      i_136 = t;
    t = not_null(i_136);
    if(match_cons(t, sym__3))
      {
        j_136 = ATgetArgument(t, 0);
        k_136 = ATgetArgument(t, 1);
        l_136 = ATgetArgument(t, 2);
        t = m_136(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = w_40;
  return(t);
}
ATerm parse_options_1_0 (ATerm z_127 (ATerm), ATerm t)
{
  ATerm o_136 = NULL;
  ATerm x_40;
  x_40 = t;
  t = term_y_40;
  t = table_put_0_0(t);
  t = x_40;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm z_40 = t;
      int a_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_127(t);
          ;
          LocalPopChoice(a_41);
        }
      else
        {
          t = z_40;
          {
            ATerm b_41 = t;
            int c_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(c_41);
              }
            else
              {
                t = b_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_6, t);
    {
      ATerm p_6 (ATerm t)
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_41;
            f_41 = t;
            {
              ATerm g_41 = t;
              int h_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_37;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(h_41);
                }
              else
                {
                  t = g_41;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = f_41;
            t = system_usage_0_0(t);
            t = term_t_32;
            t = exit_0_0(t);
            ;
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm i_41 = t;
              int j_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_41;
                  k_41 = t;
                  t = term_t_39;
                  t = get_config_0_0(t);
                  t = k_41;
                  t = system_about_0_0(t);
                  t = term_t_32;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(j_41);
                }
              else
                {
                  t = i_41;
                  {
                    ATerm q_6 (ATerm t)
                    {
                      ATerm r_6 (ATerm t)
                      {
                        ATerm p_136 = NULL;
                        ATerm q_136 (ATerm t)
                        {
                          t = not_null(p_136);
                          if(((o_136 != NULL) && (o_136 != t)))
                            _fail(t);
                          else
                            o_136 = t;
                          t = not_null(p_136);
                          return(t);
                        }
                        if(((p_136 != NULL) && (p_136 != t)))
                          _fail(t);
                        else
                          p_136 = t;
                        t = q_136(t);
                        return(t);
                      }
                      t = Undefined_1_0(r_6, t);
                      return(t);
                    }
                    t = option_defined_1_0(q_6, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_136)), term_l_41));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_z_7;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(p_6, t);
      {
        ATerm m_41;
        m_41 = t;
        t = term_a_39;
        t = table_destroy_0_0(t);
        t = m_41;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm b_126 (ATerm), ATerm c_126 (ATerm), ATerm t)
{
  t = parse_options_1_0(z_125, t);
  t = store_options_0_0(t);
  t = b_126(t);
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_126, t);
        ;
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        {
          ATerm p_41 = t;
          int q_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_126(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_41);
            }
          else
            {
              t = p_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_125, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_6, q_125, r_125, t_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm t_41;
      t_41 = t;
      {
        ATerm s_136 = NULL;
        ATerm t_136 = NULL;
        ATerm u_136 (ATerm t)
        {
          t = not_null(t_136);
          if(((s_136 != NULL) && (s_136 != t)))
            _fail(t);
          else
            s_136 = t;
          t = not_null(t_136);
          return(t);
        }
        t = term_d_37;
        t = get_config_0_0(t);
        if(((t_136 != NULL) && (t_136 != t)))
          _fail(t);
        else
          t_136 = t;
        t = u_136(t);
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(ATempty, not_null(s_136)));
        t = printnl_0_0(t);
      }
      t = t_41;
      return(t);
    }
    t = if_verbose2_1_0(v_6, t);
    return(t);
  }
  t = iowrap_4_0(i_125, j_125, k_125, u_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_125, h_125, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_125 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    t = _2_0(_id, d_125, t);
    return(t);
  }
  t = iowrap_2_0(w_6, _fail, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm y_6 (ATerm t)
    {
      ATerm a_7 (ATerm t)
      {
        ATerm b_7 (ATerm t)
        {
          t = Strategies_1_0(all_defs_0_0, t);
          return(t);
        }
        t = Cons_2_0(b_7, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, a_7, t);
      return(t);
    }
    t = Specification_1_0(y_6, t);
    return(t);
  }
  t = iowrap_1_0(x_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = extract_all_0_0(t);
  return(t);
}
