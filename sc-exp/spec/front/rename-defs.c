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
ATerm term_f_22;
ATerm term_a_21;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_r_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_g_8;
ATerm term_w_7;
ATerm term_s_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_p_8);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_f_7);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_f_7);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_c_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_f_7);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_f_7);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_f_7);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_81 (ATerm));
ATerm assert_1 (ATerm, ATerm h_109 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm j_109 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm p_0 (ATerm));
ATerm escape_1 (ATerm, ATerm k_97 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm p_66 (ATerm));
ATerm Cons_2 (ATerm, ATerm l_66 (ATerm), ATerm m_66 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_66 (ATerm));
ATerm _2 (ATerm, ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_87 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_103 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm m_102 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_105 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_101 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_84 (ATerm), ATerm u_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm h_92 (ATerm), ATerm i_92 (ATerm));
ATerm crush_2 (ATerm, ATerm f_90 (ATerm), ATerm g_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_103 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_106 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_108 (ATerm));
ATerm map_1 (ATerm, ATerm i_87 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_108 (ATerm));
ATerm Program_1 (ATerm, ATerm d_75 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_87 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_107 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_83 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_105 (ATerm), ATerm w_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_105 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  r_1 :
  if(((ATgetType(s_1) == AT_LIST) && ATisEmpty(s_1)))
    {
      {
        ATerm h_2 = NULL,j_2 = NULL;
        ATerm i_6;
        i_6 = t;
        {
          ATerm i_2 = NULL;
          t = SSLgetAnnotations(not_null(s_1));
          {
            i_2 = t;
            if(((h_2 != NULL) && (h_2 != i_2)))
              _fail(i_2);
            else
              h_2 = i_2;
          }
        }
        t = i_6;
        {
          ATerm n_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_2));
          {
            n_2 = t;
            if(((j_2 != NULL) && (j_2 != n_2)))
              _fail(n_2);
            else
              j_2 = n_2;
          }
          t = not_null(j_2);
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
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm r_3 = NULL;
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
    t = not_null(d_3);
    {
      ATerm f_0 (ATerm t)
      {
        t = term_j_6;
        return(t);
      }
      t = rewrite_1(t, f_0);
      {
        s_3 = t;
        x_2 :
        if(match_cons(s_3, sym_Defined_2))
          {
            t_3 = ATgetArgument(s_3, 0);
            u_3 = ATgetArgument(s_3, 1);
            y_2 :
            if(match_string(t_3, "c_0"))
              {
                if(((r_3 != NULL) && (r_3 != u_3)))
                  _fail(u_3);
                else
                  r_3 = u_3;
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
    t = not_null(r_3);
    return(t);
  }
  d_3 = t;
  z_2 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      a_3 :
      if(match_cons(f_3, sym__2))
        {
          b_3 = ATgetArgument(f_3, 0);
          c_3 = ATgetArgument(f_3, 1);
          {
            ATerm k_6 = t;
            int p_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_3 = NULL;
                ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
                t = not_null(d_3);
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = term_j_6;
                    return(t);
                  }
                  t = rewrite_1(t, h_0);
                  {
                    l_3 = t;
                    u_2 :
                    if(match_cons(l_3, sym_Defined_2))
                      {
                        m_3 = ATgetArgument(l_3, 0);
                        n_3 = ATgetArgument(l_3, 1);
                        v_2 :
                        if(match_string(m_3, "i_0"))
                          {
                            if(((k_3 != NULL) && (k_3 != n_3)))
                              _fail(n_3);
                            else
                              k_3 = n_3;
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
                t = not_null(k_3);
                ;
                LocalPopChoice(p_6);
              }
            else
              {
                t = k_6;
                t = w_3(t);
              }
          }
        }
      else
        {
          t = w_3(t);
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
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  m_4 = t;
  i_4 :
  if(match_cons(m_4, sym_CallT_3))
    {
      n_4 = ATgetArgument(m_4, 0);
      p_4 = ATgetArgument(m_4, 1);
      l_4 = ATgetArgument(m_4, 2);
      j_4 :
      if(match_cons(n_4, sym_SVar_1))
        {
          o_4 = ATgetArgument(n_4, 0);
          {
            ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
            ATerm w_4 = NULL;
            t = not_null(p_4);
            {
              ATerm x_4 = NULL;
              t = length_0(t);
              {
                w_4 = t;
                {
                  if(((t_4 != NULL) && (t_4 != w_4)))
                    _fail(w_4);
                  else
                    t_4 = w_4;
                  {
                    t = not_null(l_4);
                    {
                      t = length_0(t);
                      {
                        x_4 = t;
                        {
                          if(((u_4 != NULL) && (u_4 != x_4)))
                            _fail(x_4);
                          else
                            u_4 = x_4;
                          {
                            ATerm q_6 = t;
                            int r_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_4 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(u_4)));
                                {
                                  t = RenameVar_0(t);
                                  {
                                    y_4 = t;
                                    if(((v_4 != NULL) && (v_4 != y_4)))
                                      _fail(y_4);
                                    else
                                      v_4 = y_4;
                                  }
                                }
                                ;
                                LocalPopChoice(r_6);
                              }
                            else
                              {
                                t = q_6;
                                {
                                  ATerm z_4 = NULL;
                                  t = not_null(o_4);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      z_4 = t;
                                      if(((v_4 != NULL) && (v_4 != z_4)))
                                        _fail(z_4);
                                      else
                                        v_4 = z_4;
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_4)), not_null(p_4), not_null(l_4));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(m_4, sym_Call_2))
        {
          n_4 = ATgetArgument(m_4, 0);
          p_4 = ATgetArgument(m_4, 1);
          k_4 :
          if(match_cons(n_4, sym_SVar_1))
            {
              o_4 = ATgetArgument(n_4, 0);
              {
                ATerm c_5 = NULL,d_5 = NULL;
                ATerm e_5 = NULL;
                t = not_null(p_4);
                {
                  t = length_0(t);
                  {
                    e_5 = t;
                    {
                      if(((c_5 != NULL) && (c_5 != e_5)))
                        _fail(e_5);
                      else
                        c_5 = e_5;
                      {
                        ATerm w_6 = t;
                        int x_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_5 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), not_null(c_5));
                            {
                              t = RenameVar_0(t);
                              {
                                f_5 = t;
                                if(((d_5 != NULL) && (d_5 != f_5)))
                                  _fail(f_5);
                                else
                                  d_5 = f_5;
                              }
                            }
                            ;
                            LocalPopChoice(x_6);
                          }
                        else
                          {
                            t = w_6;
                            {
                              ATerm g_5 = NULL;
                              t = not_null(o_4);
                              {
                                t = HoArg_0(t);
                                {
                                  g_5 = t;
                                  if(((d_5 != NULL) && (d_5 != g_5)))
                                    _fail(g_5);
                                  else
                                    d_5 = g_5;
                                }
                              }
                            }
                          }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_5)), not_null(p_4));
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
ATerm topdown_1 (ATerm t, ATerm h_81 (ATerm))
{
  t = h_81(t);
  {
    ATerm o_0 (ATerm t)
    {
      t = topdown_1(t, h_81);
      return(t);
    }
    t = _all(t, o_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_109 (ATerm))
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      {
        ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
        ATerm y_6;
        y_6 = t;
        {
          ATerm d_6 = NULL;
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          t = h_109(t);
          {
            d_6 = t;
            {
              if(((a_6 != NULL) && (a_6 != d_6)))
                _fail(d_6);
              else
                a_6 = d_6;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_6), not_null(w_5), not_null(x_5));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_c_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_6 = t;
                      t_5 :
                      if(((ATgetType(e_6) == AT_LIST) && !(ATisEmpty(e_6))))
                        {
                          f_6 = ATgetFirst((ATermList) e_6);
                          g_6 = (ATerm) ATgetNext((ATermList) e_6);
                          {
                            if(((b_6 != NULL) && (b_6 != f_6)))
                              _fail(f_6);
                            else
                              b_6 = f_6;
                            {
                              if(((c_6 != NULL) && (c_6 != g_6)))
                                _fail(g_6);
                              else
                                c_6 = g_6;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_6), term_c_7, (ATerm) ATinsert(CheckATermList(not_null(c_6)), (ATerm) ATinsert(CheckATermList(not_null(b_6)), not_null(w_5))));
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
        t = y_6;
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
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  m_6 = t;
  l_6 :
  if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
    {
      n_6 = ATgetFirst((ATermList) m_6);
      o_6 = (ATerm) ATgetNext((ATermList) m_6);
      t = not_null(n_6);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      v_6 = ATgetArgument(t_6, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), not_null(v_6));
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
ATerm rewrite_1 (ATerm t, ATerm j_109 (ATerm))
{
  ATerm b_7 = NULL;
  ATerm d_7 = NULL;
  b_7 = t;
  {
    ATerm e_7 = NULL;
    t = term_f_7;
    {
      t = j_109(t);
      {
        e_7 = t;
        if(((d_7 != NULL) && (d_7 != e_7)))
          _fail(e_7);
        else
          d_7 = e_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(b_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = not_null(v_7);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_i_7;
            return(t);
          }
          t = rewrite_1(t, q_0);
          {
            y_7 = t;
            m_7 :
            if(match_cons(y_7, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_j_7;
        ;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_8 = NULL;
              ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
              t = not_null(v_7);
              {
                ATerm r_0 (ATerm t)
                {
                  t = term_i_7;
                  return(t);
                }
                t = rewrite_1(t, r_0);
                {
                  c_8 = t;
                  o_7 :
                  if(match_cons(c_8, sym_Defined_2))
                    {
                      d_8 = ATgetArgument(c_8, 0);
                      e_8 = ATgetArgument(c_8, 1);
                      p_7 :
                      if(match_string(d_8, "l_0"))
                        {
                          if(((b_8 != NULL) && (b_8 != e_8)))
                            _fail(e_8);
                          else
                            b_8 = e_8;
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
              t = not_null(b_8);
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm n_7 = t;
                int q_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_8 = NULL;
                    t = not_null(v_7);
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = term_i_7;
                        return(t);
                      }
                      t = rewrite_1(t, s_0);
                      {
                        h_8 = t;
                        r_7 :
                        if(match_cons(h_8, sym_Undefined_0))
                          {
                            _fail(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                    t = term_j_7;
                    ;
                    LocalPopChoice(q_7);
                  }
                else
                  {
                    t = n_7;
                    {
                      ATerm k_8 = NULL;
                      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
                      t = not_null(v_7);
                      {
                        ATerm t_0 (ATerm t)
                        {
                          t = term_i_7;
                          return(t);
                        }
                        t = rewrite_1(t, t_0);
                        {
                          l_8 = t;
                          t_7 :
                          if(match_cons(l_8, sym_Defined_2))
                            {
                              m_8 = ATgetArgument(l_8, 0);
                              n_8 = ATgetArgument(l_8, 1);
                              u_7 :
                              if(match_string(m_8, "g_0"))
                                {
                                  if(((k_8 != NULL) && (k_8 != n_8)))
                                    _fail(n_8);
                                  else
                                    k_8 = n_8;
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
                      t = not_null(k_8);
                    }
                  }
              }
            }
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
  ATerm x_8 = NULL;
  x_8 = t;
  t = SSL_int_to_string(not_null(x_8));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  g_9 :
  if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
    {
      j_9 = ATgetFirst((ATermList) i_9);
      k_9 = (ATerm) ATgetNext((ATermList) i_9);
      h_9 :
      if(match_int(j_9, 95))
        {
          ATerm m_9 = NULL;
          ATerm n_9 = NULL;
          t = not_null(k_9);
          {
            t = p_0(t);
            {
              n_9 = t;
              if(((m_9 != NULL) && (m_9 != n_9)))
                _fail(n_9);
              else
                m_9 = n_9;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_9)), term_s_7), term_s_7);
        }
      else
        {
          if(match_int(j_9, 45))
            {
              ATerm p_9 = NULL;
              ATerm q_9 = NULL;
              t = not_null(k_9);
              {
                t = p_0(t);
                {
                  q_9 = t;
                  if(((p_9 != NULL) && (p_9 != q_9)))
                    _fail(q_9);
                  else
                    p_9 = q_9;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_9)), term_s_7);
            }
          else
            {
              if(match_int(j_9, 39))
                {
                  ATerm s_9 = NULL;
                  ATerm t_9 = NULL;
                  t = not_null(k_9);
                  {
                    t = p_0(t);
                    {
                      t_9 = t;
                      if(((s_9 != NULL) && (s_9 != t_9)))
                        _fail(t_9);
                      else
                        s_9 = t_9;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_9)), term_s_7), term_w_7), term_s_7);
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
ATerm escape_1 (ATerm t, ATerm k_97 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm a_10 (ATerm t)
    {
      ATerm x_7 = t;
      int z_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_97(t, a_10);
          ;
          LocalPopChoice(z_7);
        }
      else
        {
          t = x_7;
          {
            ATerm a_8 = t;
            int f_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, a_10);
                ;
                LocalPopChoice(f_8);
              }
            else
              {
                t = a_8;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = a_10(t);
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
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_Mod_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_10)), term_g_8), not_null(e_10));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm))
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_92(t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
        n_10 = t;
        m_10 :
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            o_10 = ATgetFirst((ATermList) n_10);
            p_10 = (ATerm) ATgetNext((ATermList) n_10);
            {
              ATerm s_10 = NULL,u_10 = NULL;
              ATerm o_8;
              o_8 = t;
              {
                ATerm t_10 = NULL;
                t = not_null(o_10);
                {
                  t = l_92(t);
                  {
                    t_10 = t;
                    if(((s_10 != NULL) && (s_10 != t_10)))
                      _fail(t_10);
                    else
                      s_10 = t_10;
                  }
                }
              }
              t = o_8;
              {
                ATerm v_10 = NULL;
                t = not_null(p_10);
                {
                  t = foldr_3(t, j_92, k_92, l_92);
                  {
                    v_10 = t;
                    if(((u_10 != NULL) && (u_10 != v_10)))
                      _fail(v_10);
                    else
                      u_10 = v_10;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(u_10));
                  t = k_92(t);
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
  ATerm u_0 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    t = term_q_8;
    return(t);
  }
  t = foldr_3(t, u_0, add_0, v_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  n_11 = t;
  l_11 :
  if(match_cons(n_11, sym_SDefT_4))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      q_11 = ATgetArgument(n_11, 2);
      m_11 = ATgetArgument(n_11, 3);
      {
        ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
        ATerm y_11 = NULL;
        t = not_null(p_11);
        {
          ATerm z_11 = NULL;
          t = length_0(t);
          {
            y_11 = t;
            {
              if(((v_11 != NULL) && (v_11 != y_11)))
                _fail(y_11);
              else
                v_11 = y_11;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL,c_12 = NULL,e_12 = NULL,g_12 = NULL;
                  t = length_0(t);
                  {
                    z_11 = t;
                    {
                      if(((w_11 != NULL) && (w_11 != z_11)))
                        _fail(z_11);
                      else
                        w_11 = z_11;
                      {
                        ATerm r_8;
                        r_8 = t;
                        {
                          ATerm b_12 = NULL;
                          t = not_null(o_11);
                          {
                            t = try_1(t, NameMod_0);
                            {
                              t = cify_0(t);
                              {
                                b_12 = t;
                                if(((a_12 != NULL) && (a_12 != b_12)))
                                  _fail(b_12);
                                else
                                  a_12 = b_12;
                              }
                            }
                          }
                        }
                        t = r_8;
                        {
                          ATerm s_8;
                          s_8 = t;
                          {
                            ATerm d_12 = NULL;
                            t = not_null(v_11);
                            {
                              t = int_to_string_0(t);
                              {
                                d_12 = t;
                                if(((c_12 != NULL) && (c_12 != d_12)))
                                  _fail(d_12);
                                else
                                  c_12 = d_12;
                              }
                            }
                          }
                          t = s_8;
                          {
                            ATerm f_12 = NULL;
                            t = not_null(w_11);
                            {
                              t = int_to_string_0(t);
                              {
                                f_12 = t;
                                if(((e_12 != NULL) && (e_12 != f_12)))
                                  _fail(f_12);
                                else
                                  e_12 = f_12;
                              }
                            }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_12)), term_t_8), not_null(c_12)), term_t_8), not_null(a_12));
                              {
                                t = concat_strings_0(t);
                                {
                                  g_12 = t;
                                  {
                                    if(((x_11 != NULL) && (x_11 != g_12)))
                                      _fail(g_12);
                                    else
                                      x_11 = g_12;
                                    {
                                      ATerm u_8;
                                      u_8 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_11), (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(w_11))), (ATerm) ATmakeAppl(sym_Defined_2, term_v_8, not_null(x_11)));
                                        {
                                          ATerm w_0 (ATerm t)
                                          {
                                            t = term_j_6;
                                            return(t);
                                          }
                                          t = assert_1(t, w_0);
                                        }
                                      }
                                      t = u_8;
                                      {
                                        ATerm w_8 = t;
                                        int y_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = not_null(o_11);
                                            {
                                              t = HoArg_0(t);
                                              {
                                                ATerm z_8;
                                                z_8 = t;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_j_7);
                                                  {
                                                    ATerm x_0 (ATerm t)
                                                    {
                                                      t = term_i_7;
                                                      return(t);
                                                    }
                                                    t = assert_1(t, x_0);
                                                  }
                                                }
                                                t = z_8;
                                              }
                                            }
                                            ;
                                            LocalPopChoice(y_8);
                                          }
                                        else
                                          {
                                            t = w_8;
                                            {
                                              ATerm a_9;
                                              a_9 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), (ATerm) ATmakeAppl(sym_Defined_2, term_b_9, not_null(x_11)));
                                                {
                                                  ATerm y_0 (ATerm t)
                                                  {
                                                    t = term_i_7;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, y_0);
                                                }
                                              }
                                              t = a_9;
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
        t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_11), not_null(p_11), not_null(q_11), not_null(m_11));
      }
    }
  else
    {
      if(match_cons(n_11, sym_SDef_3))
        {
          o_11 = ATgetArgument(n_11, 0);
          p_11 = ATgetArgument(n_11, 1);
          q_11 = ATgetArgument(n_11, 2);
          {
            ATerm k_12 = NULL,l_12 = NULL;
            ATerm m_12 = NULL;
            t = not_null(p_11);
            {
              ATerm n_12 = NULL,p_12 = NULL,r_12 = NULL;
              t = length_0(t);
              {
                m_12 = t;
                {
                  if(((k_12 != NULL) && (k_12 != m_12)))
                    _fail(m_12);
                  else
                    k_12 = m_12;
                  {
                    ATerm c_9;
                    c_9 = t;
                    {
                      ATerm o_12 = NULL;
                      t = not_null(o_11);
                      {
                        t = try_1(t, NameMod_0);
                        {
                          t = cify_0(t);
                          {
                            o_12 = t;
                            if(((n_12 != NULL) && (n_12 != o_12)))
                              _fail(o_12);
                            else
                              n_12 = o_12;
                          }
                        }
                      }
                    }
                    t = c_9;
                    {
                      ATerm q_12 = NULL;
                      t = not_null(k_12);
                      {
                        t = int_to_string_0(t);
                        {
                          q_12 = t;
                          if(((p_12 != NULL) && (p_12 != q_12)))
                            _fail(q_12);
                          else
                            p_12 = q_12;
                        }
                      }
                      {
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_12)), term_t_8), not_null(n_12));
                        {
                          t = concat_strings_0(t);
                          {
                            r_12 = t;
                            {
                              if(((l_12 != NULL) && (l_12 != r_12)))
                                _fail(r_12);
                              else
                                l_12 = r_12;
                              {
                                ATerm d_9;
                                d_9 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_11), not_null(k_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_9, not_null(l_12)));
                                  {
                                    ATerm z_0 (ATerm t)
                                    {
                                      t = term_j_6;
                                      return(t);
                                    }
                                    t = assert_1(t, z_0);
                                  }
                                }
                                t = d_9;
                                {
                                  ATerm f_9 = t;
                                  int l_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = not_null(o_11);
                                      {
                                        t = HoArg_0(t);
                                        {
                                          ATerm o_9;
                                          o_9 = t;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_j_7);
                                            {
                                              ATerm a_1 (ATerm t)
                                              {
                                                t = term_i_7;
                                                return(t);
                                              }
                                              t = assert_1(t, a_1);
                                            }
                                          }
                                          t = o_9;
                                        }
                                      }
                                      ;
                                      LocalPopChoice(l_9);
                                    }
                                  else
                                    {
                                      t = f_9;
                                      {
                                        ATerm r_9;
                                        r_9 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), (ATerm) ATmakeAppl(sym_Defined_2, term_u_9, not_null(l_12)));
                                          {
                                            ATerm b_1 (ATerm t)
                                            {
                                              t = term_i_7;
                                              return(t);
                                            }
                                            t = assert_1(t, b_1);
                                          }
                                        }
                                        t = r_9;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_12), not_null(p_11), not_null(q_11));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm d_1 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, d_1);
      return(t);
    }
    t = map_1(t, c_1);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_Strategies_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm n_13 = NULL,p_13 = NULL;
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(j_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
        {
          t = not_null(k_13);
          {
            ATerm r_13 = NULL;
            t = p_66(t);
            {
              p_13 = t;
              {
                ATerm s_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_13)), not_null(n_13));
                {
                  s_13 = t;
                  if(((r_13 != NULL) && (r_13 != s_13)))
                    _fail(s_13);
                  else
                    r_13 = s_13;
                }
                t = not_null(r_13);
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
ATerm Cons_2 (ATerm t, ATerm l_66 (ATerm), ATerm m_66 (ATerm))
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
    {
      e_14 = ATgetFirst((ATermList) d_14);
      f_14 = (ATerm) ATgetNext((ATermList) d_14);
      {
        ATerm j_14 = NULL,l_14 = NULL;
        ATerm k_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm n_14 = NULL;
            t = l_66(t);
            {
              l_14 = t;
              {
                t = not_null(f_14);
                {
                  ATerm p_14 = NULL;
                  t = m_66(t);
                  {
                    n_14 = t;
                    {
                      ATerm q_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_14)), not_null(l_14)), not_null(j_14));
                      {
                        q_14 = t;
                        if(((p_14 != NULL) && (p_14 != q_14)))
                          _fail(q_14);
                        else
                          p_14 = q_14;
                      }
                      t = not_null(p_14);
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
ATerm Specification_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Specification_1))
    {
      c_15 = ATgetArgument(b_15, 0);
      {
        ATerm f_15 = NULL,h_15 = NULL;
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(b_15));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        {
          t = not_null(c_15);
          {
            ATerm j_15 = NULL;
            t = u_66(t);
            {
              h_15 = t;
              {
                ATerm k_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_15)), not_null(f_15));
                {
                  k_15 = t;
                  if(((j_15 != NULL) && (j_15 != k_15)))
                    _fail(k_15);
                  else
                    j_15 = k_15;
                }
                t = not_null(j_15);
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
ATerm _2 (ATerm t, ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym__2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      {
        ATerm b_16 = NULL,d_16 = NULL;
        ATerm c_16 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
        {
          t = not_null(w_15);
          {
            ATerm f_16 = NULL;
            t = c_65(t);
            {
              d_16 = t;
              {
                t = not_null(x_15);
                {
                  ATerm h_16 = NULL;
                  t = d_65(t);
                  {
                    f_16 = t;
                    {
                      ATerm i_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_16), not_null(f_16)), not_null(b_16));
                      {
                        i_16 = t;
                        if(((h_16 != NULL) && (h_16 != i_16)))
                          _fail(i_16);
                        else
                          h_16 = i_16;
                      }
                      t = not_null(h_16);
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
  ATerm v_9;
  v_9 = t;
  {
    ATerm p_16 = NULL;
    ATerm q_16 = NULL;
    t = term_f_7;
    {
      t = whoami_0(t);
      {
        q_16 = t;
        if(((p_16 != NULL) && (p_16 != q_16)))
          _fail(q_16);
        else
          p_16 = q_16;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), not_null(p_16)), term_x_9));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      {
        ATerm z_9;
        z_9 = t;
        t = SSL_printnl(not_null(v_16), not_null(w_16));
        t = z_9;
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
  ATerm b_17 = NULL;
  b_17 = t;
  t = SSL_implode_string(not_null(b_17));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = b_10;
      {
        ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
        g_17 = t;
        f_17 :
        if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
          {
            h_17 = ATgetFirst((ATermList) g_17);
            i_17 = (ATerm) ATgetNext((ATermList) g_17);
            {
              t = not_null(h_17);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(i_17);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm s_17 = NULL;
  ATerm u_17 = NULL;
  s_17 = t;
  {
    ATerm v_17 = NULL;
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    t = not_null(s_17);
    {
      v_17 = t;
      {
        t = SSL_explode_term(not_null(v_17));
        {
          x_17 = t;
          q_17 :
          if(match_cons(x_17, sym__2))
            {
              y_17 = ATgetArgument(x_17, 0);
              z_17 = ATgetArgument(x_17, 1);
              r_17 :
              if(match_string(y_17, ""))
                {
                  if(((u_17 != NULL) && (u_17 != z_17)))
                    _fail(z_17);
                  else
                    u_17 = z_17;
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
      t = not_null(u_17);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm d_18 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_18);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          t = Nil_0(t);
          t = y_87(t);
        }
      }
    return(t);
  }
  t = d_18(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym__2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      {
        t = not_null(h_18);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(i_18);
            return(t);
          }
          t = at_end_1(t, f_1);
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
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_explode_string(not_null(n_18));
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
  ATerm l_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = l_10;
      {
        ATerm r_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_1);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = r_10;
            {
              ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
              w_18 = t;
              v_18 :
              if(match_cons(w_18, sym_Path_1))
                {
                  x_18 = ATgetArgument(w_18, 0);
                  t = not_null(x_18);
                }
              else
                {
                  if(match_cons(w_18, sym_Var_1))
                    {
                      x_18 = ATgetArgument(w_18, 0);
                      {
                        t = not_null(x_18);
                        {
                          ATerm x_10 = t;
                          int y_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_10);
                            }
                          else
                            {
                              t = x_10;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_z_10;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_18, sym_Prefix_2))
                        {
                          x_18 = ATgetArgument(w_18, 0);
                          y_18 = ATgetArgument(w_18, 1);
                          {
                            ATerm d_19 = NULL,f_19 = NULL;
                            ATerm a_11;
                            a_11 = t;
                            {
                              ATerm e_19 = NULL;
                              t = not_null(x_18);
                              {
                                t = eval_config_0(t);
                                {
                                  e_19 = t;
                                  if(((d_19 != NULL) && (d_19 != e_19)))
                                    _fail(e_19);
                                  else
                                    d_19 = e_19;
                                }
                              }
                            }
                            t = a_11;
                            {
                              ATerm g_19 = NULL;
                              t = not_null(y_18);
                              {
                                t = eval_config_0(t);
                                {
                                  g_19 = t;
                                  if(((f_19 != NULL) && (f_19 != g_19)))
                                    _fail(g_19);
                                  else
                                    f_19 = g_19;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19));
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
  ATerm o_19 = NULL;
  o_19 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_b_11, not_null(o_19));
    {
      t = table_get_0(t);
      {
        ATerm i_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_11;
            c_11 = t;
            {
              ATerm q_19 = NULL;
              ATerm r_19 = NULL;
              r_19 = t;
              if(((q_19 != NULL) && (q_19 != r_19)))
                _fail(r_19);
              else
                q_19 = r_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_b_11, not_null(o_19), not_null(q_19));
                t = table_put_0(t);
              }
            }
            t = c_11;
          }
          return(t);
        }
        t = try_1(t, i_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm d_11;
    d_11 = t;
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      t = term_e_11;
      {
        t = get_config_0(t);
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_f_11);
        t = geq_0(t);
      }
    }
    t = d_11;
    t = q_103(t);
    return(t);
  }
  t = try_1(t, j_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  a_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      b_20 :
      if(match_cons(e_20, sym_Stream_1))
        {
          f_20 = ATgetArgument(e_20, 0);
          {
            ATerm i_20 = NULL;
            t = SSL_fputc(not_null(d_20), not_null(f_20));
            {
              ATerm j_20 = NULL;
              j_20 = t;
              if(((i_20 != NULL) && (i_20 != j_20)))
                _fail(j_20);
              else
                i_20 = j_20;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_20));
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
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  q_20 = t;
  o_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      t_20 = ATgetArgument(q_20, 1);
      p_20 :
      if(match_cons(r_20, sym_Stream_1))
        {
          s_20 = ATgetArgument(r_20, 0);
          {
            ATerm w_20 = NULL;
            t = SSL_write_term_to_stream_text(not_null(s_20), not_null(t_20));
            {
              ATerm x_20 = NULL;
              x_20 = t;
              if(((w_20 != NULL) && (w_20 != x_20)))
                _fail(x_20);
              else
                w_20 = x_20;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_20));
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
  ATerm k_1 (ATerm t)
  {
    ATerm b_21 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm c_21 = NULL;
      c_21 = t;
      if(((b_21 != NULL) && (b_21 != c_21)))
        _fail(c_21);
      else
        b_21 = c_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_11, not_null(b_21));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, k_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  i_21 = t;
  g_21 :
  if(match_cons(i_21, sym__2))
    {
      j_21 = ATgetArgument(i_21, 0);
      l_21 = ATgetArgument(i_21, 1);
      h_21 :
      if(match_cons(j_21, sym_Stream_1))
        {
          k_21 = ATgetArgument(j_21, 0);
          {
            ATerm o_21 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(k_21), not_null(l_21));
            {
              ATerm p_21 = NULL;
              p_21 = t;
              if(((o_21 != NULL) && (o_21 != p_21)))
                _fail(p_21);
              else
                o_21 = p_21;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_21));
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
ATerm WriteToFile_1 (ATerm t, ATerm m_102 (ATerm))
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm b_22 = NULL,d_22 = NULL;
        t = not_null(x_21);
        {
          ATerm c_22 = NULL;
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), term_h_11);
            {
              t = open_stream_0(t);
              {
                ATerm e_22 = NULL;
                e_22 = t;
                if(((d_22 != NULL) && (d_22 != e_22)))
                  _fail(e_22);
                else
                  d_22 = e_22;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(y_21));
                  {
                    t = m_102(t);
                    {
                      t = fclose_0(t);
                      t = not_null(y_21);
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
  ATerm m_22 = NULL;
  ATerm i_11;
  i_11 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_22 = NULL,o_22 = NULL;
            n_22 = t;
            j_22 :
            if(match_cons(n_22, sym_Output_1))
              {
                o_22 = ATgetArgument(n_22, 0);
                if(((m_22 != NULL) && (m_22 != o_22)))
                  _fail(o_22);
                else
                  m_22 = o_22;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_1);
          ;
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm p_22 = NULL;
            t = term_r_11;
            {
              p_22 = t;
              if(((m_22 != NULL) && (m_22 != p_22)))
                _fail(p_22);
              else
                m_22 = p_22;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = i_11;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(m_22);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm q_22 = NULL;
              q_22 = t;
              l_22 :
              if(!(match_cons(q_22, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_105 (ATerm))
{
  ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm u_11;
  u_11 = t;
  t = dtime_0(t);
  t = u_11;
  {
    t = o_105(t);
    {
      ATerm h_12;
      h_12 = t;
      {
        ATerm x_22 = NULL;
        t = dtime_0(t);
        {
          x_22 = t;
          if(((w_22 != NULL) && (w_22 != x_22)))
            _fail(x_22);
          else
            w_22 = x_22;
        }
      }
      t = h_12;
      {
        y_22 = t;
        v_22 :
        if(match_cons(y_22, sym__2))
          {
            z_22 = ATgetArgument(y_22, 0);
            a_23 = ATgetArgument(y_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_22)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_22))), not_null(a_23));
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
  ATerm i_23 = NULL,j_23 = NULL;
  ATerm p_23 (ATerm t)
  {
    t = SSL_fclose(not_null(j_23));
    return(t);
  }
  j_23 = t;
  h_23 :
  if(match_cons(j_23, sym_Stream_1))
    {
      i_23 = ATgetArgument(j_23, 0);
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(i_23));
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = p_23(t);
          }
      }
    }
  else
    {
      t = p_23(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  r_23 :
  if(match_cons(s_23, sym_Stream_1))
    {
      t_23 = ATgetArgument(s_23, 0);
      t = SSL_read_term_from_stream(not_null(t_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_101 (ATerm))
{
  ATerm s_12;
  s_12 = t;
  {
    ATerm y_23 = NULL,a_24 = NULL;
    ATerm t_12;
    t_12 = t;
    {
      ATerm z_23 = NULL;
      t = y_101(t);
      {
        z_23 = t;
        if(((y_23 != NULL) && (y_23 != z_23)))
          _fail(z_23);
        else
          y_23 = z_23;
      }
    }
    t = t_12;
    {
      ATerm b_24 = NULL;
      b_24 = t;
      if(((a_24 != NULL) && (a_24 != b_24)))
        _fail(b_24);
      else
        a_24 = b_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), not_null(y_23)));
        t = printnl_0(t);
      }
    }
  }
  t = s_12;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        ATerm m_24 = NULL;
        t = SSL_fopen(not_null(i_24), not_null(j_24));
        {
          ATerm n_24 = NULL;
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_24));
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
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_is_string(not_null(r_24));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm v_24 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_24 = NULL;
    w_24 = t;
    if(((v_24 != NULL) && (v_24 != w_24)))
      _fail(w_24);
    else
      v_24 = w_24;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_24));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm a_25 = NULL;
    a_25 = t;
    if(((z_24 != NULL) && (z_24 != a_25)))
      _fail(a_25);
    else
      z_24 = a_25;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_24));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm e_25 = NULL;
    e_25 = t;
    if(((d_25 != NULL) && (d_25 != e_25)))
      _fail(e_25);
    else
      d_25 = e_25;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_25));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(k_25, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(k_25, sym_stdin_0))
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
  ATerm u_25 = NULL;
  ATerm w_25 = NULL,x_25 = NULL;
  u_25 = t;
  {
    ATerm y_25 = NULL;
    ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
    t = not_null(u_25);
    {
      y_25 = t;
      {
        t = SSL_explode_term(not_null(y_25));
        {
          a_26 = t;
          r_25 :
          if(match_cons(a_26, sym__2))
            {
              b_26 = ATgetArgument(a_26, 0);
              c_26 = ATgetArgument(a_26, 1);
              s_25 :
              if(match_string(b_26, ""))
                {
                  t_25 :
                  if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
                    {
                      d_26 = ATgetFirst((ATermList) c_26);
                      e_26 = (ATerm) ATgetNext((ATermList) c_26);
                      {
                        if(((x_25 != NULL) && (x_25 != d_26)))
                          _fail(d_26);
                        else
                          x_25 = d_26;
                        if(((w_25 != NULL) && (w_25 != e_26)))
                          _fail(e_26);
                        else
                          w_25 = e_26;
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
    t = not_null(x_25);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym__2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm p_26 = NULL,q_26 = NULL;
                    p_26 = t;
                    k_26 :
                    if(match_cons(p_26, sym_Path_1))
                      {
                        q_26 = ATgetArgument(p_26, 0);
                        t = not_null(q_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, t_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
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
  ATerm y_26 = NULL;
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_26 = NULL;
      ATerm x_26 = NULL;
      x_26 = t;
      if(((w_26 != NULL) && (w_26 != x_26)))
        _fail(x_26);
      else
        w_26 = x_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), term_a_13);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm u_1 (ATerm t)
        {
          t = term_b_13;
          return(t);
        }
        t = debug_1(t, u_1);
        _fail(t);
      }
    }
  {
    ATerm c_13;
    c_13 = t;
    {
      ATerm z_26 = NULL;
      t = read_from_stream_0(t);
      {
        z_26 = t;
        if(((y_26 != NULL) && (y_26 != z_26)))
          _fail(z_26);
        else
          y_26 = z_26;
      }
    }
    t = c_13;
    {
      t = fclose_0(t);
      t = not_null(y_26);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_84 (ATerm), ATerm u_84 (ATerm))
{
  ATerm e_27 = NULL,g_27 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm f_27 = NULL;
    t = t_84(t);
    {
      f_27 = t;
      if(((e_27 != NULL) && (e_27 != f_27)))
        _fail(f_27);
      else
        e_27 = f_27;
    }
  }
  t = d_13;
  {
    ATerm h_27 = NULL;
    t = u_84(t);
    {
      h_27 = t;
      if(((g_27 != NULL) && (g_27 != h_27)))
        _fail(h_27);
      else
        g_27 = h_27;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), not_null(g_27));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_27 = NULL;
  ATerm e_13;
  e_13 = t;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm o_27 = NULL,p_27 = NULL;
          o_27 = t;
          l_27 :
          if(match_cons(o_27, sym_Input_1))
            {
              p_27 = ATgetArgument(o_27, 0);
              if(((n_27 != NULL) && (n_27 != p_27)))
                _fail(p_27);
              else
                n_27 = p_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_1);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm q_27 = NULL;
          t = term_h_13;
          {
            q_27 = t;
            if(((n_27 != NULL) && (n_27 != q_27)))
              _fail(q_27);
            else
              n_27 = q_27;
          }
        }
      }
  }
  t = e_13;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(n_27);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm m_29 = NULL;
    m_29 = t;
    k_29 :
    if(!(match_string(m_29, "-k")))
      {
        if(!(match_string(m_29, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm l_13;
    l_13 = t;
    {
      ATerm n_29 = NULL;
      ATerm o_29 = NULL;
      t = string_to_int_0(t);
      {
        o_29 = t;
        if(((n_29 != NULL) && (n_29 != o_29)))
          _fail(o_29);
        else
          n_29 = o_29;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_13, not_null(n_29));
        t = set_config_0(t);
      }
    }
    t = l_13;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  t = SSL_string_to_int(not_null(r_29));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm z_29 = NULL;
        z_29 = t;
        u_29 :
        if(!(match_string(z_29, "-S")))
          {
            if(!(match_string(z_29, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_v_13;
        t = set_config_0(t);
        t = term_w_13;
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_x_13;
        return(t);
      }
      t = Option_3(t, a_2, b_2, c_2);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm a_30 = NULL;
              a_30 = t;
              v_29 :
              if(!(match_string(a_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm d_30 = NULL;
              ATerm a_14;
              a_14 = t;
              {
                ATerm b_30 = NULL;
                ATerm c_30 = NULL;
                t = string_to_int_0(t);
                {
                  c_30 = t;
                  if(((b_30 != NULL) && (b_30 != c_30)))
                    _fail(c_30);
                  else
                    b_30 = c_30;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(b_30));
                  t = set_config_0(t);
                }
              }
              t = a_14;
              {
                ATerm e_30 = NULL;
                e_30 = t;
                if(((d_30 != NULL) && (d_30 != e_30)))
                  _fail(e_30);
                else
                  d_30 = e_30;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_30));
              }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_b_14;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm g_2 (ATerm t)
              {
                ATerm f_30 = NULL;
                f_30 = t;
                y_29 :
                if(!(match_string(f_30, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm k_2 (ATerm t)
              {
                t = term_h_14;
                t = set_config_0(t);
                t = term_i_14;
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_m_14;
                return(t);
              }
              t = Option_3(t, g_2, k_2, l_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = o_14;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm l_30 = NULL;
    l_30 = t;
    i_30 :
    if(!(match_string(l_30, "-o")))
      {
        if(!(match_string(l_30, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm o_30 = NULL;
    ATerm s_14;
    s_14 = t;
    {
      ATerm m_30 = NULL;
      ATerm n_30 = NULL;
      n_30 = t;
      if(((m_30 != NULL) && (m_30 != n_30)))
        _fail(n_30);
      else
        m_30 = n_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(m_30));
        t = set_config_0(t);
      }
    }
    t = s_14;
    {
      ATerm p_30 = NULL;
      p_30 = t;
      if(((o_30 != NULL) && (o_30 != p_30)))
        _fail(p_30);
      else
        o_30 = p_30;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_30));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = ArgOption_3(t, m_2, o_2, p_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm t_30 = NULL;
          t_30 = t;
          s_30 :
          if(!(match_string(t_30, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_y_14;
          t = set_config_0(t);
          t = term_z_14;
          return(t);
        }
        ATerm s_2 (ATerm t)
        {
          t = term_d_15;
          return(t);
        }
        t = Option_3(t, q_2, r_2, s_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  z_30 = t;
  x_30 :
  if(match_string(z_30, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_30) == AT_LIST) && !(ATisEmpty(z_30))))
        {
          a_31 = ATgetFirst((ATermList) z_30);
          b_31 = (ATerm) ATgetNext((ATermList) z_30);
          y_30 :
          if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
            {
              c_31 = ATgetFirst((ATermList) b_31);
              d_31 = (ATerm) ATgetNext((ATermList) b_31);
              {
                ATerm h_31 = NULL;
                ATerm e_15;
                e_15 = t;
                {
                  t = not_null(a_31);
                  t = k_0(t);
                }
                t = e_15;
                {
                  ATerm i_31 = NULL;
                  t = not_null(c_31);
                  {
                    t = m_0(t);
                    {
                      i_31 = t;
                      if(((h_31 != NULL) && (h_31 != i_31)))
                        _fail(i_31);
                      else
                        h_31 = i_31;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_31)), not_null(h_31));
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
  ATerm t_2 (ATerm t)
  {
    ATerm p_31 = NULL;
    p_31 = t;
    m_31 :
    if(!(match_string(p_31, "-i")))
      {
        if(!(match_string(p_31, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm s_31 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm q_31 = NULL;
      ATerm r_31 = NULL;
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, not_null(q_31));
        t = set_config_0(t);
      }
    }
    t = i_15;
    {
      ATerm t_31 = NULL;
      t_31 = t;
      if(((s_31 != NULL) && (s_31 != t_31)))
        _fail(t_31);
      else
        s_31 = t_31;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_31));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = ArgOption_3(t, t_2, w_2, g_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = report_run_time_0(t);
  {
    ATerm y_31 = NULL;
    t = term_f_7;
    {
      t = whoami_0(t);
      {
        y_31 = t;
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, term_r_15), not_null(x_31)));
      {
        t = printnl_0(t);
        {
          t = term_q_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_s_15;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  t = SSL_TicksToSeconds(not_null(b_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm t_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_32), not_null(i_32));
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = t_15;
            t = SSL_addr(not_null(h_32), not_null(i_32));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_92 (ATerm), ATerm i_92 (ATerm))
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_92(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
        r_32 = t;
        q_32 :
        if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
          {
            s_32 = ATgetFirst((ATermList) r_32);
            t_32 = (ATerm) ATgetNext((ATermList) r_32);
            {
              ATerm w_32 = NULL;
              ATerm x_32 = NULL;
              t = not_null(t_32);
              {
                t = foldr_2(t, h_92, i_92);
                {
                  x_32 = t;
                  if(((w_32 != NULL) && (w_32 != x_32)))
                    _fail(x_32);
                  else
                    w_32 = x_32;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_32), not_null(w_32));
                t = i_92(t);
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
ATerm crush_2 (ATerm t, ATerm f_90 (ATerm), ATerm g_90 (ATerm))
{
  ATerm e_33 = NULL;
  ATerm g_33 = NULL;
  e_33 = t;
  {
    ATerm h_33 = NULL;
    ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
    t = not_null(e_33);
    {
      h_33 = t;
      {
        t = SSL_explode_term(not_null(h_33));
        {
          j_33 = t;
          d_33 :
          if(match_cons(j_33, sym__2))
            {
              k_33 = ATgetArgument(j_33, 0);
              l_33 = ATgetArgument(j_33, 1);
              if(((g_33 != NULL) && (g_33 != l_33)))
                _fail(l_33);
              else
                g_33 = l_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_33);
      t = foldr_2(t, f_90, g_90);
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
    ATerm h_3 (ATerm t)
    {
      t = term_p_8;
      return(t);
    }
    t = crush_2(t, h_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym__2))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      {
        ATerm e_16;
        e_16 = t;
        {
          ATerm g_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(s_33), not_null(t_33));
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = g_16;
              t = SSL_gtr(not_null(s_33), not_null(t_33));
            }
        }
        t = e_16;
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
  ATerm z_33 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
      a_34 = t;
      y_33 :
      if(match_cons(a_34, sym__2))
        {
          b_34 = ATgetArgument(a_34, 0);
          c_34 = ATgetArgument(a_34, 1);
          {
            if(((z_33 != NULL) && (z_33 != b_34)))
              _fail(b_34);
            else
              z_33 = b_34;
            if(((z_33 != NULL) && (z_33 != c_34)))
              _fail(c_34);
            else
              z_33 = c_34;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm m_16;
    m_16 = t;
    {
      ATerm f_34 = NULL;
      ATerm g_34 = NULL;
      t = term_e_11;
      {
        t = get_config_0(t);
        {
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), term_q_8);
        t = geq_0(t);
      }
    }
    t = m_16;
    t = p_103(t);
    return(t);
  }
  t = try_1(t, i_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_34 = NULL,m_34 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm l_34 = NULL;
      t = run_time_0(t);
      {
        l_34 = t;
        if(((k_34 != NULL) && (k_34 != l_34)))
          _fail(l_34);
        else
          k_34 = l_34;
      }
    }
    t = n_16;
    {
      ATerm n_34 = NULL;
      t = term_f_7;
      {
        t = whoami_0(t);
        {
          n_34 = t;
          if(((m_34 != NULL) && (m_34 != n_34)))
            _fail(n_34);
          else
            m_34 = n_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_16), not_null(k_34)), term_o_16), not_null(m_34)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_p_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t_34 :
  if(match_cons(u_34, sym_Version_0))
    {
      ATerm w_34 = NULL,y_34 = NULL;
      ATerm s_16;
      s_16 = t;
      {
        ATerm x_34 = NULL;
        t = SSLgetAnnotations(not_null(u_34));
        {
          x_34 = t;
          if(((w_34 != NULL) && (w_34 != x_34)))
            _fail(x_34);
          else
            w_34 = x_34;
        }
      }
      t = s_16;
      {
        ATerm z_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_34));
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
        t = not_null(y_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm a_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = a_17;
              {
                ATerm d_17 = t;
                int e_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(e_17);
                  }
                else
                  {
                    t = d_17;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_3);
      }
    }
  t = m_106(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  t = SSL_table_create(not_null(e_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  {
    ATerm j_17;
    j_17 = t;
    {
      t = term_k_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, not_null(i_35));
          t = table_put_0(t);
        }
      }
    }
    t = j_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_table_destroy(not_null(m_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  t = SSL_exit(not_null(q_35));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm t_35 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = Cons_2(t, i_87, t_35);
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  c_36 = t;
  z_35 :
  if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
    {
      a_36 = ATgetFirst((ATermList) c_36);
      b_36 = (ATerm) ATgetNext((ATermList) c_36);
      {
        ATerm f_36 = NULL;
        t = not_null(b_36);
        {
          ATerm o_17;
          o_17 = t;
          {
            ATerm g_36 = NULL,i_36 = NULL,k_36 = NULL;
            ATerm p_17;
            p_17 = t;
            {
              ATerm h_36 = NULL;
              t = j_0(t);
              {
                h_36 = t;
                if(((g_36 != NULL) && (g_36 != h_36)))
                  _fail(h_36);
                else
                  g_36 = h_36;
              }
            }
            t = p_17;
            {
              ATerm j_36 = NULL;
              t = not_null(a_36);
              {
                t = e_0(t);
                {
                  j_36 = t;
                  if(((i_36 != NULL) && (i_36 != j_36)))
                    _fail(j_36);
                  else
                    i_36 = j_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_36)), not_null(i_36));
                {
                  k_36 = t;
                  if(((f_36 != NULL) && (f_36 != k_36)))
                    _fail(k_36);
                  else
                    f_36 = k_36;
                }
              }
            }
          }
          t = o_17;
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(f_36);
              return(t);
            }
            t = reverse_acc_2(t, e_0, p_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_36) == AT_LIST) && ATisEmpty(c_36)))
        {
          {
            t = term_f_7;
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym_Program_1))
    {
      b_37 = ATgetArgument(a_37, 0);
      {
        ATerm i_37 = NULL,k_37 = NULL;
        ATerm j_37 = NULL;
        t = SSLgetAnnotations(not_null(a_37));
        {
          j_37 = t;
          if(((i_37 != NULL) && (i_37 != j_37)))
            _fail(j_37);
          else
            i_37 = j_37;
        }
        {
          t = not_null(b_37);
          {
            ATerm m_37 = NULL;
            t = d_75(t);
            {
              k_37 = t;
              {
                ATerm n_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_37)), not_null(i_37));
                {
                  n_37 = t;
                  if(((m_37 != NULL) && (m_37 != n_37)))
                    _fail(n_37);
                  else
                    m_37 = n_37;
                }
                t = not_null(m_37);
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
  ATerm w_37 = NULL;
  ATerm t_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL;
      t = term_s_15;
      {
        t = get_config_0(t);
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
      }
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_37 = NULL;
            y_37 = t;
            if(((w_37 != NULL) && (w_37 != y_37)))
              _fail(y_37);
            else
              w_37 = y_37;
            return(t);
          }
          t = Program_1(t, x_3);
          return(t);
        }
        t = option_defined_1(t, v_3);
      }
    }
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = not_null(w_37);
        return(t);
      }
      t = short_description_1(t, z_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_3);
    {
      t = term_a_18;
      {
        t = echo_0(t);
        {
          t = term_e_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm z_37 = NULL;
                  ATerm a_38 = NULL;
                  a_38 = t;
                  if(((z_37 != NULL) && (z_37 != a_38)))
                    _fail(a_38);
                  else
                    z_37 = a_38;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), term_j_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_4);
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm b_38 = NULL;
                    ATerm c_38 = NULL;
                    ATerm c_4 (ATerm t)
                    {
                      t = not_null(w_37);
                      return(t);
                    }
                    t = long_description_1(t, c_4);
                    {
                      c_38 = t;
                      if(((b_38 != NULL) && (b_38 != c_38)))
                        _fail(c_38);
                      else
                        b_38 = c_38;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_38)), term_k_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_4);
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
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym_Undefined_1))
    {
      n_38 = ATgetArgument(m_38, 0);
      {
        ATerm q_38 = NULL,s_38 = NULL;
        ATerm r_38 = NULL;
        t = SSLgetAnnotations(not_null(m_38));
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
        {
          t = not_null(n_38);
          {
            ATerm u_38 = NULL;
            t = e_75(t);
            {
              s_38 = t;
              {
                ATerm w_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_38)), not_null(q_38));
                {
                  w_38 = t;
                  if(((u_38 != NULL) && (u_38 != w_38)))
                    _fail(w_38);
                  else
                    u_38 = w_38;
                }
                t = not_null(u_38);
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
ATerm fetch_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm b_39 (ATerm t)
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_87, _id);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = Cons_2(t, _id, b_39);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_107 (ATerm))
{
  t = fetch_1(t, m_107);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  d_39 = t;
  c_39 :
  if(((ATgetType(d_39) == AT_LIST) && ATisEmpty(d_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
        {
          e_39 = ATgetFirst((ATermList) d_39);
          f_39 = (ATerm) ATgetNext((ATermList) d_39);
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
  ATerm q_18;
  q_18 = t;
  {
    ATerm i_39 = NULL;
    ATerm l_39 = NULL;
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm j_39 = NULL;
          ATerm k_39 = NULL;
          k_39 = t;
          if(((j_39 != NULL) && (j_39 != k_39)))
            _fail(k_39);
          else
            j_39 = k_39;
          t = (ATerm) ATinsert(ATempty, not_null(j_39));
        }
      }
    {
      l_39 = t;
      if(((i_39 != NULL) && (i_39 != l_39)))
        _fail(l_39);
      else
        i_39 = l_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(i_39));
      t = printnl_0(t);
    }
  }
  t = q_18;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_s_15;
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
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Help_0))
    {
      ATerm u_39 = NULL,w_39 = NULL;
      ATerm z_18;
      z_18 = t;
      {
        ATerm v_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
      }
      t = z_18;
      {
        ATerm b_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_39));
        {
          b_40 = t;
          if(((w_39 != NULL) && (w_39 != b_40)))
            _fail(b_40);
          else
            w_39 = b_40;
        }
        t = not_null(w_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_83(t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm c_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm h_40 = NULL;
        h_40 = t;
        f_40 :
        if(!(match_string(h_40, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_j_19;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_k_19;
        return(t);
      }
      t = Option_3(t, d_4, e_4, f_4);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = c_19;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm i_40 = NULL;
          i_40 = t;
          g_40 :
          if(!(match_string(i_40, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_j_19;
          {
            t = set_config_0(t);
            {
              t = term_m_19;
              t = set_config_0(t);
            }
          }
          t = term_n_19;
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_p_19;
          return(t);
        }
        t = Option_3(t, g_4, h_4, q_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      t = SSL_table_get(not_null(m_40), not_null(n_40));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym__3))
    {
      v_40 = ATgetArgument(u_40, 0);
      w_40 = ATgetArgument(u_40, 1);
      x_40 = ATgetArgument(u_40, 2);
      {
        ATerm s_19;
        s_19 = t;
        {
          ATerm b_41 = NULL;
          ATerm c_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_40), not_null(w_40));
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
                t = (ATerm) ATempty;
              }
            {
              c_41 = t;
              if(((b_41 != NULL) && (b_41 != c_41)))
                _fail(c_41);
              else
                b_41 = c_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_40), not_null(w_40), (ATerm) ATinsert(CheckATermList(not_null(b_41)), not_null(x_40)));
            t = table_put_0(t);
          }
        }
        t = s_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_108 (ATerm))
{
  ATerm g_41 = NULL;
  ATerm h_41 = NULL;
  t = term_f_7;
  {
    t = r_108(t);
    {
      h_41 = t;
      if(((g_41 != NULL) && (g_41 != h_41)))
        _fail(h_41);
      else
        g_41 = h_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_18, term_c_18, not_null(g_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_string(n_41, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
        {
          o_41 = ATgetFirst((ATermList) n_41);
          p_41 = (ATerm) ATgetNext((ATermList) n_41);
          {
            ATerm s_41 = NULL;
            ATerm x_19;
            x_19 = t;
            {
              t = not_null(o_41);
              t = a_0(t);
            }
            t = x_19;
            {
              ATerm t_41 = NULL;
              t = term_f_7;
              {
                t = b_0(t);
                {
                  t_41 = t;
                  if(((s_41 != NULL) && (s_41 != t_41)))
                    _fail(t_41);
                  else
                    s_41 = t_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_41)), not_null(s_41));
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
  ATerm r_4 (ATerm t)
  {
    ATerm a_42 = NULL;
    a_42 = t;
    z_41 :
    if(!(match_string(a_42, "--help")))
      {
        if(!(match_string(a_42, "-h")))
          {
            if(!(match_string(a_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_y_19;
    {
      t = set_config_0(t);
      t = term_z_19;
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  t = Option_3(t, r_4, s_4, a_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  e_42 :
  if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
    {
      g_42 = ATgetFirst((ATermList) f_42);
      h_42 = (ATerm) ATgetNext((ATermList) f_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  m_42 :
  if(match_cons(n_42, sym__2))
    {
      o_42 = ATgetArgument(n_42, 0);
      p_42 = ATgetArgument(n_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_b_11, not_null(o_42), not_null(p_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm h_20;
  h_20 = t;
  {
    ATerm b_5 (ATerm t)
    {
      t = term_k_20;
      t = p_108(t);
      return(t);
    }
    t = try_1(t, b_5);
  }
  t = h_20;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm x_42 = NULL;
      ATerm l_20;
      l_20 = t;
      {
        ATerm v_42 = NULL;
        ATerm w_42 = NULL;
        w_42 = t;
        if(((v_42 != NULL) && (v_42 != w_42)))
          _fail(w_42);
        else
          v_42 = w_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_15, not_null(v_42));
          t = set_config_0(t);
        }
      }
      t = l_20;
      {
        ATerm y_42 = NULL;
        y_42 = t;
        if(((x_42 != NULL) && (x_42 != y_42)))
          _fail(y_42);
        else
          x_42 = y_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_42));
      }
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              {
                t = p_108(t);
                t = Cons_2(t, _id, i_5);
              }
            }
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_5, i_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,j_43 = NULL;
  ATerm y_20;
  y_20 = t;
  {
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
    k_43 = t;
    f_43 :
    if(match_cons(k_43, sym__3))
      {
        l_43 = ATgetArgument(k_43, 0);
        m_43 = ATgetArgument(k_43, 1);
        n_43 = ATgetArgument(k_43, 2);
        {
          if(((g_43 != NULL) && (g_43 != l_43)))
            _fail(l_43);
          else
            g_43 = l_43;
          {
            if(((h_43 != NULL) && (h_43 != m_43)))
              _fail(m_43);
            else
              h_43 = m_43;
            {
              if(((j_43 != NULL) && (j_43 != n_43)))
                _fail(n_43);
              else
                j_43 = n_43;
              t = SSL_table_put(not_null(g_43), not_null(h_43), not_null(j_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_108 (ATerm))
{
  ATerm q_43 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    t = term_a_21;
    t = table_put_0(t);
  }
  t = z_20;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm d_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_108(t);
          ;
          LocalPopChoice(e_21);
        }
      else
        {
          t = d_21;
          {
            ATerm f_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(m_21);
              }
            else
              {
                t = f_21;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm n_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_21;
            r_21 = t;
            {
              ATerm s_21 = t;
              int t_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(t_21);
                }
              else
                {
                  t = s_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_21;
            {
              t = system_usage_0(t);
              {
                t = term_p_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = n_21;
            {
              ATerm u_21 = t;
              int z_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_22;
                  a_22 = t;
                  {
                    t = term_i_19;
                    t = get_config_0(t);
                  }
                  t = a_22;
                  {
                    t = system_about_0(t);
                    {
                      t = term_p_8;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(z_21);
                }
              else
                {
                  t = u_21;
                  {
                    ATerm l_5 (ATerm t)
                    {
                      ATerm m_5 (ATerm t)
                      {
                        ATerm r_43 = NULL;
                        r_43 = t;
                        if(((q_43 != NULL) && (q_43 != r_43)))
                          _fail(r_43);
                        else
                          q_43 = r_43;
                        return(t);
                      }
                      t = Undefined_1(t, m_5);
                      return(t);
                    }
                    t = option_defined_1(t, l_5);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_43)), term_f_22));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_q_8;
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
      t = try_1(t, k_5);
      {
        ATerm g_22;
        g_22 = t;
        {
          t = term_b_18;
          t = table_destroy_0(t);
        }
        t = g_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm))
{
  t = parse_options_1(t, o_106);
  {
    t = store_options_0(t);
    {
      t = q_106(t);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_106);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            {
              ATerm k_22 = t;
              int r_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_106(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_22);
                }
              else
                {
                  t = k_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_106(t);
        ;
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_106);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_5, f_106, g_106, o_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm u_22;
      u_22 = t;
      {
        ATerm u_43 = NULL;
        ATerm v_43 = NULL;
        t = term_s_15;
        {
          t = get_config_0(t);
          {
            v_43 = t;
            if(((u_43 != NULL) && (u_43 != v_43)))
              _fail(v_43);
            else
              u_43 = v_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_9, (ATerm) ATinsert(ATempty, not_null(u_43)));
          t = printnl_0(t);
        }
      }
      t = u_22;
      return(t);
    }
    t = if_verbose2_1(t, q_5);
    return(t);
  }
  t = iowrap_4(t, x_105, y_105, z_105, p_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_105 (ATerm), ATerm w_105 (ATerm))
{
  t = iowrap_3(t, v_105, w_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_105 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    t = _2(t, _id, s_105);
    return(t);
  }
  t = iowrap_2(t, r_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_5 (ATerm t)
      {
        ATerm h_6 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, h_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, z_5);
      return(t);
    }
    t = Specification_1(t, y_5);
    return(t);
  }
  t = iowrap_1(t, s_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
