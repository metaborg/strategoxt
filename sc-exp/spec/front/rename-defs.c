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
ATerm term_u_35;
ATerm term_x_33;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_f_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_q_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_w_23;
ATerm term_r_23;
ATerm term_m_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_e_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_u_15;
ATerm term_p_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_y_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_b_10;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_h_13);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_13);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_k_10);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_k_10);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_e_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_k_10);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_k_10);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_k_10);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__3, term_d_29, term_e_29, (ATerm) ATempty);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0_0 (ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm assert_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm l_109 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm m_97 (ATerm, ATerm (ATerm)), ATerm);
ATerm cify_0_0 (ATerm);
ATerm NameMod_0_0 (ATerm);
ATerm foldr_3_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm r_66 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_66 (ATerm), ATerm);
ATerm _2_0 (ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm o_102 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm a_102 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_103 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm o_107 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm t_108 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm s_1 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm t_1 = NULL,h_2 = NULL,j_2 = NULL;
    t = not_null(s_1);
    if(((t_1 != NULL) && (t_1 != t)))
      _fail(t);
    else
      t_1 = t;
    t = not_null(s_1);
    {
      ATerm w_8;
      w_8 = t;
      {
        ATerm i_2 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = not_null(i_2);
          if(((h_2 != NULL) && (h_2 != t)))
            _fail(t);
          else
            h_2 = t;
          t = not_null(i_2);
          return(t);
        }
        t = SSLgetAnnotations(not_null(t_1));
        if(((i_2 != NULL) && (i_2 != t)))
          _fail(t);
        else
          i_2 = t;
        t = p_2(t);
      }
      t = w_8;
      {
        ATerm n_2 = NULL;
        ATerm q_2 (ATerm t)
        {
          t = not_null(n_2);
          if(((j_2 != NULL) && (j_2 != t)))
            _fail(t);
          else
            j_2 = t;
          t = not_null(n_2);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(h_2));
        if(((n_2 != NULL) && (n_2 != t)))
          _fail(t);
        else
          n_2 = t;
        t = q_2(t);
        t = not_null(j_2);
      }
    }
    return(t);
  }
  if(((s_1 != NULL) && (s_1 != t)))
    _fail(t);
  else
    s_1 = t;
  t = not_null(s_1);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_2(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  ATerm v_3 (ATerm t)
  {
    ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
    t = not_null(d_3);
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    t = not_null(e_3);
    if(((h_3 != NULL) && (h_3 != t)))
      _fail(t);
    else
      h_3 = t;
    t = not_null(b_3);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    t = not_null(c_3);
    if(((j_3 != NULL) && (j_3 != t)))
      _fail(t);
    else
      j_3 = t;
    t = not_null(d_3);
    {
      ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
      ATerm x_3 (ATerm t)
      {
        t = not_null(n_3);
        if(((k_3 != NULL) && (k_3 != t)))
          _fail(t);
        else
          k_3 = t;
        t = not_null(l_3);
        return(t);
      }
      t = not_null(g_3);
      {
        ATerm l_0 (ATerm t)
        {
          t = term_a_9;
          return(t);
        }
        t = rewrite_1_0(l_0, t);
        if(((l_3 != NULL) && (l_3 != t)))
          _fail(t);
        else
          l_3 = t;
        t = not_null(l_3);
        if(match_cons(t, sym_Defined_2))
          {
            m_3 = ATgetArgument(t, 0);
            n_3 = ATgetArgument(t, 1);
            t = not_null(m_3);
            if(match_string(t, "i_0"))
              {
                t = x_3(t);
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
      t = not_null(k_3);
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
    t = not_null(d_3);
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = not_null(e_3);
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    t = not_null(f_3);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = not_null(d_3);
    {
      ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
      ATerm y_3 (ATerm t)
      {
        t = not_null(u_3);
        if(((r_3 != NULL) && (r_3 != t)))
          _fail(t);
        else
          r_3 = t;
        t = not_null(s_3);
        return(t);
      }
      t = not_null(o_3);
      {
        ATerm p_0 (ATerm t)
        {
          t = term_a_9;
          return(t);
        }
        t = rewrite_1_0(p_0, t);
        if(((s_3 != NULL) && (s_3 != t)))
          _fail(t);
        else
          s_3 = t;
        t = not_null(s_3);
        if(match_cons(t, sym_Defined_2))
          {
            t_3 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            t = not_null(t_3);
            if(match_string(t, "b_0"))
              {
                t = y_3(t);
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
      t = not_null(r_3);
    }
    return(t);
  }
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  t = not_null(d_3);
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
      t = not_null(f_3);
      if(match_cons(t, sym__2))
        {
          b_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
          {
            ATerm b_9 = t;
            int c_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_3(t);
                ;
                LocalPopChoice(c_9);
              }
            else
              {
                t = b_9;
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
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  ATerm h_5 (ATerm t)
  {
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
    t = not_null(o_4);
    if(((q_4 != NULL) && (q_4 != t)))
      _fail(t);
    else
      q_4 = t;
    t = not_null(p_4);
    if(((r_4 != NULL) && (r_4 != t)))
      _fail(t);
    else
      r_4 = t;
    t = not_null(l_4);
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = not_null(m_4);
    {
      ATerm w_4 = NULL;
      ATerm j_5 (ATerm t)
      {
        ATerm x_4 = NULL;
        ATerm k_5 (ATerm t)
        {
          t = not_null(x_4);
          if(((u_4 != NULL) && (u_4 != t)))
            _fail(t);
          else
            u_4 = t;
          t = not_null(x_4);
          {
            ATerm d_9 = t;
            int e_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_4 = NULL;
                ATerm l_5 (ATerm t)
                {
                  t = not_null(y_4);
                  if(((v_4 != NULL) && (v_4 != t)))
                    _fail(t);
                  else
                    v_4 = t;
                  t = not_null(y_4);
                  return(t);
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_4), (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(u_4)));
                t = RenameVar_0_0(t);
                if(((y_4 != NULL) && (y_4 != t)))
                  _fail(t);
                else
                  y_4 = t;
                t = l_5(t);
                ;
                LocalPopChoice(e_9);
              }
            else
              {
                t = d_9;
                {
                  ATerm z_4 = NULL;
                  ATerm m_5 (ATerm t)
                  {
                    t = not_null(z_4);
                    if(((v_4 != NULL) && (v_4 != t)))
                      _fail(t);
                    else
                      v_4 = t;
                    t = not_null(z_4);
                    return(t);
                  }
                  t = not_null(q_4);
                  t = HoArg_0_0(t);
                  if(((z_4 != NULL) && (z_4 != t)))
                    _fail(t);
                  else
                    z_4 = t;
                  t = m_5(t);
                }
              }
          }
          return(t);
        }
        t = not_null(w_4);
        if(((t_4 != NULL) && (t_4 != t)))
          _fail(t);
        else
          t_4 = t;
        t = not_null(s_4);
        t = length_0_0(t);
        if(((x_4 != NULL) && (x_4 != t)))
          _fail(t);
        else
          x_4 = t;
        t = k_5(t);
        return(t);
      }
      t = not_null(r_4);
      t = length_0_0(t);
      if(((w_4 != NULL) && (w_4 != t)))
        _fail(t);
      else
        w_4 = t;
      t = j_5(t);
      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_4)), not_null(r_4), not_null(s_4));
    }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
    t = not_null(o_4);
    if(((a_5 != NULL) && (a_5 != t)))
      _fail(t);
    else
      a_5 = t;
    t = not_null(p_4);
    if(((b_5 != NULL) && (b_5 != t)))
      _fail(t);
    else
      b_5 = t;
    t = not_null(m_4);
    {
      ATerm e_5 = NULL;
      ATerm n_5 (ATerm t)
      {
        t = not_null(e_5);
        if(((c_5 != NULL) && (c_5 != t)))
          _fail(t);
        else
          c_5 = t;
        t = not_null(e_5);
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_5 = NULL;
              ATerm o_5 (ATerm t)
              {
                t = not_null(f_5);
                if(((d_5 != NULL) && (d_5 != t)))
                  _fail(t);
                else
                  d_5 = t;
                t = not_null(f_5);
                return(t);
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(c_5));
              t = RenameVar_0_0(t);
              if(((f_5 != NULL) && (f_5 != t)))
                _fail(t);
              else
                f_5 = t;
              t = o_5(t);
              ;
              LocalPopChoice(g_9);
            }
          else
            {
              t = f_9;
              {
                ATerm g_5 = NULL;
                ATerm p_5 (ATerm t)
                {
                  t = not_null(g_5);
                  if(((d_5 != NULL) && (d_5 != t)))
                    _fail(t);
                  else
                    d_5 = t;
                  t = not_null(g_5);
                  return(t);
                }
                t = not_null(a_5);
                t = HoArg_0_0(t);
                if(((g_5 != NULL) && (g_5 != t)))
                  _fail(t);
                else
                  g_5 = t;
                t = p_5(t);
              }
            }
        }
        return(t);
      }
      t = not_null(b_5);
      t = length_0_0(t);
      if(((e_5 != NULL) && (e_5 != t)))
        _fail(t);
      else
        e_5 = t;
      t = n_5(t);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_5)), not_null(b_5));
    }
    return(t);
  }
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  t = not_null(m_4);
  if(match_cons(t, sym_CallT_3))
    {
      n_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
      l_4 = ATgetArgument(t, 2);
      t = not_null(n_4);
      if(match_cons(t, sym_SVar_1))
        {
          o_4 = ATgetArgument(t, 0);
          t = h_5(t);
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
          n_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
          t = not_null(n_4);
          if(match_cons(t, sym_SVar_1))
            {
              o_4 = ATgetArgument(t, 0);
              t = i_5(t);
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
ATerm topdown_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  t = j_81(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = topdown_1_0(j_81, t);
      return(t);
    }
    t = SRTS_all(q_0, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  ATerm h_6 (ATerm t)
  {
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
    t = not_null(w_5);
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    t = not_null(x_5);
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = not_null(v_5);
    {
      ATerm h_9;
      h_9 = t;
      {
        ATerm d_6 = NULL;
        ATerm i_6 (ATerm t)
        {
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          ATerm j_6 (ATerm t)
          {
            t = not_null(f_6);
            if(((b_6 != NULL) && (b_6 != t)))
              _fail(t);
            else
              b_6 = t;
            t = not_null(g_6);
            if(((c_6 != NULL) && (c_6 != t)))
              _fail(t);
            else
              c_6 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_6), term_b_10, (ATerm) ATinsert(CheckATermList(not_null(c_6)), (ATerm) ATinsert(CheckATermList(not_null(b_6)), not_null(y_5))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(d_6);
          if(((a_6 != NULL) && (a_6 != t)))
            _fail(t);
          else
            a_6 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(a_6), not_null(y_5), not_null(z_5));
          t = table_push_0_0(t);
          {
            ATerm c_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_b_10);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(j_10);
              }
            else
              {
                t = c_10;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((e_6 != NULL) && (e_6 != t)))
              _fail(t);
            else
              e_6 = t;
            t = not_null(e_6);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_6 = ATgetFirst((ATermList) t);
                g_6 = (ATerm) ATgetNext((ATermList) t);
                t = j_6(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = j_109(t);
        if(((d_6 != NULL) && (d_6 != t)))
          _fail(t);
        else
          d_6 = t;
        t = i_6(t);
      }
      t = h_9;
    }
    return(t);
  }
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  t = not_null(v_5);
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      t = h_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  ATerm q_6 (ATerm t)
  {
    ATerm p_6 = NULL;
    t = not_null(n_6);
    if(((p_6 != NULL) && (p_6 != t)))
      _fail(t);
    else
      p_6 = t;
    t = not_null(p_6);
    return(t);
  }
  if(((m_6 != NULL) && (m_6 != t)))
    _fail(t);
  else
    m_6 = t;
  t = not_null(m_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_6 = ATgetFirst((ATermList) t);
      o_6 = (ATerm) ATgetNext((ATermList) t);
      t = q_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm w_6 = NULL,x_6 = NULL;
    t = not_null(u_6);
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = not_null(v_6);
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_6), not_null(x_6));
    t = table_get_0_0(t);
    t = Hd_0_0(t);
    return(t);
  }
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  t = not_null(t_6);
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      t = y_6(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm b_7 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm c_7 = NULL,d_7 = NULL;
    t = not_null(b_7);
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    t = not_null(b_7);
    {
      ATerm e_7 = NULL;
      ATerm g_7 (ATerm t)
      {
        t = not_null(e_7);
        if(((d_7 != NULL) && (d_7 != t)))
          _fail(t);
        else
          d_7 = t;
        t = not_null(e_7);
        return(t);
      }
      t = term_k_10;
      t = l_109(t);
      if(((e_7 != NULL) && (e_7 != t)))
        _fail(t);
      else
        e_7 = t;
      t = g_7(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(c_7));
      t = table_lookup_0_0(t);
    }
    return(t);
  }
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
  t = f_7(t);
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm v_7 = NULL;
  ATerm o_8 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL;
    t = not_null(v_7);
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = not_null(v_7);
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    t = not_null(v_7);
    {
      ATerm y_7 = NULL;
      ATerm s_8 (ATerm t)
      {
        t = not_null(y_7);
        _fail(t);
        return(t);
      }
      t = not_null(x_7);
      {
        ATerm r_0 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = rewrite_1_0(r_0, t);
        if(((y_7 != NULL) && (y_7 != t)))
          _fail(t);
        else
          y_7 = t;
        t = not_null(y_7);
        if(match_cons(t, sym_Undefined_0))
          {
            t = s_8(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_m_10;
    }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
    t = not_null(v_7);
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    t = not_null(v_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(v_7);
    {
      ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
      ATerm t_8 (ATerm t)
      {
        t = not_null(e_8);
        if(((b_8 != NULL) && (b_8 != t)))
          _fail(t);
        else
          b_8 = t;
        t = not_null(c_8);
        return(t);
      }
      t = not_null(z_7);
      {
        ATerm s_0 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = rewrite_1_0(s_0, t);
        if(((c_8 != NULL) && (c_8 != t)))
          _fail(t);
        else
          c_8 = t;
        t = not_null(c_8);
        if(match_cons(t, sym_Defined_2))
          {
            d_8 = ATgetArgument(t, 0);
            e_8 = ATgetArgument(t, 1);
            t = not_null(d_8);
            if(match_string(t, "m_0"))
              {
                t = t_8(t);
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
      t = not_null(b_8);
    }
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL;
    t = not_null(v_7);
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = not_null(v_7);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    t = not_null(v_7);
    {
      ATerm h_8 = NULL;
      ATerm u_8 (ATerm t)
      {
        t = not_null(h_8);
        _fail(t);
        return(t);
      }
      t = not_null(g_8);
      {
        ATerm t_0 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = rewrite_1_0(t_0, t);
        if(((h_8 != NULL) && (h_8 != t)))
          _fail(t);
        else
          h_8 = t;
        t = not_null(h_8);
        if(match_cons(t, sym_Undefined_0))
          {
            t = u_8(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = term_m_10;
    }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
    t = not_null(v_7);
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = not_null(v_7);
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    t = not_null(v_7);
    {
      ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
      ATerm v_8 (ATerm t)
      {
        t = not_null(n_8);
        if(((k_8 != NULL) && (k_8 != t)))
          _fail(t);
        else
          k_8 = t;
        t = not_null(l_8);
        return(t);
      }
      t = not_null(i_8);
      {
        ATerm u_0 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = rewrite_1_0(u_0, t);
        if(((l_8 != NULL) && (l_8 != t)))
          _fail(t);
        else
          l_8 = t;
        t = not_null(l_8);
        if(match_cons(t, sym_Defined_2))
          {
            m_8 = ATgetArgument(t, 0);
            n_8 = ATgetArgument(t, 1);
            t = not_null(m_8);
            if(match_string(t, "g_0"))
              {
                t = v_8(t);
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
      t = not_null(k_8);
    }
    return(t);
  }
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_8(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_8(t);
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm d_11 = t;
                int e_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = q_8(t);
                    ;
                    LocalPopChoice(e_11);
                  }
                else
                  {
                    t = d_11;
                    t = r_8(t);
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  ATerm z_8 (ATerm t)
  {
    ATerm y_8 = NULL;
    t = not_null(x_8);
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = not_null(x_8);
    t = SSL_int_to_string(not_null(y_8));
    return(t);
  }
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = z_8(t);
  return(t);
}
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  ATerm u_9 (ATerm t)
  {
    ATerm l_9 = NULL,m_9 = NULL;
    t = not_null(k_9);
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = not_null(i_9);
    {
      ATerm n_9 = NULL;
      ATerm x_9 (ATerm t)
      {
        t = not_null(n_9);
        if(((m_9 != NULL) && (m_9 != t)))
          _fail(t);
        else
          m_9 = t;
        t = not_null(n_9);
        return(t);
      }
      t = not_null(l_9);
      t = o_0(t);
      if(((n_9 != NULL) && (n_9 != t)))
        _fail(t);
      else
        n_9 = t;
      t = x_9(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_9)), term_f_11), term_f_11);
    }
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL;
    t = not_null(k_9);
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    t = not_null(i_9);
    {
      ATerm q_9 = NULL;
      ATerm y_9 (ATerm t)
      {
        t = not_null(q_9);
        if(((p_9 != NULL) && (p_9 != t)))
          _fail(t);
        else
          p_9 = t;
        t = not_null(q_9);
        return(t);
      }
      t = not_null(o_9);
      t = o_0(t);
      if(((q_9 != NULL) && (q_9 != t)))
        _fail(t);
      else
        q_9 = t;
      t = y_9(t);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_9)), term_f_11);
    }
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    ATerm r_9 = NULL,s_9 = NULL;
    t = not_null(k_9);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(i_9);
    {
      ATerm t_9 = NULL;
      ATerm z_9 (ATerm t)
      {
        t = not_null(t_9);
        if(((s_9 != NULL) && (s_9 != t)))
          _fail(t);
        else
          s_9 = t;
        t = not_null(t_9);
        return(t);
      }
      t = not_null(r_9);
      t = o_0(t);
      if(((t_9 != NULL) && (t_9 != t)))
        _fail(t);
      else
        t_9 = t;
      t = z_9(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_9)), term_f_11), term_g_11), term_f_11);
    }
    return(t);
  }
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = not_null(i_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_9 = ATgetFirst((ATermList) t);
      k_9 = (ATerm) ATgetNext((ATermList) t);
      t = not_null(j_9);
      if(match_int(t, 95))
        {
          t = u_9(t);
        }
      else
        {
          if(match_int(t, 45))
            {
              t = v_9(t);
            }
          else
            {
              if(match_int(t, 39))
                {
                  t = w_9(t);
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
ATerm escape_1_0 (ATerm m_97 (ATerm, ATerm (ATerm)), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm a_10 (ATerm t)
    {
      ATerm h_11 = t;
      int i_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_97(a_10, t);
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
                t = Cons_2_0(_id, a_10, t);
                ;
                LocalPopChoice(k_11);
              }
            else
              {
                t = j_11;
                t = Nil_0_0(t);
              }
          }
        }
      return(t);
    }
    t = a_10(t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm cify_0_0 (ATerm t)
{
  t = escape_1_0(Cify_1_0, t);
  return(t);
}
ATerm NameMod_0_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  ATerm i_10 (ATerm t)
  {
    ATerm g_10 = NULL,h_10 = NULL;
    t = not_null(e_10);
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(f_10);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_10)), term_l_11), not_null(g_10));
    t = concat_strings_0_0(t);
    return(t);
  }
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  t = not_null(d_10);
  if(match_cons(t, sym_Mod_2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      t = i_10(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = l_92(t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      {
        ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
        ATerm w_10 (ATerm t)
        {
          ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,u_10 = NULL;
          t = not_null(o_10);
          if(((q_10 != NULL) && (q_10 != t)))
            _fail(t);
          else
            q_10 = t;
          t = not_null(p_10);
          if(((r_10 != NULL) && (r_10 != t)))
            _fail(t);
          else
            r_10 = t;
          t = not_null(n_10);
          {
            ATerm g_13;
            g_13 = t;
            {
              ATerm t_10 = NULL;
              ATerm x_10 (ATerm t)
              {
                t = not_null(t_10);
                if(((s_10 != NULL) && (s_10 != t)))
                  _fail(t);
                else
                  s_10 = t;
                t = not_null(t_10);
                return(t);
              }
              t = not_null(q_10);
              t = n_92(t);
              if(((t_10 != NULL) && (t_10 != t)))
                _fail(t);
              else
                t_10 = t;
              t = x_10(t);
            }
            t = g_13;
            {
              ATerm v_10 = NULL;
              ATerm y_10 (ATerm t)
              {
                t = not_null(v_10);
                if(((u_10 != NULL) && (u_10 != t)))
                  _fail(t);
                else
                  u_10 = t;
                t = not_null(v_10);
                return(t);
              }
              t = not_null(r_10);
              t = foldr_3_0(l_92, m_92, n_92, t);
              if(((v_10 != NULL) && (v_10 != t)))
                _fail(t);
              else
                v_10 = t;
              t = y_10(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(u_10));
              t = m_92(t);
            }
          }
          return(t);
        }
        if(((n_10 != NULL) && (n_10 != t)))
          _fail(t);
        else
          n_10 = t;
        t = not_null(n_10);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_10 = ATgetFirst((ATermList) t);
            p_10 = (ATerm) ATgetNext((ATermList) t);
            t = w_10(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = foldr_3_0(v_0, add_0_0, w_0, t);
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  ATerm s_12 (ATerm t)
  {
    ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
    t = not_null(o_11);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = not_null(p_11);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = not_null(q_11);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    t = not_null(m_11);
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = not_null(n_11);
    {
      ATerm y_11 = NULL;
      ATerm u_12 (ATerm t)
      {
        ATerm z_11 = NULL;
        ATerm v_12 (ATerm t)
        {
          ATerm a_12 = NULL,c_12 = NULL,e_12 = NULL,g_12 = NULL;
          ATerm z_12 (ATerm t)
          {
            t = not_null(g_12);
            if(((x_11 != NULL) && (x_11 != t)))
              _fail(t);
            else
              x_11 = t;
            t = not_null(g_12);
            {
              ATerm x_13;
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_11), (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(w_11))), (ATerm) ATmakeAppl(sym_Defined_2, term_y_13, not_null(x_11)));
              {
                ATerm x_0 (ATerm t)
                {
                  t = term_a_9;
                  return(t);
                }
                t = assert_1_0(x_0, t);
              }
              t = x_13;
              {
                ATerm z_13 = t;
                int a_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = not_null(r_11);
                    t = HoArg_0_0(t);
                    {
                      ATerm b_14;
                      b_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_m_10);
                      {
                        ATerm y_0 (ATerm t)
                        {
                          t = term_l_10;
                          return(t);
                        }
                        t = assert_1_0(y_0, t);
                      }
                      t = b_14;
                    }
                    ;
                    LocalPopChoice(a_14);
                  }
                else
                  {
                    t = z_13;
                    {
                      ATerm c_14;
                      c_14 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, not_null(x_11)));
                      {
                        ATerm z_0 (ATerm t)
                        {
                          t = term_l_10;
                          return(t);
                        }
                        t = assert_1_0(z_0, t);
                      }
                      t = c_14;
                    }
                  }
              }
            }
            return(t);
          }
          t = not_null(z_11);
          if(((w_11 != NULL) && (w_11 != t)))
            _fail(t);
          else
            w_11 = t;
          t = not_null(z_11);
          {
            ATerm x_14;
            x_14 = t;
            {
              ATerm b_12 = NULL;
              ATerm w_12 (ATerm t)
              {
                t = not_null(b_12);
                if(((a_12 != NULL) && (a_12 != t)))
                  _fail(t);
                else
                  a_12 = t;
                t = not_null(b_12);
                return(t);
              }
              t = not_null(r_11);
              t = try_1_0(NameMod_0_0, t);
              t = cify_0_0(t);
              if(((b_12 != NULL) && (b_12 != t)))
                _fail(t);
              else
                b_12 = t;
              t = w_12(t);
            }
            t = x_14;
            {
              ATerm y_14;
              y_14 = t;
              {
                ATerm d_12 = NULL;
                ATerm x_12 (ATerm t)
                {
                  t = not_null(d_12);
                  if(((c_12 != NULL) && (c_12 != t)))
                    _fail(t);
                  else
                    c_12 = t;
                  t = not_null(d_12);
                  return(t);
                }
                t = not_null(v_11);
                t = int_to_string_0_0(t);
                if(((d_12 != NULL) && (d_12 != t)))
                  _fail(t);
                else
                  d_12 = t;
                t = x_12(t);
              }
              t = y_14;
              {
                ATerm f_12 = NULL;
                ATerm y_12 (ATerm t)
                {
                  t = not_null(f_12);
                  if(((e_12 != NULL) && (e_12 != t)))
                    _fail(t);
                  else
                    e_12 = t;
                  t = not_null(f_12);
                  return(t);
                }
                t = not_null(w_11);
                t = int_to_string_0_0(t);
                if(((f_12 != NULL) && (f_12 != t)))
                  _fail(t);
                else
                  f_12 = t;
                t = y_12(t);
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_12)), term_z_14), not_null(c_12)), term_z_14), not_null(a_12));
                t = concat_strings_0_0(t);
                if(((g_12 != NULL) && (g_12 != t)))
                  _fail(t);
                else
                  g_12 = t;
                t = z_12(t);
              }
            }
          }
          return(t);
        }
        t = not_null(y_11);
        if(((v_11 != NULL) && (v_11 != t)))
          _fail(t);
        else
          v_11 = t;
        t = not_null(t_11);
        t = length_0_0(t);
        if(((z_11 != NULL) && (z_11 != t)))
          _fail(t);
        else
          z_11 = t;
        t = v_12(t);
        return(t);
      }
      t = not_null(s_11);
      t = length_0_0(t);
      if(((y_11 != NULL) && (y_11 != t)))
        _fail(t);
      else
        y_11 = t;
      t = u_12(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(x_11), not_null(s_11), not_null(t_11), not_null(u_11));
    }
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
    t = not_null(o_11);
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    t = not_null(p_11);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    t = not_null(q_11);
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    t = not_null(n_11);
    {
      ATerm m_12 = NULL;
      ATerm a_13 (ATerm t)
      {
        ATerm n_12 = NULL,p_12 = NULL,r_12 = NULL;
        ATerm d_13 (ATerm t)
        {
          t = not_null(r_12);
          if(((l_12 != NULL) && (l_12 != t)))
            _fail(t);
          else
            l_12 = t;
          t = not_null(r_12);
          {
            ATerm a_15;
            a_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_12), not_null(k_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_15, not_null(l_12)));
            {
              ATerm a_1 (ATerm t)
              {
                t = term_a_9;
                return(t);
              }
              t = assert_1_0(a_1, t);
            }
            t = a_15;
            {
              ATerm q_15 = t;
              int r_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(h_12);
                  t = HoArg_0_0(t);
                  {
                    ATerm s_15;
                    s_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_12), term_m_10);
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = term_l_10;
                        return(t);
                      }
                      t = assert_1_0(b_1, t);
                    }
                    t = s_15;
                  }
                  ;
                  LocalPopChoice(r_15);
                }
              else
                {
                  t = q_15;
                  {
                    ATerm t_15;
                    t_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_12), (ATerm) ATmakeAppl(sym_Defined_2, term_u_15, not_null(l_12)));
                    {
                      ATerm c_1 (ATerm t)
                      {
                        t = term_l_10;
                        return(t);
                      }
                      t = assert_1_0(c_1, t);
                    }
                    t = t_15;
                  }
                }
            }
          }
          return(t);
        }
        t = not_null(m_12);
        if(((k_12 != NULL) && (k_12 != t)))
          _fail(t);
        else
          k_12 = t;
        t = not_null(m_12);
        {
          ATerm o_16;
          o_16 = t;
          {
            ATerm o_12 = NULL;
            ATerm b_13 (ATerm t)
            {
              t = not_null(o_12);
              if(((n_12 != NULL) && (n_12 != t)))
                _fail(t);
              else
                n_12 = t;
              t = not_null(o_12);
              return(t);
            }
            t = not_null(h_12);
            t = try_1_0(NameMod_0_0, t);
            t = cify_0_0(t);
            if(((o_12 != NULL) && (o_12 != t)))
              _fail(t);
            else
              o_12 = t;
            t = b_13(t);
          }
          t = o_16;
          {
            ATerm q_12 = NULL;
            ATerm c_13 (ATerm t)
            {
              t = not_null(q_12);
              if(((p_12 != NULL) && (p_12 != t)))
                _fail(t);
              else
                p_12 = t;
              t = not_null(q_12);
              return(t);
            }
            t = not_null(k_12);
            t = int_to_string_0_0(t);
            if(((q_12 != NULL) && (q_12 != t)))
              _fail(t);
            else
              q_12 = t;
            t = c_13(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_12)), term_z_14), not_null(n_12));
            t = concat_strings_0_0(t);
            if(((r_12 != NULL) && (r_12 != t)))
              _fail(t);
            else
              r_12 = t;
            t = d_13(t);
          }
        }
        return(t);
      }
      t = not_null(i_12);
      t = length_0_0(t);
      if(((m_12 != NULL) && (m_12 != t)))
        _fail(t);
      else
        m_12 = t;
      t = a_13(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_12), not_null(i_12), not_null(j_12));
    }
    return(t);
  }
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = not_null(n_11);
  if(match_cons(t, sym_SDefT_4))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
      q_11 = ATgetArgument(t, 2);
      m_11 = ATgetArgument(t, 3);
      t = s_12(t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_11 = ATgetArgument(t, 0);
          p_11 = ATgetArgument(t, 1);
          q_11 = ATgetArgument(t, 2);
          t = t_12(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = try_1_0(RenameCall_0_0, t);
        return(t);
      }
      t = topdown_1_0(e_1, t);
      return(t);
    }
    t = map_1_0(d_1, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm r_66 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  ATerm t_13 (ATerm t)
  {
    ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,p_13 = NULL;
    ATerm v_13 (ATerm t)
    {
      ATerm q_13 = NULL,r_13 = NULL;
      t = not_null(p_13);
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      t = not_null(p_13);
      {
        ATerm s_13 = NULL;
        ATerm w_13 (ATerm t)
        {
          t = not_null(s_13);
          if(((r_13 != NULL) && (r_13 != t)))
            _fail(t);
          else
            r_13 = t;
          t = not_null(s_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_13)), not_null(n_13));
        if(((s_13 != NULL) && (s_13 != t)))
          _fail(t);
        else
          s_13 = t;
        t = w_13(t);
        t = not_null(r_13);
      }
      return(t);
    }
    t = not_null(j_13);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = not_null(k_13);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = not_null(j_13);
    {
      ATerm o_13 = NULL;
      ATerm u_13 (ATerm t)
      {
        t = not_null(o_13);
        if(((n_13 != NULL) && (n_13 != t)))
          _fail(t);
        else
          n_13 = t;
        t = not_null(o_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_13));
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = u_13(t);
      t = not_null(m_13);
      t = r_66(t);
      if(((p_13 != NULL) && (p_13 != t)))
        _fail(t);
      else
        p_13 = t;
      t = v_13(t);
    }
    return(t);
  }
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  t = not_null(j_13);
  if(match_cons(t, sym_Strategies_1))
    {
      k_13 = ATgetArgument(t, 0);
      t = t_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  ATerm r_14 (ATerm t)
  {
    ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,l_14 = NULL;
    ATerm t_14 (ATerm t)
    {
      ATerm m_14 = NULL,n_14 = NULL;
      ATerm u_14 (ATerm t)
      {
        ATerm o_14 = NULL,p_14 = NULL;
        t = not_null(n_14);
        if(((o_14 != NULL) && (o_14 != t)))
          _fail(t);
        else
          o_14 = t;
        t = not_null(n_14);
        {
          ATerm q_14 = NULL;
          ATerm v_14 (ATerm t)
          {
            t = not_null(q_14);
            if(((p_14 != NULL) && (p_14 != t)))
              _fail(t);
            else
              p_14 = t;
            t = not_null(q_14);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_14)), not_null(m_14)), not_null(j_14));
          if(((q_14 != NULL) && (q_14 != t)))
            _fail(t);
          else
            q_14 = t;
          t = v_14(t);
          t = not_null(p_14);
        }
        return(t);
      }
      t = not_null(l_14);
      if(((m_14 != NULL) && (m_14 != t)))
        _fail(t);
      else
        m_14 = t;
      t = not_null(i_14);
      t = o_66(t);
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      t = u_14(t);
      return(t);
    }
    t = not_null(d_14);
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = not_null(e_14);
    if(((h_14 != NULL) && (h_14 != t)))
      _fail(t);
    else
      h_14 = t;
    t = not_null(f_14);
    if(((i_14 != NULL) && (i_14 != t)))
      _fail(t);
    else
      i_14 = t;
    t = not_null(d_14);
    {
      ATerm k_14 = NULL;
      ATerm s_14 (ATerm t)
      {
        t = not_null(k_14);
        if(((j_14 != NULL) && (j_14 != t)))
          _fail(t);
        else
          j_14 = t;
        t = not_null(k_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_14));
      if(((k_14 != NULL) && (k_14 != t)))
        _fail(t);
      else
        k_14 = t;
      t = s_14(t);
      t = not_null(h_14);
      t = n_66(t);
      if(((l_14 != NULL) && (l_14 != t)))
        _fail(t);
      else
        l_14 = t;
      t = t_14(t);
    }
    return(t);
  }
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = not_null(d_14);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
      t = r_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  ATerm l_15 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL;
    ATerm n_15 (ATerm t)
    {
      ATerm i_15 = NULL,j_15 = NULL;
      t = not_null(h_15);
      if(((i_15 != NULL) && (i_15 != t)))
        _fail(t);
      else
        i_15 = t;
      t = not_null(h_15);
      {
        ATerm k_15 = NULL;
        ATerm o_15 (ATerm t)
        {
          t = not_null(k_15);
          if(((j_15 != NULL) && (j_15 != t)))
            _fail(t);
          else
            j_15 = t;
          t = not_null(k_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_15)), not_null(f_15));
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = o_15(t);
        t = not_null(j_15);
      }
      return(t);
    }
    t = not_null(b_15);
    if(((d_15 != NULL) && (d_15 != t)))
      _fail(t);
    else
      d_15 = t;
    t = not_null(c_15);
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = not_null(b_15);
    {
      ATerm g_15 = NULL;
      ATerm m_15 (ATerm t)
      {
        t = not_null(g_15);
        if(((f_15 != NULL) && (f_15 != t)))
          _fail(t);
        else
          f_15 = t;
        t = not_null(g_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_15));
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = m_15(t);
      t = not_null(e_15);
      t = w_66(t);
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = n_15(t);
    }
    return(t);
  }
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = not_null(b_15);
  if(match_cons(t, sym_Specification_1))
    {
      c_15 = ATgetArgument(t, 0);
      t = l_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2_0 (ATerm e_65 (ATerm), ATerm f_65 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  ATerm j_16 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL;
    ATerm l_16 (ATerm t)
    {
      ATerm e_16 = NULL,f_16 = NULL;
      ATerm m_16 (ATerm t)
      {
        ATerm g_16 = NULL,h_16 = NULL;
        t = not_null(f_16);
        if(((g_16 != NULL) && (g_16 != t)))
          _fail(t);
        else
          g_16 = t;
        t = not_null(f_16);
        {
          ATerm i_16 = NULL;
          ATerm n_16 (ATerm t)
          {
            t = not_null(i_16);
            if(((h_16 != NULL) && (h_16 != t)))
              _fail(t);
            else
              h_16 = t;
            t = not_null(i_16);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_16), not_null(g_16)), not_null(b_16));
          if(((i_16 != NULL) && (i_16 != t)))
            _fail(t);
          else
            i_16 = t;
          t = n_16(t);
          t = not_null(h_16);
        }
        return(t);
      }
      t = not_null(d_16);
      if(((e_16 != NULL) && (e_16 != t)))
        _fail(t);
      else
        e_16 = t;
      t = not_null(a_16);
      t = f_65(t);
      if(((f_16 != NULL) && (f_16 != t)))
        _fail(t);
      else
        f_16 = t;
      t = m_16(t);
      return(t);
    }
    t = not_null(v_15);
    if(((y_15 != NULL) && (y_15 != t)))
      _fail(t);
    else
      y_15 = t;
    t = not_null(w_15);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(x_15);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = not_null(v_15);
    {
      ATerm c_16 = NULL;
      ATerm k_16 (ATerm t)
      {
        t = not_null(c_16);
        if(((b_16 != NULL) && (b_16 != t)))
          _fail(t);
        else
          b_16 = t;
        t = not_null(c_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_15));
      if(((c_16 != NULL) && (c_16 != t)))
        _fail(t);
      else
        c_16 = t;
      t = k_16(t);
      t = not_null(z_15);
      t = e_65(t);
      if(((d_16 != NULL) && (d_16 != t)))
        _fail(t);
      else
        d_16 = t;
      t = l_16(t);
    }
    return(t);
  }
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = not_null(v_15);
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      t = j_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_16;
  s_16 = t;
  {
    ATerm p_16 = NULL;
    ATerm q_16 = NULL;
    ATerm r_16 (ATerm t)
    {
      t = not_null(q_16);
      if(((p_16 != NULL) && (p_16 != t)))
        _fail(t);
      else
        p_16 = t;
      t = not_null(q_16);
      return(t);
    }
    t = term_k_10;
    t = whoami_0_0(t);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = r_16(t);
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), not_null(p_16)), term_a_17));
    t = printnl_0_0(t);
    t = term_i_13;
    t = exit_0_0(t);
  }
  t = s_16;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  ATerm z_16 (ATerm t)
  {
    ATerm x_16 = NULL,y_16 = NULL;
    t = not_null(v_16);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    t = not_null(w_16);
    if(((y_16 != NULL) && (y_16 != t)))
      _fail(t);
    else
      y_16 = t;
    t = not_null(u_16);
    {
      ATerm f_17;
      f_17 = t;
      t = SSL_printnl(not_null(x_16), not_null(y_16));
      t = f_17;
    }
    return(t);
  }
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = not_null(u_16);
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      t = z_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  ATerm d_17 (ATerm t)
  {
    ATerm c_17 = NULL;
    t = not_null(b_17);
    if(((c_17 != NULL) && (c_17 != t)))
      _fail(t);
    else
      c_17 = t;
    t = not_null(b_17);
    t = SSL_implode_string(not_null(c_17));
    return(t);
  }
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  t = d_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      {
        ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
        ATerm m_17 (ATerm t)
        {
          ATerm j_17 = NULL,k_17 = NULL;
          t = not_null(h_17);
          if(((j_17 != NULL) && (j_17 != t)))
            _fail(t);
          else
            j_17 = t;
          t = not_null(i_17);
          if(((k_17 != NULL) && (k_17 != t)))
            _fail(t);
          else
            k_17 = t;
          t = not_null(j_17);
          {
            ATerm f_1 (ATerm t)
            {
              t = not_null(k_17);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(f_1, t);
          }
          return(t);
        }
        if(((g_17 != NULL) && (g_17 != t)))
          _fail(t);
        else
          g_17 = t;
        t = not_null(g_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_17 = ATgetFirst((ATermList) t);
            i_17 = (ATerm) ATgetNext((ATermList) t);
            t = m_17(t);
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
  ATerm s_17 = NULL;
  ATerm a_18 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL;
    t = not_null(s_17);
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    t = not_null(s_17);
    {
      ATerm v_17 = NULL;
      ATerm b_18 (ATerm t)
      {
        ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
        ATerm c_18 (ATerm t)
        {
          t = not_null(z_17);
          if(((u_17 != NULL) && (u_17 != t)))
            _fail(t);
          else
            u_17 = t;
          t = not_null(x_17);
          return(t);
        }
        t = not_null(v_17);
        if(((w_17 != NULL) && (w_17 != t)))
          _fail(t);
        else
          w_17 = t;
        t = not_null(v_17);
        t = SSL_explode_term(not_null(w_17));
        if(((x_17 != NULL) && (x_17 != t)))
          _fail(t);
        else
          x_17 = t;
        t = not_null(x_17);
        if(match_cons(t, sym__2))
          {
            y_17 = ATgetArgument(t, 0);
            z_17 = ATgetArgument(t, 1);
            t = not_null(y_17);
            if(match_string(t, ""))
              {
                t = c_18(t);
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
      t = not_null(t_17);
      if(((v_17 != NULL) && (v_17 != t)))
        _fail(t);
      else
        v_17 = t;
      t = b_18(t);
      t = not_null(u_17);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((s_17 != NULL) && (s_17 != t)))
    _fail(t);
  else
    s_17 = t;
  t = a_18(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm d_18 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_18, t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = Nil_0_0(t);
        t = a_88(t);
      }
    return(t);
  }
  t = d_18(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  ATerm l_18 (ATerm t)
  {
    ATerm j_18 = NULL,k_18 = NULL;
    t = not_null(h_18);
    if(((k_18 != NULL) && (k_18 != t)))
      _fail(t);
    else
      k_18 = t;
    t = not_null(i_18);
    if(((j_18 != NULL) && (j_18 != t)))
      _fail(t);
    else
      j_18 = t;
    t = not_null(k_18);
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(j_18);
        return(t);
      }
      t = at_end_1_0(g_1, t);
    }
    return(t);
  }
  if(((g_18 != NULL) && (g_18 != t)))
    _fail(t);
  else
    g_18 = t;
  t = not_null(g_18);
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      t = l_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm n_18 = NULL;
  ATerm p_18 (ATerm t)
  {
    ATerm o_18 = NULL;
    t = not_null(n_18);
    if(((o_18 != NULL) && (o_18 != t)))
      _fail(t);
    else
      o_18 = t;
    t = not_null(n_18);
    t = SSL_explode_string(not_null(o_18));
    return(t);
  }
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = p_18(t);
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
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm m_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_1, t);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = m_18;
            {
              ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
              ATerm h_19 (ATerm t)
              {
                ATerm z_18 = NULL;
                t = not_null(x_18);
                if(((z_18 != NULL) && (z_18 != t)))
                  _fail(t);
                else
                  z_18 = t;
                t = not_null(z_18);
                return(t);
              }
              ATerm i_19 (ATerm t)
              {
                ATerm a_19 = NULL;
                t = not_null(x_18);
                if(((a_19 != NULL) && (a_19 != t)))
                  _fail(t);
                else
                  a_19 = t;
                t = not_null(a_19);
                {
                  ATerm r_18 = t;
                  int s_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_18);
                    }
                  else
                    {
                      t = r_18;
                      {
                        ATerm i_1 (ATerm t)
                        {
                          t = term_t_18;
                          return(t);
                        }
                        t = debug_1_0(i_1, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm j_19 (ATerm t)
              {
                ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,f_19 = NULL;
                t = not_null(x_18);
                if(((b_19 != NULL) && (b_19 != t)))
                  _fail(t);
                else
                  b_19 = t;
                t = not_null(y_18);
                if(((c_19 != NULL) && (c_19 != t)))
                  _fail(t);
                else
                  c_19 = t;
                t = not_null(w_18);
                {
                  ATerm u_18;
                  u_18 = t;
                  {
                    ATerm e_19 = NULL;
                    ATerm k_19 (ATerm t)
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
                    t = eval_config_0_0(t);
                    if(((e_19 != NULL) && (e_19 != t)))
                      _fail(t);
                    else
                      e_19 = t;
                    t = k_19(t);
                  }
                  t = u_18;
                  {
                    ATerm g_19 = NULL;
                    ATerm l_19 (ATerm t)
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
                    t = eval_config_0_0(t);
                    if(((g_19 != NULL) && (g_19 != t)))
                      _fail(t);
                    else
                      g_19 = t;
                    t = l_19(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(f_19));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((w_18 != NULL) && (w_18 != t)))
                _fail(t);
              else
                w_18 = t;
              t = not_null(w_18);
              if(match_cons(t, sym_Path_1))
                {
                  x_18 = ATgetArgument(t, 0);
                  t = h_19(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_18 = ATgetArgument(t, 0);
                      t = i_19(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_18 = ATgetArgument(t, 0);
                          y_18 = ATgetArgument(t, 1);
                          t = j_19(t);
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
  ATerm o_19 = NULL;
  ATerm s_19 (ATerm t)
  {
    ATerm p_19 = NULL;
    t = not_null(o_19);
    if(((p_19 != NULL) && (p_19 != t)))
      _fail(t);
    else
      p_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(p_19));
    t = table_get_0_0(t);
    {
      ATerm j_1 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm m_19;
          m_19 = t;
          {
            ATerm q_19 = NULL;
            ATerm r_19 = NULL;
            ATerm t_19 (ATerm t)
            {
              t = not_null(r_19);
              if(((q_19 != NULL) && (q_19 != t)))
                _fail(t);
              else
                q_19 = t;
              t = not_null(r_19);
              return(t);
            }
            if(((r_19 != NULL) && (r_19 != t)))
              _fail(t);
            else
              r_19 = t;
            t = t_19(t);
            t = (ATerm) ATmakeAppl(sym__3, term_v_18, not_null(p_19), not_null(q_19));
            t = table_put_0_0(t);
          }
          t = m_19;
        }
        return(t);
      }
      t = try_1_0(j_1, t);
    }
    return(t);
  }
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = s_19(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm n_19;
    n_19 = t;
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      ATerm x_19 (ATerm t)
      {
        t = not_null(w_19);
        if(((v_19 != NULL) && (v_19 != t)))
          _fail(t);
        else
          v_19 = t;
        t = not_null(w_19);
        return(t);
      }
      t = term_u_19;
      t = get_config_0_0(t);
      if(((w_19 != NULL) && (w_19 != t)))
        _fail(t);
      else
        w_19 = t;
      t = x_19(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), term_y_19);
      t = geq_0_0(t);
    }
    t = n_19;
    t = s_103(t);
    return(t);
  }
  t = try_1_0(k_1, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  ATerm k_20 (ATerm t)
  {
    ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
    t = not_null(d_20);
    if(((g_20 != NULL) && (g_20 != t)))
      _fail(t);
    else
      g_20 = t;
    t = not_null(f_20);
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    t = not_null(c_20);
    t = SSL_fputc(not_null(g_20), not_null(h_20));
    {
      ATerm j_20 = NULL;
      ATerm l_20 (ATerm t)
      {
        t = not_null(j_20);
        if(((i_20 != NULL) && (i_20 != t)))
          _fail(t);
        else
          i_20 = t;
        t = not_null(j_20);
        return(t);
      }
      if(((j_20 != NULL) && (j_20 != t)))
        _fail(t);
      else
        j_20 = t;
      t = l_20(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_20));
    }
    return(t);
  }
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  t = not_null(c_20);
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      t = not_null(e_20);
      if(match_cons(t, sym_Stream_1))
        {
          f_20 = ATgetArgument(t, 0);
          t = k_20(t);
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
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  ATerm y_20 (ATerm t)
  {
    ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
    t = not_null(s_20);
    if(((u_20 != NULL) && (u_20 != t)))
      _fail(t);
    else
      u_20 = t;
    t = not_null(t_20);
    if(((v_20 != NULL) && (v_20 != t)))
      _fail(t);
    else
      v_20 = t;
    t = not_null(q_20);
    t = SSL_write_term_to_stream_text(not_null(u_20), not_null(v_20));
    {
      ATerm x_20 = NULL;
      ATerm z_20 (ATerm t)
      {
        t = not_null(x_20);
        if(((w_20 != NULL) && (w_20 != t)))
          _fail(t);
        else
          w_20 = t;
        t = not_null(x_20);
        return(t);
      }
      if(((x_20 != NULL) && (x_20 != t)))
        _fail(t);
      else
        x_20 = t;
      t = z_20(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_20));
    }
    return(t);
  }
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  t = not_null(q_20);
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
      t = not_null(r_20);
      if(match_cons(t, sym_Stream_1))
        {
          s_20 = ATgetArgument(t, 0);
          t = y_20(t);
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
  ATerm l_1 (ATerm t)
  {
    ATerm b_21 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm c_21 = NULL;
      ATerm d_21 (ATerm t)
      {
        t = not_null(c_21);
        if(((b_21 != NULL) && (b_21 != t)))
          _fail(t);
        else
          b_21 = t;
        t = not_null(c_21);
        return(t);
      }
      if(((c_21 != NULL) && (c_21 != t)))
        _fail(t);
      else
        c_21 = t;
      t = d_21(t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(b_21));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(l_1, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  ATerm q_21 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
    t = not_null(k_21);
    if(((m_21 != NULL) && (m_21 != t)))
      _fail(t);
    else
      m_21 = t;
    t = not_null(l_21);
    if(((n_21 != NULL) && (n_21 != t)))
      _fail(t);
    else
      n_21 = t;
    t = not_null(i_21);
    t = SSL_write_term_to_stream_baf(not_null(m_21), not_null(n_21));
    {
      ATerm p_21 = NULL;
      ATerm r_21 (ATerm t)
      {
        t = not_null(p_21);
        if(((o_21 != NULL) && (o_21 != t)))
          _fail(t);
        else
          o_21 = t;
        t = not_null(p_21);
        return(t);
      }
      if(((p_21 != NULL) && (p_21 != t)))
        _fail(t);
      else
        p_21 = t;
      t = r_21(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_21));
    }
    return(t);
  }
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = not_null(i_21);
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
      t = not_null(j_21);
      if(match_cons(t, sym_Stream_1))
        {
          k_21 = ATgetArgument(t, 0);
          t = q_21(t);
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
ATerm WriteToFile_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  ATerm f_22 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,d_22 = NULL;
    t = not_null(x_21);
    if(((z_21 != NULL) && (z_21 != t)))
      _fail(t);
    else
      z_21 = t;
    t = not_null(y_21);
    if(((a_22 != NULL) && (a_22 != t)))
      _fail(t);
    else
      a_22 = t;
    t = not_null(z_21);
    {
      ATerm c_22 = NULL;
      ATerm g_22 (ATerm t)
      {
        t = not_null(c_22);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = not_null(c_22);
        return(t);
      }
      if(((c_22 != NULL) && (c_22 != t)))
        _fail(t);
      else
        c_22 = t;
      t = g_22(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), term_a_20);
      t = open_stream_0_0(t);
      {
        ATerm e_22 = NULL;
        ATerm h_22 (ATerm t)
        {
          t = not_null(e_22);
          if(((d_22 != NULL) && (d_22 != t)))
            _fail(t);
          else
            d_22 = t;
          t = not_null(e_22);
          return(t);
        }
        if(((e_22 != NULL) && (e_22 != t)))
          _fail(t);
        else
          e_22 = t;
        t = h_22(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(a_22));
        t = o_102(t);
        t = fclose_0_0(t);
        t = not_null(a_22);
      }
    }
    return(t);
  }
  if(((w_21 != NULL) && (w_21 != t)))
    _fail(t);
  else
    w_21 = t;
  t = not_null(w_21);
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
      t = f_22(t);
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
  ATerm m_22 = NULL;
  ATerm b_20;
  b_20 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm n_22 = NULL,o_22 = NULL;
            ATerm r_22 (ATerm t)
            {
              t = not_null(o_22);
              if(((m_22 != NULL) && (m_22 != t)))
                _fail(t);
              else
                m_22 = t;
              t = not_null(n_22);
              return(t);
            }
            if(((n_22 != NULL) && (n_22 != t)))
              _fail(t);
            else
              n_22 = t;
            t = not_null(n_22);
            if(match_cons(t, sym_Output_1))
              {
                o_22 = ATgetArgument(t, 0);
                t = r_22(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(n_1, t);
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          {
            ATerm p_22 = NULL;
            ATerm s_22 (ATerm t)
            {
              t = not_null(p_22);
              if(((m_22 != NULL) && (m_22 != t)))
                _fail(t);
              else
                m_22 = t;
              t = not_null(p_22);
              return(t);
            }
            t = term_o_20;
            if(((p_22 != NULL) && (p_22 != t)))
              _fail(t);
            else
              p_22 = t;
            t = s_22(t);
          }
        }
      return(t);
    }
    t = _2_0(m_1, _id, t);
  }
  t = b_20;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(m_22);
        return(t);
      }
      t = split_2_0(p_1, _id, t);
      return(t);
    }
    t = _2_0(_id, o_1, t);
    {
      ATerm p_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm q_22 = NULL;
              if(((q_22 != NULL) && (q_22 != t)))
                _fail(t);
              else
                q_22 = t;
              t = not_null(q_22);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(q_22);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(r_1, t);
            return(t);
          }
          t = _2_0(q_1, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = p_20;
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
ATerm apply_strategy_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  ATerm e_23 (ATerm t)
  {
    ATerm b_23 = NULL,c_23 = NULL;
    t = not_null(z_22);
    if(((b_23 != NULL) && (b_23 != t)))
      _fail(t);
    else
      b_23 = t;
    t = not_null(a_23);
    if(((c_23 != NULL) && (c_23 != t)))
      _fail(t);
    else
      c_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_23)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_22))), not_null(c_23));
    return(t);
  }
  ATerm e_21;
  e_21 = t;
  t = dtime_0_0(t);
  t = e_21;
  t = q_105(t);
  {
    ATerm f_21;
    f_21 = t;
    {
      ATerm x_22 = NULL;
      ATerm d_23 (ATerm t)
      {
        t = not_null(x_22);
        if(((w_22 != NULL) && (w_22 != t)))
          _fail(t);
        else
          w_22 = t;
        t = not_null(x_22);
        return(t);
      }
      t = dtime_0_0(t);
      if(((x_22 != NULL) && (x_22 != t)))
        _fail(t);
      else
        x_22 = t;
      t = d_23(t);
    }
    t = f_21;
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = not_null(y_22);
    if(match_cons(t, sym__2))
      {
        z_22 = ATgetArgument(t, 0);
        a_23 = ATgetArgument(t, 1);
        t = e_23(t);
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
  ATerm i_23 = NULL,j_23 = NULL;
  ATerm o_23 (ATerm t)
  {
    ATerm k_23 = NULL;
    t = not_null(i_23);
    if(((k_23 != NULL) && (k_23 != t)))
      _fail(t);
    else
      k_23 = t;
    t = not_null(j_23);
    t = SSL_fclose(not_null(k_23));
    return(t);
  }
  ATerm p_23 (ATerm t)
  {
    ATerm n_23 = NULL;
    t = not_null(j_23);
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = not_null(j_23);
    t = SSL_fclose(not_null(n_23));
    return(t);
  }
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  t = not_null(j_23);
  if(match_cons(t, sym_Stream_1))
    {
      i_23 = ATgetArgument(t, 0);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_23(t);
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  ATerm v_23 (ATerm t)
  {
    ATerm u_23 = NULL;
    t = not_null(t_23);
    if(((u_23 != NULL) && (u_23 != t)))
      _fail(t);
    else
      u_23 = t;
    t = not_null(s_23);
    t = SSL_read_term_from_stream(not_null(u_23));
    return(t);
  }
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = not_null(s_23);
  if(match_cons(t, sym_Stream_1))
    {
      t_23 = ATgetArgument(t, 0);
      t = v_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm s_21;
  s_21 = t;
  {
    ATerm y_23 = NULL,a_24 = NULL;
    ATerm t_21;
    t_21 = t;
    {
      ATerm z_23 = NULL;
      ATerm c_24 (ATerm t)
      {
        t = not_null(z_23);
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = not_null(z_23);
        return(t);
      }
      t = a_102(t);
      if(((z_23 != NULL) && (z_23 != t)))
        _fail(t);
      else
        z_23 = t;
      t = c_24(t);
    }
    t = t_21;
    {
      ATerm b_24 = NULL;
      ATerm d_24 (ATerm t)
      {
        t = not_null(b_24);
        if(((a_24 != NULL) && (a_24 != t)))
          _fail(t);
        else
          a_24 = t;
        t = not_null(b_24);
        return(t);
      }
      if(((b_24 != NULL) && (b_24 != t)))
        _fail(t);
      else
        b_24 = t;
      t = d_24(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), not_null(y_23)));
      t = printnl_0_0(t);
    }
  }
  t = s_21;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  ATerm o_24 (ATerm t)
  {
    ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
    t = not_null(i_24);
    if(((k_24 != NULL) && (k_24 != t)))
      _fail(t);
    else
      k_24 = t;
    t = not_null(j_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(h_24);
    t = SSL_fopen(not_null(k_24), not_null(l_24));
    {
      ATerm n_24 = NULL;
      ATerm p_24 (ATerm t)
      {
        t = not_null(n_24);
        if(((m_24 != NULL) && (m_24 != t)))
          _fail(t);
        else
          m_24 = t;
        t = not_null(n_24);
        return(t);
      }
      if(((n_24 != NULL) && (n_24 != t)))
        _fail(t);
      else
        n_24 = t;
      t = p_24(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_24));
    }
    return(t);
  }
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = not_null(h_24);
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
      t = o_24(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  ATerm t_24 (ATerm t)
  {
    ATerm s_24 = NULL;
    t = not_null(r_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(r_24);
    t = SSL_is_string(not_null(s_24));
    return(t);
  }
  if(((r_24 != NULL) && (r_24 != t)))
    _fail(t);
  else
    r_24 = t;
  t = t_24(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_24 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_24 = NULL;
    ATerm x_24 (ATerm t)
    {
      t = not_null(w_24);
      if(((v_24 != NULL) && (v_24 != t)))
        _fail(t);
      else
        v_24 = t;
      t = not_null(w_24);
      return(t);
    }
    if(((w_24 != NULL) && (w_24 != t)))
      _fail(t);
    else
      w_24 = t;
    t = x_24(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_24));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm a_25 = NULL;
    ATerm b_25 (ATerm t)
    {
      t = not_null(a_25);
      if(((z_24 != NULL) && (z_24 != t)))
        _fail(t);
      else
        z_24 = t;
      t = not_null(a_25);
      return(t);
    }
    if(((a_25 != NULL) && (a_25 != t)))
      _fail(t);
    else
      a_25 = t;
    t = b_25(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_24));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm e_25 = NULL;
    ATerm f_25 (ATerm t)
    {
      t = not_null(e_25);
      if(((d_25 != NULL) && (d_25 != t)))
        _fail(t);
      else
        d_25 = t;
      t = not_null(e_25);
      return(t);
    }
    if(((e_25 != NULL) && (e_25 != t)))
      _fail(t);
    else
      e_25 = t;
    t = f_25(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_25));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm k_25 = NULL;
  ATerm l_25 (ATerm t)
  {
    t = not_null(k_25);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm m_25 (ATerm t)
  {
    t = not_null(k_25);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm n_25 (ATerm t)
  {
    t = not_null(k_25);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = not_null(k_25);
  if(match_cons(t, sym_stderr_0))
    {
      t = l_25(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_25(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = n_25(t);
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
  ATerm u_25 = NULL;
  ATerm f_26 (ATerm t)
  {
    ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
    t = not_null(u_25);
    if(((v_25 != NULL) && (v_25 != t)))
      _fail(t);
    else
      v_25 = t;
    t = not_null(u_25);
    {
      ATerm y_25 = NULL;
      ATerm g_26 (ATerm t)
      {
        ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
        ATerm h_26 (ATerm t)
        {
          t = not_null(d_26);
          if(((x_25 != NULL) && (x_25 != t)))
            _fail(t);
          else
            x_25 = t;
          t = not_null(e_26);
          if(((w_25 != NULL) && (w_25 != t)))
            _fail(t);
          else
            w_25 = t;
          t = not_null(a_26);
          return(t);
        }
        t = not_null(y_25);
        if(((z_25 != NULL) && (z_25 != t)))
          _fail(t);
        else
          z_25 = t;
        t = not_null(y_25);
        t = SSL_explode_term(not_null(z_25));
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = not_null(a_26);
        if(match_cons(t, sym__2))
          {
            b_26 = ATgetArgument(t, 0);
            c_26 = ATgetArgument(t, 1);
            t = not_null(b_26);
            if(match_string(t, ""))
              {
                t = not_null(c_26);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_26 = ATgetFirst((ATermList) t);
                    e_26 = (ATerm) ATgetNext((ATermList) t);
                    t = h_26(t);
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
      t = not_null(v_25);
      if(((y_25 != NULL) && (y_25 != t)))
        _fail(t);
      else
        y_25 = t;
      t = g_26(t);
      t = not_null(x_25);
    }
    return(t);
  }
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = f_26(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  ATerm s_26 (ATerm t)
  {
    t = not_null(m_26);
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm p_26 = NULL,q_26 = NULL;
                  ATerm t_26 (ATerm t)
                  {
                    ATerm r_26 = NULL;
                    t = not_null(q_26);
                    if(((r_26 != NULL) && (r_26 != t)))
                      _fail(t);
                    else
                      r_26 = t;
                    t = not_null(r_26);
                    return(t);
                  }
                  if(((p_26 != NULL) && (p_26 != t)))
                    _fail(t);
                  else
                    p_26 = t;
                  t = not_null(p_26);
                  if(match_cons(t, sym_Path_1))
                    {
                      q_26 = ATgetArgument(t, 0);
                      t = t_26(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(u_1, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = not_null(m_26);
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
      t = s_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_26 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_26 = NULL;
      ATerm x_26 = NULL;
      ATerm a_27 (ATerm t)
      {
        t = not_null(x_26);
        if(((w_26 != NULL) && (w_26 != t)))
          _fail(t);
        else
          w_26 = t;
        t = not_null(x_26);
        return(t);
      }
      if(((x_26 != NULL) && (x_26 != t)))
        _fail(t);
      else
        x_26 = t;
      t = a_27(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), term_t_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_u_22;
          return(t);
        }
        t = debug_1_0(v_1, t);
        _fail(t);
      }
    }
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm z_26 = NULL;
      ATerm b_27 (ATerm t)
      {
        t = not_null(z_26);
        if(((y_26 != NULL) && (y_26 != t)))
          _fail(t);
        else
          y_26 = t;
        t = not_null(z_26);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((z_26 != NULL) && (z_26 != t)))
        _fail(t);
      else
        z_26 = t;
      t = b_27(t);
    }
    t = v_22;
    t = fclose_0_0(t);
    t = not_null(y_26);
  }
  return(t);
}
ATerm split_2_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,g_27 = NULL;
  ATerm f_23;
  f_23 = t;
  {
    ATerm f_27 = NULL;
    ATerm i_27 (ATerm t)
    {
      t = not_null(f_27);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = not_null(f_27);
      return(t);
    }
    t = v_84(t);
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    t = i_27(t);
  }
  t = f_23;
  {
    ATerm h_27 = NULL;
    ATerm j_27 (ATerm t)
    {
      t = not_null(h_27);
      if(((g_27 != NULL) && (g_27 != t)))
        _fail(t);
      else
        g_27 = t;
      t = not_null(h_27);
      return(t);
    }
    t = w_84(t);
    if(((h_27 != NULL) && (h_27 != t)))
      _fail(t);
    else
      h_27 = t;
    t = j_27(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), not_null(g_27));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm h_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          ATerm o_27 = NULL,p_27 = NULL;
          ATerm r_27 (ATerm t)
          {
            t = not_null(p_27);
            if(((n_27 != NULL) && (n_27 != t)))
              _fail(t);
            else
              n_27 = t;
            t = not_null(o_27);
            return(t);
          }
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = not_null(o_27);
          if(match_cons(t, sym_Input_1))
            {
              p_27 = ATgetArgument(t, 0);
              t = r_27(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(w_1, t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = h_23;
        {
          ATerm q_27 = NULL;
          ATerm s_27 (ATerm t)
          {
            t = not_null(q_27);
            if(((n_27 != NULL) && (n_27 != t)))
              _fail(t);
            else
              n_27 = t;
            t = not_null(q_27);
            return(t);
          }
          t = term_m_23;
          if(((q_27 != NULL) && (q_27 != t)))
            _fail(t);
          else
            q_27 = t;
          t = s_27(t);
        }
      }
  }
  t = g_23;
  {
    ATerm x_1 (ATerm t)
    {
      t = not_null(n_27);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, x_1, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm m_29 = NULL;
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
    t = not_null(m_29);
    if(match_string(t, "-k"))
      {
        t = not_null(m_29);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(m_29);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm q_23;
    q_23 = t;
    {
      ATerm n_29 = NULL;
      ATerm o_29 = NULL;
      ATerm p_29 (ATerm t)
      {
        t = not_null(o_29);
        if(((n_29 != NULL) && (n_29 != t)))
          _fail(t);
        else
          n_29 = t;
        t = not_null(o_29);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((o_29 != NULL) && (o_29 != t)))
        _fail(t);
      else
        o_29 = t;
      t = p_29(t);
      t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(n_29));
      t = set_config_0_0(t);
    }
    t = q_23;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = ArgOption_3_0(y_1, z_1, a_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm r_29 = NULL;
  ATerm t_29 (ATerm t)
  {
    ATerm s_29 = NULL;
    t = not_null(r_29);
    if(((s_29 != NULL) && (s_29 != t)))
      _fail(t);
    else
      s_29 = t;
    t = not_null(r_29);
    t = SSL_string_to_int(not_null(s_29));
    return(t);
  }
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  t = t_29(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm z_29 = NULL;
        if(((z_29 != NULL) && (z_29 != t)))
          _fail(t);
        else
          z_29 = t;
        t = not_null(z_29);
        if(match_string(t, "-S"))
          {
            t = not_null(z_29);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(z_29);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_f_24;
        t = set_config_0_0(t);
        t = term_g_24;
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        t = term_q_24;
        return(t);
      }
      t = Option_3_0(b_2, c_2, d_2, t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = x_23;
      {
        ATerm u_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 (ATerm t)
            {
              ATerm a_30 = NULL;
              if(((a_30 != NULL) && (a_30 != t)))
                _fail(t);
              else
                a_30 = t;
              t = not_null(a_30);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(a_30);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              ATerm d_30 = NULL;
              ATerm c_25;
              c_25 = t;
              {
                ATerm b_30 = NULL;
                ATerm c_30 = NULL;
                ATerm g_30 (ATerm t)
                {
                  t = not_null(c_30);
                  if(((b_30 != NULL) && (b_30 != t)))
                    _fail(t);
                  else
                    b_30 = t;
                  t = not_null(c_30);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((c_30 != NULL) && (c_30 != t)))
                  _fail(t);
                else
                  c_30 = t;
                t = g_30(t);
                t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(b_30));
                t = set_config_0_0(t);
              }
              t = c_25;
              {
                ATerm e_30 = NULL;
                ATerm h_30 (ATerm t)
                {
                  t = not_null(e_30);
                  if(((d_30 != NULL) && (d_30 != t)))
                    _fail(t);
                  else
                    d_30 = t;
                  t = not_null(e_30);
                  return(t);
                }
                if(((e_30 != NULL) && (e_30 != t)))
                  _fail(t);
                else
                  e_30 = t;
                t = h_30(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_30));
              }
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              t = term_g_25;
              return(t);
            }
            t = ArgOption_3_0(e_2, f_2, g_2, t);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = u_24;
            {
              ATerm k_2 (ATerm t)
              {
                ATerm f_30 = NULL;
                if(((f_30 != NULL) && (f_30 != t)))
                  _fail(t);
                else
                  f_30 = t;
                t = not_null(f_30);
                if(match_string(t, "-s"))
                  {
                    t = not_null(f_30);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_2 (ATerm t)
              {
                t = term_i_25;
                t = set_config_0_0(t);
                t = term_j_25;
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_o_25;
                return(t);
              }
              t = Option_3_0(k_2, l_2, m_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm l_30 = NULL;
    if(((l_30 != NULL) && (l_30 != t)))
      _fail(t);
    else
      l_30 = t;
    t = not_null(l_30);
    if(match_string(t, "-o"))
      {
        t = not_null(l_30);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(l_30);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm o_30 = NULL;
    ATerm r_25;
    r_25 = t;
    {
      ATerm m_30 = NULL;
      ATerm n_30 = NULL;
      ATerm q_30 (ATerm t)
      {
        t = not_null(n_30);
        if(((m_30 != NULL) && (m_30 != t)))
          _fail(t);
        else
          m_30 = t;
        t = not_null(n_30);
        return(t);
      }
      if(((n_30 != NULL) && (n_30 != t)))
        _fail(t);
      else
        n_30 = t;
      t = q_30(t);
      t = (ATerm) ATmakeAppl(sym__2, term_s_25, not_null(m_30));
      t = set_config_0_0(t);
    }
    t = r_25;
    {
      ATerm p_30 = NULL;
      ATerm r_30 (ATerm t)
      {
        t = not_null(p_30);
        if(((o_30 != NULL) && (o_30 != t)))
          _fail(t);
        else
          o_30 = t;
        t = not_null(p_30);
        return(t);
      }
      if(((p_30 != NULL) && (p_30 != t)))
        _fail(t);
      else
        p_30 = t;
      t = r_30(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_30));
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_t_25;
    return(t);
  }
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm t_30 = NULL;
          if(((t_30 != NULL) && (t_30 != t)))
            _fail(t);
          else
            t_30 = t;
          t = not_null(t_30);
          if(match_string(t, "-b"))
            {
              t = not_null(t_30);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          t = term_l_26;
          t = set_config_0_0(t);
          t = term_u_26;
          return(t);
        }
        ATerm w_2 (ATerm t)
        {
          t = term_v_26;
          return(t);
        }
        t = Option_3_0(u_2, v_2, w_2, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm j_31 (ATerm t)
  {
    t = not_null(z_30);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm k_31 (ATerm t)
  {
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
    t = not_null(a_31);
    if(((e_31 != NULL) && (e_31 != t)))
      _fail(t);
    else
      e_31 = t;
    t = not_null(c_31);
    if(((f_31 != NULL) && (f_31 != t)))
      _fail(t);
    else
      f_31 = t;
    t = not_null(d_31);
    if(((g_31 != NULL) && (g_31 != t)))
      _fail(t);
    else
      g_31 = t;
    t = not_null(z_30);
    {
      ATerm c_27;
      c_27 = t;
      t = not_null(e_31);
      t = h_0(t);
      t = c_27;
      {
        ATerm i_31 = NULL;
        ATerm l_31 (ATerm t)
        {
          t = not_null(i_31);
          if(((h_31 != NULL) && (h_31 != t)))
            _fail(t);
          else
            h_31 = t;
          t = not_null(i_31);
          return(t);
        }
        t = not_null(f_31);
        t = k_0(t);
        if(((i_31 != NULL) && (i_31 != t)))
          _fail(t);
        else
          i_31 = t;
        t = l_31(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(g_31)), not_null(h_31));
      }
    }
    return(t);
  }
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = not_null(z_30);
  if(match_string(t, "register-usage-info"))
    {
      t = j_31(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_31 = ATgetFirst((ATermList) t);
          b_31 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(b_31);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_31 = ATgetFirst((ATermList) t);
              d_31 = (ATerm) ATgetNext((ATermList) t);
              t = k_31(t);
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
  ATerm x_2 (ATerm t)
  {
    ATerm p_31 = NULL;
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = not_null(p_31);
    if(match_string(t, "-i"))
      {
        t = not_null(p_31);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(p_31);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm s_31 = NULL;
    ATerm d_27;
    d_27 = t;
    {
      ATerm q_31 = NULL;
      ATerm r_31 = NULL;
      ATerm u_31 (ATerm t)
      {
        t = not_null(r_31);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = not_null(r_31);
        return(t);
      }
      if(((r_31 != NULL) && (r_31 != t)))
        _fail(t);
      else
        r_31 = t;
      t = u_31(t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_27, not_null(q_31));
      t = set_config_0_0(t);
    }
    t = d_27;
    {
      ATerm t_31 = NULL;
      ATerm v_31 (ATerm t)
      {
        t = not_null(t_31);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = not_null(t_31);
        return(t);
      }
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      t = v_31(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_31));
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_l_27;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = m_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm y_31 = NULL;
    ATerm z_31 (ATerm t)
    {
      t = not_null(y_31);
      if(((x_31 != NULL) && (x_31 != t)))
        _fail(t);
      else
        x_31 = t;
      t = not_null(y_31);
      return(t);
    }
    t = term_k_10;
    t = whoami_0_0(t);
    if(((y_31 != NULL) && (y_31 != t)))
      _fail(t);
    else
      y_31 = t;
    t = z_31(t);
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, term_w_27), not_null(x_31)));
    t = printnl_0_0(t);
    t = term_i_13;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  ATerm d_32 (ATerm t)
  {
    ATerm c_32 = NULL;
    t = not_null(b_32);
    if(((c_32 != NULL) && (c_32 != t)))
      _fail(t);
    else
      c_32 = t;
    t = not_null(b_32);
    t = SSL_TicksToSeconds(not_null(c_32));
    return(t);
  }
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  t = d_32(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  ATerm l_32 (ATerm t)
  {
    ATerm j_32 = NULL,k_32 = NULL;
    t = not_null(h_32);
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    t = not_null(i_32);
    if(((k_32 != NULL) && (k_32 != t)))
      _fail(t);
    else
      k_32 = t;
    t = not_null(g_32);
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(j_32), not_null(k_32));
          ;
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          t = SSL_addr(not_null(j_32), not_null(k_32));
        }
    }
    return(t);
  }
  if(((g_32 != NULL) && (g_32 != t)))
    _fail(t);
  else
    g_32 = t;
  t = not_null(g_32);
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
      t = l_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = j_92(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
        ATerm y_32 (ATerm t)
        {
          ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
          t = not_null(s_32);
          if(((u_32 != NULL) && (u_32 != t)))
            _fail(t);
          else
            u_32 = t;
          t = not_null(t_32);
          if(((v_32 != NULL) && (v_32 != t)))
            _fail(t);
          else
            v_32 = t;
          t = not_null(r_32);
          {
            ATerm x_32 = NULL;
            ATerm z_32 (ATerm t)
            {
              t = not_null(x_32);
              if(((w_32 != NULL) && (w_32 != t)))
                _fail(t);
              else
                w_32 = t;
              t = not_null(x_32);
              return(t);
            }
            t = not_null(v_32);
            t = foldr_2_0(j_92, k_92, t);
            if(((x_32 != NULL) && (x_32 != t)))
              _fail(t);
            else
              x_32 = t;
            t = z_32(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), not_null(w_32));
            t = k_92(t);
          }
          return(t);
        }
        if(((r_32 != NULL) && (r_32 != t)))
          _fail(t);
        else
          r_32 = t;
        t = not_null(r_32);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_32 = ATgetFirst((ATermList) t);
            t_32 = (ATerm) ATgetNext((ATermList) t);
            t = y_32(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t)
{
  ATerm e_33 = NULL;
  ATerm m_33 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL;
    t = not_null(e_33);
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    t = not_null(e_33);
    {
      ATerm h_33 = NULL;
      ATerm n_33 (ATerm t)
      {
        ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
        ATerm o_33 (ATerm t)
        {
          t = not_null(l_33);
          if(((g_33 != NULL) && (g_33 != t)))
            _fail(t);
          else
            g_33 = t;
          t = not_null(j_33);
          return(t);
        }
        t = not_null(h_33);
        if(((i_33 != NULL) && (i_33 != t)))
          _fail(t);
        else
          i_33 = t;
        t = not_null(h_33);
        t = SSL_explode_term(not_null(i_33));
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
        t = not_null(j_33);
        if(match_cons(t, sym__2))
          {
            k_33 = ATgetArgument(t, 0);
            l_33 = ATgetArgument(t, 1);
            t = o_33(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(f_33);
      if(((h_33 != NULL) && (h_33 != t)))
        _fail(t);
      else
        h_33 = t;
      t = n_33(t);
      t = not_null(g_33);
      t = foldr_2_0(h_90, i_90, t);
    }
    return(t);
  }
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  t = m_33(t);
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
    ATerm a_3 (ATerm t)
    {
      t = term_h_13;
      return(t);
    }
    t = crush_2_0(a_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  ATerm w_33 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL;
    t = not_null(s_33);
    if(((u_33 != NULL) && (u_33 != t)))
      _fail(t);
    else
      u_33 = t;
    t = not_null(t_33);
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    t = not_null(r_33);
    {
      ATerm c_28;
      c_28 = t;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(u_33), not_null(v_33));
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            t = SSL_gtr(not_null(u_33), not_null(v_33));
          }
      }
      t = c_28;
    }
    return(t);
  }
  if(((r_33 != NULL) && (r_33 != t)))
    _fail(t);
  else
    r_33 = t;
  t = not_null(r_33);
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
      t = w_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
      ATerm d_34 (ATerm t)
      {
        t = not_null(b_34);
        if(((z_33 != NULL) && (z_33 != t)))
          _fail(t);
        else
          z_33 = t;
        t = not_null(c_34);
        if(((z_33 != NULL) && (z_33 != t)))
          _fail(t);
        else
          z_33 = t;
        t = not_null(a_34);
        return(t);
      }
      if(((a_34 != NULL) && (a_34 != t)))
        _fail(t);
      else
        a_34 = t;
      t = not_null(a_34);
      if(match_cons(t, sym__2))
        {
          b_34 = ATgetArgument(t, 0);
          c_34 = ATgetArgument(t, 1);
          t = d_34(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm h_28;
    h_28 = t;
    {
      ATerm f_34 = NULL;
      ATerm g_34 = NULL;
      ATerm h_34 (ATerm t)
      {
        t = not_null(g_34);
        if(((f_34 != NULL) && (f_34 != t)))
          _fail(t);
        else
          f_34 = t;
        t = not_null(g_34);
        return(t);
      }
      t = term_u_19;
      t = get_config_0_0(t);
      if(((g_34 != NULL) && (g_34 != t)))
        _fail(t);
      else
        g_34 = t;
      t = h_34(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), term_i_13);
      t = geq_0_0(t);
    }
    t = h_28;
    t = r_103(t);
    return(t);
  }
  t = try_1_0(z_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm k_34 = NULL,m_34 = NULL;
    ATerm i_28;
    i_28 = t;
    {
      ATerm l_34 = NULL;
      ATerm o_34 (ATerm t)
      {
        t = not_null(l_34);
        if(((k_34 != NULL) && (k_34 != t)))
          _fail(t);
        else
          k_34 = t;
        t = not_null(l_34);
        return(t);
      }
      t = run_time_0_0(t);
      if(((l_34 != NULL) && (l_34 != t)))
        _fail(t);
      else
        l_34 = t;
      t = o_34(t);
    }
    t = i_28;
    {
      ATerm n_34 = NULL;
      ATerm p_34 (ATerm t)
      {
        t = not_null(n_34);
        if(((m_34 != NULL) && (m_34 != t)))
          _fail(t);
        else
          m_34 = t;
        t = not_null(n_34);
        return(t);
      }
      t = term_k_10;
      t = whoami_0_0(t);
      if(((n_34 != NULL) && (n_34 != t)))
        _fail(t);
      else
        n_34 = t;
      t = p_34(t);
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_28), not_null(k_34)), term_j_28), not_null(m_34)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(a_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_h_13;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  ATerm a_35 (ATerm t)
  {
    ATerm v_34 = NULL,w_34 = NULL,y_34 = NULL;
    t = not_null(u_34);
    if(((v_34 != NULL) && (v_34 != t)))
      _fail(t);
    else
      v_34 = t;
    t = not_null(u_34);
    {
      ATerm l_28;
      l_28 = t;
      {
        ATerm x_34 = NULL;
        ATerm b_35 (ATerm t)
        {
          t = not_null(x_34);
          if(((w_34 != NULL) && (w_34 != t)))
            _fail(t);
          else
            w_34 = t;
          t = not_null(x_34);
          return(t);
        }
        t = SSLgetAnnotations(not_null(v_34));
        if(((x_34 != NULL) && (x_34 != t)))
          _fail(t);
        else
          x_34 = t;
        t = b_35(t);
      }
      t = l_28;
      {
        ATerm z_34 = NULL;
        ATerm c_35 (ATerm t)
        {
          t = not_null(z_34);
          if(((y_34 != NULL) && (y_34 != t)))
            _fail(t);
          else
            y_34 = t;
          t = not_null(z_34);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_34));
        if(((z_34 != NULL) && (z_34 != t)))
          _fail(t);
        else
          z_34 = t;
        t = c_35(t);
        t = not_null(y_34);
      }
    }
    return(t);
  }
  if(((u_34 != NULL) && (u_34 != t)))
    _fail(t);
  else
    u_34 = t;
  t = not_null(u_34);
  if(match_cons(t, sym_Version_0))
    {
      t = a_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              {
                ATerm r_28 = t;
                int s_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_28);
                  }
                else
                  {
                    t = r_28;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(b_4, t);
      }
    }
  t = o_106(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_35 = NULL;
  ATerm g_35 (ATerm t)
  {
    ATerm f_35 = NULL;
    t = not_null(e_35);
    if(((f_35 != NULL) && (f_35 != t)))
      _fail(t);
    else
      f_35 = t;
    t = not_null(e_35);
    t = SSL_table_create(not_null(f_35));
    return(t);
  }
  if(((e_35 != NULL) && (e_35 != t)))
    _fail(t);
  else
    e_35 = t;
  t = g_35(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm i_35 = NULL;
  ATerm k_35 (ATerm t)
  {
    ATerm j_35 = NULL;
    t = not_null(i_35);
    if(((j_35 != NULL) && (j_35 != t)))
      _fail(t);
    else
      j_35 = t;
    t = not_null(i_35);
    {
      ATerm t_28;
      t_28 = t;
      t = term_u_28;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, not_null(j_35));
      t = table_put_0_0(t);
      t = t_28;
    }
    return(t);
  }
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  t = k_35(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm o_35 (ATerm t)
  {
    ATerm n_35 = NULL;
    t = not_null(m_35);
    if(((n_35 != NULL) && (n_35 != t)))
      _fail(t);
    else
      n_35 = t;
    t = not_null(m_35);
    t = SSL_table_destroy(not_null(n_35));
    return(t);
  }
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = o_35(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm q_35 = NULL;
  ATerm s_35 (ATerm t)
  {
    ATerm r_35 = NULL;
    t = not_null(q_35);
    if(((r_35 != NULL) && (r_35 != t)))
      _fail(t);
    else
      r_35 = t;
    t = not_null(q_35);
    t = SSL_exit(not_null(r_35));
    return(t);
  }
  if(((q_35 != NULL) && (q_35 != t)))
    _fail(t);
  else
    q_35 = t;
  t = s_35(t);
  return(t);
}
ATerm long_description_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm t_35 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = Cons_2_0(k_87, t_35, t);
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  ATerm l_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    t = not_null(a_36);
    if(((d_36 != NULL) && (d_36 != t)))
      _fail(t);
    else
      d_36 = t;
    t = not_null(b_36);
    if(((e_36 != NULL) && (e_36 != t)))
      _fail(t);
    else
      e_36 = t;
    t = not_null(e_36);
    {
      ATerm y_28;
      y_28 = t;
      {
        ATerm g_36 = NULL,i_36 = NULL,k_36 = NULL;
        ATerm u_36 (ATerm t)
        {
          t = not_null(k_36);
          if(((f_36 != NULL) && (f_36 != t)))
            _fail(t);
          else
            f_36 = t;
          t = not_null(k_36);
          return(t);
        }
        ATerm z_28;
        z_28 = t;
        {
          ATerm h_36 = NULL;
          ATerm s_36 (ATerm t)
          {
            t = not_null(h_36);
            if(((g_36 != NULL) && (g_36 != t)))
              _fail(t);
            else
              g_36 = t;
            t = not_null(h_36);
            return(t);
          }
          t = f_0(t);
          if(((h_36 != NULL) && (h_36 != t)))
            _fail(t);
          else
            h_36 = t;
          t = s_36(t);
        }
        t = z_28;
        {
          ATerm j_36 = NULL;
          ATerm t_36 (ATerm t)
          {
            t = not_null(j_36);
            if(((i_36 != NULL) && (i_36 != t)))
              _fail(t);
            else
              i_36 = t;
            t = not_null(j_36);
            return(t);
          }
          t = not_null(d_36);
          t = e_0(t);
          if(((j_36 != NULL) && (j_36 != t)))
            _fail(t);
          else
            j_36 = t;
          t = t_36(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(g_36)), not_null(i_36));
          if(((k_36 != NULL) && (k_36 != t)))
            _fail(t);
          else
            k_36 = t;
          t = u_36(t);
        }
      }
      t = y_28;
      {
        ATerm c_4 (ATerm t)
        {
          t = not_null(f_36);
          return(t);
        }
        t = reverse_acc_2_0(e_0, c_4, t);
      }
    }
    return(t);
  }
  ATerm m_36 (ATerm t)
  {
    t = term_k_10;
    t = f_0(t);
    return(t);
  }
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  t = not_null(c_36);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_36 = ATgetFirst((ATermList) t);
      b_36 = (ATerm) ATgetNext((ATermList) t);
      t = l_36(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_36(t);
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
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, d_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  ATerm o_37 (ATerm t)
  {
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,k_37 = NULL;
    ATerm q_37 (ATerm t)
    {
      ATerm l_37 = NULL,m_37 = NULL;
      t = not_null(k_37);
      if(((l_37 != NULL) && (l_37 != t)))
        _fail(t);
      else
        l_37 = t;
      t = not_null(k_37);
      {
        ATerm n_37 = NULL;
        ATerm r_37 (ATerm t)
        {
          t = not_null(n_37);
          if(((m_37 != NULL) && (m_37 != t)))
            _fail(t);
          else
            m_37 = t;
          t = not_null(n_37);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_37)), not_null(e_37));
        if(((n_37 != NULL) && (n_37 != t)))
          _fail(t);
        else
          n_37 = t;
        t = r_37(t);
        t = not_null(m_37);
      }
      return(t);
    }
    t = not_null(a_37);
    if(((c_37 != NULL) && (c_37 != t)))
      _fail(t);
    else
      c_37 = t;
    t = not_null(b_37);
    if(((d_37 != NULL) && (d_37 != t)))
      _fail(t);
    else
      d_37 = t;
    t = not_null(a_37);
    {
      ATerm f_37 = NULL;
      ATerm p_37 (ATerm t)
      {
        t = not_null(f_37);
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        t = not_null(f_37);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_37));
      if(((f_37 != NULL) && (f_37 != t)))
        _fail(t);
      else
        f_37 = t;
      t = p_37(t);
      t = not_null(d_37);
      t = f_75(t);
      if(((k_37 != NULL) && (k_37 != t)))
        _fail(t);
      else
        k_37 = t;
      t = q_37(t);
    }
    return(t);
  }
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = not_null(a_37);
  if(match_cons(t, sym_Program_1))
    {
      b_37 = ATgetArgument(t, 0);
      t = o_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_37 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL;
      ATerm d_38 (ATerm t)
      {
        t = not_null(x_37);
        if(((w_37 != NULL) && (w_37 != t)))
          _fail(t);
        else
          w_37 = t;
        t = not_null(x_37);
        return(t);
      }
      t = term_x_27;
      t = get_config_0_0(t);
      if(((x_37 != NULL) && (x_37 != t)))
        _fail(t);
      else
        x_37 = t;
      t = d_38(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm y_37 = NULL;
            ATerm e_38 (ATerm t)
            {
              t = not_null(y_37);
              if(((w_37 != NULL) && (w_37 != t)))
                _fail(t);
              else
                w_37 = t;
              t = not_null(y_37);
              return(t);
            }
            if(((y_37 != NULL) && (y_37 != t)))
              _fail(t);
            else
              y_37 = t;
            t = e_38(t);
            return(t);
          }
          t = Program_1_0(f_4, t);
          return(t);
        }
        t = option_defined_1_0(e_4, t);
      }
    }
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = not_null(w_37);
        return(t);
      }
      t = short_description_1_0(h_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(g_4, t);
    t = term_c_29;
    t = echo_0_0(t);
    t = term_f_29;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm i_4 (ATerm t)
      {
        ATerm z_37 = NULL;
        ATerm a_38 = NULL;
        ATerm f_38 (ATerm t)
        {
          t = not_null(a_38);
          if(((z_37 != NULL) && (z_37 != t)))
            _fail(t);
          else
            z_37 = t;
          t = not_null(a_38);
          return(t);
        }
        if(((a_38 != NULL) && (a_38 != t)))
          _fail(t);
        else
          a_38 = t;
        t = f_38(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), term_g_29);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(i_4, t);
      {
        ATerm j_4 (ATerm t)
        {
          ATerm b_38 = NULL;
          ATerm c_38 = NULL;
          ATerm g_38 (ATerm t)
          {
            t = not_null(c_38);
            if(((b_38 != NULL) && (b_38 != t)))
              _fail(t);
            else
              b_38 = t;
            t = not_null(c_38);
            return(t);
          }
          ATerm k_4 (ATerm t)
          {
            t = not_null(w_37);
            return(t);
          }
          t = long_description_1_0(k_4, t);
          if(((c_38 != NULL) && (c_38 != t)))
            _fail(t);
          else
            c_38 = t;
          t = g_38(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(b_38)), term_h_29);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(j_4, t);
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
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm g_75 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  ATerm w_38 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,s_38 = NULL;
    ATerm z_38 (ATerm t)
    {
      ATerm t_38 = NULL,u_38 = NULL;
      t = not_null(s_38);
      if(((t_38 != NULL) && (t_38 != t)))
        _fail(t);
      else
        t_38 = t;
      t = not_null(s_38);
      {
        ATerm v_38 = NULL;
        ATerm a_39 (ATerm t)
        {
          t = not_null(v_38);
          if(((u_38 != NULL) && (u_38 != t)))
            _fail(t);
          else
            u_38 = t;
          t = not_null(v_38);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_38)), not_null(q_38));
        if(((v_38 != NULL) && (v_38 != t)))
          _fail(t);
        else
          v_38 = t;
        t = a_39(t);
        t = not_null(u_38);
      }
      return(t);
    }
    t = not_null(m_38);
    if(((o_38 != NULL) && (o_38 != t)))
      _fail(t);
    else
      o_38 = t;
    t = not_null(n_38);
    if(((p_38 != NULL) && (p_38 != t)))
      _fail(t);
    else
      p_38 = t;
    t = not_null(m_38);
    {
      ATerm r_38 = NULL;
      ATerm y_38 (ATerm t)
      {
        t = not_null(r_38);
        if(((q_38 != NULL) && (q_38 != t)))
          _fail(t);
        else
          q_38 = t;
        t = not_null(r_38);
        return(t);
      }
      t = SSLgetAnnotations(not_null(o_38));
      if(((r_38 != NULL) && (r_38 != t)))
        _fail(t);
      else
        r_38 = t;
      t = y_38(t);
      t = not_null(p_38);
      t = g_75(t);
      if(((s_38 != NULL) && (s_38 != t)))
        _fail(t);
      else
        s_38 = t;
      t = z_38(t);
    }
    return(t);
  }
  if(((m_38 != NULL) && (m_38 != t)))
    _fail(t);
  else
    m_38 = t;
  t = not_null(m_38);
  if(match_cons(t, sym_Undefined_1))
    {
      n_38 = ATgetArgument(t, 0);
      t = w_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm b_39 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_87, _id, t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = Cons_2_0(_id, b_39, t);
      }
    return(t);
  }
  t = b_39(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  t = fetch_1_0(o_107, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  if(((d_39 != NULL) && (d_39 != t)))
    _fail(t);
  else
    d_39 = t;
  t = not_null(d_39);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(d_39);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_39 = ATgetFirst((ATermList) t);
          f_39 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_39);
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
  ATerm q_29;
  q_29 = t;
  {
    ATerm i_39 = NULL;
    ATerm l_39 = NULL;
    ATerm n_39 (ATerm t)
    {
      t = not_null(l_39);
      if(((i_39 != NULL) && (i_39 != t)))
        _fail(t);
      else
        i_39 = t;
      t = not_null(l_39);
      return(t);
    }
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm j_39 = NULL;
          ATerm k_39 = NULL;
          ATerm m_39 (ATerm t)
          {
            t = not_null(k_39);
            if(((j_39 != NULL) && (j_39 != t)))
              _fail(t);
            else
              j_39 = t;
            t = not_null(k_39);
            return(t);
          }
          if(((k_39 != NULL) && (k_39 != t)))
            _fail(t);
          else
            k_39 = t;
          t = m_39(t);
          t = (ATerm) ATinsert(ATempty, not_null(j_39));
        }
      }
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    t = n_39(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(i_39));
    t = printnl_0_0(t);
  }
  t = q_29;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_27;
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
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  ATerm y_39 (ATerm t)
  {
    ATerm t_39 = NULL,u_39 = NULL,w_39 = NULL;
    t = not_null(s_39);
    if(((t_39 != NULL) && (t_39 != t)))
      _fail(t);
    else
      t_39 = t;
    t = not_null(s_39);
    {
      ATerm y_29;
      y_29 = t;
      {
        ATerm v_39 = NULL;
        ATerm d_40 (ATerm t)
        {
          t = not_null(v_39);
          if(((u_39 != NULL) && (u_39 != t)))
            _fail(t);
          else
            u_39 = t;
          t = not_null(v_39);
          return(t);
        }
        t = SSLgetAnnotations(not_null(t_39));
        if(((v_39 != NULL) && (v_39 != t)))
          _fail(t);
        else
          v_39 = t;
        t = d_40(t);
      }
      t = y_29;
      {
        ATerm x_39 = NULL;
        ATerm e_40 (ATerm t)
        {
          t = not_null(x_39);
          if(((w_39 != NULL) && (w_39 != t)))
            _fail(t);
          else
            w_39 = t;
          t = not_null(x_39);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_39));
        if(((x_39 != NULL) && (x_39 != t)))
          _fail(t);
        else
          x_39 = t;
        t = e_40(t);
        t = not_null(w_39);
      }
    }
    return(t);
  }
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = not_null(s_39);
  if(match_cons(t, sym_Help_0))
    {
      t = y_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_84(t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 (ATerm t)
      {
        ATerm h_40 = NULL;
        if(((h_40 != NULL) && (h_40 != t)))
          _fail(t);
        else
          h_40 = t;
        t = not_null(h_40);
        if(match_string(t, "--about"))
          {
            t = not_null(h_40);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_v_30;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_w_30;
        return(t);
      }
      t = Option_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = k_30;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm i_40 = NULL;
          if(((i_40 != NULL) && (i_40 != t)))
            _fail(t);
          else
            i_40 = t;
          t = not_null(i_40);
          if(match_string(t, "--version"))
            {
              t = not_null(i_40);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_5 (ATerm t)
        {
          t = term_v_30;
          t = set_config_0_0(t);
          t = term_y_30;
          t = set_config_0_0(t);
          t = term_m_31;
          return(t);
        }
        ATerm k_6 (ATerm t)
        {
          t = term_n_31;
          return(t);
        }
        t = Option_3_0(t_5, u_5, k_6, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  ATerm q_40 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL;
    t = not_null(m_40);
    if(((o_40 != NULL) && (o_40 != t)))
      _fail(t);
    else
      o_40 = t;
    t = not_null(n_40);
    if(((p_40 != NULL) && (p_40 != t)))
      _fail(t);
    else
      p_40 = t;
    t = not_null(l_40);
    t = SSL_table_get(not_null(o_40), not_null(p_40));
    return(t);
  }
  if(((l_40 != NULL) && (l_40 != t)))
    _fail(t);
  else
    l_40 = t;
  t = not_null(l_40);
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      t = q_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  ATerm d_41 (ATerm t)
  {
    ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
    t = not_null(v_40);
    if(((z_40 != NULL) && (z_40 != t)))
      _fail(t);
    else
      z_40 = t;
    t = not_null(w_40);
    if(((a_41 != NULL) && (a_41 != t)))
      _fail(t);
    else
      a_41 = t;
    t = not_null(x_40);
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    t = not_null(u_40);
    {
      ATerm o_31;
      o_31 = t;
      {
        ATerm b_41 = NULL;
        ATerm c_41 = NULL;
        ATerm e_41 (ATerm t)
        {
          t = not_null(c_41);
          if(((b_41 != NULL) && (b_41 != t)))
            _fail(t);
          else
            b_41 = t;
          t = not_null(c_41);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_40), not_null(a_41));
        {
          ATerm w_31 = t;
          int a_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(a_32);
            }
          else
            {
              t = w_31;
              t = (ATerm) ATempty;
            }
          if(((c_41 != NULL) && (c_41 != t)))
            _fail(t);
          else
            c_41 = t;
          t = e_41(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_40), not_null(a_41), (ATerm) ATinsert(CheckATermList(not_null(b_41)), not_null(y_40)));
        t = table_put_0_0(t);
      }
      t = o_31;
    }
    return(t);
  }
  if(((u_40 != NULL) && (u_40 != t)))
    _fail(t);
  else
    u_40 = t;
  t = not_null(u_40);
  if(match_cons(t, sym__3))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      x_40 = ATgetArgument(t, 2);
      t = d_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm g_41 = NULL;
  ATerm h_41 = NULL;
  ATerm i_41 (ATerm t)
  {
    t = not_null(h_41);
    if(((g_41 != NULL) && (g_41 != t)))
      _fail(t);
    else
      g_41 = t;
    t = not_null(h_41);
    return(t);
  }
  t = term_k_10;
  t = t_108(t);
  if(((h_41 != NULL) && (h_41 != t)))
    _fail(t);
  else
    h_41 = t;
  t = i_41(t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_29, term_e_29, not_null(g_41));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  ATerm u_41 (ATerm t)
  {
    t = not_null(n_41);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm v_41 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
    t = not_null(o_41);
    if(((q_41 != NULL) && (q_41 != t)))
      _fail(t);
    else
      q_41 = t;
    t = not_null(p_41);
    if(((r_41 != NULL) && (r_41 != t)))
      _fail(t);
    else
      r_41 = t;
    t = not_null(n_41);
    {
      ATerm e_32;
      e_32 = t;
      t = not_null(q_41);
      t = a_0(t);
      t = e_32;
      {
        ATerm t_41 = NULL;
        ATerm w_41 (ATerm t)
        {
          t = not_null(t_41);
          if(((s_41 != NULL) && (s_41 != t)))
            _fail(t);
          else
            s_41 = t;
          t = not_null(t_41);
          return(t);
        }
        t = term_k_10;
        t = c_0(t);
        if(((t_41 != NULL) && (t_41 != t)))
          _fail(t);
        else
          t_41 = t;
        t = w_41(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_41)), not_null(s_41));
      }
    }
    return(t);
  }
  if(((n_41 != NULL) && (n_41 != t)))
    _fail(t);
  else
    n_41 = t;
  t = not_null(n_41);
  if(match_string(t, "register-usage-info"))
    {
      t = u_41(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_41 = ATgetFirst((ATermList) t);
          p_41 = (ATerm) ATgetNext((ATermList) t);
          t = v_41(t);
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
  ATerm l_6 (ATerm t)
  {
    ATerm a_42 = NULL;
    if(((a_42 != NULL) && (a_42 != t)))
      _fail(t);
    else
      a_42 = t;
    t = not_null(a_42);
    if(match_string(t, "--help"))
      {
        t = not_null(a_42);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(a_42);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(a_42);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_f_32;
    t = set_config_0_0(t);
    t = term_m_32;
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_n_32;
    return(t);
  }
  t = Option_3_0(l_6, r_6, s_6, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL;
  ATerm k_42 (ATerm t)
  {
    ATerm i_42 = NULL,j_42 = NULL;
    t = not_null(g_42);
    if(((i_42 != NULL) && (i_42 != t)))
      _fail(t);
    else
      i_42 = t;
    t = not_null(h_42);
    if(((j_42 != NULL) && (j_42 != t)))
      _fail(t);
    else
      j_42 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(j_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_42)));
    return(t);
  }
  if(((d_42 != NULL) && (d_42 != t)))
    _fail(t);
  else
    d_42 = t;
  t = not_null(d_42);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_42 = ATgetFirst((ATermList) t);
      h_42 = (ATerm) ATgetNext((ATermList) t);
      t = k_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  ATerm s_42 (ATerm t)
  {
    ATerm q_42 = NULL,r_42 = NULL;
    t = not_null(o_42);
    if(((q_42 != NULL) && (q_42 != t)))
      _fail(t);
    else
      q_42 = t;
    t = not_null(p_42);
    if(((r_42 != NULL) && (r_42 != t)))
      _fail(t);
    else
      r_42 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_v_18, not_null(q_42), not_null(r_42));
    t = table_put_0_0(t);
    return(t);
  }
  if(((n_42 != NULL) && (n_42 != t)))
    _fail(t);
  else
    n_42 = t;
  t = not_null(n_42);
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      t = s_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm o_32;
  o_32 = t;
  {
    ATerm z_6 (ATerm t)
    {
      t = term_p_32;
      t = r_108(t);
      return(t);
    }
    t = try_1_0(z_6, t);
  }
  t = o_32;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm x_42 = NULL;
      ATerm q_32;
      q_32 = t;
      {
        ATerm v_42 = NULL;
        ATerm w_42 = NULL;
        ATerm z_42 (ATerm t)
        {
          t = not_null(w_42);
          if(((v_42 != NULL) && (v_42 != t)))
            _fail(t);
          else
            v_42 = t;
          t = not_null(w_42);
          return(t);
        }
        if(((w_42 != NULL) && (w_42 != t)))
          _fail(t);
        else
          w_42 = t;
        t = z_42(t);
        t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(v_42));
        t = set_config_0_0(t);
      }
      t = q_32;
      {
        ATerm y_42 = NULL;
        ATerm a_43 (ATerm t)
        {
          t = not_null(y_42);
          if(((x_42 != NULL) && (x_42 != t)))
            _fail(t);
          else
            x_42 = t;
          t = not_null(y_42);
          return(t);
        }
        if(((y_42 != NULL) && (y_42 != t)))
          _fail(t);
        else
          y_42 = t;
        t = a_43(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_42));
      }
      return(t);
    }
    ATerm h_7 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = r_108(t);
              t = Cons_2_0(_id, h_7, t);
            }
          ;
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(a_7, h_7, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  ATerm p_33;
  p_33 = t;
  {
    ATerm j_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
    ATerm o_43 (ATerm t)
    {
      t = not_null(l_43);
      if(((g_43 != NULL) && (g_43 != t)))
        _fail(t);
      else
        g_43 = t;
      t = not_null(m_43);
      if(((h_43 != NULL) && (h_43 != t)))
        _fail(t);
      else
        h_43 = t;
      t = not_null(n_43);
      if(((i_43 != NULL) && (i_43 != t)))
        _fail(t);
      else
        i_43 = t;
      t = not_null(j_43);
      t = SSL_table_put(not_null(g_43), not_null(h_43), not_null(i_43));
      return(t);
    }
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    t = not_null(j_43);
    if(match_cons(t, sym__3))
      {
        l_43 = ATgetArgument(t, 0);
        m_43 = ATgetArgument(t, 1);
        n_43 = ATgetArgument(t, 2);
        t = o_43(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = p_33;
  return(t);
}
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm q_43 = NULL;
  ATerm q_33;
  q_33 = t;
  t = term_x_33;
  t = table_put_0_0(t);
  t = q_33;
  {
    ATerm i_7 (ATerm t)
    {
      ATerm y_33 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t);
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = y_33;
          {
            ATerm i_34 = t;
            int j_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_34);
              }
            else
              {
                t = i_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
    {
      ATerm j_7 (ATerm t)
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_34;
            s_34 = t;
            {
              ATerm t_34 = t;
              int d_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_28;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(d_35);
                }
              else
                {
                  t = t_34;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = s_34;
            t = system_usage_0_0(t);
            t = term_h_13;
            t = exit_0_0(t);
            ;
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            {
              ATerm h_35 = t;
              int l_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_35;
                  p_35 = t;
                  t = term_u_30;
                  t = get_config_0_0(t);
                  t = p_35;
                  t = system_about_0_0(t);
                  t = term_h_13;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(l_35);
                }
              else
                {
                  t = h_35;
                  {
                    ATerm k_7 (ATerm t)
                    {
                      ATerm l_7 (ATerm t)
                      {
                        ATerm r_43 = NULL;
                        ATerm s_43 (ATerm t)
                        {
                          t = not_null(r_43);
                          if(((q_43 != NULL) && (q_43 != t)))
                            _fail(t);
                          else
                            q_43 = t;
                          t = not_null(r_43);
                          return(t);
                        }
                        if(((r_43 != NULL) && (r_43 != t)))
                          _fail(t);
                        else
                          r_43 = t;
                        t = s_43(t);
                        return(t);
                      }
                      t = Undefined_1_0(l_7, t);
                      return(t);
                    }
                    t = option_defined_1_0(k_7, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_43)), term_u_35));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_i_13;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(j_7, t);
      {
        ATerm v_35;
        v_35 = t;
        t = term_d_29;
        t = table_destroy_0_0(t);
        t = v_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  t = parse_options_1_0(q_106, t);
  t = store_options_0_0(t);
  t = s_106(t);
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_106, t);
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(f_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_7, h_106, i_106, n_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm p_7 (ATerm t)
    {
      ATerm p_36;
      p_36 = t;
      {
        ATerm u_43 = NULL;
        ATerm v_43 = NULL;
        ATerm w_43 (ATerm t)
        {
          t = not_null(v_43);
          if(((u_43 != NULL) && (u_43 != t)))
            _fail(t);
          else
            u_43 = t;
          t = not_null(v_43);
          return(t);
        }
        t = term_x_27;
        t = get_config_0_0(t);
        if(((v_43 != NULL) && (v_43 != t)))
          _fail(t);
        else
          v_43 = t;
        t = w_43(t);
        t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, not_null(u_43)));
        t = printnl_0_0(t);
      }
      t = p_36;
      return(t);
    }
    t = if_verbose2_1_0(p_7, t);
    return(t);
  }
  t = iowrap_4_0(z_105, a_106, b_106, o_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(x_105, y_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    t = _2_0(_id, u_105, t);
    return(t);
  }
  t = iowrap_2_0(q_7, _fail, t);
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm s_7 (ATerm t)
    {
      ATerm t_7 (ATerm t)
      {
        ATerm u_7 (ATerm t)
        {
          t = Strategies_1_0(rename_sdefs_0_0, t);
          return(t);
        }
        t = Cons_2_0(u_7, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, t_7, t);
      return(t);
    }
    t = Specification_1_0(s_7, t);
    return(t);
  }
  t = iowrap_1_0(r_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = rename_defs_0_0(t);
  return(t);
}
