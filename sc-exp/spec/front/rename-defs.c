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
ATerm term_q_20;
ATerm term_s_19;
ATerm term_e_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_h_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_p_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_v_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_e_6;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_i_7);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_7);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_j_6);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_j_6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_j_6);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_j_6);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_j_6);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, (ATerm) ATempty);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm t_77 (ATerm));
ATerm assert_1 (ATerm, ATerm r_105 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm t_105 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm u_93 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_63 (ATerm));
ATerm Cons_2 (ATerm, ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_63 (ATerm));
ATerm _2 (ATerm, ATerm f_62 (ATerm), ATerm g_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_84 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_100 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm w_98 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_101 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_98 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm));
ATerm crush_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_99 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_102 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_104 (ATerm));
ATerm map_1 (ATerm, ATerm u_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_104 (ATerm));
ATerm Program_1 (ATerm, ATerm p_71 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_103 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_80 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_105 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_104 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_104 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_102 (ATerm), ATerm g_102 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_102 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATgetType(q_1) == AT_LIST) && ATisEmpty(q_1)))
    {
      {
        ATerm f_2 = NULL,h_2 = NULL;
        ATerm s_5;
        s_5 = t;
        {
          ATerm g_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            g_2 = t;
            if(((f_2 != NULL) && (f_2 != g_2)))
              _fail(g_2);
            else
              f_2 = g_2;
          }
        }
        t = s_5;
        {
          ATerm l_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_2));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
          t = not_null(h_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      {
        ATerm a_3 = NULL;
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        t = not_null(u_2);
        {
          ATerm f_0 (ATerm t)
          {
            t = term_t_5;
            return(t);
          }
          t = rewrite_1(t, f_0);
          {
            b_3 = t;
            r_2 :
            if(match_cons(b_3, sym_Defined_2))
              {
                c_3 = ATgetArgument(b_3, 0);
                d_3 = ATgetArgument(b_3, 1);
                s_2 :
                if(match_string(c_3, "c_0"))
                  {
                    if(((a_3 != NULL) && (a_3 != d_3)))
                      _fail(d_3);
                    else
                      a_3 = d_3;
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
        t = not_null(a_3);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym_Call_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(match_cons(n_3, sym_SVar_1))
        {
          o_3 = ATgetArgument(n_3, 0);
          {
            ATerm s_3 = NULL,t_3 = NULL;
            ATerm u_3 = NULL;
            t = not_null(p_3);
            {
              t = length_0(t);
              {
                u_3 = t;
                {
                  if(((s_3 != NULL) && (s_3 != u_3)))
                    _fail(u_3);
                  else
                    s_3 = u_3;
                  {
                    ATerm u_5 = t;
                    int w_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(s_3));
                        {
                          t = RenameVar_0(t);
                          {
                            v_3 = t;
                            if(((t_3 != NULL) && (t_3 != v_3)))
                              _fail(v_3);
                            else
                              t_3 = v_3;
                          }
                        }
                        ;
                        LocalPopChoice(w_5);
                      }
                    else
                      {
                        t = u_5;
                        {
                          ATerm w_3 = NULL;
                          t = not_null(o_3);
                          {
                            t = HoArg_0(t);
                            {
                              w_3 = t;
                              if(((t_3 != NULL) && (t_3 != w_3)))
                                _fail(w_3);
                              else
                                t_3 = w_3;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_3)), not_null(p_3));
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
ATerm topdown_1 (ATerm t, ATerm t_77 (ATerm))
{
  t = t_77(t);
  {
    ATerm h_0 (ATerm t)
    {
      t = topdown_1(t, t_77);
      return(t);
    }
    t = _all(t, h_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm r_105 (ATerm))
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
        ATerm a_6;
        a_6 = t;
        {
          ATerm o_4 = NULL;
          ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
          t = r_105(t);
          {
            o_4 = t;
            {
              if(((l_4 != NULL) && (l_4 != o_4)))
                _fail(o_4);
              else
                l_4 = o_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), not_null(h_4), not_null(i_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm b_6 = t;
                    int d_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_e_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_6);
                      }
                    else
                      {
                        t = b_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_4 = t;
                      e_4 :
                      if(((ATgetType(p_4) == AT_LIST) && !(ATisEmpty(p_4))))
                        {
                          q_4 = ATgetFirst((ATermList) p_4);
                          r_4 = (ATerm) ATgetNext((ATermList) p_4);
                          {
                            if(((m_4 != NULL) && (m_4 != q_4)))
                              _fail(q_4);
                            else
                              m_4 = q_4;
                            {
                              if(((n_4 != NULL) && (n_4 != r_4)))
                                _fail(r_4);
                              else
                                n_4 = r_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), term_e_6, (ATerm) ATinsert(CheckATermList(not_null(n_4)), (ATerm) ATinsert(CheckATermList(not_null(m_4)), not_null(h_4))));
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
        t = a_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
    {
      y_4 = ATgetFirst((ATermList) x_4);
      z_4 = (ATerm) ATgetNext((ATermList) x_4);
      t = not_null(y_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(g_5));
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
ATerm rewrite_1 (ATerm t, ATerm t_105 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_j_6;
    {
      t = t_105(t);
      {
        p_5 = t;
        if(((o_5 != NULL) && (o_5 != p_5)))
          _fail(p_5);
        else
          o_5 = p_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(m_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = not_null(z_5);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_m_6;
            return(t);
          }
          t = rewrite_1(t, i_0);
          {
            c_6 = t;
            v_5 :
            if(match_cons(c_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_n_6;
        ;
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        {
          ATerm f_6 = NULL;
          ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
          t = not_null(z_5);
          {
            ATerm k_0 (ATerm t)
            {
              t = term_m_6;
              return(t);
            }
            t = rewrite_1(t, k_0);
            {
              g_6 = t;
              x_5 :
              if(match_cons(g_6, sym_Defined_2))
                {
                  h_6 = ATgetArgument(g_6, 0);
                  i_6 = ATgetArgument(g_6, 1);
                  y_5 :
                  if(match_string(h_6, "g_0"))
                    {
                      if(((f_6 != NULL) && (f_6 != i_6)))
                        _fail(i_6);
                      else
                        f_6 = i_6;
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
          t = not_null(f_6);
        }
      }
  }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  t = SSL_int_to_string(not_null(o_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  z_6 = t;
  x_6 :
  if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
    {
      a_7 = ATgetFirst((ATermList) z_6);
      b_7 = (ATerm) ATgetNext((ATermList) z_6);
      y_6 :
      if(match_int(a_7, 95))
        {
          ATerm d_7 = NULL;
          ATerm e_7 = NULL;
          t = not_null(b_7);
          {
            t = o_0(t);
            {
              e_7 = t;
              if(((d_7 != NULL) && (d_7 != e_7)))
                _fail(e_7);
              else
                d_7 = e_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_7)), term_p_6), term_p_6);
        }
      else
        {
          if(match_int(a_7, 45))
            {
              ATerm g_7 = NULL;
              ATerm h_7 = NULL;
              t = not_null(b_7);
              {
                t = o_0(t);
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_p_6);
            }
          else
            {
              if(match_int(a_7, 39))
                {
                  ATerm j_7 = NULL;
                  ATerm k_7 = NULL;
                  t = not_null(b_7);
                  {
                    t = o_0(t);
                    {
                      k_7 = t;
                      if(((j_7 != NULL) && (j_7 != k_7)))
                        _fail(k_7);
                      else
                        j_7 = k_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_7)), term_p_6), term_q_6), term_p_6);
                }
              else
                {
                  _fail(t);
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
ATerm escape_1 (ATerm t, ATerm u_93 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_93(t, r_7);
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          {
            ATerm t_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, r_7);
                ;
                LocalPopChoice(u_6);
              }
            else
              {
                t = t_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = r_7(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_Mod_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      w_7 = ATgetArgument(u_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_7)), term_v_6), not_null(v_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm v_88 (ATerm))
{
  ATerm w_6 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_88(t);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = w_6;
      {
        ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
        e_8 = t;
        d_8 :
        if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
          {
            f_8 = ATgetFirst((ATermList) e_8);
            g_8 = (ATerm) ATgetNext((ATermList) e_8);
            {
              ATerm j_8 = NULL,l_8 = NULL;
              ATerm f_7;
              f_7 = t;
              {
                ATerm k_8 = NULL;
                t = not_null(f_8);
                {
                  t = v_88(t);
                  {
                    k_8 = t;
                    if(((j_8 != NULL) && (j_8 != k_8)))
                      _fail(k_8);
                    else
                      j_8 = k_8;
                  }
                }
              }
              t = f_7;
              {
                ATerm m_8 = NULL;
                t = not_null(g_8);
                {
                  t = foldr_3(t, t_88, u_88, v_88);
                  {
                    m_8 = t;
                    if(((l_8 != NULL) && (l_8 != m_8)))
                      _fail(m_8);
                    else
                      l_8 = m_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), not_null(l_8));
                  t = u_88(t);
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
ATerm length_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_i_7;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym_SDef_3))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      z_8 = ATgetArgument(w_8, 2);
      {
        ATerm d_9 = NULL,e_9 = NULL;
        ATerm f_9 = NULL;
        t = not_null(y_8);
        {
          ATerm g_9 = NULL,i_9 = NULL,k_9 = NULL;
          t = length_0(t);
          {
            f_9 = t;
            {
              if(((d_9 != NULL) && (d_9 != f_9)))
                _fail(f_9);
              else
                d_9 = f_9;
              {
                ATerm m_7;
                m_7 = t;
                {
                  ATerm h_9 = NULL;
                  t = not_null(x_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        h_9 = t;
                        if(((g_9 != NULL) && (g_9 != h_9)))
                          _fail(h_9);
                        else
                          g_9 = h_9;
                      }
                    }
                  }
                }
                t = m_7;
                {
                  ATerm j_9 = NULL;
                  t = not_null(d_9);
                  {
                    t = int_to_string_0(t);
                    {
                      j_9 = t;
                      if(((i_9 != NULL) && (i_9 != j_9)))
                        _fail(j_9);
                      else
                        i_9 = j_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_9)), term_n_7), not_null(g_9));
                    {
                      t = concat_strings_0(t);
                      {
                        k_9 = t;
                        {
                          if(((e_9 != NULL) && (e_9 != k_9)))
                            _fail(k_9);
                          else
                            e_9 = k_9;
                          {
                            ATerm o_7;
                            o_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_8), not_null(d_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_7, not_null(e_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_t_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = o_7;
                            {
                              ATerm q_7 = t;
                              int s_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(x_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm x_7;
                                      x_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_n_6);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_m_6;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = x_7;
                                    }
                                  }
                                  ;
                                  LocalPopChoice(s_7);
                                }
                              else
                                {
                                  t = q_7;
                                  {
                                    ATerm y_7;
                                    y_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), (ATerm) ATmakeAppl(sym_Defined_2, term_z_7, not_null(e_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_m_6;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = y_7;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_9), not_null(y_8), not_null(z_8));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_Strategies_1))
    {
      w_9 = ATgetArgument(v_9, 0);
      {
        ATerm z_9 = NULL,b_10 = NULL;
        ATerm a_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          a_10 = t;
          if(((z_9 != NULL) && (z_9 != a_10)))
            _fail(a_10);
          else
            z_9 = a_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm d_10 = NULL;
            t = s_63(t);
            {
              b_10 = t;
              {
                ATerm e_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_10)), not_null(z_9));
                {
                  e_10 = t;
                  if(((d_10 != NULL) && (d_10 != e_10)))
                    _fail(e_10);
                  else
                    d_10 = e_10;
                }
                t = not_null(d_10);
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
ATerm Cons_2 (ATerm t, ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
    {
      q_10 = ATgetFirst((ATermList) p_10);
      r_10 = (ATerm) ATgetNext((ATermList) p_10);
      {
        ATerm v_10 = NULL,x_10 = NULL;
        ATerm w_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          w_10 = t;
          if(((v_10 != NULL) && (v_10 != w_10)))
            _fail(w_10);
          else
            v_10 = w_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm z_10 = NULL;
            t = o_63(t);
            {
              x_10 = t;
              {
                t = not_null(r_10);
                {
                  ATerm b_11 = NULL;
                  t = p_63(t);
                  {
                    z_10 = t;
                    {
                      ATerm c_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_10)), not_null(x_10)), not_null(v_10));
                      {
                        c_11 = t;
                        if(((b_11 != NULL) && (b_11 != c_11)))
                          _fail(c_11);
                        else
                          b_11 = c_11;
                      }
                      t = not_null(b_11);
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
ATerm Specification_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Specification_1))
    {
      o_11 = ATgetArgument(n_11, 0);
      {
        ATerm r_11 = NULL,t_11 = NULL;
        ATerm s_11 = NULL;
        t = SSLgetAnnotations(not_null(n_11));
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
        {
          t = not_null(o_11);
          {
            ATerm v_11 = NULL;
            t = x_63(t);
            {
              t_11 = t;
              {
                ATerm w_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_11)), not_null(r_11));
                {
                  w_11 = t;
                  if(((v_11 != NULL) && (v_11 != w_11)))
                    _fail(w_11);
                  else
                    v_11 = w_11;
                }
                t = not_null(v_11);
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
ATerm _2 (ATerm t, ATerm f_62 (ATerm), ATerm g_62 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym__2))
    {
      i_12 = ATgetArgument(h_12, 0);
      j_12 = ATgetArgument(h_12, 1);
      {
        ATerm n_12 = NULL,p_12 = NULL;
        ATerm o_12 = NULL;
        t = SSLgetAnnotations(not_null(h_12));
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
        {
          t = not_null(i_12);
          {
            ATerm r_12 = NULL;
            t = f_62(t);
            {
              p_12 = t;
              {
                t = not_null(j_12);
                {
                  ATerm t_12 = NULL;
                  t = g_62(t);
                  {
                    r_12 = t;
                    {
                      ATerm u_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_12), not_null(r_12)), not_null(n_12));
                      {
                        u_12 = t;
                        if(((t_12 != NULL) && (t_12 != u_12)))
                          _fail(u_12);
                        else
                          t_12 = u_12;
                      }
                      t = not_null(t_12);
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
  ATerm a_8;
  a_8 = t;
  {
    ATerm b_13 = NULL;
    ATerm c_13 = NULL;
    t = term_j_6;
    {
      t = whoami_0(t);
      {
        c_13 = t;
        if(((b_13 != NULL) && (b_13 != c_13)))
          _fail(c_13);
        else
          b_13 = c_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), not_null(b_13)), term_c_8));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      {
        ATerm i_8;
        i_8 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
        t = i_8;
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
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_implode_string(not_null(n_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
        s_13 = t;
        r_13 :
        if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
          {
            t_13 = ATgetFirst((ATermList) s_13);
            u_13 = (ATerm) ATgetNext((ATermList) s_13);
            {
              t = not_null(t_13);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(u_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
  ATerm e_14 = NULL;
  ATerm g_14 = NULL;
  e_14 = t;
  {
    ATerm h_14 = NULL;
    ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
    t = not_null(e_14);
    {
      h_14 = t;
      {
        t = SSL_explode_term(not_null(h_14));
        {
          j_14 = t;
          c_14 :
          if(match_cons(j_14, sym__2))
            {
              k_14 = ATgetArgument(j_14, 0);
              l_14 = ATgetArgument(j_14, 1);
              d_14 :
              if(match_string(k_14, ""))
                {
                  if(((g_14 != NULL) && (g_14 != l_14)))
                    _fail(l_14);
                  else
                    g_14 = l_14;
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
      t = not_null(g_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_84 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_14);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          t = Nil_0(t);
          t = j_84(t);
        }
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        t = not_null(t_14);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(u_14);
            return(t);
          }
          t = at_end_1(t, x_0);
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
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_explode_string(not_null(z_14));
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
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
              i_15 = t;
              h_15 :
              if(match_cons(i_15, sym_Path_1))
                {
                  j_15 = ATgetArgument(i_15, 0);
                  t = not_null(j_15);
                }
              else
                {
                  if(match_cons(i_15, sym_Var_1))
                    {
                      j_15 = ATgetArgument(i_15, 0);
                      {
                        t = not_null(j_15);
                        {
                          ATerm c_9 = t;
                          int l_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_9);
                            }
                          else
                            {
                              t = c_9;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_m_9;
                                  return(t);
                                }
                                t = debug_1(t, z_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_15, sym_Prefix_2))
                        {
                          j_15 = ATgetArgument(i_15, 0);
                          k_15 = ATgetArgument(i_15, 1);
                          {
                            ATerm p_15 = NULL,r_15 = NULL;
                            ATerm n_9;
                            n_9 = t;
                            {
                              ATerm q_15 = NULL;
                              t = not_null(j_15);
                              {
                                t = eval_config_0(t);
                                {
                                  q_15 = t;
                                  if(((p_15 != NULL) && (p_15 != q_15)))
                                    _fail(q_15);
                                  else
                                    p_15 = q_15;
                                }
                              }
                            }
                            t = n_9;
                            {
                              ATerm s_15 = NULL;
                              t = not_null(k_15);
                              {
                                t = eval_config_0(t);
                                {
                                  s_15 = t;
                                  if(((r_15 != NULL) && (r_15 != s_15)))
                                    _fail(s_15);
                                  else
                                    r_15 = s_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(r_15));
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
  ATerm a_16 = NULL;
  a_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(a_16));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_9;
            p_9 = t;
            {
              ATerm c_16 = NULL;
              ATerm d_16 = NULL;
              d_16 = t;
              if(((c_16 != NULL) && (c_16 != d_16)))
                _fail(d_16);
              else
                c_16 = d_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(a_16), not_null(c_16));
                t = table_put_0(t);
              }
            }
            t = p_9;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_100 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm h_16 = NULL;
      ATerm i_16 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          i_16 = t;
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), term_s_9);
        t = geq_0(t);
      }
    }
    t = q_9;
    t = a_100(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  o_16 = t;
  m_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      n_16 :
      if(match_cons(q_16, sym_Stream_1))
        {
          r_16 = ATgetArgument(q_16, 0);
          {
            ATerm u_16 = NULL;
            t = SSL_fputc(not_null(p_16), not_null(r_16));
            {
              ATerm v_16 = NULL;
              v_16 = t;
              if(((u_16 != NULL) && (u_16 != v_16)))
                _fail(v_16);
              else
                u_16 = v_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_16));
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  c_17 = t;
  a_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      f_17 = ATgetArgument(c_17, 1);
      b_17 :
      if(match_cons(d_17, sym_Stream_1))
        {
          e_17 = ATgetArgument(d_17, 0);
          {
            ATerm i_17 = NULL;
            t = SSL_write_term_to_stream_text(not_null(e_17), not_null(f_17));
            {
              ATerm j_17 = NULL;
              j_17 = t;
              if(((i_17 != NULL) && (i_17 != j_17)))
                _fail(j_17);
              else
                i_17 = j_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_17));
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
  ATerm c_1 (ATerm t)
  {
    ATerm n_17 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm o_17 = NULL;
      o_17 = t;
      if(((n_17 != NULL) && (n_17 != o_17)))
        _fail(o_17);
      else
        n_17 = o_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(n_17));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  u_17 = t;
  s_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      x_17 = ATgetArgument(u_17, 1);
      t_17 :
      if(match_cons(v_17, sym_Stream_1))
        {
          w_17 = ATgetArgument(v_17, 0);
          {
            ATerm a_18 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(w_17), not_null(x_17));
            {
              ATerm b_18 = NULL;
              b_18 = t;
              if(((a_18 != NULL) && (a_18 != b_18)))
                _fail(b_18);
              else
                a_18 = b_18;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_18));
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
ATerm WriteToFile_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym__2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      {
        ATerm n_18 = NULL,p_18 = NULL;
        t = not_null(j_18);
        {
          ATerm o_18 = NULL;
          o_18 = t;
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_x_9);
            {
              t = open_stream_0(t);
              {
                ATerm q_18 = NULL;
                q_18 = t;
                if(((p_18 != NULL) && (p_18 != q_18)))
                  _fail(q_18);
                else
                  p_18 = q_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(k_18));
                  {
                    t = w_98(t);
                    {
                      t = fclose_0(t);
                      t = not_null(k_18);
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
  ATerm y_18 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm c_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_18 = NULL,a_19 = NULL;
            z_18 = t;
            v_18 :
            if(match_cons(z_18, sym_Output_1))
              {
                a_19 = ATgetArgument(z_18, 0);
                if(((y_18 != NULL) && (y_18 != a_19)))
                  _fail(a_19);
                else
                  y_18 = a_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          ;
          LocalPopChoice(f_10);
        }
      else
        {
          t = c_10;
          {
            ATerm b_19 = NULL;
            t = term_g_10;
            {
              b_19 = t;
              if(((y_18 != NULL) && (y_18 != b_19)))
                _fail(b_19);
              else
                y_18 = b_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = y_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(y_18);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm c_19 = NULL;
              c_19 = t;
              x_18 :
              if(!(match_cons(c_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_101 (ATerm))
{
  ATerm i_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  ATerm j_10;
  j_10 = t;
  t = dtime_0(t);
  t = j_10;
  {
    t = y_101(t);
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm j_19 = NULL;
        t = dtime_0(t);
        {
          j_19 = t;
          if(((i_19 != NULL) && (i_19 != j_19)))
            _fail(j_19);
          else
            i_19 = j_19;
        }
      }
      t = k_10;
      {
        k_19 = t;
        h_19 :
        if(match_cons(k_19, sym__2))
          {
            l_19 = ATgetArgument(k_19, 0);
            m_19 = ATgetArgument(k_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_19))), not_null(m_19));
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
  ATerm u_19 = NULL,v_19 = NULL;
  ATerm b_20 (ATerm t)
  {
    t = SSL_fclose(not_null(v_19));
    return(t);
  }
  v_19 = t;
  t_19 :
  if(match_cons(v_19, sym_Stream_1))
    {
      u_19 = ATgetArgument(v_19, 0);
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(u_19));
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = b_20(t);
          }
      }
    }
  else
    {
      t = b_20(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_Stream_1))
    {
      f_20 = ATgetArgument(e_20, 0);
      t = SSL_read_term_from_stream(not_null(f_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm n_10;
  n_10 = t;
  {
    ATerm k_20 = NULL,m_20 = NULL;
    ATerm s_10;
    s_10 = t;
    {
      ATerm l_20 = NULL;
      t = i_98(t);
      {
        l_20 = t;
        if(((k_20 != NULL) && (k_20 != l_20)))
          _fail(l_20);
        else
          k_20 = l_20;
      }
    }
    t = s_10;
    {
      ATerm n_20 = NULL;
      n_20 = t;
      if(((m_20 != NULL) && (m_20 != n_20)))
        _fail(n_20);
      else
        m_20 = n_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_20)), not_null(k_20)));
        t = printnl_0(t);
      }
    }
  }
  t = n_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        t = SSL_fopen(not_null(u_20), not_null(v_20));
        {
          ATerm z_20 = NULL;
          z_20 = t;
          if(((y_20 != NULL) && (y_20 != z_20)))
            _fail(z_20);
          else
            y_20 = z_20;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_20));
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
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_is_string(not_null(d_21));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_21 = NULL;
    i_21 = t;
    if(((h_21 != NULL) && (h_21 != i_21)))
      _fail(i_21);
    else
      h_21 = i_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_21));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_21 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_21 = NULL;
    m_21 = t;
    if(((l_21 != NULL) && (l_21 != m_21)))
      _fail(m_21);
    else
      l_21 = m_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_21));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_21 = NULL;
    q_21 = t;
    if(((p_21 != NULL) && (p_21 != q_21)))
      _fail(q_21);
    else
      p_21 = q_21;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_21));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_21, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_21, sym_stdin_0))
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
  ATerm g_22 = NULL;
  ATerm i_22 = NULL,j_22 = NULL;
  g_22 = t;
  {
    ATerm k_22 = NULL;
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
    t = not_null(g_22);
    {
      k_22 = t;
      {
        t = SSL_explode_term(not_null(k_22));
        {
          m_22 = t;
          d_22 :
          if(match_cons(m_22, sym__2))
            {
              n_22 = ATgetArgument(m_22, 0);
              o_22 = ATgetArgument(m_22, 1);
              e_22 :
              if(match_string(n_22, ""))
                {
                  f_22 :
                  if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
                    {
                      p_22 = ATgetFirst((ATermList) o_22);
                      q_22 = (ATerm) ATgetNext((ATermList) o_22);
                      {
                        if(((j_22 != NULL) && (j_22 != p_22)))
                          _fail(p_22);
                        else
                          j_22 = p_22;
                        if(((i_22 != NULL) && (i_22 != q_22)))
                          _fail(q_22);
                        else
                          i_22 = q_22;
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
    t = not_null(j_22);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm y_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm b_23 = NULL,c_23 = NULL;
                    b_23 = t;
                    w_22 :
                    if(match_cons(b_23, sym_Path_1))
                      {
                        c_23 = ATgetArgument(b_23, 0);
                        t = not_null(c_23);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = y_10;
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
  ATerm k_23 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      j_23 = t;
      if(((i_23 != NULL) && (i_23 != j_23)))
        _fail(j_23);
      else
        i_23 = j_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_f_11);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_g_11;
          return(t);
        }
        t = debug_1(t, k_1);
        _fail(t);
      }
    }
  {
    ATerm h_11;
    h_11 = t;
    {
      ATerm l_23 = NULL;
      t = read_from_stream_0(t);
      {
        l_23 = t;
        if(((k_23 != NULL) && (k_23 != l_23)))
          _fail(l_23);
        else
          k_23 = l_23;
      }
    }
    t = h_11;
    {
      t = fclose_0(t);
      t = not_null(k_23);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  ATerm q_23 = NULL,s_23 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm r_23 = NULL;
    t = f_81(t);
    {
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
    }
  }
  t = i_11;
  {
    ATerm t_23 = NULL;
    t = g_81(t);
    {
      t_23 = t;
      if(((s_23 != NULL) && (s_23 != t_23)))
        _fail(t_23);
      else
        s_23 = t_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(s_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm j_11;
  j_11 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm a_24 = NULL,b_24 = NULL;
          a_24 = t;
          x_23 :
          if(match_cons(a_24, sym_Input_1))
            {
              b_24 = ATgetArgument(a_24, 0);
              if(((z_23 != NULL) && (z_23 != b_24)))
                _fail(b_24);
              else
                z_23 = b_24;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          ATerm c_24 = NULL;
          t = term_p_11;
          {
            c_24 = t;
            if(((z_23 != NULL) && (z_23 != c_24)))
              _fail(c_24);
            else
              z_23 = c_24;
          }
        }
      }
  }
  t = j_11;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(z_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    f_24 :
    if(!(match_string(h_24, "-k")))
      {
        if(!(match_string(h_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm i_24 = NULL;
      ATerm j_24 = NULL;
      t = string_to_int_0(t);
      {
        j_24 = t;
        if(((i_24 != NULL) && (i_24 != j_24)))
          _fail(j_24);
        else
          i_24 = j_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(i_24));
        t = set_config_0(t);
      }
    }
    t = q_11;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = ArgOption_3(t, n_1, o_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  t = SSL_string_to_int(not_null(m_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm u_24 = NULL;
        u_24 = t;
        p_24 :
        if(!(match_string(u_24, "-S")))
          {
            if(!(match_string(u_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_a_12;
        t = set_config_0(t);
        t = term_b_12;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = Option_3(t, s_1, t_1, u_1);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm v_24 = NULL;
              v_24 = t;
              q_24 :
              if(!(match_string(v_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              ATerm y_24 = NULL;
              ATerm f_12;
              f_12 = t;
              {
                ATerm w_24 = NULL;
                ATerm x_24 = NULL;
                t = string_to_int_0(t);
                {
                  x_24 = t;
                  if(((w_24 != NULL) && (w_24 != x_24)))
                    _fail(x_24);
                  else
                    w_24 = x_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(w_24));
                  t = set_config_0(t);
                }
              }
              t = f_12;
              {
                ATerm z_24 = NULL;
                z_24 = t;
                if(((y_24 != NULL) && (y_24 != z_24)))
                  _fail(z_24);
                else
                  y_24 = z_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_24));
              }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = term_k_12;
              return(t);
            }
            t = ArgOption_3(t, v_1, w_1, x_1);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm y_1 (ATerm t)
              {
                ATerm a_25 = NULL;
                a_25 = t;
                t_24 :
                if(!(match_string(a_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_m_12;
                t = set_config_0(t);
                t = term_q_12;
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_s_12;
                return(t);
              }
              t = Option_3(t, y_1, z_1, a_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm g_25 = NULL;
    g_25 = t;
    d_25 :
    if(!(match_string(g_25, "-o")))
      {
        if(!(match_string(g_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm j_25 = NULL;
    ATerm x_12;
    x_12 = t;
    {
      ATerm h_25 = NULL;
      ATerm i_25 = NULL;
      i_25 = t;
      if(((h_25 != NULL) && (h_25 != i_25)))
        _fail(i_25);
      else
        h_25 = i_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(h_25));
        t = set_config_0(t);
      }
    }
    t = x_12;
    {
      ATerm k_25 = NULL;
      k_25 = t;
      if(((j_25 != NULL) && (j_25 != k_25)))
        _fail(k_25);
      else
        j_25 = k_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_25));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_z_12;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = a_13;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm o_25 = NULL;
          o_25 = t;
          n_25 :
          if(!(match_string(o_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          t = term_j_13;
          t = set_config_0(t);
          t = term_k_13;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          t = term_l_13;
          return(t);
        }
        t = Option_3(t, e_2, i_2, j_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  u_25 = t;
  s_25 :
  if(match_string(u_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
        {
          v_25 = ATgetFirst((ATermList) u_25);
          w_25 = (ATerm) ATgetNext((ATermList) u_25);
          t_25 :
          if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
            {
              x_25 = ATgetFirst((ATermList) w_25);
              y_25 = (ATerm) ATgetNext((ATermList) w_25);
              {
                ATerm c_26 = NULL;
                ATerm m_13;
                m_13 = t;
                {
                  t = not_null(v_25);
                  t = l_0(t);
                }
                t = m_13;
                {
                  ATerm d_26 = NULL;
                  t = not_null(x_25);
                  {
                    t = m_0(t);
                    {
                      d_26 = t;
                      if(((c_26 != NULL) && (c_26 != d_26)))
                        _fail(d_26);
                      else
                        c_26 = d_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), not_null(c_26));
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
  ATerm k_2 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    h_26 :
    if(!(match_string(k_26, "-i")))
      {
        if(!(match_string(k_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm h_27 = NULL;
    ATerm o_13;
    o_13 = t;
    {
      ATerm l_26 = NULL;
      ATerm g_27 = NULL;
      g_27 = t;
      if(((l_26 != NULL) && (l_26 != g_27)))
        _fail(g_27);
      else
        l_26 = g_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(l_26));
        t = set_config_0(t);
      }
    }
    t = o_13;
    {
      ATerm i_27 = NULL;
      i_27 = t;
      if(((h_27 != NULL) && (h_27 != i_27)))
        _fail(i_27);
      else
        h_27 = i_27;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_27));
    }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = ArgOption_3(t, k_2, m_2, n_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = report_run_time_0(t);
  {
    ATerm n_27 = NULL;
    t = term_j_6;
    {
      t = whoami_0(t);
      {
        n_27 = t;
        if(((m_27 != NULL) && (m_27 != n_27)))
          _fail(n_27);
        else
          m_27 = n_27;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, term_z_13), not_null(m_27)));
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
  t = term_a_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_TicksToSeconds(not_null(q_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym__2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm b_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_27), not_null(x_27));
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = b_14;
            t = SSL_addr(not_null(w_27), not_null(x_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm))
{
  ATerm i_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_88(t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = i_14;
      {
        ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
        e_28 = t;
        d_28 :
        if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
          {
            f_28 = ATgetFirst((ATermList) e_28);
            g_28 = (ATerm) ATgetNext((ATermList) e_28);
            {
              ATerm j_28 = NULL;
              ATerm k_28 = NULL;
              t = not_null(g_28);
              {
                t = foldr_2(t, r_88, s_88);
                {
                  k_28 = t;
                  if(((j_28 != NULL) && (j_28 != k_28)))
                    _fail(k_28);
                  else
                    j_28 = k_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(j_28));
                t = s_88(t);
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
ATerm crush_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm t_28 = NULL;
  r_28 = t;
  {
    ATerm u_28 = NULL;
    ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
    t = not_null(r_28);
    {
      u_28 = t;
      {
        t = SSL_explode_term(not_null(u_28));
        {
          w_28 = t;
          q_28 :
          if(match_cons(w_28, sym__2))
            {
              x_28 = ATgetArgument(w_28, 0);
              y_28 = ATgetArgument(w_28, 1);
              if(((t_28 != NULL) && (t_28 != y_28)))
                _fail(y_28);
              else
                t_28 = y_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_28);
      t = foldr_2(t, p_86, q_86);
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
    ATerm o_2 (ATerm t)
    {
      t = term_i_7;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym__2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      {
        ATerm n_14;
        n_14 = t;
        {
          ATerm o_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_29), not_null(g_29));
              ;
              LocalPopChoice(q_14);
            }
          else
            {
              t = o_14;
              t = SSL_gtr(not_null(f_29), not_null(g_29));
            }
        }
        t = n_14;
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
  ATerm m_29 = NULL;
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_29 = NULL,o_29 = NULL,r_29 = NULL;
      n_29 = t;
      l_29 :
      if(match_cons(n_29, sym__2))
        {
          o_29 = ATgetArgument(n_29, 0);
          r_29 = ATgetArgument(n_29, 1);
          {
            if(((m_29 != NULL) && (m_29 != o_29)))
              _fail(o_29);
            else
              m_29 = o_29;
            if(((m_29 != NULL) && (m_29 != r_29)))
              _fail(r_29);
            else
              m_29 = r_29;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm x_14;
    x_14 = t;
    {
      ATerm u_29 = NULL;
      ATerm v_29 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_29), term_l_7);
        t = geq_0(t);
      }
    }
    t = x_14;
    t = z_99(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm z_29 = NULL,b_30 = NULL;
    ATerm y_14;
    y_14 = t;
    {
      ATerm a_30 = NULL;
      t = run_time_0(t);
      {
        a_30 = t;
        if(((z_29 != NULL) && (z_29 != a_30)))
          _fail(a_30);
        else
          z_29 = a_30;
      }
    }
    t = y_14;
    {
      ATerm c_30 = NULL;
      t = term_j_6;
      {
        t = whoami_0(t);
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_15), not_null(z_29)), term_a_15), not_null(b_30)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_i_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_Version_0))
    {
      ATerm l_30 = NULL,n_30 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm m_30 = NULL;
        t = SSLgetAnnotations(not_null(j_30));
        {
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
        }
      }
      t = c_15;
      {
        ATerm o_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        t = not_null(n_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_102 (ATerm))
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm g_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = g_15;
              {
                ATerm m_15 = t;
                int n_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(n_15);
                  }
                else
                  {
                    t = m_15;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
      }
    }
  t = w_102(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_table_create(not_null(t_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  {
    ATerm o_15;
    o_15 = t;
    {
      t = term_t_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_15, term_u_15, not_null(x_30));
          t = table_put_0(t);
        }
      }
    }
    t = o_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  t = SSL_table_destroy(not_null(b_31));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  t = SSL_exit(not_null(f_31));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_83 (ATerm))
{
  ATerm i_31 (ATerm t)
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = Cons_2(t, u_83, i_31);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  r_31 = t;
  o_31 :
  if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
    {
      p_31 = ATgetFirst((ATermList) r_31);
      q_31 = (ATerm) ATgetNext((ATermList) r_31);
      {
        ATerm u_31 = NULL;
        t = not_null(q_31);
        {
          ATerm x_15;
          x_15 = t;
          {
            ATerm v_31 = NULL,x_31 = NULL,z_31 = NULL;
            ATerm y_15;
            y_15 = t;
            {
              ATerm w_31 = NULL;
              t = j_0(t);
              {
                w_31 = t;
                if(((v_31 != NULL) && (v_31 != w_31)))
                  _fail(w_31);
                else
                  v_31 = w_31;
              }
            }
            t = y_15;
            {
              ATerm y_31 = NULL;
              t = not_null(p_31);
              {
                t = e_0(t);
                {
                  y_31 = t;
                  if(((x_31 != NULL) && (x_31 != y_31)))
                    _fail(y_31);
                  else
                    x_31 = y_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_31)), not_null(x_31));
                {
                  z_31 = t;
                  if(((u_31 != NULL) && (u_31 != z_31)))
                    _fail(z_31);
                  else
                    u_31 = z_31;
                }
              }
            }
          }
          t = x_15;
          {
            ATerm y_2 (ATerm t)
            {
              t = not_null(u_31);
              return(t);
            }
            t = reverse_acc_2(t, e_0, y_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_31) == AT_LIST) && ATisEmpty(r_31)))
        {
          {
            t = term_j_6;
            t = j_0(t);
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
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym_Program_1))
    {
      l_32 = ATgetArgument(k_32, 0);
      {
        ATerm o_32 = NULL,q_32 = NULL;
        ATerm p_32 = NULL;
        t = SSLgetAnnotations(not_null(k_32));
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
        {
          t = not_null(l_32);
          {
            ATerm s_32 = NULL;
            t = p_71(t);
            {
              q_32 = t;
              {
                ATerm t_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_32)), not_null(o_32));
                {
                  t_32 = t;
                  if(((s_32 != NULL) && (s_32 != t_32)))
                    _fail(t_32);
                  else
                    s_32 = t_32;
                }
                t = not_null(s_32);
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
  ATerm c_33 = NULL;
  ATerm z_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_33 = NULL;
      t = term_a_14;
      {
        t = get_config_0(t);
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
      }
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = z_15;
      {
        ATerm e_3 (ATerm t)
        {
          ATerm f_3 (ATerm t)
          {
            ATerm e_33 = NULL;
            e_33 = t;
            if(((c_33 != NULL) && (c_33 != e_33)))
              _fail(e_33);
            else
              c_33 = e_33;
            return(t);
          }
          t = Program_1(t, f_3);
          return(t);
        }
        t = option_defined_1(t, e_3);
      }
    }
  {
    ATerm g_3 (ATerm t)
    {
      ATerm h_3 (ATerm t)
      {
        t = not_null(c_33);
        return(t);
      }
      t = short_description_1(t, h_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_3);
    {
      t = term_e_16;
      {
        t = echo_0(t);
        {
          t = term_j_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm f_33 = NULL;
                  ATerm g_33 = NULL;
                  g_33 = t;
                  if(((f_33 != NULL) && (f_33 != g_33)))
                    _fail(g_33);
                  else
                    f_33 = g_33;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_33)), term_k_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_3);
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm h_33 = NULL;
                    ATerm i_33 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      t = not_null(c_33);
                      return(t);
                    }
                    t = long_description_1(t, q_3);
                    {
                      i_33 = t;
                      if(((h_33 != NULL) && (h_33 != i_33)))
                        _fail(i_33);
                      else
                        h_33 = i_33;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_33)), term_l_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_3);
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
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm x_33 = NULL,y_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym_Undefined_1))
    {
      y_33 = ATgetArgument(x_33, 0);
      {
        ATerm b_34 = NULL,d_34 = NULL;
        ATerm c_34 = NULL;
        t = SSLgetAnnotations(not_null(x_33));
        {
          c_34 = t;
          if(((b_34 != NULL) && (b_34 != c_34)))
            _fail(c_34);
          else
            b_34 = c_34;
        }
        {
          t = not_null(y_33);
          {
            ATerm f_34 = NULL;
            t = q_71(t);
            {
              d_34 = t;
              {
                ATerm g_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_34)), not_null(b_34));
                {
                  g_34 = t;
                  if(((f_34 != NULL) && (f_34 != g_34)))
                    _fail(g_34);
                  else
                    f_34 = g_34;
                }
                t = not_null(f_34);
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
ATerm fetch_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm p_34 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_84, _id);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = Cons_2(t, _id, p_34);
      }
    return(t);
  }
  t = p_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = fetch_1(t, w_103);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  q_34 :
  if(((ATgetType(r_34) == AT_LIST) && ATisEmpty(r_34)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          s_34 = ATgetFirst((ATermList) r_34);
          t_34 = (ATerm) ATgetNext((ATermList) r_34);
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
  ATerm y_16;
  y_16 = t;
  {
    ATerm w_34 = NULL;
    ATerm z_34 = NULL;
    ATerm z_16 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(g_17);
      }
    else
      {
        t = z_16;
        {
          ATerm x_34 = NULL;
          ATerm y_34 = NULL;
          y_34 = t;
          if(((x_34 != NULL) && (x_34 != y_34)))
            _fail(y_34);
          else
            x_34 = y_34;
          t = (ATerm) ATinsert(ATempty, not_null(x_34));
        }
      }
    {
      z_34 = t;
      if(((w_34 != NULL) && (w_34 != z_34)))
        _fail(z_34);
      else
        w_34 = z_34;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(w_34));
      t = printnl_0(t);
    }
  }
  t = y_16;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_a_14;
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
  ATerm h_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = h_17;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_Help_0))
    {
      ATerm i_35 = NULL,k_35 = NULL;
      ATerm l_17;
      l_17 = t;
      {
        ATerm j_35 = NULL;
        t = SSLgetAnnotations(not_null(g_35));
        {
          j_35 = t;
          if(((i_35 != NULL) && (i_35 != j_35)))
            _fail(j_35);
          else
            i_35 = j_35;
        }
      }
      t = l_17;
      {
        ATerm l_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_35));
        {
          l_35 = t;
          if(((k_35 != NULL) && (k_35 != l_35)))
            _fail(l_35);
          else
            k_35 = l_35;
        }
        t = not_null(k_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm m_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_80(t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = m_17;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
      {
        ATerm r_35 = NULL;
        r_35 = t;
        p_35 :
        if(!(match_string(r_35, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_z_17;
        t = set_config_0(t);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_c_18;
        return(t);
      }
      t = Option_3(t, r_3, x_3, y_3);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm s_35 = NULL;
          s_35 = t;
          q_35 :
          if(!(match_string(s_35, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_4 (ATerm t)
        {
          t = term_z_17;
          {
            t = set_config_0(t);
            {
              t = term_e_18;
              t = set_config_0(t);
            }
          }
          t = term_f_18;
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_g_18;
          return(t);
        }
        t = Option_3(t, z_3, a_4, b_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      t = SSL_table_get(not_null(w_35), not_null(x_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym__3))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      i_36 = ATgetArgument(f_36, 2);
      {
        ATerm l_18;
        l_18 = t;
        {
          ATerm m_36 = NULL;
          ATerm n_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_36), not_null(h_36));
          {
            ATerm m_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = m_18;
                t = (ATerm) ATempty;
              }
            {
              n_36 = t;
              if(((m_36 != NULL) && (m_36 != n_36)))
                _fail(n_36);
              else
                m_36 = n_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_36), not_null(h_36), (ATerm) ATinsert(CheckATermList(not_null(m_36)), not_null(i_36)));
            t = table_put_0(t);
          }
        }
        t = l_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_105 (ATerm))
{
  ATerm r_36 = NULL;
  ATerm s_36 = NULL;
  t = term_j_6;
  {
    t = b_105(t);
    {
      s_36 = t;
      if(((r_36 != NULL) && (r_36 != s_36)))
        _fail(s_36);
      else
        r_36 = s_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, not_null(r_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_36 = NULL,z_36 = NULL,e_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_string(y_36, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
        {
          z_36 = ATgetFirst((ATermList) y_36);
          e_37 = (ATerm) ATgetNext((ATermList) y_36);
          {
            ATerm h_37 = NULL;
            ATerm s_18;
            s_18 = t;
            {
              t = not_null(z_36);
              t = a_0(t);
            }
            t = s_18;
            {
              ATerm i_37 = NULL;
              t = term_j_6;
              {
                t = b_0(t);
                {
                  i_37 = t;
                  if(((h_37 != NULL) && (h_37 != i_37)))
                    _fail(i_37);
                  else
                    h_37 = i_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_37)), not_null(h_37));
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
  ATerm c_4 (ATerm t)
  {
    ATerm n_37 = NULL;
    n_37 = t;
    m_37 :
    if(!(match_string(n_37, "--help")))
      {
        if(!(match_string(n_37, "-h")))
          {
            if(!(match_string(n_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_t_18;
    {
      t = set_config_0(t);
      t = term_u_18;
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  t = Option_3(t, c_4, d_4, j_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(((ATgetType(q_37) == AT_LIST) && !(ATisEmpty(q_37))))
    {
      r_37 = ATgetFirst((ATermList) q_37);
      s_37 = (ATerm) ATgetNext((ATermList) q_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_37)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(z_37), not_null(a_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_104 (ATerm))
{
  ATerm d_19;
  d_19 = t;
  {
    ATerm k_4 (ATerm t)
    {
      t = term_e_19;
      t = z_104(t);
      return(t);
    }
    t = try_1(t, k_4);
  }
  t = d_19;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm i_38 = NULL;
      ATerm f_19;
      f_19 = t;
      {
        ATerm g_38 = NULL;
        ATerm h_38 = NULL;
        h_38 = t;
        if(((g_38 != NULL) && (g_38 != h_38)))
          _fail(h_38);
        else
          g_38 = h_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(g_38));
          t = set_config_0(t);
        }
      }
      t = f_19;
      {
        ATerm j_38 = NULL;
        j_38 = t;
        if(((i_38 != NULL) && (i_38 != j_38)))
          _fail(j_38);
        else
          i_38 = j_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_38));
      }
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm g_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              {
                t = z_104(t);
                t = Cons_2(t, _id, t_4);
              }
            }
          ;
          LocalPopChoice(n_19);
        }
      else
        {
          t = g_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  ATerm q_19;
  q_19 = t;
  {
    ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
    s_38 = t;
    o_38 :
    if(match_cons(s_38, sym__3))
      {
        t_38 = ATgetArgument(s_38, 0);
        u_38 = ATgetArgument(s_38, 1);
        v_38 = ATgetArgument(s_38, 2);
        {
          if(((p_38 != NULL) && (p_38 != t_38)))
            _fail(t_38);
          else
            p_38 = t_38;
          {
            if(((q_38 != NULL) && (q_38 != u_38)))
              _fail(u_38);
            else
              q_38 = u_38;
            {
              if(((r_38 != NULL) && (r_38 != v_38)))
                _fail(v_38);
              else
                r_38 = v_38;
              t = SSL_table_put(not_null(p_38), not_null(q_38), not_null(r_38));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm y_38 = NULL;
  ATerm r_19;
  r_19 = t;
  {
    t = term_s_19;
    t = table_put_0(t);
  }
  t = r_19;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm w_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = w_19;
          {
            ATerm y_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(z_19);
              }
            else
              {
                t = y_19;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, u_4);
    {
      ATerm v_4 (ATerm t)
      {
        ATerm a_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20;
            g_20 = t;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_20;
            {
              t = system_usage_0(t);
              {
                t = term_i_7;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = a_20;
            {
              ATerm j_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_20;
                  p_20 = t;
                  {
                    t = term_y_17;
                    t = get_config_0(t);
                  }
                  t = p_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_i_7;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = j_20;
                  {
                    ATerm a_5 (ATerm t)
                    {
                      ATerm b_5 (ATerm t)
                      {
                        ATerm b_39 = NULL;
                        b_39 = t;
                        if(((y_38 != NULL) && (y_38 != b_39)))
                          _fail(b_39);
                        else
                          y_38 = b_39;
                        return(t);
                      }
                      t = Undefined_1(t, b_5);
                      return(t);
                    }
                    t = option_defined_1(t, a_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_38)), term_q_20));
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
      t = try_1(t, v_4);
      {
        ATerm r_20;
        r_20 = t;
        {
          t = term_f_16;
          t = table_destroy_0(t);
        }
        t = r_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm))
{
  t = parse_options_1(t, y_102);
  {
    t = store_options_0(t);
    {
      t = a_103(t);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_102);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_103(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm c_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_102(t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = c_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_102);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, c_5, p_102, q_102, h_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm f_21;
      f_21 = t;
      {
        ATerm e_39 = NULL;
        ATerm h_39 = NULL;
        t = term_a_14;
        {
          t = get_config_0(t);
          {
            h_39 = t;
            if(((e_39 != NULL) && (e_39 != h_39)))
              _fail(h_39);
            else
              e_39 = h_39;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATempty, not_null(e_39)));
          t = printnl_0(t);
        }
      }
      t = f_21;
      return(t);
    }
    t = if_verbose2_1(t, j_5);
    return(t);
  }
  t = iowrap_4(t, h_102, i_102, j_102, i_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_102 (ATerm), ATerm g_102 (ATerm))
{
  t = iowrap_3(t, f_102, g_102, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    t = _2(t, _id, c_102);
    return(t);
  }
  t = iowrap_2(t, k_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm r_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, r_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, q_5);
      return(t);
    }
    t = Specification_1(t, n_5);
    return(t);
  }
  t = iowrap_1(t, l_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
