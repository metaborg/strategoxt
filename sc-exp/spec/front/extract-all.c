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
ATerm term_v_34;
ATerm term_i_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_q_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_b_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_y_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_22;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_p_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_12;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_o_10;
ATerm term_g_8;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_l_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
void init_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Op_2, term_i_13, (ATerm) ATempty);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_c_22);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_22);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_h_17);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_h_17);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_h_17);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_h_17);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_h_17);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, (ATerm) ATempty);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm));
ATerm SDefT_4 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm Let_2 (ATerm, ATerm h_89 (ATerm), ATerm i_89 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm));
ATerm Bind7_0 (ATerm);
ATerm Bind5_0 (ATerm);
ATerm Bind3_0 (ATerm);
ATerm declared_vars_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_111 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm tsubs_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm a_103 (ATerm), ATerm b_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm u_104 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm));
ATerm substitute_1 (ATerm, ATerm n_102 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm o_86 (ATerm), ATerm p_86 (ATerm));
ATerm PrimT_3 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm Op_2 (ATerm, ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_98 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm MkConstType_0 (ATerm);
ATerm MkFunType_0 (ATerm);
ATerm map1_1 (ATerm, ATerm q_0 (ATerm));
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_107 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm j_113 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm l_86 (ATerm), ATerm m_86 (ATerm));
ATerm Con_3 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_89 (ATerm), ATerm s_89 (ATerm));
ATerm oncetd_1 (ATerm, ATerm g_104 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_103 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm e_107 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm h_117 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm w_107 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm h_114 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm zip_1 (ATerm, ATerm t_107 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_113 (ATerm), ATerm z_113 (ATerm));
ATerm for_3 (ATerm, ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm o_129 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_129 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm RegisterSDefT_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm DefinitionName_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_114 (ATerm), ATerm q_114 (ATerm));
ATerm union_1 (ATerm, ATerm l_114 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm y_84 (ATerm));
ATerm Cons_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_85 (ATerm));
ATerm _2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_99 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_122 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm v_121 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_124 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_121 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_106 (ATerm), ATerm p_106 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_116 (ATerm), ATerm t_116 (ATerm));
ATerm crush_2 (ATerm, ATerm w_114 (ATerm), ATerm x_114 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_122 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_125 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_127 (ATerm));
ATerm map_1 (ATerm, ATerm j_99 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_127 (ATerm));
ATerm Program_1 (ATerm, ATerm b_94 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_94 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_126 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_105 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_128 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_127 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_127 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_125 (ATerm), ATerm f_125 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_125 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  c_4 :
  if(((ATgetType(d_4) == AT_LIST) && ATisEmpty(d_4)))
    {
      {
        ATerm f_5 = NULL,h_5 = NULL;
        ATerm z_6;
        z_6 = t;
        {
          ATerm g_5 = NULL;
          t = SSLgetAnnotations(not_null(d_4));
          {
            g_5 = t;
            if(((f_5 != NULL) && (f_5 != g_5)))
              _fail(g_5);
            else
              f_5 = g_5;
          }
        }
        t = z_6;
        {
          ATerm j_6 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
          {
            j_6 = t;
            if(((h_5 != NULL) && (h_5 != j_6)))
              _fail(j_6);
            else
              h_5 = j_6;
          }
          t = not_null(h_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  b_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(h_7)), term_c_7), not_null(g_7)), term_a_7);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
  o_7 = t;
  m_7 :
  if(match_cons(o_7, sym__2))
    {
      p_7 = ATgetArgument(o_7, 0);
      s_7 = ATgetArgument(o_7, 1);
      n_7 :
      if(match_cons(p_7, sym_Mod_2))
        {
          q_7 = ATgetArgument(p_7, 0);
          r_7 = ATgetArgument(p_7, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(s_7)), term_c_7), not_null(r_7)), term_e_7), not_null(q_7)), term_a_7);
            t = error_0(t);
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  a_8 = t;
  y_7 :
  if(match_cons(a_8, sym__2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      z_7 :
      if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
        {
          d_8 = ATgetFirst((ATermList) c_8);
          e_8 = (ATerm) ATgetNext((ATermList) c_8);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), not_null(d_8));
            {
              ATerm f_0 (ATerm t)
              {
                ATerm i_7 = t;
                int j_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(j_7);
                  }
                else
                  {
                    t = i_7;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, f_0);
            }
            t = not_null(b_8);
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  k_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      l_8 :
      if(((ATgetType(o_8) == AT_LIST) && ATisEmpty(o_8)))
        {
          t = not_null(n_8);
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm k_7;
  k_7 = t;
  {
    t = error_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  t = k_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_7;
  u_7 = t;
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    t_8 = t;
    if(((s_8 != NULL) && (s_8 != t_8)))
      _fail(t_8);
    else
      s_8 = t_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(s_8));
      t = printnl_0(t);
    }
  }
  t = u_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  l_9 = t;
  h_9 :
  if(match_cons(l_9, sym__2))
    {
      m_9 = ATgetArgument(l_9, 0);
      n_9 = ATgetArgument(l_9, 1);
      i_9 :
      if(match_cons(n_9, sym__2))
        {
          o_9 = ATgetArgument(n_9, 0);
          p_9 = ATgetArgument(n_9, 1);
          j_9 :
          if(match_int(o_9, 0))
            {
              k_9 :
              if(match_int(p_9, 0))
                {
                  ATerm w_7 = t;
                  int x_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
                      t = not_null(m_9);
                      {
                        t = Arities_0(t);
                        {
                          r_9 = t;
                          b_9 :
                          if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
                            {
                              s_9 = ATgetFirst((ATermList) r_9);
                              t_9 = (ATerm) ATgetNext((ATermList) r_9);
                              c_9 :
                              if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
                                {
                                  u_9 = ATgetFirst((ATermList) t_9);
                                  v_9 = (ATerm) ATgetNext((ATermList) t_9);
                                  {
                                    ATerm f_8 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_0 (ATerm t)
                                        {
                                          ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
                                          w_9 = t;
                                          y_8 :
                                          if(match_cons(w_9, sym__2))
                                            {
                                              x_9 = ATgetArgument(w_9, 0);
                                              y_9 = ATgetArgument(w_9, 1);
                                              z_8 :
                                              if(match_int(x_9, 0))
                                                {
                                                  a_9 :
                                                  if(!(match_int(y_9, 0)))
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
                                        t = fetch_1(t, l_0);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = f_8;
                                      }
                                    {
                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_9)), term_g_8);
                                      {
                                        t = error_0(t);
                                        t = giving_up_0(t);
                                      }
                                    }
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
                      }
                      ;
                      LocalPopChoice(x_7);
                    }
                  else
                    {
                      t = w_7;
                      {
                        ATerm a_10 = NULL,b_10 = NULL;
                        ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
                        t = not_null(m_9);
                        {
                          t = Arities_0(t);
                          {
                            c_10 = t;
                            e_9 :
                            if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
                              {
                                d_10 = ATgetFirst((ATermList) c_10);
                                g_10 = (ATerm) ATgetNext((ATermList) c_10);
                                f_9 :
                                if(match_cons(d_10, sym__2))
                                  {
                                    e_10 = ATgetArgument(d_10, 0);
                                    f_10 = ATgetArgument(d_10, 1);
                                    g_9 :
                                    if(((ATgetType(g_10) == AT_LIST) && ATisEmpty(g_10)))
                                      {
                                        {
                                          if(((a_10 != NULL) && (a_10 != e_10)))
                                            _fail(e_10);
                                          else
                                            a_10 = e_10;
                                          {
                                            if(((b_10 != NULL) && (b_10 != f_10)))
                                              _fail(f_10);
                                            else
                                              b_10 = f_10;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
                                              t = Definitions_0(t);
                                            }
                                          }
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
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), (ATerm) ATmakeAppl(sym__2, not_null(a_10), not_null(b_10)));
                      }
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
ATerm Rec_2 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_Rec_2))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(s_10);
          {
            ATerm b_11 = NULL;
            t = e_90(t);
            {
              z_10 = t;
              {
                t = not_null(t_10);
                {
                  ATerm d_11 = NULL;
                  t = f_90(t);
                  {
                    b_11 = t;
                    {
                      ATerm e_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_10), not_null(b_11)), not_null(x_10));
                      {
                        e_11 = t;
                        if(((d_11 != NULL) && (d_11 != e_11)))
                          _fail(e_11);
                        else
                          d_11 = e_11;
                      }
                      t = not_null(d_11);
                    }
                  }
                }
              }
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
ATerm SDefT_4 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm c_92 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_SDefT_4))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      v_11 = ATgetArgument(s_11, 2);
      w_11 = ATgetArgument(s_11, 3);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(t_11);
          {
            ATerm g_12 = NULL;
            t = z_91(t);
            {
              e_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm i_12 = NULL;
                  t = a_92(t);
                  {
                    g_12 = t;
                    {
                      t = not_null(v_11);
                      {
                        ATerm k_12 = NULL;
                        t = b_92(t);
                        {
                          i_12 = t;
                          {
                            t = not_null(w_11);
                            {
                              ATerm m_12 = NULL;
                              t = c_92(t);
                              {
                                k_12 = t;
                                {
                                  ATerm n_12 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(e_12), not_null(g_12), not_null(i_12), not_null(k_12)), not_null(c_12));
                                  {
                                    n_12 = t;
                                    if(((m_12 != NULL) && (m_12 != n_12)))
                                      _fail(n_12);
                                    else
                                      m_12 = n_12;
                                  }
                                  t = not_null(m_12);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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
ATerm SDef_3 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_SDef_3))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      f_13 = ATgetArgument(c_13, 2);
      {
        ATerm k_13 = NULL,m_13 = NULL;
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(c_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
        {
          t = not_null(d_13);
          {
            ATerm o_13 = NULL;
            t = w_91(t);
            {
              m_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm q_13 = NULL;
                  t = x_91(t);
                  {
                    o_13 = t;
                    {
                      t = not_null(f_13);
                      {
                        ATerm s_13 = NULL;
                        t = y_91(t);
                        {
                          q_13 = t;
                          {
                            ATerm t_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(m_13), not_null(o_13), not_null(q_13)), not_null(k_13));
                            {
                              t_13 = t;
                              if(((s_13 != NULL) && (s_13 != t_13)))
                                _fail(t_13);
                              else
                                s_13 = t_13;
                            }
                            t = not_null(s_13);
                          }
                        }
                      }
                    }
                  }
                }
              }
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
ATerm Let_2 (ATerm t, ATerm h_89 (ATerm), ATerm i_89 (ATerm))
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_Let_2))
    {
      h_14 = ATgetArgument(g_14, 0);
      i_14 = ATgetArgument(g_14, 1);
      {
        ATerm m_14 = NULL,o_14 = NULL;
        ATerm n_14 = NULL;
        t = SSLgetAnnotations(not_null(g_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
        {
          t = not_null(h_14);
          {
            ATerm q_14 = NULL;
            t = h_89(t);
            {
              o_14 = t;
              {
                t = not_null(i_14);
                {
                  ATerm s_14 = NULL;
                  t = i_89(t);
                  {
                    q_14 = t;
                    {
                      ATerm t_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_14), not_null(q_14)), not_null(m_14));
                      {
                        t_14 = t;
                        if(((s_14 != NULL) && (s_14 != t_14)))
                          _fail(t_14);
                        else
                          s_14 = t_14;
                      }
                      t = not_null(s_14);
                    }
                  }
                }
              }
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
ATerm sboundin_3 (ATerm t, ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm))
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, h_102, h_102);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, j_102, j_102, h_102);
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = j_8;
            {
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4(t, j_102, j_102, j_102, h_102);
                  ;
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  t = Rec_2(t, j_102, h_102);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_RDefT_4))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      e_15 = ATgetArgument(b_15, 2);
      f_15 = ATgetArgument(b_15, 3);
      {
        t = not_null(d_15);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind5_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_SDefT_4))
    {
      o_15 = ATgetArgument(n_15, 0);
      p_15 = ATgetArgument(n_15, 1);
      q_15 = ATgetArgument(n_15, 2);
      r_15 = ATgetArgument(n_15, 3);
      {
        t = not_null(p_15);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Rec_2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      t = (ATerm) ATinsert(ATempty, not_null(a_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declared_vars_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
    j_16 = t;
    h_16 :
    if(match_cons(j_16, sym_VarDec_2))
      {
        k_16 = ATgetArgument(j_16, 0);
        i_16 = ATgetArgument(j_16, 1);
        t = not_null(k_16);
      }
    else
      {
        if(match_cons(j_16, sym_DefaultVarDec_1))
          {
            k_16 = ATgetArgument(j_16, 0);
            t = not_null(k_16);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = map_1(t, o_0);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym_SDef_3))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      u_16 = ATgetArgument(r_16, 2);
      {
        t = not_null(t_16);
        t = declared_vars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_Let_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      {
        t = not_null(f_17);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
            j_17 = t;
            c_17 :
            if(match_cons(j_17, sym_SDef_3))
              {
                k_17 = ATgetArgument(j_17, 0);
                l_17 = ATgetArgument(j_17, 1);
                m_17 = ATgetArgument(j_17, 2);
                t = not_null(k_17);
              }
            else
              {
                if(match_cons(j_17, sym_SDefT_4))
                  {
                    k_17 = ATgetArgument(j_17, 0);
                    l_17 = ATgetArgument(j_17, 1);
                    m_17 = ATgetArgument(j_17, 2);
                    n_17 = ATgetArgument(j_17, 3);
                    t = not_null(k_17);
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, r_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm z_17 = NULL;
  x_17 = t;
  {
    ATerm a_18 = NULL;
    ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
    t = not_null(x_17);
    {
      a_18 = t;
      {
        t = SSL_explode_term(not_null(a_18));
        {
          c_18 = t;
          w_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              if(((z_17 != NULL) && (z_17 != e_18)))
                _fail(e_18);
              else
                z_17 = e_18;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_17);
      t = foldr_3(t, y_114, z_114, a_115);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_111 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_111(t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_18 = NULL;
          ATerm d_9;
          d_9 = t;
          {
            ATerm k_18 = NULL;
            t = l_111(t);
            {
              k_18 = t;
              if(((j_18 != NULL) && (j_18 != k_18)))
                _fail(k_18);
              else
                j_18 = k_18;
            }
          }
          t = d_9;
          {
            ATerm u_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(j_18);
                return(t);
              }
              t = split_2(t, l_18, w_0);
              t = diff_1(t, n_111);
              return(t);
            }
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = m_111(t, u_0, l_18, v_0);
            {
              ATerm x_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, x_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, y_0, union_0, l_18);
          }
        }
      return(t);
    }
    t = split_2(t, s_0, t_0);
    t = union_0(t);
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
    v_18 = t;
    q_18 :
    if(match_cons(v_18, sym_CallT_3))
      {
        w_18 = ATgetArgument(v_18, 0);
        y_18 = ATgetArgument(v_18, 1);
        z_18 = ATgetArgument(v_18, 2);
        r_18 :
        if(match_cons(w_18, sym_SVar_1))
          {
            x_18 = ATgetArgument(w_18, 0);
            {
              ATerm d_19 = NULL,f_19 = NULL;
              ATerm q_9;
              q_9 = t;
              {
                ATerm e_19 = NULL;
                t = not_null(y_18);
                {
                  t = length_0(t);
                  {
                    e_19 = t;
                    if(((d_19 != NULL) && (d_19 != e_19)))
                      _fail(e_19);
                    else
                      d_19 = e_19;
                  }
                }
              }
              t = q_9;
              {
                ATerm g_19 = NULL;
                t = not_null(z_18);
                {
                  t = length_0(t);
                  {
                    g_19 = t;
                    if(((f_19 != NULL) && (f_19 != g_19)))
                      _fail(g_19);
                    else
                      f_19 = g_19;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(x_18), (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19))));
              }
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
  ATerm a_1 (ATerm t)
  {
    ATerm z_9 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = z_9;
        {
          ATerm i_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = i_10;
              {
                ATerm k_10 = t;
                int l_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind3_0(t);
                    ;
                    LocalPopChoice(l_10);
                  }
                else
                  {
                    t = k_10;
                    {
                      ATerm m_10 = t;
                      int n_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0(t);
                          ;
                          LocalPopChoice(n_10);
                        }
                      else
                        {
                          t = m_10;
                          t = Bind7_0(t);
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
    h_19 = t;
    t_18 :
    if(match_cons(h_19, sym__2))
      {
        i_19 = ATgetArgument(h_19, 0);
        l_19 = ATgetArgument(h_19, 1);
        u_18 :
        if(match_cons(i_19, sym__2))
          {
            j_19 = ATgetArgument(i_19, 0);
            k_19 = ATgetArgument(i_19, 1);
            if(((j_19 != NULL) && (j_19 != l_19)))
              _fail(l_19);
            else
              j_19 = l_19;
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
  t = free_vars2_4(t, z_0, a_1, sboundin_3, b_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  {
    ATerm d_20 = NULL;
    ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
    t = not_null(y_19);
    {
      d_20 = t;
      {
        t = SSL_explode_term(not_null(d_20));
        {
          f_20 = t;
          u_19 :
          if(match_cons(f_20, sym__2))
            {
              g_20 = ATgetArgument(f_20, 0);
              h_20 = ATgetArgument(f_20, 1);
              v_19 :
              if(match_string(g_20, ""))
                {
                  w_19 :
                  if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
                    {
                      i_20 = ATgetFirst((ATermList) h_20);
                      j_20 = (ATerm) ATgetNext((ATermList) h_20);
                      x_19 :
                      if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
                        {
                          k_20 = ATgetFirst((ATermList) j_20);
                          l_20 = (ATerm) ATgetNext((ATermList) j_20);
                          {
                            if(((a_20 != NULL) && (a_20 != i_20)))
                              _fail(i_20);
                            else
                              a_20 = i_20;
                            {
                              if(((c_20 != NULL) && (c_20 != k_20)))
                                _fail(k_20);
                              else
                                c_20 = k_20;
                              if(((b_20 != NULL) && (b_20 != l_20)))
                                _fail(l_20);
                              else
                                b_20 = l_20;
                            }
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
        }
      }
    }
    t = not_null(c_20);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_20 = NULL,t_20 = NULL;
    ATerm p_10;
    p_10 = t;
    {
      ATerm s_20 = NULL;
      t = Fst_0(t);
      {
        s_20 = t;
        if(((r_20 != NULL) && (r_20 != s_20)))
          _fail(s_20);
        else
          r_20 = s_20;
      }
    }
    t = p_10;
    {
      ATerm u_20 = NULL;
      t = Snd_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_20), not_null(t_20));
    }
    return(t);
  }
  t = foldr_2(t, c_1, d_1);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym_Var_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      t = not_null(a_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  m_21 = t;
  f_21 :
  if(match_cons(m_21, sym_CallT_3))
    {
      n_21 = ATgetArgument(m_21, 0);
      p_21 = ATgetArgument(m_21, 1);
      l_21 = ATgetArgument(m_21, 2);
      g_21 :
      if(match_cons(n_21, sym_SVar_1))
        {
          o_21 = ATgetArgument(n_21, 0);
          h_21 :
          if(((ATgetType(p_21) == AT_LIST) && ATisEmpty(p_21)))
            {
              i_21 :
              if(((ATgetType(l_21) == AT_LIST) && ATisEmpty(l_21)))
                {
                  t = not_null(o_21);
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
      if(match_cons(m_21, sym_Call_2))
        {
          n_21 = ATgetArgument(m_21, 0);
          p_21 = ATgetArgument(m_21, 1);
          j_21 :
          if(match_cons(n_21, sym_SVar_1))
            {
              o_21 = ATgetArgument(n_21, 0);
              k_21 :
              if(((ATgetType(p_21) == AT_LIST) && ATisEmpty(p_21)))
                {
                  t = not_null(o_21);
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
ATerm Look2_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  v_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      w_21 :
      if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
        {
          a_22 = ATgetFirst((ATermList) z_21);
          b_22 = (ATerm) ATgetNext((ATermList) z_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_21), not_null(b_22));
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
ATerm Look1_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  j_22 = t;
  g_22 :
  if(match_cons(j_22, sym__2))
    {
      k_22 = ATgetArgument(j_22, 0);
      l_22 = ATgetArgument(j_22, 1);
      h_22 :
      if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
        {
          m_22 = ATgetFirst((ATermList) l_22);
          p_22 = (ATerm) ATgetNext((ATermList) l_22);
          i_22 :
          if(match_cons(m_22, sym__2))
            {
              n_22 = ATgetArgument(m_22, 0);
              o_22 = ATgetArgument(m_22, 1);
              {
                ATerm r_22 = NULL;
                if(((k_22 != NULL) && (k_22 != n_22)))
                  _fail(n_22);
                else
                  k_22 = n_22;
                {
                  if(((r_22 != NULL) && (r_22 != o_22)))
                    _fail(o_22);
                  else
                    r_22 = o_22;
                  t = not_null(r_22);
                }
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
ATerm lookup_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm a_103 (ATerm), ATerm b_103 (ATerm))
{
  ATerm x_22 = NULL;
  ATerm z_22 = NULL,a_23 = NULL;
  x_22 = t;
  {
    ATerm b_23 = NULL;
    t = not_null(x_22);
    {
      ATerm c_23 = NULL;
      t = a_103(t);
      {
        b_23 = t;
        {
          if(((z_22 != NULL) && (z_22 != b_23)))
            _fail(b_23);
          else
            z_22 = b_23;
          {
            t = b_103(t);
            {
              c_23 = t;
              if(((a_23 != NULL) && (a_23 != c_23)))
                _fail(c_23);
              else
                a_23 = c_23;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), not_null(a_23));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm u_104 (ATerm))
{
  ATerm g_23 (ATerm t)
  {
    ATerm w_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = w_10;
        t = _all(t, g_23);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm q_23 = NULL;
        if(((q_23 != NULL) && (q_23 != n_23)))
          _fail(n_23);
        else
          q_23 = n_23;
      }
    }
  else
    {
      if(match_cons(l_23, sym__3))
        {
          m_23 = ATgetArgument(l_23, 0);
          n_23 = ATgetArgument(l_23, 1);
          o_23 = ATgetArgument(l_23, 2);
          {
            ATerm w_23 = NULL;
            ATerm x_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(n_23));
            {
              t = zip_1(t, _id);
              {
                x_23 = t;
                if(((w_23 != NULL) && (w_23 != x_23)))
                  _fail(x_23);
                else
                  w_23 = x_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(o_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  t = subs_args_0(t);
  {
    d_24 = t;
    c_24 :
    if(match_cons(d_24, sym__2))
      {
        e_24 = ATgetArgument(d_24, 0);
        f_24 = ATgetArgument(d_24, 1);
        {
          t = not_null(f_24);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = not_null(e_24);
                return(t);
              }
              t = SubsVar_2(t, l_102, f_1);
              t = m_102(t);
              return(t);
            }
            t = alltd_1(t, e_1);
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm n_102 (ATerm))
{
  t = substitute_2(t, n_102, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_VarDec_2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      {
        ATerm v_24 = NULL,x_24 = NULL;
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm z_24 = NULL;
            t = s_91(t);
            {
              x_24 = t;
              {
                t = not_null(r_24);
                {
                  ATerm b_25 = NULL;
                  t = t_91(t);
                  {
                    z_24 = t;
                    {
                      ATerm c_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_24), not_null(z_24)), not_null(v_24));
                      {
                        c_25 = t;
                        if(((b_25 != NULL) && (b_25 != c_25)))
                          _fail(c_25);
                        else
                          b_25 = c_25;
                      }
                      t = not_null(b_25);
                    }
                  }
                }
              }
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  e_26 = t;
  c_26 :
  if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
    {
      f_26 = ATgetFirst((ATermList) e_26);
      k_26 = (ATerm) ATgetNext((ATermList) e_26);
      d_26 :
      if(match_cons(f_26, sym_SDefT_4))
        {
          g_26 = ATgetArgument(f_26, 0);
          h_26 = ATgetArgument(f_26, 1);
          i_26 = ATgetArgument(f_26, 2);
          j_26 = ATgetArgument(f_26, 3);
          {
            ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,g_28 = NULL;
            ATerm c_11;
            c_11 = t;
            {
              ATerm v_26 = NULL;
              t = not_null(h_26);
              {
                ATerm w_26 = NULL;
                ATerm g_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, g_1);
                {
                  v_26 = t;
                  {
                    if(((q_26 != NULL) && (q_26 != v_26)))
                      _fail(v_26);
                    else
                      q_26 = v_26;
                    {
                      t = not_null(i_26);
                      {
                        ATerm c_27 = NULL;
                        ATerm h_1 (ATerm t)
                        {
                          t = VarDec_2(t, new_0, _id);
                          return(t);
                        }
                        t = map_1(t, h_1);
                        {
                          w_26 = t;
                          {
                            if(((r_26 != NULL) && (r_26 != w_26)))
                              _fail(w_26);
                            else
                              r_26 = w_26;
                            {
                              t = not_null(q_26);
                              {
                                ATerm i_27 = NULL;
                                ATerm i_1 (ATerm t)
                                {
                                  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
                                  x_26 = t;
                                  m_25 :
                                  if(match_cons(x_26, sym_VarDec_2))
                                    {
                                      y_26 = ATgetArgument(x_26, 0);
                                      z_26 = ATgetArgument(x_26, 1);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_26)), (ATerm)ATempty, (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, i_1);
                                {
                                  c_27 = t;
                                  {
                                    if(((s_26 != NULL) && (s_26 != c_27)))
                                      _fail(c_27);
                                    else
                                      s_26 = c_27;
                                    {
                                      t = not_null(r_26);
                                      {
                                        ATerm f_28 = NULL;
                                        ATerm j_1 (ATerm t)
                                        {
                                          ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                                          d_27 = t;
                                          p_25 :
                                          if(match_cons(d_27, sym_VarDec_2))
                                            {
                                              e_27 = ATgetArgument(d_27, 0);
                                              f_27 = ATgetArgument(d_27, 1);
                                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_27));
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                          return(t);
                                        }
                                        t = map_1(t, j_1);
                                        {
                                          i_27 = t;
                                          {
                                            if(((t_26 != NULL) && (t_26 != i_27)))
                                              _fail(i_27);
                                            else
                                              t_26 = i_27;
                                            {
                                              t = not_null(e_26);
                                              {
                                                ATerm k_1 (ATerm t)
                                                {
                                                  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
                                                  j_27 = t;
                                                  z_25 :
                                                  if(match_cons(j_27, sym_SDefT_4))
                                                    {
                                                      k_27 = ATgetArgument(j_27, 0);
                                                      l_27 = ATgetArgument(j_27, 1);
                                                      m_27 = ATgetArgument(j_27, 2);
                                                      n_27 = ATgetArgument(j_27, 3);
                                                      {
                                                        ATerm r_27 = NULL,x_27 = NULL;
                                                        ATerm f_11;
                                                        f_11 = t;
                                                        {
                                                          ATerm w_27 = NULL;
                                                          t = not_null(m_27);
                                                          {
                                                            ATerm l_1 (ATerm t)
                                                            {
                                                              ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
                                                              s_27 = t;
                                                              t_25 :
                                                              if(match_cons(s_27, sym_VarDec_2))
                                                                {
                                                                  t_27 = ATgetArgument(s_27, 0);
                                                                  u_27 = ATgetArgument(s_27, 1);
                                                                  t = not_null(t_27);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, l_1);
                                                            {
                                                              w_27 = t;
                                                              if(((r_27 != NULL) && (r_27 != w_27)))
                                                                _fail(w_27);
                                                              else
                                                                r_27 = w_27;
                                                            }
                                                          }
                                                        }
                                                        t = f_11;
                                                        {
                                                          ATerm y_27 = NULL,e_28 = NULL;
                                                          ATerm d_28 = NULL;
                                                          t = not_null(l_27);
                                                          {
                                                            ATerm m_1 (ATerm t)
                                                            {
                                                              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                                                              z_27 = t;
                                                              w_25 :
                                                              if(match_cons(z_27, sym_VarDec_2))
                                                                {
                                                                  a_28 = ATgetArgument(z_27, 0);
                                                                  b_28 = ATgetArgument(z_27, 1);
                                                                  t = not_null(a_28);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            t = map_1(t, m_1);
                                                            {
                                                              d_28 = t;
                                                              if(((y_27 != NULL) && (y_27 != d_28)))
                                                                _fail(d_28);
                                                              else
                                                                y_27 = d_28;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(y_27), not_null(s_26), not_null(n_27));
                                                            {
                                                              t = ssubs_0(t);
                                                              {
                                                                e_28 = t;
                                                                if(((x_27 != NULL) && (x_27 != e_28)))
                                                                  _fail(e_28);
                                                                else
                                                                  x_27 = e_28;
                                                              }
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(r_27), not_null(t_26), not_null(x_27));
                                                            t = tsubs_0(t);
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
                                                t = map_1(t, k_1);
                                                {
                                                  f_28 = t;
                                                  if(((u_26 != NULL) && (u_26 != f_28)))
                                                    _fail(f_28);
                                                  else
                                                    u_26 = f_28;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = c_11;
            {
              ATerm h_28 = NULL;
              t = not_null(u_26);
              {
                t = choices_0(t);
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_26), not_null(q_26), not_null(r_26), not_null(g_28));
            }
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  y_28 :
  if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
    {
      b_29 = ATgetFirst((ATermList) a_29);
      c_29 = (ATerm) ATgetNext((ATermList) a_29);
      z_28 :
      if(((ATgetType(c_29) == AT_LIST) && ATisEmpty(c_29)))
        {
          t = not_null(b_29);
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
ATerm joindefs_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  j_29 = t;
  h_29 :
  if(match_cons(j_29, sym__2))
    {
      k_29 = ATgetArgument(j_29, 0);
      n_29 = ATgetArgument(j_29, 1);
      i_29 :
      if(match_cons(k_29, sym__2))
        {
          l_29 = ATgetArgument(k_29, 0);
          m_29 = ATgetArgument(k_29, 1);
          {
            ATerm r_29 = NULL;
            ATerm s_29 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(m_29));
            {
              t = Definitions_0(t);
              {
                s_29 = t;
                if(((r_29 != NULL) && (r_29 != s_29)))
                  _fail(s_29);
                else
                  r_29 = s_29;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(n_29));
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
ATerm Expl_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  n_30 = t;
  l_30 :
  if(match_cons(n_30, sym_ExplodeCong_2))
    {
      o_30 = ATgetArgument(n_30, 0);
      m_30 = ATgetArgument(n_30, 1);
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
        ATerm v_30 = NULL;
        ATerm w_30 = NULL;
        t = new_0(t);
        {
          v_30 = t;
          {
            if(((r_30 != NULL) && (r_30 != v_30)))
              _fail(v_30);
            else
              r_30 = v_30;
            {
              ATerm x_30 = NULL;
              t = new_0(t);
              {
                w_30 = t;
                {
                  if(((s_30 != NULL) && (s_30 != w_30)))
                    _fail(w_30);
                  else
                    s_30 = w_30;
                  {
                    ATerm y_30 = NULL;
                    t = new_0(t);
                    {
                      x_30 = t;
                      {
                        if(((t_30 != NULL) && (t_30 != x_30)))
                          _fail(x_30);
                        else
                          t_30 = x_30;
                        {
                          t = new_0(t);
                          {
                            y_30 = t;
                            if(((u_30 != NULL) && (u_30 != y_30)))
                              _fail(y_30);
                            else
                              u_30 = y_30;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_30)), not_null(t_30)), not_null(s_30)), not_null(r_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(o_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30)))))));
      }
    }
  else
    {
      if(match_cons(n_30, sym_Build_1))
        {
          o_30 = ATgetArgument(n_30, 0);
          {
            ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
            ATerm e_31 = NULL;
            ATerm i_31 = NULL;
            t = new_0(t);
            {
              e_31 = t;
              {
                if(((c_31 != NULL) && (c_31 != e_31)))
                  _fail(e_31);
                else
                  c_31 = e_31;
                {
                  t = not_null(o_30);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
                      f_31 = t;
                      e_30 :
                      if(match_cons(f_31, sym_Explode_2))
                        {
                          g_31 = ATgetArgument(f_31, 0);
                          h_31 = ATgetArgument(f_31, 1);
                          {
                            if(((a_31 != NULL) && (a_31 != g_31)))
                              _fail(g_31);
                            else
                              a_31 = g_31;
                            {
                              if(((b_31 != NULL) && (b_31 != h_31)))
                                _fail(h_31);
                              else
                                b_31 = h_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, n_1);
                    {
                      i_31 = t;
                      if(((d_31 != NULL) && (d_31 != i_31)))
                        _fail(i_31);
                      else
                        d_31 = i_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_31)))));
          }
        }
      else
        {
          if(match_cons(n_30, sym_Match_1))
            {
              o_30 = ATgetArgument(n_30, 0);
              {
                ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
                ATerm p_31 = NULL;
                ATerm q_31 = NULL;
                t = new_0(t);
                {
                  p_31 = t;
                  {
                    if(((m_31 != NULL) && (m_31 != p_31)))
                      _fail(p_31);
                    else
                      m_31 = p_31;
                    {
                      ATerm u_31 = NULL;
                      t = new_0(t);
                      {
                        q_31 = t;
                        {
                          if(((n_31 != NULL) && (n_31 != q_31)))
                            _fail(q_31);
                          else
                            n_31 = q_31;
                          {
                            t = not_null(o_30);
                            {
                              ATerm o_1 (ATerm t)
                              {
                                ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
                                r_31 = t;
                                j_30 :
                                if(match_cons(r_31, sym_Explode_2))
                                  {
                                    s_31 = ATgetArgument(r_31, 0);
                                    t_31 = ATgetArgument(r_31, 1);
                                    {
                                      if(((k_31 != NULL) && (k_31 != s_31)))
                                        _fail(s_31);
                                      else
                                        k_31 = s_31;
                                      {
                                        if(((l_31 != NULL) && (l_31 != t_31)))
                                          _fail(t_31);
                                        else
                                          l_31 = t_31;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_31));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, o_1);
                              {
                                u_31 = t;
                                if(((o_31 != NULL) && (o_31 != u_31)))
                                  _fail(u_31);
                                else
                                  o_31 = u_31;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_31)), (ATerm) ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), not_null(k_31)))))));
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Match_1))
    {
      a_33 = ATgetArgument(z_32, 0);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
            ATerm g_33 = NULL;
            ATerm q_36 = NULL;
            t = new_0(t);
            {
              g_33 = t;
              {
                if(((e_33 != NULL) && (e_33 != g_33)))
                  _fail(g_33);
                else
                  e_33 = g_33;
                {
                  t = not_null(a_33);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
                      n_36 = t;
                      o_32 :
                      if(match_cons(n_36, sym_Anno_2))
                        {
                          o_36 = ATgetArgument(n_36, 0);
                          p_36 = ATgetArgument(n_36, 1);
                          {
                            if(((c_33 != NULL) && (c_33 != o_36)))
                              _fail(o_36);
                            else
                              c_33 = o_36;
                            {
                              if(((d_33 != NULL) && (d_33 != p_36)))
                                _fail(p_36);
                              else
                                d_33 = p_36;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_33)), not_null(c_33));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, p_1);
                    {
                      q_36 = t;
                      if(((f_33 != NULL) && (f_33 != q_36)))
                        _fail(q_36);
                      else
                        f_33 = q_36;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_33)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_33))))));
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm o_11 = t;
              int p_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_36 = NULL,t_36 = NULL,e_38 = NULL;
                  ATerm f_38 = NULL;
                  ATerm i_38 = NULL;
                  t = new_0(t);
                  {
                    f_38 = t;
                    {
                      if(((t_36 != NULL) && (t_36 != f_38)))
                        _fail(f_38);
                      else
                        t_36 = f_38;
                      {
                        t = not_null(a_33);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm g_38 = NULL,h_38 = NULL;
                            g_38 = t;
                            s_32 :
                            if(match_cons(g_38, sym_RootApp_1))
                              {
                                h_38 = ATgetArgument(g_38, 0);
                                {
                                  if(((s_36 != NULL) && (s_36 != h_38)))
                                    _fail(h_38);
                                  else
                                    s_36 = h_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, q_1);
                          {
                            i_38 = t;
                            if(((e_38 != NULL) && (e_38 != i_38)))
                              _fail(i_38);
                            else
                              e_38 = i_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_36))), not_null(s_36))));
                  ;
                  LocalPopChoice(p_11);
                }
              else
                {
                  t = o_11;
                  {
                    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
                    ATerm o_38 = NULL;
                    ATerm s_38 = NULL;
                    t = new_0(t);
                    {
                      o_38 = t;
                      {
                        if(((m_38 != NULL) && (m_38 != o_38)))
                          _fail(o_38);
                        else
                          m_38 = o_38;
                        {
                          t = not_null(a_33);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                              p_38 = t;
                              w_32 :
                              if(match_cons(p_38, sym_App_2))
                                {
                                  q_38 = ATgetArgument(p_38, 0);
                                  r_38 = ATgetArgument(p_38, 1);
                                  {
                                    if(((l_38 != NULL) && (l_38 != q_38)))
                                      _fail(q_38);
                                    else
                                      l_38 = q_38;
                                    {
                                      if(((k_38 != NULL) && (k_38 != r_38)))
                                        _fail(r_38);
                                      else
                                        k_38 = r_38;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, r_1);
                            {
                              s_38 = t;
                              if(((n_38 != NULL) && (n_38 != s_38)))
                                _fail(s_38);
                              else
                                n_38 = s_38;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_38))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_38)), not_null(l_38)))));
                  }
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  a_44 = t;
  y_43 :
  if(match_cons(a_44, sym_Match_1))
    {
      b_44 = ATgetArgument(a_44, 0);
      z_43 :
      if(match_cons(b_44, sym_RootApp_1))
        {
          c_44 = ATgetArgument(b_44, 0);
          t = not_null(c_44);
        }
      else
        {
          if(match_cons(b_44, sym_App_2))
            {
              c_44 = ATgetArgument(b_44, 0);
              d_44 = ATgetArgument(b_44, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(c_44), not_null(d_44));
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
ATerm Mapp0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_Match_1))
    {
      q_44 = ATgetArgument(p_44, 0);
      {
        ATerm s_44 = NULL,t_44 = NULL;
        ATerm x_44 = NULL;
        t = not_null(q_44);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
            u_44 = t;
            l_44 :
            if(match_cons(u_44, sym_RootApp_1))
              {
                v_44 = ATgetArgument(u_44, 0);
                m_44 :
                if(match_cons(v_44, sym_Match_1))
                  {
                    w_44 = ATgetArgument(v_44, 0);
                    {
                      if(((s_44 != NULL) && (s_44 != w_44)))
                        _fail(w_44);
                      else
                        s_44 = w_44;
                      t = not_null(s_44);
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
          t = pat_td_1(t, s_1);
          {
            x_44 = t;
            if(((t_44 != NULL) && (t_44 != x_44)))
              _fail(x_44);
            else
              t_44 = x_44;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_44));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm q_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = q_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym_Build_1))
    {
      d_46 = ATgetArgument(c_46, 0);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
            ATerm j_46 = NULL;
            ATerm n_46 = NULL;
            t = new_0(t);
            {
              j_46 = t;
              {
                if(((h_46 != NULL) && (h_46 != j_46)))
                  _fail(j_46);
                else
                  h_46 = j_46;
                {
                  t = not_null(d_46);
                  {
                    ATerm t_1 (ATerm t)
                    {
                      ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
                      k_46 = t;
                      l_45 :
                      if(match_cons(k_46, sym_Anno_2))
                        {
                          l_46 = ATgetArgument(k_46, 0);
                          m_46 = ATgetArgument(k_46, 1);
                          {
                            if(((f_46 != NULL) && (f_46 != l_46)))
                              _fail(l_46);
                            else
                              f_46 = l_46;
                            {
                              if(((g_46 != NULL) && (g_46 != m_46)))
                                _fail(m_46);
                              else
                                g_46 = m_46;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, t_1);
                    {
                      n_46 = t;
                      if(((i_46 != NULL) && (i_46 != n_46)))
                        _fail(n_46);
                      else
                        i_46 = n_46;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_12, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_46)), not_null(f_46))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_46))));
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm h_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
                  ATerm s_46 = NULL;
                  ATerm v_46 = NULL;
                  t = new_0(t);
                  {
                    s_46 = t;
                    {
                      if(((q_46 != NULL) && (q_46 != s_46)))
                        _fail(s_46);
                      else
                        q_46 = s_46;
                      {
                        t = not_null(d_46);
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm t_46 = NULL,u_46 = NULL;
                            t_46 = t;
                            p_45 :
                            if(match_cons(t_46, sym_RootApp_1))
                              {
                                u_46 = ATgetArgument(t_46, 0);
                                {
                                  if(((p_46 != NULL) && (p_46 != u_46)))
                                    _fail(u_46);
                                  else
                                    p_46 = u_46;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, u_1);
                          {
                            v_46 = t;
                            if(((r_46 != NULL) && (r_46 != v_46)))
                              _fail(v_46);
                            else
                              r_46 = v_46;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_46))));
                  ;
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = h_12;
                  {
                    ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
                    ATerm b_47 = NULL;
                    ATerm f_47 = NULL;
                    t = new_0(t);
                    {
                      b_47 = t;
                      {
                        if(((z_46 != NULL) && (z_46 != b_47)))
                          _fail(b_47);
                        else
                          z_46 = b_47;
                        {
                          t = not_null(d_46);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
                              c_47 = t;
                              z_45 :
                              if(match_cons(c_47, sym_App_2))
                                {
                                  d_47 = ATgetArgument(c_47, 0);
                                  e_47 = ATgetArgument(c_47, 1);
                                  {
                                    if(((x_46 != NULL) && (x_46 != d_47)))
                                      _fail(d_47);
                                    else
                                      x_46 = d_47;
                                    {
                                      if(((y_46 != NULL) && (y_46 != e_47)))
                                        _fail(e_47);
                                      else
                                        y_46 = e_47;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_46));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, v_1);
                            {
                              f_47 = t;
                              if(((a_47 != NULL) && (a_47 != f_47)))
                                _fail(f_47);
                              else
                                a_47 = f_47;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_46)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_46), not_null(y_46), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_46)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_47))));
                  }
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  w_47 = t;
  u_47 :
  if(match_cons(w_47, sym_Build_1))
    {
      x_47 = ATgetArgument(w_47, 0);
      v_47 :
      if(match_cons(x_47, sym_RootApp_1))
        {
          y_47 = ATgetArgument(x_47, 0);
          t = not_null(y_47);
        }
      else
        {
          if(match_cons(x_47, sym_App_2))
            {
              y_47 = ATgetArgument(x_47, 0);
              z_47 = ATgetArgument(x_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_47)), not_null(y_47));
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
ATerm As_2 (ATerm t, ATerm o_86 (ATerm), ATerm p_86 (ATerm))
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym_As_2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      {
        ATerm v_48 = NULL,x_48 = NULL;
        ATerm w_48 = NULL;
        t = SSLgetAnnotations(not_null(p_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
        {
          t = not_null(q_48);
          {
            ATerm z_48 = NULL;
            t = o_86(t);
            {
              x_48 = t;
              {
                t = not_null(r_48);
                {
                  ATerm b_49 = NULL;
                  t = p_86(t);
                  {
                    z_48 = t;
                    {
                      ATerm c_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(x_48), not_null(z_48)), not_null(v_48));
                      {
                        c_49 = t;
                        if(((b_49 != NULL) && (b_49 != c_49)))
                          _fail(c_49);
                        else
                          b_49 = c_49;
                      }
                      t = not_null(b_49);
                    }
                  }
                }
              }
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
ATerm PrimT_3 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm e_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym_PrimT_3))
    {
      i_50 = ATgetArgument(e_50, 0);
      j_50 = ATgetArgument(e_50, 1);
      k_50 = ATgetArgument(e_50, 2);
      {
        ATerm a_51 = NULL,c_51 = NULL;
        ATerm b_51 = NULL;
        t = SSLgetAnnotations(not_null(e_50));
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
        {
          t = not_null(i_50);
          {
            ATerm e_51 = NULL;
            t = n_90(t);
            {
              c_51 = t;
              {
                t = not_null(j_50);
                {
                  ATerm g_51 = NULL;
                  t = o_90(t);
                  {
                    e_51 = t;
                    {
                      t = not_null(k_50);
                      {
                        ATerm i_51 = NULL;
                        t = p_90(t);
                        {
                          g_51 = t;
                          {
                            ATerm j_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(c_51), not_null(e_51), not_null(g_51)), not_null(a_51));
                            {
                              j_51 = t;
                              if(((i_51 != NULL) && (i_51 != j_51)))
                                _fail(j_51);
                              else
                                i_51 = j_51;
                            }
                            t = not_null(i_51);
                          }
                        }
                      }
                    }
                  }
                }
              }
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
ATerm Explode_2 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  c_52 :
  if(match_cons(d_52, sym_Explode_2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      {
        ATerm j_52 = NULL,l_52 = NULL;
        ATerm k_52 = NULL;
        t = SSLgetAnnotations(not_null(d_52));
        {
          k_52 = t;
          if(((j_52 != NULL) && (j_52 != k_52)))
            _fail(k_52);
          else
            j_52 = k_52;
        }
        {
          t = not_null(e_52);
          {
            ATerm n_52 = NULL;
            t = h_86(t);
            {
              l_52 = t;
              {
                t = not_null(f_52);
                {
                  ATerm p_52 = NULL;
                  t = i_86(t);
                  {
                    n_52 = t;
                    {
                      ATerm q_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_52), not_null(n_52)), not_null(j_52));
                      {
                        q_52 = t;
                        if(((p_52 != NULL) && (p_52 != q_52)))
                          _fail(q_52);
                        else
                          p_52 = q_52;
                      }
                      t = not_null(p_52);
                    }
                  }
                }
              }
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
ATerm Op_2 (ATerm t, ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Op_2))
    {
      d_53 = ATgetArgument(c_53, 0);
      e_53 = ATgetArgument(c_53, 1);
      {
        ATerm i_53 = NULL,k_53 = NULL;
        ATerm j_53 = NULL;
        t = SSLgetAnnotations(not_null(c_53));
        {
          j_53 = t;
          if(((i_53 != NULL) && (i_53 != j_53)))
            _fail(j_53);
          else
            i_53 = j_53;
        }
        {
          t = not_null(d_53);
          {
            ATerm m_53 = NULL;
            t = d_86(t);
            {
              k_53 = t;
              {
                t = not_null(e_53);
                {
                  ATerm o_53 = NULL;
                  t = e_86(t);
                  {
                    m_53 = t;
                    {
                      ATerm p_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(k_53), not_null(m_53)), not_null(i_53));
                      {
                        p_53 = t;
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                      }
                      t = not_null(o_53);
                    }
                  }
                }
              }
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
ATerm pat_td_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm l_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_98(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = l_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = pat_td_1(t, q_98);
                return(t);
              }
              t = fetch_1(t, x_1);
              return(t);
            }
            t = Op_2(t, _id, w_1);
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm r_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 (ATerm t)
                  {
                    t = pat_td_1(t, q_98);
                    return(t);
                  }
                  t = Explode_2(t, _id, y_1);
                  ;
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = r_12;
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          t = pat_td_1(t, q_98);
                          return(t);
                        }
                        t = Explode_2(t, z_1, _id);
                        ;
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        {
                          ATerm v_12 = t;
                          int w_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_2 (ATerm t)
                              {
                                ATerm b_2 (ATerm t)
                                {
                                  t = pat_td_1(t, q_98);
                                  return(t);
                                }
                                t = fetch_1(t, b_2);
                                return(t);
                              }
                              t = PrimT_3(t, _id, _id, a_2);
                              ;
                              LocalPopChoice(w_12);
                            }
                          else
                            {
                              t = v_12;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = pat_td_1(t, q_98);
                                  return(t);
                                }
                                t = As_2(t, _id, c_2);
                              }
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  s_54 = t;
  r_54 :
  if(match_cons(s_54, sym_Build_1))
    {
      t_54 = ATgetArgument(s_54, 0);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_54 = NULL,w_54 = NULL;
            ATerm a_55 = NULL;
            t = not_null(t_54);
            {
              ATerm d_2 (ATerm t)
              {
                ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
                x_54 = t;
                c_54 :
                if(match_cons(x_54, sym_RootApp_1))
                  {
                    y_54 = ATgetArgument(x_54, 0);
                    d_54 :
                    if(match_cons(y_54, sym_Build_1))
                      {
                        z_54 = ATgetArgument(y_54, 0);
                        {
                          if(((v_54 != NULL) && (v_54 != z_54)))
                            _fail(z_54);
                          else
                            v_54 = z_54;
                          t = not_null(v_54);
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
              t = pat_td_1(t, d_2);
              {
                a_55 = t;
                if(((w_54 != NULL) && (w_54 != a_55)))
                  _fail(a_55);
                else
                  w_54 = a_55;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_54));
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
              ATerm n_55 = NULL;
              t = not_null(t_54);
              {
                ATerm e_2 (ATerm t)
                {
                  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,m_55 = NULL;
                  f_55 = t;
                  o_54 :
                  if(match_cons(f_55, sym_App_2))
                    {
                      g_55 = ATgetArgument(f_55, 0);
                      m_55 = ATgetArgument(f_55, 1);
                      p_54 :
                      if(match_cons(g_55, sym_Build_1))
                        {
                          h_55 = ATgetArgument(g_55, 0);
                          {
                            if(((d_55 != NULL) && (d_55 != h_55)))
                              _fail(h_55);
                            else
                              d_55 = h_55;
                            {
                              if(((c_55 != NULL) && (c_55 != m_55)))
                                _fail(m_55);
                              else
                                c_55 = m_55;
                              t = not_null(d_55);
                            }
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
                t = pat_td_1(t, e_2);
                {
                  n_55 = t;
                  if(((e_55 != NULL) && (e_55 != n_55)))
                    _fail(n_55);
                  else
                    e_55 = n_55;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_55));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm MkConstType_0 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym_DefaultVarDec_1))
    {
      x_55 = ATgetArgument(w_55, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_55), term_n_13);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkFunType_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym_DefaultVarDec_1))
    {
      d_56 = ATgetArgument(c_56, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_56), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_13), term_n_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map1_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm p_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2(t, q_0, _id);
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = map1_1(t, q_0);
            return(t);
          }
          t = try_1(t, g_2);
          return(t);
        }
        t = Cons_2(t, _id, f_2);
      }
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = p_13;
      {
        ATerm h_2 (ATerm t)
        {
          t = map1_1(t, q_0);
          return(t);
        }
        t = Cons_2(t, _id, h_2);
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  b_57 :
  if(match_cons(k_57, sym_Lets_2))
    {
      l_57 = ATgetArgument(k_57, 0);
      m_57 = ATgetArgument(k_57, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_57), not_null(m_57));
    }
  else
    {
      if(match_cons(k_57, sym_LChoices_1))
        {
          l_57 = ATgetArgument(k_57, 0);
          c_57 :
          if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
            {
              f_57 = ATgetFirst((ATermList) l_57);
              g_57 = (ATerm) ATgetNext((ATermList) l_57);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_57), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_57)));
            }
          else
            {
              if(((ATgetType(l_57) == AT_LIST) && ATisEmpty(l_57)))
                {
                  t = term_o_10;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(k_57, sym_Choices_1))
            {
              l_57 = ATgetArgument(k_57, 0);
              d_57 :
              if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
                {
                  f_57 = ATgetFirst((ATermList) l_57);
                  g_57 = (ATerm) ATgetNext((ATermList) l_57);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_57)));
                }
              else
                {
                  if(((ATgetType(l_57) == AT_LIST) && ATisEmpty(l_57)))
                    {
                      t = term_o_10;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(k_57, sym_Seqs_1))
                {
                  l_57 = ATgetArgument(k_57, 0);
                  e_57 :
                  if(((ATgetType(l_57) == AT_LIST) && !(ATisEmpty(l_57))))
                    {
                      f_57 = ATgetFirst((ATermList) l_57);
                      g_57 = (ATerm) ATgetNext((ATermList) l_57);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_57)));
                    }
                  else
                    {
                      if(((ATgetType(l_57) == AT_LIST) && ATisEmpty(l_57)))
                        {
                          t = term_u_13;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(k_57, sym_RDefT_4))
                    {
                      l_57 = ATgetArgument(k_57, 0);
                      m_57 = ATgetArgument(k_57, 1);
                      j_57 = ATgetArgument(k_57, 2);
                      i_57 = ATgetArgument(k_57, 3);
                      {
                        ATerm z_57 = NULL,a_58 = NULL;
                        ATerm b_58 = NULL;
                        t = not_null(m_57);
                        {
                          ATerm c_58 = NULL;
                          t = map1_1(t, MkFunType_0);
                          {
                            b_58 = t;
                            {
                              if(((z_57 != NULL) && (z_57 != b_58)))
                                _fail(b_58);
                              else
                                z_57 = b_58;
                              {
                                t = not_null(j_57);
                                {
                                  ATerm i_2 (ATerm t)
                                  {
                                    t = try_1(t, MkConstType_0);
                                    return(t);
                                  }
                                  t = map1_1(t, i_2);
                                  {
                                    c_58 = t;
                                    if(((a_58 != NULL) && (a_58 != c_58)))
                                      _fail(c_58);
                                    else
                                      a_58 = c_58;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(l_57), not_null(z_57), not_null(a_58), not_null(i_57));
                      }
                    }
                  else
                    {
                      if(match_cons(k_57, sym_SDefT_4))
                        {
                          l_57 = ATgetArgument(k_57, 0);
                          m_57 = ATgetArgument(k_57, 1);
                          j_57 = ATgetArgument(k_57, 2);
                          i_57 = ATgetArgument(k_57, 3);
                          {
                            ATerm v_13 = t;
                            int w_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_58 = NULL,i_58 = NULL;
                                ATerm j_58 = NULL;
                                t = not_null(j_57);
                                {
                                  ATerm k_58 = NULL;
                                  t = map1_1(t, MkConstType_0);
                                  {
                                    j_58 = t;
                                    {
                                      if(((h_58 != NULL) && (h_58 != j_58)))
                                        _fail(j_58);
                                      else
                                        h_58 = j_58;
                                      {
                                        t = not_null(m_57);
                                        {
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = try_1(t, MkFunType_0);
                                            return(t);
                                          }
                                          t = map_1(t, j_2);
                                          {
                                            k_58 = t;
                                            if(((i_58 != NULL) && (i_58 != k_58)))
                                              _fail(k_58);
                                            else
                                              i_58 = k_58;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_57), not_null(i_58), not_null(h_58), not_null(i_57));
                                ;
                                LocalPopChoice(w_13);
                              }
                            else
                              {
                                t = v_13;
                                {
                                  ATerm p_58 = NULL,q_58 = NULL;
                                  ATerm r_58 = NULL;
                                  t = not_null(m_57);
                                  {
                                    ATerm s_58 = NULL;
                                    t = map1_1(t, MkFunType_0);
                                    {
                                      r_58 = t;
                                      {
                                        if(((p_58 != NULL) && (p_58 != r_58)))
                                          _fail(r_58);
                                        else
                                          p_58 = r_58;
                                        {
                                          t = not_null(j_57);
                                          {
                                            ATerm k_2 (ATerm t)
                                            {
                                              t = try_1(t, MkConstType_0);
                                              return(t);
                                            }
                                            t = map_1(t, k_2);
                                            {
                                              s_58 = t;
                                              if(((q_58 != NULL) && (q_58 != s_58)))
                                                _fail(s_58);
                                              else
                                                q_58 = s_58;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_57), not_null(p_58), not_null(q_58), not_null(i_57));
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(k_57, sym_InfixApp_3))
                            {
                              l_57 = ATgetArgument(k_57, 0);
                              m_57 = ATgetArgument(k_57, 1);
                              j_57 = ATgetArgument(k_57, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_57), (ATerm) ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_57)), not_null(l_57))));
                            }
                          else
                            {
                              if(match_cons(k_57, sym_BAM_3))
                                {
                                  l_57 = ATgetArgument(k_57, 0);
                                  m_57 = ATgetArgument(k_57, 1);
                                  j_57 = ATgetArgument(k_57, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_57))), not_null(l_57)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_57))));
                                }
                              else
                                {
                                  if(match_cons(k_57, sym_AM_2))
                                    {
                                      l_57 = ATgetArgument(k_57, 0);
                                      m_57 = ATgetArgument(k_57, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_57), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_57)));
                                    }
                                  else
                                    {
                                      if(match_cons(k_57, sym_MA_2))
                                        {
                                          l_57 = ATgetArgument(k_57, 0);
                                          m_57 = ATgetArgument(k_57, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_57)), not_null(m_57));
                                        }
                                      else
                                        {
                                          if(match_cons(k_57, sym_BA_2))
                                            {
                                              l_57 = ATgetArgument(k_57, 0);
                                              m_57 = ATgetArgument(k_57, 1);
                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_57)), not_null(l_57));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  e_60 = t;
  b_60 :
  if(match_cons(e_60, sym__2))
    {
      f_60 = ATgetArgument(e_60, 0);
      i_60 = ATgetArgument(e_60, 1);
      c_60 :
      if(match_cons(f_60, sym__2))
        {
          g_60 = ATgetArgument(f_60, 0);
          h_60 = ATgetArgument(f_60, 1);
          d_60 :
          if(match_cons(i_60, sym__2))
            {
              j_60 = ATgetArgument(i_60, 0);
              k_60 = ATgetArgument(i_60, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_60)), not_null(g_60)), (ATerm) ATinsert(CheckATermList(not_null(k_60)), not_null(h_60)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  s_60 = t;
  r_60 :
  if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
    {
      t_60 = ATgetFirst((ATermList) s_60);
      u_60 = (ATerm) ATgetNext((ATermList) s_60);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_60), not_null(u_60));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  z_60 :
  if(((ATgetType(a_61) == AT_LIST) && ATisEmpty(a_61)))
    {
      t = term_x_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_107 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_107);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  ATerm m_61 (ATerm t)
  {
    ATerm j_61 = NULL;
    ATerm k_61 = NULL;
    t = not_null(g_61);
    {
      ATerm y_13 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_13;
        }
      {
        t = new_0(t);
        {
          k_61 = t;
          if(((j_61 != NULL) && (j_61 != k_61)))
            _fail(k_61);
          else
            j_61 = k_61;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(j_61)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_61)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61))));
    return(t);
  }
  ATerm n_61 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_61))));
    return(t);
  }
  g_61 = t;
  f_61 :
  if(match_cons(g_61, sym_Var_1))
    {
      h_61 = ATgetArgument(g_61, 0);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_61(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
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
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm o_62 = NULL,p_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_Var_1))
    {
      p_62 = ATgetArgument(o_62, 0);
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_62 = NULL,u_62 = NULL;
            ATerm t_62 = NULL;
            t = SSLgetAnnotations(not_null(o_62));
            {
              t_62 = t;
              if(((s_62 != NULL) && (s_62 != t_62)))
                _fail(t_62);
              else
                s_62 = t_62;
            }
            {
              t = not_null(p_62);
              {
                ATerm w_62 = NULL;
                t = p_0(t);
                {
                  u_62 = t;
                  {
                    ATerm x_62 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_62)), not_null(s_62));
                    {
                      x_62 = t;
                      if(((w_62 != NULL) && (w_62 != x_62)))
                        _fail(x_62);
                      else
                        w_62 = x_62;
                    }
                    t = not_null(w_62);
                  }
                }
              }
            }
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_63 = NULL,c_63 = NULL;
                  ATerm b_63 = NULL;
                  t = SSLgetAnnotations(not_null(o_62));
                  {
                    b_63 = t;
                    if(((a_63 != NULL) && (a_63 != b_63)))
                      _fail(b_63);
                    else
                      a_63 = b_63;
                  }
                  {
                    t = not_null(p_62);
                    {
                      ATerm i_63 = NULL;
                      t = p_0(t);
                      {
                        c_63 = t;
                        {
                          ATerm j_63 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_63)), not_null(a_63));
                          {
                            j_63 = t;
                            if(((i_63 != NULL) && (i_63 != j_63)))
                              _fail(j_63);
                            else
                              i_63 = j_63;
                          }
                          t = not_null(i_63);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  {
                    ATerm m_63 = NULL,o_63 = NULL;
                    ATerm n_63 = NULL;
                    t = SSLgetAnnotations(not_null(o_62));
                    {
                      n_63 = t;
                      if(((m_63 != NULL) && (m_63 != n_63)))
                        _fail(n_63);
                      else
                        m_63 = n_63;
                    }
                    {
                      t = not_null(p_62);
                      {
                        ATerm q_63 = NULL;
                        t = p_0(t);
                        {
                          o_63 = t;
                          {
                            ATerm r_63 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_63)), not_null(m_63));
                            {
                              r_63 = t;
                              if(((q_63 != NULL) && (q_63 != r_63)))
                                _fail(r_63);
                              else
                                q_63 = r_63;
                            }
                            t = not_null(q_63);
                          }
                        }
                      }
                    }
                  }
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  t_64 :
  if(match_cons(v_64, sym_PrimT_3))
    {
      w_64 = ATgetArgument(v_64, 0);
      x_64 = ATgetArgument(v_64, 1);
      u_64 = ATgetArgument(v_64, 2);
      {
        ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
        ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,l_65 = NULL;
        t = not_null(u_64);
        {
          ATerm l_2 (ATerm t)
          {
            ATerm j_14 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_14;
              }
            return(t);
          }
          t = fetch_1(t, l_2);
          {
            t = not_null(u_64);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm m_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, m_2);
                {
                  f_65 = t;
                  o_64 :
                  if(match_cons(f_65, sym__2))
                    {
                      g_65 = ATgetArgument(f_65, 0);
                      h_65 = ATgetArgument(f_65, 1);
                      p_64 :
                      if(match_cons(h_65, sym__2))
                        {
                          i_65 = ATgetArgument(h_65, 0);
                          l_65 = ATgetArgument(h_65, 1);
                          {
                            if(((b_65 != NULL) && (b_65 != g_65)))
                              _fail(g_65);
                            else
                              b_65 = g_65;
                            {
                              if(((c_65 != NULL) && (c_65 != i_65)))
                                _fail(i_65);
                              else
                                c_65 = i_65;
                              if(((d_65 != NULL) && (d_65 != l_65)))
                                _fail(l_65);
                              else
                                d_65 = l_65;
                            }
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
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(w_64), not_null(x_64), not_null(d_65))));
      }
    }
  else
    {
      if(match_cons(v_64, sym_Prim_2))
        {
          w_64 = ATgetArgument(v_64, 0);
          x_64 = ATgetArgument(v_64, 1);
          {
            ATerm o_65 = NULL,r_65 = NULL,s_65 = NULL;
            ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
            t = not_null(x_64);
            {
              ATerm n_2 (ATerm t)
              {
                ATerm k_14 = t;
                if((PushChoice() == 0))
                  {
                    t = Var_1(t, _id);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_14;
                  }
                return(t);
              }
              t = fetch_1(t, n_2);
              {
                t = not_null(x_64);
                {
                  t = unzip_1(t, LiftPrimArg_0);
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = unzip_1(t, _id);
                      return(t);
                    }
                    t = _2(t, concat_0, o_2);
                    {
                      t_65 = t;
                      r_64 :
                      if(match_cons(t_65, sym__2))
                        {
                          u_65 = ATgetArgument(t_65, 0);
                          v_65 = ATgetArgument(t_65, 1);
                          s_64 :
                          if(match_cons(v_65, sym__2))
                            {
                              w_65 = ATgetArgument(v_65, 0);
                              x_65 = ATgetArgument(v_65, 1);
                              {
                                if(((o_65 != NULL) && (o_65 != u_65)))
                                  _fail(u_65);
                                else
                                  o_65 = u_65;
                                {
                                  if(((r_65 != NULL) && (r_65 != w_65)))
                                    _fail(w_65);
                                  else
                                    r_65 = w_65;
                                  if(((s_65 != NULL) && (s_65 != x_65)))
                                    _fail(x_65);
                                  else
                                    s_65 = x_65;
                                }
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
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_65)), (ATerm) ATmakeAppl(sym_PrimT_3, not_null(w_64), (ATerm)ATempty, not_null(s_65))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_113 (ATerm))
{
  ATerm c_66 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = j_113(t);
      t = c_66(t);
      return(t);
    }
    t = try_1(t, p_2);
    return(t);
  }
  t = c_66(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  g_66 :
  if(match_cons(h_66, sym_Wld_0))
    {
      ATerm l_66 = NULL,n_66 = NULL;
      ATerm l_14;
      l_14 = t;
      {
        ATerm m_66 = NULL;
        t = SSLgetAnnotations(not_null(h_66));
        {
          m_66 = t;
          if(((l_66 != NULL) && (l_66 != m_66)))
            _fail(m_66);
          else
            l_66 = m_66;
        }
      }
      t = l_14;
      {
        ATerm o_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(l_66));
        {
          o_66 = t;
          if(((n_66 != NULL) && (n_66 != o_66)))
            _fail(o_66);
          else
            n_66 = o_66;
        }
        t = not_null(n_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm p_14 = t;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = r_14;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, q_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm l_86 (ATerm), ATerm m_86 (ATerm))
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  z_66 = t;
  y_66 :
  if(match_cons(z_66, sym_App_2))
    {
      a_67 = ATgetArgument(z_66, 0);
      b_67 = ATgetArgument(z_66, 1);
      {
        ATerm f_67 = NULL,h_67 = NULL;
        ATerm g_67 = NULL;
        t = SSLgetAnnotations(not_null(z_66));
        {
          g_67 = t;
          if(((f_67 != NULL) && (f_67 != g_67)))
            _fail(g_67);
          else
            f_67 = g_67;
        }
        {
          t = not_null(a_67);
          {
            ATerm j_67 = NULL;
            t = l_86(t);
            {
              h_67 = t;
              {
                t = not_null(b_67);
                {
                  ATerm l_67 = NULL;
                  t = m_86(t);
                  {
                    j_67 = t;
                    {
                      ATerm m_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(h_67), not_null(j_67)), not_null(f_67));
                      {
                        m_67 = t;
                        if(((l_67 != NULL) && (l_67 != m_67)))
                          _fail(m_67);
                        else
                          l_67 = m_67;
                      }
                      t = not_null(l_67);
                    }
                  }
                }
              }
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
ATerm Con_3 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym_Con_3))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      c_68 = ATgetArgument(z_67, 2);
      {
        ATerm h_68 = NULL,j_68 = NULL;
        ATerm i_68 = NULL;
        t = SSLgetAnnotations(not_null(z_67));
        {
          i_68 = t;
          if(((h_68 != NULL) && (h_68 != i_68)))
            _fail(i_68);
          else
            h_68 = i_68;
        }
        {
          t = not_null(a_68);
          {
            ATerm l_68 = NULL;
            t = x_86(t);
            {
              j_68 = t;
              {
                t = not_null(b_68);
                {
                  ATerm n_68 = NULL;
                  t = y_86(t);
                  {
                    l_68 = t;
                    {
                      t = not_null(c_68);
                      {
                        ATerm p_68 = NULL;
                        t = z_86(t);
                        {
                          n_68 = t;
                          {
                            ATerm q_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_68), not_null(l_68), not_null(n_68)), not_null(h_68));
                            {
                              q_68 = t;
                              if(((p_68 != NULL) && (p_68 != q_68)))
                                _fail(q_68);
                              else
                                p_68 = q_68;
                            }
                            t = not_null(p_68);
                          }
                        }
                      }
                    }
                  }
                }
              }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  h_69 = t;
  f_69 :
  if(match_cons(h_69, sym_SRule_1))
    {
      i_69 = ATgetArgument(h_69, 0);
      g_69 :
      if(match_cons(i_69, sym_StratRule_3))
        {
          j_69 = ATgetArgument(i_69, 0);
          k_69 = ATgetArgument(i_69, 1);
          l_69 = ATgetArgument(i_69, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_69)), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_69))), not_null(j_69)));
        }
      else
        {
          if(match_cons(i_69, sym_Rule_3))
            {
              j_69 = ATgetArgument(i_69, 0);
              k_69 = ATgetArgument(i_69, 1);
              l_69 = ATgetArgument(i_69, 2);
              {
                t = not_null(j_69);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(k_69);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(k_69))), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_69))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_69))));
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
ATerm Scope_2 (ATerm t, ATerm r_89 (ATerm), ATerm s_89 (ATerm))
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  a_70 = t;
  z_69 :
  if(match_cons(a_70, sym_Scope_2))
    {
      b_70 = ATgetArgument(a_70, 0);
      c_70 = ATgetArgument(a_70, 1);
      {
        ATerm g_70 = NULL,i_70 = NULL;
        ATerm h_70 = NULL;
        t = SSLgetAnnotations(not_null(a_70));
        {
          h_70 = t;
          if(((g_70 != NULL) && (g_70 != h_70)))
            _fail(h_70);
          else
            g_70 = h_70;
        }
        {
          t = not_null(b_70);
          {
            ATerm k_70 = NULL;
            t = r_89(t);
            {
              i_70 = t;
              {
                t = not_null(c_70);
                {
                  ATerm m_70 = NULL;
                  t = s_89(t);
                  {
                    k_70 = t;
                    {
                      ATerm n_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_70), not_null(k_70)), not_null(g_70));
                      {
                        n_70 = t;
                        if(((m_70 != NULL) && (m_70 != n_70)))
                          _fail(n_70);
                        else
                          m_70 = n_70;
                      }
                      t = not_null(m_70);
                    }
                  }
                }
              }
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
ATerm oncetd_1 (ATerm t, ATerm g_104 (ATerm))
{
  ATerm t_70 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_104(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = _one(t, t_70);
      }
    return(t);
  }
  t = t_70(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  j_71 = t;
  h_71 :
  if(match_cons(j_71, sym_SRule_1))
    {
      k_71 = ATgetArgument(j_71, 0);
      i_71 :
      if(match_cons(k_71, sym_Rule_3))
        {
          l_71 = ATgetArgument(k_71, 0);
          m_71 = ATgetArgument(k_71, 1);
          n_71 = ATgetArgument(k_71, 2);
          {
            ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
            ATerm z_71 = NULL;
            ATerm o_72 = NULL;
            t = new_0(t);
            {
              z_71 = t;
              {
                if(((w_71 != NULL) && (w_71 != z_71)))
                  _fail(z_71);
                else
                  w_71 = z_71;
                {
                  t = not_null(l_71);
                  {
                    ATerm x_72 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      ATerm e_72 = NULL,f_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
                      e_72 = t;
                      x_70 :
                      if(match_cons(e_72, sym_Con_3))
                        {
                          f_72 = ATgetArgument(e_72, 0);
                          m_72 = ATgetArgument(e_72, 1);
                          n_72 = ATgetArgument(e_72, 2);
                          y_70 :
                          if(match_cons(f_72, sym_Var_1))
                            {
                              l_72 = ATgetArgument(f_72, 0);
                              {
                                if(((v_71 != NULL) && (v_71 != l_72)))
                                  _fail(l_72);
                                else
                                  v_71 = l_72;
                                {
                                  if(((t_71 != NULL) && (t_71 != m_72)))
                                    _fail(m_72);
                                  else
                                    t_71 = m_72;
                                  {
                                    if(((r_71 != NULL) && (r_71 != n_72)))
                                      _fail(n_72);
                                    else
                                      r_71 = n_72;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71));
                                  }
                                }
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
                    t = oncetd_1(t, s_2);
                    {
                      o_72 = t;
                      {
                        if(((x_71 != NULL) && (x_71 != o_72)))
                          _fail(o_72);
                        else
                          x_71 = o_72;
                        {
                          t = not_null(m_71);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
                              p_72 = t;
                              b_71 :
                              if(match_cons(p_72, sym_Con_3))
                                {
                                  q_72 = ATgetArgument(p_72, 0);
                                  s_72 = ATgetArgument(p_72, 1);
                                  t_72 = ATgetArgument(p_72, 2);
                                  c_71 :
                                  if(match_cons(q_72, sym_Var_1))
                                    {
                                      r_72 = ATgetArgument(q_72, 0);
                                      d_71 :
                                      if(match_cons(t_72, sym_CallT_3))
                                        {
                                          u_72 = ATgetArgument(t_72, 0);
                                          v_72 = ATgetArgument(t_72, 1);
                                          w_72 = ATgetArgument(t_72, 2);
                                          e_71 :
                                          if(((ATgetType(v_72) == AT_LIST) && ATisEmpty(v_72)))
                                            {
                                              f_71 :
                                              if(((ATgetType(w_72) == AT_LIST) && ATisEmpty(w_72)))
                                                {
                                                  {
                                                    if(((v_71 != NULL) && (v_71 != r_72)))
                                                      _fail(r_72);
                                                    else
                                                      v_71 = r_72;
                                                    {
                                                      if(((u_71 != NULL) && (u_71 != s_72)))
                                                        _fail(s_72);
                                                      else
                                                        u_71 = s_72;
                                                      {
                                                        if(((s_71 != NULL) && (s_71 != u_72)))
                                                          _fail(u_72);
                                                        else
                                                          s_71 = u_72;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71));
                                                      }
                                                    }
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
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = oncetd_1(t, t_2);
                            {
                              x_72 = t;
                              if(((y_71 != NULL) && (y_71 != x_72)))
                                _fail(x_72);
                              else
                                y_71 = x_72;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_71), not_null(y_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_71), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_71), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_71), not_null(u_71), term_u_13))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_71)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, u_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_103 (ATerm))
{
  t = c_103(t);
  {
    ATerm v_2 (ATerm t)
    {
      t = topdown_1(t, c_103);
      return(t);
    }
    t = _all(t, v_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm x_2 (ATerm t)
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
                        {
                          ATerm w_15 = t;
                          int x_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(x_15);
                            }
                          else
                            {
                              t = w_15;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, x_2);
    }
    return(t);
  }
  t = topdown_1(t, w_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm l_73 = NULL;
  l_73 = t;
  i_73 :
  if(match_cons(l_73, sym__0))
    {
      ATerm n_73 = NULL,p_73 = NULL;
      ATerm c_16;
      c_16 = t;
      {
        ATerm o_73 = NULL;
        t = SSLgetAnnotations(not_null(l_73));
        {
          o_73 = t;
          if(((n_73 != NULL) && (n_73 != o_73)))
            _fail(o_73);
          else
            n_73 = o_73;
        }
      }
      t = c_16;
      {
        ATerm q_73 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(n_73));
        {
          q_73 = t;
          if(((p_73 != NULL) && (p_73 != q_73)))
            _fail(q_73);
          else
            p_73 = q_73;
        }
        t = not_null(p_73);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm h_74 = NULL;
  ATerm j_74 = NULL,k_74 = NULL,t_74 = NULL,v_74 = NULL;
  h_74 = t;
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm m_74 = NULL;
      ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
      t = not_null(h_74);
      {
        m_74 = t;
        {
          t = SSL_explode_term(not_null(m_74));
          {
            o_74 = t;
            c_74 :
            if(match_cons(o_74, sym__2))
              {
                p_74 = ATgetArgument(o_74, 0);
                q_74 = ATgetArgument(o_74, 1);
                d_74 :
                if(match_string(p_74, ""))
                  {
                    e_74 :
                    if(((ATgetType(q_74) == AT_LIST) && !(ATisEmpty(q_74))))
                      {
                        r_74 = ATgetFirst((ATermList) q_74);
                        s_74 = (ATerm) ATgetNext((ATermList) q_74);
                        {
                          if(((j_74 != NULL) && (j_74 != r_74)))
                            _fail(r_74);
                          else
                            j_74 = r_74;
                          if(((k_74 != NULL) && (k_74 != s_74)))
                            _fail(s_74);
                          else
                            k_74 = s_74;
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
        }
      }
    }
    t = d_16;
    {
      ATerm e_16;
      e_16 = t;
      {
        ATerm u_74 = NULL;
        t = term_k_11;
        {
          u_74 = t;
          if(((t_74 != NULL) && (t_74 != u_74)))
            _fail(u_74);
          else
            t_74 = u_74;
        }
      }
      t = e_16;
      {
        t = SSL_mkterm(not_null(t_74), not_null(k_74));
        {
          v_74 = t;
          t = not_null(v_74);
        }
      }
    }
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm e_107 (ATerm))
{
  ATerm s_75 = NULL,u_75 = NULL,w_75 = NULL;
  ATerm y_75 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_75 = NULL,q_75 = NULL;
        ATerm l_16;
        l_16 = t;
        {
          ATerm p_75 = NULL;
          t = map_1(t, Thd_0);
          {
            t = e_107(t);
            {
              p_75 = t;
              if(((o_75 != NULL) && (o_75 != p_75)))
                _fail(p_75);
              else
                o_75 = p_75;
            }
          }
        }
        t = l_16;
        {
          ATerm r_75 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = y_75(t);
            {
              r_75 = t;
              if(((q_75 != NULL) && (q_75 != r_75)))
                _fail(r_75);
              else
                q_75 = r_75;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(q_75)), not_null(o_75));
        }
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = y_75(t);
  {
    ATerm m_16;
    m_16 = t;
    {
      ATerm t_75 = NULL;
      t_75 = t;
      if(((s_75 != NULL) && (s_75 != t_75)))
        _fail(t_75);
      else
        s_75 = t_75;
    }
    t = m_16;
    {
      ATerm n_16;
      n_16 = t;
      {
        ATerm v_75 = NULL;
        t = term_k_11;
        {
          v_75 = t;
          if(((u_75 != NULL) && (u_75 != v_75)))
            _fail(v_75);
          else
            u_75 = v_75;
        }
      }
      t = n_16;
      {
        t = SSL_mkterm(not_null(u_75), not_null(s_75));
        {
          w_75 = t;
          t = not_null(w_75);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm m_76 = NULL;
  m_76 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
        ATerm r_76 = NULL;
        ATerm s_76 = NULL;
        t = new_0(t);
        {
          r_76 = t;
          {
            if(((o_76 != NULL) && (o_76 != r_76)))
              _fail(r_76);
            else
              o_76 = r_76;
            {
              ATerm t_76 = NULL;
              t = new_0(t);
              {
                s_76 = t;
                {
                  if(((p_76 != NULL) && (p_76 != s_76)))
                    _fail(s_76);
                  else
                    p_76 = s_76;
                  {
                    t = new_0(t);
                    {
                      t_76 = t;
                      if(((q_76 != NULL) && (q_76 != t_76)))
                        _fail(t_76);
                      else
                        q_76 = t_76;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_13), term_n_13)), not_null(p_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_76)), not_null(q_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_76)));
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
          ATerm y_76 = NULL;
          ATerm z_76 = NULL;
          t = new_0(t);
          {
            y_76 = t;
            {
              if(((v_76 != NULL) && (v_76 != y_76)))
                _fail(y_76);
              else
                v_76 = y_76;
              {
                ATerm a_77 = NULL;
                t = new_0(t);
                {
                  z_76 = t;
                  {
                    if(((w_76 != NULL) && (w_76 != z_76)))
                      _fail(z_76);
                    else
                      w_76 = z_76;
                    {
                      t = new_0(t);
                      {
                        a_77 = t;
                        if(((x_76 != NULL) && (x_76 != a_77)))
                          _fail(a_77);
                        else
                          x_76 = a_77;
                      }
                    }
                  }
                }
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_76)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_76)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_76)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_76))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_76), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_13), term_n_13)), not_null(w_76), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_76)), not_null(x_76), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_76)));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  l_77 = t;
  k_77 :
  if(match_cons(l_77, sym__2))
    {
      m_77 = ATgetArgument(l_77, 0);
      n_77 = ATgetArgument(l_77, 1);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_77), not_null(n_77));
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = SSL_subtr(not_null(m_77), not_null(n_77));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm h_117 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
    m_78 = t;
    x_77 :
    if(match_cons(m_78, sym__2))
      {
        n_78 = ATgetArgument(m_78, 0);
        o_78 = ATgetArgument(m_78, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_78), not_null(o_78), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
    t_78 = t;
    z_77 :
    if(match_cons(t_78, sym__3))
      {
        u_78 = ATgetArgument(t_78, 0);
        v_78 = ATgetArgument(t_78, 1);
        w_78 = ATgetArgument(t_78, 2);
        a_78 :
        if(match_int(u_78, 0))
          {
            t = not_null(w_78);
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
    z_78 = t;
    l_78 :
    if(match_cons(z_78, sym__3))
      {
        a_79 = ATgetArgument(z_78, 0);
        b_79 = ATgetArgument(z_78, 1);
        c_79 = ATgetArgument(z_78, 2);
        {
          ATerm g_79 = NULL,i_79 = NULL;
          ATerm x_16;
          x_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), term_l_7);
            t = geq_0(t);
          }
          t = x_16;
          {
            ATerm y_16;
            y_16 = t;
            {
              ATerm h_79 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), term_l_7);
              {
                t = subt_0(t);
                {
                  h_79 = t;
                  if(((g_79 != NULL) && (g_79 != h_79)))
                    _fail(h_79);
                  else
                    g_79 = h_79;
                }
              }
            }
            t = y_16;
            {
              ATerm j_79 = NULL;
              t = not_null(b_79);
              {
                t = h_117(t);
                {
                  j_79 = t;
                  if(((i_79 != NULL) && (i_79 != j_79)))
                    _fail(j_79);
                  else
                    i_79 = j_79;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(g_79), not_null(b_79), (ATerm) ATinsert(CheckATermList(not_null(c_79)), not_null(i_79)));
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
  t = for_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  b_80 = t;
  a_80 :
  if(match_cons(b_80, sym__2))
    {
      c_80 = ATgetArgument(b_80, 0);
      d_80 = ATgetArgument(b_80, 1);
      {
        ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
        ATerm j_80 = NULL;
        ATerm k_80 = NULL;
        t = new_0(t);
        {
          j_80 = t;
          {
            if(((g_80 != NULL) && (g_80 != j_80)))
              _fail(j_80);
            else
              g_80 = j_80;
            {
              ATerm l_80 = NULL;
              t = new_0(t);
              {
                k_80 = t;
                {
                  if(((h_80 != NULL) && (h_80 != k_80)))
                    _fail(k_80);
                  else
                    h_80 = k_80;
                  {
                    t = new_0(t);
                    {
                      l_80 = t;
                      if(((i_80 != NULL) && (i_80 != l_80)))
                        _fail(l_80);
                      else
                        i_80 = l_80;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_80)), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_80))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_80)))), (ATerm) ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_80))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_80))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_80), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_13), term_n_13)), not_null(h_80), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_80)), not_null(i_80), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_80)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  t_80 = t;
  r_80 :
  if(match_cons(t_80, sym__2))
    {
      u_80 = ATgetArgument(t_80, 0);
      v_80 = ATgetArgument(t_80, 1);
      s_80 :
      if(((ATgetType(v_80) == AT_LIST) && ATisEmpty(v_80)))
        {
          t = (ATerm) ATempty;
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
ATerm zipr_1 (ATerm t, ATerm w_107 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, w_107);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
  j_81 = t;
  y_80 :
  if(((ATgetType(j_81) == AT_LIST) && !(ATisEmpty(j_81))))
    {
      k_81 = ATgetFirst((ATermList) j_81);
      l_81 = (ATerm) ATgetNext((ATermList) j_81);
      t = not_null(l_81);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  p_81 :
  if(((ATgetType(u_81) == AT_LIST) && !(ATisEmpty(u_81))))
    {
      v_81 = ATgetFirst((ATermList) u_81);
      w_81 = (ATerm) ATgetNext((ATermList) u_81);
      t_81 :
      if(((ATgetType(w_81) == AT_LIST) && ATisEmpty(w_81)))
        {
          t = not_null(v_81);
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
ATerm last_0 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  ATerm j_86 (ATerm t)
  {
    ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,f_85 = NULL;
    ATerm b_17;
    b_17 = t;
    {
      ATerm o_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
      ATerm p_84 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_84), term_l_7);
      {
        t = add_0(t);
        {
          p_84 = t;
          if(((o_84 != NULL) && (o_84 != p_84)))
            _fail(p_84);
          else
            o_84 = p_84;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_84), term_h_17);
        {
          t = copy_1(t, new_0);
          {
            q_84 = t;
            h_83 :
            if(((ATgetType(q_84) == AT_LIST) && !(ATisEmpty(q_84))))
              {
                r_84 = ATgetFirst((ATermList) q_84);
                s_84 = (ATerm) ATgetNext((ATermList) q_84);
                {
                  ATerm t_84 = NULL;
                  if(((g_84 != NULL) && (g_84 != r_84)))
                    _fail(r_84);
                  else
                    g_84 = r_84;
                  {
                    if(((h_84 != NULL) && (h_84 != s_84)))
                      _fail(s_84);
                    else
                      h_84 = s_84;
                    {
                      t = not_null(h_84);
                      {
                        ATerm w_84 = NULL,x_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,e_85 = NULL;
                        t = last_0(t);
                        {
                          t_84 = t;
                          {
                            if(((f_84 != NULL) && (f_84 != t_84)))
                              _fail(t_84);
                            else
                              f_84 = t_84;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_84)), not_null(g_84)), not_null(h_84));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    w_84 = t;
                                    g_83 :
                                    if(match_cons(w_84, sym__6))
                                      {
                                        x_84 = ATgetArgument(w_84, 0);
                                        z_84 = ATgetArgument(w_84, 1);
                                        a_85 = ATgetArgument(w_84, 2);
                                        b_85 = ATgetArgument(w_84, 3);
                                        c_85 = ATgetArgument(w_84, 4);
                                        e_85 = ATgetArgument(w_84, 5);
                                        {
                                          if(((i_84 != NULL) && (i_84 != x_84)))
                                            _fail(x_84);
                                          else
                                            i_84 = x_84;
                                          {
                                            if(((j_84 != NULL) && (j_84 != z_84)))
                                              _fail(z_84);
                                            else
                                              j_84 = z_84;
                                            {
                                              if(((k_84 != NULL) && (k_84 != a_85)))
                                                _fail(a_85);
                                              else
                                                k_84 = a_85;
                                              {
                                                if(((l_84 != NULL) && (l_84 != b_85)))
                                                  _fail(b_85);
                                                else
                                                  l_84 = b_85;
                                                {
                                                  if(((m_84 != NULL) && (m_84 != c_85)))
                                                    _fail(c_85);
                                                  else
                                                    m_84 = c_85;
                                                  if(((n_84 != NULL) && (n_84 != e_85)))
                                                    _fail(e_85);
                                                  else
                                                    n_84 = e_85;
                                                }
                                              }
                                            }
                                          }
                                        }
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
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = b_17;
    {
      ATerm g_85 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_84)), not_null(k_84)), not_null(h_84));
      {
        t = concat_0(t);
        {
          g_85 = t;
          if(((f_85 != NULL) && (f_85 != g_85)))
            _fail(g_85);
          else
            f_85 = g_85;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_83), term_i_17), not_null(j_84), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(f_85)), not_null(g_84)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_84))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_83), not_null(l_84)))), (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_84))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_83), not_null(n_84)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_84))))));
    }
    return(t);
  }
  ATerm k_86 (ATerm t)
  {
    ATerm j_85 = NULL;
    ATerm k_85 = NULL;
    t = new_0(t);
    {
      k_85 = t;
      if(((j_85 != NULL) && (j_85 != k_85)))
        _fail(k_85);
      else
        j_85 = k_85;
    }
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_83), term_i_17), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_83), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_83), (ATerm) ATempty))), term_u_13))));
    return(t);
  }
  ATerm n_86 (ATerm t)
  {
    ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,f_86 = NULL;
    ATerm o_17;
    o_17 = t;
    {
      ATerm v_85 = NULL;
      ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
      t = new_0(t);
      {
        v_85 = t;
        {
          if(((o_85 != NULL) && (o_85 != v_85)))
            _fail(v_85);
          else
            o_85 = v_85;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_84), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_85)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  w_85 = t;
                  p_83 :
                  if(match_cons(w_85, sym__6))
                    {
                      x_85 = ATgetArgument(w_85, 0);
                      y_85 = ATgetArgument(w_85, 1);
                      z_85 = ATgetArgument(w_85, 2);
                      a_86 = ATgetArgument(w_85, 3);
                      b_86 = ATgetArgument(w_85, 4);
                      c_86 = ATgetArgument(w_85, 5);
                      {
                        if(((p_85 != NULL) && (p_85 != x_85)))
                          _fail(x_85);
                        else
                          p_85 = x_85;
                        {
                          if(((q_85 != NULL) && (q_85 != y_85)))
                            _fail(y_85);
                          else
                            q_85 = y_85;
                          {
                            if(((r_85 != NULL) && (r_85 != z_85)))
                              _fail(z_85);
                            else
                              r_85 = z_85;
                            {
                              if(((s_85 != NULL) && (s_85 != a_86)))
                                _fail(a_86);
                              else
                                s_85 = a_86;
                              {
                                if(((t_85 != NULL) && (t_85 != b_86)))
                                  _fail(b_86);
                                else
                                  t_85 = b_86;
                                if(((u_85 != NULL) && (u_85 != c_86)))
                                  _fail(c_86);
                                else
                                  u_85 = c_86;
                              }
                            }
                          }
                        }
                      }
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
    t = o_17;
    {
      ATerm g_86 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_85), not_null(t_85));
      {
        t = conc_0(t);
        {
          g_86 = t;
          if(((f_86 != NULL) && (f_86 != g_86)))
            _fail(g_86);
          else
            f_86 = g_86;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_83), term_p_17), not_null(q_85), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(f_86)), not_null(o_85)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_85))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_83), not_null(s_85)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(x_83), not_null(u_85)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_85))))));
    }
    return(t);
  }
  w_83 = t;
  r_83 :
  if(match_cons(w_83, sym__3))
    {
      x_83 = ATgetArgument(w_83, 0);
      y_83 = ATgetArgument(w_83, 1);
      z_83 = ATgetArgument(w_83, 2);
      s_83 :
      if(match_string(y_83, "T"))
        {
          t_83 :
          if(match_cons(z_83, sym__2))
            {
              a_84 = ATgetArgument(z_83, 0);
              b_84 = ATgetArgument(z_83, 1);
              u_83 :
              if(match_int(a_84, 0))
                {
                  ATerm q_17 = t;
                  int r_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_86(t);
                      ;
                      LocalPopChoice(r_17);
                    }
                  else
                    {
                      t = q_17;
                      t = k_86(t);
                    }
                }
              else
                {
                  t = j_86(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_string(y_83, "D"))
            {
              v_83 :
              if(match_cons(z_83, sym__2))
                {
                  a_84 = ATgetArgument(z_83, 0);
                  b_84 = ATgetArgument(z_83, 1);
                  t = n_86(t);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  h_87 = t;
  e_87 :
  if(match_cons(h_87, sym__2))
    {
      i_87 = ATgetArgument(h_87, 0);
      n_87 = ATgetArgument(h_87, 1);
      f_87 :
      if(match_cons(i_87, sym__2))
        {
          j_87 = ATgetArgument(i_87, 0);
          m_87 = ATgetArgument(i_87, 1);
          g_87 :
          if(match_cons(j_87, sym_Mod_2))
            {
              k_87 = ATgetArgument(j_87, 0);
              l_87 = ATgetArgument(j_87, 1);
              {
                ATerm s_87 = NULL;
                ATerm t_87 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_87), not_null(l_87), not_null(m_87));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      t_87 = t;
                      if(((s_87 != NULL) && (s_87 != t_87)))
                        _fail(t_87);
                      else
                        s_87 = t_87;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), not_null(n_87));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  z_87 = t;
  x_87 :
  if(match_cons(z_87, sym__5))
    {
      a_88 = ATgetArgument(z_87, 0);
      d_88 = ATgetArgument(z_87, 1);
      e_88 = ATgetArgument(z_87, 2);
      f_88 = ATgetArgument(z_87, 3);
      g_88 = ATgetArgument(z_87, 4);
      y_87 :
      if(((ATgetType(a_88) == AT_LIST) && !(ATisEmpty(a_88))))
        {
          b_88 = ATgetFirst((ATermList) a_88);
          c_88 = (ATerm) ATgetNext((ATermList) a_88);
          t = (ATerm) ATmakeAppl(sym__5, not_null(c_88), not_null(d_88), not_null(e_88), not_null(f_88), (ATerm) ATinsert(CheckATermList(not_null(g_88)), not_null(b_88)));
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
ATerm diff_1 (ATerm t, ATerm h_114 (ATerm))
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  q_88 = t;
  p_88 :
  if(match_cons(q_88, sym__2))
    {
      r_88 = ATgetArgument(q_88, 0);
      s_88 = ATgetArgument(q_88, 1);
      {
        t = not_null(r_88);
        {
          ATerm w_88 (ATerm t)
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                {
                  ATerm y_17 = t;
                  int b_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(s_88);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_114, b_3);
                      t = w_88(t);
                      ;
                      LocalPopChoice(b_18);
                    }
                  else
                    {
                      t = y_17;
                      t = Cons_2(t, _id, w_88);
                    }
                }
              }
            return(t);
          }
          t = w_88(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
  a_89 = t;
  y_88 :
  if(match_cons(a_89, sym__2))
    {
      b_89 = ATgetArgument(a_89, 0);
      c_89 = ATgetArgument(a_89, 1);
      z_88 :
      if(((ATgetType(c_89) == AT_LIST) && !(ATisEmpty(c_89))))
        {
          d_89 = ATgetFirst((ATermList) c_89);
          e_89 = (ATerm) ATgetNext((ATermList) c_89);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_89)), not_null(d_89)), not_null(e_89));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
  n_89 = t;
  m_89 :
  if(match_cons(n_89, sym__2))
    {
      o_89 = ATgetArgument(n_89, 0);
      p_89 = ATgetArgument(n_89, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_89)), not_null(o_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,g_90 = NULL,h_90 = NULL;
  z_89 = t;
  w_89 :
  if(match_cons(z_89, sym__2))
    {
      a_90 = ATgetArgument(z_89, 0);
      d_90 = ATgetArgument(z_89, 1);
      x_89 :
      if(((ATgetType(a_90) == AT_LIST) && !(ATisEmpty(a_90))))
        {
          b_90 = ATgetFirst((ATermList) a_90);
          c_90 = (ATerm) ATgetNext((ATermList) a_90);
          y_89 :
          if(((ATgetType(d_90) == AT_LIST) && !(ATisEmpty(d_90))))
            {
              g_90 = ATgetFirst((ATermList) d_90);
              h_90 = (ATerm) ATgetNext((ATermList) d_90);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_90), not_null(g_90)), (ATerm) ATmakeAppl(sym__2, not_null(c_90), not_null(h_90)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
  u_90 = t;
  r_90 :
  if(match_cons(u_90, sym__2))
    {
      v_90 = ATgetArgument(u_90, 0);
      w_90 = ATgetArgument(u_90, 1);
      s_90 :
      if(((ATgetType(v_90) == AT_LIST) && ATisEmpty(v_90)))
        {
          t_90 :
          if(((ATgetType(w_90) == AT_LIST) && ATisEmpty(w_90)))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  ATerm y_90 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107(t);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          t = p_107(t);
          {
            t = _2(t, r_107, y_90);
            t = q_107(t);
          }
        }
      }
    return(t);
  }
  t = y_90(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_107 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_107);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
  j_91 = t;
  h_91 :
  if(((ATgetType(j_91) == AT_LIST) && !(ATisEmpty(j_91))))
    {
      k_91 = ATgetFirst((ATermList) j_91);
      n_91 = (ATerm) ATgetNext((ATermList) j_91);
      i_91 :
      if(match_cons(k_91, sym__2))
        {
          l_91 = ATgetArgument(k_91, 0);
          m_91 = ATgetArgument(k_91, 1);
          {
            ATerm r_91 = NULL,u_91 = NULL,h_92 = NULL,n_92 = NULL;
            ATerm h_18;
            h_18 = t;
            {
              ATerm v_91 = NULL;
              ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
              t = not_null(m_91);
              {
                v_91 = t;
                {
                  t = SSL_explode_term(not_null(v_91));
                  {
                    e_92 = t;
                    c_91 :
                    if(match_cons(e_92, sym__2))
                      {
                        f_92 = ATgetArgument(e_92, 0);
                        g_92 = ATgetArgument(e_92, 1);
                        {
                          if(((r_91 != NULL) && (r_91 != f_92)))
                            _fail(f_92);
                          else
                            r_91 = f_92;
                          if(((u_91 != NULL) && (u_91 != g_92)))
                            _fail(g_92);
                          else
                            u_91 = g_92;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
            }
            t = h_18;
            {
              ATerm i_18;
              i_18 = t;
              {
                ATerm i_92 = NULL;
                ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
                t = not_null(l_91);
                {
                  i_92 = t;
                  {
                    t = SSL_explode_term(not_null(i_92));
                    {
                      k_92 = t;
                      f_91 :
                      if(match_cons(k_92, sym__2))
                        {
                          l_92 = ATgetArgument(k_92, 0);
                          m_92 = ATgetArgument(k_92, 1);
                          {
                            if(((r_91 != NULL) && (r_91 != l_92)))
                              _fail(l_92);
                            else
                              r_91 = l_92;
                            if(((h_92 != NULL) && (h_92 != m_92)))
                              _fail(m_92);
                            else
                              h_92 = m_92;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
              t = i_18;
              {
                ATerm o_92 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(u_91));
                {
                  t = zip_1(t, _id);
                  {
                    o_92 = t;
                    if(((n_92 != NULL) && (n_92 != o_92)))
                      _fail(o_92);
                    else
                      n_92 = o_92;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_92), not_null(n_91));
                  t = conc_0(t);
                }
              }
            }
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
ATerm UfIdem_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  y_92 = t;
  w_92 :
  if(((ATgetType(y_92) == AT_LIST) && !(ATisEmpty(y_92))))
    {
      z_92 = ATgetFirst((ATermList) y_92);
      c_93 = (ATerm) ATgetNext((ATermList) y_92);
      x_92 :
      if(match_cons(z_92, sym__2))
        {
          a_93 = ATgetArgument(z_92, 0);
          b_93 = ATgetArgument(z_92, 1);
          {
            ATerm e_93 = NULL;
            if(((a_93 != NULL) && (a_93 != b_93)))
              _fail(b_93);
            else
              a_93 = b_93;
            {
              if(((e_93 != NULL) && (e_93 != c_93)))
                _fail(c_93);
              else
                e_93 = c_93;
              t = not_null(e_93);
            }
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
ATerm diff_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm h_93 = NULL;
        h_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_93));
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_3 (ATerm t)
            {
              ATerm s_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = s_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, f_3);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, c_3, d_3, e_3);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm))
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,d_94 = NULL;
  u_93 = t;
  s_93 :
  if(match_cons(u_93, sym__5))
    {
      v_93 = ATgetArgument(u_93, 0);
      y_93 = ATgetArgument(u_93, 1);
      z_93 = ATgetArgument(u_93, 2);
      a_94 = ATgetArgument(u_93, 3);
      d_94 = ATgetArgument(u_93, 4);
      t_93 :
      if(((ATgetType(v_93) == AT_LIST) && !(ATisEmpty(v_93))))
        {
          w_93 = ATgetFirst((ATermList) v_93);
          x_93 = (ATerm) ATgetNext((ATermList) v_93);
          {
            ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,t_94 = NULL,v_94 = NULL,x_94 = NULL;
            ATerm b_19;
            b_19 = t;
            {
              ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_93), not_null(z_93));
              {
                t = f_129(t);
                {
                  o_94 = t;
                  o_93 :
                  if(match_cons(o_94, sym__2))
                    {
                      p_94 = ATgetArgument(o_94, 0);
                      q_94 = ATgetArgument(o_94, 1);
                      {
                        ATerm r_94 = NULL;
                        if(((l_94 != NULL) && (l_94 != p_94)))
                          _fail(p_94);
                        else
                          l_94 = p_94;
                        {
                          if(((k_94 != NULL) && (k_94 != q_94)))
                            _fail(q_94);
                          else
                            k_94 = q_94;
                          {
                            t = not_null(l_94);
                            {
                              ATerm s_94 = NULL;
                              t = g_129(t);
                              {
                                r_94 = t;
                                {
                                  if(((m_94 != NULL) && (m_94 != r_94)))
                                    _fail(r_94);
                                  else
                                    m_94 = r_94;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_94), not_null(y_93));
                                    {
                                      t = diff_0(t);
                                      {
                                        s_94 = t;
                                        if(((n_94 != NULL) && (n_94 != s_94)))
                                          _fail(s_94);
                                        else
                                          n_94 = s_94;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
            t = b_19;
            {
              ATerm c_19;
              c_19 = t;
              {
                ATerm u_94 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), not_null(x_93));
                {
                  t = conc_0(t);
                  {
                    u_94 = t;
                    if(((t_94 != NULL) && (t_94 != u_94)))
                      _fail(u_94);
                    else
                      t_94 = u_94;
                  }
                }
              }
              t = c_19;
              {
                ATerm m_19;
                m_19 = t;
                {
                  ATerm w_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), not_null(y_93));
                  {
                    t = conc_0(t);
                    {
                      w_94 = t;
                      if(((v_94 != NULL) && (v_94 != w_94)))
                        _fail(w_94);
                      else
                        v_94 = w_94;
                    }
                  }
                }
                t = m_19;
                {
                  ATerm y_94 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_93), not_null(l_94), not_null(a_94));
                  {
                    t = h_129(t);
                    {
                      y_94 = t;
                      if(((x_94 != NULL) && (x_94 != y_94)))
                        _fail(y_94);
                      else
                        x_94 = y_94;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(t_94), not_null(v_94), not_null(k_94), not_null(x_94), not_null(d_94));
                }
              }
            }
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
ATerm GnExit_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  j_95 = t;
  h_95 :
  if(match_cons(j_95, sym__5))
    {
      k_95 = ATgetArgument(j_95, 0);
      l_95 = ATgetArgument(j_95, 1);
      m_95 = ATgetArgument(j_95, 2);
      n_95 = ATgetArgument(j_95, 3);
      o_95 = ATgetArgument(j_95, 4);
      i_95 :
      if(((ATgetType(k_95) == AT_LIST) && ATisEmpty(k_95)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_95), not_null(o_95));
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  w_95 = t;
  v_95 :
  if(match_cons(w_95, sym__3))
    {
      x_95 = ATgetArgument(w_95, 0);
      y_95 = ATgetArgument(w_95, 1);
      z_95 = ATgetArgument(w_95, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(x_95), not_null(x_95), not_null(y_95), not_null(z_95), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_113 (ATerm), ATerm z_113 (ATerm))
{
  ATerm e_96 (ATerm t)
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_113(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          t = z_113(t);
          t = e_96(t);
        }
      }
    return(t);
  }
  t = e_96(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm))
{
  t = b_114(t);
  t = while_not_2(t, c_114, d_114);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, q_128, r_128, s_128);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, g_3);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, j_3);
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
    h_96 = t;
    g_96 :
    if(match_cons(h_96, sym__3))
      {
        i_96 = ATgetArgument(h_96, 0);
        j_96 = ATgetArgument(h_96, 1);
        k_96 = ATgetArgument(h_96, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(k_96)), not_null(j_96));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, h_3, i_3);
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_l_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_129 (ATerm))
{
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  t_96 = t;
  s_96 :
  if(match_cons(t_96, sym__2))
    {
      u_96 = ATgetArgument(t_96, 0);
      v_96 = ATgetArgument(t_96, 1);
      {
        ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
        ATerm t_19;
        t_19 = t;
        {
          ATerm b_97 = NULL;
          ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
          t = o_129(t);
          {
            b_97 = t;
            {
              if(((y_96 != NULL) && (y_96 != b_97)))
                _fail(b_97);
              else
                y_96 = b_97;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_96), not_null(u_96), not_null(v_96));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_19 = t;
                    int e_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_96), term_m_20);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(e_20);
                      }
                    else
                      {
                        t = z_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_97 = t;
                      r_96 :
                      if(((ATgetType(c_97) == AT_LIST) && !(ATisEmpty(c_97))))
                        {
                          d_97 = ATgetFirst((ATermList) c_97);
                          e_97 = (ATerm) ATgetNext((ATermList) c_97);
                          {
                            if(((z_96 != NULL) && (z_96 != d_97)))
                              _fail(d_97);
                            else
                              z_96 = d_97;
                            {
                              if(((a_97 != NULL) && (a_97 != e_97)))
                                _fail(e_97);
                              else
                                a_97 = e_97;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_96), term_m_20, (ATerm) ATinsert(CheckATermList(not_null(a_97)), (ATerm) ATinsert(CheckATermList(not_null(z_96)), not_null(u_96))));
                                t = table_put_0(t);
                              }
                            }
                          }
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
        t = t_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm q_97 = NULL;
  q_97 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_97 = NULL;
        ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL;
        t = not_null(q_97);
        {
          ATerm k_3 (ATerm t)
          {
            t = term_p_20;
            return(t);
          }
          t = rewrite_1(t, k_3);
          {
            u_97 = t;
            l_97 :
            if(match_cons(u_97, sym_Defined_2))
              {
                v_97 = ATgetArgument(u_97, 0);
                w_97 = ATgetArgument(u_97, 1);
                m_97 :
                if(match_string(v_97, "j_0"))
                  {
                    if(((t_97 != NULL) && (t_97 != w_97)))
                      _fail(w_97);
                    else
                      t_97 = w_97;
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
        t = not_null(t_97);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          ATerm z_97 = NULL;
          ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
          t = not_null(q_97);
          {
            ATerm l_3 (ATerm t)
            {
              t = term_p_20;
              return(t);
            }
            t = rewrite_1(t, l_3);
            {
              a_98 = t;
              o_97 :
              if(match_cons(a_98, sym_Defined_2))
                {
                  b_98 = ATgetArgument(a_98, 0);
                  c_98 = ATgetArgument(a_98, 1);
                  p_97 :
                  if(match_string(b_98, "e_0"))
                    {
                      if(((z_97 != NULL) && (z_97 != c_98)))
                        _fail(c_98);
                      else
                        z_97 = c_98;
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
          t = not_null(z_97);
        }
      }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL;
  j_98 = t;
  i_98 :
  if(((ATgetType(j_98) == AT_LIST) && !(ATisEmpty(j_98))))
    {
      k_98 = ATgetFirst((ATermList) j_98);
      l_98 = (ATerm) ATgetNext((ATermList) j_98);
      t = not_null(k_98);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  s_98 = t;
  r_98 :
  if(match_cons(s_98, sym__2))
    {
      t_98 = ATgetArgument(s_98, 0);
      u_98 = ATgetArgument(s_98, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_98), not_null(u_98));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm q_129 (ATerm))
{
  ATerm a_99 = NULL;
  ATerm c_99 = NULL;
  a_99 = t;
  {
    ATerm d_99 = NULL;
    t = term_h_17;
    {
      t = q_129(t);
      {
        d_99 = t;
        if(((c_99 != NULL) && (c_99 != d_99)))
          _fail(d_99);
        else
          c_99 = d_99;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_99), not_null(a_99));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,b_100 = NULL;
  ATerm u_100 (ATerm t)
  {
    ATerm n_100 = NULL,o_100 = NULL;
    ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL;
    t = not_null(x_99);
    {
      ATerm m_3 (ATerm t)
      {
        t = term_q_20;
        return(t);
      }
      t = rewrite_1(t, m_3);
      {
        p_100 = t;
        p_99 :
        if(match_cons(p_100, sym_Defined_3))
          {
            q_100 = ATgetArgument(p_100, 0);
            r_100 = ATgetArgument(p_100, 1);
            s_100 = ATgetArgument(p_100, 2);
            q_99 :
            if(match_string(q_100, "c_0"))
              {
                if(((n_100 != NULL) && (n_100 != r_100)))
                  _fail(r_100);
                else
                  n_100 = r_100;
                if(((o_100 != NULL) && (o_100 != s_100)))
                  _fail(s_100);
                else
                  o_100 = s_100;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_100)), not_null(n_100));
    return(t);
  }
  x_99 = t;
  r_99 :
  if(match_cons(x_99, sym__2))
    {
      y_99 = ATgetArgument(x_99, 0);
      b_100 = ATgetArgument(x_99, 1);
      s_99 :
      if(match_cons(b_100, sym__2))
        {
          v_99 = ATgetArgument(b_100, 0);
          w_99 = ATgetArgument(b_100, 1);
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_100 = NULL;
                ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL;
                t = not_null(x_99);
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = term_q_20;
                    return(t);
                  }
                  t = rewrite_1(t, n_3);
                  {
                    h_100 = t;
                    m_99 :
                    if(match_cons(h_100, sym_Defined_2))
                      {
                        i_100 = ATgetArgument(h_100, 0);
                        j_100 = ATgetArgument(h_100, 1);
                        n_99 :
                        if(match_string(i_100, "h_0"))
                          {
                            if(((g_100 != NULL) && (g_100 != j_100)))
                              _fail(j_100);
                            else
                              g_100 = j_100;
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
                t = not_null(g_100);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
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
ATerm RegisterSDefT_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
  f_101 = t;
  e_101 :
  if(match_cons(f_101, sym_SDefT_4))
    {
      g_101 = ATgetArgument(f_101, 0);
      h_101 = ATgetArgument(f_101, 1);
      i_101 = ATgetArgument(f_101, 2);
      j_101 = ATgetArgument(f_101, 3);
      {
        ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
        ATerm x_20;
        x_20 = t;
        {
          ATerm t_101 = NULL;
          t = not_null(h_101);
          {
            ATerm u_101 = NULL;
            t = length_0(t);
            {
              t_101 = t;
              {
                if(((p_101 != NULL) && (p_101 != t_101)))
                  _fail(t_101);
                else
                  p_101 = t_101;
                {
                  t = not_null(i_101);
                  {
                    ATerm v_101 = NULL,x_101 = NULL;
                    t = length_0(t);
                    {
                      u_101 = t;
                      {
                        if(((q_101 != NULL) && (q_101 != u_101)))
                          _fail(u_101);
                        else
                          q_101 = u_101;
                        {
                          ATerm b_21;
                          b_21 = t;
                          {
                            ATerm w_101 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_101), (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101)));
                            {
                              ATerm c_21 = t;
                              int d_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Definitions_0(t);
                                  ;
                                  LocalPopChoice(d_21);
                                }
                              else
                                {
                                  t = c_21;
                                  t = (ATerm) ATempty;
                                }
                              {
                                w_101 = t;
                                if(((v_101 != NULL) && (v_101 != w_101)))
                                  _fail(w_101);
                                else
                                  v_101 = w_101;
                              }
                            }
                          }
                          t = b_21;
                          {
                            ATerm y_101 = NULL,a_102 = NULL;
                            t = (ATerm) ATinsert(CheckATermList(not_null(v_101)), not_null(f_101));
                            {
                              x_101 = t;
                              {
                                if(((r_101 != NULL) && (r_101 != x_101)))
                                  _fail(x_101);
                                else
                                  r_101 = x_101;
                                {
                                  ATerm z_101 = NULL;
                                  t = not_null(g_101);
                                  {
                                    ATerm e_21 = t;
                                    int q_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Arities_0(t);
                                        ;
                                        LocalPopChoice(q_21);
                                      }
                                    else
                                      {
                                        t = e_21;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      z_101 = t;
                                      if(((y_101 != NULL) && (y_101 != z_101)))
                                        _fail(z_101);
                                      else
                                        y_101 = z_101;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101))), not_null(y_101));
                                    {
                                      t = union_0(t);
                                      {
                                        a_102 = t;
                                        {
                                          if(((s_101 != NULL) && (s_101 != a_102)))
                                            _fail(a_102);
                                          else
                                            s_101 = a_102;
                                          {
                                            ATerm r_21;
                                            r_21 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_101), (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(q_101))), (ATerm) ATmakeAppl(sym_Defined_2, term_s_21, not_null(r_101)));
                                              {
                                                ATerm o_3 (ATerm t)
                                                {
                                                  t = term_q_20;
                                                  return(t);
                                                }
                                                t = assert_1(t, o_3);
                                              }
                                            }
                                            t = r_21;
                                            {
                                              ATerm t_21;
                                              t_21 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_101), (ATerm) ATmakeAppl(sym_Defined_2, term_u_21, not_null(s_101)));
                                                {
                                                  ATerm p_3 (ATerm t)
                                                  {
                                                    t = term_p_20;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, p_3);
                                                }
                                              }
                                              t = t_21;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  t = map_1(t, RegisterSDefT_0);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = term_c_22;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = foldr_3(t, q_3, add_0, r_3);
  return(t);
}
ATerm DefinitionName_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL;
  s_102 = t;
  r_102 :
  if(match_cons(s_102, sym_SDefT_4))
    {
      t_102 = ATgetArgument(s_102, 0);
      u_102 = ATgetArgument(s_102, 1);
      v_102 = ATgetArgument(s_102, 2);
      w_102 = ATgetArgument(s_102, 3);
      {
        ATerm d_103 = NULL,f_103 = NULL;
        ATerm d_22;
        d_22 = t;
        {
          ATerm e_103 = NULL;
          t = not_null(u_102);
          {
            t = length_0(t);
            {
              e_103 = t;
              if(((d_103 != NULL) && (d_103 != e_103)))
                _fail(e_103);
              else
                d_103 = e_103;
            }
          }
        }
        t = d_22;
        {
          ATerm g_103 = NULL;
          t = not_null(v_102);
          {
            t = length_0(t);
            {
              g_103 = t;
              if(((f_103 != NULL) && (f_103 != g_103)))
                _fail(g_103);
              else
                f_103 = g_103;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(t_102), (ATerm) ATmakeAppl(sym__2, not_null(d_103), not_null(f_103))));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  l_103 :
  if(match_cons(m_103, sym__2))
    {
      n_103 = ATgetArgument(m_103, 0);
      o_103 = ATgetArgument(m_103, 1);
      if(((n_103 != NULL) && (n_103 != o_103)))
        _fail(o_103);
      else
        n_103 = o_103;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_114 (ATerm), ATerm q_114 (ATerm))
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL;
  u_103 = t;
  t_103 :
  if(((ATgetType(u_103) == AT_LIST) && !(ATisEmpty(u_103))))
    {
      v_103 = ATgetFirst((ATermList) u_103);
      w_103 = (ATerm) ATgetNext((ATermList) u_103);
      {
        t = q_114(t);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm z_103 = NULL;
            z_103 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_103), not_null(z_103));
              t = p_114(t);
            }
            return(t);
          }
          t = fetch_1(t, s_3);
        }
        t = not_null(w_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm l_114 (ATerm))
{
  ATerm f_104 = NULL,i_104 = NULL,j_104 = NULL;
  f_104 = t;
  e_104 :
  if(match_cons(f_104, sym__2))
    {
      i_104 = ATgetArgument(f_104, 0);
      j_104 = ATgetArgument(f_104, 1);
      {
        t = not_null(i_104);
        {
          ATerm n_104 (ATerm t)
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_104);
                ;
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                {
                  ATerm q_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_3 (ATerm t)
                      {
                        t = not_null(j_104);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_114, t_3);
                      t = n_104(t);
                      ;
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = q_22;
                      t = Cons_2(t, _id, n_104);
                    }
                }
              }
            return(t);
          }
          t = n_104(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm w_116 (ATerm))
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_116(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm s_104 = NULL,t_104 = NULL,w_104 = NULL;
        s_104 = t;
        r_104 :
        if(((ATgetType(s_104) == AT_LIST) && !(ATisEmpty(s_104))))
          {
            t_104 = ATgetFirst((ATermList) s_104);
            w_104 = (ATerm) ATgetNext((ATermList) s_104);
            {
              ATerm z_104 = NULL,b_105 = NULL;
              ATerm v_22;
              v_22 = t;
              {
                ATerm a_105 = NULL;
                t = not_null(t_104);
                {
                  t = w_116(t);
                  {
                    a_105 = t;
                    if(((z_104 != NULL) && (z_104 != a_105)))
                      _fail(a_105);
                    else
                      z_104 = a_105;
                  }
                }
              }
              t = v_22;
              {
                ATerm c_105 = NULL;
                t = not_null(w_104);
                {
                  t = foldr_3(t, u_116, v_116, w_116);
                  {
                    c_105 = t;
                    if(((b_105 != NULL) && (b_105 != c_105)))
                      _fail(c_105);
                    else
                      b_105 = c_105;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(b_105));
                  t = v_116(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_3(t, u_3, union_0, DefinitionName_0);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm i_105 = NULL,k_105 = NULL;
  ATerm w_22;
  w_22 = t;
  {
    ATerm j_105 = NULL;
    t = definition_names_0(t);
    {
      j_105 = t;
      if(((i_105 != NULL) && (i_105 != j_105)))
        _fail(j_105);
      else
        i_105 = j_105;
    }
  }
  t = w_22;
  {
    ATerm l_105 = NULL;
    t = sort_defs_0(t);
    {
      l_105 = t;
      if(((k_105 != NULL) && (k_105 != l_105)))
        _fail(l_105);
      else
        k_105 = l_105;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(i_105), not_null(k_105), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm t_105 = NULL,v_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym_Strategies_1))
    {
      v_105 = ATgetArgument(t_105, 0);
      {
        ATerm y_105 = NULL,a_106 = NULL;
        ATerm z_105 = NULL;
        t = SSLgetAnnotations(not_null(t_105));
        {
          z_105 = t;
          if(((y_105 != NULL) && (y_105 != z_105)))
            _fail(z_105);
          else
            y_105 = z_105;
        }
        {
          t = not_null(v_105);
          {
            ATerm c_106 = NULL;
            t = y_84(t);
            {
              a_106 = t;
              {
                ATerm d_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_106)), not_null(y_105));
                {
                  d_106 = t;
                  if(((c_106 != NULL) && (c_106 != d_106)))
                    _fail(d_106);
                  else
                    c_106 = d_106;
                }
                t = not_null(c_106);
              }
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
ATerm Cons_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL;
  q_106 = t;
  n_106 :
  if(((ATgetType(q_106) == AT_LIST) && !(ATisEmpty(q_106))))
    {
      r_106 = ATgetFirst((ATermList) q_106);
      s_106 = (ATerm) ATgetNext((ATermList) q_106);
      {
        ATerm w_106 = NULL,y_106 = NULL;
        ATerm x_106 = NULL;
        t = SSLgetAnnotations(not_null(q_106));
        {
          x_106 = t;
          if(((w_106 != NULL) && (w_106 != x_106)))
            _fail(x_106);
          else
            w_106 = x_106;
        }
        {
          t = not_null(r_106);
          {
            ATerm a_107 = NULL;
            t = u_84(t);
            {
              y_106 = t;
              {
                t = not_null(s_106);
                {
                  ATerm c_107 = NULL;
                  t = v_84(t);
                  {
                    a_107 = t;
                    {
                      ATerm d_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_107)), not_null(y_106)), not_null(w_106));
                      {
                        d_107 = t;
                        if(((c_107 != NULL) && (c_107 != d_107)))
                          _fail(d_107);
                        else
                          c_107 = d_107;
                      }
                      t = not_null(c_107);
                    }
                  }
                }
              }
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
ATerm Specification_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm x_107 = NULL,z_107 = NULL;
  x_107 = t;
  v_107 :
  if(match_cons(x_107, sym_Specification_1))
    {
      z_107 = ATgetArgument(x_107, 0);
      {
        ATerm c_108 = NULL,e_108 = NULL;
        ATerm d_108 = NULL;
        t = SSLgetAnnotations(not_null(x_107));
        {
          d_108 = t;
          if(((c_108 != NULL) && (c_108 != d_108)))
            _fail(d_108);
          else
            c_108 = d_108;
        }
        {
          t = not_null(z_107);
          {
            ATerm g_108 = NULL;
            t = d_85(t);
            {
              e_108 = t;
              {
                ATerm h_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(e_108)), not_null(c_108));
                {
                  h_108 = t;
                  if(((g_108 != NULL) && (g_108 != h_108)))
                    _fail(h_108);
                  else
                    g_108 = h_108;
                }
                t = not_null(g_108);
              }
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
ATerm _2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
  s_108 = t;
  r_108 :
  if(match_cons(s_108, sym__2))
    {
      t_108 = ATgetArgument(s_108, 0);
      u_108 = ATgetArgument(s_108, 1);
      {
        ATerm z_108 = NULL,b_109 = NULL;
        ATerm a_109 = NULL;
        t = SSLgetAnnotations(not_null(s_108));
        {
          a_109 = t;
          if(((z_108 != NULL) && (z_108 != a_109)))
            _fail(a_109);
          else
            z_108 = a_109;
        }
        {
          t = not_null(t_108);
          {
            ATerm d_109 = NULL;
            t = l_83(t);
            {
              b_109 = t;
              {
                t = not_null(u_108);
                {
                  ATerm f_109 = NULL;
                  t = m_83(t);
                  {
                    d_109 = t;
                    {
                      ATerm g_109 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_109), not_null(d_109)), not_null(z_108));
                      {
                        g_109 = t;
                        if(((f_109 != NULL) && (f_109 != g_109)))
                          _fail(g_109);
                        else
                          f_109 = g_109;
                      }
                      t = not_null(f_109);
                    }
                  }
                }
              }
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
ATerm default_usage_0 (ATerm t)
{
  ATerm y_22;
  y_22 = t;
  {
    ATerm n_109 = NULL;
    ATerm o_109 = NULL;
    t = term_h_17;
    {
      t = whoami_0(t);
      {
        o_109 = t;
        if(((n_109 != NULL) && (n_109 != o_109)))
          _fail(o_109);
        else
          n_109 = o_109;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_23), not_null(n_109)), term_d_23));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_22;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
  s_109 = t;
  r_109 :
  if(match_cons(s_109, sym__2))
    {
      t_109 = ATgetArgument(s_109, 0);
      u_109 = ATgetArgument(s_109, 1);
      {
        ATerm f_23;
        f_23 = t;
        t = SSL_printnl(not_null(t_109), not_null(u_109));
        t = f_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_109 = NULL;
  z_109 = t;
  t = SSL_implode_string(not_null(z_109));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
        e_110 = t;
        d_110 :
        if(((ATgetType(e_110) == AT_LIST) && !(ATisEmpty(e_110))))
          {
            f_110 = ATgetFirst((ATermList) e_110);
            g_110 = (ATerm) ATgetNext((ATermList) e_110);
            {
              t = not_null(f_110);
              {
                ATerm v_3 (ATerm t)
                {
                  t = not_null(g_110);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_3);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm q_110 = NULL;
  ATerm s_110 = NULL;
  q_110 = t;
  {
    ATerm t_110 = NULL;
    ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
    t = not_null(q_110);
    {
      t_110 = t;
      {
        t = SSL_explode_term(not_null(t_110));
        {
          v_110 = t;
          o_110 :
          if(match_cons(v_110, sym__2))
            {
              w_110 = ATgetArgument(v_110, 0);
              x_110 = ATgetArgument(v_110, 1);
              p_110 :
              if(match_string(w_110, ""))
                {
                  if(((s_110 != NULL) && (s_110 != x_110)))
                    _fail(x_110);
                  else
                    s_110 = x_110;
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
    }
    {
      t = not_null(s_110);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm b_111 (ATerm t)
  {
    ATerm j_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_111);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = j_23;
        {
          t = Nil_0(t);
          t = z_99(t);
        }
      }
    return(t);
  }
  t = b_111(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym__2))
    {
      f_111 = ATgetArgument(e_111, 0);
      g_111 = ATgetArgument(e_111, 1);
      {
        t = not_null(f_111);
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(g_111);
            return(t);
          }
          t = at_end_1(t, w_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_111 = NULL;
  q_111 = t;
  t = SSL_explode_string(not_null(q_111));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_3);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = v_23;
            {
              ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
              z_111 = t;
              y_111 :
              if(match_cons(z_111, sym_Path_1))
                {
                  a_112 = ATgetArgument(z_111, 0);
                  t = not_null(a_112);
                }
              else
                {
                  if(match_cons(z_111, sym_Var_1))
                    {
                      a_112 = ATgetArgument(z_111, 0);
                      {
                        t = not_null(a_112);
                        {
                          ATerm z_23 = t;
                          int a_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_24);
                            }
                          else
                            {
                              t = z_23;
                              {
                                ATerm y_3 (ATerm t)
                                {
                                  t = term_b_24;
                                  return(t);
                                }
                                t = debug_1(t, y_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_111, sym_Prefix_2))
                        {
                          a_112 = ATgetArgument(z_111, 0);
                          b_112 = ATgetArgument(z_111, 1);
                          {
                            ATerm g_112 = NULL,i_112 = NULL;
                            ATerm g_24;
                            g_24 = t;
                            {
                              ATerm h_112 = NULL;
                              t = not_null(a_112);
                              {
                                t = eval_config_0(t);
                                {
                                  h_112 = t;
                                  if(((g_112 != NULL) && (g_112 != h_112)))
                                    _fail(h_112);
                                  else
                                    g_112 = h_112;
                                }
                              }
                            }
                            t = g_24;
                            {
                              ATerm j_112 = NULL;
                              t = not_null(b_112);
                              {
                                t = eval_config_0(t);
                                {
                                  j_112 = t;
                                  if(((i_112 != NULL) && (i_112 != j_112)))
                                    _fail(j_112);
                                  else
                                    i_112 = j_112;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_112), not_null(i_112));
                                t = conc_strings_0(t);
                              }
                            }
                          }
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
ATerm get_config_0 (ATerm t)
{
  ATerm r_112 = NULL;
  r_112 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_24, not_null(r_112));
    {
      t = table_get_0(t);
      {
        ATerm z_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_24;
            i_24 = t;
            {
              ATerm t_112 = NULL;
              ATerm u_112 = NULL;
              u_112 = t;
              if(((t_112 != NULL) && (t_112 != u_112)))
                _fail(u_112);
              else
                t_112 = u_112;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_24, not_null(r_112), not_null(t_112));
                t = table_put_0(t);
              }
            }
            t = i_24;
          }
          return(t);
        }
        t = try_1(t, z_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_122 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm j_24;
    j_24 = t;
    {
      ATerm y_112 = NULL;
      ATerm z_112 = NULL;
      t = term_k_24;
      {
        t = get_config_0(t);
        {
          z_112 = t;
          if(((y_112 != NULL) && (y_112 != z_112)))
            _fail(z_112);
          else
            y_112 = z_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_112), term_l_24);
        t = geq_0(t);
      }
    }
    t = j_24;
    t = z_122(t);
    return(t);
  }
  t = try_1(t, a_4);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL;
  f_113 = t;
  d_113 :
  if(match_cons(f_113, sym__2))
    {
      g_113 = ATgetArgument(f_113, 0);
      h_113 = ATgetArgument(f_113, 1);
      e_113 :
      if(match_cons(h_113, sym_Stream_1))
        {
          i_113 = ATgetArgument(h_113, 0);
          {
            ATerm n_113 = NULL;
            t = SSL_fputc(not_null(g_113), not_null(i_113));
            {
              ATerm o_113 = NULL;
              o_113 = t;
              if(((n_113 != NULL) && (n_113 != o_113)))
                _fail(o_113);
              else
                n_113 = o_113;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_113));
            }
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL,e_114 = NULL;
  v_113 = t;
  t_113 :
  if(match_cons(v_113, sym__2))
    {
      w_113 = ATgetArgument(v_113, 0);
      e_114 = ATgetArgument(v_113, 1);
      u_113 :
      if(match_cons(w_113, sym_Stream_1))
        {
          x_113 = ATgetArgument(w_113, 0);
          {
            ATerm j_114 = NULL;
            t = SSL_write_term_to_stream_text(not_null(x_113), not_null(e_114));
            {
              ATerm k_114 = NULL;
              k_114 = t;
              if(((j_114 != NULL) && (j_114 != k_114)))
                _fail(k_114);
              else
                j_114 = k_114;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_114));
            }
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm s_114 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm t_114 = NULL;
      t_114 = t;
      if(((s_114 != NULL) && (s_114 != t_114)))
        _fail(t_114);
      else
        s_114 = t_114;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_24, not_null(s_114));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, b_4);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL;
  e_115 = t;
  c_115 :
  if(match_cons(e_115, sym__2))
    {
      f_115 = ATgetArgument(e_115, 0);
      h_115 = ATgetArgument(e_115, 1);
      d_115 :
      if(match_cons(f_115, sym_Stream_1))
        {
          g_115 = ATgetArgument(f_115, 0);
          {
            ATerm k_115 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_115), not_null(h_115));
            {
              ATerm l_115 = NULL;
              l_115 = t;
              if(((k_115 != NULL) && (k_115 != l_115)))
                _fail(l_115);
              else
                k_115 = l_115;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_115));
            }
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
ATerm WriteToFile_1 (ATerm t, ATerm v_121 (ATerm))
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  s_115 = t;
  r_115 :
  if(match_cons(s_115, sym__2))
    {
      t_115 = ATgetArgument(s_115, 0);
      u_115 = ATgetArgument(s_115, 1);
      {
        ATerm x_115 = NULL,z_115 = NULL;
        t = not_null(t_115);
        {
          ATerm y_115 = NULL;
          y_115 = t;
          if(((x_115 != NULL) && (x_115 != y_115)))
            _fail(y_115);
          else
            x_115 = y_115;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_115), term_n_24);
            {
              t = open_stream_0(t);
              {
                ATerm a_116 = NULL;
                a_116 = t;
                if(((z_115 != NULL) && (z_115 != a_116)))
                  _fail(a_116);
                else
                  z_115 = a_116;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_115), not_null(u_115));
                  {
                    t = v_121(t);
                    {
                      t = fclose_0(t);
                      t = not_null(u_115);
                    }
                  }
                }
              }
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_116 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_4 (ATerm t)
          {
            ATerm j_116 = NULL,k_116 = NULL;
            j_116 = t;
            f_116 :
            if(match_cons(j_116, sym_Output_1))
              {
                k_116 = ATgetArgument(j_116, 0);
                if(((i_116 != NULL) && (i_116 != k_116)))
                  _fail(k_116);
                else
                  i_116 = k_116;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_4);
          ;
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm l_116 = NULL;
            t = term_y_24;
            {
              l_116 = t;
              if(((i_116 != NULL) && (i_116 != l_116)))
                _fail(l_116);
              else
                i_116 = l_116;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_4, _id);
  }
  t = s_24;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(i_116);
        return(t);
      }
      t = split_2(t, h_4, _id);
      return(t);
    }
    t = _2(t, _id, g_4);
    {
      ATerm a_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_4 (ATerm t)
          {
            ATerm j_4 (ATerm t)
            {
              ATerm m_116 = NULL;
              m_116 = t;
              h_116 :
              if(!(match_cons(m_116, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_4);
            return(t);
          }
          t = _2(t, i_4, WriteToBinaryFile_0);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = a_25;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm x_124 (ATerm))
{
  ATerm x_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL;
  ATerm e_25;
  e_25 = t;
  t = dtime_0(t);
  t = e_25;
  {
    t = x_124(t);
    {
      ATerm f_25;
      f_25 = t;
      {
        ATerm y_116 = NULL;
        t = dtime_0(t);
        {
          y_116 = t;
          if(((x_116 != NULL) && (x_116 != y_116)))
            _fail(y_116);
          else
            x_116 = y_116;
        }
      }
      t = f_25;
      {
        z_116 = t;
        r_116 :
        if(match_cons(z_116, sym__2))
          {
            a_117 = ATgetArgument(z_116, 0);
            b_117 = ATgetArgument(z_116, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_117)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_116))), not_null(b_117));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL;
  ATerm s_117 (ATerm t)
  {
    t = SSL_fclose(not_null(m_117));
    return(t);
  }
  m_117 = t;
  k_117 :
  if(match_cons(m_117, sym_Stream_1))
    {
      l_117 = ATgetArgument(m_117, 0);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(l_117));
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL;
  v_117 = t;
  u_117 :
  if(match_cons(v_117, sym_Stream_1))
    {
      w_117 = ATgetArgument(v_117, 0);
      t = SSL_read_term_from_stream(not_null(w_117));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_121 (ATerm))
{
  ATerm i_25;
  i_25 = t;
  {
    ATerm b_118 = NULL,d_118 = NULL;
    ATerm j_25;
    j_25 = t;
    {
      ATerm c_118 = NULL;
      t = h_121(t);
      {
        c_118 = t;
        if(((b_118 != NULL) && (b_118 != c_118)))
          _fail(c_118);
        else
          b_118 = c_118;
      }
    }
    t = j_25;
    {
      ATerm e_118 = NULL;
      e_118 = t;
      if(((d_118 != NULL) && (d_118 != e_118)))
        _fail(e_118);
      else
        d_118 = e_118;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_118)), not_null(b_118)));
        t = printnl_0(t);
      }
    }
  }
  t = i_25;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL;
  k_118 = t;
  j_118 :
  if(match_cons(k_118, sym__2))
    {
      l_118 = ATgetArgument(k_118, 0);
      m_118 = ATgetArgument(k_118, 1);
      {
        ATerm p_118 = NULL;
        t = SSL_fopen(not_null(l_118), not_null(m_118));
        {
          ATerm q_118 = NULL;
          q_118 = t;
          if(((p_118 != NULL) && (p_118 != q_118)))
            _fail(q_118);
          else
            p_118 = q_118;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_118));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_118 = NULL;
  u_118 = t;
  t = SSL_is_string(not_null(u_118));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm y_118 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm z_118 = NULL;
    z_118 = t;
    if(((y_118 != NULL) && (y_118 != z_118)))
      _fail(z_118);
    else
      y_118 = z_118;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_118));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm c_119 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm d_119 = NULL;
    d_119 = t;
    if(((c_119 != NULL) && (c_119 != d_119)))
      _fail(d_119);
    else
      c_119 = d_119;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_119));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm g_119 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm h_119 = NULL;
    h_119 = t;
    if(((g_119 != NULL) && (g_119 != h_119)))
      _fail(h_119);
    else
      g_119 = h_119;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_119));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm n_119 = NULL;
  n_119 = t;
  m_119 :
  if(match_cons(n_119, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(n_119, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(n_119, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_119 = NULL;
  ATerm z_119 = NULL,a_120 = NULL;
  x_119 = t;
  {
    ATerm b_120 = NULL;
    ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL;
    t = not_null(x_119);
    {
      b_120 = t;
      {
        t = SSL_explode_term(not_null(b_120));
        {
          d_120 = t;
          u_119 :
          if(match_cons(d_120, sym__2))
            {
              e_120 = ATgetArgument(d_120, 0);
              f_120 = ATgetArgument(d_120, 1);
              v_119 :
              if(match_string(e_120, ""))
                {
                  w_119 :
                  if(((ATgetType(f_120) == AT_LIST) && !(ATisEmpty(f_120))))
                    {
                      g_120 = ATgetFirst((ATermList) f_120);
                      h_120 = (ATerm) ATgetNext((ATermList) f_120);
                      {
                        if(((a_120 != NULL) && (a_120 != g_120)))
                          _fail(g_120);
                        else
                          a_120 = g_120;
                        if(((z_119 != NULL) && (z_119 != h_120)))
                          _fail(h_120);
                        else
                          z_119 = h_120;
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
      }
    }
    t = not_null(a_120);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
  p_120 = t;
  o_120 :
  if(match_cons(p_120, sym__2))
    {
      q_120 = ATgetArgument(p_120, 0);
      r_120 = ATgetArgument(p_120, 1);
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm s_120 = NULL,t_120 = NULL;
                    s_120 = t;
                    n_120 :
                    if(match_cons(s_120, sym_Path_1))
                      {
                        t_120 = ATgetArgument(s_120, 0);
                        t = not_null(t_120);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, k_4, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
                  }
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_121 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_120 = NULL;
      ATerm a_121 = NULL;
      a_121 = t;
      if(((z_120 != NULL) && (z_120 != a_121)))
        _fail(a_121);
      else
        z_120 = a_121;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_120), term_s_25);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm l_4 (ATerm t)
        {
          t = term_u_25;
          return(t);
        }
        t = debug_1(t, l_4);
        _fail(t);
      }
    }
  {
    ATerm v_25;
    v_25 = t;
    {
      ATerm c_121 = NULL;
      t = read_from_stream_0(t);
      {
        c_121 = t;
        if(((b_121 != NULL) && (b_121 != c_121)))
          _fail(c_121);
        else
          b_121 = c_121;
      }
    }
    t = v_25;
    {
      t = fclose_0(t);
      t = not_null(b_121);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_106 (ATerm), ATerm p_106 (ATerm))
{
  ATerm i_121 = NULL,k_121 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm j_121 = NULL;
    t = o_106(t);
    {
      j_121 = t;
      if(((i_121 != NULL) && (i_121 != j_121)))
        _fail(j_121);
      else
        i_121 = j_121;
    }
  }
  t = x_25;
  {
    ATerm l_121 = NULL;
    t = p_106(t);
    {
      l_121 = t;
      if(((k_121 != NULL) && (k_121 != l_121)))
        _fail(l_121);
      else
        k_121 = l_121;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_121), not_null(k_121));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_121 = NULL;
  ATerm y_25;
  y_25 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 (ATerm t)
        {
          ATerm s_121 = NULL,t_121 = NULL;
          s_121 = t;
          p_121 :
          if(match_cons(s_121, sym_Input_1))
            {
              t_121 = ATgetArgument(s_121, 0);
              if(((r_121 != NULL) && (r_121 != t_121)))
                _fail(t_121);
              else
                r_121 = t_121;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_4);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
          ATerm u_121 = NULL;
          t = term_l_26;
          {
            u_121 = t;
            if(((r_121 != NULL) && (r_121 != u_121)))
              _fail(u_121);
            else
              r_121 = u_121;
          }
        }
      }
  }
  t = y_25;
  {
    ATerm n_4 (ATerm t)
    {
      t = not_null(r_121);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_4);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm a_122 = NULL;
    a_122 = t;
    y_121 :
    if(!(match_string(a_122, "-k")))
      {
        if(!(match_string(a_122, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm m_26;
    m_26 = t;
    {
      ATerm b_122 = NULL;
      ATerm c_122 = NULL;
      t = string_to_int_0(t);
      {
        c_122 = t;
        if(((b_122 != NULL) && (b_122 != c_122)))
          _fail(c_122);
        else
          b_122 = c_122;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_26, not_null(b_122));
        t = set_config_0(t);
      }
    }
    t = m_26;
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3(t, o_4, p_4, q_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_122 = NULL;
  f_122 = t;
  t = SSL_string_to_int(not_null(f_122));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        ATerm n_122 = NULL;
        n_122 = t;
        i_122 :
        if(!(match_string(n_122, "-S")))
          {
            if(!(match_string(n_122, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_b_27;
        t = set_config_0(t);
        t = term_g_27;
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = term_h_27;
        return(t);
      }
      t = Option_3(t, r_4, s_4, t_4);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = p_26;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              ATerm o_122 = NULL;
              o_122 = t;
              j_122 :
              if(!(match_string(o_122, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_4 (ATerm t)
            {
              ATerm r_122 = NULL;
              ATerm q_27;
              q_27 = t;
              {
                ATerm p_122 = NULL;
                ATerm q_122 = NULL;
                t = string_to_int_0(t);
                {
                  q_122 = t;
                  if(((p_122 != NULL) && (p_122 != q_122)))
                    _fail(q_122);
                  else
                    p_122 = q_122;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_24, not_null(p_122));
                  t = set_config_0(t);
                }
              }
              t = q_27;
              {
                ATerm s_122 = NULL;
                s_122 = t;
                if(((r_122 != NULL) && (r_122 != s_122)))
                  _fail(s_122);
                else
                  r_122 = s_122;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_122));
              }
              return(t);
            }
            ATerm w_4 (ATerm t)
            {
              t = term_v_27;
              return(t);
            }
            t = ArgOption_3(t, u_4, v_4, w_4);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm t_122 = NULL;
                t_122 = t;
                m_122 :
                if(!(match_string(t_122, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_4 (ATerm t)
              {
                t = term_i_28;
                t = set_config_0(t);
                t = term_j_28;
                return(t);
              }
              ATerm z_4 (ATerm t)
              {
                t = term_k_28;
                return(t);
              }
              t = Option_3(t, x_4, y_4, z_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_123 = NULL;
    b_123 = t;
    w_122 :
    if(!(match_string(b_123, "-o")))
      {
        if(!(match_string(b_123, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm e_123 = NULL;
    ATerm n_28;
    n_28 = t;
    {
      ATerm c_123 = NULL;
      ATerm d_123 = NULL;
      d_123 = t;
      if(((c_123 != NULL) && (c_123 != d_123)))
        _fail(d_123);
      else
        c_123 = d_123;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_28, not_null(c_123));
        t = set_config_0(t);
      }
    }
    t = n_28;
    {
      ATerm f_123 = NULL;
      f_123 = t;
      if(((e_123 != NULL) && (e_123 != f_123)))
        _fail(f_123);
      else
        e_123 = f_123;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_123));
    }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = ArgOption_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm j_123 = NULL;
          j_123 = t;
          i_123 :
          if(!(match_string(j_123, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_5 (ATerm t)
        {
          t = term_t_28;
          t = set_config_0(t);
          t = term_u_28;
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = term_v_28;
          return(t);
        }
        t = Option_3(t, d_5, e_5, i_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL;
  p_123 = t;
  n_123 :
  if(match_string(p_123, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(p_123) == AT_LIST) && !(ATisEmpty(p_123))))
        {
          q_123 = ATgetFirst((ATermList) p_123);
          r_123 = (ATerm) ATgetNext((ATermList) p_123);
          o_123 :
          if(((ATgetType(r_123) == AT_LIST) && !(ATisEmpty(r_123))))
            {
              s_123 = ATgetFirst((ATermList) r_123);
              t_123 = (ATerm) ATgetNext((ATermList) r_123);
              {
                ATerm x_123 = NULL;
                ATerm w_28;
                w_28 = t;
                {
                  t = not_null(q_123);
                  t = k_0(t);
                }
                t = w_28;
                {
                  ATerm y_123 = NULL;
                  t = not_null(s_123);
                  {
                    t = m_0(t);
                    {
                      y_123 = t;
                      if(((x_123 != NULL) && (x_123 != y_123)))
                        _fail(y_123);
                      else
                        x_123 = y_123;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_123)), not_null(x_123));
                }
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
ATerm input_option_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm f_124 = NULL;
    f_124 = t;
    c_124 :
    if(!(match_string(f_124, "-i")))
      {
        if(!(match_string(f_124, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    ATerm i_124 = NULL;
    ATerm x_28;
    x_28 = t;
    {
      ATerm g_124 = NULL;
      ATerm h_124 = NULL;
      h_124 = t;
      if(((g_124 != NULL) && (g_124 != h_124)))
        _fail(h_124);
      else
        g_124 = h_124;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_29, not_null(g_124));
        t = set_config_0(t);
      }
    }
    t = x_28;
    {
      ATerm j_124 = NULL;
      j_124 = t;
      if(((i_124 != NULL) && (i_124 != j_124)))
        _fail(j_124);
      else
        i_124 = j_124;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_124));
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_e_29;
    return(t);
  }
  t = ArgOption_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm n_124 = NULL;
  t = report_run_time_0(t);
  {
    ATerm o_124 = NULL;
    t = term_h_17;
    {
      t = whoami_0(t);
      {
        o_124 = t;
        if(((n_124 != NULL) && (n_124 != o_124)))
          _fail(o_124);
        else
          n_124 = o_124;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, term_q_29), not_null(n_124)));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_t_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_124 = NULL;
  r_124 = t;
  t = SSL_TicksToSeconds(not_null(r_124));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_124 = NULL,y_124 = NULL,z_124 = NULL;
  w_124 = t;
  v_124 :
  if(match_cons(w_124, sym__2))
    {
      y_124 = ATgetArgument(w_124, 0);
      z_124 = ATgetArgument(w_124, 1);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_124), not_null(z_124));
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = SSL_addr(not_null(y_124), not_null(z_124));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_116 (ATerm), ATerm t_116 (ATerm))
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_116(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL;
        q_125 = t;
        l_125 :
        if(((ATgetType(q_125) == AT_LIST) && !(ATisEmpty(q_125))))
          {
            r_125 = ATgetFirst((ATermList) q_125);
            s_125 = (ATerm) ATgetNext((ATermList) q_125);
            {
              ATerm w_125 = NULL;
              ATerm b_126 = NULL;
              t = not_null(s_125);
              {
                t = foldr_2(t, s_116, t_116);
                {
                  b_126 = t;
                  if(((w_125 != NULL) && (w_125 != b_126)))
                    _fail(b_126);
                  else
                    w_125 = b_126;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_125), not_null(w_125));
                t = t_116(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm w_114 (ATerm), ATerm x_114 (ATerm))
{
  ATerm i_126 = NULL;
  ATerm k_126 = NULL;
  i_126 = t;
  {
    ATerm l_126 = NULL;
    ATerm n_126 = NULL,o_126 = NULL,p_126 = NULL;
    t = not_null(i_126);
    {
      l_126 = t;
      {
        t = SSL_explode_term(not_null(l_126));
        {
          n_126 = t;
          h_126 :
          if(match_cons(n_126, sym__2))
            {
              o_126 = ATgetArgument(n_126, 0);
              p_126 = ATgetArgument(n_126, 1);
              if(((k_126 != NULL) && (k_126 != p_126)))
                _fail(p_126);
              else
                k_126 = p_126;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_126);
      t = foldr_2(t, w_114, x_114);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm m_5 (ATerm t)
    {
      t = term_c_22;
      return(t);
    }
    t = crush_2(t, m_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL;
  w_126 = t;
  u_126 :
  if(match_cons(w_126, sym__2))
    {
      x_126 = ATgetArgument(w_126, 0);
      y_126 = ATgetArgument(w_126, 1);
      {
        ATerm y_29;
        y_29 = t;
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_126), not_null(y_126));
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = SSL_gtr(not_null(x_126), not_null(y_126));
            }
        }
        t = y_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm e_127 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL;
      f_127 = t;
      d_127 :
      if(match_cons(f_127, sym__2))
        {
          g_127 = ATgetArgument(f_127, 0);
          h_127 = ATgetArgument(f_127, 1);
          {
            if(((e_127 != NULL) && (e_127 != g_127)))
              _fail(g_127);
            else
              e_127 = g_127;
            if(((e_127 != NULL) && (e_127 != h_127)))
              _fail(h_127);
            else
              e_127 = h_127;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_122 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm d_30;
    d_30 = t;
    {
      ATerm k_127 = NULL;
      ATerm l_127 = NULL;
      t = term_k_24;
      {
        t = get_config_0(t);
        {
          l_127 = t;
          if(((k_127 != NULL) && (k_127 != l_127)))
            _fail(l_127);
          else
            k_127 = l_127;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_127), term_l_7);
        t = geq_0(t);
      }
    }
    t = d_30;
    t = y_122(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm p_127 = NULL,r_127 = NULL;
    ATerm f_30;
    f_30 = t;
    {
      ATerm q_127 = NULL;
      t = run_time_0(t);
      {
        q_127 = t;
        if(((p_127 != NULL) && (p_127 != q_127)))
          _fail(q_127);
        else
          p_127 = q_127;
      }
    }
    t = f_30;
    {
      ATerm s_127 = NULL;
      t = term_h_17;
      {
        t = whoami_0(t);
        {
          s_127 = t;
          if(((r_127 != NULL) && (r_127 != s_127)))
            _fail(s_127);
          else
            r_127 = s_127;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(p_127)), term_g_30), not_null(r_127)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_c_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_128 = NULL;
  f_128 = t;
  e_128 :
  if(match_cons(f_128, sym_Version_0))
    {
      ATerm h_128 = NULL,j_128 = NULL;
      ATerm i_30;
      i_30 = t;
      {
        ATerm i_128 = NULL;
        t = SSLgetAnnotations(not_null(f_128));
        {
          i_128 = t;
          if(((h_128 != NULL) && (h_128 != i_128)))
            _fail(i_128);
          else
            h_128 = i_128;
        }
      }
      t = i_30;
      {
        ATerm k_128 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_128));
        {
          k_128 = t;
          if(((j_128 != NULL) && (j_128 != k_128)))
            _fail(k_128);
          else
            j_128 = k_128;
        }
        t = not_null(j_128);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_125 (ATerm))
{
  ATerm k_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = k_30;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm z_30 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(j_31);
            }
          else
            {
              t = z_30;
              {
                ATerm v_31 = t;
                int w_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(w_31);
                  }
                else
                  {
                    t = v_31;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, p_5);
      }
    }
  t = v_125(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_128 = NULL;
  p_128 = t;
  t = SSL_table_create(not_null(p_128));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_128 = NULL;
  w_128 = t;
  {
    ATerm x_31;
    x_31 = t;
    {
      t = term_y_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_31, term_z_31, not_null(w_128));
          t = table_put_0(t);
        }
      }
    }
    t = x_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_129 = NULL;
  a_129 = t;
  t = SSL_table_destroy(not_null(a_129));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_129 = NULL;
  e_129 = t;
  t = SSL_exit(not_null(e_129));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_127 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm k_129 (ATerm t)
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = Cons_2(t, j_99, k_129);
      }
    return(t);
  }
  t = k_129(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL;
  v_129 = t;
  s_129 :
  if(((ATgetType(v_129) == AT_LIST) && !(ATisEmpty(v_129))))
    {
      t_129 = ATgetFirst((ATermList) v_129);
      u_129 = (ATerm) ATgetNext((ATermList) v_129);
      {
        ATerm y_129 = NULL;
        t = not_null(u_129);
        {
          ATerm c_32;
          c_32 = t;
          {
            ATerm z_129 = NULL,b_130 = NULL,d_130 = NULL;
            ATerm d_32;
            d_32 = t;
            {
              ATerm a_130 = NULL;
              t = i_0(t);
              {
                a_130 = t;
                if(((z_129 != NULL) && (z_129 != a_130)))
                  _fail(a_130);
                else
                  z_129 = a_130;
              }
            }
            t = d_32;
            {
              ATerm c_130 = NULL;
              t = not_null(t_129);
              {
                t = g_0(t);
                {
                  c_130 = t;
                  if(((b_130 != NULL) && (b_130 != c_130)))
                    _fail(c_130);
                  else
                    b_130 = c_130;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_129)), not_null(b_130));
                {
                  d_130 = t;
                  if(((y_129 != NULL) && (y_129 != d_130)))
                    _fail(d_130);
                  else
                    y_129 = d_130;
                }
              }
            }
          }
          t = c_32;
          {
            ATerm q_5 (ATerm t)
            {
              t = not_null(y_129);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_129) == AT_LIST) && ATisEmpty(v_129)))
        {
          {
            t = term_h_17;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_127 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm o_130 = NULL,p_130 = NULL;
  o_130 = t;
  n_130 :
  if(match_cons(o_130, sym_Program_1))
    {
      p_130 = ATgetArgument(o_130, 0);
      {
        ATerm s_130 = NULL,u_130 = NULL;
        ATerm t_130 = NULL;
        t = SSLgetAnnotations(not_null(o_130));
        {
          t_130 = t;
          if(((s_130 != NULL) && (s_130 != t_130)))
            _fail(t_130);
          else
            s_130 = t_130;
        }
        {
          t = not_null(p_130);
          {
            ATerm w_130 = NULL;
            t = b_94(t);
            {
              u_130 = t;
              {
                ATerm x_130 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_130)), not_null(s_130));
                {
                  x_130 = t;
                  if(((w_130 != NULL) && (w_130 != x_130)))
                    _fail(x_130);
                  else
                    w_130 = x_130;
                }
                t = not_null(w_130);
              }
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm g_131 = NULL;
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_131 = NULL;
      t = term_t_29;
      {
        t = get_config_0(t);
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm s_5 (ATerm t)
        {
          ATerm t_5 (ATerm t)
          {
            ATerm i_131 = NULL;
            i_131 = t;
            if(((g_131 != NULL) && (g_131 != i_131)))
              _fail(i_131);
            else
              g_131 = i_131;
            return(t);
          }
          t = Program_1(t, t_5);
          return(t);
        }
        t = option_defined_1(t, s_5);
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
      t = short_description_1(t, v_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_5);
    {
      t = term_g_32;
      {
        t = echo_0(t);
        {
          t = term_j_32;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm j_131 = NULL;
                  ATerm k_131 = NULL;
                  k_131 = t;
                  if(((j_131 != NULL) && (j_131 != k_131)))
                    _fail(k_131);
                  else
                    j_131 = k_131;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_131)), term_k_32);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_5);
                {
                  ATerm x_5 (ATerm t)
                  {
                    ATerm l_131 = NULL;
                    ATerm m_131 = NULL;
                    ATerm y_5 (ATerm t)
                    {
                      t = not_null(g_131);
                      return(t);
                    }
                    t = long_description_1(t, y_5);
                    {
                      m_131 = t;
                      if(((l_131 != NULL) && (l_131 != m_131)))
                        _fail(m_131);
                      else
                        l_131 = m_131;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(l_131)), term_l_32);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_5);
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
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm w_131 = NULL,x_131 = NULL;
  w_131 = t;
  v_131 :
  if(match_cons(w_131, sym_Undefined_1))
    {
      x_131 = ATgetArgument(w_131, 0);
      {
        ATerm a_132 = NULL,c_132 = NULL;
        ATerm b_132 = NULL;
        t = SSLgetAnnotations(not_null(w_131));
        {
          b_132 = t;
          if(((a_132 != NULL) && (a_132 != b_132)))
            _fail(b_132);
          else
            a_132 = b_132;
        }
        {
          t = not_null(x_131);
          {
            ATerm e_132 = NULL;
            t = c_94(t);
            {
              c_132 = t;
              {
                ATerm f_132 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_132)), not_null(a_132));
                {
                  f_132 = t;
                  if(((e_132 != NULL) && (e_132 != f_132)))
                    _fail(f_132);
                  else
                    e_132 = f_132;
                }
                t = not_null(e_132);
              }
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
ATerm fetch_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm k_132 (ATerm t)
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_99, _id);
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, _id, k_132);
      }
    return(t);
  }
  t = k_132(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_126 (ATerm))
{
  t = fetch_1(t, v_126);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL;
  m_132 = t;
  l_132 :
  if(((ATgetType(m_132) == AT_LIST) && ATisEmpty(m_132)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_132) == AT_LIST) && !(ATisEmpty(m_132))))
        {
          n_132 = ATgetFirst((ATermList) m_132);
          o_132 = (ATerm) ATgetNext((ATermList) m_132);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm r_32;
  r_32 = t;
  {
    ATerm r_132 = NULL;
    ATerm u_132 = NULL;
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        {
          ATerm s_132 = NULL;
          ATerm t_132 = NULL;
          t_132 = t;
          if(((s_132 != NULL) && (s_132 != t_132)))
            _fail(t_132);
          else
            s_132 = t_132;
          t = (ATerm) ATinsert(ATempty, not_null(s_132));
        }
      }
    {
      u_132 = t;
      if(((r_132 != NULL) && (r_132 != u_132)))
        _fail(u_132);
      else
        r_132 = u_132;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(r_132));
      t = printnl_0(t);
    }
  }
  t = r_32;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_t_29;
  {
    t = get_config_0(t);
    t = echo_0(t);
  }
  return(t);
}
ATerm override_system_about_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0 (ATerm t)
{
  ATerm v_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = v_32;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_133 = NULL;
  b_133 = t;
  a_133 :
  if(match_cons(b_133, sym_Help_0))
    {
      ATerm d_133 = NULL,f_133 = NULL;
      ATerm b_33;
      b_33 = t;
      {
        ATerm e_133 = NULL;
        t = SSLgetAnnotations(not_null(b_133));
        {
          e_133 = t;
          if(((d_133 != NULL) && (d_133 != e_133)))
            _fail(e_133);
          else
            d_133 = e_133;
        }
      }
      t = b_33;
      {
        ATerm g_133 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_133));
        {
          g_133 = t;
          if(((f_133 != NULL) && (f_133 != g_133)))
            _fail(g_133);
          else
            f_133 = g_133;
        }
        t = not_null(f_133);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_105(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 (ATerm t)
      {
        ATerm m_133 = NULL;
        m_133 = t;
        k_133 :
        if(!(match_string(m_133, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = term_m_33;
        t = set_config_0(t);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        t = term_n_33;
        return(t);
      }
      t = Option_3(t, z_5, a_6, b_6);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm c_6 (ATerm t)
        {
          ATerm n_133 = NULL;
          n_133 = t;
          l_133 :
          if(!(match_string(n_133, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_6 (ATerm t)
        {
          t = term_m_33;
          {
            t = set_config_0(t);
            {
              t = term_p_33;
              t = set_config_0(t);
            }
          }
          t = term_q_33;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          t = term_r_33;
          return(t);
        }
        t = Option_3(t, c_6, d_6, e_6);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
  q_133 = t;
  p_133 :
  if(match_cons(q_133, sym__2))
    {
      r_133 = ATgetArgument(q_133, 0);
      s_133 = ATgetArgument(q_133, 1);
      t = SSL_table_get(not_null(r_133), not_null(s_133));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL;
  z_133 = t;
  y_133 :
  if(match_cons(z_133, sym__3))
    {
      a_134 = ATgetArgument(z_133, 0);
      b_134 = ATgetArgument(z_133, 1);
      c_134 = ATgetArgument(z_133, 2);
      {
        ATerm s_33;
        s_33 = t;
        {
          ATerm g_134 = NULL;
          ATerm h_134 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_134), not_null(b_134));
          {
            ATerm t_33 = t;
            int u_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_33);
              }
            else
              {
                t = t_33;
                t = (ATerm) ATempty;
              }
            {
              h_134 = t;
              if(((g_134 != NULL) && (g_134 != h_134)))
                _fail(h_134);
              else
                g_134 = h_134;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_134), not_null(b_134), (ATerm) ATinsert(CheckATermList(not_null(g_134)), not_null(c_134)));
            t = table_put_0(t);
          }
        }
        t = s_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_128 (ATerm))
{
  ATerm l_134 = NULL;
  ATerm m_134 = NULL;
  t = term_h_17;
  {
    t = a_128(t);
    {
      m_134 = t;
      if(((l_134 != NULL) && (l_134 != m_134)))
        _fail(m_134);
      else
        l_134 = m_134;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, not_null(l_134));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL;
  s_134 = t;
  r_134 :
  if(match_string(s_134, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_134) == AT_LIST) && !(ATisEmpty(s_134))))
        {
          t_134 = ATgetFirst((ATermList) s_134);
          u_134 = (ATerm) ATgetNext((ATermList) s_134);
          {
            ATerm x_134 = NULL;
            ATerm v_33;
            v_33 = t;
            {
              t = not_null(t_134);
              t = a_0(t);
            }
            t = v_33;
            {
              ATerm y_134 = NULL;
              t = term_h_17;
              {
                t = b_0(t);
                {
                  y_134 = t;
                  if(((x_134 != NULL) && (x_134 != y_134)))
                    _fail(y_134);
                  else
                    x_134 = y_134;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_134)), not_null(x_134));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm d_135 = NULL;
    d_135 = t;
    c_135 :
    if(!(match_string(d_135, "--help")))
      {
        if(!(match_string(d_135, "-h")))
          {
            if(!(match_string(d_135, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_w_33;
    {
      t = set_config_0(t);
      t = term_x_33;
    }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = Option_3(t, f_6, g_6, h_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  g_135 = t;
  f_135 :
  if(((ATgetType(g_135) == AT_LIST) && !(ATisEmpty(g_135))))
    {
      h_135 = ATgetFirst((ATermList) g_135);
      i_135 = (ATerm) ATgetNext((ATermList) g_135);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_135)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_135)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL,q_135 = NULL;
  o_135 = t;
  n_135 :
  if(match_cons(o_135, sym__2))
    {
      p_135 = ATgetArgument(o_135, 0);
      q_135 = ATgetArgument(o_135, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_24, not_null(p_135), not_null(q_135));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_127 (ATerm))
{
  ATerm z_33;
  z_33 = t;
  {
    ATerm i_6 (ATerm t)
    {
      t = term_a_34;
      t = y_127(t);
      return(t);
    }
    t = try_1(t, i_6);
  }
  t = z_33;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm y_135 = NULL;
      ATerm b_34;
      b_34 = t;
      {
        ATerm w_135 = NULL;
        ATerm x_135 = NULL;
        x_135 = t;
        if(((w_135 != NULL) && (w_135 != x_135)))
          _fail(x_135);
        else
          w_135 = x_135;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, not_null(w_135));
          t = set_config_0(t);
        }
      }
      t = b_34;
      {
        ATerm z_135 = NULL;
        z_135 = t;
        if(((y_135 != NULL) && (y_135 != z_135)))
          _fail(z_135);
        else
          y_135 = z_135;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_135));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              {
                t = y_127(t);
                t = Cons_2(t, _id, l_6);
              }
            }
          ;
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_6, l_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_136 = NULL,g_136 = NULL,h_136 = NULL;
  ATerm g_34;
  g_34 = t;
  {
    ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
    i_136 = t;
    e_136 :
    if(match_cons(i_136, sym__3))
      {
        j_136 = ATgetArgument(i_136, 0);
        k_136 = ATgetArgument(i_136, 1);
        l_136 = ATgetArgument(i_136, 2);
        {
          if(((f_136 != NULL) && (f_136 != j_136)))
            _fail(j_136);
          else
            f_136 = j_136;
          {
            if(((g_136 != NULL) && (g_136 != k_136)))
              _fail(k_136);
            else
              g_136 = k_136;
            {
              if(((h_136 != NULL) && (h_136 != l_136)))
                _fail(l_136);
              else
                h_136 = l_136;
              t = SSL_table_put(not_null(f_136), not_null(g_136), not_null(h_136));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_127 (ATerm))
{
  ATerm o_136 = NULL;
  ATerm h_34;
  h_34 = t;
  {
    t = term_i_34;
    t = table_put_0(t);
  }
  t = h_34;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm j_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_127(t);
          ;
          LocalPopChoice(k_34);
        }
      else
        {
          t = j_34;
          {
            ATerm l_34 = t;
            int m_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(m_34);
              }
            else
              {
                t = l_34;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, m_6);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_34;
            p_34 = t;
            {
              ATerm q_34 = t;
              int r_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(r_34);
                }
              else
                {
                  t = q_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = p_34;
            {
              t = system_usage_0(t);
              {
                t = term_c_22;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm s_34 = t;
              int t_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_34;
                  u_34 = t;
                  {
                    t = term_l_33;
                    t = get_config_0(t);
                  }
                  t = u_34;
                  {
                    t = system_about_0(t);
                    {
                      t = term_c_22;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(t_34);
                }
              else
                {
                  t = s_34;
                  {
                    ATerm o_6 (ATerm t)
                    {
                      ATerm p_6 (ATerm t)
                      {
                        ATerm p_136 = NULL;
                        p_136 = t;
                        if(((o_136 != NULL) && (o_136 != p_136)))
                          _fail(p_136);
                        else
                          o_136 = p_136;
                        return(t);
                      }
                      t = Undefined_1(t, p_6);
                      return(t);
                    }
                    t = option_defined_1(t, o_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_136)), term_v_34));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_l_7;
                            t = exit_0(t);
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
      t = try_1(t, n_6);
      {
        ATerm w_34;
        w_34 = t;
        {
          t = term_h_32;
          t = table_destroy_0(t);
        }
        t = w_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm z_125 (ATerm), ATerm a_126 (ATerm))
{
  t = parse_options_1(t, x_125);
  {
    t = store_options_0(t);
    {
      t = z_125(t);
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_125);
            ;
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_126(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_125(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_125);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_6, o_125, p_125, r_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      ATerm d_35;
      d_35 = t;
      {
        ATerm s_136 = NULL;
        ATerm t_136 = NULL;
        t = term_t_29;
        {
          t = get_config_0(t);
          {
            t_136 = t;
            if(((s_136 != NULL) && (s_136 != t_136)))
              _fail(t_136);
            else
              s_136 = t_136;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_7, (ATerm) ATinsert(ATempty, not_null(s_136)));
          t = printnl_0(t);
        }
      }
      t = d_35;
      return(t);
    }
    t = if_verbose2_1(t, t_6);
    return(t);
  }
  t = iowrap_4(t, g_125, h_125, i_125, s_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_125 (ATerm), ATerm f_125 (ATerm))
{
  t = iowrap_3(t, e_125, f_125, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_125 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    t = _2(t, _id, b_125);
    return(t);
  }
  t = iowrap_2(t, u_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_6 (ATerm t)
    {
      ATerm x_6 (ATerm t)
      {
        ATerm y_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, y_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, x_6);
      return(t);
    }
    t = Specification_1(t, w_6);
    return(t);
  }
  t = iowrap_1(t, v_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
