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
Symbol sym_Cong_2;
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
Symbol sym_Infinite_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  init_constant_terms();
}
ATerm term_n_19;
ATerm term_n_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_n_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_u_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
void init_constant_terms (void)
{
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_i_7);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_i_7);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_c_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_i_7);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_v_16, term_i_7);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_i_7);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__3, term_b_15, term_c_15, (ATerm) ATempty);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm member_0 (ATerm);
ATerm AddLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm b_62 (ATerm), ATerm c_62 (ATerm));
ATerm SVar_1 (ATerm, ATerm i_65 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm RDef_3 (ATerm, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm t_67 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm real_to_string_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm is_double_quoted_chars_0 (ATerm);
ATerm EnsugarOnce_0 (ATerm);
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm u_99 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm is_quoted_chars_0 (ATerm);
ATerm is_quoted_0 (ATerm);
ATerm is_double_quoted_0 (ATerm);
ATerm Ensugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm d_90 (ATerm));
ATerm topdown_1 (ATerm, ATerm w_99 (ATerm));
ATerm Stratego_Ensugar_0 (ATerm);
ATerm _2 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_97 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm q_87 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_73 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_87 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm crush_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_97 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm u_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_89 (ATerm));
ATerm map_1 (ATerm, ATerm s_76 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_89 (ATerm));
ATerm Program_1 (ATerm, ATerm y_72 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_88 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_84 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_74 (ATerm));
ATerm stratego_ensugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm member_0 (ATerm t)
{
  ATerm e_3 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm s_3 = NULL;
    s_3 = t;
    if(((e_3 != NULL) && (e_3 != s_3)))
      _fail(s_3);
    else
      e_3 = s_3;
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      ATerm t_3 = NULL;
      t_3 = t;
      if(((e_3 != NULL) && (e_3 != t_3)))
        _fail(t_3);
      else
        e_3 = t_3;
      return(t);
    }
    t = fetch_1(t, f_0);
    return(t);
  }
  t = _2(t, c_0, e_0);
  return(t);
}
ATerm AddLeadingPrime_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    ATerm r_4 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_4), term_k_4), term_j_4), term_i_4), term_h_4), term_g_4), term_f_4), term_e_4), term_d_4), term_c_4), term_b_4), term_a_4), term_z_3), term_y_3), term_x_3), term_w_3), term_v_3), term_u_3), term_r_3), term_q_3), term_p_3), term_o_3));
    {
      t = member_0(t);
      {
        t = not_null(m_4);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm p_4 = NULL;
            ATerm q_4 = NULL;
            q_4 = t;
            if(((p_4 != NULL) && (p_4 != q_4)))
              _fail(q_4);
            else
              p_4 = q_4;
            t = (ATerm) ATinsert(CheckATermList(not_null(p_4)), term_n_4);
            return(t);
          }
          t = string_as_chars_1(t, h_0);
          {
            r_4 = t;
            if(((o_4 != NULL) && (o_4 != r_4)))
              _fail(r_4);
            else
              o_4 = r_4;
          }
        }
      }
    }
    t = not_null(o_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Op_2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm h_5 = NULL,j_5 = NULL;
        ATerm i_5 = NULL;
        t = SSLgetAnnotations(not_null(b_5));
        {
          i_5 = t;
          if(((h_5 != NULL) && (h_5 != i_5)))
            _fail(i_5);
          else
            h_5 = i_5;
        }
        {
          t = not_null(c_5);
          {
            ATerm l_5 = NULL;
            t = p_62(t);
            {
              j_5 = t;
              {
                t = not_null(d_5);
                {
                  ATerm n_5 = NULL;
                  t = q_62(t);
                  {
                    l_5 = t;
                    {
                      ATerm o_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_5), not_null(l_5)), not_null(h_5));
                      {
                        o_5 = t;
                        if(((n_5 != NULL) && (n_5 != o_5)))
                          _fail(o_5);
                        else
                          n_5 = o_5;
                      }
                      t = not_null(n_5);
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
ATerm OpDecl_2 (ATerm t, ATerm b_62 (ATerm), ATerm c_62 (ATerm))
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  z_5 :
  if(match_cons(a_6, sym_OpDecl_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      {
        ATerm g_6 = NULL,i_6 = NULL;
        ATerm h_6 = NULL;
        t = SSLgetAnnotations(not_null(a_6));
        {
          h_6 = t;
          if(((g_6 != NULL) && (g_6 != h_6)))
            _fail(h_6);
          else
            g_6 = h_6;
        }
        {
          t = not_null(b_6);
          {
            ATerm k_6 = NULL;
            t = b_62(t);
            {
              i_6 = t;
              {
                t = not_null(c_6);
                {
                  ATerm m_6 = NULL;
                  t = c_62(t);
                  {
                    k_6 = t;
                    {
                      ATerm n_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(i_6), not_null(k_6)), not_null(g_6));
                      {
                        n_6 = t;
                        if(((m_6 != NULL) && (m_6 != n_6)))
                          _fail(n_6);
                        else
                          m_6 = n_6;
                      }
                      t = not_null(m_6);
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
ATerm SVar_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_SVar_1))
    {
      z_6 = ATgetArgument(y_6, 0);
      {
        ATerm c_7 = NULL,e_7 = NULL;
        ATerm d_7 = NULL;
        t = SSLgetAnnotations(not_null(y_6));
        {
          d_7 = t;
          if(((c_7 != NULL) && (c_7 != d_7)))
            _fail(d_7);
          else
            c_7 = d_7;
        }
        {
          t = not_null(z_6);
          {
            ATerm g_7 = NULL;
            t = i_65(t);
            {
              e_7 = t;
              {
                ATerm h_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(e_7)), not_null(c_7));
                {
                  h_7 = t;
                  if(((g_7 != NULL) && (g_7 != h_7)))
                    _fail(h_7);
                  else
                    g_7 = h_7;
                }
                t = not_null(g_7);
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
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Var_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      {
        ATerm s_4 = t;
        int t_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL,f_8 = NULL;
            ATerm e_8 = NULL;
            t = SSLgetAnnotations(not_null(z_7));
            {
              e_8 = t;
              if(((d_8 != NULL) && (d_8 != e_8)))
                _fail(e_8);
              else
                d_8 = e_8;
            }
            {
              t = not_null(a_8);
              {
                ATerm h_8 = NULL;
                t = m_0(t);
                {
                  f_8 = t;
                  {
                    ATerm i_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_8)), not_null(d_8));
                    {
                      i_8 = t;
                      if(((h_8 != NULL) && (h_8 != i_8)))
                        _fail(i_8);
                      else
                        h_8 = i_8;
                    }
                    t = not_null(h_8);
                  }
                }
              }
            }
            ;
            LocalPopChoice(t_4);
          }
        else
          {
            t = s_4;
            {
              ATerm u_4 = t;
              int v_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_8 = NULL,n_8 = NULL;
                  ATerm m_8 = NULL;
                  t = SSLgetAnnotations(not_null(z_7));
                  {
                    m_8 = t;
                    if(((l_8 != NULL) && (l_8 != m_8)))
                      _fail(m_8);
                    else
                      l_8 = m_8;
                  }
                  {
                    t = not_null(a_8);
                    {
                      ATerm p_8 = NULL;
                      t = m_0(t);
                      {
                        n_8 = t;
                        {
                          ATerm q_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_8)), not_null(l_8));
                          {
                            q_8 = t;
                            if(((p_8 != NULL) && (p_8 != q_8)))
                              _fail(q_8);
                            else
                              p_8 = q_8;
                          }
                          t = not_null(p_8);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(v_4);
                }
              else
                {
                  t = u_4;
                  {
                    ATerm t_8 = NULL,v_8 = NULL;
                    ATerm u_8 = NULL;
                    t = SSLgetAnnotations(not_null(z_7));
                    {
                      u_8 = t;
                      if(((t_8 != NULL) && (t_8 != u_8)))
                        _fail(u_8);
                      else
                        t_8 = u_8;
                    }
                    {
                      t = not_null(a_8);
                      {
                        ATerm x_8 = NULL;
                        t = m_0(t);
                        {
                          v_8 = t;
                          {
                            ATerm y_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_8)), not_null(t_8));
                            {
                              y_8 = t;
                              if(((x_8 != NULL) && (x_8 != y_8)))
                                _fail(y_8);
                              else
                                x_8 = y_8;
                            }
                            t = not_null(x_8);
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
ATerm VarDec_2 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  r_9 = t;
  q_9 :
  if(match_cons(r_9, sym_VarDec_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      t_9 = ATgetArgument(r_9, 1);
      {
        ATerm x_9 = NULL,z_9 = NULL;
        ATerm y_9 = NULL;
        t = SSLgetAnnotations(not_null(r_9));
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
        {
          t = not_null(s_9);
          {
            ATerm b_10 = NULL;
            t = u_67(t);
            {
              z_9 = t;
              {
                t = not_null(t_9);
                {
                  ATerm d_10 = NULL;
                  t = v_67(t);
                  {
                    b_10 = t;
                    {
                      ATerm e_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_9), not_null(b_10)), not_null(x_9));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_SDef_3))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      u_10 = ATgetArgument(r_10, 2);
      {
        ATerm z_10 = NULL,b_11 = NULL;
        ATerm a_11 = NULL;
        t = SSLgetAnnotations(not_null(r_10));
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        {
          t = not_null(s_10);
          {
            ATerm d_11 = NULL;
            t = y_67(t);
            {
              b_11 = t;
              {
                t = not_null(t_10);
                {
                  ATerm f_11 = NULL;
                  t = z_67(t);
                  {
                    d_11 = t;
                    {
                      t = not_null(u_10);
                      {
                        ATerm h_11 = NULL;
                        t = a_68(t);
                        {
                          f_11 = t;
                          {
                            ATerm i_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(b_11), not_null(d_11), not_null(f_11)), not_null(z_10));
                            {
                              i_11 = t;
                              if(((h_11 != NULL) && (h_11 != i_11)))
                                _fail(i_11);
                              else
                                h_11 = i_11;
                            }
                            t = not_null(h_11);
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
ATerm RDef_3 (ATerm t, ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm k_64 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_RDef_3))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      z_11 = ATgetArgument(w_11, 2);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm i_12 = NULL;
            t = i_64(t);
            {
              g_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm k_12 = NULL;
                  t = j_64(t);
                  {
                    i_12 = t;
                    {
                      t = not_null(z_11);
                      {
                        ATerm m_12 = NULL;
                        t = k_64(t);
                        {
                          k_12 = t;
                          {
                            ATerm n_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(g_12), not_null(i_12), not_null(k_12)), not_null(e_12));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefaultVarDec_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_DefaultVarDec_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      {
        ATerm d_13 = NULL,f_13 = NULL;
        ATerm e_13 = NULL;
        t = SSLgetAnnotations(not_null(z_12));
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        {
          t = not_null(a_13);
          {
            ATerm h_13 = NULL;
            t = t_67(t);
            {
              f_13 = t;
              {
                ATerm i_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(f_13)), not_null(d_13));
                {
                  i_13 = t;
                  if(((h_13 != NULL) && (h_13 != i_13)))
                    _fail(i_13);
                  else
                    h_13 = i_13;
                }
                t = not_null(h_13);
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  t = SSL_int_to_string(not_null(o_13));
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_real_to_string(not_null(s_13));
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  w_13 :
  if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
    {
      z_13 = ATgetFirst((ATermList) y_13);
      a_14 = (ATerm) ATgetNext((ATermList) y_13);
      x_13 :
      if(match_int(z_13, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_14)), term_x_4), term_w_4);
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
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  e_14 :
  if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
    {
      h_14 = ATgetFirst((ATermList) g_14);
      i_14 = (ATerm) ATgetNext((ATermList) g_14);
      f_14 :
      if(match_int(h_14, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_14)), term_w_4), term_w_4);
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
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  m_14 :
  if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
    {
      p_14 = ATgetFirst((ATermList) o_14);
      q_14 = (ATerm) ATgetNext((ATermList) o_14);
      n_14 :
      if(match_int(p_14, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_14)), term_y_4), term_w_4);
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
ATerm Escape_0 (ATerm t)
{
  ATerm z_4 = t;
  int e_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(e_5);
    }
  else
    {
      t = z_4;
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm k_5 = t;
  int m_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, n_0);
      }
      ;
      LocalPopChoice(m_5);
    }
  else
    {
      t = k_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0 (ATerm t)
{
  ATerm r_5;
  r_5 = t;
  {
    ATerm v_14 = NULL;
    ATerm w_14 = NULL;
    w_14 = t;
    if(((v_14 != NULL) && (v_14 != w_14)))
      _fail(w_14);
    else
      v_14 = w_14;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(v_14));
      t = is_quoted_chars_0(t);
    }
  }
  t = r_5;
  return(t);
}
ATerm EnsugarOnce_0 (ATerm t)
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL;
      f_15 = t;
      e_15 :
      if(match_cons(f_15, sym_Str_1))
        {
          g_15 = ATgetArgument(f_15, 0);
          {
            ATerm i_15 = NULL;
            ATerm j_15 = NULL;
            t = not_null(g_15);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm u_5 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_5;
                  }
                {
                  t = escape_chars_0(t);
                  t = double_quote_chars_0(t);
                }
                return(t);
              }
              t = string_as_chars_1(t, o_0);
              {
                j_15 = t;
                if(((i_15 != NULL) && (i_15 != j_15)))
                  _fail(j_15);
                else
                  i_15 = j_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(i_15));
          }
        }
      else
        {
          if(match_cons(f_15, sym_Real_1))
            {
              g_15 = ATgetArgument(f_15, 0);
              {
                ATerm l_15 = NULL;
                ATerm m_15 = NULL;
                t = not_null(g_15);
                {
                  t = real_to_string_0(t);
                  {
                    m_15 = t;
                    if(((l_15 != NULL) && (l_15 != m_15)))
                      _fail(m_15);
                    else
                      l_15 = m_15;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(l_15));
              }
            }
          else
            {
              if(match_cons(f_15, sym_Int_1))
                {
                  g_15 = ATgetArgument(f_15, 0);
                  {
                    ATerm o_15 = NULL;
                    ATerm p_15 = NULL;
                    t = not_null(g_15);
                    {
                      t = int_to_string_0(t);
                      {
                        p_15 = t;
                        if(((o_15 != NULL) && (o_15 != p_15)))
                          _fail(p_15);
                        else
                          o_15 = p_15;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(o_15));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
        ATerm v_5 = t;
        int w_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, AddLeadingPrime_0);
            ;
            LocalPopChoice(w_5);
          }
        else
          {
            t = v_5;
            {
              ATerm x_5 = t;
              int y_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, AddLeadingPrime_0, _id, _id);
                  ;
                  LocalPopChoice(y_5);
                }
              else
                {
                  t = x_5;
                  {
                    ATerm d_6 = t;
                    int e_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, AddLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(e_6);
                      }
                    else
                      {
                        t = d_6;
                        {
                          ATerm f_6 = t;
                          int j_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, AddLeadingPrime_0, _id);
                              ;
                              LocalPopChoice(j_6);
                            }
                          else
                            {
                              t = f_6;
                              {
                                ATerm l_6 = t;
                                int o_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, AddLeadingPrime_0);
                                    ;
                                    LocalPopChoice(o_6);
                                  }
                                else
                                  {
                                    t = l_6;
                                    {
                                      ATerm p_6 = t;
                                      int q_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, AddLeadingPrime_0);
                                          ;
                                          LocalPopChoice(q_6);
                                        }
                                      else
                                        {
                                          t = p_6;
                                          {
                                            ATerm r_6 = t;
                                            int s_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, AddLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(s_6);
                                              }
                                            else
                                              {
                                                t = r_6;
                                                t = Op_2(t, AddLeadingPrime_0, _id);
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym__2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_16)), not_null(z_15)), (ATerm) ATinsert(ATempty, not_null(z_15)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm g_16 = NULL;
  g_16 = t;
  if(((f_16 != NULL) && (f_16 != g_16)))
    _fail(g_16);
  else
    f_16 = g_16;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(f_16));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm u_99 (ATerm))
{
  t = explode_string_0(t);
  {
    t = u_99(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  k_16 = t;
  j_16 :
  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      m_16 = (ATerm) ATgetNext((ATermList) k_16);
      t = not_null(m_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  q_16 :
  if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
    {
      t_16 = ATgetFirst((ATermList) s_16);
      u_16 = (ATerm) ATgetNext((ATermList) s_16);
      r_16 :
      if(((ATgetType(u_16) == AT_LIST) && ATisEmpty(u_16)))
        {
          t = not_null(t_16);
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
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm is_quoted_chars_0 (ATerm t)
{
  ATerm d_17 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
    e_17 = t;
    c_17 :
    if(match_cons(e_17, sym__2))
      {
        f_17 = ATgetArgument(e_17, 0);
        g_17 = ATgetArgument(e_17, 1);
        {
          ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
          if(((d_17 != NULL) && (d_17 != f_17)))
            _fail(f_17);
          else
            d_17 = f_17;
          {
            if(((h_17 != NULL) && (h_17 != g_17)))
              _fail(g_17);
            else
              h_17 = g_17;
            {
              t = not_null(h_17);
              {
                i_17 = t;
                b_17 :
                if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
                  {
                    j_17 = ATgetFirst((ATermList) i_17);
                    k_17 = (ATerm) ATgetNext((ATermList) i_17);
                    {
                      ATerm l_17 = NULL,m_17 = NULL;
                      if(((d_17 != NULL) && (d_17 != j_17)))
                        _fail(j_17);
                      else
                        d_17 = j_17;
                      {
                        if(((l_17 != NULL) && (l_17 != k_17)))
                          _fail(k_17);
                        else
                          l_17 = k_17;
                        {
                          t = not_null(l_17);
                          {
                            t = last_0(t);
                            {
                              m_17 = t;
                              if(((d_17 != NULL) && (d_17 != m_17)))
                                _fail(m_17);
                              else
                                d_17 = m_17;
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
    else
      {
        _fail(t);
      }
  }
  t = v_6;
  return(t);
}
ATerm is_quoted_0 (ATerm t)
{
  t = _2(t, _id, explode_string_0);
  t = is_quoted_chars_0(t);
  return(t);
}
ATerm is_double_quoted_0 (ATerm t)
{
  ATerm w_6;
  w_6 = t;
  {
    ATerm r_17 = NULL;
    ATerm s_17 = NULL;
    s_17 = t;
    if(((r_17 != NULL) && (r_17 != s_17)))
      _fail(s_17);
    else
      r_17 = s_17;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(r_17));
      t = is_quoted_0(t);
    }
  }
  t = w_6;
  return(t);
}
ATerm Ensugar_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  y_17 :
  if(match_cons(c_18, sym_StratRule_3))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      b_18 = ATgetArgument(c_18, 2);
      z_17 :
      if(match_cons(b_18, sym_Id_0))
        {
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, not_null(d_18), not_null(e_18));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_18, sym_Rule_3))
        {
          d_18 = ATgetArgument(c_18, 0);
          e_18 = ATgetArgument(c_18, 1);
          b_18 = ATgetArgument(c_18, 2);
          a_18 :
          if(match_cons(b_18, sym_Id_0))
            {
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, not_null(d_18), not_null(e_18));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_18, sym_Prim_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              {
                ATerm l_18 = NULL;
                ATerm a_7;
                a_7 = t;
                {
                  t = not_null(d_18);
                  {
                    ATerm b_7 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_double_quoted_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_7;
                      }
                  }
                }
                t = a_7;
                {
                  ATerm m_18 = NULL;
                  t = not_null(d_18);
                  {
                    t = double_quote_0(t);
                    {
                      m_18 = t;
                      if(((l_18 != NULL) && (l_18 != m_18)))
                        _fail(m_18);
                      else
                        l_18 = m_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_18), not_null(e_18));
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
ATerm repeat_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm r_18 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = d_90(t);
      t = r_18(t);
      return(t);
    }
    t = try_1(t, p_0);
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_99 (ATerm))
{
  t = w_99(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1(t, w_99);
      return(t);
    }
    t = _all(t, q_0);
  }
  return(t);
}
ATerm Stratego_Ensugar_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm z_18 = NULL;
    ATerm b_19 = NULL;
    z_18 = t;
    {
      ATerm c_19 = NULL;
      ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
      t = not_null(z_18);
      {
        c_19 = t;
        {
          t = SSL_explode_term(not_null(c_19));
          {
            e_19 = t;
            v_18 :
            if(match_cons(e_19, sym__2))
              {
                f_19 = ATgetArgument(e_19, 0);
                g_19 = ATgetArgument(e_19, 1);
                w_18 :
                if(match_string(f_19, ""))
                  {
                    x_18 :
                    if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
                      {
                        h_19 = ATgetFirst((ATermList) g_19);
                        i_19 = (ATerm) ATgetNext((ATermList) g_19);
                        y_18 :
                        if(((ATgetType(i_19) == AT_LIST) && ATisEmpty(i_19)))
                          {
                            if(((b_19 != NULL) && (b_19 != h_19)))
                              _fail(h_19);
                            else
                              b_19 = h_19;
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
      t = not_null(b_19);
    }
    return(t);
  }
  t = try_1(t, r_0);
  {
    ATerm s_0 (ATerm t)
    {
      t = repeat_1(t, Ensugar_0);
      t = try_1(t, EnsugarOnce_0);
      return(t);
    }
    t = topdown_1(t, s_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(t_19);
          {
            ATerm c_20 = NULL;
            t = y_59(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = z_59(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_20), not_null(c_20)), not_null(y_19));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
  ATerm f_7;
  f_7 = t;
  {
    ATerm m_20 = NULL;
    ATerm n_20 = NULL;
    t = term_i_7;
    {
      t = whoami_0(t);
      {
        n_20 = t;
        if(((m_20 != NULL) && (m_20 != n_20)))
          _fail(n_20);
        else
          m_20 = n_20;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(m_20)), term_k_7));
      {
        t = printnl_0(t);
        {
          t = term_m_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym__2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      {
        ATerm n_7;
        n_7 = t;
        t = SSL_printnl(not_null(s_20), not_null(t_20));
        t = n_7;
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
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_implode_string(not_null(y_20));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
        d_21 = t;
        c_21 :
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            e_21 = ATgetFirst((ATermList) d_21);
            f_21 = (ATerm) ATgetNext((ATermList) d_21);
            {
              t = not_null(e_21);
              {
                ATerm t_0 (ATerm t)
                {
                  t = not_null(f_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_0);
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
  ATerm p_21 = NULL;
  ATerm r_21 = NULL;
  p_21 = t;
  {
    ATerm s_21 = NULL;
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
    t = not_null(p_21);
    {
      s_21 = t;
      {
        t = SSL_explode_term(not_null(s_21));
        {
          u_21 = t;
          n_21 :
          if(match_cons(u_21, sym__2))
            {
              v_21 = ATgetArgument(u_21, 0);
              w_21 = ATgetArgument(u_21, 1);
              o_21 :
              if(match_string(v_21, ""))
                {
                  if(((r_21 != NULL) && (r_21 != w_21)))
                    _fail(w_21);
                  else
                    r_21 = w_21;
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
      t = not_null(r_21);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm a_22 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_22);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          t = Nil_0(t);
          t = h_77(t);
        }
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__2))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      {
        t = not_null(e_22);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(f_22);
            return(t);
          }
          t = at_end_1(t, u_0);
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
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = SSL_explode_string(not_null(k_22));
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
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            ;
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
              t_22 = t;
              s_22 :
              if(match_cons(t_22, sym_Path_1))
                {
                  u_22 = ATgetArgument(t_22, 0);
                  t = not_null(u_22);
                }
              else
                {
                  if(match_cons(t_22, sym_Var_1))
                    {
                      u_22 = ATgetArgument(t_22, 0);
                      {
                        t = not_null(u_22);
                        {
                          ATerm b_8 = t;
                          int c_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(c_8);
                            }
                          else
                            {
                              t = b_8;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_g_8;
                                  return(t);
                                }
                                t = debug_1(t, w_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_22, sym_Prefix_2))
                        {
                          u_22 = ATgetArgument(t_22, 0);
                          v_22 = ATgetArgument(t_22, 1);
                          {
                            ATerm a_23 = NULL,c_23 = NULL;
                            ATerm j_8;
                            j_8 = t;
                            {
                              ATerm b_23 = NULL;
                              t = not_null(u_22);
                              {
                                t = eval_config_0(t);
                                {
                                  b_23 = t;
                                  if(((a_23 != NULL) && (a_23 != b_23)))
                                    _fail(b_23);
                                  else
                                    a_23 = b_23;
                                }
                              }
                            }
                            t = j_8;
                            {
                              ATerm d_23 = NULL;
                              t = not_null(v_22);
                              {
                                t = eval_config_0(t);
                                {
                                  d_23 = t;
                                  if(((c_23 != NULL) && (c_23 != d_23)))
                                    _fail(d_23);
                                  else
                                    c_23 = d_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), not_null(c_23));
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
  ATerm l_23 = NULL;
  l_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(l_23));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_8;
            o_8 = t;
            {
              ATerm n_23 = NULL;
              ATerm o_23 = NULL;
              o_23 = t;
              if(((n_23 != NULL) && (n_23 != o_23)))
                _fail(o_23);
              else
                n_23 = o_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_8, not_null(l_23), not_null(n_23));
                t = table_put_0(t);
              }
            }
            t = o_8;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_97 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    ATerm r_8;
    r_8 = t;
    {
      ATerm s_23 = NULL;
      ATerm t_23 = NULL;
      t = term_s_8;
      {
        t = get_config_0(t);
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), term_w_8);
        t = geq_0(t);
      }
    }
    t = r_8;
    t = p_97(t);
    return(t);
  }
  t = try_1(t, y_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  z_23 = t;
  x_23 :
  if(match_cons(z_23, sym__2))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      y_23 :
      if(match_cons(b_24, sym_Stream_1))
        {
          c_24 = ATgetArgument(b_24, 0);
          {
            ATerm f_24 = NULL;
            t = SSL_fputc(not_null(a_24), not_null(c_24));
            {
              ATerm g_24 = NULL;
              g_24 = t;
              if(((f_24 != NULL) && (f_24 != g_24)))
                _fail(g_24);
              else
                f_24 = g_24;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_24));
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
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  n_24 = t;
  l_24 :
  if(match_cons(n_24, sym__2))
    {
      o_24 = ATgetArgument(n_24, 0);
      q_24 = ATgetArgument(n_24, 1);
      m_24 :
      if(match_cons(o_24, sym_Stream_1))
        {
          p_24 = ATgetArgument(o_24, 0);
          {
            ATerm t_24 = NULL;
            t = SSL_write_term_to_stream_text(not_null(p_24), not_null(q_24));
            {
              ATerm u_24 = NULL;
              u_24 = t;
              if(((t_24 != NULL) && (t_24 != u_24)))
                _fail(u_24);
              else
                t_24 = u_24;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_24));
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
  ATerm z_0 (ATerm t)
  {
    ATerm y_24 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm z_24 = NULL;
      z_24 = t;
      if(((y_24 != NULL) && (y_24 != z_24)))
        _fail(z_24);
      else
        y_24 = z_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(y_24));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, z_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  f_25 = t;
  d_25 :
  if(match_cons(f_25, sym__2))
    {
      g_25 = ATgetArgument(f_25, 0);
      i_25 = ATgetArgument(f_25, 1);
      e_25 :
      if(match_cons(g_25, sym_Stream_1))
        {
          h_25 = ATgetArgument(g_25, 0);
          {
            ATerm l_25 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(h_25), not_null(i_25));
            {
              ATerm m_25 = NULL;
              m_25 = t;
              if(((l_25 != NULL) && (l_25 != m_25)))
                _fail(m_25);
              else
                l_25 = m_25;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_25));
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
ATerm WriteToFile_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  s_25 :
  if(match_cons(m_26, sym__2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm r_26 = NULL,t_26 = NULL;
        t = not_null(n_26);
        {
          ATerm s_26 = NULL;
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), term_a_9);
            {
              t = open_stream_0(t);
              {
                ATerm u_26 = NULL;
                u_26 = t;
                if(((t_26 != NULL) && (t_26 != u_26)))
                  _fail(u_26);
                else
                  t_26 = u_26;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(o_26));
                  {
                    t = q_87(t);
                    {
                      t = fclose_0(t);
                      t = not_null(o_26);
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
  ATerm c_27 = NULL;
  ATerm b_9;
  b_9 = t;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm d_27 = NULL,e_27 = NULL;
            d_27 = t;
            z_26 :
            if(match_cons(d_27, sym_Output_1))
              {
                e_27 = ATgetArgument(d_27, 0);
                if(((c_27 != NULL) && (c_27 != e_27)))
                  _fail(e_27);
                else
                  c_27 = e_27;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_1);
          ;
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
          {
            ATerm f_27 = NULL;
            t = term_e_9;
            {
              f_27 = t;
              if(((c_27 != NULL) && (c_27 != f_27)))
                _fail(f_27);
              else
                c_27 = f_27;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_1, _id);
  }
  t = b_9;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        t = not_null(c_27);
        return(t);
      }
      t = split_2(t, d_1, _id);
      return(t);
    }
    t = _2(t, _id, c_1);
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_27 = NULL;
              g_27 = t;
              b_27 :
              if(!(match_cons(g_27, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_1);
            return(t);
          }
          t = _2(t, e_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm m_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  ATerm h_9;
  h_9 = t;
  t = dtime_0(t);
  t = h_9;
  {
    t = w_73(t);
    {
      ATerm i_9;
      i_9 = t;
      {
        ATerm n_27 = NULL;
        t = dtime_0(t);
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
      }
      t = i_9;
      {
        u_27 = t;
        l_27 :
        if(match_cons(u_27, sym__2))
          {
            v_27 = ATgetArgument(u_27, 0);
            w_27 = ATgetArgument(u_27, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_27)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_27))), not_null(w_27));
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
  ATerm g_28 = NULL,h_28 = NULL;
  ATerm n_28 (ATerm t)
  {
    t = SSL_fclose(not_null(h_28));
    return(t);
  }
  h_28 = t;
  f_28 :
  if(match_cons(h_28, sym_Stream_1))
    {
      g_28 = ATgetArgument(h_28, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(g_28));
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            t = n_28(t);
          }
      }
    }
  else
    {
      t = n_28(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Stream_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      t = SSL_read_term_from_stream(not_null(r_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm l_9;
  l_9 = t;
  {
    ATerm b_29 = NULL,d_29 = NULL;
    ATerm m_9;
    m_9 = t;
    {
      ATerm c_29 = NULL;
      t = c_87(t);
      {
        c_29 = t;
        if(((b_29 != NULL) && (b_29 != c_29)))
          _fail(c_29);
        else
          b_29 = c_29;
      }
    }
    t = m_9;
    {
      ATerm e_29 = NULL;
      e_29 = t;
      if(((d_29 != NULL) && (d_29 != e_29)))
        _fail(e_29);
      else
        d_29 = e_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_29)), not_null(b_29)));
        t = printnl_0(t);
      }
    }
  }
  t = l_9;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,p_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym__2))
    {
      l_29 = ATgetArgument(k_29, 0);
      p_29 = ATgetArgument(k_29, 1);
      {
        ATerm u_29 = NULL;
        t = SSL_fopen(not_null(l_29), not_null(p_29));
        {
          ATerm v_29 = NULL;
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_29));
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
  ATerm z_29 = NULL;
  z_29 = t;
  t = SSL_is_string(not_null(z_29));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm d_30 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm e_30 = NULL;
    e_30 = t;
    if(((d_30 != NULL) && (d_30 != e_30)))
      _fail(e_30);
    else
      d_30 = e_30;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_30));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm i_30 = NULL;
    i_30 = t;
    if(((h_30 != NULL) && (h_30 != i_30)))
      _fail(i_30);
    else
      h_30 = i_30;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_30));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm l_30 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm m_30 = NULL;
    m_30 = t;
    if(((l_30 != NULL) && (l_30 != m_30)))
      _fail(m_30);
    else
      l_30 = m_30;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_30));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(s_30, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(s_30, sym_stdin_0))
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
  ATerm c_31 = NULL;
  ATerm e_31 = NULL,f_31 = NULL;
  c_31 = t;
  {
    ATerm g_31 = NULL;
    ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
    t = not_null(c_31);
    {
      g_31 = t;
      {
        t = SSL_explode_term(not_null(g_31));
        {
          i_31 = t;
          z_30 :
          if(match_cons(i_31, sym__2))
            {
              j_31 = ATgetArgument(i_31, 0);
              k_31 = ATgetArgument(i_31, 1);
              a_31 :
              if(match_string(j_31, ""))
                {
                  b_31 :
                  if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
                    {
                      l_31 = ATgetFirst((ATermList) k_31);
                      m_31 = (ATerm) ATgetNext((ATermList) k_31);
                      {
                        if(((f_31 != NULL) && (f_31 != l_31)))
                          _fail(l_31);
                        else
                          f_31 = l_31;
                        if(((e_31 != NULL) && (e_31 != m_31)))
                          _fail(m_31);
                        else
                          e_31 = m_31;
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
    t = not_null(f_31);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm p_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm x_31 = NULL,y_31 = NULL;
                    x_31 = t;
                    s_31 :
                    if(match_cons(x_31, sym_Path_1))
                      {
                        y_31 = ATgetArgument(x_31, 0);
                        t = not_null(y_31);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, g_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = p_9;
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
  ATerm g_32 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_32 = NULL;
      ATerm f_32 = NULL;
      f_32 = t;
      if(((e_32 != NULL) && (e_32 != f_32)))
        _fail(f_32);
      else
        e_32 = f_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), term_a_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm h_1 (ATerm t)
        {
          t = term_c_10;
          return(t);
        }
        t = debug_1(t, h_1);
        _fail(t);
      }
    }
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm h_32 = NULL;
      t = read_from_stream_0(t);
      {
        h_32 = t;
        if(((g_32 != NULL) && (g_32 != h_32)))
          _fail(h_32);
        else
          g_32 = h_32;
      }
    }
    t = f_10;
    {
      t = fclose_0(t);
      t = not_null(g_32);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm m_32 = NULL,o_32 = NULL;
  ATerm g_10;
  g_10 = t;
  {
    ATerm n_32 = NULL;
    t = u_75(t);
    {
      n_32 = t;
      if(((m_32 != NULL) && (m_32 != n_32)))
        _fail(n_32);
      else
        m_32 = n_32;
    }
  }
  t = g_10;
  {
    ATerm p_32 = NULL;
    t = v_75(t);
    {
      p_32 = t;
      if(((o_32 != NULL) && (o_32 != p_32)))
        _fail(p_32);
      else
        o_32 = p_32;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_32), not_null(o_32));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_32 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm w_32 = NULL,x_32 = NULL;
          w_32 = t;
          t_32 :
          if(match_cons(w_32, sym_Input_1))
            {
              x_32 = ATgetArgument(w_32, 0);
              if(((v_32 != NULL) && (v_32 != x_32)))
                _fail(x_32);
              else
                v_32 = x_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm y_32 = NULL;
          t = term_k_10;
          {
            y_32 = t;
            if(((v_32 != NULL) && (v_32 != y_32)))
              _fail(y_32);
            else
              v_32 = y_32;
          }
        }
      }
  }
  t = h_10;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(v_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm d_33 = NULL;
    d_33 = t;
    b_33 :
    if(!(match_string(d_33, "-k")))
      {
        if(!(match_string(d_33, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm e_33 = NULL;
      ATerm f_33 = NULL;
      t = string_to_int_0(t);
      {
        f_33 = t;
        if(((e_33 != NULL) && (e_33 != f_33)))
          _fail(f_33);
        else
          e_33 = f_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(e_33));
        t = set_config_0(t);
      }
    }
    t = l_10;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  t = ArgOption_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = SSL_string_to_int(not_null(i_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm q_33 = NULL;
        q_33 = t;
        l_33 :
        if(!(match_string(q_33, "-S")))
          {
            if(!(match_string(q_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_w_10;
        t = set_config_0(t);
        t = term_x_10;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        t = term_y_10;
        return(t);
      }
      t = Option_3(t, n_1, o_1, p_1);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm c_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_33 = NULL;
              r_33 = t;
              m_33 :
              if(!(match_string(r_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm u_33 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm s_33 = NULL;
                ATerm t_33 = NULL;
                t = string_to_int_0(t);
                {
                  t_33 = t;
                  if(((s_33 != NULL) && (s_33 != t_33)))
                    _fail(t_33);
                  else
                    s_33 = t_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, not_null(s_33));
                  t = set_config_0(t);
                }
              }
              t = g_11;
              {
                ATerm v_33 = NULL;
                v_33 = t;
                if(((u_33 != NULL) && (u_33 != v_33)))
                  _fail(v_33);
                else
                  u_33 = v_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_33));
              }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_j_11;
              return(t);
            }
            t = ArgOption_3(t, q_1, r_1, s_1);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = c_11;
            {
              ATerm t_1 (ATerm t)
              {
                ATerm w_33 = NULL;
                w_33 = t;
                p_33 :
                if(!(match_string(w_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_1 (ATerm t)
              {
                t = term_l_11;
                t = set_config_0(t);
                t = term_m_11;
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = term_n_11;
                return(t);
              }
              t = Option_3(t, t_1, u_1, v_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm c_34 = NULL;
    c_34 = t;
    z_33 :
    if(!(match_string(c_34, "-o")))
      {
        if(!(match_string(c_34, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm f_34 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm d_34 = NULL;
      ATerm e_34 = NULL;
      e_34 = t;
      if(((d_34 != NULL) && (d_34 != e_34)))
        _fail(e_34);
      else
        d_34 = e_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(d_34));
        t = set_config_0(t);
      }
    }
    t = q_11;
    {
      ATerm g_34 = NULL;
      g_34 = t;
      if(((f_34 != NULL) && (f_34 != g_34)))
        _fail(g_34);
      else
        f_34 = g_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_34));
    }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_s_11;
    return(t);
  }
  t = ArgOption_3(t, w_1, x_1, y_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm l_34 = NULL;
          l_34 = t;
          k_34 :
          if(!(match_string(l_34, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_2 (ATerm t)
        {
          t = term_b_12;
          t = set_config_0(t);
          t = term_c_12;
          return(t);
        }
        ATerm b_2 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = Option_3(t, z_1, a_2, b_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  r_34 = t;
  p_34 :
  if(match_string(r_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
        {
          s_34 = ATgetFirst((ATermList) r_34);
          t_34 = (ATerm) ATgetNext((ATermList) r_34);
          q_34 :
          if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
            {
              u_34 = ATgetFirst((ATermList) t_34);
              v_34 = (ATerm) ATgetNext((ATermList) t_34);
              {
                ATerm z_34 = NULL;
                ATerm h_12;
                h_12 = t;
                {
                  t = not_null(s_34);
                  t = j_0(t);
                }
                t = h_12;
                {
                  ATerm a_35 = NULL;
                  t = not_null(u_34);
                  {
                    t = k_0(t);
                    {
                      a_35 = t;
                      if(((z_34 != NULL) && (z_34 != a_35)))
                        _fail(a_35);
                      else
                        z_34 = a_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_34)), not_null(z_34));
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
  ATerm c_2 (ATerm t)
  {
    ATerm h_35 = NULL;
    h_35 = t;
    e_35 :
    if(!(match_string(h_35, "-i")))
      {
        if(!(match_string(h_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm m_35 = NULL;
    ATerm j_12;
    j_12 = t;
    {
      ATerm i_35 = NULL;
      ATerm l_35 = NULL;
      l_35 = t;
      if(((i_35 != NULL) && (i_35 != l_35)))
        _fail(l_35);
      else
        i_35 = l_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_12, not_null(i_35));
        t = set_config_0(t);
      }
    }
    t = j_12;
    {
      ATerm n_35 = NULL;
      n_35 = t;
      if(((m_35 != NULL) && (m_35 != n_35)))
        _fail(n_35);
      else
        m_35 = n_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_35));
    }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_o_12;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm r_35 = NULL;
  t = report_run_time_0(t);
  {
    ATerm s_35 = NULL;
    t = term_i_7;
    {
      t = whoami_0(t);
      {
        s_35 = t;
        if(((r_35 != NULL) && (r_35 != s_35)))
          _fail(s_35);
        else
          r_35 = s_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, term_t_12), not_null(r_35)));
      {
        t = printnl_0(t);
        {
          t = term_m_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_u_12;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  t = SSL_TicksToSeconds(not_null(v_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_36), not_null(c_36));
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = SSL_addr(not_null(b_36), not_null(c_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm x_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_83(t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = x_12;
      {
        ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
        j_36 = t;
        i_36 :
        if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
          {
            k_36 = ATgetFirst((ATermList) j_36);
            l_36 = (ATerm) ATgetNext((ATermList) j_36);
            {
              ATerm o_36 = NULL;
              ATerm q_36 = NULL;
              t = not_null(l_36);
              {
                t = foldr_2(t, g_83, h_83);
                {
                  q_36 = t;
                  if(((o_36 != NULL) && (o_36 != q_36)))
                    _fail(q_36);
                  else
                    o_36 = q_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(o_36));
                t = h_83(t);
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
ATerm crush_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm x_36 = NULL;
  ATerm z_36 = NULL;
  x_36 = t;
  {
    ATerm a_37 = NULL;
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
    t = not_null(x_36);
    {
      a_37 = t;
      {
        t = SSL_explode_term(not_null(a_37));
        {
          c_37 = t;
          w_36 :
          if(match_cons(c_37, sym__2))
            {
              d_37 = ATgetArgument(c_37, 0);
              e_37 = ATgetArgument(c_37, 1);
              if(((z_36 != NULL) && (z_36 != e_37)))
                _fail(e_37);
              else
                z_36 = e_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_36);
      t = foldr_2(t, e_81, f_81);
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
    ATerm f_2 (ATerm t)
    {
      t = term_v_10;
      return(t);
    }
    t = crush_2(t, f_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,q_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym__2))
    {
      n_37 = ATgetArgument(m_37, 0);
      q_37 = ATgetArgument(m_37, 1);
      {
        ATerm c_13;
        c_13 = t;
        {
          ATerm g_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_37), not_null(q_37));
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = g_13;
              t = SSL_gtr(not_null(n_37), not_null(q_37));
            }
        }
        t = c_13;
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
  ATerm w_37 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      x_37 = t;
      v_37 :
      if(match_cons(x_37, sym__2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          {
            if(((w_37 != NULL) && (w_37 != y_37)))
              _fail(y_37);
            else
              w_37 = y_37;
            if(((w_37 != NULL) && (w_37 != z_37)))
              _fail(z_37);
            else
              w_37 = z_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_97 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm m_13;
    m_13 = t;
    {
      ATerm c_38 = NULL;
      ATerm d_38 = NULL;
      t = term_s_8;
      {
        t = get_config_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), term_m_7);
        t = geq_0(t);
      }
    }
    t = m_13;
    t = o_97(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm h_38 = NULL,j_38 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm i_38 = NULL;
      t = run_time_0(t);
      {
        i_38 = t;
        if(((h_38 != NULL) && (h_38 != i_38)))
          _fail(i_38);
        else
          h_38 = i_38;
      }
    }
    t = n_13;
    {
      ATerm k_38 = NULL;
      t = term_i_7;
      {
        t = whoami_0(t);
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_13), not_null(h_38)), term_p_13), not_null(j_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_v_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_Version_0))
    {
      ATerm w_38 = NULL,y_38 = NULL;
      ATerm r_13;
      r_13 = t;
      {
        ATerm x_38 = NULL;
        t = SSLgetAnnotations(not_null(t_38));
        {
          x_38 = t;
          if(((w_38 != NULL) && (w_38 != x_38)))
            _fail(x_38);
          else
            w_38 = x_38;
        }
      }
      t = r_13;
      {
        ATerm z_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_38));
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
        t = not_null(y_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm u_74 (ATerm))
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm d_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = d_14;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, i_2);
      }
    }
  t = u_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = SSL_table_create(not_null(e_39));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      t = term_l_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_r_14, not_null(i_39));
          t = table_put_0(t);
        }
      }
    }
    t = k_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  t = SSL_table_destroy(not_null(p_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  t = SSL_exit(not_null(t_39));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm w_39 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = Cons_2(t, s_76, w_39);
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  f_40 = t;
  c_40 :
  if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
    {
      d_40 = ATgetFirst((ATermList) f_40);
      e_40 = (ATerm) ATgetNext((ATermList) f_40);
      {
        ATerm i_40 = NULL;
        t = not_null(e_40);
        {
          ATerm u_14;
          u_14 = t;
          {
            ATerm j_40 = NULL,l_40 = NULL,n_40 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm k_40 = NULL;
              t = i_0(t);
              {
                k_40 = t;
                if(((j_40 != NULL) && (j_40 != k_40)))
                  _fail(k_40);
                else
                  j_40 = k_40;
              }
            }
            t = x_14;
            {
              ATerm m_40 = NULL;
              t = not_null(d_40);
              {
                t = g_0(t);
                {
                  m_40 = t;
                  if(((l_40 != NULL) && (l_40 != m_40)))
                    _fail(m_40);
                  else
                    l_40 = m_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_40)), not_null(l_40));
                {
                  n_40 = t;
                  if(((i_40 != NULL) && (i_40 != n_40)))
                    _fail(n_40);
                  else
                    i_40 = n_40;
                }
              }
            }
          }
          t = u_14;
          {
            ATerm j_2 (ATerm t)
            {
              t = not_null(i_40);
              return(t);
            }
            t = reverse_acc_2(t, g_0, j_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_40) == AT_LIST) && ATisEmpty(f_40)))
        {
          {
            t = term_i_7;
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
  ATerm k_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Program_1))
    {
      g_41 = ATgetArgument(f_41, 0);
      {
        ATerm j_41 = NULL,l_41 = NULL;
        ATerm k_41 = NULL;
        t = SSLgetAnnotations(not_null(f_41));
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
        {
          t = not_null(g_41);
          {
            ATerm n_41 = NULL;
            t = y_72(t);
            {
              l_41 = t;
              {
                ATerm o_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_41)), not_null(j_41));
                {
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                }
                t = not_null(n_41);
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
  ATerm x_41 = NULL;
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_41 = NULL;
      t = term_u_12;
      {
        t = get_config_0(t);
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
      }
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm z_41 = NULL;
            z_41 = t;
            if(((x_41 != NULL) && (x_41 != z_41)))
              _fail(z_41);
            else
              x_41 = z_41;
            return(t);
          }
          t = Program_1(t, m_2);
          return(t);
        }
        t = option_defined_1(t, l_2);
      }
    }
  {
    ATerm n_2 (ATerm t)
    {
      ATerm o_2 (ATerm t)
      {
        t = not_null(x_41);
        return(t);
      }
      t = short_description_1(t, o_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, n_2);
    {
      t = term_a_15;
      {
        t = echo_0(t);
        {
          t = term_d_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm a_42 = NULL;
                  ATerm b_42 = NULL;
                  b_42 = t;
                  if(((a_42 != NULL) && (a_42 != b_42)))
                    _fail(b_42);
                  else
                    a_42 = b_42;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_42)), term_h_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_2);
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm c_42 = NULL;
                    ATerm d_42 = NULL;
                    ATerm r_2 (ATerm t)
                    {
                      t = not_null(x_41);
                      return(t);
                    }
                    t = long_description_1(t, r_2);
                    {
                      d_42 = t;
                      if(((c_42 != NULL) && (c_42 != d_42)))
                        _fail(d_42);
                      else
                        c_42 = d_42;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_42)), term_k_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_2);
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
  ATerm n_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = n_15;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm n_42 = NULL,o_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym_Undefined_1))
    {
      o_42 = ATgetArgument(n_42, 0);
      {
        ATerm r_42 = NULL,t_42 = NULL;
        ATerm s_42 = NULL;
        t = SSLgetAnnotations(not_null(n_42));
        {
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
        }
        {
          t = not_null(o_42);
          {
            ATerm v_42 = NULL;
            t = z_72(t);
            {
              t_42 = t;
              {
                ATerm w_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_42)), not_null(r_42));
                {
                  w_42 = t;
                  if(((v_42 != NULL) && (v_42 != w_42)))
                    _fail(w_42);
                  else
                    v_42 = w_42;
                }
                t = not_null(v_42);
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
ATerm fetch_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm b_43 (ATerm t)
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_77, _id);
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        t = Cons_2(t, _id, b_43);
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_88 (ATerm))
{
  t = fetch_1(t, u_88);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  c_43 :
  if(((ATgetType(d_43) == AT_LIST) && ATisEmpty(d_43)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
        {
          e_43 = ATgetFirst((ATermList) d_43);
          f_43 = (ATerm) ATgetNext((ATermList) d_43);
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
  ATerm t_15;
  t_15 = t;
  {
    ATerm i_43 = NULL;
    ATerm l_43 = NULL;
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm j_43 = NULL;
          ATerm k_43 = NULL;
          k_43 = t;
          if(((j_43 != NULL) && (j_43 != k_43)))
            _fail(k_43);
          else
            j_43 = k_43;
          t = (ATerm) ATinsert(ATempty, not_null(j_43));
        }
      }
    {
      l_43 = t;
      if(((i_43 != NULL) && (i_43 != l_43)))
        _fail(l_43);
      else
        i_43 = l_43;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(i_43));
      t = printnl_0(t);
    }
  }
  t = t_15;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_u_12;
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
  ATerm w_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = w_15;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym_Help_0))
    {
      ATerm u_43 = NULL,w_43 = NULL;
      ATerm c_16;
      c_16 = t;
      {
        ATerm v_43 = NULL;
        t = SSLgetAnnotations(not_null(s_43));
        {
          v_43 = t;
          if(((u_43 != NULL) && (u_43 != v_43)))
            _fail(v_43);
          else
            u_43 = v_43;
        }
      }
      t = c_16;
      {
        ATerm x_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_43));
        {
          x_43 = t;
          if(((w_43 != NULL) && (w_43 != x_43)))
            _fail(x_43);
          else
            w_43 = x_43;
        }
        t = not_null(w_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_84(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm d_44 = NULL;
        d_44 = t;
        b_44 :
        if(!(match_string(d_44, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_o_16;
        t = set_config_0(t);
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_p_16;
        return(t);
      }
      t = Option_3(t, s_2, t_2, u_2);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm e_44 = NULL;
          e_44 = t;
          c_44 :
          if(!(match_string(e_44, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = term_o_16;
          {
            t = set_config_0(t);
            {
              t = term_w_16;
              t = set_config_0(t);
            }
          }
          t = term_x_16;
          return(t);
        }
        ATerm x_2 (ATerm t)
        {
          t = term_y_16;
          return(t);
        }
        t = Option_3(t, v_2, w_2, x_2);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      t = SSL_table_get(not_null(i_44), not_null(j_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  q_44 = t;
  p_44 :
  if(match_cons(q_44, sym__3))
    {
      s_44 = ATgetArgument(q_44, 0);
      t_44 = ATgetArgument(q_44, 1);
      u_44 = ATgetArgument(q_44, 2);
      {
        ATerm z_16;
        z_16 = t;
        {
          ATerm y_44 = NULL;
          ATerm z_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(t_44));
          {
            ATerm a_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = a_17;
                t = (ATerm) ATempty;
              }
            {
              z_44 = t;
              if(((y_44 != NULL) && (y_44 != z_44)))
                _fail(z_44);
              else
                y_44 = z_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_44), not_null(t_44), (ATerm) ATinsert(CheckATermList(not_null(y_44)), not_null(u_44)));
            t = table_put_0(t);
          }
        }
        t = z_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm d_45 = NULL;
  ATerm e_45 = NULL;
  t = term_i_7;
  {
    t = z_89(t);
    {
      e_45 = t;
      if(((d_45 != NULL) && (d_45 != e_45)))
        _fail(e_45);
      else
        d_45 = e_45;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_15, term_c_15, not_null(d_45));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm k_45 = NULL,l_45 = NULL,q_45 = NULL;
  k_45 = t;
  j_45 :
  if(match_string(k_45, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
        {
          l_45 = ATgetFirst((ATermList) k_45);
          q_45 = (ATerm) ATgetNext((ATermList) k_45);
          {
            ATerm y_45 = NULL;
            ATerm o_17;
            o_17 = t;
            {
              t = not_null(l_45);
              t = a_0(t);
            }
            t = o_17;
            {
              ATerm z_45 = NULL;
              t = term_i_7;
              {
                t = b_0(t);
                {
                  z_45 = t;
                  if(((y_45 != NULL) && (y_45 != z_45)))
                    _fail(z_45);
                  else
                    y_45 = z_45;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_45)), not_null(y_45));
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
  ATerm y_2 (ATerm t)
  {
    ATerm e_46 = NULL;
    e_46 = t;
    d_46 :
    if(!(match_string(e_46, "--help")))
      {
        if(!(match_string(e_46, "-h")))
          {
            if(!(match_string(e_46, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_p_17;
    {
      t = set_config_0(t);
      t = term_q_17;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
    {
      i_46 = ATgetFirst((ATermList) h_46);
      j_46 = (ATerm) ATgetNext((ATermList) h_46);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_46)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_46)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  s_46 :
  if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
    {
      z_46 = ATgetFirst((ATermList) y_46);
      a_47 = (ATerm) ATgetNext((ATermList) y_46);
      {
        ATerm e_47 = NULL,k_47 = NULL;
        ATerm f_47 = NULL;
        t = SSLgetAnnotations(not_null(y_46));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
        {
          t = not_null(z_46);
          {
            ATerm m_47 = NULL;
            t = h_61(t);
            {
              k_47 = t;
              {
                t = not_null(a_47);
                {
                  ATerm o_47 = NULL;
                  t = i_61(t);
                  {
                    m_47 = t;
                    {
                      ATerm p_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_47)), not_null(k_47)), not_null(e_47));
                      {
                        p_47 = t;
                        if(((o_47 != NULL) && (o_47 != p_47)))
                          _fail(p_47);
                        else
                          o_47 = p_47;
                      }
                      t = not_null(o_47);
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
ATerm Nil_0 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  y_47 :
  if(((ATgetType(z_47) == AT_LIST) && ATisEmpty(z_47)))
    {
      {
        ATerm b_48 = NULL,d_48 = NULL;
        ATerm u_17;
        u_17 = t;
        {
          ATerm c_48 = NULL;
          t = SSLgetAnnotations(not_null(z_47));
          {
            c_48 = t;
            if(((b_48 != NULL) && (b_48 != c_48)))
              _fail(c_48);
            else
              b_48 = c_48;
          }
        }
        t = u_17;
        {
          ATerm e_48 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_48));
          {
            e_48 = t;
            if(((d_48 != NULL) && (d_48 != e_48)))
              _fail(e_48);
            else
              d_48 = e_48;
          }
          t = not_null(d_48);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym__2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_8, not_null(l_48), not_null(m_48));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm v_17;
  v_17 = t;
  {
    ATerm b_3 (ATerm t)
    {
      t = term_w_17;
      t = x_89(t);
      return(t);
    }
    t = try_1(t, b_3);
  }
  t = v_17;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm u_48 = NULL;
      ATerm x_17;
      x_17 = t;
      {
        ATerm s_48 = NULL;
        ATerm t_48 = NULL;
        t_48 = t;
        if(((s_48 != NULL) && (s_48 != t_48)))
          _fail(t_48);
        else
          s_48 = t_48;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(s_48));
          t = set_config_0(t);
        }
      }
      t = x_17;
      {
        ATerm v_48 = NULL;
        v_48 = t;
        if(((u_48 != NULL) && (u_48 != v_48)))
          _fail(v_48);
        else
          u_48 = v_48;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_48));
      }
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              {
                t = x_89(t);
                t = Cons_2(t, _id, d_3);
              }
            }
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_3, d_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  ATerm j_18;
  j_18 = t;
  {
    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
    f_49 = t;
    b_49 :
    if(match_cons(f_49, sym__3))
      {
        g_49 = ATgetArgument(f_49, 0);
        h_49 = ATgetArgument(f_49, 1);
        i_49 = ATgetArgument(f_49, 2);
        {
          if(((c_49 != NULL) && (c_49 != g_49)))
            _fail(g_49);
          else
            c_49 = g_49;
          {
            if(((d_49 != NULL) && (d_49 != h_49)))
              _fail(h_49);
            else
              d_49 = h_49;
            {
              if(((e_49 != NULL) && (e_49 != i_49)))
                _fail(i_49);
              else
                e_49 = i_49;
              t = SSL_table_put(not_null(c_49), not_null(d_49), not_null(e_49));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm l_49 = NULL;
  ATerm k_18;
  k_18 = t;
  {
    t = term_n_18;
    t = table_put_0(t);
  }
  t = k_18;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_89(t);
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm q_18 = t;
            int s_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(s_18);
              }
            else
              {
                t = q_18;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, f_3);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19;
            a_19 = t;
            {
              ATerm d_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = d_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_19;
            {
              t = system_usage_0(t);
              {
                t = term_v_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            {
              ATerm k_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_19;
                  m_19 = t;
                  {
                    t = term_n_16;
                    t = get_config_0(t);
                  }
                  t = m_19;
                  {
                    t = system_about_0(t);
                    {
                      t = term_v_10;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(l_19);
                }
              else
                {
                  t = k_19;
                  {
                    ATerm h_3 (ATerm t)
                    {
                      ATerm i_3 (ATerm t)
                      {
                        ATerm m_49 = NULL;
                        m_49 = t;
                        if(((l_49 != NULL) && (l_49 != m_49)))
                          _fail(m_49);
                        else
                          l_49 = m_49;
                        return(t);
                      }
                      t = Undefined_1(t, i_3);
                      return(t);
                    }
                    t = option_defined_1(t, h_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_49)), term_n_19));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_m_7;
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
      t = try_1(t, g_3);
      {
        ATerm o_19;
        o_19 = t;
        {
          t = term_b_15;
          t = table_destroy_0(t);
        }
        t = o_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm z_74 (ATerm))
{
  t = parse_options_1(t, w_74);
  {
    t = store_options_0(t);
    {
      t = y_74(t);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_74);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_74(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm x_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_74(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = x_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_74);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_3, n_74, o_74, k_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      ATerm d_20;
      d_20 = t;
      {
        ATerm p_49 = NULL;
        ATerm q_49 = NULL;
        t = term_u_12;
        {
          t = get_config_0(t);
          {
            q_49 = t;
            if(((p_49 != NULL) && (p_49 != q_49)))
              _fail(q_49);
            else
              p_49 = q_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_7, (ATerm) ATinsert(ATempty, not_null(p_49)));
          t = printnl_0(t);
        }
      }
      t = d_20;
      return(t);
    }
    t = if_verbose2_1(t, m_3);
    return(t);
  }
  t = iowrap_4(t, f_74, g_74, h_74, l_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  t = iowrap_3(t, d_74, e_74, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    t = _2(t, _id, a_74);
    return(t);
  }
  t = iowrap_2(t, n_3, _fail);
  return(t);
}
ATerm stratego_ensugar_0 (ATerm t)
{
  t = iowrap_1(t, Stratego_Ensugar_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_ensugar_0(t);
  return(t);
}
