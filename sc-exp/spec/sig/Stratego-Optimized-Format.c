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
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_o_17;
ATerm term_v_16;
ATerm term_j_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_y_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_g_8;
ATerm term_x_5;
ATerm term_g_5;
void init_constant_terms (void)
{
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a shallow term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_a_11);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_u_8);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_u_8);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_u_8);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_u_8);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_u_8);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__3, term_e_14, term_f_14, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm Assign_1 (ATerm, ATerm y_69 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm a_64 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm));
ATerm Let_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm PrimT_3 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm Where_1 (ATerm, ATerm n_67 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm));
ATerm Build_1 (ATerm, ATerm v_66 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm shallow_term_expression_0 (ATerm);
ATerm Match_1 (ATerm, ATerm u_66 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_68 (ATerm));
ATerm All_1 (ATerm, ATerm a_68 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm z_67 (ATerm));
ATerm Cong_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm Path_2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_66 (ATerm));
ATerm CallT_3 (ATerm, ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm));
ATerm GChoice_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm));
ATerm LChoice_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm Choice_2 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm Seq_2 (ATerm, ATerm b_67 (ATerm), ATerm c_67 (ATerm));
ATerm Test_1 (ATerm, ATerm o_67 (ATerm));
ATerm Not_1 (ATerm, ATerm m_67 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm FunType_2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm Op_2 (ATerm, ATerm j_63 (ATerm), ATerm k_63 (ATerm));
ATerm ConstType_1 (ATerm, ATerm p_62 (ATerm));
ATerm type_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm));
ATerm SDefT_4 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm SDef_3 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm q_83 (ATerm));
ATerm Strategies_1 (ATerm, ATerm e_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_62 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_84 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_97 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm z_95 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_99 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_95 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_91 (ATerm), ATerm e_91 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
ATerm crush_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_97 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_102 (ATerm));
ATerm map_1 (ATerm, ATerm n_83 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_101 (ATerm));
ATerm Program_1 (ATerm, ATerm t_75 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_100 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_76 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_102 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_102 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_102 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_99 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm n_12 = NULL,o_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Var_1))
    {
      o_12 = ATgetArgument(n_12, 0);
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 = NULL,g_13 = NULL;
            ATerm f_13 = NULL;
            t = SSLgetAnnotations(not_null(n_12));
            {
              f_13 = t;
              if(((b_13 != NULL) && (b_13 != f_13)))
                _fail(f_13);
              else
                b_13 = f_13;
            }
            {
              t = not_null(o_12);
              {
                ATerm i_13 = NULL;
                t = q_0(t);
                {
                  g_13 = t;
                  {
                    ATerm j_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_13)), not_null(b_13));
                    {
                      j_13 = t;
                      if(((i_13 != NULL) && (i_13 != j_13)))
                        _fail(j_13);
                      else
                        i_13 = j_13;
                    }
                    t = not_null(i_13);
                  }
                }
              }
            }
            ;
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm p_4 = t;
              int q_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_13 = NULL,o_13 = NULL;
                  ATerm n_13 = NULL;
                  t = SSLgetAnnotations(not_null(n_12));
                  {
                    n_13 = t;
                    if(((m_13 != NULL) && (m_13 != n_13)))
                      _fail(n_13);
                    else
                      m_13 = n_13;
                  }
                  {
                    t = not_null(o_12);
                    {
                      ATerm q_13 = NULL;
                      t = q_0(t);
                      {
                        o_13 = t;
                        {
                          ATerm r_13 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_13)), not_null(m_13));
                          {
                            r_13 = t;
                            if(((q_13 != NULL) && (q_13 != r_13)))
                              _fail(r_13);
                            else
                              q_13 = r_13;
                          }
                          t = not_null(q_13);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(q_4);
                }
              else
                {
                  t = p_4;
                  {
                    ATerm u_13 = NULL,w_13 = NULL;
                    ATerm v_13 = NULL;
                    t = SSLgetAnnotations(not_null(n_12));
                    {
                      v_13 = t;
                      if(((u_13 != NULL) && (u_13 != v_13)))
                        _fail(v_13);
                      else
                        u_13 = v_13;
                    }
                    {
                      t = not_null(o_12);
                      {
                        ATerm y_13 = NULL;
                        t = q_0(t);
                        {
                          w_13 = t;
                          {
                            ATerm z_13 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_13)), not_null(u_13));
                            {
                              z_13 = t;
                              if(((y_13 != NULL) && (y_13 != z_13)))
                                _fail(z_13);
                              else
                                y_13 = z_13;
                            }
                            t = not_null(y_13);
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
ATerm Assign_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm r_14 = NULL,s_14 = NULL;
  r_14 = t;
  q_14 :
  if(match_cons(r_14, sym_Assign_1))
    {
      s_14 = ATgetArgument(r_14, 0);
      {
        ATerm v_14 = NULL,x_14 = NULL;
        ATerm w_14 = NULL;
        t = SSLgetAnnotations(not_null(r_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
        {
          t = not_null(s_14);
          {
            ATerm z_14 = NULL;
            t = y_69(t);
            {
              x_14 = t;
              {
                ATerm a_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(x_14)), not_null(v_14));
                {
                  a_15 = t;
                  if(((z_14 != NULL) && (z_14 != a_15)))
                    _fail(a_15);
                  else
                    z_14 = a_15;
                }
                t = not_null(z_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm a_64 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_BuildDefault_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = a_64(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm Wld_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym_Wld_0))
    {
      ATerm e_16 = NULL,g_16 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm f_16 = NULL;
        t = SSLgetAnnotations(not_null(c_16));
        {
          f_16 = t;
          if(((e_16 != NULL) && (e_16 != f_16)))
            _fail(f_16);
          else
            e_16 = f_16;
        }
      }
      t = r_4;
      {
        ATerm h_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(e_16));
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
        t = not_null(g_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm s_4 = t;
  int t_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
            ;
            LocalPopChoice(v_4);
          }
        else
          {
            t = u_4;
            {
              ATerm w_4 = t;
              int x_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  ;
                  LocalPopChoice(x_4);
                }
              else
                {
                  t = w_4;
                  {
                    ATerm y_4 = t;
                    int z_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        ;
                        LocalPopChoice(z_4);
                      }
                    else
                      {
                        t = y_4;
                        {
                          ATerm a_5 = t;
                          int b_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              ;
                              LocalPopChoice(b_5);
                            }
                          else
                            {
                              t = a_5;
                              {
                                ATerm c_5 = t;
                                int d_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, c_0);
                                    ;
                                    LocalPopChoice(d_5);
                                  }
                                else
                                  {
                                    t = c_5;
                                    {
                                      ATerm e_5 = t;
                                      int f_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1(t, term_expression_0);
                                          ;
                                          LocalPopChoice(f_5);
                                        }
                                      else
                                        {
                                          t = e_5;
                                          {
                                            ATerm e_0 (ATerm t)
                                            {
                                              t = term_g_5;
                                              return(t);
                                            }
                                            t = debug_1(t, e_0);
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
ATerm Assign_2 (ATerm t, ATerm w_69 (ATerm), ATerm x_69 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Assign_2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        ATerm y_16 = NULL,a_17 = NULL;
        ATerm z_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          z_16 = t;
          if(((y_16 != NULL) && (y_16 != z_16)))
            _fail(z_16);
          else
            y_16 = z_16;
        }
        {
          t = not_null(t_16);
          {
            ATerm c_17 = NULL;
            t = w_69(t);
            {
              a_17 = t;
              {
                t = not_null(u_16);
                {
                  ATerm e_17 = NULL;
                  t = x_69(t);
                  {
                    c_17 = t;
                    {
                      ATerm f_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(a_17), not_null(c_17)), not_null(y_16));
                      {
                        f_17 = t;
                        if(((e_17 != NULL) && (e_17 != f_17)))
                          _fail(f_17);
                        else
                          e_17 = f_17;
                      }
                      t = not_null(e_17);
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
ATerm Let_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_Let_2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      {
        ATerm x_17 = NULL,z_17 = NULL;
        ATerm y_17 = NULL;
        t = SSLgetAnnotations(not_null(r_17));
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
        {
          t = not_null(s_17);
          {
            ATerm b_18 = NULL;
            t = n_66(t);
            {
              z_17 = t;
              {
                t = not_null(t_17);
                {
                  ATerm d_18 = NULL;
                  t = o_66(t);
                  {
                    b_18 = t;
                    {
                      ATerm e_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(z_17), not_null(b_18)), not_null(x_17));
                      {
                        e_18 = t;
                        if(((d_18 != NULL) && (d_18 != e_18)))
                          _fail(e_18);
                        else
                          d_18 = e_18;
                      }
                      t = not_null(d_18);
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
ATerm PrimT_3 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym_PrimT_3))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      u_18 = ATgetArgument(r_18, 2);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(r_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(s_18);
          {
            ATerm d_19 = NULL;
            t = t_67(t);
            {
              b_19 = t;
              {
                t = not_null(t_18);
                {
                  ATerm f_19 = NULL;
                  t = u_67(t);
                  {
                    d_19 = t;
                    {
                      t = not_null(u_18);
                      {
                        ATerm h_19 = NULL;
                        t = v_67(t);
                        {
                          f_19 = t;
                          {
                            ATerm i_19 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(b_19), not_null(d_19), not_null(f_19)), not_null(z_18));
                            {
                              i_19 = t;
                              if(((h_19 != NULL) && (h_19 != i_19)))
                                _fail(i_19);
                              else
                                h_19 = i_19;
                            }
                            t = not_null(h_19);
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
ATerm Where_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_Where_1))
    {
      v_19 = ATgetArgument(u_19, 0);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(v_19);
          {
            ATerm c_20 = NULL;
            t = n_67(t);
            {
              a_20 = t;
              {
                ATerm d_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(a_20)), not_null(y_19));
                {
                  d_20 = t;
                  if(((c_20 != NULL) && (c_20 != d_20)))
                    _fail(d_20);
                  else
                    c_20 = d_20;
                }
                t = not_null(c_20);
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
ATerm is_int_0 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = SSL_is_int(not_null(j_20));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_Scope_2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm y_20 = NULL,a_21 = NULL;
        ATerm z_20 = NULL;
        t = SSLgetAnnotations(not_null(s_20));
        {
          z_20 = t;
          if(((y_20 != NULL) && (y_20 != z_20)))
            _fail(z_20);
          else
            y_20 = z_20;
        }
        {
          t = not_null(t_20);
          {
            ATerm c_21 = NULL;
            t = x_66(t);
            {
              a_21 = t;
              {
                t = not_null(u_20);
                {
                  ATerm e_21 = NULL;
                  t = y_66(t);
                  {
                    c_21 = t;
                    {
                      ATerm f_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(a_21), not_null(c_21)), not_null(y_20));
                      {
                        f_21 = t;
                        if(((e_21 != NULL) && (e_21 != f_21)))
                          _fail(f_21);
                        else
                          e_21 = f_21;
                      }
                      t = not_null(e_21);
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
ATerm Build_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Build_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm u_21 = NULL,w_21 = NULL;
        ATerm v_21 = NULL;
        t = SSLgetAnnotations(not_null(q_21));
        {
          v_21 = t;
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
        }
        {
          t = not_null(r_21);
          {
            ATerm y_21 = NULL;
            t = v_66(t);
            {
              w_21 = t;
              {
                ATerm z_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(w_21)), not_null(u_21));
                {
                  z_21 = t;
                  if(((y_21 != NULL) && (y_21 != z_21)))
                    _fail(z_21);
                  else
                    y_21 = z_21;
                }
                t = not_null(y_21);
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Str_1))
    {
      o_22 = ATgetArgument(n_22, 0);
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_22 = NULL,t_22 = NULL;
            ATerm s_22 = NULL;
            t = SSLgetAnnotations(not_null(n_22));
            {
              s_22 = t;
              if(((r_22 != NULL) && (r_22 != s_22)))
                _fail(s_22);
              else
                r_22 = s_22;
            }
            {
              t = not_null(o_22);
              {
                ATerm v_22 = NULL;
                t = p_0(t);
                {
                  t_22 = t;
                  {
                    ATerm w_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(t_22)), not_null(r_22));
                    {
                      w_22 = t;
                      if(((v_22 != NULL) && (v_22 != w_22)))
                        _fail(w_22);
                      else
                        v_22 = w_22;
                    }
                    t = not_null(v_22);
                  }
                }
              }
            }
            ;
            LocalPopChoice(i_5);
          }
        else
          {
            t = h_5;
            {
              ATerm z_22 = NULL,b_23 = NULL;
              ATerm a_23 = NULL;
              t = SSLgetAnnotations(not_null(n_22));
              {
                a_23 = t;
                if(((z_22 != NULL) && (z_22 != a_23)))
                  _fail(a_23);
                else
                  z_22 = a_23;
              }
              {
                t = not_null(o_22);
                {
                  ATerm d_23 = NULL;
                  t = p_0(t);
                  {
                    b_23 = t;
                    {
                      ATerm e_23 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(b_23)), not_null(z_22));
                      {
                        e_23 = t;
                        if(((d_23 != NULL) && (d_23 != e_23)))
                          _fail(e_23);
                        else
                          d_23 = e_23;
                      }
                      t = not_null(d_23);
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
ATerm is_real_0 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_is_real(not_null(o_23));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_Real_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL,g_24 = NULL;
            ATerm f_24 = NULL;
            t = SSLgetAnnotations(not_null(a_24));
            {
              f_24 = t;
              if(((e_24 != NULL) && (e_24 != f_24)))
                _fail(f_24);
              else
                e_24 = f_24;
            }
            {
              t = not_null(b_24);
              {
                ATerm i_24 = NULL;
                t = o_0(t);
                {
                  g_24 = t;
                  {
                    ATerm j_24 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_24)), not_null(e_24));
                    {
                      j_24 = t;
                      if(((i_24 != NULL) && (i_24 != j_24)))
                        _fail(j_24);
                      else
                        i_24 = j_24;
                    }
                    t = not_null(i_24);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm m_24 = NULL,o_24 = NULL;
              ATerm n_24 = NULL;
              t = SSLgetAnnotations(not_null(a_24));
              {
                n_24 = t;
                if(((m_24 != NULL) && (m_24 != n_24)))
                  _fail(n_24);
                else
                  m_24 = n_24;
              }
              {
                t = not_null(b_24);
                {
                  ATerm q_24 = NULL;
                  t = o_0(t);
                  {
                    o_24 = t;
                    {
                      ATerm r_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(o_24)), not_null(m_24));
                      {
                        r_24 = t;
                        if(((q_24 != NULL) && (q_24 != r_24)))
                          _fail(r_24);
                        else
                          q_24 = r_24;
                      }
                      t = not_null(q_24);
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Int_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm l_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL,p_25 = NULL;
            ATerm o_25 = NULL;
            t = SSLgetAnnotations(not_null(j_25));
            {
              o_25 = t;
              if(((n_25 != NULL) && (n_25 != o_25)))
                _fail(o_25);
              else
                n_25 = o_25;
            }
            {
              t = not_null(k_25);
              {
                ATerm r_25 = NULL;
                t = n_0(t);
                {
                  p_25 = t;
                  {
                    ATerm s_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_25)), not_null(n_25));
                    {
                      s_25 = t;
                      if(((r_25 != NULL) && (r_25 != s_25)))
                        _fail(s_25);
                      else
                        r_25 = s_25;
                    }
                    t = not_null(r_25);
                  }
                }
              }
            }
            ;
            LocalPopChoice(m_5);
          }
        else
          {
            t = l_5;
            {
              ATerm v_25 = NULL,x_25 = NULL;
              ATerm w_25 = NULL;
              t = SSLgetAnnotations(not_null(j_25));
              {
                w_25 = t;
                if(((v_25 != NULL) && (v_25 != w_25)))
                  _fail(w_25);
                else
                  v_25 = w_25;
              }
              {
                t = not_null(k_25);
                {
                  ATerm z_25 = NULL;
                  t = n_0(t);
                  {
                    x_25 = t;
                    {
                      ATerm a_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(x_25)), not_null(v_25));
                      {
                        a_26 = t;
                        if(((z_25 != NULL) && (z_25 != a_26)))
                          _fail(a_26);
                        else
                          z_25 = a_26;
                      }
                      t = not_null(z_25);
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
ATerm shallow_term_expression_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, is_string_0);
      ;
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1(t, is_int_0);
            ;
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm r_5 = t;
              int s_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1(t, is_real_0);
                  ;
                  LocalPopChoice(s_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm t_5 = t;
                    int u_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1(t, is_string_0);
                        ;
                        LocalPopChoice(u_5);
                      }
                    else
                      {
                        t = t_5;
                        {
                          ATerm v_5 = t;
                          int w_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_0 (ATerm t)
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = Var_1(t, is_string_0);
                                  return(t);
                                }
                                t = list_1(t, h_0);
                                return(t);
                              }
                              t = Op_2(t, is_string_0, f_0);
                              ;
                              LocalPopChoice(w_5);
                            }
                          else
                            {
                              t = v_5;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_x_5;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
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
ATerm Match_1 (ATerm t, ATerm u_66 (ATerm))
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym_Match_1))
    {
      q_26 = ATgetArgument(p_26, 0);
      {
        ATerm t_26 = NULL,v_26 = NULL;
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(p_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
        {
          t = not_null(q_26);
          {
            ATerm x_26 = NULL;
            t = u_66(t);
            {
              v_26 = t;
              {
                ATerm y_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(v_26)), not_null(t_26));
                {
                  y_26 = t;
                  if(((x_26 != NULL) && (x_26 != y_26)))
                    _fail(y_26);
                  else
                    x_26 = y_26;
                }
                t = not_null(x_26);
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
ATerm Thread_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Thread_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm q_27 = NULL;
            t = b_68(t);
            {
              o_27 = t;
              {
                ATerm r_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(o_27)), not_null(m_27));
                {
                  r_27 = t;
                  if(((q_27 != NULL) && (q_27 != r_27)))
                    _fail(r_27);
                  else
                    q_27 = r_27;
                }
                t = not_null(q_27);
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
ATerm All_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  a_28 :
  if(match_cons(b_28, sym_All_1))
    {
      c_28 = ATgetArgument(b_28, 0);
      {
        ATerm f_28 = NULL,h_28 = NULL;
        ATerm g_28 = NULL;
        t = SSLgetAnnotations(not_null(b_28));
        {
          g_28 = t;
          if(((f_28 != NULL) && (f_28 != g_28)))
            _fail(g_28);
          else
            f_28 = g_28;
        }
        {
          t = not_null(c_28);
          {
            ATerm o_28 = NULL;
            t = a_68(t);
            {
              h_28 = t;
              {
                ATerm p_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(h_28)), not_null(f_28));
                {
                  p_28 = t;
                  if(((o_28 != NULL) && (o_28 != p_28)))
                    _fail(p_28);
                  else
                    o_28 = p_28;
                }
                t = not_null(o_28);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Some_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        ATerm y_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29 = NULL,m_29 = NULL;
            ATerm l_29 = NULL;
            t = SSLgetAnnotations(not_null(g_29));
            {
              l_29 = t;
              if(((k_29 != NULL) && (k_29 != l_29)))
                _fail(l_29);
              else
                k_29 = l_29;
            }
            {
              t = not_null(h_29);
              {
                ATerm o_29 = NULL;
                t = m_0(t);
                {
                  m_29 = t;
                  {
                    ATerm p_29 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(m_29)), not_null(k_29));
                    {
                      p_29 = t;
                      if(((o_29 != NULL) && (o_29 != p_29)))
                        _fail(p_29);
                      else
                        o_29 = p_29;
                    }
                    t = not_null(o_29);
                  }
                }
              }
            }
            ;
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            {
              ATerm s_29 = NULL,u_29 = NULL;
              ATerm t_29 = NULL;
              t = SSLgetAnnotations(not_null(g_29));
              {
                t_29 = t;
                if(((s_29 != NULL) && (s_29 != t_29)))
                  _fail(t_29);
                else
                  s_29 = t_29;
              }
              {
                t = not_null(h_29);
                {
                  ATerm w_29 = NULL;
                  t = m_0(t);
                  {
                    u_29 = t;
                    {
                      ATerm x_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(u_29)), not_null(s_29));
                      {
                        x_29 = t;
                        if(((w_29 != NULL) && (w_29 != x_29)))
                          _fail(x_29);
                        else
                          w_29 = x_29;
                      }
                      t = not_null(w_29);
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
ATerm One_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_One_1))
    {
      m_30 = ATgetArgument(l_30, 0);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(l_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(m_30);
          {
            ATerm t_30 = NULL;
            t = z_67(t);
            {
              r_30 = t;
              {
                ATerm u_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(r_30)), not_null(p_30));
                {
                  u_30 = t;
                  if(((t_30 != NULL) && (t_30 != u_30)))
                    _fail(u_30);
                  else
                    t_30 = u_30;
                }
                t = not_null(t_30);
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
ATerm Cong_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_Cong_2))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      {
        ATerm l_31 = NULL,n_31 = NULL;
        ATerm m_31 = NULL;
        t = SSLgetAnnotations(not_null(f_31));
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
        {
          t = not_null(g_31);
          {
            ATerm p_31 = NULL;
            t = a_62(t);
            {
              n_31 = t;
              {
                t = not_null(h_31);
                {
                  ATerm r_31 = NULL;
                  t = b_62(t);
                  {
                    p_31 = t;
                    {
                      ATerm s_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(n_31), not_null(p_31)), not_null(l_31));
                      {
                        s_31 = t;
                        if(((r_31 != NULL) && (r_31 != s_31)))
                          _fail(s_31);
                        else
                          r_31 = s_31;
                      }
                      t = not_null(r_31);
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
ATerm Path_2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_Path_2))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      {
        ATerm k_32 = NULL,m_32 = NULL;
        ATerm l_32 = NULL;
        t = SSLgetAnnotations(not_null(e_32));
        {
          l_32 = t;
          if(((k_32 != NULL) && (k_32 != l_32)))
            _fail(l_32);
          else
            k_32 = l_32;
        }
        {
          t = not_null(f_32);
          {
            ATerm o_32 = NULL;
            t = w_67(t);
            {
              m_32 = t;
              {
                t = not_null(g_32);
                {
                  ATerm q_32 = NULL;
                  t = x_67(t);
                  {
                    o_32 = t;
                    {
                      ATerm r_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(m_32), not_null(o_32)), not_null(k_32));
                      {
                        r_32 = t;
                        if(((q_32 != NULL) && (q_32 != r_32)))
                          _fail(r_32);
                        else
                          q_32 = r_32;
                      }
                      t = not_null(q_32);
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
ATerm Rec_2 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym_Rec_2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      {
        ATerm j_33 = NULL,l_33 = NULL;
        ATerm k_33 = NULL;
        t = SSLgetAnnotations(not_null(d_33));
        {
          k_33 = t;
          if(((j_33 != NULL) && (j_33 != k_33)))
            _fail(k_33);
          else
            j_33 = k_33;
        }
        {
          t = not_null(e_33);
          {
            ATerm n_33 = NULL;
            t = k_67(t);
            {
              l_33 = t;
              {
                t = not_null(f_33);
                {
                  ATerm p_33 = NULL;
                  t = l_67(t);
                  {
                    n_33 = t;
                    {
                      ATerm q_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_33), not_null(n_33)), not_null(j_33));
                      {
                        q_33 = t;
                        if(((p_33 != NULL) && (p_33 != q_33)))
                          _fail(q_33);
                        else
                          p_33 = q_33;
                      }
                      t = not_null(p_33);
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
ATerm SVar_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym_SVar_1))
    {
      c_34 = ATgetArgument(b_34, 0);
      {
        ATerm f_34 = NULL,h_34 = NULL;
        ATerm g_34 = NULL;
        t = SSLgetAnnotations(not_null(b_34));
        {
          g_34 = t;
          if(((f_34 != NULL) && (f_34 != g_34)))
            _fail(g_34);
          else
            f_34 = g_34;
        }
        {
          t = not_null(c_34);
          {
            ATerm j_34 = NULL;
            t = m_66(t);
            {
              h_34 = t;
              {
                ATerm k_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(h_34)), not_null(f_34));
                {
                  k_34 = t;
                  if(((j_34 != NULL) && (j_34 != k_34)))
                    _fail(k_34);
                  else
                    j_34 = k_34;
                }
                t = not_null(j_34);
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
ATerm CallT_3 (ATerm t, ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t_66 (ATerm))
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym_CallT_3))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      b_35 = ATgetArgument(y_34, 2);
      {
        ATerm g_35 = NULL,i_35 = NULL;
        ATerm h_35 = NULL;
        t = SSLgetAnnotations(not_null(y_34));
        {
          h_35 = t;
          if(((g_35 != NULL) && (g_35 != h_35)))
            _fail(h_35);
          else
            g_35 = h_35;
        }
        {
          t = not_null(z_34);
          {
            ATerm k_35 = NULL;
            t = r_66(t);
            {
              i_35 = t;
              {
                t = not_null(a_35);
                {
                  ATerm m_35 = NULL;
                  t = s_66(t);
                  {
                    k_35 = t;
                    {
                      t = not_null(b_35);
                      {
                        ATerm o_35 = NULL;
                        t = t_66(t);
                        {
                          m_35 = t;
                          {
                            ATerm p_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(i_35), not_null(k_35), not_null(m_35)), not_null(g_35));
                            {
                              p_35 = t;
                              if(((o_35 != NULL) && (o_35 != p_35)))
                                _fail(p_35);
                              else
                                o_35 = p_35;
                            }
                            t = not_null(o_35);
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
ATerm LGChoice_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
{
  ATerm c_36 = NULL,d_36 = NULL,g_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym_LGChoice_2))
    {
      d_36 = ATgetArgument(c_36, 0);
      g_36 = ATgetArgument(c_36, 1);
      {
        ATerm k_36 = NULL,m_36 = NULL;
        ATerm l_36 = NULL;
        t = SSLgetAnnotations(not_null(c_36));
        {
          l_36 = t;
          if(((k_36 != NULL) && (k_36 != l_36)))
            _fail(l_36);
          else
            k_36 = l_36;
        }
        {
          t = not_null(d_36);
          {
            ATerm o_36 = NULL;
            t = f_67(t);
            {
              m_36 = t;
              {
                t = not_null(g_36);
                {
                  ATerm q_36 = NULL;
                  t = g_67(t);
                  {
                    o_36 = t;
                    {
                      ATerm r_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(m_36), not_null(o_36)), not_null(k_36));
                      {
                        r_36 = t;
                        if(((q_36 != NULL) && (q_36 != r_36)))
                          _fail(r_36);
                        else
                          q_36 = r_36;
                      }
                      t = not_null(q_36);
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
ATerm GChoice_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym_GChoice_2))
    {
      e_37 = ATgetArgument(d_37, 0);
      f_37 = ATgetArgument(d_37, 1);
      {
        ATerm j_37 = NULL,l_37 = NULL;
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(d_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
        {
          t = not_null(e_37);
          {
            ATerm n_37 = NULL;
            t = f_66(t);
            {
              l_37 = t;
              {
                t = not_null(f_37);
                {
                  ATerm p_37 = NULL;
                  t = g_66(t);
                  {
                    n_37 = t;
                    {
                      ATerm q_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(l_37), not_null(n_37)), not_null(j_37));
                      {
                        q_37 = t;
                        if(((p_37 != NULL) && (p_37 != q_37)))
                          _fail(q_37);
                        else
                          p_37 = q_37;
                      }
                      t = not_null(p_37);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm j_67 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_GuardedLChoice_3))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      g_38 = ATgetArgument(d_38, 2);
      {
        ATerm l_38 = NULL,n_38 = NULL;
        ATerm m_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          m_38 = t;
          if(((l_38 != NULL) && (l_38 != m_38)))
            _fail(m_38);
          else
            l_38 = m_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm p_38 = NULL;
            t = h_67(t);
            {
              n_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm r_38 = NULL;
                  t = i_67(t);
                  {
                    p_38 = t;
                    {
                      t = not_null(g_38);
                      {
                        ATerm t_38 = NULL;
                        t = j_67(t);
                        {
                          r_38 = t;
                          {
                            ATerm u_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(n_38), not_null(p_38), not_null(r_38)), not_null(l_38));
                            {
                              u_38 = t;
                              if(((t_38 != NULL) && (t_38 != u_38)))
                                _fail(u_38);
                              else
                                t_38 = u_38;
                            }
                            t = not_null(t_38);
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
ATerm LChoice_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_LChoice_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      {
        ATerm n_39 = NULL,p_39 = NULL;
        ATerm o_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          o_39 = t;
          if(((n_39 != NULL) && (n_39 != o_39)))
            _fail(o_39);
          else
            n_39 = o_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm r_39 = NULL;
            t = d_67(t);
            {
              p_39 = t;
              {
                t = not_null(j_39);
                {
                  ATerm t_39 = NULL;
                  t = e_67(t);
                  {
                    r_39 = t;
                    {
                      ATerm u_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(p_39), not_null(r_39)), not_null(n_39));
                      {
                        u_39 = t;
                        if(((t_39 != NULL) && (t_39 != u_39)))
                          _fail(u_39);
                        else
                          t_39 = u_39;
                      }
                      t = not_null(t_39);
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
ATerm Choice_2 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym_Choice_2))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      {
        ATerm m_40 = NULL,o_40 = NULL;
        ATerm n_40 = NULL;
        t = SSLgetAnnotations(not_null(g_40));
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
        {
          t = not_null(h_40);
          {
            ATerm q_40 = NULL;
            t = b_66(t);
            {
              o_40 = t;
              {
                t = not_null(i_40);
                {
                  ATerm s_40 = NULL;
                  t = c_66(t);
                  {
                    q_40 = t;
                    {
                      ATerm t_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(o_40), not_null(q_40)), not_null(m_40));
                      {
                        t_40 = t;
                        if(((s_40 != NULL) && (s_40 != t_40)))
                          _fail(t_40);
                        else
                          s_40 = t_40;
                      }
                      t = not_null(s_40);
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
ATerm Seq_2 (ATerm t, ATerm b_67 (ATerm), ATerm c_67 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  h_41 :
  if(match_cons(j_41, sym_Seq_2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        ATerm p_41 = NULL,r_41 = NULL;
        ATerm q_41 = NULL;
        t = SSLgetAnnotations(not_null(j_41));
        {
          q_41 = t;
          if(((p_41 != NULL) && (p_41 != q_41)))
            _fail(q_41);
          else
            p_41 = q_41;
        }
        {
          t = not_null(k_41);
          {
            ATerm t_41 = NULL;
            t = b_67(t);
            {
              r_41 = t;
              {
                t = not_null(l_41);
                {
                  ATerm v_41 = NULL;
                  t = c_67(t);
                  {
                    t_41 = t;
                    {
                      ATerm w_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(r_41), not_null(t_41)), not_null(p_41));
                      {
                        w_41 = t;
                        if(((v_41 != NULL) && (v_41 != w_41)))
                          _fail(w_41);
                        else
                          v_41 = w_41;
                      }
                      t = not_null(v_41);
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
ATerm Test_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym_Test_1))
    {
      i_42 = ATgetArgument(h_42, 0);
      {
        ATerm l_42 = NULL,n_42 = NULL;
        ATerm m_42 = NULL;
        t = SSLgetAnnotations(not_null(h_42));
        {
          m_42 = t;
          if(((l_42 != NULL) && (l_42 != m_42)))
            _fail(m_42);
          else
            l_42 = m_42;
        }
        {
          t = not_null(i_42);
          {
            ATerm p_42 = NULL;
            t = o_67(t);
            {
              n_42 = t;
              {
                ATerm q_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(n_42)), not_null(l_42));
                {
                  q_42 = t;
                  if(((p_42 != NULL) && (p_42 != q_42)))
                    _fail(q_42);
                  else
                    p_42 = q_42;
                }
                t = not_null(p_42);
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
ATerm Not_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm b_43 = NULL,c_43 = NULL;
  b_43 = t;
  z_42 :
  if(match_cons(b_43, sym_Not_1))
    {
      c_43 = ATgetArgument(b_43, 0);
      {
        ATerm i_43 = NULL,k_43 = NULL;
        ATerm j_43 = NULL;
        t = SSLgetAnnotations(not_null(b_43));
        {
          j_43 = t;
          if(((i_43 != NULL) && (i_43 != j_43)))
            _fail(j_43);
          else
            i_43 = j_43;
        }
        {
          t = not_null(c_43);
          {
            ATerm m_43 = NULL;
            t = m_67(t);
            {
              k_43 = t;
              {
                ATerm n_43 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(k_43)), not_null(i_43));
                {
                  n_43 = t;
                  if(((m_43 != NULL) && (m_43 != n_43)))
                    _fail(n_43);
                  else
                    m_43 = n_43;
                }
                t = not_null(m_43);
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
ATerm Fail_0 (ATerm t)
{
  ATerm w_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym_Fail_0))
    {
      ATerm y_43 = NULL,a_44 = NULL;
      ATerm a_6;
      a_6 = t;
      {
        ATerm z_43 = NULL;
        t = SSLgetAnnotations(not_null(w_43));
        {
          z_43 = t;
          if(((y_43 != NULL) && (y_43 != z_43)))
            _fail(z_43);
          else
            y_43 = z_43;
        }
      }
      t = a_6;
      {
        ATerm b_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(y_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        t = not_null(a_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm m_44 = NULL;
  m_44 = t;
  k_44 :
  if(match_cons(m_44, sym_Id_0))
    {
      ATerm o_44 = NULL,q_44 = NULL;
      ATerm b_6;
      b_6 = t;
      {
        ATerm p_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          p_44 = t;
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
        }
      }
      t = b_6;
      {
        ATerm r_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(o_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        t = not_null(q_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm c_6 = t;
  int d_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      ;
      LocalPopChoice(d_6);
    }
  else
    {
      t = c_6;
      {
        ATerm e_6 = t;
        int f_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            ;
            LocalPopChoice(f_6);
          }
        else
          {
            t = e_6;
            {
              ATerm g_6 = t;
              int h_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  ;
                  LocalPopChoice(h_6);
                }
              else
                {
                  t = g_6;
                  {
                    ATerm i_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        ;
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = i_6;
                        {
                          ATerm k_6 = t;
                          int l_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              ;
                              LocalPopChoice(l_6);
                            }
                          else
                            {
                              t = k_6;
                              {
                                ATerm m_6 = t;
                                int n_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    ;
                                    LocalPopChoice(n_6);
                                  }
                                else
                                  {
                                    t = m_6;
                                    {
                                      ATerm o_6 = t;
                                      int p_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          ;
                                          LocalPopChoice(p_6);
                                        }
                                      else
                                        {
                                          t = o_6;
                                          {
                                            ATerm q_6 = t;
                                            int r_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                ;
                                                LocalPopChoice(r_6);
                                              }
                                            else
                                              {
                                                t = q_6;
                                                {
                                                  ATerm s_6 = t;
                                                  int t_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      ;
                                                      LocalPopChoice(t_6);
                                                    }
                                                  else
                                                    {
                                                      t = s_6;
                                                      {
                                                        ATerm u_6 = t;
                                                        int v_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            ;
                                                            LocalPopChoice(v_6);
                                                          }
                                                        else
                                                          {
                                                            t = u_6;
                                                            {
                                                              ATerm w_6 = t;
                                                              int x_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm t_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, term_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3(t, s_0, t_0, u_0);
                                                                  ;
                                                                  LocalPopChoice(x_6);
                                                                }
                                                              else
                                                                {
                                                                  t = w_6;
                                                                  {
                                                                    ATerm y_6 = t;
                                                                    int z_6 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        ;
                                                                        LocalPopChoice(z_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_6;
                                                                        {
                                                                          ATerm a_7 = t;
                                                                          int b_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              ;
                                                                              LocalPopChoice(b_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_7;
                                                                              {
                                                                                ATerm c_7 = t;
                                                                                int d_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, v_0);
                                                                                    ;
                                                                                    LocalPopChoice(d_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_7;
                                                                                    {
                                                                                      ATerm e_7 = t;
                                                                                      int f_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          ;
                                                                                          LocalPopChoice(f_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_7;
                                                                                          {
                                                                                            ATerm g_7 = t;
                                                                                            int h_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                ;
                                                                                                LocalPopChoice(h_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_7;
                                                                                                {
                                                                                                  ATerm i_7 = t;
                                                                                                  int j_7 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_7);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_7;
                                                                                                      {
                                                                                                        ATerm k_7 = t;
                                                                                                        int l_7 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_7);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_7;
                                                                                                            {
                                                                                                              ATerm m_7 = t;
                                                                                                              int n_7 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, shallow_term_expression_0);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(n_7);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = m_7;
                                                                                                                  {
                                                                                                                    ATerm o_7 = t;
                                                                                                                    int p_7 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(p_7);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_7;
                                                                                                                        {
                                                                                                                          ATerm q_7 = t;
                                                                                                                          int r_7 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm w_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm x_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm s_7 = t;
                                                                                                                                  int t_7 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = is_string_0(t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(t_7);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = s_7;
                                                                                                                                      t = list_1(t, is_int_0);
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1(t, x_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, w_0, strategy_expression_0);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_7);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_7;
                                                                                                                              {
                                                                                                                                ATerm u_7 = t;
                                                                                                                                int v_7 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
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
                                                                                                                                          ATerm y_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, strategy_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm z_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3(t, is_string_0, y_0, z_0);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(x_7);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_7;
                                                                                                                                          {
                                                                                                                                            ATerm y_7 = t;
                                                                                                                                            int z_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm a_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm b_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm a_8 = t;
                                                                                                                                                    int b_8 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                        ;
                                                                                                                                                        LocalPopChoice(b_8);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = a_8;
                                                                                                                                                        t = SDefT_4(t, is_string_0, Nil_0, Nil_0, strategy_expression_0);
                                                                                                                                                      }
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, b_1);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, a_1, strategy_expression_0);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(z_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = y_7;
                                                                                                                                                {
                                                                                                                                                  ATerm c_8 = t;
                                                                                                                                                  int d_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm c_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Assign_2(t, c_1, term_expression_0);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(d_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = c_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm e_8 = t;
                                                                                                                                                        int f_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm d_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_1(t, d_1);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(f_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = e_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm e_1 (ATerm t)
                                                                                                                                                              {
                                                                                                                                                                t = term_g_8;
                                                                                                                                                                return(t);
                                                                                                                                                              }
                                                                                                                                                              t = debug_1(t, e_1);
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
ATerm FunType_2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym_FunType_2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        ATerm j_45 = NULL,l_45 = NULL;
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(d_45));
        {
          k_45 = t;
          if(((j_45 != NULL) && (j_45 != k_45)))
            _fail(k_45);
          else
            j_45 = k_45;
        }
        {
          t = not_null(e_45);
          {
            ATerm n_45 = NULL;
            t = q_62(t);
            {
              l_45 = t;
              {
                t = not_null(f_45);
                {
                  ATerm p_45 = NULL;
                  t = r_62(t);
                  {
                    n_45 = t;
                    {
                      ATerm q_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(l_45), not_null(n_45)), not_null(j_45));
                      {
                        q_45 = t;
                        if(((p_45 != NULL) && (p_45 != q_45)))
                          _fail(q_45);
                        else
                          p_45 = q_45;
                      }
                      t = not_null(p_45);
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
ATerm Op_2 (ATerm t, ATerm j_63 (ATerm), ATerm k_63 (ATerm))
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym_Op_2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      {
        ATerm i_46 = NULL,q_46 = NULL;
        ATerm p_46 = NULL;
        t = SSLgetAnnotations(not_null(c_46));
        {
          p_46 = t;
          if(((i_46 != NULL) && (i_46 != p_46)))
            _fail(p_46);
          else
            i_46 = p_46;
        }
        {
          t = not_null(d_46);
          {
            ATerm s_46 = NULL;
            t = j_63(t);
            {
              q_46 = t;
              {
                t = not_null(e_46);
                {
                  ATerm u_46 = NULL;
                  t = k_63(t);
                  {
                    s_46 = t;
                    {
                      ATerm v_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_46), not_null(s_46)), not_null(i_46));
                      {
                        v_46 = t;
                        if(((u_46 != NULL) && (u_46 != v_46)))
                          _fail(v_46);
                        else
                          u_46 = v_46;
                      }
                      t = not_null(u_46);
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
ATerm ConstType_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm g_47 = NULL,h_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_ConstType_1))
    {
      h_47 = ATgetArgument(g_47, 0);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(g_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(h_47);
          {
            ATerm o_47 = NULL;
            t = p_62(t);
            {
              m_47 = t;
              {
                ATerm p_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(m_47)), not_null(k_47));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm type_expression_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 (ATerm t)
      {
        t = Op_2(t, is_string_0, Nil_0);
        return(t);
      }
      t = ConstType_1(t, f_1);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm g_1 (ATerm t)
        {
          t = list_1(t, type_expression_0);
          return(t);
        }
        t = FunType_2(t, g_1, type_expression_0);
      }
    }
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm))
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  z_47 :
  if(match_cons(a_48, sym_VarDec_2))
    {
      b_48 = ATgetArgument(a_48, 0);
      c_48 = ATgetArgument(a_48, 1);
      {
        ATerm g_48 = NULL,i_48 = NULL;
        ATerm h_48 = NULL;
        t = SSLgetAnnotations(not_null(a_48));
        {
          h_48 = t;
          if(((g_48 != NULL) && (g_48 != h_48)))
            _fail(h_48);
          else
            g_48 = h_48;
        }
        {
          t = not_null(b_48);
          {
            ATerm k_48 = NULL;
            t = y_68(t);
            {
              i_48 = t;
              {
                t = not_null(c_48);
                {
                  ATerm m_48 = NULL;
                  t = z_68(t);
                  {
                    k_48 = t;
                    {
                      ATerm n_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_48), not_null(k_48)), not_null(g_48));
                      {
                        n_48 = t;
                        if(((m_48 != NULL) && (m_48 != n_48)))
                          _fail(n_48);
                        else
                          m_48 = n_48;
                      }
                      t = not_null(m_48);
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
ATerm SDefT_4 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym_SDefT_4))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      e_49 = ATgetArgument(b_49, 2);
      f_49 = ATgetArgument(b_49, 3);
      {
        ATerm l_49 = NULL,n_49 = NULL;
        ATerm m_49 = NULL;
        t = SSLgetAnnotations(not_null(b_49));
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
        {
          t = not_null(c_49);
          {
            ATerm p_49 = NULL;
            t = f_69(t);
            {
              n_49 = t;
              {
                t = not_null(d_49);
                {
                  ATerm v_49 = NULL;
                  t = g_69(t);
                  {
                    p_49 = t;
                    {
                      t = not_null(e_49);
                      {
                        ATerm c_50 = NULL;
                        t = h_69(t);
                        {
                          v_49 = t;
                          {
                            t = not_null(f_49);
                            {
                              ATerm e_50 = NULL;
                              t = i_69(t);
                              {
                                c_50 = t;
                                {
                                  ATerm f_50 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(n_49), not_null(p_49), not_null(v_49), not_null(c_50)), not_null(l_49));
                                  {
                                    f_50 = t;
                                    if(((e_50 != NULL) && (e_50 != f_50)))
                                      _fail(f_50);
                                    else
                                      e_50 = f_50;
                                  }
                                  t = not_null(e_50);
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
ATerm SDef_3 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym_SDef_3))
    {
      v_50 = ATgetArgument(u_50, 0);
      w_50 = ATgetArgument(u_50, 1);
      x_50 = ATgetArgument(u_50, 2);
      {
        ATerm e_51 = NULL,g_51 = NULL;
        ATerm f_51 = NULL;
        t = SSLgetAnnotations(not_null(u_50));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
        {
          t = not_null(v_50);
          {
            ATerm i_51 = NULL;
            t = c_69(t);
            {
              g_51 = t;
              {
                t = not_null(w_50);
                {
                  ATerm p_51 = NULL;
                  t = d_69(t);
                  {
                    i_51 = t;
                    {
                      t = not_null(x_50);
                      {
                        ATerm r_51 = NULL;
                        t = e_69(t);
                        {
                          p_51 = t;
                          {
                            ATerm s_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(g_51), not_null(i_51), not_null(p_51)), not_null(e_51));
                            {
                              s_51 = t;
                              if(((r_51 != NULL) && (r_51 != s_51)))
                                _fail(s_51);
                              else
                                r_51 = s_51;
                            }
                            t = not_null(r_51);
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, type_expression_0);
          return(t);
        }
        t = list_1(t, i_1);
        return(t);
      }
      t = SDef_3(t, is_string_0, h_1, strategy_expression_0);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              ATerm l_1 (ATerm t)
              {
                t = VarDec_2(t, is_string_0, type_expression_0);
                return(t);
              }
              t = list_1(t, l_1);
              return(t);
            }
            ATerm k_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = VarDec_2(t, is_string_0, type_expression_0);
                return(t);
              }
              t = list_1(t, m_1);
              return(t);
            }
            t = SDefT_4(t, is_string_0, j_1, k_1, strategy_expression_0);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm n_1 (ATerm t)
              {
                t = term_n_8;
                return(t);
              }
              t = debug_1(t, n_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm q_83 (ATerm))
{
  ATerm z_51 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = Cons_2(t, q_83, z_51);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm g_52 = NULL,h_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym_Strategies_1))
    {
      h_52 = ATgetArgument(g_52, 0);
      {
        ATerm k_52 = NULL,m_52 = NULL;
        ATerm l_52 = NULL;
        t = SSLgetAnnotations(not_null(g_52));
        {
          l_52 = t;
          if(((k_52 != NULL) && (k_52 != l_52)))
            _fail(l_52);
          else
            k_52 = l_52;
        }
        {
          t = not_null(h_52);
          {
            ATerm o_52 = NULL;
            t = e_62(t);
            {
              m_52 = t;
              {
                ATerm p_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_52)), not_null(k_52));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm g_53 = NULL,h_53 = NULL;
  g_53 = t;
  f_53 :
  if(match_cons(g_53, sym_Specification_1))
    {
      h_53 = ATgetArgument(g_53, 0);
      {
        ATerm k_53 = NULL,m_53 = NULL;
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(g_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        {
          t = not_null(h_53);
          {
            ATerm o_53 = NULL;
            t = j_62(t);
            {
              m_53 = t;
              {
                ATerm p_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_53)), not_null(k_53));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, r_1);
            return(t);
          }
          t = Cons_2(t, q_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, p_1);
        return(t);
      }
      t = Specification_1(t, o_1);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_1 (ATerm t)
        {
          t = term_s_8;
          return(t);
        }
        t = debug_1(t, s_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym__2))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      {
        ATerm g_54 = NULL,i_54 = NULL;
        ATerm h_54 = NULL;
        t = SSLgetAnnotations(not_null(a_54));
        {
          h_54 = t;
          if(((g_54 != NULL) && (g_54 != h_54)))
            _fail(h_54);
          else
            g_54 = h_54;
        }
        {
          t = not_null(b_54);
          {
            ATerm k_54 = NULL;
            t = p_60(t);
            {
              i_54 = t;
              {
                t = not_null(c_54);
                {
                  ATerm m_54 = NULL;
                  t = q_60(t);
                  {
                    k_54 = t;
                    {
                      ATerm n_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_54), not_null(k_54)), not_null(g_54));
                      {
                        n_54 = t;
                        if(((m_54 != NULL) && (m_54 != n_54)))
                          _fail(n_54);
                        else
                          m_54 = n_54;
                      }
                      t = not_null(m_54);
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
  ATerm t_8;
  t_8 = t;
  {
    ATerm u_54 = NULL;
    ATerm v_54 = NULL;
    t = term_u_8;
    {
      t = whoami_0(t);
      {
        v_54 = t;
        if(((u_54 != NULL) && (u_54 != v_54)))
          _fail(v_54);
        else
          u_54 = v_54;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), not_null(u_54)), term_w_8));
      {
        t = printnl_0(t);
        {
          t = term_y_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  y_54 :
  if(match_cons(z_54, sym__2))
    {
      a_55 = ATgetArgument(z_54, 0);
      b_55 = ATgetArgument(z_54, 1);
      {
        ATerm z_8;
        z_8 = t;
        t = SSL_printnl(not_null(a_55), not_null(b_55));
        t = z_8;
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
  ATerm g_55 = NULL;
  g_55 = t;
  t = SSL_implode_string(not_null(g_55));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
        q_55 = t;
        p_55 :
        if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
          {
            r_55 = ATgetFirst((ATermList) q_55);
            s_55 = (ATerm) ATgetNext((ATermList) q_55);
            {
              t = not_null(r_55);
              {
                ATerm t_1 (ATerm t)
                {
                  t = not_null(s_55);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_1);
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
  ATerm j_56 = NULL;
  ATerm l_56 = NULL;
  j_56 = t;
  {
    ATerm m_56 = NULL;
    ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
    t = not_null(j_56);
    {
      m_56 = t;
      {
        t = SSL_explode_term(not_null(m_56));
        {
          o_56 = t;
          h_56 :
          if(match_cons(o_56, sym__2))
            {
              p_56 = ATgetArgument(o_56, 0);
              q_56 = ATgetArgument(o_56, 1);
              i_56 :
              if(match_string(p_56, ""))
                {
                  if(((l_56 != NULL) && (l_56 != q_56)))
                    _fail(q_56);
                  else
                    l_56 = q_56;
                }
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
      t = not_null(l_56);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm u_56 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_56);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        {
          t = Nil_0(t);
          t = d_84(t);
        }
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  w_56 :
  if(match_cons(x_56, sym__2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      {
        t = not_null(y_56);
        {
          ATerm u_1 (ATerm t)
          {
            t = not_null(z_56);
            return(t);
          }
          t = at_end_1(t, u_1);
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  t = SSL_explode_string(not_null(e_57));
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
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_1);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
              u_57 = t;
              t_57 :
              if(match_cons(u_57, sym_Path_1))
                {
                  v_57 = ATgetArgument(u_57, 0);
                  t = not_null(v_57);
                }
              else
                {
                  if(match_cons(u_57, sym_Var_1))
                    {
                      v_57 = ATgetArgument(u_57, 0);
                      {
                        t = not_null(v_57);
                        {
                          ATerm k_9 = t;
                          int l_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(l_9);
                            }
                          else
                            {
                              t = k_9;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = term_m_9;
                                  return(t);
                                }
                                t = debug_1(t, w_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_57, sym_Prefix_2))
                        {
                          v_57 = ATgetArgument(u_57, 0);
                          w_57 = ATgetArgument(u_57, 1);
                          {
                            ATerm b_58 = NULL,d_58 = NULL;
                            ATerm n_9;
                            n_9 = t;
                            {
                              ATerm c_58 = NULL;
                              t = not_null(v_57);
                              {
                                t = eval_config_0(t);
                                {
                                  c_58 = t;
                                  if(((b_58 != NULL) && (b_58 != c_58)))
                                    _fail(c_58);
                                  else
                                    b_58 = c_58;
                                }
                              }
                            }
                            t = n_9;
                            {
                              ATerm e_58 = NULL;
                              t = not_null(w_57);
                              {
                                t = eval_config_0(t);
                                {
                                  e_58 = t;
                                  if(((d_58 != NULL) && (d_58 != e_58)))
                                    _fail(e_58);
                                  else
                                    d_58 = e_58;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_58), not_null(d_58));
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
  ATerm m_58 = NULL;
  m_58 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_9, not_null(m_58));
    {
      t = table_get_0(t);
      {
        ATerm x_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_9;
            p_9 = t;
            {
              ATerm o_58 = NULL;
              ATerm p_58 = NULL;
              p_58 = t;
              if(((o_58 != NULL) && (o_58 != p_58)))
                _fail(p_58);
              else
                o_58 = p_58;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(m_58), not_null(o_58));
                t = table_put_0(t);
              }
            }
            t = p_9;
          }
          return(t);
        }
        t = try_1(t, x_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_97 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm t_58 = NULL;
      ATerm u_58 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          u_58 = t;
          if(((t_58 != NULL) && (t_58 != u_58)))
            _fail(u_58);
          else
            t_58 = u_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_58), term_s_9);
        t = geq_0(t);
      }
    }
    t = q_9;
    t = d_97(t);
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  a_59 = t;
  y_58 :
  if(match_cons(a_59, sym__2))
    {
      b_59 = ATgetArgument(a_59, 0);
      c_59 = ATgetArgument(a_59, 1);
      z_58 :
      if(match_cons(c_59, sym_Stream_1))
        {
          d_59 = ATgetArgument(c_59, 0);
          {
            ATerm g_59 = NULL;
            t = SSL_fputc(not_null(b_59), not_null(d_59));
            {
              ATerm h_59 = NULL;
              h_59 = t;
              if(((g_59 != NULL) && (g_59 != h_59)))
                _fail(h_59);
              else
                g_59 = h_59;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_59));
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
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  o_59 = t;
  m_59 :
  if(match_cons(o_59, sym__2))
    {
      p_59 = ATgetArgument(o_59, 0);
      r_59 = ATgetArgument(o_59, 1);
      n_59 :
      if(match_cons(p_59, sym_Stream_1))
        {
          q_59 = ATgetArgument(p_59, 0);
          {
            ATerm u_59 = NULL;
            t = SSL_write_term_to_stream_text(not_null(q_59), not_null(r_59));
            {
              ATerm v_59 = NULL;
              v_59 = t;
              if(((u_59 != NULL) && (u_59 != v_59)))
                _fail(v_59);
              else
                u_59 = v_59;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_59));
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
  ATerm z_1 (ATerm t)
  {
    ATerm z_59 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm a_60 = NULL;
      a_60 = t;
      if(((z_59 != NULL) && (z_59 != a_60)))
        _fail(a_60);
      else
        z_59 = a_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(z_59));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, z_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  g_60 = t;
  e_60 :
  if(match_cons(g_60, sym__2))
    {
      h_60 = ATgetArgument(g_60, 0);
      j_60 = ATgetArgument(g_60, 1);
      f_60 :
      if(match_cons(h_60, sym_Stream_1))
        {
          i_60 = ATgetArgument(h_60, 0);
          {
            ATerm m_60 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(i_60), not_null(j_60));
            {
              ATerm n_60 = NULL;
              n_60 = t;
              if(((m_60 != NULL) && (m_60 != n_60)))
                _fail(n_60);
              else
                m_60 = n_60;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_60));
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
ATerm WriteToFile_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  w_60 = t;
  v_60 :
  if(match_cons(w_60, sym__2))
    {
      x_60 = ATgetArgument(w_60, 0);
      y_60 = ATgetArgument(w_60, 1);
      {
        ATerm b_61 = NULL,d_61 = NULL;
        t = not_null(x_60);
        {
          ATerm c_61 = NULL;
          c_61 = t;
          if(((b_61 != NULL) && (b_61 != c_61)))
            _fail(c_61);
          else
            b_61 = c_61;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_61), term_u_9);
            {
              t = open_stream_0(t);
              {
                ATerm e_61 = NULL;
                e_61 = t;
                if(((d_61 != NULL) && (d_61 != e_61)))
                  _fail(e_61);
                else
                  d_61 = e_61;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_61), not_null(y_60));
                  {
                    t = z_95(t);
                    {
                      t = fclose_0(t);
                      t = not_null(y_60);
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
  ATerm m_61 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm n_61 = NULL,o_61 = NULL;
            n_61 = t;
            j_61 :
            if(match_cons(n_61, sym_Output_1))
              {
                o_61 = ATgetArgument(n_61, 0);
                if(((m_61 != NULL) && (m_61 != o_61)))
                  _fail(o_61);
                else
                  m_61 = o_61;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_2);
          ;
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm p_61 = NULL;
            t = term_y_9;
            {
              p_61 = t;
              if(((m_61 != NULL) && (m_61 != p_61)))
                _fail(p_61);
              else
                m_61 = p_61;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_2, _id);
  }
  t = v_9;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_2 (ATerm t)
      {
        t = not_null(m_61);
        return(t);
      }
      t = split_2(t, d_2, _id);
      return(t);
    }
    t = _2(t, _id, c_2);
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm f_2 (ATerm t)
            {
              ATerm q_61 = NULL;
              q_61 = t;
              l_61 :
              if(!(match_cons(q_61, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_2);
            return(t);
          }
          t = _2(t, e_2, WriteToBinaryFile_0);
          ;
          LocalPopChoice(a_10);
        }
      else
        {
          t = z_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_99 (ATerm))
{
  ATerm w_61 = NULL,c_62 = NULL,d_62 = NULL,f_62 = NULL;
  ATerm b_10;
  b_10 = t;
  t = dtime_0(t);
  t = b_10;
  {
    t = b_99(t);
    {
      ATerm c_10;
      c_10 = t;
      {
        ATerm x_61 = NULL;
        t = dtime_0(t);
        {
          x_61 = t;
          if(((w_61 != NULL) && (w_61 != x_61)))
            _fail(x_61);
          else
            w_61 = x_61;
        }
      }
      t = c_10;
      {
        c_62 = t;
        v_61 :
        if(match_cons(c_62, sym__2))
          {
            d_62 = ATgetArgument(c_62, 0);
            f_62 = ATgetArgument(c_62, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_62)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_61))), not_null(f_62));
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
  ATerm o_62 = NULL,s_62 = NULL;
  ATerm y_62 (ATerm t)
  {
    t = SSL_fclose(not_null(s_62));
    return(t);
  }
  s_62 = t;
  n_62 :
  if(match_cons(s_62, sym_Stream_1))
    {
      o_62 = ATgetArgument(s_62, 0);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(o_62));
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = y_62(t);
          }
      }
    }
  else
    {
      t = y_62(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym_Stream_1))
    {
      c_63 = ATgetArgument(b_63, 0);
      t = SSL_read_term_from_stream(not_null(c_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_95 (ATerm))
{
  ATerm f_10;
  f_10 = t;
  {
    ATerm h_63 = NULL,l_63 = NULL;
    ATerm g_10;
    g_10 = t;
    {
      ATerm i_63 = NULL;
      t = l_95(t);
      {
        i_63 = t;
        if(((h_63 != NULL) && (h_63 != i_63)))
          _fail(i_63);
        else
          h_63 = i_63;
      }
    }
    t = g_10;
    {
      ATerm m_63 = NULL;
      m_63 = t;
      if(((l_63 != NULL) && (l_63 != m_63)))
        _fail(m_63);
      else
        l_63 = m_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_63)), not_null(h_63)));
        t = printnl_0(t);
      }
    }
  }
  t = f_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  r_63 :
  if(match_cons(s_63, sym__2))
    {
      t_63 = ATgetArgument(s_63, 0);
      u_63 = ATgetArgument(s_63, 1);
      {
        ATerm x_63 = NULL;
        t = SSL_fopen(not_null(t_63), not_null(u_63));
        {
          ATerm y_63 = NULL;
          y_63 = t;
          if(((x_63 != NULL) && (x_63 != y_63)))
            _fail(y_63);
          else
            x_63 = y_63;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_63));
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
  ATerm d_64 = NULL;
  d_64 = t;
  t = SSL_is_string(not_null(d_64));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_64 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_64 = NULL;
    i_64 = t;
    if(((h_64 != NULL) && (h_64 != i_64)))
      _fail(i_64);
    else
      h_64 = i_64;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_64));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_64 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_64 = NULL;
    m_64 = t;
    if(((l_64 != NULL) && (l_64 != m_64)))
      _fail(m_64);
    else
      l_64 = m_64;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_64));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm p_64 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_64 = NULL;
    q_64 = t;
    if(((p_64 != NULL) && (p_64 != q_64)))
      _fail(q_64);
    else
      p_64 = q_64;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_64));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm w_64 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(w_64, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(w_64, sym_stdin_0))
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
  ATerm g_65 = NULL;
  ATerm i_65 = NULL,j_65 = NULL;
  g_65 = t;
  {
    ATerm k_65 = NULL;
    ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
    t = not_null(g_65);
    {
      k_65 = t;
      {
        t = SSL_explode_term(not_null(k_65));
        {
          m_65 = t;
          d_65 :
          if(match_cons(m_65, sym__2))
            {
              n_65 = ATgetArgument(m_65, 0);
              o_65 = ATgetArgument(m_65, 1);
              e_65 :
              if(match_string(n_65, ""))
                {
                  f_65 :
                  if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
                    {
                      p_65 = ATgetFirst((ATermList) o_65);
                      q_65 = (ATerm) ATgetNext((ATermList) o_65);
                      {
                        if(((j_65 != NULL) && (j_65 != p_65)))
                          _fail(p_65);
                        else
                          j_65 = p_65;
                        if(((i_65 != NULL) && (i_65 != q_65)))
                          _fail(q_65);
                        else
                          i_65 = q_65;
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
    t = not_null(j_65);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  x_65 :
  if(match_cons(y_65, sym__2))
    {
      z_65 = ATgetArgument(y_65, 0);
      a_66 = ATgetArgument(y_65, 1);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm d_66 = NULL,e_66 = NULL;
                    d_66 = t;
                    w_65 :
                    if(match_cons(d_66, sym_Path_1))
                      {
                        e_66 = ATgetArgument(d_66, 0);
                        t = not_null(e_66);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, g_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
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
  ATerm w_66 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_66 = NULL;
      ATerm q_66 = NULL;
      q_66 = t;
      if(((p_66 != NULL) && (p_66 != q_66)))
        _fail(q_66);
      else
        p_66 = q_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), term_n_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm h_2 (ATerm t)
        {
          t = term_o_10;
          return(t);
        }
        t = debug_1(t, h_2);
        _fail(t);
      }
    }
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm z_66 = NULL;
      t = read_from_stream_0(t);
      {
        z_66 = t;
        if(((w_66 != NULL) && (w_66 != z_66)))
          _fail(z_66);
        else
          w_66 = z_66;
      }
    }
    t = p_10;
    {
      t = fclose_0(t);
      t = not_null(w_66);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_91 (ATerm), ATerm e_91 (ATerm))
{
  ATerm s_67 = NULL,c_68 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm y_67 = NULL;
    t = d_91(t);
    {
      y_67 = t;
      if(((s_67 != NULL) && (s_67 != y_67)))
        _fail(y_67);
      else
        s_67 = y_67;
    }
  }
  t = q_10;
  {
    ATerm d_68 = NULL;
    t = e_91(t);
    {
      d_68 = t;
      if(((c_68 != NULL) && (c_68 != d_68)))
        _fail(d_68);
      else
        c_68 = d_68;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_67), not_null(c_68));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_68 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 (ATerm t)
        {
          ATerm k_68 = NULL,l_68 = NULL;
          k_68 = t;
          h_68 :
          if(match_cons(k_68, sym_Input_1))
            {
              l_68 = ATgetArgument(k_68, 0);
              if(((j_68 != NULL) && (j_68 != l_68)))
                _fail(l_68);
              else
                j_68 = l_68;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_2);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm m_68 = NULL;
          t = term_u_10;
          {
            m_68 = t;
            if(((j_68 != NULL) && (j_68 != m_68)))
              _fail(m_68);
            else
              j_68 = m_68;
          }
        }
      }
  }
  t = r_10;
  {
    ATerm j_2 (ATerm t)
    {
      t = not_null(j_68);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_2);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm r_68 = NULL;
    r_68 = t;
    p_68 :
    if(!(match_string(r_68, "-k")))
      {
        if(!(match_string(r_68, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm s_68 = NULL;
      ATerm t_68 = NULL;
      t = string_to_int_0(t);
      {
        t_68 = t;
        if(((s_68 != NULL) && (s_68 != t_68)))
          _fail(t_68);
        else
          s_68 = t_68;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(s_68));
        t = set_config_0(t);
      }
    }
    t = v_10;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_x_10;
    return(t);
  }
  t = ArgOption_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_68 = NULL;
  w_68 = t;
  t = SSL_string_to_int(not_null(w_68));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm n_69 = NULL;
        n_69 = t;
        b_69 :
        if(!(match_string(n_69, "-S")))
          {
            if(!(match_string(n_69, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_b_11;
        t = set_config_0(t);
        t = term_c_11;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = Option_3(t, n_2, o_2, p_2);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm o_69 = NULL;
              o_69 = t;
              j_69 :
              if(!(match_string(o_69, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              ATerm r_69 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm p_69 = NULL;
                ATerm q_69 = NULL;
                t = string_to_int_0(t);
                {
                  q_69 = t;
                  if(((p_69 != NULL) && (p_69 != q_69)))
                    _fail(q_69);
                  else
                    p_69 = q_69;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(p_69));
                  t = set_config_0(t);
                }
              }
              t = g_11;
              {
                ATerm s_69 = NULL;
                s_69 = t;
                if(((r_69 != NULL) && (r_69 != s_69)))
                  _fail(s_69);
                else
                  r_69 = s_69;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_69));
              }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_h_11;
              return(t);
            }
            t = ArgOption_3(t, q_2, r_2, s_2);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm t_2 (ATerm t)
              {
                ATerm t_69 = NULL;
                t_69 = t;
                m_69 :
                if(!(match_string(t_69, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = term_j_11;
                t = set_config_0(t);
                t = term_k_11;
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_l_11;
                return(t);
              }
              t = Option_3(t, t_2, u_2, v_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm c_70 = NULL;
    c_70 = t;
    z_69 :
    if(!(match_string(c_70, "-o")))
      {
        if(!(match_string(c_70, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm f_70 = NULL;
    ATerm o_11;
    o_11 = t;
    {
      ATerm d_70 = NULL;
      ATerm e_70 = NULL;
      e_70 = t;
      if(((d_70 != NULL) && (d_70 != e_70)))
        _fail(e_70);
      else
        d_70 = e_70;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(d_70));
        t = set_config_0(t);
      }
    }
    t = o_11;
    {
      ATerm g_70 = NULL;
      g_70 = t;
      if(((f_70 != NULL) && (f_70 != g_70)))
        _fail(g_70);
      else
        f_70 = g_70;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_70));
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_q_11;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, y_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm k_70 = NULL;
          k_70 = t;
          j_70 :
          if(!(match_string(k_70, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_u_11;
          t = set_config_0(t);
          t = term_v_11;
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = Option_3(t, z_2, a_3, b_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  q_70 = t;
  o_70 :
  if(match_string(q_70, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_70) == AT_LIST) && !(ATisEmpty(q_70))))
        {
          r_70 = ATgetFirst((ATermList) q_70);
          s_70 = (ATerm) ATgetNext((ATermList) q_70);
          p_70 :
          if(((ATgetType(s_70) == AT_LIST) && !(ATisEmpty(s_70))))
            {
              t_70 = ATgetFirst((ATermList) s_70);
              u_70 = (ATerm) ATgetNext((ATermList) s_70);
              {
                ATerm y_70 = NULL;
                ATerm x_11;
                x_11 = t;
                {
                  t = not_null(r_70);
                  t = j_0(t);
                }
                t = x_11;
                {
                  ATerm z_70 = NULL;
                  t = not_null(t_70);
                  {
                    t = k_0(t);
                    {
                      z_70 = t;
                      if(((y_70 != NULL) && (y_70 != z_70)))
                        _fail(z_70);
                      else
                        y_70 = z_70;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_70)), not_null(y_70));
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
  ATerm c_3 (ATerm t)
  {
    ATerm g_71 = NULL;
    g_71 = t;
    d_71 :
    if(!(match_string(g_71, "-i")))
      {
        if(!(match_string(g_71, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm j_71 = NULL;
    ATerm y_11;
    y_11 = t;
    {
      ATerm h_71 = NULL;
      ATerm i_71 = NULL;
      i_71 = t;
      if(((h_71 != NULL) && (h_71 != i_71)))
        _fail(i_71);
      else
        h_71 = i_71;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(h_71));
        t = set_config_0(t);
      }
    }
    t = y_11;
    {
      ATerm k_71 = NULL;
      k_71 = t;
      if(((j_71 != NULL) && (j_71 != k_71)))
        _fail(k_71);
      else
        j_71 = k_71;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_71));
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_a_12;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm o_71 = NULL;
  t = report_run_time_0(t);
  {
    ATerm p_71 = NULL;
    t = term_u_8;
    {
      t = whoami_0(t);
      {
        p_71 = t;
        if(((o_71 != NULL) && (o_71 != p_71)))
          _fail(p_71);
        else
          o_71 = p_71;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, term_f_12), not_null(o_71)));
      {
        t = printnl_0(t);
        {
          t = term_y_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_g_12;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_71 = NULL;
  s_71 = t;
  t = SSL_TicksToSeconds(not_null(s_71));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym__2))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_71), not_null(z_71));
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = SSL_addr(not_null(y_71), not_null(z_71));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_89(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
        g_72 = t;
        f_72 :
        if(((ATgetType(g_72) == AT_LIST) && !(ATisEmpty(g_72))))
          {
            h_72 = ATgetFirst((ATermList) g_72);
            i_72 = (ATerm) ATgetNext((ATermList) g_72);
            {
              ATerm l_72 = NULL;
              ATerm m_72 = NULL;
              t = not_null(i_72);
              {
                t = foldr_2(t, o_89, p_89);
                {
                  m_72 = t;
                  if(((l_72 != NULL) && (l_72 != m_72)))
                    _fail(m_72);
                  else
                    l_72 = m_72;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_72), not_null(l_72));
                t = p_89(t);
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
ATerm crush_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm t_72 = NULL;
  ATerm v_72 = NULL;
  t_72 = t;
  {
    ATerm w_72 = NULL;
    ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
    t = not_null(t_72);
    {
      w_72 = t;
      {
        t = SSL_explode_term(not_null(w_72));
        {
          y_72 = t;
          s_72 :
          if(match_cons(y_72, sym__2))
            {
              z_72 = ATgetArgument(y_72, 0);
              a_73 = ATgetArgument(y_72, 1);
              if(((v_72 != NULL) && (v_72 != a_73)))
                _fail(a_73);
              else
                v_72 = a_73;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_72);
      t = foldr_2(t, h_93, i_93);
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
    ATerm f_3 (ATerm t)
    {
      t = term_a_11;
      return(t);
    }
    t = crush_2(t, f_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
  g_73 = t;
  f_73 :
  if(match_cons(g_73, sym__2))
    {
      h_73 = ATgetArgument(g_73, 0);
      i_73 = ATgetArgument(g_73, 1);
      {
        ATerm l_12;
        l_12 = t;
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_73), not_null(i_73));
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              t = SSL_gtr(not_null(h_73), not_null(i_73));
            }
        }
        t = l_12;
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
  ATerm o_73 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
      p_73 = t;
      n_73 :
      if(match_cons(p_73, sym__2))
        {
          q_73 = ATgetArgument(p_73, 0);
          r_73 = ATgetArgument(p_73, 1);
          {
            if(((o_73 != NULL) && (o_73 != q_73)))
              _fail(q_73);
            else
              o_73 = q_73;
            if(((o_73 != NULL) && (o_73 != r_73)))
              _fail(r_73);
            else
              o_73 = r_73;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_97 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm t_12;
    t_12 = t;
    {
      ATerm u_73 = NULL;
      ATerm v_73 = NULL;
      t = term_r_9;
      {
        t = get_config_0(t);
        {
          v_73 = t;
          if(((u_73 != NULL) && (u_73 != v_73)))
            _fail(v_73);
          else
            u_73 = v_73;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), term_y_8);
        t = geq_0(t);
      }
    }
    t = t_12;
    t = c_97(t);
    return(t);
  }
  t = try_1(t, g_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm z_73 = NULL,b_74 = NULL;
    ATerm u_12;
    u_12 = t;
    {
      ATerm a_74 = NULL;
      t = run_time_0(t);
      {
        a_74 = t;
        if(((z_73 != NULL) && (z_73 != a_74)))
          _fail(a_74);
        else
          z_73 = a_74;
      }
    }
    t = u_12;
    {
      ATerm c_74 = NULL;
      t = term_u_8;
      {
        t = whoami_0(t);
        {
          c_74 = t;
          if(((b_74 != NULL) && (b_74 != c_74)))
            _fail(c_74);
          else
            b_74 = c_74;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_12), not_null(z_73)), term_v_12), not_null(b_74)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_a_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym_Version_0))
    {
      ATerm l_74 = NULL,n_74 = NULL;
      ATerm x_12;
      x_12 = t;
      {
        ATerm m_74 = NULL;
        t = SSLgetAnnotations(not_null(j_74));
        {
          m_74 = t;
          if(((l_74 != NULL) && (l_74 != m_74)))
            _fail(m_74);
          else
            l_74 = m_74;
        }
      }
      t = x_12;
      {
        ATerm o_74 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_74));
        {
          o_74 = t;
          if(((n_74 != NULL) && (n_74 != o_74)))
            _fail(o_74);
          else
            n_74 = o_74;
        }
        t = not_null(n_74);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_13;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm e_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = e_13;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, i_3);
      }
    }
  t = z_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_74 = NULL;
  t_74 = t;
  t = SSL_table_create(not_null(t_74));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_74 = NULL;
  x_74 = t;
  {
    ATerm k_13;
    k_13 = t;
    {
      t = term_l_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_13, term_p_13, not_null(x_74));
          t = table_put_0(t);
        }
      }
    }
    t = k_13;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  t = SSL_table_destroy(not_null(b_75));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_75 = NULL;
  f_75 = t;
  t = SSL_exit(not_null(f_75));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_102 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm i_75 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = Cons_2(t, n_83, i_75);
      }
    return(t);
  }
  t = i_75(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  r_75 = t;
  o_75 :
  if(((ATgetType(r_75) == AT_LIST) && !(ATisEmpty(r_75))))
    {
      p_75 = ATgetFirst((ATermList) r_75);
      q_75 = (ATerm) ATgetNext((ATermList) r_75);
      {
        ATerm w_75 = NULL;
        t = not_null(q_75);
        {
          ATerm x_13;
          x_13 = t;
          {
            ATerm x_75 = NULL,d_76 = NULL,f_76 = NULL;
            ATerm a_14;
            a_14 = t;
            {
              ATerm y_75 = NULL;
              t = i_0(t);
              {
                y_75 = t;
                if(((x_75 != NULL) && (x_75 != y_75)))
                  _fail(y_75);
                else
                  x_75 = y_75;
              }
            }
            t = a_14;
            {
              ATerm e_76 = NULL;
              t = not_null(p_75);
              {
                t = g_0(t);
                {
                  e_76 = t;
                  if(((d_76 != NULL) && (d_76 != e_76)))
                    _fail(e_76);
                  else
                    d_76 = e_76;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_75)), not_null(d_76));
                {
                  f_76 = t;
                  if(((w_75 != NULL) && (w_75 != f_76)))
                    _fail(f_76);
                  else
                    w_75 = f_76;
                }
              }
            }
          }
          t = x_13;
          {
            ATerm j_3 (ATerm t)
            {
              t = not_null(w_75);
              return(t);
            }
            t = reverse_acc_2(t, g_0, j_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_75) == AT_LIST) && ATisEmpty(r_75)))
        {
          {
            t = term_u_8;
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
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_101 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm q_76 = NULL,r_76 = NULL;
  q_76 = t;
  p_76 :
  if(match_cons(q_76, sym_Program_1))
    {
      r_76 = ATgetArgument(q_76, 0);
      {
        ATerm u_76 = NULL,w_76 = NULL;
        ATerm v_76 = NULL;
        t = SSLgetAnnotations(not_null(q_76));
        {
          v_76 = t;
          if(((u_76 != NULL) && (u_76 != v_76)))
            _fail(v_76);
          else
            u_76 = v_76;
        }
        {
          t = not_null(r_76);
          {
            ATerm y_76 = NULL;
            t = t_75(t);
            {
              w_76 = t;
              {
                ATerm z_76 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_76)), not_null(u_76));
                {
                  z_76 = t;
                  if(((y_76 != NULL) && (y_76 != z_76)))
                    _fail(z_76);
                  else
                    y_76 = z_76;
                }
                t = not_null(y_76);
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
  ATerm i_77 = NULL;
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_77 = NULL;
      t = term_g_12;
      {
        t = get_config_0(t);
        {
          j_77 = t;
          if(((i_77 != NULL) && (i_77 != j_77)))
            _fail(j_77);
          else
            i_77 = j_77;
        }
      }
      ;
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm m_3 (ATerm t)
          {
            ATerm k_77 = NULL;
            k_77 = t;
            if(((i_77 != NULL) && (i_77 != k_77)))
              _fail(k_77);
            else
              i_77 = k_77;
            return(t);
          }
          t = Program_1(t, m_3);
          return(t);
        }
        t = option_defined_1(t, l_3);
      }
    }
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        t = not_null(i_77);
        return(t);
      }
      t = short_description_1(t, o_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, n_3);
    {
      t = term_d_14;
      {
        t = echo_0(t);
        {
          t = term_g_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm l_77 = NULL;
                  ATerm m_77 = NULL;
                  m_77 = t;
                  if(((l_77 != NULL) && (l_77 != m_77)))
                    _fail(m_77);
                  else
                    l_77 = m_77;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_77)), term_h_14);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_3);
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm n_77 = NULL;
                    ATerm o_77 = NULL;
                    ATerm r_3 (ATerm t)
                    {
                      t = not_null(i_77);
                      return(t);
                    }
                    t = long_description_1(t, r_3);
                    {
                      o_77 = t;
                      if(((n_77 != NULL) && (n_77 != o_77)))
                        _fail(o_77);
                      else
                        n_77 = o_77;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_77)), term_i_14);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_3);
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
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm y_77 = NULL,z_77 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym_Undefined_1))
    {
      z_77 = ATgetArgument(y_77, 0);
      {
        ATerm c_78 = NULL,e_78 = NULL;
        ATerm d_78 = NULL;
        t = SSLgetAnnotations(not_null(y_77));
        {
          d_78 = t;
          if(((c_78 != NULL) && (c_78 != d_78)))
            _fail(d_78);
          else
            c_78 = d_78;
        }
        {
          t = not_null(z_77);
          {
            ATerm g_78 = NULL;
            t = u_75(t);
            {
              e_78 = t;
              {
                ATerm h_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_78)), not_null(c_78));
                {
                  h_78 = t;
                  if(((g_78 != NULL) && (g_78 != h_78)))
                    _fail(h_78);
                  else
                    g_78 = h_78;
                }
                t = not_null(g_78);
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
ATerm fetch_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm m_78 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_83, _id);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = Cons_2(t, _id, m_78);
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_100 (ATerm))
{
  t = fetch_1(t, z_100);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  n_78 :
  if(((ATgetType(o_78) == AT_LIST) && ATisEmpty(o_78)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
        {
          p_78 = ATgetFirst((ATermList) o_78);
          q_78 = (ATerm) ATgetNext((ATermList) o_78);
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
  ATerm n_14;
  n_14 = t;
  {
    ATerm t_78 = NULL;
    ATerm w_78 = NULL;
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm u_78 = NULL;
          ATerm v_78 = NULL;
          v_78 = t;
          if(((u_78 != NULL) && (u_78 != v_78)))
            _fail(v_78);
          else
            u_78 = v_78;
          t = (ATerm) ATinsert(ATempty, not_null(u_78));
        }
      }
    {
      w_78 = t;
      if(((t_78 != NULL) && (t_78 != w_78)))
        _fail(w_78);
      else
        t_78 = w_78;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(t_78));
      t = printnl_0(t);
    }
  }
  t = n_14;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_g_12;
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
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_79 = NULL;
  d_79 = t;
  c_79 :
  if(match_cons(d_79, sym_Help_0))
    {
      ATerm f_79 = NULL,h_79 = NULL;
      ATerm y_14;
      y_14 = t;
      {
        ATerm g_79 = NULL;
        t = SSLgetAnnotations(not_null(d_79));
        {
          g_79 = t;
          if(((f_79 != NULL) && (f_79 != g_79)))
            _fail(g_79);
          else
            f_79 = g_79;
        }
      }
      t = y_14;
      {
        ATerm i_79 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_79));
        {
          i_79 = t;
          if(((h_79 != NULL) && (h_79 != i_79)))
            _fail(i_79);
          else
            h_79 = i_79;
        }
        t = not_null(h_79);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_76(t);
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
ATerm system_about_switch_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 (ATerm t)
      {
        ATerm o_79 = NULL;
        o_79 = t;
        m_79 :
        if(!(match_string(o_79, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_g_15;
        t = set_config_0(t);
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_h_15;
        return(t);
      }
      t = Option_3(t, s_3, t_3, u_3);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm p_79 = NULL;
          p_79 = t;
          n_79 :
          if(!(match_string(p_79, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm w_3 (ATerm t)
        {
          t = term_g_15;
          {
            t = set_config_0(t);
            {
              t = term_m_15;
              t = set_config_0(t);
            }
          }
          t = term_n_15;
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          t = term_r_15;
          return(t);
        }
        t = Option_3(t, v_3, w_3, x_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  r_79 :
  if(match_cons(s_79, sym__2))
    {
      t_79 = ATgetArgument(s_79, 0);
      u_79 = ATgetArgument(s_79, 1);
      t = SSL_table_get(not_null(t_79), not_null(u_79));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
  b_80 = t;
  a_80 :
  if(match_cons(b_80, sym__3))
    {
      c_80 = ATgetArgument(b_80, 0);
      d_80 = ATgetArgument(b_80, 1);
      e_80 = ATgetArgument(b_80, 2);
      {
        ATerm u_15;
        u_15 = t;
        {
          ATerm i_80 = NULL;
          ATerm j_80 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(d_80));
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = (ATerm) ATempty;
              }
            {
              j_80 = t;
              if(((i_80 != NULL) && (i_80 != j_80)))
                _fail(j_80);
              else
                i_80 = j_80;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_80), not_null(d_80), (ATerm) ATinsert(CheckATermList(not_null(i_80)), not_null(e_80)));
            t = table_put_0(t);
          }
        }
        t = u_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm n_80 = NULL;
  ATerm o_80 = NULL;
  t = term_u_8;
  {
    t = e_102(t);
    {
      o_80 = t;
      if(((n_80 != NULL) && (n_80 != o_80)))
        _fail(o_80);
      else
        n_80 = o_80;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_14, term_f_14, not_null(n_80));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t_80 :
  if(match_string(u_80, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(u_80) == AT_LIST) && !(ATisEmpty(u_80))))
        {
          v_80 = ATgetFirst((ATermList) u_80);
          w_80 = (ATerm) ATgetNext((ATermList) u_80);
          {
            ATerm z_80 = NULL;
            ATerm x_15;
            x_15 = t;
            {
              t = not_null(v_80);
              t = a_0(t);
            }
            t = x_15;
            {
              ATerm a_81 = NULL;
              t = term_u_8;
              {
                t = b_0(t);
                {
                  a_81 = t;
                  if(((z_80 != NULL) && (z_80 != a_81)))
                    _fail(a_81);
                  else
                    z_80 = a_81;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_80)), not_null(z_80));
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
  ATerm y_3 (ATerm t)
  {
    ATerm f_81 = NULL;
    f_81 = t;
    e_81 :
    if(!(match_string(f_81, "--help")))
      {
        if(!(match_string(f_81, "-h")))
          {
            if(!(match_string(f_81, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_y_15;
    {
      t = set_config_0(t);
      t = term_z_15;
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_a_16;
    return(t);
  }
  t = Option_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  i_81 = t;
  h_81 :
  if(((ATgetType(i_81) == AT_LIST) && !(ATisEmpty(i_81))))
    {
      j_81 = ATgetFirst((ATermList) i_81);
      k_81 = (ATerm) ATgetNext((ATermList) i_81);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_81)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_81)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  t_81 :
  if(((ATgetType(u_81) == AT_LIST) && !(ATisEmpty(u_81))))
    {
      v_81 = ATgetFirst((ATermList) u_81);
      w_81 = (ATerm) ATgetNext((ATermList) u_81);
      {
        ATerm a_82 = NULL,c_82 = NULL;
        ATerm b_82 = NULL;
        t = SSLgetAnnotations(not_null(u_81));
        {
          b_82 = t;
          if(((a_82 != NULL) && (a_82 != b_82)))
            _fail(b_82);
          else
            a_82 = b_82;
        }
        {
          t = not_null(v_81);
          {
            ATerm e_82 = NULL;
            t = y_61(t);
            {
              c_82 = t;
              {
                t = not_null(w_81);
                {
                  ATerm g_82 = NULL;
                  t = z_61(t);
                  {
                    e_82 = t;
                    {
                      ATerm h_82 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_82)), not_null(c_82)), not_null(a_82));
                      {
                        h_82 = t;
                        if(((g_82 != NULL) && (g_82 != h_82)))
                          _fail(h_82);
                        else
                          g_82 = h_82;
                      }
                      t = not_null(g_82);
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
  ATerm r_82 = NULL;
  r_82 = t;
  q_82 :
  if(((ATgetType(r_82) == AT_LIST) && ATisEmpty(r_82)))
    {
      {
        ATerm t_82 = NULL,v_82 = NULL;
        ATerm d_16;
        d_16 = t;
        {
          ATerm u_82 = NULL;
          t = SSLgetAnnotations(not_null(r_82));
          {
            u_82 = t;
            if(((t_82 != NULL) && (t_82 != u_82)))
              _fail(u_82);
            else
              t_82 = u_82;
          }
        }
        t = d_16;
        {
          ATerm w_82 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_82));
          {
            w_82 = t;
            if(((v_82 != NULL) && (v_82 != w_82)))
              _fail(w_82);
            else
              v_82 = w_82;
          }
          t = not_null(v_82);
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
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  c_83 = t;
  b_83 :
  if(match_cons(c_83, sym__2))
    {
      d_83 = ATgetArgument(c_83, 0);
      e_83 = ATgetArgument(c_83, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(d_83), not_null(e_83));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_102 (ATerm))
{
  ATerm i_16;
  i_16 = t;
  {
    ATerm b_4 (ATerm t)
    {
      t = term_j_16;
      t = c_102(t);
      return(t);
    }
    t = try_1(t, b_4);
  }
  t = i_16;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm p_83 = NULL;
      ATerm k_16;
      k_16 = t;
      {
        ATerm k_83 = NULL;
        ATerm m_83 = NULL;
        m_83 = t;
        if(((k_83 != NULL) && (k_83 != m_83)))
          _fail(m_83);
        else
          k_83 = m_83;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_12, not_null(k_83));
          t = set_config_0(t);
        }
      }
      t = k_16;
      {
        ATerm s_83 = NULL;
        s_83 = t;
        if(((p_83 != NULL) && (p_83 != s_83)))
          _fail(s_83);
        else
          p_83 = s_83;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_83));
      }
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm l_16 = t;
      int m_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              {
                t = c_102(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          ;
          LocalPopChoice(m_16);
        }
      else
        {
          t = l_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  ATerm p_16;
  p_16 = t;
  {
    ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
    f_84 = t;
    z_83 :
    if(match_cons(f_84, sym__3))
      {
        g_84 = ATgetArgument(f_84, 0);
        h_84 = ATgetArgument(f_84, 1);
        i_84 = ATgetArgument(f_84, 2);
        {
          if(((a_84 != NULL) && (a_84 != g_84)))
            _fail(g_84);
          else
            a_84 = g_84;
          {
            if(((b_84 != NULL) && (b_84 != h_84)))
              _fail(h_84);
            else
              b_84 = h_84;
            {
              if(((c_84 != NULL) && (c_84 != i_84)))
                _fail(i_84);
              else
                c_84 = i_84;
              t = SSL_table_put(not_null(a_84), not_null(b_84), not_null(c_84));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_102 (ATerm))
{
  ATerm l_84 = NULL;
  ATerm q_16;
  q_16 = t;
  {
    t = term_v_16;
    t = table_put_0(t);
  }
  t = q_16;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_102(t);
          ;
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          {
            ATerm b_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = b_17;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, e_4);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_17;
            i_17 = t;
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_13;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_17;
            {
              t = system_usage_0(t);
              {
                t = term_a_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_17;
                  n_17 = t;
                  {
                    t = term_f_15;
                    t = get_config_0(t);
                  }
                  t = n_17;
                  {
                    t = system_about_0(t);
                    {
                      t = term_a_11;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  {
                    ATerm g_4 (ATerm t)
                    {
                      ATerm h_4 (ATerm t)
                      {
                        ATerm m_84 = NULL;
                        m_84 = t;
                        if(((l_84 != NULL) && (l_84 != m_84)))
                          _fail(m_84);
                        else
                          l_84 = m_84;
                        return(t);
                      }
                      t = Undefined_1(t, h_4);
                      return(t);
                    }
                    t = option_defined_1(t, g_4);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_o_17));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_y_8;
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
      t = try_1(t, f_4);
      {
        ATerm p_17;
        p_17 = t;
        {
          t = term_e_14;
          t = table_destroy_0(t);
        }
        t = p_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm))
{
  t = parse_options_1(t, b_100);
  {
    t = store_options_0(t);
    {
      t = d_100(t);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_100);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            {
              ATerm w_17 = t;
              int a_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_100(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = w_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t_99 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm c_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = c_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_99);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_4, s_99, t_99, j_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm g_18;
      g_18 = t;
      {
        ATerm p_84 = NULL;
        ATerm q_84 = NULL;
        t = term_g_12;
        {
          t = get_config_0(t);
          {
            q_84 = t;
            if(((p_84 != NULL) && (p_84 != q_84)))
              _fail(q_84);
            else
              p_84 = q_84;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_8, (ATerm) ATinsert(ATempty, not_null(p_84)));
          t = printnl_0(t);
        }
      }
      t = g_18;
      return(t);
    }
    t = if_verbose2_1(t, l_4);
    return(t);
  }
  t = iowrap_4(t, k_99, l_99, m_99, k_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm))
{
  t = iowrap_3(t, i_99, j_99, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_99 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    t = _2(t, _id, f_99);
    return(t);
  }
  t = iowrap_2(t, m_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
