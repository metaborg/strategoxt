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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
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
Symbol sym_PrimTS_3;
Symbol sym_PrimS_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
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
  sym_PrimTS_3 = ATmakeSymbol("PrimTS", 3, ATfalse);
  ATprotectSymbol(sym_PrimTS_3);
  sym_PrimS_2 = ATmakeSymbol("PrimS", 2, ATfalse);
  ATprotectSymbol(sym_PrimS_2);
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
ATerm term_i_33;
ATerm term_v_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_d_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_u_9;
ATerm term_h_9;
ATerm term_s_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Op_2, term_y_11, (ATerm) ATempty);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_a_20);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_20);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_v_15);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_v_15);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_g_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_v_15);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_b_32, term_v_15);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_v_15);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__3, term_f_30, term_g_30, (ATerm) ATempty);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm SDef_3 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm Let_2 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_105 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm z_96 (ATerm), ATerm a_97 (ATerm));
ATerm alltd_1 (ATerm, ATerm t_98 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm substitute_1 (ATerm, ATerm m_96 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm y_85 (ATerm), ATerm z_85 (ATerm));
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
ATerm As_2 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm));
ATerm Prim_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm Op_2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_92 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm x_101 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_107 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm Con_3 (ATerm, ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm x_83 (ATerm), ATerm y_83 (ATerm));
ATerm oncetd_1 (ATerm, ATerm f_98 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_97 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm d_101 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm g_111 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm v_101 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm g_108 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm));
ATerm zip_1 (ATerm, ATerm s_101 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_107 (ATerm), ATerm y_107 (ATerm));
ATerm for_3 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_123 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_123 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm o_108 (ATerm), ATerm p_108 (ATerm));
ATerm union_1 (ATerm, ATerm k_108 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm r_79 (ATerm));
ATerm Cons_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm Specification_1 (ATerm, ATerm w_79 (ATerm));
ATerm _2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_93 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_116 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm u_115 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_118 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_115 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_100 (ATerm), ATerm o_100 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm r_110 (ATerm), ATerm s_110 (ATerm));
ATerm crush_2 (ATerm, ATerm v_108 (ATerm), ATerm w_108 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_116 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_119 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_121 (ATerm));
ATerm map_1 (ATerm, ATerm k_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_121 (ATerm));
ATerm Program_1 (ATerm, ATerm d_88 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_88 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_93 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_120 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_99 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_121 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_121 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_121 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_119 (ATerm), ATerm e_119 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_119 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(((ATgetType(n_3) == AT_LIST) && ATisEmpty(n_3)))
    {
      {
        ATerm p_4 = NULL,r_4 = NULL;
        ATerm m_6;
        m_6 = t;
        {
          ATerm q_4 = NULL;
          t = SSLgetAnnotations(not_null(n_3));
          {
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
          }
        }
        t = m_6;
        {
          ATerm t_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_4));
          {
            t_5 = t;
            if(((r_4 != NULL) && (r_4 != t_5)))
              _fail(t_5);
            else
              r_4 = t_5;
          }
          t = not_null(r_4);
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
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  l_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(r_6)), term_o_6), not_null(q_6)), term_n_6);
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  y_6 = t;
  w_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      c_7 = ATgetArgument(y_6, 1);
      x_6 :
      if(match_cons(z_6, sym_Mod_2))
        {
          a_7 = ATgetArgument(z_6, 0);
          b_7 = ATgetArgument(z_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(c_7)), term_o_6), not_null(b_7)), term_t_6), not_null(a_7)), term_n_6);
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
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      j_7 :
      if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
        {
          n_7 = ATgetFirst((ATermList) m_7);
          o_7 = (ATerm) ATgetNext((ATermList) m_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(o_7)), not_null(n_7));
            {
              ATerm f_0 (ATerm t)
              {
                ATerm u_6 = t;
                int v_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(v_6);
                  }
                else
                  {
                    t = u_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, f_0);
            }
            t = not_null(l_7);
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
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  u_7 :
  if(match_cons(w_7, sym__2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      v_7 :
      if(((ATgetType(y_7) == AT_LIST) && ATisEmpty(y_7)))
        {
          t = not_null(x_7);
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
  ATerm d_7;
  d_7 = t;
  {
    t = error_0(t);
    {
      t = term_e_7;
      t = exit_0(t);
    }
  }
  t = d_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm c_8 = NULL;
    ATerm d_8 = NULL;
    d_8 = t;
    if(((c_8 != NULL) && (c_8 != d_8)))
      _fail(d_8);
    else
      c_8 = d_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(c_8));
      t = printnl_0(t);
    }
  }
  t = g_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  o_8 :
  if(match_cons(q_8, sym__2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      p_8 :
      if(match_int(s_8, 0))
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
              t = not_null(r_8);
              {
                t = Arities_0(t);
                {
                  u_8 = t;
                  j_8 :
                  if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
                    {
                      v_8 = ATgetFirst((ATermList) u_8);
                      w_8 = (ATerm) ATgetNext((ATermList) u_8);
                      k_8 :
                      if(((ATgetType(w_8) == AT_LIST) && !(ATisEmpty(w_8))))
                        {
                          x_8 = ATgetFirst((ATermList) w_8);
                          y_8 = (ATerm) ATgetNext((ATermList) w_8);
                          {
                            ATerm r_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  ATerm z_8 = NULL;
                                  z_8 = t;
                                  i_8 :
                                  if(!(match_int(z_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, h_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = r_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_8)), term_s_7);
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
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
              {
                ATerm b_9 = NULL;
                ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
                t = not_null(r_8);
                {
                  t = Arities_0(t);
                  {
                    c_9 = t;
                    m_8 :
                    if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                      {
                        d_9 = ATgetFirst((ATermList) c_9);
                        e_9 = (ATerm) ATgetNext((ATermList) c_9);
                        n_8 :
                        if(((ATgetType(e_9) == AT_LIST) && ATisEmpty(e_9)))
                          {
                            {
                              if(((b_9 != NULL) && (b_9 != d_9)))
                                _fail(d_9);
                              else
                                b_9 = d_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(b_9));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), not_null(b_9));
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
ATerm Rec_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_Rec_2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        ATerm v_9 = NULL,x_9 = NULL;
        ATerm w_9 = NULL;
        t = SSLgetAnnotations(not_null(p_9));
        {
          w_9 = t;
          if(((v_9 != NULL) && (v_9 != w_9)))
            _fail(w_9);
          else
            v_9 = w_9;
        }
        {
          t = not_null(q_9);
          {
            ATerm z_9 = NULL;
            t = k_84(t);
            {
              x_9 = t;
              {
                t = not_null(r_9);
                {
                  ATerm b_10 = NULL;
                  t = l_84(t);
                  {
                    z_9 = t;
                    {
                      ATerm c_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(x_9), not_null(z_9)), not_null(v_9));
                      {
                        c_10 = t;
                        if(((b_10 != NULL) && (b_10 != c_10)))
                          _fail(c_10);
                        else
                          b_10 = c_10;
                      }
                      t = not_null(b_10);
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
ATerm SDef_3 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_SDef_3))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      s_10 = ATgetArgument(p_10, 2);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm b_11 = NULL;
            t = c_86(t);
            {
              z_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm d_11 = NULL;
                  t = d_86(t);
                  {
                    b_11 = t;
                    {
                      t = not_null(s_10);
                      {
                        ATerm f_11 = NULL;
                        t = e_86(t);
                        {
                          d_11 = t;
                          {
                            ATerm g_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_10), not_null(b_11), not_null(d_11)), not_null(x_10));
                            {
                              g_11 = t;
                              if(((f_11 != NULL) && (f_11 != g_11)))
                                _fail(g_11);
                              else
                                f_11 = g_11;
                            }
                            t = not_null(f_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Let_2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm z_11 = NULL,b_12 = NULL;
        ATerm a_12 = NULL;
        t = SSLgetAnnotations(not_null(t_11));
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
        {
          t = not_null(u_11);
          {
            ATerm d_12 = NULL;
            t = n_83(t);
            {
              b_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm f_12 = NULL;
                  t = o_83(t);
                  {
                    d_12 = t;
                    {
                      ATerm g_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(b_12), not_null(d_12)), not_null(z_11));
                      {
                        g_12 = t;
                        if(((f_12 != NULL) && (f_12 != g_12)))
                          _fail(g_12);
                        else
                          f_12 = g_12;
                      }
                      t = not_null(f_12);
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
ATerm sboundin_3 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm))
{
  ATerm t_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_96, g_96);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = t_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, i_96, i_96, g_96);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            t = Rec_2(t, i_96, g_96);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Rec_2))
    {
      p_12 = ATgetArgument(o_12, 0);
      q_12 = ATgetArgument(o_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(p_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_SDef_3))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      b_13 = ATgetArgument(y_12, 2);
      {
        t = not_null(a_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
            f_13 = t;
            w_12 :
            if(match_cons(f_13, sym_VarDec_2))
              {
                g_13 = ATgetArgument(f_13, 0);
                h_13 = ATgetArgument(f_13, 1);
                t = not_null(g_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
        }
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_Let_2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        t = not_null(q_13);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
            u_13 = t;
            n_13 :
            if(match_cons(u_13, sym_SDef_3))
              {
                v_13 = ATgetArgument(u_13, 0);
                w_13 = ATgetArgument(u_13, 1);
                x_13 = ATgetArgument(u_13, 2);
                t = not_null(v_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm))
{
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    ATerm k_14 = NULL;
    ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
    t = not_null(h_14);
    {
      k_14 = t;
      {
        t = SSL_explode_term(not_null(k_14));
        {
          m_14 = t;
          g_14 :
          if(match_cons(m_14, sym__2))
            {
              n_14 = ATgetArgument(m_14, 0);
              o_14 = ATgetArgument(m_14, 1);
              if(((j_14 != NULL) && (j_14 != o_14)))
                _fail(o_14);
              else
                j_14 = o_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_14);
      t = foldr_3(t, x_108, y_108, z_108);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_105 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm o_0 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_105(t);
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm g_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14 = NULL;
          ATerm l_8;
          l_8 = t;
          {
            ATerm u_14 = NULL;
            t = k_105(t);
            {
              u_14 = t;
              if(((t_14 != NULL) && (t_14 != u_14)))
                _fail(u_14);
              else
                t_14 = u_14;
            }
          }
          t = l_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(t_14);
                return(t);
              }
              t = split_2(t, v_14, t_0);
              t = diff_1(t, m_105);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = l_105(t, r_0, v_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(h_8);
        }
      else
        {
          t = g_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, v_14);
          }
        }
      return(t);
    }
    t = split_2(t, o_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
    e_15 = t;
    z_14 :
    if(match_cons(e_15, sym_Call_2))
      {
        f_15 = ATgetArgument(e_15, 0);
        h_15 = ATgetArgument(e_15, 1);
        a_15 :
        if(match_cons(f_15, sym_SVar_1))
          {
            g_15 = ATgetArgument(f_15, 0);
            {
              ATerm k_15 = NULL;
              ATerm l_15 = NULL;
              t = not_null(h_15);
              {
                t = length_0(t);
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(k_15)));
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
  ATerm x_0 (ATerm t)
  {
    ATerm t_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = t_8;
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(g_9);
            }
          else
            {
              t = f_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
    m_15 = t;
    c_15 :
    if(match_cons(m_15, sym__2))
      {
        n_15 = ATgetArgument(m_15, 0);
        q_15 = ATgetArgument(m_15, 1);
        d_15 :
        if(match_cons(n_15, sym__2))
          {
            o_15 = ATgetArgument(n_15, 0);
            p_15 = ATgetArgument(n_15, 1);
            if(((o_15 != NULL) && (o_15 != q_15)))
              _fail(q_15);
            else
              o_15 = q_15;
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
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  c_16 = t;
  {
    ATerm h_16 = NULL;
    ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
    t = not_null(c_16);
    {
      h_16 = t;
      {
        t = SSL_explode_term(not_null(h_16));
        {
          j_16 = t;
          y_15 :
          if(match_cons(j_16, sym__2))
            {
              k_16 = ATgetArgument(j_16, 0);
              l_16 = ATgetArgument(j_16, 1);
              z_15 :
              if(match_string(k_16, ""))
                {
                  a_16 :
                  if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
                    {
                      m_16 = ATgetFirst((ATermList) l_16);
                      n_16 = (ATerm) ATgetNext((ATermList) l_16);
                      b_16 :
                      if(((ATgetType(n_16) == AT_LIST) && !(ATisEmpty(n_16))))
                        {
                          o_16 = ATgetFirst((ATermList) n_16);
                          p_16 = (ATerm) ATgetNext((ATermList) n_16);
                          {
                            if(((e_16 != NULL) && (e_16 != m_16)))
                              _fail(m_16);
                            else
                              e_16 = m_16;
                            {
                              if(((g_16 != NULL) && (g_16 != o_16)))
                                _fail(o_16);
                              else
                                g_16 = o_16;
                              if(((f_16 != NULL) && (f_16 != p_16)))
                                _fail(p_16);
                              else
                                f_16 = p_16;
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
    t = not_null(g_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_h_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm v_16 = NULL,x_16 = NULL;
    ATerm i_9;
    i_9 = t;
    {
      ATerm w_16 = NULL;
      t = Fst_0(t);
      {
        w_16 = t;
        if(((v_16 != NULL) && (v_16 != w_16)))
          _fail(w_16);
        else
          v_16 = w_16;
      }
    }
    t = i_9;
    {
      ATerm y_16 = NULL;
      t = Snd_0(t);
      {
        y_16 = t;
        if(((x_16 != NULL) && (x_16 != y_16)))
          _fail(y_16);
        else
          x_16 = y_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_16), not_null(x_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  f_17 = t;
  c_17 :
  if(match_cons(f_17, sym_Call_2))
    {
      g_17 = ATgetArgument(f_17, 0);
      i_17 = ATgetArgument(f_17, 1);
      d_17 :
      if(match_cons(g_17, sym_SVar_1))
        {
          h_17 = ATgetArgument(g_17, 0);
          e_17 :
          if(((ATgetType(i_17) == AT_LIST) && ATisEmpty(i_17)))
            {
              t = not_null(h_17);
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
ATerm Look2_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  o_17 = t;
  m_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      n_17 :
      if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
        {
          r_17 = ATgetFirst((ATermList) q_17);
          s_17 = (ATerm) ATgetNext((ATermList) q_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_17), not_null(s_17));
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
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  a_18 = t;
  x_17 :
  if(match_cons(a_18, sym__2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      y_17 :
      if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
        {
          d_18 = ATgetFirst((ATermList) c_18);
          g_18 = (ATerm) ATgetNext((ATermList) c_18);
          z_17 :
          if(match_cons(d_18, sym__2))
            {
              e_18 = ATgetArgument(d_18, 0);
              f_18 = ATgetArgument(d_18, 1);
              {
                ATerm i_18 = NULL;
                if(((b_18 != NULL) && (b_18 != e_18)))
                  _fail(e_18);
                else
                  b_18 = e_18;
                {
                  if(((i_18 != NULL) && (i_18 != f_18)))
                    _fail(f_18);
                  else
                    i_18 = f_18;
                  t = not_null(i_18);
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm z_96 (ATerm), ATerm a_97 (ATerm))
{
  ATerm o_18 = NULL;
  ATerm q_18 = NULL,r_18 = NULL;
  o_18 = t;
  {
    ATerm s_18 = NULL;
    t = not_null(o_18);
    {
      ATerm t_18 = NULL;
      t = z_96(t);
      {
        s_18 = t;
        {
          if(((q_18 != NULL) && (q_18 != s_18)))
            _fail(s_18);
          else
            q_18 = s_18;
          {
            t = a_97(t);
            {
              t_18 = t;
              if(((r_18 != NULL) && (r_18 != t_18)))
                _fail(t_18);
              else
                r_18 = t_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(r_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm x_18 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_98(t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = _all(t, x_18);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm h_19 = NULL;
        if(((h_19 != NULL) && (h_19 != e_19)))
          _fail(e_19);
        else
          h_19 = e_19;
      }
    }
  else
    {
      if(match_cons(c_19, sym__3))
        {
          d_19 = ATgetArgument(c_19, 0);
          e_19 = ATgetArgument(c_19, 1);
          f_19 = ATgetArgument(c_19, 2);
          {
            ATerm n_19 = NULL;
            ATerm o_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(e_19));
            {
              t = zip_1(t, _id);
              {
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(f_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  t = subs_args_0(t);
  {
    u_19 = t;
    t_19 :
    if(match_cons(u_19, sym__2))
      {
        v_19 = ATgetArgument(u_19, 0);
        w_19 = ATgetArgument(u_19, 1);
        {
          t = not_null(w_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(v_19);
                return(t);
              }
              t = SubsVar_2(t, k_96, c_1);
              t = l_96(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm m_96 (ATerm))
{
  t = substitute_2(t, m_96, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm y_85 (ATerm), ATerm z_85 (ATerm))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym_VarDec_2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      {
        ATerm m_20 = NULL,o_20 = NULL;
        ATerm n_20 = NULL;
        t = SSLgetAnnotations(not_null(g_20));
        {
          n_20 = t;
          if(((m_20 != NULL) && (m_20 != n_20)))
            _fail(n_20);
          else
            m_20 = n_20;
        }
        {
          t = not_null(h_20);
          {
            ATerm q_20 = NULL;
            t = y_85(t);
            {
              o_20 = t;
              {
                t = not_null(i_20);
                {
                  ATerm s_20 = NULL;
                  t = z_85(t);
                  {
                    q_20 = t;
                    {
                      ATerm t_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_20), not_null(q_20)), not_null(m_20));
                      {
                        t_20 = t;
                        if(((s_20 != NULL) && (s_20 != t_20)))
                          _fail(t_20);
                        else
                          s_20 = t_20;
                      }
                      t = not_null(s_20);
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  n_21 = t;
  l_21 :
  if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
    {
      o_21 = ATgetFirst((ATermList) n_21);
      s_21 = (ATerm) ATgetNext((ATermList) n_21);
      m_21 :
      if(match_cons(o_21, sym_SDef_3))
        {
          p_21 = ATgetArgument(o_21, 0);
          q_21 = ATgetArgument(o_21, 1);
          r_21 = ATgetArgument(o_21, 2);
          {
            ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,u_22 = NULL;
            ATerm n_9;
            n_9 = t;
            {
              ATerm a_22 = NULL;
              t = not_null(q_21);
              {
                ATerm g_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  a_22 = t;
                  {
                    if(((x_21 != NULL) && (x_21 != a_22)))
                      _fail(a_22);
                    else
                      x_21 = a_22;
                    {
                      t = not_null(x_21);
                      {
                        ATerm t_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
                          b_22 = t;
                          c_21 :
                          if(match_cons(b_22, sym_VarDec_2))
                            {
                              c_22 = ATgetArgument(b_22, 0);
                              d_22 = ATgetArgument(b_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          g_22 = t;
                          {
                            if(((y_21 != NULL) && (y_21 != g_22)))
                              _fail(g_22);
                            else
                              y_21 = g_22;
                            {
                              t = not_null(n_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
                                  h_22 = t;
                                  i_21 :
                                  if(match_cons(h_22, sym_SDef_3))
                                    {
                                      i_22 = ATgetArgument(h_22, 0);
                                      j_22 = ATgetArgument(h_22, 1);
                                      k_22 = ATgetArgument(h_22, 2);
                                      {
                                        ATerm n_22 = NULL;
                                        ATerm s_22 = NULL;
                                        t = not_null(j_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
                                            o_22 = t;
                                            g_21 :
                                            if(match_cons(o_22, sym_VarDec_2))
                                              {
                                                p_22 = ATgetArgument(o_22, 0);
                                                q_22 = ATgetArgument(o_22, 1);
                                                t = not_null(p_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            s_22 = t;
                                            if(((n_22 != NULL) && (n_22 != s_22)))
                                              _fail(s_22);
                                            else
                                              n_22 = s_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(n_22), not_null(y_21), not_null(k_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  t_22 = t;
                                  if(((z_21 != NULL) && (z_21 != t_22)))
                                    _fail(t_22);
                                  else
                                    z_21 = t_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = n_9;
            {
              ATerm v_22 = NULL;
              t = not_null(z_21);
              {
                t = choices_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_21), not_null(x_21), not_null(u_22));
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  g_23 :
  if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      k_23 = (ATerm) ATgetNext((ATermList) i_23);
      h_23 :
      if(((ATgetType(k_23) == AT_LIST) && ATisEmpty(k_23)))
        {
          t = not_null(j_23);
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
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  r_23 = t;
  p_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      v_23 = ATgetArgument(r_23, 1);
      q_23 :
      if(match_cons(s_23, sym__2))
        {
          t_23 = ATgetArgument(s_23, 0);
          u_23 = ATgetArgument(s_23, 1);
          {
            ATerm z_23 = NULL;
            ATerm a_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), not_null(u_23));
            {
              t = Definitions_0(t);
              {
                a_24 = t;
                if(((z_23 != NULL) && (z_23 != a_24)))
                  _fail(a_24);
                else
                  z_23 = a_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(v_23));
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
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  v_24 = t;
  t_24 :
  if(match_cons(v_24, sym_ExplodeCong_2))
    {
      w_24 = ATgetArgument(v_24, 0);
      u_24 = ATgetArgument(v_24, 1);
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
        ATerm d_25 = NULL;
        ATerm e_25 = NULL;
        t = new_0(t);
        {
          d_25 = t;
          {
            if(((z_24 != NULL) && (z_24 != d_25)))
              _fail(d_25);
            else
              z_24 = d_25;
            {
              ATerm f_25 = NULL;
              t = new_0(t);
              {
                e_25 = t;
                {
                  if(((a_25 != NULL) && (a_25 != e_25)))
                    _fail(e_25);
                  else
                    a_25 = e_25;
                  {
                    ATerm g_25 = NULL;
                    t = new_0(t);
                    {
                      f_25 = t;
                      {
                        if(((b_25 != NULL) && (b_25 != f_25)))
                          _fail(f_25);
                        else
                          b_25 = f_25;
                        {
                          t = new_0(t);
                          {
                            g_25 = t;
                            if(((c_25 != NULL) && (c_25 != g_25)))
                              _fail(g_25);
                            else
                              c_25 = g_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_25)), not_null(b_25)), not_null(a_25)), not_null(z_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(w_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))))));
      }
    }
  else
    {
      if(match_cons(v_24, sym_Build_1))
        {
          w_24 = ATgetArgument(v_24, 0);
          {
            ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
            ATerm m_25 = NULL;
            ATerm q_25 = NULL;
            t = new_0(t);
            {
              m_25 = t;
              {
                if(((k_25 != NULL) && (k_25 != m_25)))
                  _fail(m_25);
                else
                  k_25 = m_25;
                {
                  t = not_null(w_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
                      n_25 = t;
                      m_24 :
                      if(match_cons(n_25, sym_Explode_2))
                        {
                          o_25 = ATgetArgument(n_25, 0);
                          p_25 = ATgetArgument(n_25, 1);
                          {
                            if(((i_25 != NULL) && (i_25 != o_25)))
                              _fail(o_25);
                            else
                              i_25 = o_25;
                            {
                              if(((j_25 != NULL) && (j_25 != p_25)))
                                _fail(p_25);
                              else
                                j_25 = p_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      q_25 = t;
                      if(((l_25 != NULL) && (l_25 != q_25)))
                        _fail(q_25);
                      else
                        l_25 = q_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_25)), not_null(i_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_25)))));
          }
        }
      else
        {
          if(match_cons(v_24, sym_Match_1))
            {
              w_24 = ATgetArgument(v_24, 0);
              {
                ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
                ATerm x_25 = NULL;
                ATerm y_25 = NULL;
                t = new_0(t);
                {
                  x_25 = t;
                  {
                    if(((u_25 != NULL) && (u_25 != x_25)))
                      _fail(x_25);
                    else
                      u_25 = x_25;
                    {
                      ATerm c_26 = NULL;
                      t = new_0(t);
                      {
                        y_25 = t;
                        {
                          if(((v_25 != NULL) && (v_25 != y_25)))
                            _fail(y_25);
                          else
                            v_25 = y_25;
                          {
                            t = not_null(w_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
                                z_25 = t;
                                r_24 :
                                if(match_cons(z_25, sym_Explode_2))
                                  {
                                    a_26 = ATgetArgument(z_25, 0);
                                    b_26 = ATgetArgument(z_25, 1);
                                    {
                                      if(((s_25 != NULL) && (s_25 != a_26)))
                                        _fail(a_26);
                                      else
                                        s_25 = a_26;
                                      {
                                        if(((t_25 != NULL) && (t_25 != b_26)))
                                          _fail(b_26);
                                        else
                                          t_25 = b_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                c_26 = t;
                                if(((w_25 != NULL) && (w_25 != c_26)))
                                  _fail(c_26);
                                else
                                  w_25 = c_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_25)), (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_25)), not_null(s_25)))))));
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
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_Match_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
            ATerm o_27 = NULL;
            ATerm s_27 = NULL;
            t = new_0(t);
            {
              o_27 = t;
              {
                if(((m_27 != NULL) && (m_27 != o_27)))
                  _fail(o_27);
                else
                  m_27 = o_27;
                {
                  t = not_null(i_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                      p_27 = t;
                      w_26 :
                      if(match_cons(p_27, sym_Anno_2))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          r_27 = ATgetArgument(p_27, 1);
                          {
                            if(((k_27 != NULL) && (k_27 != q_27)))
                              _fail(q_27);
                            else
                              k_27 = q_27;
                            {
                              if(((l_27 != NULL) && (l_27 != r_27)))
                                _fail(r_27);
                              else
                                l_27 = r_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_27)), not_null(k_27));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      s_27 = t;
                      if(((n_27 != NULL) && (n_27 != s_27)))
                        _fail(s_27);
                      else
                        n_27 = s_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_27))))));
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
                  ATerm x_27 = NULL;
                  ATerm a_28 = NULL;
                  t = new_0(t);
                  {
                    x_27 = t;
                    {
                      if(((v_27 != NULL) && (v_27 != x_27)))
                        _fail(x_27);
                      else
                        v_27 = x_27;
                      {
                        t = not_null(i_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm y_27 = NULL,z_27 = NULL;
                            y_27 = t;
                            a_27 :
                            if(match_cons(y_27, sym_RootApp_1))
                              {
                                z_27 = ATgetArgument(y_27, 0);
                                {
                                  if(((u_27 != NULL) && (u_27 != z_27)))
                                    _fail(z_27);
                                  else
                                    u_27 = z_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, k_1);
                          {
                            a_28 = t;
                            if(((w_27 != NULL) && (w_27 != a_28)))
                              _fail(a_28);
                            else
                              w_27 = a_28;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27))), not_null(u_27))));
                  ;
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
                    ATerm g_28 = NULL;
                    ATerm k_28 = NULL;
                    t = new_0(t);
                    {
                      g_28 = t;
                      {
                        if(((e_28 != NULL) && (e_28 != g_28)))
                          _fail(g_28);
                        else
                          e_28 = g_28;
                        {
                          t = not_null(i_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
                              h_28 = t;
                              e_27 :
                              if(match_cons(h_28, sym_App_2))
                                {
                                  i_28 = ATgetArgument(h_28, 0);
                                  j_28 = ATgetArgument(h_28, 1);
                                  {
                                    if(((d_28 != NULL) && (d_28 != i_28)))
                                      _fail(i_28);
                                    else
                                      d_28 = i_28;
                                    {
                                      if(((c_28 != NULL) && (c_28 != j_28)))
                                        _fail(j_28);
                                      else
                                        c_28 = j_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_1);
                            {
                              k_28 = t;
                              if(((f_28 != NULL) && (f_28 != k_28)))
                                _fail(k_28);
                              else
                                f_28 = k_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_28)), not_null(d_28)))));
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
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  b_29 = t;
  z_28 :
  if(match_cons(b_29, sym_Match_1))
    {
      c_29 = ATgetArgument(b_29, 0);
      a_29 :
      if(match_cons(c_29, sym_RootApp_1))
        {
          d_29 = ATgetArgument(c_29, 0);
          t = not_null(d_29);
        }
      else
        {
          if(match_cons(c_29, sym_App_2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(d_29), not_null(e_29));
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
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Match_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm t_29 = NULL,u_29 = NULL;
        ATerm y_29 = NULL;
        t = not_null(r_29);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
            v_29 = t;
            m_29 :
            if(match_cons(v_29, sym_RootApp_1))
              {
                w_29 = ATgetArgument(v_29, 0);
                n_29 :
                if(match_cons(w_29, sym_Match_1))
                  {
                    x_29 = ATgetArgument(w_29, 0);
                    {
                      if(((t_29 != NULL) && (t_29 != x_29)))
                        _fail(x_29);
                      else
                        t_29 = x_29;
                      t = not_null(t_29);
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
          t = pat_td_1(t, m_1);
          {
            y_29 = t;
            if(((u_29 != NULL) && (u_29 != y_29)))
              _fail(y_29);
            else
              u_29 = y_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_29));
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
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_Build_1))
    {
      t_30 = ATgetArgument(s_30, 0);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
            ATerm z_30 = NULL;
            ATerm d_31 = NULL;
            t = new_0(t);
            {
              z_30 = t;
              {
                if(((x_30 != NULL) && (x_30 != z_30)))
                  _fail(z_30);
                else
                  x_30 = z_30;
                {
                  t = not_null(t_30);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
                      a_31 = t;
                      h_30 :
                      if(match_cons(a_31, sym_Anno_2))
                        {
                          b_31 = ATgetArgument(a_31, 0);
                          c_31 = ATgetArgument(a_31, 1);
                          {
                            if(((v_30 != NULL) && (v_30 != b_31)))
                              _fail(b_31);
                            else
                              v_30 = b_31;
                            {
                              if(((w_30 != NULL) && (w_30 != c_31)))
                                _fail(c_31);
                              else
                                w_30 = c_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_1);
                    {
                      d_31 = t;
                      if(((y_30 != NULL) && (y_30 != d_31)))
                        _fail(d_31);
                      else
                        y_30 = d_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_30)), not_null(v_30))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_30))));
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            {
              ATerm u_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
                  ATerm i_31 = NULL;
                  ATerm l_31 = NULL;
                  t = new_0(t);
                  {
                    i_31 = t;
                    {
                      if(((g_31 != NULL) && (g_31 != i_31)))
                        _fail(i_31);
                      else
                        g_31 = i_31;
                      {
                        t = not_null(t_30);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm j_31 = NULL,k_31 = NULL;
                            j_31 = t;
                            l_30 :
                            if(match_cons(j_31, sym_RootApp_1))
                              {
                                k_31 = ATgetArgument(j_31, 0);
                                {
                                  if(((f_31 != NULL) && (f_31 != k_31)))
                                    _fail(k_31);
                                  else
                                    f_31 = k_31;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            l_31 = t;
                            if(((h_31 != NULL) && (h_31 != l_31)))
                              _fail(l_31);
                            else
                              h_31 = l_31;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_31))));
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = u_10;
                  {
                    ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
                    ATerm h_35 = NULL;
                    ATerm l_35 = NULL;
                    t = new_0(t);
                    {
                      h_35 = t;
                      {
                        if(((p_31 != NULL) && (p_31 != h_35)))
                          _fail(h_35);
                        else
                          p_31 = h_35;
                        {
                          t = not_null(t_30);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
                              i_35 = t;
                              p_30 :
                              if(match_cons(i_35, sym_App_2))
                                {
                                  j_35 = ATgetArgument(i_35, 0);
                                  k_35 = ATgetArgument(i_35, 1);
                                  {
                                    if(((n_31 != NULL) && (n_31 != j_35)))
                                      _fail(j_35);
                                    else
                                      n_31 = j_35;
                                    {
                                      if(((o_31 != NULL) && (o_31 != k_35)))
                                        _fail(k_35);
                                      else
                                        o_31 = k_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_31));
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
                              l_35 = t;
                              if(((q_31 != NULL) && (q_31 != l_35)))
                                _fail(l_35);
                              else
                                q_31 = l_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_31), not_null(o_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_31)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_31))));
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
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  z_36 = t;
  x_36 :
  if(match_cons(z_36, sym_Build_1))
    {
      a_37 = ATgetArgument(z_36, 0);
      y_36 :
      if(match_cons(a_37, sym_RootApp_1))
        {
          b_37 = ATgetArgument(a_37, 0);
          t = not_null(b_37);
        }
      else
        {
          if(match_cons(a_37, sym_App_2))
            {
              b_37 = ATgetArgument(a_37, 0);
              c_37 = ATgetArgument(a_37, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_37)), not_null(b_37));
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
ATerm As_2 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym_As_2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      {
        ATerm p_40 = NULL,r_40 = NULL;
        ATerm q_40 = NULL;
        t = SSLgetAnnotations(not_null(j_40));
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
        {
          t = not_null(k_40);
          {
            ATerm t_40 = NULL;
            t = c_81(t);
            {
              r_40 = t;
              {
                t = not_null(l_40);
                {
                  ATerm v_40 = NULL;
                  t = d_81(t);
                  {
                    t_40 = t;
                    {
                      ATerm w_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(r_40), not_null(t_40)), not_null(p_40));
                      {
                        w_40 = t;
                        if(((v_40 != NULL) && (v_40 != w_40)))
                          _fail(w_40);
                        else
                          v_40 = w_40;
                      }
                      t = not_null(v_40);
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
ATerm Prim_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym_Prim_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm t_41 = NULL,v_41 = NULL;
        ATerm u_41 = NULL;
        t = SSLgetAnnotations(not_null(n_41));
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
        {
          t = not_null(o_41);
          {
            ATerm d_42 = NULL;
            t = r_84(t);
            {
              v_41 = t;
              {
                t = not_null(p_41);
                {
                  ATerm f_42 = NULL;
                  t = s_84(t);
                  {
                    d_42 = t;
                    {
                      ATerm g_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_41), not_null(d_42)), not_null(t_41));
                      {
                        g_42 = t;
                        if(((f_42 != NULL) && (f_42 != g_42)))
                          _fail(g_42);
                        else
                          f_42 = g_42;
                      }
                      t = not_null(f_42);
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
ATerm Explode_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  r_42 :
  if(match_cons(s_42, sym_Explode_2))
    {
      t_42 = ATgetArgument(s_42, 0);
      u_42 = ATgetArgument(s_42, 1);
      {
        ATerm y_42 = NULL,a_43 = NULL;
        ATerm z_42 = NULL;
        t = SSLgetAnnotations(not_null(s_42));
        {
          z_42 = t;
          if(((y_42 != NULL) && (y_42 != z_42)))
            _fail(z_42);
          else
            y_42 = z_42;
        }
        {
          t = not_null(t_42);
          {
            ATerm c_43 = NULL;
            t = v_80(t);
            {
              a_43 = t;
              {
                t = not_null(u_42);
                {
                  ATerm e_43 = NULL;
                  t = w_80(t);
                  {
                    c_43 = t;
                    {
                      ATerm f_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(a_43), not_null(c_43)), not_null(y_42));
                      {
                        f_43 = t;
                        if(((e_43 != NULL) && (e_43 != f_43)))
                          _fail(f_43);
                        else
                          e_43 = f_43;
                      }
                      t = not_null(e_43);
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
ATerm Op_2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym_Op_2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(r_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(s_43);
          {
            ATerm e_44 = NULL;
            t = t_80(t);
            {
              c_44 = t;
              {
                t = not_null(t_43);
                {
                  ATerm g_44 = NULL;
                  t = u_80(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(c_44), not_null(e_44)), not_null(a_44));
                      {
                        h_44 = t;
                        if(((g_44 != NULL) && (g_44 != h_44)))
                          _fail(h_44);
                        else
                          g_44 = h_44;
                      }
                      t = not_null(g_44);
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
ATerm pat_td_1 (ATerm t, ATerm s_92 (ATerm))
{
  ATerm w_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_92(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = w_10;
      {
        ATerm c_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, s_92);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = c_11;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_92);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  ;
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm j_11 = t;
                    int k_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_92);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        ;
                        LocalPopChoice(k_11);
                      }
                    else
                      {
                        t = j_11;
                        {
                          ATerm l_11 = t;
                          int m_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_92);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              ;
                              LocalPopChoice(m_11);
                            }
                          else
                            {
                              t = l_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_92);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
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
  ATerm v_45 = NULL,w_45 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym_Build_1))
    {
      w_45 = ATgetArgument(v_45, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_45 = NULL,z_45 = NULL;
            ATerm d_46 = NULL;
            t = not_null(w_45);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
                a_46 = t;
                c_45 :
                if(match_cons(a_46, sym_RootApp_1))
                  {
                    b_46 = ATgetArgument(a_46, 0);
                    d_45 :
                    if(match_cons(b_46, sym_Build_1))
                      {
                        c_46 = ATgetArgument(b_46, 0);
                        {
                          if(((y_45 != NULL) && (y_45 != c_46)))
                            _fail(c_46);
                          else
                            y_45 = c_46;
                          t = not_null(y_45);
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
              t = pat_td_1(t, x_1);
              {
                d_46 = t;
                if(((z_45 != NULL) && (z_45 != d_46)))
                  _fail(d_46);
                else
                  z_45 = d_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_45));
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm f_46 = NULL,l_46 = NULL,m_46 = NULL;
              ATerm r_46 = NULL;
              t = not_null(w_45);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
                  n_46 = t;
                  q_45 :
                  if(match_cons(n_46, sym_App_2))
                    {
                      o_46 = ATgetArgument(n_46, 0);
                      q_46 = ATgetArgument(n_46, 1);
                      s_45 :
                      if(match_cons(o_46, sym_Build_1))
                        {
                          p_46 = ATgetArgument(o_46, 0);
                          {
                            if(((l_46 != NULL) && (l_46 != p_46)))
                              _fail(p_46);
                            else
                              l_46 = p_46;
                            {
                              if(((f_46 != NULL) && (f_46 != q_46)))
                                _fail(q_46);
                              else
                                f_46 = q_46;
                              t = not_null(l_46);
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
                t = pat_td_1(t, y_1);
                {
                  r_46 = t;
                  if(((m_46 != NULL) && (m_46 != r_46)))
                    _fail(r_46);
                  else
                    m_46 = r_46;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_46));
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
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = r_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  n_47 :
  if(match_cons(u_47, sym_Lets_2))
    {
      v_47 = ATgetArgument(u_47, 0);
      w_47 = ATgetArgument(u_47, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_47), not_null(w_47));
    }
  else
    {
      if(match_cons(u_47, sym_LChoices_1))
        {
          v_47 = ATgetArgument(u_47, 0);
          o_47 :
          if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
            {
              r_47 = ATgetFirst((ATermList) v_47);
              s_47 = (ATerm) ATgetNext((ATermList) v_47);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_47), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(s_47)));
            }
          else
            {
              if(((ATgetType(v_47) == AT_LIST) && ATisEmpty(v_47)))
                {
                  t = term_h_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(u_47, sym_Choices_1))
            {
              v_47 = ATgetArgument(u_47, 0);
              p_47 :
              if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
                {
                  r_47 = ATgetFirst((ATermList) v_47);
                  s_47 = (ATerm) ATgetNext((ATermList) v_47);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_47), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_47)));
                }
              else
                {
                  if(((ATgetType(v_47) == AT_LIST) && ATisEmpty(v_47)))
                    {
                      t = term_h_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(u_47, sym_Seqs_1))
                {
                  v_47 = ATgetArgument(u_47, 0);
                  q_47 :
                  if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
                    {
                      r_47 = ATgetFirst((ATermList) v_47);
                      s_47 = (ATerm) ATgetNext((ATermList) v_47);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_47), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_47)));
                    }
                  else
                    {
                      if(((ATgetType(v_47) == AT_LIST) && ATisEmpty(v_47)))
                        {
                          t = term_x_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(u_47, sym_DefaultVarDec_1))
                    {
                      v_47 = ATgetArgument(u_47, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_47), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_12), term_e_12));
                    }
                  else
                    {
                      if(match_cons(u_47, sym_InfixApp_3))
                        {
                          v_47 = ATgetArgument(u_47, 0);
                          w_47 = ATgetArgument(u_47, 1);
                          t_47 = ATgetArgument(u_47, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_47), (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), not_null(v_47))));
                        }
                      else
                        {
                          if(match_cons(u_47, sym_BAM_3))
                            {
                              v_47 = ATgetArgument(u_47, 0);
                              w_47 = ATgetArgument(u_47, 1);
                              t_47 = ATgetArgument(u_47, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(t_47))), not_null(v_47)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_47))));
                            }
                          else
                            {
                              if(match_cons(u_47, sym_AM_2))
                                {
                                  v_47 = ATgetArgument(u_47, 0);
                                  w_47 = ATgetArgument(u_47, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_47), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_47)));
                                }
                              else
                                {
                                  if(match_cons(u_47, sym_MA_2))
                                    {
                                      v_47 = ATgetArgument(u_47, 0);
                                      w_47 = ATgetArgument(u_47, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_47)), not_null(w_47));
                                    }
                                  else
                                    {
                                      if(match_cons(u_47, sym_BA_2))
                                        {
                                          v_47 = ATgetArgument(u_47, 0);
                                          w_47 = ATgetArgument(u_47, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_47)), not_null(v_47));
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
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,f_50 = NULL;
  v_49 = t;
  s_49 :
  if(match_cons(v_49, sym__2))
    {
      w_49 = ATgetArgument(v_49, 0);
      z_49 = ATgetArgument(v_49, 1);
      t_49 :
      if(match_cons(w_49, sym__2))
        {
          x_49 = ATgetArgument(w_49, 0);
          y_49 = ATgetArgument(w_49, 1);
          u_49 :
          if(match_cons(z_49, sym__2))
            {
              a_50 = ATgetArgument(z_49, 0);
              f_50 = ATgetArgument(z_49, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_50)), not_null(x_49)), (ATerm) ATinsert(CheckATermList(not_null(f_50)), not_null(y_49)));
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
    {
      o_50 = ATgetFirst((ATermList) n_50);
      p_50 = (ATerm) ATgetNext((ATermList) n_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_50), not_null(p_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  u_50 :
  if(((ATgetType(v_50) == AT_LIST) && ATisEmpty(v_50)))
    {
      t = term_h_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm x_101 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, x_101);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  ATerm h_51 (ATerm t)
  {
    ATerm e_51 = NULL;
    ATerm f_51 = NULL;
    t = not_null(b_51);
    {
      ATerm i_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_12;
        }
      {
        t = new_0(t);
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(e_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))));
    return(t);
  }
  ATerm i_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_51))));
    return(t);
  }
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Var_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_51(t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = i_51(t);
          }
      }
    }
  else
    {
      t = h_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_Var_1))
    {
      y_51 = ATgetArgument(x_51, 0);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_52 = NULL,e_52 = NULL;
            ATerm d_52 = NULL;
            t = SSLgetAnnotations(not_null(x_51));
            {
              d_52 = t;
              if(((c_52 != NULL) && (c_52 != d_52)))
                _fail(d_52);
              else
                c_52 = d_52;
            }
            {
              t = not_null(y_51);
              {
                ATerm g_52 = NULL;
                t = p_0(t);
                {
                  e_52 = t;
                  {
                    ATerm h_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_52)), not_null(c_52));
                    {
                      h_52 = t;
                      if(((g_52 != NULL) && (g_52 != h_52)))
                        _fail(h_52);
                      else
                        g_52 = h_52;
                    }
                    t = not_null(g_52);
                  }
                }
              }
            }
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm r_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_52 = NULL,m_52 = NULL;
                  ATerm l_52 = NULL;
                  t = SSLgetAnnotations(not_null(x_51));
                  {
                    l_52 = t;
                    if(((k_52 != NULL) && (k_52 != l_52)))
                      _fail(l_52);
                    else
                      k_52 = l_52;
                  }
                  {
                    t = not_null(y_51);
                    {
                      ATerm o_52 = NULL;
                      t = p_0(t);
                      {
                        m_52 = t;
                        {
                          ATerm p_52 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_52)), not_null(k_52));
                          {
                            p_52 = t;
                            if(((o_52 != NULL) && (o_52 != p_52)))
                              _fail(p_52);
                            else
                              o_52 = p_52;
                          }
                          t = not_null(o_52);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = r_12;
                  {
                    ATerm s_52 = NULL,u_52 = NULL;
                    ATerm t_52 = NULL;
                    t = SSLgetAnnotations(not_null(x_51));
                    {
                      t_52 = t;
                      if(((s_52 != NULL) && (s_52 != t_52)))
                        _fail(t_52);
                      else
                        s_52 = t_52;
                    }
                    {
                      t = not_null(y_51);
                      {
                        ATerm w_52 = NULL;
                        t = p_0(t);
                        {
                          u_52 = t;
                          {
                            ATerm x_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_52)), not_null(s_52));
                            {
                              x_52 = t;
                              if(((w_52 != NULL) && (w_52 != x_52)))
                                _fail(x_52);
                              else
                                w_52 = x_52;
                            }
                            t = not_null(w_52);
                          }
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
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
  p_53 = t;
  o_53 :
  if(match_cons(p_53, sym_Prim_2))
    {
      q_53 = ATgetArgument(p_53, 0);
      r_53 = ATgetArgument(p_53, 1);
      {
        ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
        ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
        t = not_null(r_53);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm t_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(r_53);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  x_53 = t;
                  m_53 :
                  if(match_cons(x_53, sym__2))
                    {
                      y_53 = ATgetArgument(x_53, 0);
                      z_53 = ATgetArgument(x_53, 1);
                      n_53 :
                      if(match_cons(z_53, sym__2))
                        {
                          a_54 = ATgetArgument(z_53, 0);
                          b_54 = ATgetArgument(z_53, 1);
                          {
                            if(((u_53 != NULL) && (u_53 != y_53)))
                              _fail(y_53);
                            else
                              u_53 = y_53;
                            {
                              if(((v_53 != NULL) && (v_53 != a_54)))
                                _fail(a_54);
                              else
                                v_53 = a_54;
                              if(((w_53 != NULL) && (w_53 != b_54)))
                                _fail(b_54);
                              else
                                w_53 = b_54;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(q_53), not_null(w_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm e_54 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = i_107(t);
      t = e_54(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = e_54(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm j_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Wld_0))
    {
      ATerm l_54 = NULL,n_54 = NULL;
      ATerm u_12;
      u_12 = t;
      {
        ATerm m_54 = NULL;
        t = SSLgetAnnotations(not_null(j_54));
        {
          m_54 = t;
          if(((l_54 != NULL) && (l_54 != m_54)))
            _fail(m_54);
          else
            l_54 = m_54;
        }
      }
      t = u_12;
      {
        ATerm o_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(l_54));
        {
          o_54 = t;
          if(((n_54 != NULL) && (n_54 != o_54)))
            _fail(o_54);
          else
            n_54 = o_54;
        }
        t = not_null(n_54);
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
  ATerm v_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym_App_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm e_55 = NULL,g_55 = NULL;
        ATerm f_55 = NULL;
        t = SSLgetAnnotations(not_null(y_54));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        {
          t = not_null(z_54);
          {
            ATerm i_55 = NULL;
            t = z_80(t);
            {
              g_55 = t;
              {
                t = not_null(a_55);
                {
                  ATerm k_55 = NULL;
                  t = a_81(t);
                  {
                    i_55 = t;
                    {
                      ATerm l_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(g_55), not_null(i_55)), not_null(e_55));
                      {
                        l_55 = t;
                        if(((k_55 != NULL) && (k_55 != l_55)))
                          _fail(l_55);
                        else
                          k_55 = l_55;
                      }
                      t = not_null(k_55);
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
ATerm Con_3 (ATerm t, ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm))
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  y_55 = t;
  x_55 :
  if(match_cons(y_55, sym_Con_3))
    {
      z_55 = ATgetArgument(y_55, 0);
      a_56 = ATgetArgument(y_55, 1);
      b_56 = ATgetArgument(y_55, 2);
      {
        ATerm g_56 = NULL,i_56 = NULL;
        ATerm h_56 = NULL;
        t = SSLgetAnnotations(not_null(y_55));
        {
          h_56 = t;
          if(((g_56 != NULL) && (g_56 != h_56)))
            _fail(h_56);
          else
            g_56 = h_56;
        }
        {
          t = not_null(z_55);
          {
            ATerm k_56 = NULL;
            t = l_81(t);
            {
              i_56 = t;
              {
                t = not_null(a_56);
                {
                  ATerm m_56 = NULL;
                  t = m_81(t);
                  {
                    k_56 = t;
                    {
                      t = not_null(b_56);
                      {
                        ATerm o_56 = NULL;
                        t = n_81(t);
                        {
                          m_56 = t;
                          {
                            ATerm s_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(i_56), not_null(k_56), not_null(m_56)), not_null(g_56));
                            {
                              s_56 = t;
                              if(((o_56 != NULL) && (o_56 != s_56)))
                                _fail(s_56);
                              else
                                o_56 = s_56;
                            }
                            t = not_null(o_56);
                          }
                        }
                      }
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
  ATerm e_13 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  m_57 = t;
  k_57 :
  if(match_cons(m_57, sym_SRule_1))
    {
      n_57 = ATgetArgument(m_57, 0);
      l_57 :
      if(match_cons(n_57, sym_StratRule_3))
        {
          o_57 = ATgetArgument(n_57, 0);
          p_57 = ATgetArgument(n_57, 1);
          q_57 = ATgetArgument(n_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_57))), not_null(o_57)));
        }
      else
        {
          if(match_cons(n_57, sym_Rule_3))
            {
              o_57 = ATgetArgument(n_57, 0);
              p_57 = ATgetArgument(n_57, 1);
              q_57 = ATgetArgument(n_57, 2);
              {
                t = not_null(o_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_57))));
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
ATerm Scope_2 (ATerm t, ATerm x_83 (ATerm), ATerm y_83 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL,s_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_Scope_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      s_58 = ATgetArgument(j_58, 1);
      {
        ATerm w_58 = NULL,y_58 = NULL;
        ATerm x_58 = NULL;
        t = SSLgetAnnotations(not_null(j_58));
        {
          x_58 = t;
          if(((w_58 != NULL) && (w_58 != x_58)))
            _fail(x_58);
          else
            w_58 = x_58;
        }
        {
          t = not_null(k_58);
          {
            ATerm a_59 = NULL;
            t = x_83(t);
            {
              y_58 = t;
              {
                t = not_null(s_58);
                {
                  ATerm c_59 = NULL;
                  t = y_83(t);
                  {
                    a_59 = t;
                    {
                      ATerm d_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_58), not_null(a_59)), not_null(w_58));
                      {
                        d_59 = t;
                        if(((c_59 != NULL) && (c_59 != d_59)))
                          _fail(d_59);
                        else
                          c_59 = d_59;
                      }
                      t = not_null(c_59);
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
ATerm oncetd_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm j_59 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = _one(t, j_59);
      }
    return(t);
  }
  t = j_59(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,e_60 = NULL,f_60 = NULL;
  z_59 = t;
  w_59 :
  if(match_cons(z_59, sym_SRule_1))
    {
      a_60 = ATgetArgument(z_59, 0);
      y_59 :
      if(match_cons(a_60, sym_Rule_3))
        {
          b_60 = ATgetArgument(a_60, 0);
          e_60 = ATgetArgument(a_60, 1);
          f_60 = ATgetArgument(a_60, 2);
          {
            ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
            ATerm t_60 = NULL;
            ATerm z_60 = NULL;
            t = new_0(t);
            {
              t_60 = t;
              {
                if(((q_60 != NULL) && (q_60 != t_60)))
                  _fail(t_60);
                else
                  q_60 = t_60;
                {
                  t = not_null(b_60);
                  {
                    ATerm k_61 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
                      u_60 = t;
                      n_59 :
                      if(match_cons(u_60, sym_Con_3))
                        {
                          v_60 = ATgetArgument(u_60, 0);
                          x_60 = ATgetArgument(u_60, 1);
                          y_60 = ATgetArgument(u_60, 2);
                          o_59 :
                          if(match_cons(v_60, sym_Var_1))
                            {
                              w_60 = ATgetArgument(v_60, 0);
                              {
                                if(((p_60 != NULL) && (p_60 != w_60)))
                                  _fail(w_60);
                                else
                                  p_60 = w_60;
                                {
                                  if(((n_60 != NULL) && (n_60 != x_60)))
                                    _fail(x_60);
                                  else
                                    n_60 = x_60;
                                  {
                                    if(((l_60 != NULL) && (l_60 != y_60)))
                                      _fail(y_60);
                                    else
                                      l_60 = y_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_60));
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
                    t = oncetd_1(t, e_2);
                    {
                      z_60 = t;
                      {
                        if(((r_60 != NULL) && (r_60 != z_60)))
                          _fail(z_60);
                        else
                          r_60 = z_60;
                        {
                          t = not_null(e_60);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm a_61 = NULL,b_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL;
                              a_61 = t;
                              r_59 :
                              if(match_cons(a_61, sym_Con_3))
                                {
                                  b_61 = ATgetArgument(a_61, 0);
                                  f_61 = ATgetArgument(a_61, 1);
                                  g_61 = ATgetArgument(a_61, 2);
                                  s_59 :
                                  if(match_cons(b_61, sym_Var_1))
                                    {
                                      e_61 = ATgetArgument(b_61, 0);
                                      t_59 :
                                      if(match_cons(g_61, sym_Call_2))
                                        {
                                          h_61 = ATgetArgument(g_61, 0);
                                          j_61 = ATgetArgument(g_61, 1);
                                          u_59 :
                                          if(((ATgetType(j_61) == AT_LIST) && ATisEmpty(j_61)))
                                            {
                                              {
                                                if(((p_60 != NULL) && (p_60 != e_61)))
                                                  _fail(e_61);
                                                else
                                                  p_60 = e_61;
                                                {
                                                  if(((o_60 != NULL) && (o_60 != f_61)))
                                                    _fail(f_61);
                                                  else
                                                    o_60 = f_61;
                                                  {
                                                    if(((m_60 != NULL) && (m_60 != h_61)))
                                                      _fail(h_61);
                                                    else
                                                      m_60 = h_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_60));
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
                              return(t);
                            }
                            t = oncetd_1(t, f_2);
                            {
                              k_61 = t;
                              if(((s_60 != NULL) && (s_60 != k_61)))
                                _fail(k_61);
                              else
                                s_60 = k_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_60), not_null(s_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(m_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_60), not_null(o_60), term_x_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_60)))))));
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
  ATerm g_2 (ATerm t)
  {
    ATerm m_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = m_13;
        {
          ATerm t_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(y_13);
            }
          else
            {
              t = t_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm b_97 (ATerm))
{
  t = b_97(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, b_97);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(e_14);
                      }
                    else
                      {
                        t = d_14;
                        {
                          ATerm f_14 = t;
                          int i_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(i_14);
                            }
                          else
                            {
                              t = f_14;
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
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm w_61 = NULL;
  w_61 = t;
  v_61 :
  if(match_cons(w_61, sym__0))
    {
      ATerm y_61 = NULL,a_62 = NULL;
      ATerm l_14;
      l_14 = t;
      {
        ATerm z_61 = NULL;
        t = SSLgetAnnotations(not_null(w_61));
        {
          z_61 = t;
          if(((y_61 != NULL) && (y_61 != z_61)))
            _fail(z_61);
          else
            y_61 = z_61;
        }
      }
      t = l_14;
      {
        ATerm b_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(y_61));
        {
          b_62 = t;
          if(((a_62 != NULL) && (a_62 != b_62)))
            _fail(b_62);
          else
            a_62 = b_62;
        }
        t = not_null(a_62);
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
  ATerm n_62 = NULL;
  ATerm p_62 = NULL,q_62 = NULL,y_62 = NULL,a_63 = NULL;
  n_62 = t;
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm r_62 = NULL;
      ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
      t = not_null(n_62);
      {
        r_62 = t;
        {
          t = SSL_explode_term(not_null(r_62));
          {
            t_62 = t;
            i_62 :
            if(match_cons(t_62, sym__2))
              {
                u_62 = ATgetArgument(t_62, 0);
                v_62 = ATgetArgument(t_62, 1);
                j_62 :
                if(match_string(u_62, ""))
                  {
                    k_62 :
                    if(((ATgetType(v_62) == AT_LIST) && !(ATisEmpty(v_62))))
                      {
                        w_62 = ATgetFirst((ATermList) v_62);
                        x_62 = (ATerm) ATgetNext((ATermList) v_62);
                        {
                          if(((p_62 != NULL) && (p_62 != w_62)))
                            _fail(w_62);
                          else
                            p_62 = w_62;
                          if(((q_62 != NULL) && (q_62 != x_62)))
                            _fail(x_62);
                          else
                            q_62 = x_62;
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
    t = p_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm z_62 = NULL;
        t = term_a_10;
        {
          z_62 = t;
          if(((y_62 != NULL) && (y_62 != z_62)))
            _fail(z_62);
          else
            y_62 = z_62;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(y_62), not_null(q_62));
        {
          a_63 = t;
          t = not_null(a_63);
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
ATerm tuple_unzip_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm w_63 = NULL,y_63 = NULL,a_64 = NULL;
  ATerm c_64 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_63 = NULL,u_63 = NULL;
        ATerm w_14;
        w_14 = t;
        {
          ATerm t_63 = NULL;
          t = map_1(t, Thd_0);
          {
            t = d_101(t);
            {
              t_63 = t;
              if(((s_63 != NULL) && (s_63 != t_63)))
                _fail(t_63);
              else
                s_63 = t_63;
            }
          }
        }
        t = w_14;
        {
          ATerm v_63 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = c_64(t);
            {
              v_63 = t;
              if(((u_63 != NULL) && (u_63 != v_63)))
                _fail(v_63);
              else
                u_63 = v_63;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(u_63)), not_null(s_63));
        }
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = c_64(t);
  {
    ATerm x_14;
    x_14 = t;
    {
      ATerm x_63 = NULL;
      x_63 = t;
      if(((w_63 != NULL) && (w_63 != x_63)))
        _fail(x_63);
      else
        w_63 = x_63;
    }
    t = x_14;
    {
      ATerm y_14;
      y_14 = t;
      {
        ATerm z_63 = NULL;
        t = term_a_10;
        {
          z_63 = t;
          if(((y_63 != NULL) && (y_63 != z_63)))
            _fail(z_63);
          else
            y_63 = z_63;
        }
      }
      t = y_14;
      {
        t = SSL_mkterm(not_null(y_63), not_null(w_63));
        {
          a_64 = t;
          t = not_null(a_64);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm m_64 = NULL;
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  m_64 = t;
  {
    ATerm r_64 = NULL;
    ATerm s_64 = NULL;
    t = new_0(t);
    {
      r_64 = t;
      {
        if(((o_64 != NULL) && (o_64 != r_64)))
          _fail(r_64);
        else
          o_64 = r_64;
        {
          ATerm t_64 = NULL;
          t = new_0(t);
          {
            s_64 = t;
            {
              if(((p_64 != NULL) && (p_64 != s_64)))
                _fail(s_64);
              else
                p_64 = s_64;
              {
                t = new_0(t);
                {
                  t_64 = t;
                  if(((q_64 != NULL) && (q_64 != t_64)))
                    _fail(t_64);
                  else
                    q_64 = t_64;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_64)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_64)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_64))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_64), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_12), term_e_12)), not_null(p_64), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_64)), not_null(q_64), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_64)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  a_65 = t;
  z_64 :
  if(match_cons(a_65, sym__2))
    {
      b_65 = ATgetArgument(a_65, 0);
      c_65 = ATgetArgument(a_65, 1);
      {
        ATerm b_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_65), not_null(c_65));
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = b_15;
            t = SSL_subtr(not_null(b_65), not_null(c_65));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm g_111 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
    p_65 = t;
    h_65 :
    if(match_cons(p_65, sym__2))
      {
        q_65 = ATgetArgument(p_65, 0);
        r_65 = ATgetArgument(p_65, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(q_65), not_null(r_65), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
    u_65 = t;
    j_65 :
    if(match_cons(u_65, sym__3))
      {
        v_65 = ATgetArgument(u_65, 0);
        w_65 = ATgetArgument(u_65, 1);
        x_65 = ATgetArgument(u_65, 2);
        k_65 :
        if(match_int(v_65, 0))
          {
            t = not_null(x_65);
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
  ATerm m_2 (ATerm t)
  {
    ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
    a_66 = t;
    o_65 :
    if(match_cons(a_66, sym__3))
      {
        b_66 = ATgetArgument(a_66, 0);
        c_66 = ATgetArgument(a_66, 1);
        d_66 = ATgetArgument(a_66, 2);
        {
          ATerm h_66 = NULL,j_66 = NULL;
          ATerm j_15;
          j_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_66), term_e_7);
            t = geq_0(t);
          }
          t = j_15;
          {
            ATerm r_15;
            r_15 = t;
            {
              ATerm i_66 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_66), term_e_7);
              {
                t = subt_0(t);
                {
                  i_66 = t;
                  if(((h_66 != NULL) && (h_66 != i_66)))
                    _fail(i_66);
                  else
                    h_66 = i_66;
                }
              }
            }
            t = r_15;
            {
              ATerm k_66 = NULL;
              t = not_null(c_66);
              {
                t = g_111(t);
                {
                  k_66 = t;
                  if(((j_66 != NULL) && (j_66 != k_66)))
                    _fail(k_66);
                  else
                    j_66 = k_66;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(h_66), not_null(c_66), (ATerm) ATinsert(CheckATermList(not_null(d_66)), not_null(j_66)));
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  e_67 = t;
  y_66 :
  if(match_cons(e_67, sym__2))
    {
      f_67 = ATgetArgument(e_67, 0);
      g_67 = ATgetArgument(e_67, 1);
      {
        ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
        ATerm m_67 = NULL;
        ATerm n_67 = NULL;
        t = new_0(t);
        {
          m_67 = t;
          {
            if(((j_67 != NULL) && (j_67 != m_67)))
              _fail(m_67);
            else
              j_67 = m_67;
            {
              ATerm o_67 = NULL;
              t = new_0(t);
              {
                n_67 = t;
                {
                  if(((k_67 != NULL) && (k_67 != n_67)))
                    _fail(n_67);
                  else
                    k_67 = n_67;
                  {
                    t = new_0(t);
                    {
                      o_67 = t;
                      if(((l_67 != NULL) && (l_67 != o_67)))
                        _fail(o_67);
                      else
                        l_67 = o_67;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67)))), (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_67))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_67))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_12), term_e_12)), not_null(k_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_67)), not_null(l_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_67)));
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
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  u_67 :
  if(match_cons(w_67, sym__2))
    {
      x_67 = ATgetArgument(w_67, 0);
      y_67 = ATgetArgument(w_67, 1);
      v_67 :
      if(((ATgetType(y_67) == AT_LIST) && ATisEmpty(y_67)))
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
ATerm zipr_1 (ATerm t, ATerm v_101 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, v_101);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  e_68 = t;
  b_68 :
  if(((ATgetType(e_68) == AT_LIST) && !(ATisEmpty(e_68))))
    {
      f_68 = ATgetFirst((ATermList) e_68);
      g_68 = (ATerm) ATgetNext((ATermList) e_68);
      t = not_null(g_68);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  k_68 :
  if(((ATgetType(r_68) == AT_LIST) && !(ATisEmpty(r_68))))
    {
      s_68 = ATgetFirst((ATermList) r_68);
      t_68 = (ATerm) ATgetNext((ATermList) r_68);
      q_68 :
      if(((ATgetType(t_68) == AT_LIST) && ATisEmpty(t_68)))
        {
          t = not_null(s_68);
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
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  ATerm x_71 (ATerm t)
  {
    ATerm c_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,z_70 = NULL;
    ATerm u_15;
    u_15 = t;
    {
      ATerm m_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
      ATerm n_70 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_69), term_e_7);
      {
        t = add_0(t);
        {
          n_70 = t;
          if(((m_70 != NULL) && (m_70 != n_70)))
            _fail(n_70);
          else
            m_70 = n_70;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_70), term_v_15);
        {
          t = copy_1(t, new_0);
          {
            o_70 = t;
            g_69 :
            if(((ATgetType(o_70) == AT_LIST) && !(ATisEmpty(o_70))))
              {
                p_70 = ATgetFirst((ATermList) o_70);
                q_70 = (ATerm) ATgetNext((ATermList) o_70);
                {
                  ATerm r_70 = NULL;
                  if(((e_70 != NULL) && (e_70 != p_70)))
                    _fail(p_70);
                  else
                    e_70 = p_70;
                  {
                    if(((f_70 != NULL) && (f_70 != q_70)))
                      _fail(q_70);
                    else
                      f_70 = q_70;
                    {
                      t = not_null(f_70);
                      {
                        ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
                        t = last_0(t);
                        {
                          r_70 = t;
                          {
                            if(((c_70 != NULL) && (c_70 != r_70)))
                              _fail(r_70);
                            else
                              c_70 = r_70;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_70)), not_null(e_70)), not_null(f_70));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    s_70 = t;
                                    f_69 :
                                    if(match_cons(s_70, sym__6))
                                      {
                                        t_70 = ATgetArgument(s_70, 0);
                                        u_70 = ATgetArgument(s_70, 1);
                                        v_70 = ATgetArgument(s_70, 2);
                                        w_70 = ATgetArgument(s_70, 3);
                                        x_70 = ATgetArgument(s_70, 4);
                                        y_70 = ATgetArgument(s_70, 5);
                                        {
                                          if(((g_70 != NULL) && (g_70 != t_70)))
                                            _fail(t_70);
                                          else
                                            g_70 = t_70;
                                          {
                                            if(((h_70 != NULL) && (h_70 != u_70)))
                                              _fail(u_70);
                                            else
                                              h_70 = u_70;
                                            {
                                              if(((i_70 != NULL) && (i_70 != v_70)))
                                                _fail(v_70);
                                              else
                                                i_70 = v_70;
                                              {
                                                if(((j_70 != NULL) && (j_70 != w_70)))
                                                  _fail(w_70);
                                                else
                                                  j_70 = w_70;
                                                {
                                                  if(((k_70 != NULL) && (k_70 != x_70)))
                                                    _fail(x_70);
                                                  else
                                                    k_70 = x_70;
                                                  if(((l_70 != NULL) && (l_70 != y_70)))
                                                    _fail(y_70);
                                                  else
                                                    l_70 = y_70;
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
    t = u_15;
    {
      ATerm a_71 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_70)), not_null(i_70)), not_null(f_70));
      {
        t = concat_0(t);
        {
          a_71 = t;
          if(((z_70 != NULL) && (z_70 != a_71)))
            _fail(a_71);
          else
            z_70 = a_71;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_69), term_w_15), not_null(h_70), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_70)), not_null(e_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_69), not_null(j_70)))), (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_69), not_null(l_70)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_70))))));
    }
    return(t);
  }
  ATerm y_71 (ATerm t)
  {
    ATerm c_71 = NULL;
    ATerm d_71 = NULL;
    t = new_0(t);
    {
      d_71 = t;
      if(((c_71 != NULL) && (c_71 != d_71)))
        _fail(d_71);
      else
        c_71 = d_71;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_69), term_w_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_69), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_69), (ATerm) ATempty))), term_x_11))));
    return(t);
  }
  ATerm z_71 (ATerm t)
  {
    ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,v_71 = NULL;
    ATerm x_15;
    x_15 = t;
    {
      ATerm n_71 = NULL;
      ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL;
      t = new_0(t);
      {
        n_71 = t;
        {
          if(((g_71 != NULL) && (g_71 != n_71)))
            _fail(n_71);
          else
            g_71 = n_71;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_71)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  o_71 = t;
                  l_69 :
                  if(match_cons(o_71, sym__6))
                    {
                      p_71 = ATgetArgument(o_71, 0);
                      q_71 = ATgetArgument(o_71, 1);
                      r_71 = ATgetArgument(o_71, 2);
                      s_71 = ATgetArgument(o_71, 3);
                      t_71 = ATgetArgument(o_71, 4);
                      u_71 = ATgetArgument(o_71, 5);
                      {
                        if(((h_71 != NULL) && (h_71 != p_71)))
                          _fail(p_71);
                        else
                          h_71 = p_71;
                        {
                          if(((i_71 != NULL) && (i_71 != q_71)))
                            _fail(q_71);
                          else
                            i_71 = q_71;
                          {
                            if(((j_71 != NULL) && (j_71 != r_71)))
                              _fail(r_71);
                            else
                              j_71 = r_71;
                            {
                              if(((k_71 != NULL) && (k_71 != s_71)))
                                _fail(s_71);
                              else
                                k_71 = s_71;
                              {
                                if(((l_71 != NULL) && (l_71 != t_71)))
                                  _fail(t_71);
                                else
                                  l_71 = t_71;
                                if(((m_71 != NULL) && (m_71 != u_71)))
                                  _fail(u_71);
                                else
                                  m_71 = u_71;
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
    t = x_15;
    {
      ATerm w_71 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_71), not_null(l_71));
      {
        t = conc_0(t);
        {
          w_71 = t;
          if(((v_71 != NULL) && (v_71 != w_71)))
            _fail(w_71);
          else
            v_71 = w_71;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_69), term_d_16), not_null(i_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_71)), not_null(g_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_69), not_null(k_71)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(r_69), not_null(m_71)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_71))))));
    }
    return(t);
  }
  q_69 = t;
  n_69 :
  if(match_cons(q_69, sym__3))
    {
      r_69 = ATgetArgument(q_69, 0);
      s_69 = ATgetArgument(q_69, 1);
      t_69 = ATgetArgument(q_69, 2);
      o_69 :
      if(match_string(s_69, "T"))
        {
          p_69 :
          if(match_int(t_69, 0))
            {
              ATerm i_16 = t;
              int q_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_71(t);
                  ;
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = i_16;
                  t = y_71(t);
                }
            }
          else
            {
              t = x_71(t);
            }
        }
      else
        {
          if(match_string(s_69, "D"))
            {
              t = z_71(t);
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
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
  t_72 = t;
  q_72 :
  if(match_cons(t_72, sym__2))
    {
      u_72 = ATgetArgument(t_72, 0);
      g_73 = ATgetArgument(t_72, 1);
      r_72 :
      if(match_cons(u_72, sym__2))
        {
          v_72 = ATgetArgument(u_72, 0);
          f_73 = ATgetArgument(u_72, 1);
          s_72 :
          if(match_cons(v_72, sym_Mod_2))
            {
              w_72 = ATgetArgument(v_72, 0);
              e_73 = ATgetArgument(v_72, 1);
              {
                ATerm n_73 = NULL;
                ATerm o_73 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_72), not_null(e_73), not_null(f_73));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      o_73 = t;
                      if(((n_73 != NULL) && (n_73 != o_73)))
                        _fail(o_73);
                      else
                        n_73 = o_73;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(g_73));
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
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
  u_73 = t;
  s_73 :
  if(match_cons(u_73, sym__5))
    {
      v_73 = ATgetArgument(u_73, 0);
      y_73 = ATgetArgument(u_73, 1);
      z_73 = ATgetArgument(u_73, 2);
      a_74 = ATgetArgument(u_73, 3);
      b_74 = ATgetArgument(u_73, 4);
      t_73 :
      if(((ATgetType(v_73) == AT_LIST) && !(ATisEmpty(v_73))))
        {
          w_73 = ATgetFirst((ATermList) v_73);
          x_73 = (ATerm) ATgetNext((ATermList) v_73);
          t = (ATerm) ATmakeAppl(sym__5, not_null(x_73), not_null(y_73), not_null(z_73), not_null(a_74), (ATerm) ATinsert(CheckATermList(not_null(b_74)), not_null(w_73)));
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
ATerm diff_1 (ATerm t, ATerm g_108 (ATerm))
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  k_74 :
  if(match_cons(s_74, sym__2))
    {
      t_74 = ATgetArgument(s_74, 0);
      u_74 = ATgetArgument(s_74, 1);
      {
        t = not_null(t_74);
        {
          ATerm y_74 (ATerm t)
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                {
                  ATerm z_16 = t;
                  int a_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(u_74);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_108, n_2);
                      t = y_74(t);
                      ;
                      LocalPopChoice(a_17);
                    }
                  else
                    {
                      t = z_16;
                      t = Cons_2(t, _id, y_74);
                    }
                }
              }
            return(t);
          }
          t = y_74(t);
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
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  c_75 = t;
  a_75 :
  if(match_cons(c_75, sym__2))
    {
      d_75 = ATgetArgument(c_75, 0);
      e_75 = ATgetArgument(c_75, 1);
      b_75 :
      if(((ATgetType(e_75) == AT_LIST) && !(ATisEmpty(e_75))))
        {
          f_75 = ATgetFirst((ATermList) e_75);
          g_75 = (ATerm) ATgetNext((ATermList) e_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_75)), not_null(f_75)), not_null(g_75));
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
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  m_75 :
  if(match_cons(n_75, sym__2))
    {
      o_75 = ATgetArgument(n_75, 0);
      p_75 = ATgetArgument(n_75, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_75)), not_null(o_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  h_76 = t;
  e_76 :
  if(match_cons(h_76, sym__2))
    {
      i_76 = ATgetArgument(h_76, 0);
      o_76 = ATgetArgument(h_76, 1);
      f_76 :
      if(((ATgetType(i_76) == AT_LIST) && !(ATisEmpty(i_76))))
        {
          m_76 = ATgetFirst((ATermList) i_76);
          n_76 = (ATerm) ATgetNext((ATermList) i_76);
          g_76 :
          if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
            {
              p_76 = ATgetFirst((ATermList) o_76);
              q_76 = (ATerm) ATgetNext((ATermList) o_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_76), not_null(p_76)), (ATerm) ATmakeAppl(sym__2, not_null(n_76), not_null(q_76)));
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
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  r_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      s_77 :
      if(((ATgetType(a_78) == AT_LIST) && ATisEmpty(a_78)))
        {
          t_77 :
          if(((ATgetType(b_78) == AT_LIST) && ATisEmpty(b_78)))
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
ATerm genzip_4 (ATerm t, ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm))
{
  ATerm g_78 (ATerm t)
  {
    ATerm b_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_101(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = b_17;
        {
          t = o_101(t);
          {
            t = _2(t, q_101, g_78);
            t = p_101(t);
          }
        }
      }
    return(t);
  }
  t = g_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_101);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
  r_78 = t;
  p_78 :
  if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
    {
      s_78 = ATgetFirst((ATermList) r_78);
      v_78 = (ATerm) ATgetNext((ATermList) r_78);
      q_78 :
      if(match_cons(s_78, sym__2))
        {
          t_78 = ATgetArgument(s_78, 0);
          u_78 = ATgetArgument(s_78, 1);
          {
            ATerm z_78 = NULL,a_79 = NULL,g_79 = NULL,m_79 = NULL;
            ATerm k_17;
            k_17 = t;
            {
              ATerm b_79 = NULL;
              ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
              t = not_null(u_78);
              {
                b_79 = t;
                {
                  t = SSL_explode_term(not_null(b_79));
                  {
                    d_79 = t;
                    k_78 :
                    if(match_cons(d_79, sym__2))
                      {
                        e_79 = ATgetArgument(d_79, 0);
                        f_79 = ATgetArgument(d_79, 1);
                        {
                          if(((z_78 != NULL) && (z_78 != e_79)))
                            _fail(e_79);
                          else
                            z_78 = e_79;
                          if(((a_79 != NULL) && (a_79 != f_79)))
                            _fail(f_79);
                          else
                            a_79 = f_79;
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
            t = k_17;
            {
              ATerm l_17;
              l_17 = t;
              {
                ATerm h_79 = NULL;
                ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
                t = not_null(t_78);
                {
                  h_79 = t;
                  {
                    t = SSL_explode_term(not_null(h_79));
                    {
                      j_79 = t;
                      n_78 :
                      if(match_cons(j_79, sym__2))
                        {
                          k_79 = ATgetArgument(j_79, 0);
                          l_79 = ATgetArgument(j_79, 1);
                          {
                            if(((z_78 != NULL) && (z_78 != k_79)))
                              _fail(k_79);
                            else
                              z_78 = k_79;
                            if(((g_79 != NULL) && (g_79 != l_79)))
                              _fail(l_79);
                            else
                              g_79 = l_79;
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
              t = l_17;
              {
                ATerm p_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_79), not_null(a_79));
                {
                  t = zip_1(t, _id);
                  {
                    p_79 = t;
                    if(((m_79 != NULL) && (m_79 != p_79)))
                      _fail(p_79);
                    else
                      m_79 = p_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_79), not_null(v_78));
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
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  b_80 = t;
  z_79 :
  if(((ATgetType(b_80) == AT_LIST) && !(ATisEmpty(b_80))))
    {
      c_80 = ATgetFirst((ATermList) b_80);
      f_80 = (ATerm) ATgetNext((ATermList) b_80);
      a_80 :
      if(match_cons(c_80, sym__2))
        {
          d_80 = ATgetArgument(c_80, 0);
          e_80 = ATgetArgument(c_80, 1);
          {
            ATerm h_80 = NULL;
            if(((d_80 != NULL) && (d_80 != e_80)))
              _fail(e_80);
            else
              d_80 = e_80;
            {
              if(((h_80 != NULL) && (h_80 != f_80)))
                _fail(f_80);
              else
                h_80 = f_80;
              t = not_null(h_80);
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
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm k_80 = NULL;
        k_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_80));
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm h_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = h_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, r_2);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_2, p_2, q_2);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm))
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,o_81 = NULL,p_81 = NULL;
  f_81 = t;
  b_81 :
  if(match_cons(f_81, sym__5))
    {
      g_81 = ATgetArgument(f_81, 0);
      j_81 = ATgetArgument(f_81, 1);
      k_81 = ATgetArgument(f_81, 2);
      o_81 = ATgetArgument(f_81, 3);
      p_81 = ATgetArgument(f_81, 4);
      e_81 :
      if(((ATgetType(g_81) == AT_LIST) && !(ATisEmpty(g_81))))
        {
          h_81 = ATgetFirst((ATermList) g_81);
          i_81 = (ATerm) ATgetNext((ATermList) g_81);
          {
            ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,f_82 = NULL,h_82 = NULL,j_82 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_81), not_null(k_81));
              {
                t = e_123(t);
                {
                  a_82 = t;
                  r_80 :
                  if(match_cons(a_82, sym__2))
                    {
                      b_82 = ATgetArgument(a_82, 0);
                      c_82 = ATgetArgument(a_82, 1);
                      {
                        ATerm d_82 = NULL;
                        if(((x_81 != NULL) && (x_81 != b_82)))
                          _fail(b_82);
                        else
                          x_81 = b_82;
                        {
                          if(((w_81 != NULL) && (w_81 != c_82)))
                            _fail(c_82);
                          else
                            w_81 = c_82;
                          {
                            t = not_null(x_81);
                            {
                              ATerm e_82 = NULL;
                              t = f_123(t);
                              {
                                d_82 = t;
                                {
                                  if(((y_81 != NULL) && (y_81 != d_82)))
                                    _fail(d_82);
                                  else
                                    y_81 = d_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_81), not_null(j_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        e_82 = t;
                                        if(((z_81 != NULL) && (z_81 != e_82)))
                                          _fail(e_82);
                                        else
                                          z_81 = e_82;
                                      }
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
            t = k_18;
            {
              ATerm l_18;
              l_18 = t;
              {
                ATerm g_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_81), not_null(i_81));
                {
                  t = conc_0(t);
                  {
                    g_82 = t;
                    if(((f_82 != NULL) && (f_82 != g_82)))
                      _fail(g_82);
                    else
                      f_82 = g_82;
                  }
                }
              }
              t = l_18;
              {
                ATerm m_18;
                m_18 = t;
                {
                  ATerm i_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_81), not_null(j_81));
                  {
                    t = conc_0(t);
                    {
                      i_82 = t;
                      if(((h_82 != NULL) && (h_82 != i_82)))
                        _fail(i_82);
                      else
                        h_82 = i_82;
                    }
                  }
                }
                t = m_18;
                {
                  ATerm k_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_81), not_null(x_81), not_null(o_81));
                  {
                    t = g_123(t);
                    {
                      k_82 = t;
                      if(((j_82 != NULL) && (j_82 != k_82)))
                        _fail(k_82);
                      else
                        j_82 = k_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(f_82), not_null(h_82), not_null(w_81), not_null(j_82), not_null(p_81));
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
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  v_82 = t;
  t_82 :
  if(match_cons(v_82, sym__5))
    {
      w_82 = ATgetArgument(v_82, 0);
      x_82 = ATgetArgument(v_82, 1);
      y_82 = ATgetArgument(v_82, 2);
      z_82 = ATgetArgument(v_82, 3);
      a_83 = ATgetArgument(v_82, 4);
      u_82 :
      if(((ATgetType(w_82) == AT_LIST) && ATisEmpty(w_82)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_82), not_null(a_83));
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
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL;
  i_83 = t;
  h_83 :
  if(match_cons(i_83, sym__3))
    {
      j_83 = ATgetArgument(i_83, 0);
      k_83 = ATgetArgument(i_83, 1);
      l_83 = ATgetArgument(i_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(j_83), not_null(j_83), not_null(k_83), not_null(l_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_107 (ATerm), ATerm y_107 (ATerm))
{
  ATerm s_83 (ATerm t)
  {
    ATerm n_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_107(t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = n_18;
        {
          t = y_107(t);
          t = s_83(t);
        }
      }
    return(t);
  }
  t = s_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm))
{
  t = a_108(t);
  t = while_not_2(t, b_108, c_108);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, p_122, q_122, r_122);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm v_83 = NULL,w_83 = NULL,z_83 = NULL,a_84 = NULL;
    v_83 = t;
    u_83 :
    if(match_cons(v_83, sym__3))
      {
        w_83 = ATgetArgument(v_83, 0);
        z_83 = ATgetArgument(v_83, 1);
        a_84 = ATgetArgument(v_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(a_84)), not_null(z_83));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_e_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_123 (ATerm))
{
  ATerm j_84 = NULL,m_84 = NULL,n_84 = NULL;
  j_84 = t;
  i_84 :
  if(match_cons(j_84, sym__2))
    {
      m_84 = ATgetArgument(j_84, 0);
      n_84 = ATgetArgument(j_84, 1);
      {
        ATerm q_84 = NULL,t_84 = NULL,u_84 = NULL;
        ATerm z_18;
        z_18 = t;
        {
          ATerm v_84 = NULL;
          ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
          t = n_123(t);
          {
            v_84 = t;
            {
              if(((q_84 != NULL) && (q_84 != v_84)))
                _fail(v_84);
              else
                q_84 = v_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_84), not_null(m_84), not_null(n_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_19 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_84), term_i_19);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = a_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_84 = t;
                      h_84 :
                      if(((ATgetType(w_84) == AT_LIST) && !(ATisEmpty(w_84))))
                        {
                          x_84 = ATgetFirst((ATermList) w_84);
                          y_84 = (ATerm) ATgetNext((ATermList) w_84);
                          {
                            if(((t_84 != NULL) && (t_84 != x_84)))
                              _fail(x_84);
                            else
                              t_84 = x_84;
                            {
                              if(((u_84 != NULL) && (u_84 != y_84)))
                                _fail(y_84);
                              else
                                u_84 = y_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_84), term_i_19, (ATerm) ATinsert(CheckATermList(not_null(u_84)), (ATerm) ATinsert(CheckATermList(not_null(t_84)), not_null(m_84))));
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
        t = z_18;
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
  ATerm g_85 = NULL;
  ATerm j_85 = NULL;
  g_85 = t;
  {
    ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
    t = not_null(g_85);
    {
      ATerm w_2 (ATerm t)
      {
        t = term_j_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        k_85 = t;
        e_85 :
        if(match_cons(k_85, sym_Defined_2))
          {
            l_85 = ATgetArgument(k_85, 0);
            m_85 = ATgetArgument(k_85, 1);
            f_85 :
            if(match_string(l_85, "e_0"))
              {
                if(((j_85 != NULL) && (j_85 != m_85)))
                  _fail(m_85);
                else
                  j_85 = m_85;
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
    t = not_null(j_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  q_85 :
  if(((ATgetType(r_85) == AT_LIST) && !(ATisEmpty(r_85))))
    {
      s_85 = ATgetFirst((ATermList) r_85);
      t_85 = (ATerm) ATgetNext((ATermList) r_85);
      t = not_null(s_85);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,f_86 = NULL;
  a_86 = t;
  x_85 :
  if(match_cons(a_86, sym__2))
    {
      b_86 = ATgetArgument(a_86, 0);
      f_86 = ATgetArgument(a_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_86), not_null(f_86));
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
ATerm rewrite_1 (ATerm t, ATerm p_123 (ATerm))
{
  ATerm l_86 = NULL;
  ATerm n_86 = NULL;
  l_86 = t;
  {
    ATerm o_86 = NULL;
    t = term_v_15;
    {
      t = p_123(t);
      {
        o_86 = t;
        if(((n_86 != NULL) && (n_86 != o_86)))
          _fail(o_86);
        else
          n_86 = o_86;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_86), not_null(l_86));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
  w_86 = t;
  v_86 :
  if(match_cons(w_86, sym__2))
    {
      x_86 = ATgetArgument(w_86, 0);
      y_86 = ATgetArgument(w_86, 1);
      {
        ATerm c_87 = NULL,d_87 = NULL;
        ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
        t = not_null(w_86);
        {
          ATerm x_2 (ATerm t)
          {
            t = term_k_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            e_87 = t;
            t_86 :
            if(match_cons(e_87, sym_Defined_3))
              {
                f_87 = ATgetArgument(e_87, 0);
                g_87 = ATgetArgument(e_87, 1);
                h_87 = ATgetArgument(e_87, 2);
                u_86 :
                if(match_string(f_87, "c_0"))
                  {
                    if(((c_87 != NULL) && (c_87 != g_87)))
                      _fail(g_87);
                    else
                      c_87 = g_87;
                    if(((d_87 != NULL) && (d_87 != h_87)))
                      _fail(h_87);
                    else
                      d_87 = h_87;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(d_87)), not_null(c_87));
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
  ATerm y_2 (ATerm t)
  {
    ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL;
    q_87 = t;
    p_87 :
    if(match_cons(q_87, sym_SDef_3))
      {
        r_87 = ATgetArgument(q_87, 0);
        s_87 = ATgetArgument(q_87, 1);
        t_87 = ATgetArgument(q_87, 2);
        {
          ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
          ATerm l_19;
          l_19 = t;
          {
            ATerm b_88 = NULL;
            t = not_null(s_87);
            {
              ATerm c_88 = NULL;
              t = length_0(t);
              {
                b_88 = t;
                {
                  if(((z_87 != NULL) && (z_87 != b_88)))
                    _fail(b_88);
                  else
                    z_87 = b_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_87), not_null(z_87));
                    {
                      ATerm f_88 = NULL,h_88 = NULL;
                      ATerm m_19 = t;
                      int p_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          ;
                          LocalPopChoice(p_19);
                        }
                      else
                        {
                          t = m_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        c_88 = t;
                        {
                          if(((y_87 != NULL) && (y_87 != c_88)))
                            _fail(c_88);
                          else
                            y_87 = c_88;
                          {
                            ATerm g_88 = NULL;
                            t = not_null(r_87);
                            {
                              ATerm q_19 = t;
                              int r_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  ;
                                  LocalPopChoice(r_19);
                                }
                              else
                                {
                                  t = q_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                g_88 = t;
                                if(((f_88 != NULL) && (f_88 != g_88)))
                                  _fail(g_88);
                                else
                                  f_88 = g_88;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_87)), not_null(f_88));
                              {
                                t = union_0(t);
                                {
                                  h_88 = t;
                                  {
                                    if(((a_88 != NULL) && (a_88 != h_88)))
                                      _fail(h_88);
                                    else
                                      a_88 = h_88;
                                    {
                                      ATerm s_19;
                                      s_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_87), not_null(z_87)), (ATerm) ATmakeAppl(sym_Defined_3, term_x_19, not_null(q_87), not_null(y_87)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_k_19;
                                            return(t);
                                          }
                                          t = assert_1(t, z_2);
                                        }
                                      }
                                      t = s_19;
                                      {
                                        ATerm y_19;
                                        y_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_87), (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, not_null(a_88)));
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = term_j_19;
                                              return(t);
                                            }
                                            t = assert_1(t, a_3);
                                          }
                                        }
                                        t = y_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = l_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, y_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  p_88 = t;
  o_88 :
  if(match_cons(p_88, sym__2))
    {
      q_88 = ATgetArgument(p_88, 0);
      r_88 = ATgetArgument(p_88, 1);
      if(((q_88 != NULL) && (q_88 != r_88)))
        _fail(r_88);
      else
        q_88 = r_88;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm o_108 (ATerm), ATerm p_108 (ATerm))
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(((ATgetType(x_88) == AT_LIST) && !(ATisEmpty(x_88))))
    {
      y_88 = ATgetFirst((ATermList) x_88);
      z_88 = (ATerm) ATgetNext((ATermList) x_88);
      {
        t = p_108(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm c_89 = NULL;
            c_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_88), not_null(c_89));
              t = o_108(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(z_88);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  h_89 :
  if(match_cons(i_89, sym__2))
    {
      j_89 = ATgetArgument(i_89, 0);
      k_89 = ATgetArgument(i_89, 1);
      {
        t = not_null(j_89);
        {
          ATerm o_89 (ATerm t)
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_89);
                ;
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                {
                  ATerm d_20 = t;
                  int e_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(k_89);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_108, e_3);
                      t = o_89(t);
                      ;
                      LocalPopChoice(e_20);
                    }
                  else
                    {
                      t = d_20;
                      t = Cons_2(t, _id, o_89);
                    }
                }
              }
            return(t);
          }
          t = o_89(t);
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
ATerm foldr_3 (ATerm t, ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm v_110 (ATerm))
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_110(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
        t_89 = t;
        s_89 :
        if(((ATgetType(t_89) == AT_LIST) && !(ATisEmpty(t_89))))
          {
            u_89 = ATgetFirst((ATermList) t_89);
            v_89 = (ATerm) ATgetNext((ATermList) t_89);
            {
              ATerm y_89 = NULL,a_90 = NULL;
              ATerm l_20;
              l_20 = t;
              {
                ATerm z_89 = NULL;
                t = not_null(u_89);
                {
                  t = v_110(t);
                  {
                    z_89 = t;
                    if(((y_89 != NULL) && (y_89 != z_89)))
                      _fail(z_89);
                    else
                      y_89 = z_89;
                  }
                }
              }
              t = l_20;
              {
                ATerm b_90 = NULL;
                t = not_null(v_89);
                {
                  t = foldr_3(t, t_110, u_110, v_110);
                  {
                    b_90 = t;
                    if(((a_90 != NULL) && (a_90 != b_90)))
                      _fail(b_90);
                    else
                      a_90 = b_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_89), not_null(a_90));
                  t = u_110(t);
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
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
    i_90 = t;
    h_90 :
    if(match_cons(i_90, sym_SDef_3))
      {
        j_90 = ATgetArgument(i_90, 0);
        k_90 = ATgetArgument(i_90, 1);
        l_90 = ATgetArgument(i_90, 2);
        {
          ATerm o_90 = NULL;
          ATerm p_90 = NULL;
          t = not_null(k_90);
          {
            t = length_0(t);
            {
              p_90 = t;
              if(((o_90 != NULL) && (o_90 != p_90)))
                _fail(p_90);
              else
                o_90 = p_90;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(j_90), not_null(o_90)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, f_3, union_0, g_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm u_90 = NULL,w_90 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm v_90 = NULL;
    t = definition_names_0(t);
    {
      v_90 = t;
      if(((u_90 != NULL) && (u_90 != v_90)))
        _fail(v_90);
      else
        u_90 = v_90;
    }
  }
  t = p_20;
  {
    ATerm x_90 = NULL;
    t = sort_defs_0(t);
    {
      x_90 = t;
      if(((w_90 != NULL) && (w_90 != x_90)))
        _fail(x_90);
      else
        w_90 = x_90;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(u_90), not_null(w_90), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm f_91 = NULL,g_91 = NULL;
  f_91 = t;
  e_91 :
  if(match_cons(f_91, sym_Strategies_1))
    {
      g_91 = ATgetArgument(f_91, 0);
      {
        ATerm j_91 = NULL,l_91 = NULL;
        ATerm k_91 = NULL;
        t = SSLgetAnnotations(not_null(f_91));
        {
          k_91 = t;
          if(((j_91 != NULL) && (j_91 != k_91)))
            _fail(k_91);
          else
            j_91 = k_91;
        }
        {
          t = not_null(g_91);
          {
            ATerm n_91 = NULL;
            t = r_79(t);
            {
              l_91 = t;
              {
                ATerm o_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_91)), not_null(j_91));
                {
                  o_91 = t;
                  if(((n_91 != NULL) && (n_91 != o_91)))
                    _fail(o_91);
                  else
                    n_91 = o_91;
                }
                t = not_null(n_91);
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
ATerm Cons_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL;
  z_91 = t;
  y_91 :
  if(((ATgetType(z_91) == AT_LIST) && !(ATisEmpty(z_91))))
    {
      a_92 = ATgetFirst((ATermList) z_91);
      b_92 = (ATerm) ATgetNext((ATermList) z_91);
      {
        ATerm f_92 = NULL,h_92 = NULL;
        ATerm g_92 = NULL;
        t = SSLgetAnnotations(not_null(z_91));
        {
          g_92 = t;
          if(((f_92 != NULL) && (f_92 != g_92)))
            _fail(g_92);
          else
            f_92 = g_92;
        }
        {
          t = not_null(a_92);
          {
            ATerm j_92 = NULL;
            t = n_79(t);
            {
              h_92 = t;
              {
                t = not_null(b_92);
                {
                  ATerm l_92 = NULL;
                  t = o_79(t);
                  {
                    j_92 = t;
                    {
                      ATerm m_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_92)), not_null(h_92)), not_null(f_92));
                      {
                        m_92 = t;
                        if(((l_92 != NULL) && (l_92 != m_92)))
                          _fail(m_92);
                        else
                          l_92 = m_92;
                      }
                      t = not_null(l_92);
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
ATerm Specification_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm z_92 = NULL,a_93 = NULL;
  z_92 = t;
  y_92 :
  if(match_cons(z_92, sym_Specification_1))
    {
      a_93 = ATgetArgument(z_92, 0);
      {
        ATerm d_93 = NULL,f_93 = NULL;
        ATerm e_93 = NULL;
        t = SSLgetAnnotations(not_null(z_92));
        {
          e_93 = t;
          if(((d_93 != NULL) && (d_93 != e_93)))
            _fail(e_93);
          else
            d_93 = e_93;
        }
        {
          t = not_null(a_93);
          {
            ATerm h_93 = NULL;
            t = w_79(t);
            {
              f_93 = t;
              {
                ATerm j_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_93)), not_null(d_93));
                {
                  j_93 = t;
                  if(((h_93 != NULL) && (h_93 != j_93)))
                    _fail(j_93);
                  else
                    h_93 = j_93;
                }
                t = not_null(h_93);
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
ATerm _2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm y_93 = NULL,b_94 = NULL,c_94 = NULL;
  y_93 = t;
  x_93 :
  if(match_cons(y_93, sym__2))
    {
      b_94 = ATgetArgument(y_93, 0);
      c_94 = ATgetArgument(y_93, 1);
      {
        ATerm g_94 = NULL,i_94 = NULL;
        ATerm h_94 = NULL;
        t = SSLgetAnnotations(not_null(y_93));
        {
          h_94 = t;
          if(((g_94 != NULL) && (g_94 != h_94)))
            _fail(h_94);
          else
            g_94 = h_94;
        }
        {
          t = not_null(b_94);
          {
            ATerm k_94 = NULL;
            t = e_78(t);
            {
              i_94 = t;
              {
                t = not_null(c_94);
                {
                  ATerm m_94 = NULL;
                  t = f_78(t);
                  {
                    k_94 = t;
                    {
                      ATerm n_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_94), not_null(k_94)), not_null(g_94));
                      {
                        n_94 = t;
                        if(((m_94 != NULL) && (m_94 != n_94)))
                          _fail(n_94);
                        else
                          m_94 = n_94;
                      }
                      t = not_null(m_94);
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
  ATerm r_20;
  r_20 = t;
  {
    ATerm u_94 = NULL;
    ATerm v_94 = NULL;
    t = term_v_15;
    {
      t = whoami_0(t);
      {
        v_94 = t;
        if(((u_94 != NULL) && (u_94 != v_94)))
          _fail(v_94);
        else
          u_94 = v_94;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_20), not_null(u_94)), term_u_20));
      {
        t = printnl_0(t);
        {
          t = term_e_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  z_94 = t;
  y_94 :
  if(match_cons(z_94, sym__2))
    {
      a_95 = ATgetArgument(z_94, 0);
      b_95 = ATgetArgument(z_94, 1);
      {
        ATerm w_20;
        w_20 = t;
        t = SSL_printnl(not_null(a_95), not_null(b_95));
        t = w_20;
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
  ATerm g_95 = NULL;
  g_95 = t;
  t = SSL_implode_string(not_null(g_95));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
        l_95 = t;
        k_95 :
        if(((ATgetType(l_95) == AT_LIST) && !(ATisEmpty(l_95))))
          {
            m_95 = ATgetFirst((ATermList) l_95);
            n_95 = (ATerm) ATgetNext((ATermList) l_95);
            {
              t = not_null(m_95);
              {
                ATerm h_3 (ATerm t)
                {
                  t = not_null(n_95);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_3);
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
  ATerm x_95 = NULL;
  ATerm z_95 = NULL;
  x_95 = t;
  {
    ATerm a_96 = NULL;
    ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL;
    t = not_null(x_95);
    {
      a_96 = t;
      {
        t = SSL_explode_term(not_null(a_96));
        {
          c_96 = t;
          v_95 :
          if(match_cons(c_96, sym__2))
            {
              d_96 = ATgetArgument(c_96, 0);
              e_96 = ATgetArgument(c_96, 1);
              w_95 :
              if(match_string(d_96, ""))
                {
                  if(((z_95 != NULL) && (z_95 != e_96)))
                    _fail(e_96);
                  else
                    z_95 = e_96;
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
      t = not_null(z_95);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm o_96 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_96);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          t = Nil_0(t);
          t = z_93(t);
        }
      }
    return(t);
  }
  t = o_96(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  q_96 :
  if(match_cons(r_96, sym__2))
    {
      s_96 = ATgetArgument(r_96, 0);
      t_96 = ATgetArgument(r_96, 1);
      {
        t = not_null(s_96);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(t_96);
            return(t);
          }
          t = at_end_1(t, i_3);
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
  ATerm b_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = b_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_96 = NULL;
  y_96 = t;
  t = SSL_explode_string(not_null(y_96));
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
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm h_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = h_21;
            {
              ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
              k_97 = t;
              j_97 :
              if(match_cons(k_97, sym_Path_1))
                {
                  l_97 = ATgetArgument(k_97, 0);
                  t = not_null(l_97);
                }
              else
                {
                  if(match_cons(k_97, sym_Var_1))
                    {
                      l_97 = ATgetArgument(k_97, 0);
                      {
                        t = not_null(l_97);
                        {
                          ATerm k_21 = t;
                          int t_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(t_21);
                            }
                          else
                            {
                              t = k_21;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_u_21;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_97, sym_Prefix_2))
                        {
                          l_97 = ATgetArgument(k_97, 0);
                          m_97 = ATgetArgument(k_97, 1);
                          {
                            ATerm r_97 = NULL,t_97 = NULL;
                            ATerm v_21;
                            v_21 = t;
                            {
                              ATerm s_97 = NULL;
                              t = not_null(l_97);
                              {
                                t = eval_config_0(t);
                                {
                                  s_97 = t;
                                  if(((r_97 != NULL) && (r_97 != s_97)))
                                    _fail(s_97);
                                  else
                                    r_97 = s_97;
                                }
                              }
                            }
                            t = v_21;
                            {
                              ATerm u_97 = NULL;
                              t = not_null(m_97);
                              {
                                t = eval_config_0(t);
                                {
                                  u_97 = t;
                                  if(((t_97 != NULL) && (t_97 != u_97)))
                                    _fail(u_97);
                                  else
                                    t_97 = u_97;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_97), not_null(t_97));
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
  ATerm c_98 = NULL;
  c_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_21, not_null(c_98));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_22;
            e_22 = t;
            {
              ATerm e_98 = NULL;
              ATerm h_98 = NULL;
              h_98 = t;
              if(((e_98 != NULL) && (e_98 != h_98)))
                _fail(h_98);
              else
                e_98 = h_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_21, not_null(c_98), not_null(e_98));
                t = table_put_0(t);
              }
            }
            t = e_22;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_116 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm f_22;
    f_22 = t;
    {
      ATerm l_98 = NULL;
      ATerm m_98 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          m_98 = t;
          if(((l_98 != NULL) && (l_98 != m_98)))
            _fail(m_98);
          else
            l_98 = m_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_98), term_m_22);
        t = geq_0(t);
      }
    }
    t = f_22;
    t = y_116(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm s_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL;
  s_98 = t;
  q_98 :
  if(match_cons(s_98, sym__2))
    {
      v_98 = ATgetArgument(s_98, 0);
      w_98 = ATgetArgument(s_98, 1);
      r_98 :
      if(match_cons(w_98, sym_Stream_1))
        {
          x_98 = ATgetArgument(w_98, 0);
          {
            ATerm a_99 = NULL;
            t = SSL_fputc(not_null(v_98), not_null(x_98));
            {
              ATerm b_99 = NULL;
              b_99 = t;
              if(((a_99 != NULL) && (a_99 != b_99)))
                _fail(b_99);
              else
                a_99 = b_99;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_99));
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
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  i_99 = t;
  g_99 :
  if(match_cons(i_99, sym__2))
    {
      j_99 = ATgetArgument(i_99, 0);
      l_99 = ATgetArgument(i_99, 1);
      h_99 :
      if(match_cons(j_99, sym_Stream_1))
        {
          k_99 = ATgetArgument(j_99, 0);
          {
            ATerm o_99 = NULL;
            t = SSL_write_term_to_stream_text(not_null(k_99), not_null(l_99));
            {
              ATerm p_99 = NULL;
              p_99 = t;
              if(((o_99 != NULL) && (o_99 != p_99)))
                _fail(p_99);
              else
                o_99 = p_99;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_99));
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
  ATerm p_3 (ATerm t)
  {
    ATerm u_99 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm v_99 = NULL;
      v_99 = t;
      if(((u_99 != NULL) && (u_99 != v_99)))
        _fail(v_99);
      else
        u_99 = v_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_22, not_null(u_99));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, p_3);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL;
  b_100 = t;
  z_99 :
  if(match_cons(b_100, sym__2))
    {
      c_100 = ATgetArgument(b_100, 0);
      e_100 = ATgetArgument(b_100, 1);
      a_100 :
      if(match_cons(c_100, sym_Stream_1))
        {
          d_100 = ATgetArgument(c_100, 0);
          {
            ATerm h_100 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(d_100), not_null(e_100));
            {
              ATerm i_100 = NULL;
              i_100 = t;
              if(((h_100 != NULL) && (h_100 != i_100)))
                _fail(i_100);
              else
                h_100 = i_100;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_100));
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
ATerm WriteToFile_1 (ATerm t, ATerm u_115 (ATerm))
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  q_100 :
  if(match_cons(r_100, sym__2))
    {
      s_100 = ATgetArgument(r_100, 0);
      t_100 = ATgetArgument(r_100, 1);
      {
        ATerm w_100 = NULL,y_100 = NULL;
        t = not_null(s_100);
        {
          ATerm x_100 = NULL;
          x_100 = t;
          if(((w_100 != NULL) && (w_100 != x_100)))
            _fail(x_100);
          else
            w_100 = x_100;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_100), term_w_22);
            {
              t = open_stream_0(t);
              {
                ATerm z_100 = NULL;
                z_100 = t;
                if(((y_100 != NULL) && (y_100 != z_100)))
                  _fail(z_100);
                else
                  y_100 = z_100;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_100), not_null(t_100));
                  {
                    t = u_115(t);
                    {
                      t = fclose_0(t);
                      t = not_null(t_100);
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
  ATerm j_101 = NULL;
  ATerm x_22;
  x_22 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm k_101 = NULL,l_101 = NULL;
            k_101 = t;
            g_101 :
            if(match_cons(k_101, sym_Output_1))
              {
                l_101 = ATgetArgument(k_101, 0);
                if(((j_101 != NULL) && (j_101 != l_101)))
                  _fail(l_101);
                else
                  j_101 = l_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          {
            ATerm m_101 = NULL;
            t = term_a_23;
            {
              m_101 = t;
              if(((j_101 != NULL) && (j_101 != m_101)))
                _fail(m_101);
              else
                j_101 = m_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = x_22;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(j_101);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm t_101 = NULL;
              t_101 = t;
              i_101 :
              if(!(match_cons(t_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_118 (ATerm))
{
  ATerm b_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  ATerm d_23;
  d_23 = t;
  t = dtime_0(t);
  t = d_23;
  {
    t = w_118(t);
    {
      ATerm e_23;
      e_23 = t;
      {
        ATerm c_102 = NULL;
        t = dtime_0(t);
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
      }
      t = e_23;
      {
        d_102 = t;
        a_102 :
        if(match_cons(d_102, sym__2))
          {
            e_102 = ATgetArgument(d_102, 0);
            f_102 = ATgetArgument(d_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_102))), not_null(f_102));
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
  ATerm n_102 = NULL,o_102 = NULL;
  ATerm u_102 (ATerm t)
  {
    t = SSL_fclose(not_null(o_102));
    return(t);
  }
  o_102 = t;
  m_102 :
  if(match_cons(o_102, sym_Stream_1))
    {
      n_102 = ATgetArgument(o_102, 0);
      {
        ATerm f_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(n_102));
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = f_23;
            t = u_102(t);
          }
      }
    }
  else
    {
      t = u_102(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL;
  y_102 = t;
  x_102 :
  if(match_cons(y_102, sym_Stream_1))
    {
      z_102 = ATgetArgument(y_102, 0);
      t = SSL_read_term_from_stream(not_null(z_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_115 (ATerm))
{
  ATerm m_23;
  m_23 = t;
  {
    ATerm e_103 = NULL,g_103 = NULL;
    ATerm n_23;
    n_23 = t;
    {
      ATerm f_103 = NULL;
      t = g_115(t);
      {
        f_103 = t;
        if(((e_103 != NULL) && (e_103 != f_103)))
          _fail(f_103);
        else
          e_103 = f_103;
      }
    }
    t = n_23;
    {
      ATerm h_103 = NULL;
      h_103 = t;
      if(((g_103 != NULL) && (g_103 != h_103)))
        _fail(h_103);
      else
        g_103 = h_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_103)), not_null(e_103)));
        t = printnl_0(t);
      }
    }
  }
  t = m_23;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL;
  n_103 = t;
  m_103 :
  if(match_cons(n_103, sym__2))
    {
      o_103 = ATgetArgument(n_103, 0);
      p_103 = ATgetArgument(n_103, 1);
      {
        ATerm s_103 = NULL;
        t = SSL_fopen(not_null(o_103), not_null(p_103));
        {
          ATerm t_103 = NULL;
          t_103 = t;
          if(((s_103 != NULL) && (s_103 != t_103)))
            _fail(t_103);
          else
            s_103 = t_103;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_103));
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
  ATerm x_103 = NULL;
  x_103 = t;
  t = SSL_is_string(not_null(x_103));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm b_104 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm c_104 = NULL;
    c_104 = t;
    if(((b_104 != NULL) && (b_104 != c_104)))
      _fail(c_104);
    else
      b_104 = c_104;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_104));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm f_104 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm g_104 = NULL;
    g_104 = t;
    if(((f_104 != NULL) && (f_104 != g_104)))
      _fail(g_104);
    else
      f_104 = g_104;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_104));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm j_104 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm k_104 = NULL;
    k_104 = t;
    if(((j_104 != NULL) && (j_104 != k_104)))
      _fail(k_104);
    else
      j_104 = k_104;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_104));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm q_104 = NULL;
  q_104 = t;
  p_104 :
  if(match_cons(q_104, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(q_104, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(q_104, sym_stdin_0))
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
  ATerm a_105 = NULL;
  ATerm c_105 = NULL,d_105 = NULL;
  a_105 = t;
  {
    ATerm e_105 = NULL;
    ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL,o_105 = NULL,p_105 = NULL;
    t = not_null(a_105);
    {
      e_105 = t;
      {
        t = SSL_explode_term(not_null(e_105));
        {
          g_105 = t;
          x_104 :
          if(match_cons(g_105, sym__2))
            {
              h_105 = ATgetArgument(g_105, 0);
              i_105 = ATgetArgument(g_105, 1);
              y_104 :
              if(match_string(h_105, ""))
                {
                  z_104 :
                  if(((ATgetType(i_105) == AT_LIST) && !(ATisEmpty(i_105))))
                    {
                      o_105 = ATgetFirst((ATermList) i_105);
                      p_105 = (ATerm) ATgetNext((ATermList) i_105);
                      {
                        if(((d_105 != NULL) && (d_105 != o_105)))
                          _fail(o_105);
                        else
                          d_105 = o_105;
                        if(((c_105 != NULL) && (c_105 != p_105)))
                          _fail(p_105);
                        else
                          c_105 = p_105;
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
    t = not_null(d_105);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  w_105 :
  if(match_cons(x_105, sym__2))
    {
      y_105 = ATgetArgument(x_105, 0);
      z_105 = ATgetArgument(x_105, 1);
      {
        ATerm o_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = o_23;
            {
              ATerm x_23 = t;
              int y_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 (ATerm t)
                  {
                    ATerm a_106 = NULL,b_106 = NULL;
                    a_106 = t;
                    v_105 :
                    if(match_cons(a_106, sym_Path_1))
                      {
                        b_106 = ATgetArgument(a_106, 0);
                        t = not_null(b_106);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, w_3, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(y_23);
                }
              else
                {
                  t = x_23;
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
  ATerm j_106 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_106 = NULL;
      ATerm i_106 = NULL;
      i_106 = t;
      if(((h_106 != NULL) && (h_106 != i_106)))
        _fail(i_106);
      else
        h_106 = i_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_106), term_d_24);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm x_3 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = debug_1(t, x_3);
        _fail(t);
      }
    }
  {
    ATerm f_24;
    f_24 = t;
    {
      ATerm k_106 = NULL;
      t = read_from_stream_0(t);
      {
        k_106 = t;
        if(((j_106 != NULL) && (j_106 != k_106)))
          _fail(k_106);
        else
          j_106 = k_106;
      }
    }
    t = f_24;
    {
      t = fclose_0(t);
      t = not_null(j_106);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_100 (ATerm), ATerm o_100 (ATerm))
{
  ATerm p_106 = NULL,r_106 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    ATerm q_106 = NULL;
    t = n_100(t);
    {
      q_106 = t;
      if(((p_106 != NULL) && (p_106 != q_106)))
        _fail(q_106);
      else
        p_106 = q_106;
    }
  }
  t = g_24;
  {
    ATerm s_106 = NULL;
    t = o_100(t);
    {
      s_106 = t;
      if(((r_106 != NULL) && (r_106 != s_106)))
        _fail(s_106);
      else
        r_106 = s_106;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_106), not_null(r_106));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_106 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_106 = NULL,a_107 = NULL;
          z_106 = t;
          w_106 :
          if(match_cons(z_106, sym_Input_1))
            {
              a_107 = ATgetArgument(z_106, 0);
              if(((y_106 != NULL) && (y_106 != a_107)))
                _fail(a_107);
              else
                y_106 = a_107;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        {
          ATerm b_107 = NULL;
          t = term_k_24;
          {
            b_107 = t;
            if(((y_106 != NULL) && (y_106 != b_107)))
              _fail(b_107);
            else
              y_106 = b_107;
          }
        }
      }
  }
  t = h_24;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(y_106);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm g_107 = NULL;
    g_107 = t;
    e_107 :
    if(!(match_string(g_107, "-k")))
      {
        if(!(match_string(g_107, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm l_24;
    l_24 = t;
    {
      ATerm h_107 = NULL;
      ATerm k_107 = NULL;
      t = string_to_int_0(t);
      {
        k_107 = t;
        if(((h_107 != NULL) && (h_107 != k_107)))
          _fail(k_107);
        else
          h_107 = k_107;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_24, not_null(h_107));
        t = set_config_0(t);
      }
    }
    t = l_24;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  t = SSL_string_to_int(not_null(n_107));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm v_107 = NULL;
        v_107 = t;
        q_107 :
        if(!(match_string(v_107, "-S")))
          {
            if(!(match_string(v_107, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_s_24;
        t = set_config_0(t);
        t = term_x_24;
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_y_24;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm h_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm w_107 = NULL;
              w_107 = t;
              r_107 :
              if(!(match_string(w_107, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm f_108 = NULL;
              ATerm d_26;
              d_26 = t;
              {
                ATerm d_108 = NULL;
                ATerm e_108 = NULL;
                t = string_to_int_0(t);
                {
                  e_108 = t;
                  if(((d_108 != NULL) && (d_108 != e_108)))
                    _fail(e_108);
                  else
                    d_108 = e_108;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(d_108));
                  t = set_config_0(t);
                }
              }
              t = d_26;
              {
                ATerm i_108 = NULL;
                i_108 = t;
                if(((f_108 != NULL) && (f_108 != i_108)))
                  _fail(i_108);
                else
                  f_108 = i_108;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_108));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_e_26;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = h_25;
            {
              ATerm j_4 (ATerm t)
              {
                ATerm j_108 = NULL;
                j_108 = t;
                u_107 :
                if(!(match_string(j_108, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_4 (ATerm t)
              {
                t = term_g_26;
                t = set_config_0(t);
                t = term_h_26;
                return(t);
              }
              ATerm l_4 (ATerm t)
              {
                t = term_i_26;
                return(t);
              }
              t = Option_3(t, j_4, k_4, l_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm t_108 = NULL;
    t_108 = t;
    q_108 :
    if(!(match_string(t_108, "-o")))
      {
        if(!(match_string(t_108, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm b_109 = NULL;
    ATerm l_26;
    l_26 = t;
    {
      ATerm u_108 = NULL;
      ATerm a_109 = NULL;
      a_109 = t;
      if(((u_108 != NULL) && (u_108 != a_109)))
        _fail(a_109);
      else
        u_108 = a_109;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(u_108));
        t = set_config_0(t);
      }
    }
    t = l_26;
    {
      ATerm c_109 = NULL;
      c_109 = t;
      if(((b_109 != NULL) && (b_109 != c_109)))
        _fail(c_109);
      else
        b_109 = c_109;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_109));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  t = ArgOption_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm g_109 = NULL;
          g_109 = t;
          f_109 :
          if(!(match_string(g_109, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_r_26;
          t = set_config_0(t);
          t = term_s_26;
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_t_26;
          return(t);
        }
        t = Option_3(t, s_4, t_4, u_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL;
  m_109 = t;
  k_109 :
  if(match_string(m_109, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_109) == AT_LIST) && !(ATisEmpty(m_109))))
        {
          n_109 = ATgetFirst((ATermList) m_109);
          o_109 = (ATerm) ATgetNext((ATermList) m_109);
          l_109 :
          if(((ATgetType(o_109) == AT_LIST) && !(ATisEmpty(o_109))))
            {
              p_109 = ATgetFirst((ATermList) o_109);
              q_109 = (ATerm) ATgetNext((ATermList) o_109);
              {
                ATerm u_109 = NULL;
                ATerm u_26;
                u_26 = t;
                {
                  t = not_null(n_109);
                  t = k_0(t);
                }
                t = u_26;
                {
                  ATerm v_109 = NULL;
                  t = not_null(p_109);
                  {
                    t = m_0(t);
                    {
                      v_109 = t;
                      if(((u_109 != NULL) && (u_109 != v_109)))
                        _fail(v_109);
                      else
                        u_109 = v_109;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_109)), not_null(u_109));
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
  ATerm v_4 (ATerm t)
  {
    ATerm c_110 = NULL;
    c_110 = t;
    z_109 :
    if(!(match_string(c_110, "-i")))
      {
        if(!(match_string(c_110, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm f_110 = NULL;
    ATerm v_26;
    v_26 = t;
    {
      ATerm d_110 = NULL;
      ATerm e_110 = NULL;
      e_110 = t;
      if(((d_110 != NULL) && (d_110 != e_110)))
        _fail(e_110);
      else
        d_110 = e_110;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(d_110));
        t = set_config_0(t);
      }
    }
    t = v_26;
    {
      ATerm g_110 = NULL;
      g_110 = t;
      if(((f_110 != NULL) && (f_110 != g_110)))
        _fail(g_110);
      else
        f_110 = g_110;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_110));
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = ArgOption_3(t, v_4, w_4, x_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm k_110 = NULL;
  t = report_run_time_0(t);
  {
    ATerm l_110 = NULL;
    t = term_v_15;
    {
      t = whoami_0(t);
      {
        l_110 = t;
        if(((k_110 != NULL) && (k_110 != l_110)))
          _fail(l_110);
        else
          k_110 = l_110;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, term_f_27), not_null(k_110)));
      {
        t = printnl_0(t);
        {
          t = term_e_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_27;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_110 = NULL;
  o_110 = t;
  t = SSL_TicksToSeconds(not_null(o_110));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
  y_110 = t;
  x_110 :
  if(match_cons(y_110, sym__2))
    {
      z_110 = ATgetArgument(y_110, 0);
      a_111 = ATgetArgument(y_110, 1);
      {
        ATerm t_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_110), not_null(a_111));
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = t_27;
            t = SSL_addr(not_null(z_110), not_null(a_111));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_110 (ATerm), ATerm s_110 (ATerm))
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_110(t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL;
        j_111 = t;
        i_111 :
        if(((ATgetType(j_111) == AT_LIST) && !(ATisEmpty(j_111))))
          {
            k_111 = ATgetFirst((ATermList) j_111);
            l_111 = (ATerm) ATgetNext((ATermList) j_111);
            {
              ATerm o_111 = NULL;
              ATerm p_111 = NULL;
              t = not_null(l_111);
              {
                t = foldr_2(t, r_110, s_110);
                {
                  p_111 = t;
                  if(((o_111 != NULL) && (o_111 != p_111)))
                    _fail(p_111);
                  else
                    o_111 = p_111;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_111), not_null(o_111));
                t = s_110(t);
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
ATerm crush_2 (ATerm t, ATerm v_108 (ATerm), ATerm w_108 (ATerm))
{
  ATerm w_111 = NULL;
  ATerm y_111 = NULL;
  w_111 = t;
  {
    ATerm z_111 = NULL;
    ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
    t = not_null(w_111);
    {
      z_111 = t;
      {
        t = SSL_explode_term(not_null(z_111));
        {
          b_112 = t;
          v_111 :
          if(match_cons(b_112, sym__2))
            {
              c_112 = ATgetArgument(b_112, 0);
              d_112 = ATgetArgument(b_112, 1);
              if(((y_111 != NULL) && (y_111 != d_112)))
                _fail(d_112);
              else
                y_111 = d_112;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_111);
      t = foldr_2(t, v_108, w_108);
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
    ATerm y_4 (ATerm t)
    {
      t = term_a_20;
      return(t);
    }
    t = crush_2(t, y_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
  j_112 = t;
  i_112 :
  if(match_cons(j_112, sym__2))
    {
      k_112 = ATgetArgument(j_112, 0);
      l_112 = ATgetArgument(j_112, 1);
      {
        ATerm n_28;
        n_28 = t;
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_112), not_null(l_112));
              ;
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              t = SSL_gtr(not_null(k_112), not_null(l_112));
            }
        }
        t = n_28;
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
  ATerm r_112 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL;
      s_112 = t;
      q_112 :
      if(match_cons(s_112, sym__2))
        {
          t_112 = ATgetArgument(s_112, 0);
          u_112 = ATgetArgument(s_112, 1);
          {
            if(((r_112 != NULL) && (r_112 != t_112)))
              _fail(t_112);
            else
              r_112 = t_112;
            if(((r_112 != NULL) && (r_112 != u_112)))
              _fail(u_112);
            else
              r_112 = u_112;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_116 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm s_28;
    s_28 = t;
    {
      ATerm x_112 = NULL;
      ATerm y_112 = NULL;
      t = term_l_22;
      {
        t = get_config_0(t);
        {
          y_112 = t;
          if(((x_112 != NULL) && (x_112 != y_112)))
            _fail(y_112);
          else
            x_112 = y_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_112), term_e_7);
        t = geq_0(t);
      }
    }
    t = s_28;
    t = x_116(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm c_113 = NULL,e_113 = NULL;
    ATerm t_28;
    t_28 = t;
    {
      ATerm d_113 = NULL;
      t = run_time_0(t);
      {
        d_113 = t;
        if(((c_113 != NULL) && (c_113 != d_113)))
          _fail(d_113);
        else
          c_113 = d_113;
      }
    }
    t = t_28;
    {
      ATerm f_113 = NULL;
      t = term_v_15;
      {
        t = whoami_0(t);
        {
          f_113 = t;
          if(((e_113 != NULL) && (e_113 != f_113)))
            _fail(f_113);
          else
            e_113 = f_113;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_28), not_null(c_113)), term_u_28), not_null(e_113)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_a_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_113 = NULL;
  m_113 = t;
  l_113 :
  if(match_cons(m_113, sym_Version_0))
    {
      ATerm o_113 = NULL,q_113 = NULL;
      ATerm w_28;
      w_28 = t;
      {
        ATerm p_113 = NULL;
        t = SSLgetAnnotations(not_null(m_113));
        {
          p_113 = t;
          if(((o_113 != NULL) && (o_113 != p_113)))
            _fail(p_113);
          else
            o_113 = p_113;
        }
      }
      t = w_28;
      {
        ATerm r_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_113));
        {
          r_113 = t;
          if(((q_113 != NULL) && (q_113 != r_113)))
            _fail(r_113);
          else
            q_113 = r_113;
        }
        t = not_null(q_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_119 (ATerm))
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_29;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              {
                ATerm i_29 = t;
                int j_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(j_29);
                  }
                else
                  {
                    t = i_29;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, b_5);
      }
    }
  t = u_119(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_113 = NULL;
  w_113 = t;
  t = SSL_table_create(not_null(w_113));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_114 = NULL;
  a_114 = t;
  {
    ATerm k_29;
    k_29 = t;
    {
      t = term_l_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_29, term_o_29, not_null(a_114));
          t = table_put_0(t);
        }
      }
    }
    t = k_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_114 = NULL;
  e_114 = t;
  t = SSL_table_destroy(not_null(e_114));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_114 = NULL;
  i_114 = t;
  t = SSL_exit(not_null(i_114));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm l_114 (ATerm t)
  {
    ATerm s_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = s_29;
        t = Cons_2(t, k_93, l_114);
      }
    return(t);
  }
  t = l_114(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  u_114 = t;
  r_114 :
  if(((ATgetType(u_114) == AT_LIST) && !(ATisEmpty(u_114))))
    {
      s_114 = ATgetFirst((ATermList) u_114);
      t_114 = (ATerm) ATgetNext((ATermList) u_114);
      {
        ATerm x_114 = NULL;
        t = not_null(t_114);
        {
          ATerm a_30;
          a_30 = t;
          {
            ATerm y_114 = NULL,a_115 = NULL,c_115 = NULL;
            ATerm b_30;
            b_30 = t;
            {
              ATerm z_114 = NULL;
              t = i_0(t);
              {
                z_114 = t;
                if(((y_114 != NULL) && (y_114 != z_114)))
                  _fail(z_114);
                else
                  y_114 = z_114;
              }
            }
            t = b_30;
            {
              ATerm b_115 = NULL;
              t = not_null(s_114);
              {
                t = g_0(t);
                {
                  b_115 = t;
                  if(((a_115 != NULL) && (a_115 != b_115)))
                    _fail(b_115);
                  else
                    a_115 = b_115;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_114)), not_null(a_115));
                {
                  c_115 = t;
                  if(((x_114 != NULL) && (x_114 != c_115)))
                    _fail(c_115);
                  else
                    x_114 = c_115;
                }
              }
            }
          }
          t = a_30;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(x_114);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_114) == AT_LIST) && ATisEmpty(u_114)))
        {
          {
            t = term_v_15;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_121 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm o_115 = NULL,p_115 = NULL;
  o_115 = t;
  n_115 :
  if(match_cons(o_115, sym_Program_1))
    {
      p_115 = ATgetArgument(o_115, 0);
      {
        ATerm s_115 = NULL,v_115 = NULL;
        ATerm t_115 = NULL;
        t = SSLgetAnnotations(not_null(o_115));
        {
          t_115 = t;
          if(((s_115 != NULL) && (s_115 != t_115)))
            _fail(t_115);
          else
            s_115 = t_115;
        }
        {
          t = not_null(p_115);
          {
            ATerm x_115 = NULL;
            t = d_88(t);
            {
              v_115 = t;
              {
                ATerm y_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_115)), not_null(s_115));
                {
                  y_115 = t;
                  if(((x_115 != NULL) && (x_115 != y_115)))
                    _fail(y_115);
                  else
                    x_115 = y_115;
                }
                t = not_null(x_115);
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
  ATerm h_116 = NULL;
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_116 = NULL;
      t = term_j_27;
      {
        t = get_config_0(t);
        {
          i_116 = t;
          if(((h_116 != NULL) && (h_116 != i_116)))
            _fail(i_116);
          else
            h_116 = i_116;
        }
      }
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm j_116 = NULL;
            j_116 = t;
            if(((h_116 != NULL) && (h_116 != j_116)))
              _fail(j_116);
            else
              h_116 = j_116;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        t = not_null(h_116);
        return(t);
      }
      t = short_description_1(t, h_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_e_30;
      {
        t = echo_0(t);
        {
          t = term_i_30;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm k_116 = NULL;
                  ATerm l_116 = NULL;
                  l_116 = t;
                  if(((k_116 != NULL) && (k_116 != l_116)))
                    _fail(l_116);
                  else
                    k_116 = l_116;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_116)), term_j_30);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm m_116 = NULL;
                    ATerm n_116 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(h_116);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      n_116 = t;
                      if(((m_116 != NULL) && (m_116 != n_116)))
                        _fail(n_116);
                      else
                        m_116 = n_116;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(m_116)), term_k_30);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm z_116 = NULL,a_117 = NULL;
  z_116 = t;
  w_116 :
  if(match_cons(z_116, sym_Undefined_1))
    {
      a_117 = ATgetArgument(z_116, 0);
      {
        ATerm d_117 = NULL,f_117 = NULL;
        ATerm e_117 = NULL;
        t = SSLgetAnnotations(not_null(z_116));
        {
          e_117 = t;
          if(((d_117 != NULL) && (d_117 != e_117)))
            _fail(e_117);
          else
            d_117 = e_117;
        }
        {
          t = not_null(a_117);
          {
            ATerm h_117 = NULL;
            t = e_88(t);
            {
              f_117 = t;
              {
                ATerm i_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_117)), not_null(d_117));
                {
                  i_117 = t;
                  if(((h_117 != NULL) && (h_117 != i_117)))
                    _fail(i_117);
                  else
                    h_117 = i_117;
                }
                t = not_null(h_117);
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
ATerm fetch_1 (ATerm t, ATerm t_93 (ATerm))
{
  ATerm n_117 (ATerm t)
  {
    ATerm o_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_93, _id);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = o_30;
        t = Cons_2(t, _id, n_117);
      }
    return(t);
  }
  t = n_117(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_120 (ATerm))
{
  t = fetch_1(t, u_120);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
  p_117 = t;
  o_117 :
  if(((ATgetType(p_117) == AT_LIST) && ATisEmpty(p_117)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_117) == AT_LIST) && !(ATisEmpty(p_117))))
        {
          q_117 = ATgetFirst((ATermList) p_117);
          r_117 = (ATerm) ATgetNext((ATermList) p_117);
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
  ATerm u_30;
  u_30 = t;
  {
    ATerm u_117 = NULL;
    ATerm x_117 = NULL;
    ATerm e_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = e_31;
        {
          ATerm v_117 = NULL;
          ATerm w_117 = NULL;
          w_117 = t;
          if(((v_117 != NULL) && (v_117 != w_117)))
            _fail(w_117);
          else
            v_117 = w_117;
          t = (ATerm) ATinsert(ATempty, not_null(v_117));
        }
      }
    {
      x_117 = t;
      if(((u_117 != NULL) && (u_117 != x_117)))
        _fail(x_117);
      else
        u_117 = x_117;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(u_117));
      t = printnl_0(t);
    }
  }
  t = u_30;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_j_27;
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
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_118 = NULL;
  e_118 = t;
  d_118 :
  if(match_cons(e_118, sym_Help_0))
    {
      ATerm g_118 = NULL,i_118 = NULL;
      ATerm t_31;
      t_31 = t;
      {
        ATerm h_118 = NULL;
        t = SSLgetAnnotations(not_null(e_118));
        {
          h_118 = t;
          if(((g_118 != NULL) && (g_118 != h_118)))
            _fail(h_118);
          else
            g_118 = h_118;
        }
      }
      t = t_31;
      {
        ATerm j_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_118));
        {
          j_118 = t;
          if(((i_118 != NULL) && (i_118 != j_118)))
            _fail(j_118);
          else
            i_118 = j_118;
        }
        t = not_null(i_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_99(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm p_118 = NULL;
        p_118 = t;
        n_118 :
        if(!(match_string(p_118, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_z_31;
        t = set_config_0(t);
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_a_32;
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm o_5 (ATerm t)
        {
          ATerm q_118 = NULL;
          q_118 = t;
          o_118 :
          if(!(match_string(q_118, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_z_31;
          {
            t = set_config_0(t);
            {
              t = term_c_32;
              t = set_config_0(t);
            }
          }
          t = term_d_32;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_e_32;
          return(t);
        }
        t = Option_3(t, o_5, p_5, q_5);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym__2))
    {
      u_118 = ATgetArgument(t_118, 0);
      v_118 = ATgetArgument(t_118, 1);
      t = SSL_table_get(not_null(u_118), not_null(v_118));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL,p_119 = NULL,q_119 = NULL;
  j_119 = t;
  i_119 :
  if(match_cons(j_119, sym__3))
    {
      k_119 = ATgetArgument(j_119, 0);
      p_119 = ATgetArgument(j_119, 1);
      q_119 = ATgetArgument(j_119, 2);
      {
        ATerm f_32;
        f_32 = t;
        {
          ATerm v_119 = NULL;
          ATerm a_120 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_119), not_null(p_119));
          {
            ATerm g_32 = t;
            int h_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(h_32);
              }
            else
              {
                t = g_32;
                t = (ATerm) ATempty;
              }
            {
              a_120 = t;
              if(((v_119 != NULL) && (v_119 != a_120)))
                _fail(a_120);
              else
                v_119 = a_120;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_119), not_null(p_119), (ATerm) ATinsert(CheckATermList(not_null(v_119)), not_null(q_119)));
            t = table_put_0(t);
          }
        }
        t = f_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_121 (ATerm))
{
  ATerm e_120 = NULL;
  ATerm f_120 = NULL;
  t = term_v_15;
  {
    t = z_121(t);
    {
      f_120 = t;
      if(((e_120 != NULL) && (e_120 != f_120)))
        _fail(f_120);
      else
        e_120 = f_120;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_30, term_g_30, not_null(e_120));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL;
  l_120 = t;
  k_120 :
  if(match_string(l_120, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(l_120) == AT_LIST) && !(ATisEmpty(l_120))))
        {
          m_120 = ATgetFirst((ATermList) l_120);
          n_120 = (ATerm) ATgetNext((ATermList) l_120);
          {
            ATerm q_120 = NULL;
            ATerm i_32;
            i_32 = t;
            {
              t = not_null(m_120);
              t = a_0(t);
            }
            t = i_32;
            {
              ATerm r_120 = NULL;
              t = term_v_15;
              {
                t = b_0(t);
                {
                  r_120 = t;
                  if(((q_120 != NULL) && (q_120 != r_120)))
                    _fail(r_120);
                  else
                    q_120 = r_120;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_120)), not_null(q_120));
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
  ATerm r_5 (ATerm t)
  {
    ATerm x_120 = NULL;
    x_120 = t;
    w_120 :
    if(!(match_string(x_120, "--help")))
      {
        if(!(match_string(x_120, "-h")))
          {
            if(!(match_string(x_120, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_j_32;
    {
      t = set_config_0(t);
      t = term_k_32;
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_l_32;
    return(t);
  }
  t = Option_3(t, r_5, s_5, u_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL;
  a_121 = t;
  z_120 :
  if(((ATgetType(a_121) == AT_LIST) && !(ATisEmpty(a_121))))
    {
      b_121 = ATgetFirst((ATermList) a_121);
      c_121 = (ATerm) ATgetNext((ATermList) a_121);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_121)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_121)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_121 = NULL,j_121 = NULL,k_121 = NULL;
  i_121 = t;
  h_121 :
  if(match_cons(i_121, sym__2))
    {
      j_121 = ATgetArgument(i_121, 0);
      k_121 = ATgetArgument(i_121, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_21, not_null(j_121), not_null(k_121));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_121 (ATerm))
{
  ATerm m_32;
  m_32 = t;
  {
    ATerm v_5 (ATerm t)
    {
      t = term_n_32;
      t = x_121(t);
      return(t);
    }
    t = try_1(t, v_5);
  }
  t = m_32;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm s_121 = NULL;
      ATerm o_32;
      o_32 = t;
      {
        ATerm q_121 = NULL;
        ATerm r_121 = NULL;
        r_121 = t;
        if(((q_121 != NULL) && (q_121 != r_121)))
          _fail(r_121);
        else
          q_121 = r_121;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_27, not_null(q_121));
          t = set_config_0(t);
        }
      }
      t = o_32;
      {
        ATerm t_121 = NULL;
        t_121 = t;
        if(((s_121 != NULL) && (s_121 != t_121)))
          _fail(t_121);
        else
          s_121 = t_121;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_121));
      }
      return(t);
    }
    ATerm x_5 (ATerm t)
    {
      ATerm p_32 = t;
      int q_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              {
                t = x_121(t);
                t = Cons_2(t, _id, x_5);
              }
            }
          ;
          LocalPopChoice(q_32);
        }
      else
        {
          t = p_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, w_5, x_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  ATerm t_32;
  t_32 = t;
  {
    ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
    i_122 = t;
    e_122 :
    if(match_cons(i_122, sym__3))
      {
        j_122 = ATgetArgument(i_122, 0);
        k_122 = ATgetArgument(i_122, 1);
        l_122 = ATgetArgument(i_122, 2);
        {
          if(((f_122 != NULL) && (f_122 != j_122)))
            _fail(j_122);
          else
            f_122 = j_122;
          {
            if(((g_122 != NULL) && (g_122 != k_122)))
              _fail(k_122);
            else
              g_122 = k_122;
            {
              if(((h_122 != NULL) && (h_122 != l_122)))
                _fail(l_122);
              else
                h_122 = l_122;
              t = SSL_table_put(not_null(f_122), not_null(g_122), not_null(h_122));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_121 (ATerm))
{
  ATerm o_122 = NULL;
  ATerm u_32;
  u_32 = t;
  {
    t = term_v_32;
    t = table_put_0(t);
  }
  t = u_32;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_121(t);
          ;
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, y_5);
    {
      ATerm z_5 (ATerm t)
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33;
            c_33 = t;
            {
              ATerm d_33 = t;
              int e_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(e_33);
                }
              else
                {
                  t = d_33;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_33;
            {
              t = system_usage_0(t);
              {
                t = term_a_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm f_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_33;
                  h_33 = t;
                  {
                    t = term_y_31;
                    t = get_config_0(t);
                  }
                  t = h_33;
                  {
                    t = system_about_0(t);
                    {
                      t = term_a_20;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm a_6 (ATerm t)
                    {
                      ATerm b_6 (ATerm t)
                      {
                        ATerm s_122 = NULL;
                        s_122 = t;
                        if(((o_122 != NULL) && (o_122 != s_122)))
                          _fail(s_122);
                        else
                          o_122 = s_122;
                        return(t);
                      }
                      t = Undefined_1(t, b_6);
                      return(t);
                    }
                    t = option_defined_1(t, a_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_122)), term_i_33));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_e_7;
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
      t = try_1(t, z_5);
      {
        ATerm j_33;
        j_33 = t;
        {
          t = term_f_30;
          t = table_destroy_0(t);
        }
        t = j_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm))
{
  t = parse_options_1(t, w_119);
  {
    t = store_options_0(t);
    {
      t = y_119(t);
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_119);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            {
              ATerm m_33 = t;
              int n_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_119(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_33);
                }
              else
                {
                  t = m_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_119 (ATerm), ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm o_119 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_119(t);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_119);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, c_6, n_119, o_119, d_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm))
{
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm q_33;
      q_33 = t;
      {
        ATerm v_122 = NULL;
        ATerm w_122 = NULL;
        t = term_j_27;
        {
          t = get_config_0(t);
          {
            w_122 = t;
            if(((v_122 != NULL) && (v_122 != w_122)))
              _fail(w_122);
            else
              v_122 = w_122;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, not_null(v_122)));
          t = printnl_0(t);
        }
      }
      t = q_33;
      return(t);
    }
    t = if_verbose2_1(t, f_6);
    return(t);
  }
  t = iowrap_4(t, f_119, g_119, h_119, e_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_119 (ATerm), ATerm e_119 (ATerm))
{
  t = iowrap_3(t, d_119, e_119, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_119 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    t = _2(t, _id, a_119);
    return(t);
  }
  t = iowrap_2(t, g_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        ATerm k_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, k_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, j_6);
      return(t);
    }
    t = Specification_1(t, i_6);
    return(t);
  }
  t = iowrap_1(t, h_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
