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
ATerm term_t_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_u_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_e_15;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_l_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_x_7;
ATerm term_q_7;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_l_5;
ATerm term_i_5;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_t_4;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("assoc", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym_Some_1, term_s_4);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Seq", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("LChoice", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Choice", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("LeftAssoc", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("GreaterThan", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RightAssoc", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_g_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_l_5);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_l_5);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_v_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_l_5);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_l_5);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_l_5);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__3, term_t_24, term_v_24, (ATerm) ATempty);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm stratego_priorities_0 (ATerm);
ATerm StrategoParenthesize_0 (ATerm);
ATerm LeftAssoc_0 (ATerm);
ATerm GreaterThan_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm f_88 (ATerm));
ATerm RightAssoc_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm d_81 (ATerm));
ATerm split_init_last_0 (ATerm);
ATerm Disambiguate_1 (ATerm, ATerm d_106 (ATerm));
ATerm gen_none_0 (ATerm);
ATerm gen_non_assoc_0 (ATerm);
ATerm gen_right_0 (ATerm);
ATerm GenRightAssoc_0 (ATerm);
ATerm GenLeftAssoc_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_88 (ATerm));
ATerm GenGreaterThan_0 (ATerm);
ATerm for_each_pair_1 (ATerm, ATerm w_79 (ATerm));
ATerm gen_left_0 (ATerm);
ATerm init_parenthesation_rules_0 (ATerm);
ATerm parenthesize_2 (ATerm, ATerm a_106 (ATerm), ATerm b_106 (ATerm));
ATerm stratego_parenthesize_0 (ATerm);
ATerm AssociateSeqLeft_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm j_103 (ATerm));
ATerm innermost_1 (ATerm, ATerm b_96 (ATerm));
ATerm member_0 (ATerm);
ATerm AddLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm SVar_1 (ATerm, ATerm o_68 (ATerm));
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm a_71 (ATerm), ATerm b_71 (ATerm));
ATerm SDef_3 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm RDef_3 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm z_70 (ATerm));
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
ATerm string_as_chars_1 (ATerm, ATerm g_103 (ATerm));
ATerm double_quote_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm is_quoted_chars_0 (ATerm);
ATerm is_quoted_0 (ATerm);
ATerm is_double_quoted_0 (ATerm);
ATerm Ensugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm p_93 (ATerm));
ATerm topdown_1 (ATerm, ATerm i_103 (ATerm));
ATerm Stratego_Ensugar_0 (ATerm);
ATerm _2 (ATerm, ATerm r_62 (ATerm), ATerm s_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_101 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm c_91 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_77 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_90 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm s_86 (ATerm), ATerm t_86 (ATerm));
ATerm crush_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_101 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_93 (ATerm));
ATerm map_1 (ATerm, ATerm c_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_93 (ATerm));
ATerm Program_1 (ATerm, ATerm i_76 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_76 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_92 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_88 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_77 (ATerm));
ATerm stratego_ensugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm stratego_priorities_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_t_4, (ATerm) ATinsert(ATinsert(ATempty, term_x_4), term_w_4))), (ATerm) ATmakeAppl(sym__2, term_t_4, (ATerm) ATinsert(ATempty, term_v_4)));
  return(t);
}
ATerm StrategoParenthesize_0 (ATerm t)
{
  ATerm g_3 = NULL;
  ATerm h_3 = NULL;
  h_3 = t;
  if(((g_3 != NULL) && (g_3 != h_3)))
    _fail(h_3);
  else
    g_3 = h_3;
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, not_null(g_3));
  return(t);
}
ATerm LeftAssoc_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm j_5 = NULL,p_5 = NULL;
        ATerm y_4;
        y_4 = t;
        {
          ATerm k_5 = NULL;
          ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
          t = not_null(f_5);
          {
            k_5 = t;
            {
              t = SSL_explode_term(not_null(k_5));
              {
                m_5 = t;
                r_4 :
                if(match_cons(m_5, sym__2))
                  {
                    n_5 = ATgetArgument(m_5, 0);
                    o_5 = ATgetArgument(m_5, 1);
                    if(((j_5 != NULL) && (j_5 != n_5)))
                      _fail(n_5);
                    else
                      j_5 = n_5;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = y_4;
        {
          ATerm z_4;
          z_4 = t;
          {
            ATerm q_5 = NULL;
            ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
            t = not_null(e_5);
            {
              q_5 = t;
              {
                t = SSL_explode_term(not_null(q_5));
                {
                  s_5 = t;
                  u_4 :
                  if(match_cons(s_5, sym__2))
                    {
                      t_5 = ATgetArgument(s_5, 0);
                      u_5 = ATgetArgument(s_5, 1);
                      if(((p_5 != NULL) && (p_5 != t_5)))
                        _fail(t_5);
                      else
                        p_5 = t_5;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = z_4;
          {
            ATerm v_5 = NULL,x_5 = NULL;
            ATerm g_5;
            g_5 = t;
            {
              ATerm w_5 = NULL;
              t = (ATerm) ATempty;
              {
                w_5 = t;
                if(((v_5 != NULL) && (v_5 != w_5)))
                  _fail(w_5);
                else
                  v_5 = w_5;
              }
            }
            t = g_5;
            {
              ATerm z_5 = NULL,b_6 = NULL;
              t = SSL_mkterm(not_null(p_5), not_null(v_5));
              {
                x_5 = t;
                {
                  ATerm h_5;
                  h_5 = t;
                  {
                    ATerm a_6 = NULL;
                    t = (ATerm) ATempty;
                    {
                      a_6 = t;
                      if(((z_5 != NULL) && (z_5 != a_6)))
                        _fail(a_6);
                      else
                        z_5 = a_6;
                    }
                  }
                  t = h_5;
                  {
                    ATerm d_6 = NULL,e_6 = NULL;
                    t = SSL_mkterm(not_null(j_5), not_null(z_5));
                    {
                      b_6 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(b_6));
                        {
                          ATerm c_0 (ATerm t)
                          {
                            t = term_i_5;
                            return(t);
                          }
                          t = rewrite_1(t, c_0);
                          {
                            d_6 = t;
                            a_5 :
                            if(match_cons(d_6, sym_Defined_1))
                              {
                                e_6 = ATgetArgument(d_6, 0);
                                b_5 :
                                if(!(match_string(e_6, "h_0")))
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
                }
              }
            }
            t = term_l_5;
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
ATerm GreaterThan_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym__2))
    {
      d_7 = ATgetArgument(c_7, 0);
      e_7 = ATgetArgument(c_7, 1);
      {
        ATerm i_7 = NULL,o_7 = NULL;
        ATerm r_5;
        r_5 = t;
        {
          ATerm j_7 = NULL;
          ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
          t = not_null(e_7);
          {
            j_7 = t;
            {
              t = SSL_explode_term(not_null(j_7));
              {
                l_7 = t;
                r_6 :
                if(match_cons(l_7, sym__2))
                  {
                    m_7 = ATgetArgument(l_7, 0);
                    n_7 = ATgetArgument(l_7, 1);
                    if(((i_7 != NULL) && (i_7 != m_7)))
                      _fail(m_7);
                    else
                      i_7 = m_7;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = r_5;
        {
          ATerm y_5;
          y_5 = t;
          {
            ATerm p_7 = NULL;
            ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
            t = not_null(d_7);
            {
              p_7 = t;
              {
                t = SSL_explode_term(not_null(p_7));
                {
                  r_7 = t;
                  u_6 :
                  if(match_cons(r_7, sym__2))
                    {
                      s_7 = ATgetArgument(r_7, 0);
                      t_7 = ATgetArgument(r_7, 1);
                      if(((o_7 != NULL) && (o_7 != s_7)))
                        _fail(s_7);
                      else
                        o_7 = s_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = y_5;
          {
            ATerm u_7 = NULL,w_7 = NULL;
            ATerm c_6;
            c_6 = t;
            {
              ATerm v_7 = NULL;
              t = (ATerm) ATempty;
              {
                v_7 = t;
                if(((u_7 != NULL) && (u_7 != v_7)))
                  _fail(v_7);
                else
                  u_7 = v_7;
              }
            }
            t = c_6;
            {
              ATerm y_7 = NULL,a_8 = NULL;
              t = SSL_mkterm(not_null(o_7), not_null(u_7));
              {
                w_7 = t;
                {
                  ATerm f_6;
                  f_6 = t;
                  {
                    ATerm z_7 = NULL;
                    t = (ATerm) ATempty;
                    {
                      z_7 = t;
                      if(((y_7 != NULL) && (y_7 != z_7)))
                        _fail(z_7);
                      else
                        y_7 = z_7;
                    }
                  }
                  t = f_6;
                  {
                    ATerm c_8 = NULL,d_8 = NULL;
                    t = SSL_mkterm(not_null(i_7), not_null(y_7));
                    {
                      a_8 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), not_null(a_8));
                        {
                          ATerm e_0 (ATerm t)
                          {
                            t = term_g_6;
                            return(t);
                          }
                          t = rewrite_1(t, e_0);
                          {
                            c_8 = t;
                            z_6 :
                            if(match_cons(c_8, sym_Defined_1))
                              {
                                d_8 = ATgetArgument(c_8, 0);
                                a_7 :
                                if(!(match_string(d_8, "l_0")))
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
                }
              }
            }
            t = term_l_5;
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
ATerm Hd_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
    {
      q_8 = ATgetFirst((ATermList) p_8);
      r_8 = (ATerm) ATgetNext((ATermList) p_8);
      t = not_null(q_8);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym__2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), not_null(y_8));
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
ATerm rewrite_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm e_9 = NULL;
  ATerm g_9 = NULL;
  e_9 = t;
  {
    ATerm h_9 = NULL;
    t = term_l_5;
    {
      t = f_88(t);
      {
        h_9 = t;
        if(((g_9 != NULL) && (g_9 != h_9)))
          _fail(h_9);
        else
          g_9 = h_9;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(e_9));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm RightAssoc_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      {
        ATerm e_10 = NULL,k_10 = NULL;
        ATerm h_6;
        h_6 = t;
        {
          ATerm f_10 = NULL;
          ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
          t = not_null(a_10);
          {
            f_10 = t;
            {
              t = SSL_explode_term(not_null(f_10));
              {
                h_10 = t;
                n_9 :
                if(match_cons(h_10, sym__2))
                  {
                    i_10 = ATgetArgument(h_10, 0);
                    j_10 = ATgetArgument(h_10, 1);
                    if(((e_10 != NULL) && (e_10 != i_10)))
                      _fail(i_10);
                    else
                      e_10 = i_10;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = h_6;
        {
          ATerm i_6;
          i_6 = t;
          {
            ATerm l_10 = NULL;
            ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
            t = not_null(z_9);
            {
              l_10 = t;
              {
                t = SSL_explode_term(not_null(l_10));
                {
                  n_10 = t;
                  q_9 :
                  if(match_cons(n_10, sym__2))
                    {
                      o_10 = ATgetArgument(n_10, 0);
                      p_10 = ATgetArgument(n_10, 1);
                      if(((k_10 != NULL) && (k_10 != o_10)))
                        _fail(o_10);
                      else
                        k_10 = o_10;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = i_6;
          {
            ATerm q_10 = NULL,s_10 = NULL;
            ATerm j_6;
            j_6 = t;
            {
              ATerm r_10 = NULL;
              t = (ATerm) ATempty;
              {
                r_10 = t;
                if(((q_10 != NULL) && (q_10 != r_10)))
                  _fail(r_10);
                else
                  q_10 = r_10;
              }
            }
            t = j_6;
            {
              ATerm u_10 = NULL,w_10 = NULL;
              t = SSL_mkterm(not_null(k_10), not_null(q_10));
              {
                s_10 = t;
                {
                  ATerm k_6;
                  k_6 = t;
                  {
                    ATerm v_10 = NULL;
                    t = (ATerm) ATempty;
                    {
                      v_10 = t;
                      if(((u_10 != NULL) && (u_10 != v_10)))
                        _fail(v_10);
                      else
                        u_10 = v_10;
                    }
                  }
                  t = k_6;
                  {
                    ATerm y_10 = NULL,z_10 = NULL;
                    t = SSL_mkterm(not_null(e_10), not_null(u_10));
                    {
                      w_10 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(w_10));
                        {
                          ATerm f_0 (ATerm t)
                          {
                            t = term_l_6;
                            return(t);
                          }
                          t = rewrite_1(t, f_0);
                          {
                            y_10 = t;
                            v_9 :
                            if(match_cons(y_10, sym_Defined_1))
                              {
                                z_10 = ATgetArgument(y_10, 0);
                                w_9 :
                                if(!(match_string(z_10, "j_0")))
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
                }
              }
            }
            t = term_l_5;
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
ATerm at_last_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = d_81(t);
        ;
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        t = Cons_2(t, _id, j_11);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm split_init_last_0 (ATerm t)
{
  ATerm o_11 = NULL,s_11 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
    p_11 = t;
    l_11 :
    if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
      {
        q_11 = ATgetFirst((ATermList) p_11);
        r_11 = (ATerm) ATgetNext((ATermList) p_11);
        m_11 :
        if(((ATgetType(r_11) == AT_LIST) && ATisEmpty(r_11)))
          {
            {
              if(((o_11 != NULL) && (o_11 != q_11)))
                _fail(q_11);
              else
                o_11 = q_11;
              t = (ATerm) ATempty;
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
  t = at_last_1(t, p_0);
  {
    ATerm t_11 = NULL;
    t_11 = t;
    if(((s_11 != NULL) && (s_11 != t_11)))
      _fail(t_11);
    else
      s_11 = t_11;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(o_11));
  }
  return(t);
}
ATerm Disambiguate_1 (ATerm t, ATerm d_106 (ATerm))
{
  ATerm m_12 = NULL;
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,q_13 = NULL,s_13 = NULL,u_13 = NULL;
  m_12 = t;
  {
    ATerm o_6;
    o_6 = t;
    {
      ATerm s_12 = NULL;
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
      t = not_null(m_12);
      {
        s_12 = t;
        {
          t = SSL_explode_term(not_null(s_12));
          {
            u_12 = t;
            z_11 :
            if(match_cons(u_12, sym__2))
              {
                v_12 = ATgetArgument(u_12, 0);
                w_12 = ATgetArgument(u_12, 1);
                a_12 :
                if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
                  {
                    x_12 = ATgetFirst((ATermList) w_12);
                    y_12 = (ATerm) ATgetNext((ATermList) w_12);
                    {
                      if(((p_12 != NULL) && (p_12 != v_12)))
                        _fail(v_12);
                      else
                        p_12 = v_12;
                      {
                        if(((q_12 != NULL) && (q_12 != x_12)))
                          _fail(x_12);
                        else
                          q_12 = x_12;
                        if(((r_12 != NULL) && (r_12 != y_12)))
                          _fail(y_12);
                        else
                          r_12 = y_12;
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
    t = o_6;
    {
      ATerm p_6;
      p_6 = t;
      {
        ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
        t = not_null(r_12);
        {
          t = split_init_last_0(t);
          {
            e_13 = t;
            i_12 :
            if(match_cons(e_13, sym__2))
              {
                f_13 = ATgetArgument(e_13, 0);
                g_13 = ATgetArgument(e_13, 1);
                {
                  ATerm j_13 = NULL;
                  if(((a_13 != NULL) && (a_13 != f_13)))
                    _fail(f_13);
                  else
                    a_13 = f_13;
                  {
                    if(((c_13 != NULL) && (c_13 != g_13)))
                      _fail(g_13);
                    else
                      c_13 = g_13;
                    {
                      t = not_null(q_12);
                      {
                        ATerm m_13 = NULL;
                        ATerm q_0 (ATerm t)
                        {
                          ATerm q_6;
                          q_6 = t;
                          {
                            ATerm h_13 = NULL;
                            ATerm i_13 = NULL;
                            i_13 = t;
                            if(((h_13 != NULL) && (h_13 != i_13)))
                              _fail(i_13);
                            else
                              h_13 = i_13;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(h_13));
                              t = RightAssoc_0(t);
                            }
                          }
                          t = q_6;
                          t = d_106(t);
                          return(t);
                        }
                        t = try_1(t, q_0);
                        {
                          j_13 = t;
                          {
                            if(((z_12 != NULL) && (z_12 != j_13)))
                              _fail(j_13);
                            else
                              z_12 = j_13;
                            {
                              t = not_null(a_13);
                              {
                                ATerm p_13 = NULL;
                                ATerm r_0 (ATerm t)
                                {
                                  ATerm s_6;
                                  s_6 = t;
                                  {
                                    ATerm k_13 = NULL;
                                    ATerm l_13 = NULL;
                                    l_13 = t;
                                    if(((k_13 != NULL) && (k_13 != l_13)))
                                      _fail(l_13);
                                    else
                                      k_13 = l_13;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(k_13));
                                      t = GreaterThan_0(t);
                                    }
                                  }
                                  t = s_6;
                                  t = d_106(t);
                                  return(t);
                                }
                                t = map_1(t, r_0);
                                {
                                  m_13 = t;
                                  {
                                    if(((b_13 != NULL) && (b_13 != m_13)))
                                      _fail(m_13);
                                    else
                                      b_13 = m_13;
                                    {
                                      t = not_null(c_13);
                                      {
                                        ATerm s_0 (ATerm t)
                                        {
                                          ATerm t_6;
                                          t_6 = t;
                                          {
                                            ATerm n_13 = NULL;
                                            ATerm o_13 = NULL;
                                            o_13 = t;
                                            if(((n_13 != NULL) && (n_13 != o_13)))
                                              _fail(o_13);
                                            else
                                              n_13 = o_13;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(n_13));
                                              t = LeftAssoc_0(t);
                                            }
                                          }
                                          t = t_6;
                                          t = d_106(t);
                                          return(t);
                                        }
                                        t = try_1(t, s_0);
                                        {
                                          p_13 = t;
                                          if(((d_13 != NULL) && (d_13 != p_13)))
                                            _fail(p_13);
                                          else
                                            d_13 = p_13;
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
          }
        }
      }
      t = p_6;
      {
        ATerm v_6;
        v_6 = t;
        {
          ATerm r_13 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), (ATerm) ATinsert(ATempty, not_null(d_13)));
          {
            t = conc_0(t);
            {
              r_13 = t;
              if(((q_13 != NULL) && (q_13 != r_13)))
                _fail(r_13);
              else
                q_13 = r_13;
            }
          }
        }
        t = v_6;
        {
          ATerm w_6;
          w_6 = t;
          {
            ATerm t_13 = NULL;
            t = (ATerm) ATinsert(CheckATermList(not_null(q_13)), not_null(z_12));
            {
              t_13 = t;
              if(((s_13 != NULL) && (s_13 != t_13)))
                _fail(t_13);
              else
                s_13 = t_13;
            }
          }
          t = w_6;
          {
            t = SSL_mkterm(not_null(p_12), not_null(s_13));
            {
              u_13 = t;
              t = not_null(u_13);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm gen_none_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  p_14 = t;
  l_14 :
  if(match_cons(p_14, sym__2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      m_14 :
      if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
        {
          s_14 = ATgetFirst((ATermList) r_14);
          v_14 = (ATerm) ATgetNext((ATermList) r_14);
          n_14 :
          if(match_cons(s_14, sym__2))
            {
              t_14 = ATgetArgument(s_14, 0);
              u_14 = ATgetArgument(s_14, 1);
              o_14 :
              if(match_cons(t_14, sym_None_0))
                {
                  ATerm z_14 = NULL;
                  ATerm x_6;
                  x_6 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(u_14));
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = GenGreaterThan_0(t);
                        {
                          t = GenLeftAssoc_0(t);
                          t = GenRightAssoc_0(t);
                        }
                        return(t);
                      }
                      t = for_each_pair_1(t, t_0);
                    }
                  }
                  t = x_6;
                  {
                    ATerm a_15 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(q_14));
                    {
                      t = conc_0(t);
                      {
                        a_15 = t;
                        if(((z_14 != NULL) && (z_14 != a_15)))
                          _fail(a_15);
                        else
                          z_14 = a_15;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), not_null(v_14));
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
ATerm gen_non_assoc_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  k_15 = t;
  f_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      g_15 :
      if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
        {
          n_15 = ATgetFirst((ATermList) m_15);
          r_15 = (ATerm) ATgetNext((ATermList) m_15);
          h_15 :
          if(match_cons(n_15, sym__2))
            {
              o_15 = ATgetArgument(n_15, 0);
              q_15 = ATgetArgument(n_15, 1);
              i_15 :
              if(match_cons(o_15, sym_Some_1))
                {
                  p_15 = ATgetArgument(o_15, 0);
                  j_15 :
                  if(match_string(p_15, "non-assoc"))
                    {
                      ATerm v_15 = NULL;
                      ATerm y_6;
                      y_6 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(q_15));
                        {
                          ATerm u_0 (ATerm t)
                          {
                            t = GenLeftAssoc_0(t);
                            t = GenRightAssoc_0(t);
                            return(t);
                          }
                          t = for_each_pair_1(t, u_0);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(q_15));
                            {
                              ATerm v_0 (ATerm t)
                              {
                                t = GenGreaterThan_0(t);
                                {
                                  t = GenLeftAssoc_0(t);
                                  t = GenRightAssoc_0(t);
                                }
                                return(t);
                              }
                              t = for_each_pair_1(t, v_0);
                            }
                          }
                        }
                      }
                      t = y_6;
                      {
                        ATerm w_15 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(l_15));
                        {
                          t = conc_0(t);
                          {
                            w_15 = t;
                            if(((v_15 != NULL) && (v_15 != w_15)))
                              _fail(w_15);
                            else
                              v_15 = w_15;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(r_15));
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
ATerm gen_right_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  g_16 = t;
  b_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      c_16 :
      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
        {
          j_16 = ATgetFirst((ATermList) i_16);
          n_16 = (ATerm) ATgetNext((ATermList) i_16);
          d_16 :
          if(match_cons(j_16, sym__2))
            {
              k_16 = ATgetArgument(j_16, 0);
              m_16 = ATgetArgument(j_16, 1);
              e_16 :
              if(match_cons(k_16, sym_Some_1))
                {
                  l_16 = ATgetArgument(k_16, 0);
                  f_16 :
                  if(match_string(l_16, "right"))
                    {
                      ATerm r_16 = NULL;
                      ATerm f_7;
                      f_7 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(m_16));
                        {
                          t = for_each_pair_1(t, GenLeftAssoc_0);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(m_16));
                            {
                              ATerm w_0 (ATerm t)
                              {
                                t = GenGreaterThan_0(t);
                                {
                                  t = GenLeftAssoc_0(t);
                                  t = GenRightAssoc_0(t);
                                }
                                return(t);
                              }
                              t = for_each_pair_1(t, w_0);
                            }
                          }
                        }
                      }
                      t = f_7;
                      {
                        ATerm s_16 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(h_16));
                        {
                          t = conc_0(t);
                          {
                            s_16 = t;
                            if(((r_16 != NULL) && (r_16 != s_16)))
                              _fail(s_16);
                            else
                              r_16 = s_16;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(n_16));
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
ATerm GenRightAssoc_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      {
        ATerm g_7;
        g_7 = t;
        {
          ATerm g_17 = NULL,i_17 = NULL;
          ATerm h_7;
          h_7 = t;
          {
            ATerm h_17 = NULL;
            t = (ATerm) ATempty;
            {
              h_17 = t;
              if(((g_17 != NULL) && (g_17 != h_17)))
                _fail(h_17);
              else
                g_17 = h_17;
            }
          }
          t = h_7;
          {
            ATerm k_17 = NULL,m_17 = NULL;
            t = SSL_mkterm(not_null(c_17), not_null(g_17));
            {
              i_17 = t;
              {
                ATerm k_7;
                k_7 = t;
                {
                  ATerm l_17 = NULL;
                  t = (ATerm) ATempty;
                  {
                    l_17 = t;
                    if(((k_17 != NULL) && (k_17 != l_17)))
                      _fail(l_17);
                    else
                      k_17 = l_17;
                  }
                }
                t = k_7;
                {
                  t = SSL_mkterm(not_null(d_17), not_null(k_17));
                  {
                    m_17 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_17), not_null(m_17)), term_x_7);
                      {
                        ATerm x_0 (ATerm t)
                        {
                          t = term_l_6;
                          return(t);
                        }
                        t = assert_1(t, x_0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = g_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GenLeftAssoc_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      {
        ATerm b_8;
        b_8 = t;
        {
          ATerm e_18 = NULL,g_18 = NULL;
          ATerm e_8;
          e_8 = t;
          {
            ATerm f_18 = NULL;
            t = (ATerm) ATempty;
            {
              f_18 = t;
              if(((e_18 != NULL) && (e_18 != f_18)))
                _fail(f_18);
              else
                e_18 = f_18;
            }
          }
          t = e_8;
          {
            ATerm i_18 = NULL,k_18 = NULL;
            t = SSL_mkterm(not_null(a_18), not_null(e_18));
            {
              g_18 = t;
              {
                ATerm f_8;
                f_8 = t;
                {
                  ATerm j_18 = NULL;
                  t = (ATerm) ATempty;
                  {
                    j_18 = t;
                    if(((i_18 != NULL) && (i_18 != j_18)))
                      _fail(j_18);
                    else
                      i_18 = j_18;
                  }
                }
                t = f_8;
                {
                  t = SSL_mkterm(not_null(b_18), not_null(i_18));
                  {
                    k_18 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_18), not_null(k_18)), term_h_8);
                      {
                        ATerm y_0 (ATerm t)
                        {
                          t = term_i_5;
                          return(t);
                        }
                        t = assert_1(t, y_0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = b_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
        ATerm i_8;
        i_8 = t;
        {
          ATerm e_19 = NULL;
          ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
          t = d_88(t);
          {
            e_19 = t;
            {
              if(((b_19 != NULL) && (b_19 != e_19)))
                _fail(e_19);
              else
                b_19 = e_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_19), not_null(x_18), not_null(y_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_8 = t;
                    int k_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), term_l_8);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(k_8);
                      }
                    else
                      {
                        t = j_8;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_19 = t;
                      u_18 :
                      if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
                        {
                          g_19 = ATgetFirst((ATermList) f_19);
                          h_19 = (ATerm) ATgetNext((ATermList) f_19);
                          {
                            if(((c_19 != NULL) && (c_19 != g_19)))
                              _fail(g_19);
                            else
                              c_19 = g_19;
                            {
                              if(((d_19 != NULL) && (d_19 != h_19)))
                                _fail(h_19);
                              else
                                d_19 = h_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_19), term_l_8, (ATerm) ATinsert(CheckATermList(not_null(d_19)), (ATerm) ATinsert(CheckATermList(not_null(c_19)), not_null(x_18))));
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
        t = i_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GenGreaterThan_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      {
        ATerm m_8;
        m_8 = t;
        {
          ATerm w_19 = NULL,y_19 = NULL;
          ATerm n_8;
          n_8 = t;
          {
            ATerm x_19 = NULL;
            t = (ATerm) ATempty;
            {
              x_19 = t;
              if(((w_19 != NULL) && (w_19 != x_19)))
                _fail(x_19);
              else
                w_19 = x_19;
            }
          }
          t = n_8;
          {
            ATerm a_20 = NULL,c_20 = NULL;
            t = SSL_mkterm(not_null(s_19), not_null(w_19));
            {
              y_19 = t;
              {
                ATerm s_8;
                s_8 = t;
                {
                  ATerm b_20 = NULL;
                  t = (ATerm) ATempty;
                  {
                    b_20 = t;
                    if(((a_20 != NULL) && (a_20 != b_20)))
                      _fail(b_20);
                    else
                      a_20 = b_20;
                  }
                }
                t = s_8;
                {
                  t = SSL_mkterm(not_null(t_19), not_null(a_20));
                  {
                    c_20 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_19), not_null(c_20)), term_u_8);
                      {
                        ATerm z_0 (ATerm t)
                        {
                          t = term_g_6;
                          return(t);
                        }
                        t = assert_1(t, z_0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_8;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm for_each_pair_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        t = not_null(o_20);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm s_20 = NULL;
            s_20 = t;
            {
              t = not_null(p_20);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm u_20 = NULL;
                  ATerm v_20 = NULL;
                  v_20 = t;
                  if(((u_20 != NULL) && (u_20 != v_20)))
                    _fail(v_20);
                  else
                    u_20 = v_20;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), not_null(u_20));
                    t = w_79(t);
                  }
                  return(t);
                }
                t = map_1(t, b_1);
              }
            }
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gen_left_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  g_21 = t;
  b_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      c_21 :
      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
        {
          j_21 = ATgetFirst((ATermList) i_21);
          n_21 = (ATerm) ATgetNext((ATermList) i_21);
          d_21 :
          if(match_cons(j_21, sym__2))
            {
              k_21 = ATgetArgument(j_21, 0);
              m_21 = ATgetArgument(j_21, 1);
              e_21 :
              if(match_cons(k_21, sym_Some_1))
                {
                  l_21 = ATgetArgument(k_21, 0);
                  f_21 :
                  if(match_string(l_21, "left"))
                    {
                      ATerm r_21 = NULL;
                      ATerm z_8;
                      z_8 = t;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), not_null(m_21));
                        {
                          t = for_each_pair_1(t, GenLeftAssoc_0);
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(m_21));
                            {
                              ATerm c_1 (ATerm t)
                              {
                                t = GenGreaterThan_0(t);
                                {
                                  t = GenLeftAssoc_0(t);
                                  t = GenRightAssoc_0(t);
                                }
                                return(t);
                              }
                              t = for_each_pair_1(t, c_1);
                            }
                          }
                        }
                      }
                      t = z_8;
                      {
                        ATerm s_21 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_21), not_null(h_21));
                        {
                          t = conc_0(t);
                          {
                            s_21 = t;
                            if(((r_21 != NULL) && (r_21 != s_21)))
                              _fail(s_21);
                            else
                              r_21 = s_21;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), not_null(n_21));
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
ATerm init_parenthesation_rules_0 (ATerm t)
{
  ATerm w_21 = NULL;
  ATerm x_21 = NULL;
  x_21 = t;
  if(((w_21 != NULL) && (w_21 != x_21)))
    _fail(x_21);
  else
    w_21 = x_21;
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_21));
    {
      ATerm d_1 (ATerm t)
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = gen_left_0(t);
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
                  t = gen_right_0(t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  {
                    ATerm f_9 = t;
                    int i_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = gen_non_assoc_0(t);
                        ;
                        LocalPopChoice(i_9);
                      }
                    else
                      {
                        t = f_9;
                        t = gen_none_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, d_1);
    }
  }
  return(t);
}
ATerm parenthesize_2 (ATerm t, ATerm a_106 (ATerm), ATerm b_106 (ATerm))
{
  ATerm j_9;
  j_9 = t;
  {
    t = b_106(t);
    t = init_parenthesation_rules_0(t);
  }
  t = j_9;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = Disambiguate_1(t, a_106);
        return(t);
      }
      t = try_1(t, f_1);
      return(t);
    }
    t = bottomup_1(t, e_1);
  }
  return(t);
}
ATerm stratego_parenthesize_0 (ATerm t)
{
  t = parenthesize_2(t, StrategoParenthesize_0, stratego_priorities_0);
  return(t);
}
ATerm AssociateSeqLeft_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  c_22 = t;
  a_22 :
  if(match_cons(c_22, sym_Seq_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      b_22 :
      if(match_cons(e_22, sym_Seq_2))
        {
          f_22 = ATgetArgument(e_22, 0);
          g_22 = ATgetArgument(e_22, 1);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(d_22), not_null(f_22)), not_null(g_22));
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
ATerm bottomup_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    t = bottomup_1(t, j_103);
    return(t);
  }
  t = _all(t, g_1);
  t = j_103(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm b_96 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      t = b_96(t);
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_96(t);
              t = bottomup_1(t, j_1);
              ;
              LocalPopChoice(l_9);
            }
          else
            {
              t = k_9;
              {
              }
            }
          return(t);
        }
        t = bottomup_1(t, j_1);
      }
      return(t);
    }
    t = try_1(t, i_1);
    return(t);
  }
  t = bottomup_1(t, h_1);
  return(t);
}
ATerm member_0 (ATerm t)
{
  ATerm o_22 = NULL;
  ATerm k_1 (ATerm t)
  {
    ATerm p_22 = NULL;
    p_22 = t;
    if(((o_22 != NULL) && (o_22 != p_22)))
      _fail(p_22);
    else
      o_22 = p_22;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm q_22 = NULL;
      q_22 = t;
      if(((o_22 != NULL) && (o_22 != q_22)))
        _fail(q_22);
      else
        o_22 = q_22;
      return(t);
    }
    t = fetch_1(t, m_1);
    return(t);
  }
  t = _2(t, k_1, l_1);
  return(t);
}
ATerm AddLeadingPrime_0 (ATerm t)
{
  ATerm w_22 = NULL;
  ATerm y_22 = NULL;
  w_22 = t;
  {
    ATerm b_23 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), term_g_11), term_f_11), term_e_11), term_d_11), term_c_11), term_b_11), term_a_11), term_x_10), term_t_10), term_m_10), term_g_10), term_d_10), term_c_10), term_b_10), term_u_9), term_t_9), term_s_9), term_r_9), term_p_9), term_o_9), term_m_9));
    {
      t = member_0(t);
      {
        t = not_null(w_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm z_22 = NULL;
            ATerm a_23 = NULL;
            a_23 = t;
            if(((z_22 != NULL) && (z_22 != a_23)))
              _fail(a_23);
            else
              z_22 = a_23;
            t = (ATerm) ATinsert(CheckATermList(not_null(z_22)), term_i_11);
            return(t);
          }
          t = string_as_chars_1(t, n_1);
          {
            b_23 = t;
            if(((y_22 != NULL) && (y_22 != b_23)))
              _fail(b_23);
            else
              y_22 = b_23;
          }
        }
      }
    }
    t = not_null(y_22);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_Op_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(l_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(m_23);
          {
            ATerm v_23 = NULL;
            t = l_65(t);
            {
              t_23 = t;
              {
                t = not_null(n_23);
                {
                  ATerm x_23 = NULL;
                  t = m_65(t);
                  {
                    v_23 = t;
                    {
                      ATerm y_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(t_23), not_null(v_23)), not_null(r_23));
                      {
                        y_23 = t;
                        if(((x_23 != NULL) && (x_23 != y_23)))
                          _fail(y_23);
                        else
                          x_23 = y_23;
                      }
                      t = not_null(x_23);
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
ATerm OpDecl_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_OpDecl_2))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      {
        ATerm q_24 = NULL,s_24 = NULL;
        ATerm r_24 = NULL;
        t = SSLgetAnnotations(not_null(k_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
        {
          t = not_null(l_24);
          {
            ATerm u_24 = NULL;
            t = u_64(t);
            {
              s_24 = t;
              {
                t = not_null(m_24);
                {
                  ATerm w_24 = NULL;
                  t = v_64(t);
                  {
                    u_24 = t;
                    {
                      ATerm x_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(s_24), not_null(u_24)), not_null(q_24));
                      {
                        x_24 = t;
                        if(((w_24 != NULL) && (w_24 != x_24)))
                          _fail(x_24);
                        else
                          w_24 = x_24;
                      }
                      t = not_null(w_24);
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
ATerm SVar_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_SVar_1))
    {
      j_25 = ATgetArgument(i_25, 0);
      {
        ATerm m_25 = NULL,o_25 = NULL;
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(i_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
        {
          t = not_null(j_25);
          {
            ATerm q_25 = NULL;
            t = o_68(t);
            {
              o_25 = t;
              {
                ATerm r_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_25)), not_null(m_25));
                {
                  r_25 = t;
                  if(((q_25 != NULL) && (q_25 != r_25)))
                    _fail(r_25);
                  else
                    q_25 = r_25;
                }
                t = not_null(q_25);
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
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_Var_1))
    {
      k_26 = ATgetArgument(j_26, 0);
      {
        ATerm k_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_26 = NULL,p_26 = NULL;
            ATerm o_26 = NULL;
            t = SSLgetAnnotations(not_null(j_26));
            {
              o_26 = t;
              if(((n_26 != NULL) && (n_26 != o_26)))
                _fail(o_26);
              else
                n_26 = o_26;
            }
            {
              t = not_null(k_26);
              {
                ATerm r_26 = NULL;
                t = o_0(t);
                {
                  p_26 = t;
                  {
                    ATerm s_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_26)), not_null(n_26));
                    {
                      s_26 = t;
                      if(((r_26 != NULL) && (r_26 != s_26)))
                        _fail(s_26);
                      else
                        r_26 = s_26;
                    }
                    t = not_null(r_26);
                  }
                }
              }
            }
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = k_11;
            {
              ATerm u_11 = t;
              int v_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_26 = NULL,x_26 = NULL;
                  ATerm w_26 = NULL;
                  t = SSLgetAnnotations(not_null(j_26));
                  {
                    w_26 = t;
                    if(((v_26 != NULL) && (v_26 != w_26)))
                      _fail(w_26);
                    else
                      v_26 = w_26;
                  }
                  {
                    t = not_null(k_26);
                    {
                      ATerm v_27 = NULL;
                      t = o_0(t);
                      {
                        x_26 = t;
                        {
                          ATerm w_27 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_26)), not_null(v_26));
                          {
                            w_27 = t;
                            if(((v_27 != NULL) && (v_27 != w_27)))
                              _fail(w_27);
                            else
                              v_27 = w_27;
                          }
                          t = not_null(v_27);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(v_11);
                }
              else
                {
                  t = u_11;
                  {
                    ATerm z_27 = NULL,b_28 = NULL;
                    ATerm a_28 = NULL;
                    t = SSLgetAnnotations(not_null(j_26));
                    {
                      a_28 = t;
                      if(((z_27 != NULL) && (z_27 != a_28)))
                        _fail(a_28);
                      else
                        z_27 = a_28;
                    }
                    {
                      t = not_null(k_26);
                      {
                        ATerm d_28 = NULL;
                        t = o_0(t);
                        {
                          b_28 = t;
                          {
                            ATerm e_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_28)), not_null(z_27));
                            {
                              e_28 = t;
                              if(((d_28 != NULL) && (d_28 != e_28)))
                                _fail(e_28);
                              else
                                d_28 = e_28;
                            }
                            t = not_null(d_28);
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
ATerm VarDec_2 (ATerm t, ATerm a_71 (ATerm), ATerm b_71 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  w_28 :
  if(match_cons(d_29, sym_VarDec_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      {
        ATerm l_29 = NULL,n_29 = NULL;
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(d_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
        {
          t = not_null(e_29);
          {
            ATerm p_29 = NULL;
            t = a_71(t);
            {
              n_29 = t;
              {
                t = not_null(f_29);
                {
                  ATerm r_29 = NULL;
                  t = b_71(t);
                  {
                    p_29 = t;
                    {
                      ATerm s_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_29), not_null(p_29)), not_null(l_29));
                      {
                        s_29 = t;
                        if(((r_29 != NULL) && (r_29 != s_29)))
                          _fail(s_29);
                        else
                          r_29 = s_29;
                      }
                      t = not_null(r_29);
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
ATerm SDef_3 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_SDef_3))
    {
      o_30 = ATgetArgument(n_30, 0);
      q_30 = ATgetArgument(n_30, 1);
      r_30 = ATgetArgument(n_30, 2);
      {
        ATerm c_31 = NULL,e_31 = NULL;
        ATerm d_31 = NULL;
        t = SSLgetAnnotations(not_null(n_30));
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
        {
          t = not_null(o_30);
          {
            ATerm g_31 = NULL;
            t = e_71(t);
            {
              e_31 = t;
              {
                t = not_null(q_30);
                {
                  ATerm i_31 = NULL;
                  t = f_71(t);
                  {
                    g_31 = t;
                    {
                      t = not_null(r_30);
                      {
                        ATerm k_31 = NULL;
                        t = g_71(t);
                        {
                          i_31 = t;
                          {
                            ATerm l_31 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(e_31), not_null(g_31), not_null(i_31)), not_null(c_31));
                            {
                              l_31 = t;
                              if(((k_31 != NULL) && (k_31 != l_31)))
                                _fail(l_31);
                              else
                                k_31 = l_31;
                            }
                            t = not_null(k_31);
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
ATerm RDef_3 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm m_67 (ATerm))
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_RDef_3))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      c_32 = ATgetArgument(z_31, 2);
      {
        ATerm h_32 = NULL,j_32 = NULL;
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(z_31));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        {
          t = not_null(a_32);
          {
            ATerm l_32 = NULL;
            t = k_67(t);
            {
              j_32 = t;
              {
                t = not_null(b_32);
                {
                  ATerm n_32 = NULL;
                  t = l_67(t);
                  {
                    l_32 = t;
                    {
                      t = not_null(c_32);
                      {
                        ATerm p_32 = NULL;
                        t = m_67(t);
                        {
                          n_32 = t;
                          {
                            ATerm q_32 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(j_32), not_null(l_32), not_null(n_32)), not_null(h_32));
                            {
                              q_32 = t;
                              if(((p_32 != NULL) && (p_32 != q_32)))
                                _fail(q_32);
                              else
                                p_32 = q_32;
                            }
                            t = not_null(p_32);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_DefaultVarDec_1))
    {
      d_33 = ATgetArgument(c_33, 0);
      {
        ATerm g_33 = NULL,i_33 = NULL;
        ATerm h_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          h_33 = t;
          if(((g_33 != NULL) && (g_33 != h_33)))
            _fail(h_33);
          else
            g_33 = h_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm k_33 = NULL;
            t = z_70(t);
            {
              i_33 = t;
              {
                ATerm l_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(i_33)), not_null(g_33));
                {
                  l_33 = t;
                  if(((k_33 != NULL) && (k_33 != l_33)))
                    _fail(l_33);
                  else
                    k_33 = l_33;
                }
                t = not_null(k_33);
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
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_int_to_string(not_null(r_33));
  return(t);
}
ATerm real_to_string_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  t = SSL_real_to_string(not_null(v_33));
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  z_33 :
  if(((ATgetType(b_34) == AT_LIST) && !(ATisEmpty(b_34))))
    {
      c_34 = ATgetFirst((ATermList) b_34);
      d_34 = (ATerm) ATgetNext((ATermList) b_34);
      a_34 :
      if(match_int(c_34, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_34)), term_x_11), term_w_11);
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  h_34 :
  if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
    {
      k_34 = ATgetFirst((ATermList) j_34);
      l_34 = (ATerm) ATgetNext((ATermList) j_34);
      i_34 :
      if(match_int(k_34, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_34)), term_w_11), term_w_11);
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
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
  r_34 = t;
  p_34 :
  if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
    {
      s_34 = ATgetFirst((ATermList) r_34);
      t_34 = (ATerm) ATgetNext((ATermList) r_34);
      q_34 :
      if(match_int(s_34, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_34)), term_y_11), term_w_11);
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
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm o_1 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, o_1);
      }
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm is_double_quoted_chars_0 (ATerm t)
{
  ATerm k_12;
  k_12 = t;
  {
    ATerm y_34 = NULL;
    ATerm z_34 = NULL;
    z_34 = t;
    if(((y_34 != NULL) && (y_34 != z_34)))
      _fail(z_34);
    else
      y_34 = z_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(y_34));
      t = is_quoted_chars_0(t);
    }
  }
  t = k_12;
  return(t);
}
ATerm EnsugarOnce_0 (ATerm t)
{
  ATerm l_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL,j_35 = NULL;
      i_35 = t;
      h_35 :
      if(match_cons(i_35, sym_Str_1))
        {
          j_35 = ATgetArgument(i_35, 0);
          {
            ATerm l_35 = NULL;
            ATerm m_35 = NULL;
            t = not_null(j_35);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm o_12 = t;
                if((PushChoice() == 0))
                  {
                    t = is_double_quoted_chars_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_12;
                  }
                {
                  t = escape_chars_0(t);
                  t = double_quote_chars_0(t);
                }
                return(t);
              }
              t = string_as_chars_1(t, p_1);
              {
                m_35 = t;
                if(((l_35 != NULL) && (l_35 != m_35)))
                  _fail(m_35);
                else
                  l_35 = m_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(l_35));
          }
        }
      else
        {
          if(match_cons(i_35, sym_Real_1))
            {
              j_35 = ATgetArgument(i_35, 0);
              {
                ATerm o_35 = NULL;
                ATerm p_35 = NULL;
                t = not_null(j_35);
                {
                  t = real_to_string_0(t);
                  {
                    p_35 = t;
                    if(((o_35 != NULL) && (o_35 != p_35)))
                      _fail(p_35);
                    else
                      o_35 = p_35;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(o_35));
              }
            }
          else
            {
              if(match_cons(i_35, sym_Int_1))
                {
                  j_35 = ATgetArgument(i_35, 0);
                  {
                    ATerm s_35 = NULL;
                    ATerm t_35 = NULL;
                    t = not_null(j_35);
                    {
                      t = int_to_string_0(t);
                      {
                        t_35 = t;
                        if(((s_35 != NULL) && (s_35 != t_35)))
                          _fail(t_35);
                        else
                          s_35 = t_35;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(s_35));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = l_12;
      {
        ATerm t_12 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, AddLeadingPrime_0);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = t_12;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, AddLeadingPrime_0, _id, _id);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm y_13 = t;
                    int z_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, AddLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(z_13);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm a_14 = t;
                          int b_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, AddLeadingPrime_0, _id);
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
                                    t = Var_1(t, AddLeadingPrime_0);
                                    ;
                                    LocalPopChoice(d_14);
                                  }
                                else
                                  {
                                    t = c_14;
                                    {
                                      ATerm e_14 = t;
                                      int f_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, AddLeadingPrime_0);
                                          ;
                                          LocalPopChoice(f_14);
                                        }
                                      else
                                        {
                                          t = e_14;
                                          {
                                            ATerm g_14 = t;
                                            int h_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, AddLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(h_14);
                                              }
                                            else
                                              {
                                                t = g_14;
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
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_36)), not_null(d_36)), (ATerm) ATinsert(ATempty, not_null(d_36)));
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
  ATerm j_36 = NULL;
  ATerm k_36 = NULL;
  k_36 = t;
  if(((j_36 != NULL) && (j_36 != k_36)))
    _fail(k_36);
  else
    j_36 = k_36;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(j_36));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm g_103 (ATerm))
{
  t = explode_string_0(t);
  {
    t = g_103(t);
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
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(((ATgetType(o_36) == AT_LIST) && !(ATisEmpty(o_36))))
    {
      p_36 = ATgetFirst((ATermList) o_36);
      q_36 = (ATerm) ATgetNext((ATermList) o_36);
      t = not_null(q_36);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  w_36 :
  if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
    {
      z_36 = ATgetFirst((ATermList) y_36);
      a_37 = (ATerm) ATgetNext((ATermList) y_36);
      x_36 :
      if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
        {
          t = not_null(z_36);
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
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm is_quoted_chars_0 (ATerm t)
{
  ATerm j_37 = NULL;
  ATerm k_14;
  k_14 = t;
  {
    ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
    k_37 = t;
    i_37 :
    if(match_cons(k_37, sym__2))
      {
        l_37 = ATgetArgument(k_37, 0);
        m_37 = ATgetArgument(k_37, 1);
        {
          ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
          if(((j_37 != NULL) && (j_37 != l_37)))
            _fail(l_37);
          else
            j_37 = l_37;
          {
            if(((n_37 != NULL) && (n_37 != m_37)))
              _fail(m_37);
            else
              n_37 = m_37;
            {
              t = not_null(n_37);
              {
                o_37 = t;
                h_37 :
                if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
                  {
                    p_37 = ATgetFirst((ATermList) o_37);
                    q_37 = (ATerm) ATgetNext((ATermList) o_37);
                    {
                      ATerm r_37 = NULL,s_37 = NULL;
                      if(((j_37 != NULL) && (j_37 != p_37)))
                        _fail(p_37);
                      else
                        j_37 = p_37;
                      {
                        if(((r_37 != NULL) && (r_37 != q_37)))
                          _fail(q_37);
                        else
                          r_37 = q_37;
                        {
                          t = not_null(r_37);
                          {
                            t = last_0(t);
                            {
                              s_37 = t;
                              if(((j_37 != NULL) && (j_37 != s_37)))
                                _fail(s_37);
                              else
                                j_37 = s_37;
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
  t = k_14;
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
  ATerm w_14;
  w_14 = t;
  {
    ATerm x_37 = NULL;
    ATerm z_37 = NULL;
    z_37 = t;
    if(((x_37 != NULL) && (x_37 != z_37)))
      _fail(z_37);
    else
      x_37 = z_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(x_37));
      t = is_quoted_0(t);
    }
  }
  t = w_14;
  return(t);
}
ATerm Ensugar_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  f_38 :
  if(match_cons(j_38, sym_StratRule_3))
    {
      k_38 = ATgetArgument(j_38, 0);
      l_38 = ATgetArgument(j_38, 1);
      i_38 = ATgetArgument(j_38, 2);
      g_38 :
      if(match_cons(i_38, sym_Id_0))
        {
          t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, not_null(k_38), not_null(l_38));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_38, sym_Rule_3))
        {
          k_38 = ATgetArgument(j_38, 0);
          l_38 = ATgetArgument(j_38, 1);
          i_38 = ATgetArgument(j_38, 2);
          h_38 :
          if(match_cons(i_38, sym_Id_0))
            {
              t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, not_null(k_38), not_null(l_38));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_38, sym_Prim_2))
            {
              k_38 = ATgetArgument(j_38, 0);
              l_38 = ATgetArgument(j_38, 1);
              {
                ATerm u_38 = NULL;
                ATerm x_14;
                x_14 = t;
                {
                  t = not_null(k_38);
                  {
                    ATerm y_14 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_double_quoted_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = y_14;
                      }
                  }
                }
                t = x_14;
                {
                  ATerm v_38 = NULL;
                  t = not_null(k_38);
                  {
                    t = double_quote_0(t);
                    {
                      v_38 = t;
                      if(((u_38 != NULL) && (u_38 != v_38)))
                        _fail(v_38);
                      else
                        u_38 = v_38;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_38), not_null(l_38));
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
ATerm repeat_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm c_39 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = p_93(t);
      t = c_39(t);
      return(t);
    }
    t = try_1(t, q_1);
    return(t);
  }
  t = c_39(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_103 (ATerm))
{
  t = i_103(t);
  {
    ATerm r_1 (ATerm t)
    {
      t = topdown_1(t, i_103);
      return(t);
    }
    t = _all(t, r_1);
  }
  return(t);
}
ATerm Stratego_Ensugar_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm o_39 = NULL;
    ATerm q_39 = NULL;
    o_39 = t;
    {
      ATerm r_39 = NULL;
      ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,z_39 = NULL;
      t = not_null(o_39);
      {
        r_39 = t;
        {
          t = SSL_explode_term(not_null(r_39));
          {
            t_39 = t;
            g_39 :
            if(match_cons(t_39, sym__2))
              {
                u_39 = ATgetArgument(t_39, 0);
                v_39 = ATgetArgument(t_39, 1);
                h_39 :
                if(match_string(u_39, ""))
                  {
                    i_39 :
                    if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
                      {
                        w_39 = ATgetFirst((ATermList) v_39);
                        z_39 = (ATerm) ATgetNext((ATermList) v_39);
                        j_39 :
                        if(((ATgetType(z_39) == AT_LIST) && ATisEmpty(z_39)))
                          {
                            if(((q_39 != NULL) && (q_39 != w_39)))
                              _fail(w_39);
                            else
                              q_39 = w_39;
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
      t = not_null(q_39);
    }
    return(t);
  }
  t = try_1(t, s_1);
  {
    ATerm t_1 (ATerm t)
    {
      t = repeat_1(t, Ensugar_0);
      t = try_1(t, EnsugarOnce_0);
      return(t);
    }
    t = topdown_1(t, t_1);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,e_40 = NULL,f_40 = NULL;
            a_40 = t;
            m_39 :
            if(match_cons(a_40, sym_Seq_2))
              {
                b_40 = ATgetArgument(a_40, 0);
                c_40 = ATgetArgument(a_40, 1);
                n_39 :
                if(match_cons(c_40, sym_Seq_2))
                  {
                    e_40 = ATgetArgument(c_40, 0);
                    f_40 = ATgetArgument(c_40, 1);
                    {
                      ATerm o_40 = NULL;
                      ATerm p_40 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_40), not_null(e_40));
                      {
                        t = u_1(t);
                        {
                          p_40 = t;
                          if(((o_40 != NULL) && (o_40 != p_40)))
                            _fail(p_40);
                          else
                            o_40 = p_40;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_40), not_null(f_40));
                        t = u_1(t);
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
            ;
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
            }
          }
        return(t);
      }
      t = bottomup_1(t, u_1);
      t = stratego_parenthesize_0(t);
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_62 (ATerm), ATerm s_62 (ATerm))
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym__2))
    {
      j_41 = ATgetArgument(i_41, 0);
      k_41 = ATgetArgument(i_41, 1);
      {
        ATerm o_41 = NULL,q_41 = NULL;
        ATerm p_41 = NULL;
        t = SSLgetAnnotations(not_null(i_41));
        {
          p_41 = t;
          if(((o_41 != NULL) && (o_41 != p_41)))
            _fail(p_41);
          else
            o_41 = p_41;
        }
        {
          t = not_null(j_41);
          {
            ATerm s_41 = NULL;
            t = r_62(t);
            {
              q_41 = t;
              {
                t = not_null(k_41);
                {
                  ATerm u_41 = NULL;
                  t = s_62(t);
                  {
                    s_41 = t;
                    {
                      ATerm v_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_41), not_null(s_41)), not_null(o_41));
                      {
                        v_41 = t;
                        if(((u_41 != NULL) && (u_41 != v_41)))
                          _fail(v_41);
                        else
                          u_41 = v_41;
                      }
                      t = not_null(u_41);
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
  ATerm d_15;
  d_15 = t;
  {
    ATerm j_42 = NULL;
    ATerm k_42 = NULL;
    t = term_l_5;
    {
      t = whoami_0(t);
      {
        k_42 = t;
        if(((j_42 != NULL) && (j_42 != k_42)))
          _fail(k_42);
        else
          j_42 = k_42;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_15), not_null(j_42)), term_s_15));
      {
        t = printnl_0(t);
        {
          t = term_u_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_15;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym__2))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      {
        ATerm x_15;
        x_15 = t;
        t = SSL_printnl(not_null(p_42), not_null(q_42));
        t = x_15;
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
  ATerm v_42 = NULL;
  v_42 = t;
  t = SSL_implode_string(not_null(v_42));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
        a_43 = t;
        z_42 :
        if(((ATgetType(a_43) == AT_LIST) && !(ATisEmpty(a_43))))
          {
            b_43 = ATgetFirst((ATermList) a_43);
            c_43 = (ATerm) ATgetNext((ATermList) a_43);
            {
              t = not_null(b_43);
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(c_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_1);
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
  ATerm m_43 = NULL;
  ATerm o_43 = NULL;
  m_43 = t;
  {
    ATerm p_43 = NULL;
    ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
    t = not_null(m_43);
    {
      p_43 = t;
      {
        t = SSL_explode_term(not_null(p_43));
        {
          r_43 = t;
          k_43 :
          if(match_cons(r_43, sym__2))
            {
              s_43 = ATgetArgument(r_43, 0);
              t_43 = ATgetArgument(r_43, 1);
              l_43 :
              if(match_string(s_43, ""))
                {
                  if(((o_43 != NULL) && (o_43 != t_43)))
                    _fail(t_43);
                  else
                    o_43 = t_43;
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
      t = not_null(o_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm x_43 (ATerm t)
  {
    ATerm a_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_43);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = a_16;
        {
          t = Nil_0(t);
          t = s_80(t);
        }
      }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym__2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      {
        t = not_null(b_44);
        {
          ATerm w_1 (ATerm t)
          {
            t = not_null(c_44);
            return(t);
          }
          t = at_end_1(t, w_1);
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
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  t = SSL_explode_string(not_null(h_44));
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
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_1);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
              q_44 = t;
              p_44 :
              if(match_cons(q_44, sym_Path_1))
                {
                  r_44 = ATgetArgument(q_44, 0);
                  t = not_null(r_44);
                }
              else
                {
                  if(match_cons(q_44, sym_Var_1))
                    {
                      r_44 = ATgetArgument(q_44, 0);
                      {
                        t = not_null(r_44);
                        {
                          ATerm x_16 = t;
                          int y_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(y_16);
                            }
                          else
                            {
                              t = x_16;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = term_z_16;
                                  return(t);
                                }
                                t = debug_1(t, y_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_44, sym_Prefix_2))
                        {
                          r_44 = ATgetArgument(q_44, 0);
                          s_44 = ATgetArgument(q_44, 1);
                          {
                            ATerm x_44 = NULL,z_44 = NULL;
                            ATerm e_17;
                            e_17 = t;
                            {
                              ATerm y_44 = NULL;
                              t = not_null(r_44);
                              {
                                t = eval_config_0(t);
                                {
                                  y_44 = t;
                                  if(((x_44 != NULL) && (x_44 != y_44)))
                                    _fail(y_44);
                                  else
                                    x_44 = y_44;
                                }
                              }
                            }
                            t = e_17;
                            {
                              ATerm a_45 = NULL;
                              t = not_null(s_44);
                              {
                                t = eval_config_0(t);
                                {
                                  a_45 = t;
                                  if(((z_44 != NULL) && (z_44 != a_45)))
                                    _fail(a_45);
                                  else
                                    z_44 = a_45;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_44), not_null(z_44));
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
  ATerm i_45 = NULL;
  i_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(i_45));
    {
      t = table_get_0(t);
      {
        ATerm z_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_17;
            j_17 = t;
            {
              ATerm k_45 = NULL;
              ATerm l_45 = NULL;
              l_45 = t;
              if(((k_45 != NULL) && (k_45 != l_45)))
                _fail(l_45);
              else
                k_45 = l_45;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_17, not_null(i_45), not_null(k_45));
                t = table_put_0(t);
              }
            }
            t = j_17;
          }
          return(t);
        }
        t = try_1(t, z_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm a_2 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm p_45 = NULL;
      ATerm q_45 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          q_45 = t;
          if(((p_45 != NULL) && (p_45 != q_45)))
            _fail(q_45);
          else
            p_45 = q_45;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_45), term_p_17);
        t = geq_0(t);
      }
    }
    t = n_17;
    t = b_101(t);
    return(t);
  }
  t = try_1(t, a_2);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  w_45 = t;
  u_45 :
  if(match_cons(w_45, sym__2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      v_45 :
      if(match_cons(y_45, sym_Stream_1))
        {
          z_45 = ATgetArgument(y_45, 0);
          {
            ATerm d_46 = NULL;
            t = SSL_fputc(not_null(x_45), not_null(z_45));
            {
              ATerm e_46 = NULL;
              e_46 = t;
              if(((d_46 != NULL) && (d_46 != e_46)))
                _fail(e_46);
              else
                d_46 = e_46;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_46));
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
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  l_46 = t;
  j_46 :
  if(match_cons(l_46, sym__2))
    {
      m_46 = ATgetArgument(l_46, 0);
      o_46 = ATgetArgument(l_46, 1);
      k_46 :
      if(match_cons(m_46, sym_Stream_1))
        {
          n_46 = ATgetArgument(m_46, 0);
          {
            ATerm r_46 = NULL;
            t = SSL_write_term_to_stream_text(not_null(n_46), not_null(o_46));
            {
              ATerm s_46 = NULL;
              s_46 = t;
              if(((r_46 != NULL) && (r_46 != s_46)))
                _fail(s_46);
              else
                r_46 = s_46;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_46));
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
  ATerm b_2 (ATerm t)
  {
    ATerm a_47 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm g_47 = NULL;
      g_47 = t;
      if(((a_47 != NULL) && (a_47 != g_47)))
        _fail(g_47);
      else
        a_47 = g_47;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(a_47));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, b_2);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
  m_47 = t;
  k_47 :
  if(match_cons(m_47, sym__2))
    {
      n_47 = ATgetArgument(m_47, 0);
      p_47 = ATgetArgument(m_47, 1);
      l_47 :
      if(match_cons(n_47, sym_Stream_1))
        {
          o_47 = ATgetArgument(n_47, 0);
          {
            ATerm s_47 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(o_47), not_null(p_47));
            {
              ATerm t_47 = NULL;
              t_47 = t;
              if(((s_47 != NULL) && (s_47 != t_47)))
                _fail(t_47);
              else
                s_47 = t_47;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_47));
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
ATerm WriteToFile_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm a_48 = NULL,b_48 = NULL,h_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym__2))
    {
      b_48 = ATgetArgument(a_48, 0);
      h_48 = ATgetArgument(a_48, 1);
      {
        ATerm k_48 = NULL,m_48 = NULL;
        t = not_null(b_48);
        {
          ATerm l_48 = NULL;
          l_48 = t;
          if(((k_48 != NULL) && (k_48 != l_48)))
            _fail(l_48);
          else
            k_48 = l_48;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_48), term_r_17);
            {
              t = open_stream_0(t);
              {
                ATerm n_48 = NULL;
                n_48 = t;
                if(((m_48 != NULL) && (m_48 != n_48)))
                  _fail(n_48);
                else
                  m_48 = n_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_48), not_null(h_48));
                  {
                    t = c_91(t);
                    {
                      t = fclose_0(t);
                      t = not_null(h_48);
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
  ATerm z_48 = NULL;
  ATerm s_17;
  s_17 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_2 (ATerm t)
          {
            ATerm a_49 = NULL,b_49 = NULL;
            a_49 = t;
            w_48 :
            if(match_cons(a_49, sym_Output_1))
              {
                b_49 = ATgetArgument(a_49, 0);
                if(((z_48 != NULL) && (z_48 != b_49)))
                  _fail(b_49);
                else
                  z_48 = b_49;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_2);
          ;
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          {
            ATerm c_49 = NULL;
            t = term_v_17;
            {
              c_49 = t;
              if(((z_48 != NULL) && (z_48 != c_49)))
                _fail(c_49);
              else
                z_48 = c_49;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_2, _id);
  }
  t = s_17;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        t = not_null(z_48);
        return(t);
      }
      t = split_2(t, f_2, _id);
      return(t);
    }
    t = _2(t, _id, e_2);
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 (ATerm t)
          {
            ATerm h_2 (ATerm t)
            {
              ATerm d_49 = NULL;
              d_49 = t;
              y_48 :
              if(!(match_cons(d_49, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_2);
            return(t);
          }
          t = _2(t, g_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm j_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  ATerm c_18;
  c_18 = t;
  t = dtime_0(t);
  t = c_18;
  {
    t = g_77(t);
    {
      ATerm d_18;
      d_18 = t;
      {
        ATerm k_49 = NULL;
        t = dtime_0(t);
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
      }
      t = d_18;
      {
        l_49 = t;
        i_49 :
        if(match_cons(l_49, sym__2))
          {
            m_49 = ATgetArgument(l_49, 0);
            n_49 = ATgetArgument(l_49, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_49)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_49))), not_null(n_49));
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
  ATerm v_49 = NULL,w_49 = NULL;
  ATerm c_50 (ATerm t)
  {
    t = SSL_fclose(not_null(w_49));
    return(t);
  }
  w_49 = t;
  u_49 :
  if(match_cons(w_49, sym_Stream_1))
    {
      v_49 = ATgetArgument(w_49, 0);
      {
        ATerm h_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(v_49));
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = h_18;
            t = c_50(t);
          }
      }
    }
  else
    {
      t = c_50(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm f_50 = NULL,h_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym_Stream_1))
    {
      h_50 = ATgetArgument(f_50, 0);
      t = SSL_read_term_from_stream(not_null(h_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm m_18;
  m_18 = t;
  {
    ATerm m_50 = NULL,o_50 = NULL;
    ATerm n_18;
    n_18 = t;
    {
      ATerm n_50 = NULL;
      t = o_90(t);
      {
        n_50 = t;
        if(((m_50 != NULL) && (m_50 != n_50)))
          _fail(n_50);
        else
          m_50 = n_50;
      }
    }
    t = n_18;
    {
      ATerm p_50 = NULL;
      p_50 = t;
      if(((o_50 != NULL) && (o_50 != p_50)))
        _fail(p_50);
      else
        o_50 = p_50;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_50)), not_null(m_50)));
        t = printnl_0(t);
      }
    }
  }
  t = m_18;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym__2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      {
        ATerm a_51 = NULL;
        t = SSL_fopen(not_null(w_50), not_null(x_50));
        {
          ATerm b_51 = NULL;
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_51));
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
  ATerm f_51 = NULL;
  f_51 = t;
  t = SSL_is_string(not_null(f_51));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm j_51 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm k_51 = NULL;
    k_51 = t;
    if(((j_51 != NULL) && (j_51 != k_51)))
      _fail(k_51);
    else
      j_51 = k_51;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_51));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm n_51 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm o_51 = NULL;
    o_51 = t;
    if(((n_51 != NULL) && (n_51 != o_51)))
      _fail(o_51);
    else
      n_51 = o_51;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_51));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm s_51 = NULL;
    s_51 = t;
    if(((r_51 != NULL) && (r_51 != s_51)))
      _fail(s_51);
    else
      r_51 = s_51;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_51));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(y_51, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(y_51, sym_stdin_0))
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
  ATerm i_52 = NULL;
  ATerm k_52 = NULL,l_52 = NULL;
  i_52 = t;
  {
    ATerm m_52 = NULL;
    ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
    t = not_null(i_52);
    {
      m_52 = t;
      {
        t = SSL_explode_term(not_null(m_52));
        {
          o_52 = t;
          f_52 :
          if(match_cons(o_52, sym__2))
            {
              p_52 = ATgetArgument(o_52, 0);
              q_52 = ATgetArgument(o_52, 1);
              g_52 :
              if(match_string(p_52, ""))
                {
                  h_52 :
                  if(((ATgetType(q_52) == AT_LIST) && !(ATisEmpty(q_52))))
                    {
                      r_52 = ATgetFirst((ATermList) q_52);
                      s_52 = (ATerm) ATgetNext((ATermList) q_52);
                      {
                        if(((l_52 != NULL) && (l_52 != r_52)))
                          _fail(r_52);
                        else
                          l_52 = r_52;
                        if(((k_52 != NULL) && (k_52 != s_52)))
                          _fail(s_52);
                        else
                          k_52 = s_52;
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
    t = not_null(l_52);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym__2))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm d_53 = NULL,e_53 = NULL;
                    d_53 = t;
                    y_52 :
                    if(match_cons(d_53, sym_Path_1))
                      {
                        e_53 = ATgetArgument(d_53, 0);
                        t = not_null(e_53);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, i_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
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
  ATerm m_53 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_53 = NULL;
      ATerm l_53 = NULL;
      l_53 = t;
      if(((k_53 != NULL) && (k_53 != l_53)))
        _fail(l_53);
      else
        k_53 = l_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_53), term_z_18);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_a_19;
          return(t);
        }
        t = debug_1(t, j_2);
        _fail(t);
      }
    }
  {
    ATerm i_19;
    i_19 = t;
    {
      ATerm n_53 = NULL;
      t = read_from_stream_0(t);
      {
        n_53 = t;
        if(((m_53 != NULL) && (m_53 != n_53)))
          _fail(n_53);
        else
          m_53 = n_53;
      }
    }
    t = i_19;
    {
      t = fclose_0(t);
      t = not_null(m_53);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm s_53 = NULL,u_53 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm t_53 = NULL;
    t = e_79(t);
    {
      t_53 = t;
      if(((s_53 != NULL) && (s_53 != t_53)))
        _fail(t_53);
      else
        s_53 = t_53;
    }
  }
  t = j_19;
  {
    ATerm x_53 = NULL;
    t = f_79(t);
    {
      x_53 = t;
      if(((u_53 != NULL) && (u_53 != x_53)))
        _fail(x_53);
      else
        u_53 = x_53;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_53), not_null(u_53));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_54 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm j_54 = NULL,l_54 = NULL;
          j_54 = t;
          b_54 :
          if(match_cons(j_54, sym_Input_1))
            {
              l_54 = ATgetArgument(j_54, 0);
              if(((d_54 != NULL) && (d_54 != l_54)))
                _fail(l_54);
              else
                d_54 = l_54;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_2);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm m_54 = NULL;
          t = term_n_19;
          {
            m_54 = t;
            if(((d_54 != NULL) && (d_54 != m_54)))
              _fail(m_54);
            else
              d_54 = m_54;
          }
        }
      }
  }
  t = k_19;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(d_54);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm r_54 = NULL;
    r_54 = t;
    p_54 :
    if(!(match_string(r_54, "-k")))
      {
        if(!(match_string(r_54, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm s_54 = NULL;
      ATerm t_54 = NULL;
      t = string_to_int_0(t);
      {
        t_54 = t;
        if(((s_54 != NULL) && (s_54 != t_54)))
          _fail(t_54);
        else
          s_54 = t_54;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_19, not_null(s_54));
        t = set_config_0(t);
      }
    }
    t = o_19;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  t = SSL_string_to_int(not_null(w_54));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm e_55 = NULL;
        e_55 = t;
        z_54 :
        if(!(match_string(e_55, "-S")))
          {
            if(!(match_string(e_55, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_e_20;
        t = set_config_0(t);
        t = term_f_20;
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = term_g_20;
        return(t);
      }
      t = Option_3(t, p_2, q_2, r_2);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = v_19;
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm f_55 = NULL;
              f_55 = t;
              a_55 :
              if(!(match_string(f_55, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              ATerm i_55 = NULL;
              ATerm j_20;
              j_20 = t;
              {
                ATerm g_55 = NULL;
                ATerm h_55 = NULL;
                t = string_to_int_0(t);
                {
                  h_55 = t;
                  if(((g_55 != NULL) && (g_55 != h_55)))
                    _fail(h_55);
                  else
                    g_55 = h_55;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(g_55));
                  t = set_config_0(t);
                }
              }
              t = j_20;
              {
                ATerm j_55 = NULL;
                j_55 = t;
                if(((i_55 != NULL) && (i_55 != j_55)))
                  _fail(j_55);
                else
                  i_55 = j_55;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_55));
              }
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              t = term_k_20;
              return(t);
            }
            t = ArgOption_3(t, s_2, t_2, u_2);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            {
              ATerm v_2 (ATerm t)
              {
                ATerm k_55 = NULL;
                k_55 = t;
                d_55 :
                if(!(match_string(k_55, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_q_20;
                t = set_config_0(t);
                t = term_r_20;
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_t_20;
                return(t);
              }
              t = Option_3(t, v_2, w_2, x_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm q_55 = NULL;
    q_55 = t;
    n_55 :
    if(!(match_string(q_55, "-o")))
      {
        if(!(match_string(q_55, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm t_55 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm r_55 = NULL;
      ATerm s_55 = NULL;
      s_55 = t;
      if(((r_55 != NULL) && (r_55 != s_55)))
        _fail(s_55);
      else
        r_55 = s_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(r_55));
        t = set_config_0(t);
      }
    }
    t = y_20;
    {
      ATerm u_55 = NULL;
      u_55 = t;
      if(((t_55 != NULL) && (t_55 != u_55)))
        _fail(u_55);
      else
        t_55 = u_55;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_55));
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_a_21;
    return(t);
  }
  t = ArgOption_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm y_55 = NULL;
          y_55 = t;
          x_55 :
          if(!(match_string(y_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm c_3 (ATerm t)
        {
          t = term_t_21;
          t = set_config_0(t);
          t = term_u_21;
          return(t);
        }
        ATerm d_3 (ATerm t)
        {
          t = term_v_21;
          return(t);
        }
        t = Option_3(t, b_3, c_3, d_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  e_56 = t;
  c_56 :
  if(match_string(e_56, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
        {
          f_56 = ATgetFirst((ATermList) e_56);
          g_56 = (ATerm) ATgetNext((ATermList) e_56);
          d_56 :
          if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
            {
              h_56 = ATgetFirst((ATermList) g_56);
              i_56 = (ATerm) ATgetNext((ATermList) g_56);
              {
                ATerm m_56 = NULL;
                ATerm y_21;
                y_21 = t;
                {
                  t = not_null(f_56);
                  t = k_0(t);
                }
                t = y_21;
                {
                  ATerm n_56 = NULL;
                  t = not_null(h_56);
                  {
                    t = m_0(t);
                    {
                      n_56 = t;
                      if(((m_56 != NULL) && (m_56 != n_56)))
                        _fail(n_56);
                      else
                        m_56 = n_56;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_56)), not_null(m_56));
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
  ATerm e_3 (ATerm t)
  {
    ATerm u_56 = NULL;
    u_56 = t;
    r_56 :
    if(!(match_string(u_56, "-i")))
      {
        if(!(match_string(u_56, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm x_56 = NULL;
    ATerm z_21;
    z_21 = t;
    {
      ATerm v_56 = NULL;
      ATerm w_56 = NULL;
      w_56 = t;
      if(((v_56 != NULL) && (v_56 != w_56)))
        _fail(w_56);
      else
        v_56 = w_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(v_56));
        t = set_config_0(t);
      }
    }
    t = z_21;
    {
      ATerm y_56 = NULL;
      y_56 = t;
      if(((x_56 != NULL) && (x_56 != y_56)))
        _fail(y_56);
      else
        x_56 = y_56;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_56));
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_i_22;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, i_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm c_57 = NULL;
  t = report_run_time_0(t);
  {
    ATerm d_57 = NULL;
    t = term_l_5;
    {
      t = whoami_0(t);
      {
        d_57 = t;
        if(((c_57 != NULL) && (c_57 != d_57)))
          _fail(d_57);
        else
          c_57 = d_57;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, term_n_22), not_null(c_57)));
      {
        t = printnl_0(t);
        {
          t = term_u_15;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_r_22;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  t = SSL_TicksToSeconds(not_null(g_57));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(match_cons(l_57, sym__2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_57), not_null(n_57));
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = SSL_addr(not_null(m_57), not_null(n_57));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_86 (ATerm), ATerm t_86 (ATerm))
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_86(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
        u_57 = t;
        t_57 :
        if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
          {
            v_57 = ATgetFirst((ATermList) u_57);
            w_57 = (ATerm) ATgetNext((ATermList) u_57);
            {
              ATerm z_57 = NULL;
              ATerm a_58 = NULL;
              t = not_null(w_57);
              {
                t = foldr_2(t, s_86, t_86);
                {
                  a_58 = t;
                  if(((z_57 != NULL) && (z_57 != a_58)))
                    _fail(a_58);
                  else
                    z_57 = a_58;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), not_null(z_57));
                t = t_86(t);
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
ATerm crush_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm h_58 = NULL;
  ATerm j_58 = NULL;
  h_58 = t;
  {
    ATerm k_58 = NULL;
    ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
    t = not_null(h_58);
    {
      k_58 = t;
      {
        t = SSL_explode_term(not_null(k_58));
        {
          m_58 = t;
          g_58 :
          if(match_cons(m_58, sym__2))
            {
              n_58 = ATgetArgument(m_58, 0);
              o_58 = ATgetArgument(m_58, 1);
              if(((j_58 != NULL) && (j_58 != o_58)))
                _fail(o_58);
              else
                j_58 = o_58;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_58);
      t = foldr_2(t, q_84, r_84);
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
    ATerm j_3 (ATerm t)
    {
      t = term_d_20;
      return(t);
    }
    t = crush_2(t, j_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm x_22;
        x_22 = t;
        {
          ATerm c_23 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_58), not_null(w_58));
              ;
              LocalPopChoice(d_23);
            }
          else
            {
              t = c_23;
              t = SSL_gtr(not_null(v_58), not_null(w_58));
            }
        }
        t = x_22;
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
  ATerm c_59 = NULL;
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
      d_59 = t;
      b_59 :
      if(match_cons(d_59, sym__2))
        {
          e_59 = ATgetArgument(d_59, 0);
          f_59 = ATgetArgument(d_59, 1);
          {
            if(((c_59 != NULL) && (c_59 != e_59)))
              _fail(e_59);
            else
              c_59 = e_59;
            if(((c_59 != NULL) && (c_59 != f_59)))
              _fail(f_59);
            else
              c_59 = f_59;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_101 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm i_59 = NULL;
      ATerm j_59 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          j_59 = t;
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_59), term_u_15);
        t = geq_0(t);
      }
    }
    t = g_23;
    t = a_101(t);
    return(t);
  }
  t = try_1(t, k_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm n_59 = NULL,p_59 = NULL;
    ATerm h_23;
    h_23 = t;
    {
      ATerm o_59 = NULL;
      t = run_time_0(t);
      {
        o_59 = t;
        if(((n_59 != NULL) && (n_59 != o_59)))
          _fail(o_59);
        else
          n_59 = o_59;
      }
    }
    t = h_23;
    {
      ATerm q_59 = NULL;
      t = term_l_5;
      {
        t = whoami_0(t);
        {
          q_59 = t;
          if(((p_59 != NULL) && (p_59 != q_59)))
            _fail(q_59);
          else
            p_59 = q_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_23), not_null(n_59)), term_i_23), not_null(p_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_d_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_59 = NULL;
  x_59 = t;
  w_59 :
  if(match_cons(x_59, sym_Version_0))
    {
      ATerm z_59 = NULL,b_60 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm a_60 = NULL;
        t = SSLgetAnnotations(not_null(x_59));
        {
          a_60 = t;
          if(((z_59 != NULL) && (z_59 != a_60)))
            _fail(a_60);
          else
            z_59 = a_60;
        }
      }
      t = o_23;
      {
        ATerm c_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_59));
        {
          c_60 = t;
          if(((b_60 != NULL) && (b_60 != c_60)))
            _fail(c_60);
          else
            b_60 = c_60;
        }
        t = not_null(b_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_23;
      t = get_config_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm w_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = w_23;
              {
                ATerm a_24 = t;
                int b_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(b_24);
                  }
                else
                  {
                    t = a_24;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, m_3);
      }
    }
  t = e_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  t = SSL_table_create(not_null(h_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_60 = NULL;
  l_60 = t;
  {
    ATerm c_24;
    c_24 = t;
    {
      t = term_d_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, not_null(l_60));
          t = table_put_0(t);
        }
      }
    }
    t = c_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  t = SSL_table_destroy(not_null(t_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  t = SSL_exit(not_null(z_60));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm c_61 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = Cons_2(t, c_80, c_61);
      }
    return(t);
  }
  t = c_61(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  a_63 = t;
  x_62 :
  if(((ATgetType(a_63) == AT_LIST) && !(ATisEmpty(a_63))))
    {
      y_62 = ATgetFirst((ATermList) a_63);
      z_62 = (ATerm) ATgetNext((ATermList) a_63);
      {
        ATerm d_63 = NULL;
        t = not_null(z_62);
        {
          ATerm h_24;
          h_24 = t;
          {
            ATerm e_63 = NULL,g_63 = NULL,i_63 = NULL;
            ATerm i_24;
            i_24 = t;
            {
              ATerm f_63 = NULL;
              t = i_0(t);
              {
                f_63 = t;
                if(((e_63 != NULL) && (e_63 != f_63)))
                  _fail(f_63);
                else
                  e_63 = f_63;
              }
            }
            t = i_24;
            {
              ATerm h_63 = NULL;
              t = not_null(y_62);
              {
                t = g_0(t);
                {
                  h_63 = t;
                  if(((g_63 != NULL) && (g_63 != h_63)))
                    _fail(h_63);
                  else
                    g_63 = h_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_63)), not_null(g_63));
                {
                  i_63 = t;
                  if(((d_63 != NULL) && (d_63 != i_63)))
                    _fail(i_63);
                  else
                    d_63 = i_63;
                }
              }
            }
          }
          t = h_24;
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(d_63);
              return(t);
            }
            t = reverse_acc_2(t, g_0, n_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_63) == AT_LIST) && ATisEmpty(a_63)))
        {
          {
            t = term_l_5;
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
  ATerm o_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm t_63 = NULL,u_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym_Program_1))
    {
      u_63 = ATgetArgument(t_63, 0);
      {
        ATerm x_63 = NULL,z_63 = NULL;
        ATerm y_63 = NULL;
        t = SSLgetAnnotations(not_null(t_63));
        {
          y_63 = t;
          if(((x_63 != NULL) && (x_63 != y_63)))
            _fail(y_63);
          else
            x_63 = y_63;
        }
        {
          t = not_null(u_63);
          {
            ATerm d_64 = NULL;
            t = i_76(t);
            {
              z_63 = t;
              {
                ATerm e_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_63)), not_null(x_63));
                {
                  e_64 = t;
                  if(((d_64 != NULL) && (d_64 != e_64)))
                    _fail(e_64);
                  else
                    d_64 = e_64;
                }
                t = not_null(d_64);
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
  ATerm n_64 = NULL;
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_64 = NULL;
      t = term_r_22;
      {
        t = get_config_0(t);
        {
          o_64 = t;
          if(((n_64 != NULL) && (n_64 != o_64)))
            _fail(o_64);
          else
            n_64 = o_64;
        }
      }
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm p_64 = NULL;
            p_64 = t;
            if(((n_64 != NULL) && (n_64 != p_64)))
              _fail(p_64);
            else
              n_64 = p_64;
            return(t);
          }
          t = Program_1(t, q_3);
          return(t);
        }
        t = option_defined_1(t, p_3);
      }
    }
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(n_64);
        return(t);
      }
      t = short_description_1(t, s_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, r_3);
    {
      t = term_p_24;
      {
        t = echo_0(t);
        {
          t = term_y_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm q_64 = NULL;
                  ATerm r_64 = NULL;
                  r_64 = t;
                  if(((q_64 != NULL) && (q_64 != r_64)))
                    _fail(r_64);
                  else
                    q_64 = r_64;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_64)), term_z_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm s_64 = NULL;
                    ATerm t_64 = NULL;
                    ATerm v_3 (ATerm t)
                    {
                      t = not_null(n_64);
                      return(t);
                    }
                    t = long_description_1(t, v_3);
                    {
                      t_64 = t;
                      if(((s_64 != NULL) && (s_64 != t_64)))
                        _fail(t_64);
                      else
                        s_64 = t_64;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(s_64)), term_a_25);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_3);
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
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm f_65 = NULL,g_65 = NULL;
  f_65 = t;
  e_65 :
  if(match_cons(f_65, sym_Undefined_1))
    {
      g_65 = ATgetArgument(f_65, 0);
      {
        ATerm j_65 = NULL,n_65 = NULL;
        ATerm k_65 = NULL;
        t = SSLgetAnnotations(not_null(f_65));
        {
          k_65 = t;
          if(((j_65 != NULL) && (j_65 != k_65)))
            _fail(k_65);
          else
            j_65 = k_65;
        }
        {
          t = not_null(g_65);
          {
            ATerm p_65 = NULL;
            t = j_76(t);
            {
              n_65 = t;
              {
                ATerm q_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_65)), not_null(j_65));
                {
                  q_65 = t;
                  if(((p_65 != NULL) && (p_65 != q_65)))
                    _fail(q_65);
                  else
                    p_65 = q_65;
                }
                t = not_null(p_65);
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
ATerm fetch_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm v_65 (ATerm t)
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_80, _id);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = Cons_2(t, _id, v_65);
      }
    return(t);
  }
  t = v_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_92 (ATerm))
{
  t = fetch_1(t, g_92);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  w_65 :
  if(((ATgetType(x_65) == AT_LIST) && ATisEmpty(x_65)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_65) == AT_LIST) && !(ATisEmpty(x_65))))
        {
          y_65 = ATgetFirst((ATermList) x_65);
          z_65 = (ATerm) ATgetNext((ATermList) x_65);
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
  ATerm f_25;
  f_25 = t;
  {
    ATerm c_66 = NULL;
    ATerm f_66 = NULL;
    ATerm g_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = g_25;
        {
          ATerm d_66 = NULL;
          ATerm e_66 = NULL;
          e_66 = t;
          if(((d_66 != NULL) && (d_66 != e_66)))
            _fail(e_66);
          else
            d_66 = e_66;
          t = (ATerm) ATinsert(ATempty, not_null(d_66));
        }
      }
    {
      f_66 = t;
      if(((c_66 != NULL) && (c_66 != f_66)))
        _fail(f_66);
      else
        c_66 = f_66;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_17, not_null(c_66));
      t = printnl_0(t);
    }
  }
  t = f_25;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_r_22;
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
  ATerm l_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = l_25;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_cons(m_66, sym_Help_0))
    {
      ATerm o_66 = NULL,q_66 = NULL;
      ATerm s_25;
      s_25 = t;
      {
        ATerm p_66 = NULL;
        t = SSLgetAnnotations(not_null(m_66));
        {
          p_66 = t;
          if(((o_66 != NULL) && (o_66 != p_66)))
            _fail(p_66);
          else
            o_66 = p_66;
        }
      }
      t = s_25;
      {
        ATerm r_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_66));
        {
          r_66 = t;
          if(((q_66 != NULL) && (q_66 != r_66)))
            _fail(r_66);
          else
            q_66 = r_66;
        }
        t = not_null(q_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_3 (ATerm t)
      {
        ATerm x_66 = NULL;
        x_66 = t;
        v_66 :
        if(!(match_string(x_66, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_y_25;
        t = set_config_0(t);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_z_25;
        return(t);
      }
      t = Option_3(t, w_3, x_3, y_3);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm y_66 = NULL;
          y_66 = t;
          w_66 :
          if(!(match_string(y_66, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_4 (ATerm t)
        {
          t = term_y_25;
          {
            t = set_config_0(t);
            {
              t = term_b_26;
              t = set_config_0(t);
            }
          }
          t = term_c_26;
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_d_26;
          return(t);
        }
        t = Option_3(t, z_3, a_4, b_4);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  a_67 :
  if(match_cons(b_67, sym__2))
    {
      c_67 = ATgetArgument(b_67, 0);
      d_67 = ATgetArgument(b_67, 1);
      t = SSL_table_get(not_null(c_67), not_null(d_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  n_67 = t;
  j_67 :
  if(match_cons(n_67, sym__3))
    {
      o_67 = ATgetArgument(n_67, 0);
      p_67 = ATgetArgument(n_67, 1);
      q_67 = ATgetArgument(n_67, 2);
      {
        ATerm e_26;
        e_26 = t;
        {
          ATerm u_67 = NULL;
          ATerm v_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_67), not_null(p_67));
          {
            ATerm f_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_26);
              }
            else
              {
                t = f_26;
                t = (ATerm) ATempty;
              }
            {
              v_67 = t;
              if(((u_67 != NULL) && (u_67 != v_67)))
                _fail(v_67);
              else
                u_67 = v_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_67), not_null(p_67), (ATerm) ATinsert(CheckATermList(not_null(u_67)), not_null(q_67)));
            t = table_put_0(t);
          }
        }
        t = e_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm z_67 = NULL;
  ATerm a_68 = NULL;
  t = term_l_5;
  {
    t = l_93(t);
    {
      a_68 = t;
      if(((z_67 != NULL) && (z_67 != a_68)))
        _fail(a_68);
      else
        z_67 = a_68;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_24, term_v_24, not_null(z_67));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_string(g_68, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(g_68) == AT_LIST) && !(ATisEmpty(g_68))))
        {
          h_68 = ATgetFirst((ATermList) g_68);
          i_68 = (ATerm) ATgetNext((ATermList) g_68);
          {
            ATerm l_68 = NULL;
            ATerm h_26;
            h_26 = t;
            {
              t = not_null(h_68);
              t = a_0(t);
            }
            t = h_26;
            {
              ATerm m_68 = NULL;
              t = term_l_5;
              {
                t = b_0(t);
                {
                  m_68 = t;
                  if(((l_68 != NULL) && (l_68 != m_68)))
                    _fail(m_68);
                  else
                    l_68 = m_68;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_68)), not_null(l_68));
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
    ATerm s_68 = NULL;
    s_68 = t;
    r_68 :
    if(!(match_string(s_68, "--help")))
      {
        if(!(match_string(s_68, "-h")))
          {
            if(!(match_string(s_68, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_l_26;
    {
      t = set_config_0(t);
      t = term_m_26;
    }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_q_26;
    return(t);
  }
  t = Option_3(t, c_4, d_4, e_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  v_68 = t;
  u_68 :
  if(((ATgetType(v_68) == AT_LIST) && !(ATisEmpty(v_68))))
    {
      w_68 = ATgetFirst((ATermList) v_68);
      x_68 = (ATerm) ATgetNext((ATermList) v_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_68)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL;
  h_69 = t;
  g_69 :
  if(((ATgetType(h_69) == AT_LIST) && !(ATisEmpty(h_69))))
    {
      i_69 = ATgetFirst((ATermList) h_69);
      j_69 = (ATerm) ATgetNext((ATermList) h_69);
      {
        ATerm n_69 = NULL,p_69 = NULL;
        ATerm o_69 = NULL;
        t = SSLgetAnnotations(not_null(h_69));
        {
          o_69 = t;
          if(((n_69 != NULL) && (n_69 != o_69)))
            _fail(o_69);
          else
            n_69 = o_69;
        }
        {
          t = not_null(i_69);
          {
            ATerm r_69 = NULL;
            t = a_64(t);
            {
              p_69 = t;
              {
                t = not_null(j_69);
                {
                  ATerm t_69 = NULL;
                  t = b_64(t);
                  {
                    r_69 = t;
                    {
                      ATerm u_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_69)), not_null(p_69)), not_null(n_69));
                      {
                        u_69 = t;
                        if(((t_69 != NULL) && (t_69 != u_69)))
                          _fail(u_69);
                        else
                          t_69 = u_69;
                      }
                      t = not_null(t_69);
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
  ATerm e_70 = NULL;
  e_70 = t;
  d_70 :
  if(((ATgetType(e_70) == AT_LIST) && ATisEmpty(e_70)))
    {
      {
        ATerm g_70 = NULL,i_70 = NULL;
        ATerm t_26;
        t_26 = t;
        {
          ATerm h_70 = NULL;
          t = SSLgetAnnotations(not_null(e_70));
          {
            h_70 = t;
            if(((g_70 != NULL) && (g_70 != h_70)))
              _fail(h_70);
            else
              g_70 = h_70;
          }
        }
        t = t_26;
        {
          ATerm j_70 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_70));
          {
            j_70 = t;
            if(((i_70 != NULL) && (i_70 != j_70)))
              _fail(j_70);
            else
              i_70 = j_70;
          }
          t = not_null(i_70);
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
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(match_cons(p_70, sym__2))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_17, not_null(q_70), not_null(r_70));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm u_26;
  u_26 = t;
  {
    ATerm f_4 (ATerm t)
    {
      t = term_y_26;
      t = j_93(t);
      return(t);
    }
    t = try_1(t, f_4);
  }
  t = u_26;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm c_71 = NULL;
      ATerm z_26;
      z_26 = t;
      {
        ATerm x_70 = NULL;
        ATerm y_70 = NULL;
        y_70 = t;
        if(((x_70 != NULL) && (x_70 != y_70)))
          _fail(y_70);
        else
          x_70 = y_70;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_22, not_null(x_70));
          t = set_config_0(t);
        }
      }
      t = z_26;
      {
        ATerm d_71 = NULL;
        d_71 = t;
        if(((c_71 != NULL) && (c_71 != d_71)))
          _fail(d_71);
        else
          c_71 = d_71;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_71));
      }
      return(t);
    }
    ATerm h_4 (ATerm t)
    {
      ATerm a_27 = t;
      int b_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              {
                t = j_93(t);
                t = Cons_2(t, _id, h_4);
              }
            }
          ;
          LocalPopChoice(b_27);
        }
      else
        {
          t = a_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_4, h_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  ATerm e_27;
  e_27 = t;
  {
    ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
    p_71 = t;
    l_71 :
    if(match_cons(p_71, sym__3))
      {
        q_71 = ATgetArgument(p_71, 0);
        r_71 = ATgetArgument(p_71, 1);
        s_71 = ATgetArgument(p_71, 2);
        {
          if(((m_71 != NULL) && (m_71 != q_71)))
            _fail(q_71);
          else
            m_71 = q_71;
          {
            if(((n_71 != NULL) && (n_71 != r_71)))
              _fail(r_71);
            else
              n_71 = r_71;
            {
              if(((o_71 != NULL) && (o_71 != s_71)))
                _fail(s_71);
              else
                o_71 = s_71;
              t = SSL_table_put(not_null(m_71), not_null(n_71), not_null(o_71));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm v_71 = NULL;
  ATerm f_27;
  f_27 = t;
  {
    t = term_g_27;
    t = table_put_0(t);
  }
  t = f_27;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
          ;
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_27;
            n_27 = t;
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = o_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_27;
            {
              t = system_usage_0(t);
              {
                t = term_d_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
              ATerm q_27 = t;
              int r_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_27;
                  s_27 = t;
                  {
                    t = term_x_25;
                    t = get_config_0(t);
                  }
                  t = s_27;
                  {
                    t = system_about_0(t);
                    {
                      t = term_d_20;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(r_27);
                }
              else
                {
                  t = q_27;
                  {
                    ATerm k_4 (ATerm t)
                    {
                      ATerm l_4 (ATerm t)
                      {
                        ATerm w_71 = NULL;
                        w_71 = t;
                        if(((v_71 != NULL) && (v_71 != w_71)))
                          _fail(w_71);
                        else
                          v_71 = w_71;
                        return(t);
                      }
                      t = Undefined_1(t, l_4);
                      return(t);
                    }
                    t = option_defined_1(t, k_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_71)), term_t_27));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_u_15;
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
      t = try_1(t, j_4);
      {
        ATerm u_27;
        u_27 = t;
        {
          t = term_t_24;
          t = table_destroy_0(t);
        }
        t = u_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  t = parse_options_1(t, g_78);
  {
    t = store_options_0(t);
    {
      t = i_78(t);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_78);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm c_28 = t;
              int f_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(f_28);
                }
              else
                {
                  t = c_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_77(t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, v_77);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_4, x_77, y_77, n_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm p_4 (ATerm t)
    {
      ATerm i_28;
      i_28 = t;
      {
        ATerm z_71 = NULL;
        ATerm a_72 = NULL;
        t = term_r_22;
        {
          t = get_config_0(t);
          {
            a_72 = t;
            if(((z_71 != NULL) && (z_71 != a_72)))
              _fail(a_72);
            else
              z_71 = a_72;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATempty, not_null(z_71)));
          t = printnl_0(t);
        }
      }
      t = i_28;
      return(t);
    }
    t = if_verbose2_1(t, p_4);
    return(t);
  }
  t = iowrap_4(t, p_77, q_77, r_77, o_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  t = iowrap_3(t, n_77, o_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    t = _2(t, _id, k_77);
    return(t);
  }
  t = iowrap_2(t, q_4, _fail);
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
