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
ATerm term_z_23;
ATerm term_j_22;
ATerm term_n_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_f_15;
ATerm term_q_14;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_h_8;
ATerm term_y_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a shallow term-expression: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_v_8);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_v_8);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_v_8);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_v_8);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_v_8);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__3, term_b_16, term_l_16, (ATerm) ATempty);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Var_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm Assign_1_0 (ATerm a_70 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm c_64 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm Assign_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm);
ATerm Where_1_0 (ATerm p_67 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Scope_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_66 (ATerm), ATerm);
ATerm Str_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm Int_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm shallow_term_expression_0_0 (ATerm);
ATerm Match_1_0 (ATerm w_66 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm d_68 (ATerm), ATerm);
ATerm All_1_0 (ATerm c_68 (ATerm), ATerm);
ATerm Some_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm One_1_0 (ATerm b_68 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm);
ATerm Path_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_66 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm Test_1_0 (ATerm q_67 (ATerm), ATerm);
ATerm Not_1_0 (ATerm o_67 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm FunType_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm);
ATerm Op_2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm r_62 (ATerm), ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm s_83 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm g_62 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm l_62 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm b_102 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_102 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm d_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  ATerm a_14 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,g_13 = NULL;
    ATerm e_14 (ATerm t)
    {
      ATerm h_13 = NULL,i_13 = NULL;
      t = not_null(g_13);
      if(((h_13 != NULL) && (h_13 != t)))
        _fail(t);
      else
        h_13 = t;
      t = not_null(g_13);
      {
        ATerm j_13 = NULL;
        ATerm f_14 (ATerm t)
        {
          t = not_null(j_13);
          if(((i_13 != NULL) && (i_13 != t)))
            _fail(t);
          else
            i_13 = t;
          t = not_null(j_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_13)), not_null(b_13));
        if(((j_13 != NULL) && (j_13 != t)))
          _fail(t);
        else
          j_13 = t;
        t = f_14(t);
        t = not_null(i_13);
      }
      return(t);
    }
    t = not_null(n_12);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = not_null(o_12);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = not_null(n_12);
    {
      ATerm f_13 = NULL;
      ATerm d_14 (ATerm t)
      {
        t = not_null(f_13);
        if(((b_13 != NULL) && (b_13 != t)))
          _fail(t);
        else
          b_13 = t;
        t = not_null(f_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_12));
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = d_14(t);
      t = not_null(a_13);
      t = q_0(t);
      if(((g_13 != NULL) && (g_13 != t)))
        _fail(t);
      else
        g_13 = t;
      t = e_14(t);
    }
    return(t);
  }
  ATerm b_14 (ATerm t)
  {
    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL;
    ATerm h_14 (ATerm t)
    {
      ATerm p_13 = NULL,q_13 = NULL;
      t = not_null(o_13);
      if(((p_13 != NULL) && (p_13 != t)))
        _fail(t);
      else
        p_13 = t;
      t = not_null(o_13);
      {
        ATerm r_13 = NULL;
        ATerm i_14 (ATerm t)
        {
          t = not_null(r_13);
          if(((q_13 != NULL) && (q_13 != t)))
            _fail(t);
          else
            q_13 = t;
          t = not_null(r_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_13)), not_null(m_13));
        if(((r_13 != NULL) && (r_13 != t)))
          _fail(t);
        else
          r_13 = t;
        t = i_14(t);
        t = not_null(q_13);
      }
      return(t);
    }
    t = not_null(n_12);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = not_null(o_12);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = not_null(n_12);
    {
      ATerm n_13 = NULL;
      ATerm g_14 (ATerm t)
      {
        t = not_null(n_13);
        if(((m_13 != NULL) && (m_13 != t)))
          _fail(t);
        else
          m_13 = t;
        t = not_null(n_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_13));
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = g_14(t);
      t = not_null(l_13);
      t = q_0(t);
      if(((o_13 != NULL) && (o_13 != t)))
        _fail(t);
      else
        o_13 = t;
      t = h_14(t);
    }
    return(t);
  }
  ATerm c_14 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL;
    ATerm k_14 (ATerm t)
    {
      ATerm x_13 = NULL,y_13 = NULL;
      t = not_null(w_13);
      if(((x_13 != NULL) && (x_13 != t)))
        _fail(t);
      else
        x_13 = t;
      t = not_null(w_13);
      {
        ATerm z_13 = NULL;
        ATerm l_14 (ATerm t)
        {
          t = not_null(z_13);
          if(((y_13 != NULL) && (y_13 != t)))
            _fail(t);
          else
            y_13 = t;
          t = not_null(z_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_13)), not_null(u_13));
        if(((z_13 != NULL) && (z_13 != t)))
          _fail(t);
        else
          z_13 = t;
        t = l_14(t);
        t = not_null(y_13);
      }
      return(t);
    }
    t = not_null(n_12);
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = not_null(o_12);
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    t = not_null(n_12);
    {
      ATerm v_13 = NULL;
      ATerm j_14 (ATerm t)
      {
        t = not_null(v_13);
        if(((u_13 != NULL) && (u_13 != t)))
          _fail(t);
        else
          u_13 = t;
        t = not_null(v_13);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_13));
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = j_14(t);
      t = not_null(t_13);
      t = q_0(t);
      if(((w_13 != NULL) && (w_13 != t)))
        _fail(t);
      else
        w_13 = t;
      t = k_14(t);
    }
    return(t);
  }
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = not_null(n_12);
  if(match_cons(t, sym_Var_1))
    {
      o_12 = ATgetArgument(t, 0);
      {
        ATerm o_4 = t;
        int p_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_14(t);
            ;
            LocalPopChoice(p_4);
          }
        else
          {
            t = o_4;
            {
              ATerm q_4 = t;
              int r_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_14(t);
                  ;
                  LocalPopChoice(r_4);
                }
              else
                {
                  t = q_4;
                  t = c_14(t);
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
ATerm Assign_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  ATerm b_15 (ATerm t)
  {
    ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,x_14 = NULL;
    ATerm d_15 (ATerm t)
    {
      ATerm y_14 = NULL,z_14 = NULL;
      t = not_null(x_14);
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = not_null(x_14);
      {
        ATerm a_15 = NULL;
        ATerm e_15 (ATerm t)
        {
          t = not_null(a_15);
          if(((z_14 != NULL) && (z_14 != t)))
            _fail(t);
          else
            z_14 = t;
          t = not_null(a_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_1, not_null(y_14)), not_null(v_14));
        if(((a_15 != NULL) && (a_15 != t)))
          _fail(t);
        else
          a_15 = t;
        t = e_15(t);
        t = not_null(z_14);
      }
      return(t);
    }
    t = not_null(r_14);
    if(((t_14 != NULL) && (t_14 != t)))
      _fail(t);
    else
      t_14 = t;
    t = not_null(s_14);
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = not_null(r_14);
    {
      ATerm w_14 = NULL;
      ATerm c_15 (ATerm t)
      {
        t = not_null(w_14);
        if(((v_14 != NULL) && (v_14 != t)))
          _fail(t);
        else
          v_14 = t;
        t = not_null(w_14);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_14));
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = c_15(t);
      t = not_null(u_14);
      t = a_70(t);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = d_15(t);
    }
    return(t);
  }
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = not_null(r_14);
  if(match_cons(t, sym_Assign_1))
    {
      s_14 = ATgetArgument(t, 0);
      t = b_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm c_64 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  ATerm u_15 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,q_15 = NULL;
    ATerm w_15 (ATerm t)
    {
      ATerm r_15 = NULL,s_15 = NULL;
      t = not_null(q_15);
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      t = not_null(q_15);
      {
        ATerm t_15 = NULL;
        ATerm x_15 (ATerm t)
        {
          t = not_null(t_15);
          if(((s_15 != NULL) && (s_15 != t)))
            _fail(t);
          else
            s_15 = t;
          t = not_null(t_15);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(r_15)), not_null(o_15));
        if(((t_15 != NULL) && (t_15 != t)))
          _fail(t);
        else
          t_15 = t;
        t = x_15(t);
        t = not_null(s_15);
      }
      return(t);
    }
    t = not_null(k_15);
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = not_null(l_15);
    if(((n_15 != NULL) && (n_15 != t)))
      _fail(t);
    else
      n_15 = t;
    t = not_null(k_15);
    {
      ATerm p_15 = NULL;
      ATerm v_15 (ATerm t)
      {
        t = not_null(p_15);
        if(((o_15 != NULL) && (o_15 != t)))
          _fail(t);
        else
          o_15 = t;
        t = not_null(p_15);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_15));
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = v_15(t);
      t = not_null(n_15);
      t = c_64(t);
      if(((q_15 != NULL) && (q_15 != t)))
        _fail(t);
      else
        q_15 = t;
      t = w_15(t);
    }
    return(t);
  }
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  t = not_null(k_15);
  if(match_cons(t, sym_BuildDefault_1))
    {
      l_15 = ATgetArgument(t, 0);
      t = u_15(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm i_16 (ATerm t)
  {
    ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL;
    t = not_null(c_16);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    t = not_null(c_16);
    {
      ATerm s_4;
      s_4 = t;
      {
        ATerm f_16 = NULL;
        ATerm j_16 (ATerm t)
        {
          t = not_null(f_16);
          if(((e_16 != NULL) && (e_16 != t)))
            _fail(t);
          else
            e_16 = t;
          t = not_null(f_16);
          return(t);
        }
        t = SSLgetAnnotations(not_null(d_16));
        if(((f_16 != NULL) && (f_16 != t)))
          _fail(t);
        else
          f_16 = t;
        t = j_16(t);
      }
      t = s_4;
      {
        ATerm h_16 = NULL;
        ATerm k_16 (ATerm t)
        {
          t = not_null(h_16);
          if(((g_16 != NULL) && (g_16 != t)))
            _fail(t);
          else
            g_16 = t;
          t = not_null(h_16);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(e_16));
        if(((h_16 != NULL) && (h_16 != t)))
          _fail(t);
        else
          h_16 = t;
        t = k_16(t);
        t = not_null(g_16);
      }
    }
    return(t);
  }
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = not_null(c_16);
  if(match_cons(t, sym_Wld_0))
    {
      t = i_16(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
      ;
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      {
        ATerm v_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(is_string_0_0, t);
            ;
            LocalPopChoice(w_4);
          }
        else
          {
            t = v_4;
            {
              ATerm x_4 = t;
              int y_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(is_int_0_0, t);
                  ;
                  LocalPopChoice(y_4);
                }
              else
                {
                  t = x_4;
                  {
                    ATerm z_4 = t;
                    int a_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(is_real_0_0, t);
                        ;
                        LocalPopChoice(a_5);
                      }
                    else
                      {
                        t = z_4;
                        {
                          ATerm b_5 = t;
                          int c_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(is_string_0_0, t);
                              ;
                              LocalPopChoice(c_5);
                            }
                          else
                            {
                              t = b_5;
                              {
                                ATerm d_5 = t;
                                int e_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_0 (ATerm t)
                                    {
                                      t = list_1_0(term_expression_0_0, t);
                                      return(t);
                                    }
                                    t = Op_2_0(is_string_0_0, c_0, t);
                                    ;
                                    LocalPopChoice(e_5);
                                  }
                                else
                                  {
                                    t = d_5;
                                    {
                                      ATerm f_5 = t;
                                      int g_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = BuildDefault_1_0(term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(g_5);
                                        }
                                      else
                                        {
                                          t = f_5;
                                          {
                                            ATerm e_0 (ATerm t)
                                            {
                                              t = term_h_5;
                                              return(t);
                                            }
                                            t = debug_1_0(e_0, t);
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
ATerm Assign_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  ATerm g_17 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL;
    ATerm i_17 (ATerm t)
    {
      ATerm b_17 = NULL,c_17 = NULL;
      ATerm j_17 (ATerm t)
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = not_null(c_17);
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        t = not_null(c_17);
        {
          ATerm f_17 = NULL;
          ATerm k_17 (ATerm t)
          {
            t = not_null(f_17);
            if(((e_17 != NULL) && (e_17 != t)))
              _fail(t);
            else
              e_17 = t;
            t = not_null(f_17);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, not_null(b_17), not_null(d_17)), not_null(y_16));
          if(((f_17 != NULL) && (f_17 != t)))
            _fail(t);
          else
            f_17 = t;
          t = k_17(t);
          t = not_null(e_17);
        }
        return(t);
      }
      t = not_null(a_17);
      if(((b_17 != NULL) && (b_17 != t)))
        _fail(t);
      else
        b_17 = t;
      t = not_null(x_16);
      t = z_69(t);
      if(((c_17 != NULL) && (c_17 != t)))
        _fail(t);
      else
        c_17 = t;
      t = j_17(t);
      return(t);
    }
    t = not_null(s_16);
    if(((v_16 != NULL) && (v_16 != t)))
      _fail(t);
    else
      v_16 = t;
    t = not_null(t_16);
    if(((w_16 != NULL) && (w_16 != t)))
      _fail(t);
    else
      w_16 = t;
    t = not_null(u_16);
    if(((x_16 != NULL) && (x_16 != t)))
      _fail(t);
    else
      x_16 = t;
    t = not_null(s_16);
    {
      ATerm z_16 = NULL;
      ATerm h_17 (ATerm t)
      {
        t = not_null(z_16);
        if(((y_16 != NULL) && (y_16 != t)))
          _fail(t);
        else
          y_16 = t;
        t = not_null(z_16);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_16));
      if(((z_16 != NULL) && (z_16 != t)))
        _fail(t);
      else
        z_16 = t;
      t = h_17(t);
      t = not_null(w_16);
      t = y_69(t);
      if(((a_17 != NULL) && (a_17 != t)))
        _fail(t);
      else
        a_17 = t;
      t = i_17(t);
    }
    return(t);
  }
  if(((s_16 != NULL) && (s_16 != t)))
    _fail(t);
  else
    s_16 = t;
  t = not_null(s_16);
  if(match_cons(t, sym_Assign_2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
      t = g_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2_0 (ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  ATerm f_18 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,z_17 = NULL;
    ATerm h_18 (ATerm t)
    {
      ATerm a_18 = NULL,b_18 = NULL;
      ATerm i_18 (ATerm t)
      {
        ATerm c_18 = NULL,d_18 = NULL;
        t = not_null(b_18);
        if(((c_18 != NULL) && (c_18 != t)))
          _fail(t);
        else
          c_18 = t;
        t = not_null(b_18);
        {
          ATerm e_18 = NULL;
          ATerm j_18 (ATerm t)
          {
            t = not_null(e_18);
            if(((d_18 != NULL) && (d_18 != t)))
              _fail(t);
            else
              d_18 = t;
            t = not_null(e_18);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_18), not_null(c_18)), not_null(x_17));
          if(((e_18 != NULL) && (e_18 != t)))
            _fail(t);
          else
            e_18 = t;
          t = j_18(t);
          t = not_null(d_18);
        }
        return(t);
      }
      t = not_null(z_17);
      if(((a_18 != NULL) && (a_18 != t)))
        _fail(t);
      else
        a_18 = t;
      t = not_null(w_17);
      t = q_66(t);
      if(((b_18 != NULL) && (b_18 != t)))
        _fail(t);
      else
        b_18 = t;
      t = i_18(t);
      return(t);
    }
    t = not_null(r_17);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = not_null(s_17);
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = not_null(t_17);
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = not_null(r_17);
    {
      ATerm y_17 = NULL;
      ATerm g_18 (ATerm t)
      {
        t = not_null(y_17);
        if(((x_17 != NULL) && (x_17 != t)))
          _fail(t);
        else
          x_17 = t;
        t = not_null(y_17);
        return(t);
      }
      t = SSLgetAnnotations(not_null(u_17));
      if(((y_17 != NULL) && (y_17 != t)))
        _fail(t);
      else
        y_17 = t;
      t = g_18(t);
      t = not_null(v_17);
      t = p_66(t);
      if(((z_17 != NULL) && (z_17 != t)))
        _fail(t);
      else
        z_17 = t;
      t = h_18(t);
    }
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(r_17);
  if(match_cons(t, sym_Let_2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
      t = f_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm PrimT_3_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  ATerm j_19 (ATerm t)
  {
    ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,b_19 = NULL;
    ATerm l_19 (ATerm t)
    {
      ATerm c_19 = NULL,d_19 = NULL;
      ATerm m_19 (ATerm t)
      {
        ATerm e_19 = NULL,f_19 = NULL;
        ATerm n_19 (ATerm t)
        {
          ATerm g_19 = NULL,h_19 = NULL;
          t = not_null(f_19);
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = not_null(f_19);
          {
            ATerm i_19 = NULL;
            ATerm o_19 (ATerm t)
            {
              t = not_null(i_19);
              if(((h_19 != NULL) && (h_19 != t)))
                _fail(t);
              else
                h_19 = t;
              t = not_null(i_19);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(c_19), not_null(e_19), not_null(g_19)), not_null(z_18));
            if(((i_19 != NULL) && (i_19 != t)))
              _fail(t);
            else
              i_19 = t;
            t = o_19(t);
            t = not_null(h_19);
          }
          return(t);
        }
        t = not_null(d_19);
        if(((e_19 != NULL) && (e_19 != t)))
          _fail(t);
        else
          e_19 = t;
        t = not_null(y_18);
        t = x_67(t);
        if(((f_19 != NULL) && (f_19 != t)))
          _fail(t);
        else
          f_19 = t;
        t = n_19(t);
        return(t);
      }
      t = not_null(b_19);
      if(((c_19 != NULL) && (c_19 != t)))
        _fail(t);
      else
        c_19 = t;
      t = not_null(x_18);
      t = w_67(t);
      if(((d_19 != NULL) && (d_19 != t)))
        _fail(t);
      else
        d_19 = t;
      t = m_19(t);
      return(t);
    }
    t = not_null(r_18);
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(s_18);
    if(((w_18 != NULL) && (w_18 != t)))
      _fail(t);
    else
      w_18 = t;
    t = not_null(t_18);
    if(((x_18 != NULL) && (x_18 != t)))
      _fail(t);
    else
      x_18 = t;
    t = not_null(u_18);
    if(((y_18 != NULL) && (y_18 != t)))
      _fail(t);
    else
      y_18 = t;
    t = not_null(r_18);
    {
      ATerm a_19 = NULL;
      ATerm k_19 (ATerm t)
      {
        t = not_null(a_19);
        if(((z_18 != NULL) && (z_18 != t)))
          _fail(t);
        else
          z_18 = t;
        t = not_null(a_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_18));
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      t = k_19(t);
      t = not_null(w_18);
      t = v_67(t);
      if(((b_19 != NULL) && (b_19 != t)))
        _fail(t);
      else
        b_19 = t;
      t = l_19(t);
    }
    return(t);
  }
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = not_null(r_18);
  if(match_cons(t, sym_PrimT_3))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      u_18 = ATgetArgument(t, 2);
      t = j_19(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Where_1_0 (ATerm p_67 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  ATerm e_20 (ATerm t)
  {
    ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL;
    ATerm g_20 (ATerm t)
    {
      ATerm b_20 = NULL,c_20 = NULL;
      t = not_null(a_20);
      if(((b_20 != NULL) && (b_20 != t)))
        _fail(t);
      else
        b_20 = t;
      t = not_null(a_20);
      {
        ATerm d_20 = NULL;
        ATerm h_20 (ATerm t)
        {
          t = not_null(d_20);
          if(((c_20 != NULL) && (c_20 != t)))
            _fail(t);
          else
            c_20 = t;
          t = not_null(d_20);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(b_20)), not_null(y_19));
        if(((d_20 != NULL) && (d_20 != t)))
          _fail(t);
        else
          d_20 = t;
        t = h_20(t);
        t = not_null(c_20);
      }
      return(t);
    }
    t = not_null(u_19);
    if(((w_19 != NULL) && (w_19 != t)))
      _fail(t);
    else
      w_19 = t;
    t = not_null(v_19);
    if(((x_19 != NULL) && (x_19 != t)))
      _fail(t);
    else
      x_19 = t;
    t = not_null(u_19);
    {
      ATerm z_19 = NULL;
      ATerm f_20 (ATerm t)
      {
        t = not_null(z_19);
        if(((y_19 != NULL) && (y_19 != t)))
          _fail(t);
        else
          y_19 = t;
        t = not_null(z_19);
        return(t);
      }
      t = SSLgetAnnotations(not_null(w_19));
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      t = f_20(t);
      t = not_null(x_19);
      t = p_67(t);
      if(((a_20 != NULL) && (a_20 != t)))
        _fail(t);
      else
        a_20 = t;
      t = g_20(t);
    }
    return(t);
  }
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  t = not_null(u_19);
  if(match_cons(t, sym_Where_1))
    {
      v_19 = ATgetArgument(t, 0);
      t = e_20(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm j_20 = NULL;
  ATerm l_20 (ATerm t)
  {
    ATerm k_20 = NULL;
    t = not_null(j_20);
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    t = not_null(j_20);
    t = SSL_is_int(not_null(k_20));
    return(t);
  }
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  t = l_20(t);
  return(t);
}
ATerm Scope_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  ATerm g_21 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL;
    ATerm i_21 (ATerm t)
    {
      ATerm b_21 = NULL,c_21 = NULL;
      ATerm j_21 (ATerm t)
      {
        ATerm d_21 = NULL,e_21 = NULL;
        t = not_null(c_21);
        if(((d_21 != NULL) && (d_21 != t)))
          _fail(t);
        else
          d_21 = t;
        t = not_null(c_21);
        {
          ATerm f_21 = NULL;
          ATerm k_21 (ATerm t)
          {
            t = not_null(f_21);
            if(((e_21 != NULL) && (e_21 != t)))
              _fail(t);
            else
              e_21 = t;
            t = not_null(f_21);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(b_21), not_null(d_21)), not_null(y_20));
          if(((f_21 != NULL) && (f_21 != t)))
            _fail(t);
          else
            f_21 = t;
          t = k_21(t);
          t = not_null(e_21);
        }
        return(t);
      }
      t = not_null(a_21);
      if(((b_21 != NULL) && (b_21 != t)))
        _fail(t);
      else
        b_21 = t;
      t = not_null(x_20);
      t = a_67(t);
      if(((c_21 != NULL) && (c_21 != t)))
        _fail(t);
      else
        c_21 = t;
      t = j_21(t);
      return(t);
    }
    t = not_null(s_20);
    if(((v_20 != NULL) && (v_20 != t)))
      _fail(t);
    else
      v_20 = t;
    t = not_null(t_20);
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    t = not_null(u_20);
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    t = not_null(s_20);
    {
      ATerm z_20 = NULL;
      ATerm h_21 (ATerm t)
      {
        t = not_null(z_20);
        if(((y_20 != NULL) && (y_20 != t)))
          _fail(t);
        else
          y_20 = t;
        t = not_null(z_20);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_20));
      if(((z_20 != NULL) && (z_20 != t)))
        _fail(t);
      else
        z_20 = t;
      t = h_21(t);
      t = not_null(w_20);
      t = z_66(t);
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = i_21(t);
    }
    return(t);
  }
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = not_null(s_20);
  if(match_cons(t, sym_Scope_2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
      t = g_21(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1_0 (ATerm x_66 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  ATerm a_22 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,w_21 = NULL;
    ATerm c_22 (ATerm t)
    {
      ATerm x_21 = NULL,y_21 = NULL;
      t = not_null(w_21);
      if(((x_21 != NULL) && (x_21 != t)))
        _fail(t);
      else
        x_21 = t;
      t = not_null(w_21);
      {
        ATerm z_21 = NULL;
        ATerm d_22 (ATerm t)
        {
          t = not_null(z_21);
          if(((y_21 != NULL) && (y_21 != t)))
            _fail(t);
          else
            y_21 = t;
          t = not_null(z_21);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_21)), not_null(u_21));
        if(((z_21 != NULL) && (z_21 != t)))
          _fail(t);
        else
          z_21 = t;
        t = d_22(t);
        t = not_null(y_21);
      }
      return(t);
    }
    t = not_null(q_21);
    if(((s_21 != NULL) && (s_21 != t)))
      _fail(t);
    else
      s_21 = t;
    t = not_null(r_21);
    if(((t_21 != NULL) && (t_21 != t)))
      _fail(t);
    else
      t_21 = t;
    t = not_null(q_21);
    {
      ATerm v_21 = NULL;
      ATerm b_22 (ATerm t)
      {
        t = not_null(v_21);
        if(((u_21 != NULL) && (u_21 != t)))
          _fail(t);
        else
          u_21 = t;
        t = not_null(v_21);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_21));
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = b_22(t);
      t = not_null(t_21);
      t = x_66(t);
      if(((w_21 != NULL) && (w_21 != t)))
        _fail(t);
      else
        w_21 = t;
      t = c_22(t);
    }
    return(t);
  }
  if(((q_21 != NULL) && (q_21 != t)))
    _fail(t);
  else
    q_21 = t;
  t = not_null(q_21);
  if(match_cons(t, sym_Build_1))
    {
      r_21 = ATgetArgument(t, 0);
      t = a_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Str_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  ATerm f_23 (ATerm t)
  {
    ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL;
    ATerm i_23 (ATerm t)
    {
      ATerm u_22 = NULL,v_22 = NULL;
      t = not_null(t_22);
      if(((u_22 != NULL) && (u_22 != t)))
        _fail(t);
      else
        u_22 = t;
      t = not_null(t_22);
      {
        ATerm w_22 = NULL;
        ATerm j_23 (ATerm t)
        {
          t = not_null(w_22);
          if(((v_22 != NULL) && (v_22 != t)))
            _fail(t);
          else
            v_22 = t;
          t = not_null(w_22);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(u_22)), not_null(r_22));
        if(((w_22 != NULL) && (w_22 != t)))
          _fail(t);
        else
          w_22 = t;
        t = j_23(t);
        t = not_null(v_22);
      }
      return(t);
    }
    t = not_null(n_22);
    if(((p_22 != NULL) && (p_22 != t)))
      _fail(t);
    else
      p_22 = t;
    t = not_null(o_22);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = not_null(n_22);
    {
      ATerm s_22 = NULL;
      ATerm h_23 (ATerm t)
      {
        t = not_null(s_22);
        if(((r_22 != NULL) && (r_22 != t)))
          _fail(t);
        else
          r_22 = t;
        t = not_null(s_22);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_22));
      if(((s_22 != NULL) && (s_22 != t)))
        _fail(t);
      else
        s_22 = t;
      t = h_23(t);
      t = not_null(q_22);
      t = p_0(t);
      if(((t_22 != NULL) && (t_22 != t)))
        _fail(t);
      else
        t_22 = t;
      t = i_23(t);
    }
    return(t);
  }
  ATerm g_23 (ATerm t)
  {
    ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,b_23 = NULL;
    ATerm l_23 (ATerm t)
    {
      ATerm c_23 = NULL,d_23 = NULL;
      t = not_null(b_23);
      if(((c_23 != NULL) && (c_23 != t)))
        _fail(t);
      else
        c_23 = t;
      t = not_null(b_23);
      {
        ATerm e_23 = NULL;
        ATerm m_23 (ATerm t)
        {
          t = not_null(e_23);
          if(((d_23 != NULL) && (d_23 != t)))
            _fail(t);
          else
            d_23 = t;
          t = not_null(e_23);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(c_23)), not_null(z_22));
        if(((e_23 != NULL) && (e_23 != t)))
          _fail(t);
        else
          e_23 = t;
        t = m_23(t);
        t = not_null(d_23);
      }
      return(t);
    }
    t = not_null(n_22);
    if(((x_22 != NULL) && (x_22 != t)))
      _fail(t);
    else
      x_22 = t;
    t = not_null(o_22);
    if(((y_22 != NULL) && (y_22 != t)))
      _fail(t);
    else
      y_22 = t;
    t = not_null(n_22);
    {
      ATerm a_23 = NULL;
      ATerm k_23 (ATerm t)
      {
        t = not_null(a_23);
        if(((z_22 != NULL) && (z_22 != t)))
          _fail(t);
        else
          z_22 = t;
        t = not_null(a_23);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_22));
      if(((a_23 != NULL) && (a_23 != t)))
        _fail(t);
      else
        a_23 = t;
      t = k_23(t);
      t = not_null(y_22);
      t = p_0(t);
      if(((b_23 != NULL) && (b_23 != t)))
        _fail(t);
      else
        b_23 = t;
      t = l_23(t);
    }
    return(t);
  }
  if(((n_22 != NULL) && (n_22 != t)))
    _fail(t);
  else
    n_22 = t;
  t = not_null(n_22);
  if(match_cons(t, sym_Str_1))
    {
      o_22 = ATgetArgument(t, 0);
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_23(t);
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            t = g_23(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  ATerm q_23 (ATerm t)
  {
    ATerm p_23 = NULL;
    t = not_null(o_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = not_null(o_23);
    t = SSL_is_real(not_null(p_23));
    return(t);
  }
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = q_23(t);
  return(t);
}
ATerm Real_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  ATerm s_24 (ATerm t)
  {
    ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL;
    ATerm v_24 (ATerm t)
    {
      ATerm h_24 = NULL,i_24 = NULL;
      t = not_null(g_24);
      if(((h_24 != NULL) && (h_24 != t)))
        _fail(t);
      else
        h_24 = t;
      t = not_null(g_24);
      {
        ATerm j_24 = NULL;
        ATerm w_24 (ATerm t)
        {
          t = not_null(j_24);
          if(((i_24 != NULL) && (i_24 != t)))
            _fail(t);
          else
            i_24 = t;
          t = not_null(j_24);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(h_24)), not_null(e_24));
        if(((j_24 != NULL) && (j_24 != t)))
          _fail(t);
        else
          j_24 = t;
        t = w_24(t);
        t = not_null(i_24);
      }
      return(t);
    }
    t = not_null(a_24);
    if(((c_24 != NULL) && (c_24 != t)))
      _fail(t);
    else
      c_24 = t;
    t = not_null(b_24);
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = not_null(a_24);
    {
      ATerm f_24 = NULL;
      ATerm u_24 (ATerm t)
      {
        t = not_null(f_24);
        if(((e_24 != NULL) && (e_24 != t)))
          _fail(t);
        else
          e_24 = t;
        t = not_null(f_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_24));
      if(((f_24 != NULL) && (f_24 != t)))
        _fail(t);
      else
        f_24 = t;
      t = u_24(t);
      t = not_null(d_24);
      t = o_0(t);
      if(((g_24 != NULL) && (g_24 != t)))
        _fail(t);
      else
        g_24 = t;
      t = v_24(t);
    }
    return(t);
  }
  ATerm t_24 (ATerm t)
  {
    ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,o_24 = NULL;
    ATerm y_24 (ATerm t)
    {
      ATerm p_24 = NULL,q_24 = NULL;
      t = not_null(o_24);
      if(((p_24 != NULL) && (p_24 != t)))
        _fail(t);
      else
        p_24 = t;
      t = not_null(o_24);
      {
        ATerm r_24 = NULL;
        ATerm z_24 (ATerm t)
        {
          t = not_null(r_24);
          if(((q_24 != NULL) && (q_24 != t)))
            _fail(t);
          else
            q_24 = t;
          t = not_null(r_24);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(p_24)), not_null(m_24));
        if(((r_24 != NULL) && (r_24 != t)))
          _fail(t);
        else
          r_24 = t;
        t = z_24(t);
        t = not_null(q_24);
      }
      return(t);
    }
    t = not_null(a_24);
    if(((k_24 != NULL) && (k_24 != t)))
      _fail(t);
    else
      k_24 = t;
    t = not_null(b_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(a_24);
    {
      ATerm n_24 = NULL;
      ATerm x_24 (ATerm t)
      {
        t = not_null(n_24);
        if(((m_24 != NULL) && (m_24 != t)))
          _fail(t);
        else
          m_24 = t;
        t = not_null(n_24);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_24));
      if(((n_24 != NULL) && (n_24 != t)))
        _fail(t);
      else
        n_24 = t;
      t = x_24(t);
      t = not_null(l_24);
      t = o_0(t);
      if(((o_24 != NULL) && (o_24 != t)))
        _fail(t);
      else
        o_24 = t;
      t = y_24(t);
    }
    return(t);
  }
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = not_null(a_24);
  if(match_cons(t, sym_Real_1))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_24(t);
            ;
            LocalPopChoice(l_5);
          }
        else
          {
            t = k_5;
            t = t_24(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Int_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm b_26 (ATerm t)
  {
    ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,p_25 = NULL;
    ATerm e_26 (ATerm t)
    {
      ATerm q_25 = NULL,r_25 = NULL;
      t = not_null(p_25);
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
      t = not_null(p_25);
      {
        ATerm s_25 = NULL;
        ATerm f_26 (ATerm t)
        {
          t = not_null(s_25);
          if(((r_25 != NULL) && (r_25 != t)))
            _fail(t);
          else
            r_25 = t;
          t = not_null(s_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(q_25)), not_null(n_25));
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = f_26(t);
        t = not_null(r_25);
      }
      return(t);
    }
    t = not_null(j_25);
    if(((l_25 != NULL) && (l_25 != t)))
      _fail(t);
    else
      l_25 = t;
    t = not_null(k_25);
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = not_null(j_25);
    {
      ATerm o_25 = NULL;
      ATerm d_26 (ATerm t)
      {
        t = not_null(o_25);
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        t = not_null(o_25);
        return(t);
      }
      t = SSLgetAnnotations(not_null(l_25));
      if(((o_25 != NULL) && (o_25 != t)))
        _fail(t);
      else
        o_25 = t;
      t = d_26(t);
      t = not_null(m_25);
      t = n_0(t);
      if(((p_25 != NULL) && (p_25 != t)))
        _fail(t);
      else
        p_25 = t;
      t = e_26(t);
    }
    return(t);
  }
  ATerm c_26 (ATerm t)
  {
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,x_25 = NULL;
    ATerm h_26 (ATerm t)
    {
      ATerm y_25 = NULL,z_25 = NULL;
      t = not_null(x_25);
      if(((y_25 != NULL) && (y_25 != t)))
        _fail(t);
      else
        y_25 = t;
      t = not_null(x_25);
      {
        ATerm a_26 = NULL;
        ATerm i_26 (ATerm t)
        {
          t = not_null(a_26);
          if(((z_25 != NULL) && (z_25 != t)))
            _fail(t);
          else
            z_25 = t;
          t = not_null(a_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(y_25)), not_null(v_25));
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        t = i_26(t);
        t = not_null(z_25);
      }
      return(t);
    }
    t = not_null(j_25);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = not_null(k_25);
    if(((u_25 != NULL) && (u_25 != t)))
      _fail(t);
    else
      u_25 = t;
    t = not_null(j_25);
    {
      ATerm w_25 = NULL;
      ATerm g_26 (ATerm t)
      {
        t = not_null(w_25);
        if(((v_25 != NULL) && (v_25 != t)))
          _fail(t);
        else
          v_25 = t;
        t = not_null(w_25);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_25));
      if(((w_25 != NULL) && (w_25 != t)))
        _fail(t);
      else
        w_25 = t;
      t = g_26(t);
      t = not_null(u_25);
      t = n_0(t);
      if(((x_25 != NULL) && (x_25 != t)))
        _fail(t);
      else
        x_25 = t;
      t = h_26(t);
    }
    return(t);
  }
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = not_null(j_25);
  if(match_cons(t, sym_Int_1))
    {
      k_25 = ATgetArgument(t, 0);
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_26(t);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            t = c_26(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm shallow_term_expression_0_0 (ATerm t)
{
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(is_string_0_0, t);
      ;
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      {
        ATerm q_5 = t;
        int r_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(is_int_0_0, t);
            ;
            LocalPopChoice(r_5);
          }
        else
          {
            t = q_5;
            {
              ATerm s_5 = t;
              int t_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(is_real_0_0, t);
                  ;
                  LocalPopChoice(t_5);
                }
              else
                {
                  t = s_5;
                  {
                    ATerm u_5 = t;
                    int v_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(is_string_0_0, t);
                        ;
                        LocalPopChoice(v_5);
                      }
                    else
                      {
                        t = u_5;
                        {
                          ATerm w_5 = t;
                          int x_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_0 (ATerm t)
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = Var_1_0(is_string_0_0, t);
                                  return(t);
                                }
                                t = list_1_0(r_0, t);
                                return(t);
                              }
                              t = Op_2_0(is_string_0_0, m_0, t);
                              ;
                              LocalPopChoice(x_5);
                            }
                          else
                            {
                              t = w_5;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_y_5;
                                  return(t);
                                }
                                t = debug_1_0(s_0, t);
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
ATerm Match_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  ATerm z_26 (ATerm t)
  {
    ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,v_26 = NULL;
    ATerm b_27 (ATerm t)
    {
      ATerm w_26 = NULL,x_26 = NULL;
      t = not_null(v_26);
      if(((w_26 != NULL) && (w_26 != t)))
        _fail(t);
      else
        w_26 = t;
      t = not_null(v_26);
      {
        ATerm y_26 = NULL;
        ATerm c_27 (ATerm t)
        {
          t = not_null(y_26);
          if(((x_26 != NULL) && (x_26 != t)))
            _fail(t);
          else
            x_26 = t;
          t = not_null(y_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_26)), not_null(t_26));
        if(((y_26 != NULL) && (y_26 != t)))
          _fail(t);
        else
          y_26 = t;
        t = c_27(t);
        t = not_null(x_26);
      }
      return(t);
    }
    t = not_null(p_26);
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
    t = not_null(q_26);
    if(((s_26 != NULL) && (s_26 != t)))
      _fail(t);
    else
      s_26 = t;
    t = not_null(p_26);
    {
      ATerm u_26 = NULL;
      ATerm a_27 (ATerm t)
      {
        t = not_null(u_26);
        if(((t_26 != NULL) && (t_26 != t)))
          _fail(t);
        else
          t_26 = t;
        t = not_null(u_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_26));
      if(((u_26 != NULL) && (u_26 != t)))
        _fail(t);
      else
        u_26 = t;
      t = a_27(t);
      t = not_null(s_26);
      t = w_66(t);
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      t = b_27(t);
    }
    return(t);
  }
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = not_null(p_26);
  if(match_cons(t, sym_Match_1))
    {
      q_26 = ATgetArgument(t, 0);
      t = z_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1_0 (ATerm d_68 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  ATerm s_27 (ATerm t)
  {
    ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL;
    ATerm u_27 (ATerm t)
    {
      ATerm p_27 = NULL,q_27 = NULL;
      t = not_null(o_27);
      if(((p_27 != NULL) && (p_27 != t)))
        _fail(t);
      else
        p_27 = t;
      t = not_null(o_27);
      {
        ATerm r_27 = NULL;
        ATerm v_27 (ATerm t)
        {
          t = not_null(r_27);
          if(((q_27 != NULL) && (q_27 != t)))
            _fail(t);
          else
            q_27 = t;
          t = not_null(r_27);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(p_27)), not_null(m_27));
        if(((r_27 != NULL) && (r_27 != t)))
          _fail(t);
        else
          r_27 = t;
        t = v_27(t);
        t = not_null(q_27);
      }
      return(t);
    }
    t = not_null(i_27);
    if(((k_27 != NULL) && (k_27 != t)))
      _fail(t);
    else
      k_27 = t;
    t = not_null(j_27);
    if(((l_27 != NULL) && (l_27 != t)))
      _fail(t);
    else
      l_27 = t;
    t = not_null(i_27);
    {
      ATerm n_27 = NULL;
      ATerm t_27 (ATerm t)
      {
        t = not_null(n_27);
        if(((m_27 != NULL) && (m_27 != t)))
          _fail(t);
        else
          m_27 = t;
        t = not_null(n_27);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_27));
      if(((n_27 != NULL) && (n_27 != t)))
        _fail(t);
      else
        n_27 = t;
      t = t_27(t);
      t = not_null(l_27);
      t = d_68(t);
      if(((o_27 != NULL) && (o_27 != t)))
        _fail(t);
      else
        o_27 = t;
      t = u_27(t);
    }
    return(t);
  }
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = not_null(i_27);
  if(match_cons(t, sym_Thread_1))
    {
      j_27 = ATgetArgument(t, 0);
      t = s_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1_0 (ATerm c_68 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  ATerm q_28 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL;
    ATerm s_28 (ATerm t)
    {
      ATerm i_28 = NULL,j_28 = NULL;
      t = not_null(h_28);
      if(((i_28 != NULL) && (i_28 != t)))
        _fail(t);
      else
        i_28 = t;
      t = not_null(h_28);
      {
        ATerm p_28 = NULL;
        ATerm t_28 (ATerm t)
        {
          t = not_null(p_28);
          if(((j_28 != NULL) && (j_28 != t)))
            _fail(t);
          else
            j_28 = t;
          t = not_null(p_28);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(i_28)), not_null(f_28));
        if(((p_28 != NULL) && (p_28 != t)))
          _fail(t);
        else
          p_28 = t;
        t = t_28(t);
        t = not_null(j_28);
      }
      return(t);
    }
    t = not_null(b_28);
    if(((d_28 != NULL) && (d_28 != t)))
      _fail(t);
    else
      d_28 = t;
    t = not_null(c_28);
    if(((e_28 != NULL) && (e_28 != t)))
      _fail(t);
    else
      e_28 = t;
    t = not_null(b_28);
    {
      ATerm g_28 = NULL;
      ATerm r_28 (ATerm t)
      {
        t = not_null(g_28);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = not_null(g_28);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_28));
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = r_28(t);
      t = not_null(e_28);
      t = c_68(t);
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = s_28(t);
    }
    return(t);
  }
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = not_null(b_28);
  if(match_cons(t, sym_All_1))
    {
      c_28 = ATgetArgument(t, 0);
      t = q_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Some_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  ATerm y_29 (ATerm t)
  {
    ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,m_29 = NULL;
    ATerm b_30 (ATerm t)
    {
      ATerm n_29 = NULL,o_29 = NULL;
      t = not_null(m_29);
      if(((n_29 != NULL) && (n_29 != t)))
        _fail(t);
      else
        n_29 = t;
      t = not_null(m_29);
      {
        ATerm p_29 = NULL;
        ATerm c_30 (ATerm t)
        {
          t = not_null(p_29);
          if(((o_29 != NULL) && (o_29 != t)))
            _fail(t);
          else
            o_29 = t;
          t = not_null(p_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(n_29)), not_null(k_29));
        if(((p_29 != NULL) && (p_29 != t)))
          _fail(t);
        else
          p_29 = t;
        t = c_30(t);
        t = not_null(o_29);
      }
      return(t);
    }
    t = not_null(g_29);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = not_null(h_29);
    if(((j_29 != NULL) && (j_29 != t)))
      _fail(t);
    else
      j_29 = t;
    t = not_null(g_29);
    {
      ATerm l_29 = NULL;
      ATerm a_30 (ATerm t)
      {
        t = not_null(l_29);
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = not_null(l_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_29));
      if(((l_29 != NULL) && (l_29 != t)))
        _fail(t);
      else
        l_29 = t;
      t = a_30(t);
      t = not_null(j_29);
      t = l_0(t);
      if(((m_29 != NULL) && (m_29 != t)))
        _fail(t);
      else
        m_29 = t;
      t = b_30(t);
    }
    return(t);
  }
  ATerm z_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,u_29 = NULL;
    ATerm e_30 (ATerm t)
    {
      ATerm v_29 = NULL,w_29 = NULL;
      t = not_null(u_29);
      if(((v_29 != NULL) && (v_29 != t)))
        _fail(t);
      else
        v_29 = t;
      t = not_null(u_29);
      {
        ATerm x_29 = NULL;
        ATerm f_30 (ATerm t)
        {
          t = not_null(x_29);
          if(((w_29 != NULL) && (w_29 != t)))
            _fail(t);
          else
            w_29 = t;
          t = not_null(x_29);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(v_29)), not_null(s_29));
        if(((x_29 != NULL) && (x_29 != t)))
          _fail(t);
        else
          x_29 = t;
        t = f_30(t);
        t = not_null(w_29);
      }
      return(t);
    }
    t = not_null(g_29);
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = not_null(h_29);
    if(((r_29 != NULL) && (r_29 != t)))
      _fail(t);
    else
      r_29 = t;
    t = not_null(g_29);
    {
      ATerm t_29 = NULL;
      ATerm d_30 (ATerm t)
      {
        t = not_null(t_29);
        if(((s_29 != NULL) && (s_29 != t)))
          _fail(t);
        else
          s_29 = t;
        t = not_null(t_29);
        return(t);
      }
      t = SSLgetAnnotations(not_null(q_29));
      if(((t_29 != NULL) && (t_29 != t)))
        _fail(t);
      else
        t_29 = t;
      t = d_30(t);
      t = not_null(r_29);
      t = l_0(t);
      if(((u_29 != NULL) && (u_29 != t)))
        _fail(t);
      else
        u_29 = t;
      t = e_30(t);
    }
    return(t);
  }
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = not_null(g_29);
  if(match_cons(t, sym_Some_1))
    {
      h_29 = ATgetArgument(t, 0);
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_29(t);
            ;
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            t = z_29(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1_0 (ATerm b_68 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  ATerm v_30 (ATerm t)
  {
    ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,r_30 = NULL;
    ATerm x_30 (ATerm t)
    {
      ATerm s_30 = NULL,t_30 = NULL;
      t = not_null(r_30);
      if(((s_30 != NULL) && (s_30 != t)))
        _fail(t);
      else
        s_30 = t;
      t = not_null(r_30);
      {
        ATerm u_30 = NULL;
        ATerm y_30 (ATerm t)
        {
          t = not_null(u_30);
          if(((t_30 != NULL) && (t_30 != t)))
            _fail(t);
          else
            t_30 = t;
          t = not_null(u_30);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(s_30)), not_null(p_30));
        if(((u_30 != NULL) && (u_30 != t)))
          _fail(t);
        else
          u_30 = t;
        t = y_30(t);
        t = not_null(t_30);
      }
      return(t);
    }
    t = not_null(l_30);
    if(((n_30 != NULL) && (n_30 != t)))
      _fail(t);
    else
      n_30 = t;
    t = not_null(m_30);
    if(((o_30 != NULL) && (o_30 != t)))
      _fail(t);
    else
      o_30 = t;
    t = not_null(l_30);
    {
      ATerm q_30 = NULL;
      ATerm w_30 (ATerm t)
      {
        t = not_null(q_30);
        if(((p_30 != NULL) && (p_30 != t)))
          _fail(t);
        else
          p_30 = t;
        t = not_null(q_30);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_30));
      if(((q_30 != NULL) && (q_30 != t)))
        _fail(t);
      else
        q_30 = t;
      t = w_30(t);
      t = not_null(o_30);
      t = b_68(t);
      if(((r_30 != NULL) && (r_30 != t)))
        _fail(t);
      else
        r_30 = t;
      t = x_30(t);
    }
    return(t);
  }
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  t = not_null(l_30);
  if(match_cons(t, sym_One_1))
    {
      m_30 = ATgetArgument(t, 0);
      t = v_30(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cong_2_0 (ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  ATerm t_31 (ATerm t)
  {
    ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,n_31 = NULL;
    ATerm v_31 (ATerm t)
    {
      ATerm o_31 = NULL,p_31 = NULL;
      ATerm w_31 (ATerm t)
      {
        ATerm q_31 = NULL,r_31 = NULL;
        t = not_null(p_31);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = not_null(p_31);
        {
          ATerm s_31 = NULL;
          ATerm x_31 (ATerm t)
          {
            t = not_null(s_31);
            if(((r_31 != NULL) && (r_31 != t)))
              _fail(t);
            else
              r_31 = t;
            t = not_null(s_31);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(o_31), not_null(q_31)), not_null(l_31));
          if(((s_31 != NULL) && (s_31 != t)))
            _fail(t);
          else
            s_31 = t;
          t = x_31(t);
          t = not_null(r_31);
        }
        return(t);
      }
      t = not_null(n_31);
      if(((o_31 != NULL) && (o_31 != t)))
        _fail(t);
      else
        o_31 = t;
      t = not_null(k_31);
      t = d_62(t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      t = w_31(t);
      return(t);
    }
    t = not_null(f_31);
    if(((i_31 != NULL) && (i_31 != t)))
      _fail(t);
    else
      i_31 = t;
    t = not_null(g_31);
    if(((j_31 != NULL) && (j_31 != t)))
      _fail(t);
    else
      j_31 = t;
    t = not_null(h_31);
    if(((k_31 != NULL) && (k_31 != t)))
      _fail(t);
    else
      k_31 = t;
    t = not_null(f_31);
    {
      ATerm m_31 = NULL;
      ATerm u_31 (ATerm t)
      {
        t = not_null(m_31);
        if(((l_31 != NULL) && (l_31 != t)))
          _fail(t);
        else
          l_31 = t;
        t = not_null(m_31);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_31));
      if(((m_31 != NULL) && (m_31 != t)))
        _fail(t);
      else
        m_31 = t;
      t = u_31(t);
      t = not_null(j_31);
      t = c_62(t);
      if(((n_31 != NULL) && (n_31 != t)))
        _fail(t);
      else
        n_31 = t;
      t = v_31(t);
    }
    return(t);
  }
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  t = not_null(f_31);
  if(match_cons(t, sym_Cong_2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      t = t_31(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Path_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
  ATerm s_32 (ATerm t)
  {
    ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,m_32 = NULL;
    ATerm u_32 (ATerm t)
    {
      ATerm n_32 = NULL,o_32 = NULL;
      ATerm v_32 (ATerm t)
      {
        ATerm p_32 = NULL,q_32 = NULL;
        t = not_null(o_32);
        if(((p_32 != NULL) && (p_32 != t)))
          _fail(t);
        else
          p_32 = t;
        t = not_null(o_32);
        {
          ATerm r_32 = NULL;
          ATerm w_32 (ATerm t)
          {
            t = not_null(r_32);
            if(((q_32 != NULL) && (q_32 != t)))
              _fail(t);
            else
              q_32 = t;
            t = not_null(r_32);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(n_32), not_null(p_32)), not_null(k_32));
          if(((r_32 != NULL) && (r_32 != t)))
            _fail(t);
          else
            r_32 = t;
          t = w_32(t);
          t = not_null(q_32);
        }
        return(t);
      }
      t = not_null(m_32);
      if(((n_32 != NULL) && (n_32 != t)))
        _fail(t);
      else
        n_32 = t;
      t = not_null(j_32);
      t = z_67(t);
      if(((o_32 != NULL) && (o_32 != t)))
        _fail(t);
      else
        o_32 = t;
      t = v_32(t);
      return(t);
    }
    t = not_null(e_32);
    if(((h_32 != NULL) && (h_32 != t)))
      _fail(t);
    else
      h_32 = t;
    t = not_null(f_32);
    if(((i_32 != NULL) && (i_32 != t)))
      _fail(t);
    else
      i_32 = t;
    t = not_null(g_32);
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    t = not_null(e_32);
    {
      ATerm l_32 = NULL;
      ATerm t_32 (ATerm t)
      {
        t = not_null(l_32);
        if(((k_32 != NULL) && (k_32 != t)))
          _fail(t);
        else
          k_32 = t;
        t = not_null(l_32);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_32));
      if(((l_32 != NULL) && (l_32 != t)))
        _fail(t);
      else
        l_32 = t;
      t = t_32(t);
      t = not_null(i_32);
      t = y_67(t);
      if(((m_32 != NULL) && (m_32 != t)))
        _fail(t);
      else
        m_32 = t;
      t = u_32(t);
    }
    return(t);
  }
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  t = not_null(e_32);
  if(match_cons(t, sym_Path_2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      t = s_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  ATerm r_33 (ATerm t)
  {
    ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL;
    ATerm t_33 (ATerm t)
    {
      ATerm m_33 = NULL,n_33 = NULL;
      ATerm u_33 (ATerm t)
      {
        ATerm o_33 = NULL,p_33 = NULL;
        t = not_null(n_33);
        if(((o_33 != NULL) && (o_33 != t)))
          _fail(t);
        else
          o_33 = t;
        t = not_null(n_33);
        {
          ATerm q_33 = NULL;
          ATerm v_33 (ATerm t)
          {
            t = not_null(q_33);
            if(((p_33 != NULL) && (p_33 != t)))
              _fail(t);
            else
              p_33 = t;
            t = not_null(q_33);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_33), not_null(o_33)), not_null(j_33));
          if(((q_33 != NULL) && (q_33 != t)))
            _fail(t);
          else
            q_33 = t;
          t = v_33(t);
          t = not_null(p_33);
        }
        return(t);
      }
      t = not_null(l_33);
      if(((m_33 != NULL) && (m_33 != t)))
        _fail(t);
      else
        m_33 = t;
      t = not_null(i_33);
      t = n_67(t);
      if(((n_33 != NULL) && (n_33 != t)))
        _fail(t);
      else
        n_33 = t;
      t = u_33(t);
      return(t);
    }
    t = not_null(d_33);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    t = not_null(e_33);
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = not_null(f_33);
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = not_null(d_33);
    {
      ATerm k_33 = NULL;
      ATerm s_33 (ATerm t)
      {
        t = not_null(k_33);
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
        t = not_null(k_33);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_33));
      if(((k_33 != NULL) && (k_33 != t)))
        _fail(t);
      else
        k_33 = t;
      t = s_33(t);
      t = not_null(h_33);
      t = m_67(t);
      if(((l_33 != NULL) && (l_33 != t)))
        _fail(t);
      else
        l_33 = t;
      t = t_33(t);
    }
    return(t);
  }
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = not_null(d_33);
  if(match_cons(t, sym_Rec_2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      t = r_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  ATerm l_34 (ATerm t)
  {
    ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,h_34 = NULL;
    ATerm n_34 (ATerm t)
    {
      ATerm i_34 = NULL,j_34 = NULL;
      t = not_null(h_34);
      if(((i_34 != NULL) && (i_34 != t)))
        _fail(t);
      else
        i_34 = t;
      t = not_null(h_34);
      {
        ATerm k_34 = NULL;
        ATerm o_34 (ATerm t)
        {
          t = not_null(k_34);
          if(((j_34 != NULL) && (j_34 != t)))
            _fail(t);
          else
            j_34 = t;
          t = not_null(k_34);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_34)), not_null(f_34));
        if(((k_34 != NULL) && (k_34 != t)))
          _fail(t);
        else
          k_34 = t;
        t = o_34(t);
        t = not_null(j_34);
      }
      return(t);
    }
    t = not_null(b_34);
    if(((d_34 != NULL) && (d_34 != t)))
      _fail(t);
    else
      d_34 = t;
    t = not_null(c_34);
    if(((e_34 != NULL) && (e_34 != t)))
      _fail(t);
    else
      e_34 = t;
    t = not_null(b_34);
    {
      ATerm g_34 = NULL;
      ATerm m_34 (ATerm t)
      {
        t = not_null(g_34);
        if(((f_34 != NULL) && (f_34 != t)))
          _fail(t);
        else
          f_34 = t;
        t = not_null(g_34);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_34));
      if(((g_34 != NULL) && (g_34 != t)))
        _fail(t);
      else
        g_34 = t;
      t = m_34(t);
      t = not_null(e_34);
      t = o_66(t);
      if(((h_34 != NULL) && (h_34 != t)))
        _fail(t);
      else
        h_34 = t;
      t = n_34(t);
    }
    return(t);
  }
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  t = not_null(b_34);
  if(match_cons(t, sym_SVar_1))
    {
      c_34 = ATgetArgument(t, 0);
      t = l_34(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
  ATerm q_35 (ATerm t)
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,i_35 = NULL;
    ATerm s_35 (ATerm t)
    {
      ATerm j_35 = NULL,k_35 = NULL;
      ATerm t_35 (ATerm t)
      {
        ATerm l_35 = NULL,m_35 = NULL;
        ATerm u_35 (ATerm t)
        {
          ATerm n_35 = NULL,o_35 = NULL;
          t = not_null(m_35);
          if(((n_35 != NULL) && (n_35 != t)))
            _fail(t);
          else
            n_35 = t;
          t = not_null(m_35);
          {
            ATerm p_35 = NULL;
            ATerm v_35 (ATerm t)
            {
              t = not_null(p_35);
              if(((o_35 != NULL) && (o_35 != t)))
                _fail(t);
              else
                o_35 = t;
              t = not_null(p_35);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(j_35), not_null(l_35), not_null(n_35)), not_null(g_35));
            if(((p_35 != NULL) && (p_35 != t)))
              _fail(t);
            else
              p_35 = t;
            t = v_35(t);
            t = not_null(o_35);
          }
          return(t);
        }
        t = not_null(k_35);
        if(((l_35 != NULL) && (l_35 != t)))
          _fail(t);
        else
          l_35 = t;
        t = not_null(f_35);
        t = v_66(t);
        if(((m_35 != NULL) && (m_35 != t)))
          _fail(t);
        else
          m_35 = t;
        t = u_35(t);
        return(t);
      }
      t = not_null(i_35);
      if(((j_35 != NULL) && (j_35 != t)))
        _fail(t);
      else
        j_35 = t;
      t = not_null(e_35);
      t = u_66(t);
      if(((k_35 != NULL) && (k_35 != t)))
        _fail(t);
      else
        k_35 = t;
      t = t_35(t);
      return(t);
    }
    t = not_null(y_34);
    if(((c_35 != NULL) && (c_35 != t)))
      _fail(t);
    else
      c_35 = t;
    t = not_null(z_34);
    if(((d_35 != NULL) && (d_35 != t)))
      _fail(t);
    else
      d_35 = t;
    t = not_null(a_35);
    if(((e_35 != NULL) && (e_35 != t)))
      _fail(t);
    else
      e_35 = t;
    t = not_null(b_35);
    if(((f_35 != NULL) && (f_35 != t)))
      _fail(t);
    else
      f_35 = t;
    t = not_null(y_34);
    {
      ATerm h_35 = NULL;
      ATerm r_35 (ATerm t)
      {
        t = not_null(h_35);
        if(((g_35 != NULL) && (g_35 != t)))
          _fail(t);
        else
          g_35 = t;
        t = not_null(h_35);
        return(t);
      }
      t = SSLgetAnnotations(not_null(c_35));
      if(((h_35 != NULL) && (h_35 != t)))
        _fail(t);
      else
        h_35 = t;
      t = r_35(t);
      t = not_null(d_35);
      t = t_66(t);
      if(((i_35 != NULL) && (i_35 != t)))
        _fail(t);
      else
        i_35 = t;
      t = s_35(t);
    }
    return(t);
  }
  if(((y_34 != NULL) && (y_34 != t)))
    _fail(t);
  else
    y_34 = t;
  t = not_null(y_34);
  if(match_cons(t, sym_CallT_3))
    {
      z_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
      b_35 = ATgetArgument(t, 2);
      t = q_35(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LGChoice_2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  ATerm s_36 (ATerm t)
  {
    ATerm f_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL;
    ATerm u_36 (ATerm t)
    {
      ATerm n_36 = NULL,o_36 = NULL;
      ATerm v_36 (ATerm t)
      {
        ATerm p_36 = NULL,q_36 = NULL;
        t = not_null(o_36);
        if(((p_36 != NULL) && (p_36 != t)))
          _fail(t);
        else
          p_36 = t;
        t = not_null(o_36);
        {
          ATerm r_36 = NULL;
          ATerm w_36 (ATerm t)
          {
            t = not_null(r_36);
            if(((q_36 != NULL) && (q_36 != t)))
              _fail(t);
            else
              q_36 = t;
            t = not_null(r_36);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(n_36), not_null(p_36)), not_null(k_36));
          if(((r_36 != NULL) && (r_36 != t)))
            _fail(t);
          else
            r_36 = t;
          t = w_36(t);
          t = not_null(q_36);
        }
        return(t);
      }
      t = not_null(m_36);
      if(((n_36 != NULL) && (n_36 != t)))
        _fail(t);
      else
        n_36 = t;
      t = not_null(j_36);
      t = i_67(t);
      if(((o_36 != NULL) && (o_36 != t)))
        _fail(t);
      else
        o_36 = t;
      t = v_36(t);
      return(t);
    }
    t = not_null(c_36);
    if(((f_36 != NULL) && (f_36 != t)))
      _fail(t);
    else
      f_36 = t;
    t = not_null(d_36);
    if(((i_36 != NULL) && (i_36 != t)))
      _fail(t);
    else
      i_36 = t;
    t = not_null(e_36);
    if(((j_36 != NULL) && (j_36 != t)))
      _fail(t);
    else
      j_36 = t;
    t = not_null(c_36);
    {
      ATerm l_36 = NULL;
      ATerm t_36 (ATerm t)
      {
        t = not_null(l_36);
        if(((k_36 != NULL) && (k_36 != t)))
          _fail(t);
        else
          k_36 = t;
        t = not_null(l_36);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_36));
      if(((l_36 != NULL) && (l_36 != t)))
        _fail(t);
      else
        l_36 = t;
      t = t_36(t);
      t = not_null(i_36);
      t = h_67(t);
      if(((m_36 != NULL) && (m_36 != t)))
        _fail(t);
      else
        m_36 = t;
      t = u_36(t);
    }
    return(t);
  }
  if(((c_36 != NULL) && (c_36 != t)))
    _fail(t);
  else
    c_36 = t;
  t = not_null(c_36);
  if(match_cons(t, sym_LGChoice_2))
    {
      d_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
      t = s_36(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GChoice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  ATerm r_37 (ATerm t)
  {
    ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,l_37 = NULL;
    ATerm t_37 (ATerm t)
    {
      ATerm m_37 = NULL,n_37 = NULL;
      ATerm u_37 (ATerm t)
      {
        ATerm o_37 = NULL,p_37 = NULL;
        t = not_null(n_37);
        if(((o_37 != NULL) && (o_37 != t)))
          _fail(t);
        else
          o_37 = t;
        t = not_null(n_37);
        {
          ATerm q_37 = NULL;
          ATerm v_37 (ATerm t)
          {
            t = not_null(q_37);
            if(((p_37 != NULL) && (p_37 != t)))
              _fail(t);
            else
              p_37 = t;
            t = not_null(q_37);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(m_37), not_null(o_37)), not_null(j_37));
          if(((q_37 != NULL) && (q_37 != t)))
            _fail(t);
          else
            q_37 = t;
          t = v_37(t);
          t = not_null(p_37);
        }
        return(t);
      }
      t = not_null(l_37);
      if(((m_37 != NULL) && (m_37 != t)))
        _fail(t);
      else
        m_37 = t;
      t = not_null(i_37);
      t = i_66(t);
      if(((n_37 != NULL) && (n_37 != t)))
        _fail(t);
      else
        n_37 = t;
      t = u_37(t);
      return(t);
    }
    t = not_null(d_37);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = not_null(e_37);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    t = not_null(f_37);
    if(((i_37 != NULL) && (i_37 != t)))
      _fail(t);
    else
      i_37 = t;
    t = not_null(d_37);
    {
      ATerm k_37 = NULL;
      ATerm s_37 (ATerm t)
      {
        t = not_null(k_37);
        if(((j_37 != NULL) && (j_37 != t)))
          _fail(t);
        else
          j_37 = t;
        t = not_null(k_37);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_37));
      if(((k_37 != NULL) && (k_37 != t)))
        _fail(t);
      else
        k_37 = t;
      t = s_37(t);
      t = not_null(h_37);
      t = h_66(t);
      if(((l_37 != NULL) && (l_37 != t)))
        _fail(t);
      else
        l_37 = t;
      t = t_37(t);
    }
    return(t);
  }
  if(((d_37 != NULL) && (d_37 != t)))
    _fail(t);
  else
    d_37 = t;
  t = not_null(d_37);
  if(match_cons(t, sym_GChoice_2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      t = r_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  ATerm v_38 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,n_38 = NULL;
    ATerm x_38 (ATerm t)
    {
      ATerm o_38 = NULL,p_38 = NULL;
      ATerm y_38 (ATerm t)
      {
        ATerm q_38 = NULL,r_38 = NULL;
        ATerm z_38 (ATerm t)
        {
          ATerm s_38 = NULL,t_38 = NULL;
          t = not_null(r_38);
          if(((s_38 != NULL) && (s_38 != t)))
            _fail(t);
          else
            s_38 = t;
          t = not_null(r_38);
          {
            ATerm u_38 = NULL;
            ATerm a_39 (ATerm t)
            {
              t = not_null(u_38);
              if(((t_38 != NULL) && (t_38 != t)))
                _fail(t);
              else
                t_38 = t;
              t = not_null(u_38);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(o_38), not_null(q_38), not_null(s_38)), not_null(l_38));
            if(((u_38 != NULL) && (u_38 != t)))
              _fail(t);
            else
              u_38 = t;
            t = a_39(t);
            t = not_null(t_38);
          }
          return(t);
        }
        t = not_null(p_38);
        if(((q_38 != NULL) && (q_38 != t)))
          _fail(t);
        else
          q_38 = t;
        t = not_null(k_38);
        t = l_67(t);
        if(((r_38 != NULL) && (r_38 != t)))
          _fail(t);
        else
          r_38 = t;
        t = z_38(t);
        return(t);
      }
      t = not_null(n_38);
      if(((o_38 != NULL) && (o_38 != t)))
        _fail(t);
      else
        o_38 = t;
      t = not_null(j_38);
      t = k_67(t);
      if(((p_38 != NULL) && (p_38 != t)))
        _fail(t);
      else
        p_38 = t;
      t = y_38(t);
      return(t);
    }
    t = not_null(d_38);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    t = not_null(e_38);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = not_null(f_38);
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    t = not_null(g_38);
    if(((k_38 != NULL) && (k_38 != t)))
      _fail(t);
    else
      k_38 = t;
    t = not_null(d_38);
    {
      ATerm m_38 = NULL;
      ATerm w_38 (ATerm t)
      {
        t = not_null(m_38);
        if(((l_38 != NULL) && (l_38 != t)))
          _fail(t);
        else
          l_38 = t;
        t = not_null(m_38);
        return(t);
      }
      t = SSLgetAnnotations(not_null(h_38));
      if(((m_38 != NULL) && (m_38 != t)))
        _fail(t);
      else
        m_38 = t;
      t = w_38(t);
      t = not_null(i_38);
      t = j_67(t);
      if(((n_38 != NULL) && (n_38 != t)))
        _fail(t);
      else
        n_38 = t;
      t = x_38(t);
    }
    return(t);
  }
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  t = not_null(d_38);
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      g_38 = ATgetArgument(t, 2);
      t = v_38(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  ATerm v_39 (ATerm t)
  {
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,p_39 = NULL;
    ATerm x_39 (ATerm t)
    {
      ATerm q_39 = NULL,r_39 = NULL;
      ATerm y_39 (ATerm t)
      {
        ATerm s_39 = NULL,t_39 = NULL;
        t = not_null(r_39);
        if(((s_39 != NULL) && (s_39 != t)))
          _fail(t);
        else
          s_39 = t;
        t = not_null(r_39);
        {
          ATerm u_39 = NULL;
          ATerm z_39 (ATerm t)
          {
            t = not_null(u_39);
            if(((t_39 != NULL) && (t_39 != t)))
              _fail(t);
            else
              t_39 = t;
            t = not_null(u_39);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_39), not_null(s_39)), not_null(n_39));
          if(((u_39 != NULL) && (u_39 != t)))
            _fail(t);
          else
            u_39 = t;
          t = z_39(t);
          t = not_null(t_39);
        }
        return(t);
      }
      t = not_null(p_39);
      if(((q_39 != NULL) && (q_39 != t)))
        _fail(t);
      else
        q_39 = t;
      t = not_null(m_39);
      t = g_67(t);
      if(((r_39 != NULL) && (r_39 != t)))
        _fail(t);
      else
        r_39 = t;
      t = y_39(t);
      return(t);
    }
    t = not_null(h_39);
    if(((k_39 != NULL) && (k_39 != t)))
      _fail(t);
    else
      k_39 = t;
    t = not_null(i_39);
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    t = not_null(j_39);
    if(((m_39 != NULL) && (m_39 != t)))
      _fail(t);
    else
      m_39 = t;
    t = not_null(h_39);
    {
      ATerm o_39 = NULL;
      ATerm w_39 (ATerm t)
      {
        t = not_null(o_39);
        if(((n_39 != NULL) && (n_39 != t)))
          _fail(t);
        else
          n_39 = t;
        t = not_null(o_39);
        return(t);
      }
      t = SSLgetAnnotations(not_null(k_39));
      if(((o_39 != NULL) && (o_39 != t)))
        _fail(t);
      else
        o_39 = t;
      t = w_39(t);
      t = not_null(l_39);
      t = f_67(t);
      if(((p_39 != NULL) && (p_39 != t)))
        _fail(t);
      else
        p_39 = t;
      t = x_39(t);
    }
    return(t);
  }
  if(((h_39 != NULL) && (h_39 != t)))
    _fail(t);
  else
    h_39 = t;
  t = not_null(h_39);
  if(match_cons(t, sym_LChoice_2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      t = v_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Choice_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  ATerm u_40 (ATerm t)
  {
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL;
    ATerm w_40 (ATerm t)
    {
      ATerm p_40 = NULL,q_40 = NULL;
      ATerm x_40 (ATerm t)
      {
        ATerm r_40 = NULL,s_40 = NULL;
        t = not_null(q_40);
        if(((r_40 != NULL) && (r_40 != t)))
          _fail(t);
        else
          r_40 = t;
        t = not_null(q_40);
        {
          ATerm t_40 = NULL;
          ATerm y_40 (ATerm t)
          {
            t = not_null(t_40);
            if(((s_40 != NULL) && (s_40 != t)))
              _fail(t);
            else
              s_40 = t;
            t = not_null(t_40);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_40), not_null(r_40)), not_null(m_40));
          if(((t_40 != NULL) && (t_40 != t)))
            _fail(t);
          else
            t_40 = t;
          t = y_40(t);
          t = not_null(s_40);
        }
        return(t);
      }
      t = not_null(o_40);
      if(((p_40 != NULL) && (p_40 != t)))
        _fail(t);
      else
        p_40 = t;
      t = not_null(l_40);
      t = e_66(t);
      if(((q_40 != NULL) && (q_40 != t)))
        _fail(t);
      else
        q_40 = t;
      t = x_40(t);
      return(t);
    }
    t = not_null(g_40);
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = not_null(h_40);
    if(((k_40 != NULL) && (k_40 != t)))
      _fail(t);
    else
      k_40 = t;
    t = not_null(i_40);
    if(((l_40 != NULL) && (l_40 != t)))
      _fail(t);
    else
      l_40 = t;
    t = not_null(g_40);
    {
      ATerm n_40 = NULL;
      ATerm v_40 (ATerm t)
      {
        t = not_null(n_40);
        if(((m_40 != NULL) && (m_40 != t)))
          _fail(t);
        else
          m_40 = t;
        t = not_null(n_40);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_40));
      if(((n_40 != NULL) && (n_40 != t)))
        _fail(t);
      else
        n_40 = t;
      t = v_40(t);
      t = not_null(k_40);
      t = d_66(t);
      if(((o_40 != NULL) && (o_40 != t)))
        _fail(t);
      else
        o_40 = t;
      t = w_40(t);
    }
    return(t);
  }
  if(((g_40 != NULL) && (g_40 != t)))
    _fail(t);
  else
    g_40 = t;
  t = not_null(g_40);
  if(match_cons(t, sym_Choice_2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
      t = u_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,j_41 = NULL,l_41 = NULL;
  ATerm x_41 (ATerm t)
  {
    ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL;
    ATerm z_41 (ATerm t)
    {
      ATerm s_41 = NULL,t_41 = NULL;
      ATerm a_42 (ATerm t)
      {
        ATerm u_41 = NULL,v_41 = NULL;
        t = not_null(t_41);
        if(((u_41 != NULL) && (u_41 != t)))
          _fail(t);
        else
          u_41 = t;
        t = not_null(t_41);
        {
          ATerm w_41 = NULL;
          ATerm b_42 (ATerm t)
          {
            t = not_null(w_41);
            if(((v_41 != NULL) && (v_41 != t)))
              _fail(t);
            else
              v_41 = t;
            t = not_null(w_41);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(s_41), not_null(u_41)), not_null(p_41));
          if(((w_41 != NULL) && (w_41 != t)))
            _fail(t);
          else
            w_41 = t;
          t = b_42(t);
          t = not_null(v_41);
        }
        return(t);
      }
      t = not_null(r_41);
      if(((s_41 != NULL) && (s_41 != t)))
        _fail(t);
      else
        s_41 = t;
      t = not_null(o_41);
      t = e_67(t);
      if(((t_41 != NULL) && (t_41 != t)))
        _fail(t);
      else
        t_41 = t;
      t = a_42(t);
      return(t);
    }
    t = not_null(f_41);
    if(((m_41 != NULL) && (m_41 != t)))
      _fail(t);
    else
      m_41 = t;
    t = not_null(j_41);
    if(((n_41 != NULL) && (n_41 != t)))
      _fail(t);
    else
      n_41 = t;
    t = not_null(l_41);
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = not_null(f_41);
    {
      ATerm q_41 = NULL;
      ATerm y_41 (ATerm t)
      {
        t = not_null(q_41);
        if(((p_41 != NULL) && (p_41 != t)))
          _fail(t);
        else
          p_41 = t;
        t = not_null(q_41);
        return(t);
      }
      t = SSLgetAnnotations(not_null(m_41));
      if(((q_41 != NULL) && (q_41 != t)))
        _fail(t);
      else
        q_41 = t;
      t = y_41(t);
      t = not_null(n_41);
      t = d_67(t);
      if(((r_41 != NULL) && (r_41 != t)))
        _fail(t);
      else
        r_41 = t;
      t = z_41(t);
    }
    return(t);
  }
  if(((f_41 != NULL) && (f_41 != t)))
    _fail(t);
  else
    f_41 = t;
  t = not_null(f_41);
  if(match_cons(t, sym_Seq_2))
    {
      j_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
      t = x_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Test_1_0 (ATerm q_67 (ATerm), ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  ATerm r_42 (ATerm t)
  {
    ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,n_42 = NULL;
    ATerm t_42 (ATerm t)
    {
      ATerm o_42 = NULL,p_42 = NULL;
      t = not_null(n_42);
      if(((o_42 != NULL) && (o_42 != t)))
        _fail(t);
      else
        o_42 = t;
      t = not_null(n_42);
      {
        ATerm q_42 = NULL;
        ATerm u_42 (ATerm t)
        {
          t = not_null(q_42);
          if(((p_42 != NULL) && (p_42 != t)))
            _fail(t);
          else
            p_42 = t;
          t = not_null(q_42);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(o_42)), not_null(l_42));
        if(((q_42 != NULL) && (q_42 != t)))
          _fail(t);
        else
          q_42 = t;
        t = u_42(t);
        t = not_null(p_42);
      }
      return(t);
    }
    t = not_null(h_42);
    if(((j_42 != NULL) && (j_42 != t)))
      _fail(t);
    else
      j_42 = t;
    t = not_null(i_42);
    if(((k_42 != NULL) && (k_42 != t)))
      _fail(t);
    else
      k_42 = t;
    t = not_null(h_42);
    {
      ATerm m_42 = NULL;
      ATerm s_42 (ATerm t)
      {
        t = not_null(m_42);
        if(((l_42 != NULL) && (l_42 != t)))
          _fail(t);
        else
          l_42 = t;
        t = not_null(m_42);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_42));
      if(((m_42 != NULL) && (m_42 != t)))
        _fail(t);
      else
        m_42 = t;
      t = s_42(t);
      t = not_null(k_42);
      t = q_67(t);
      if(((n_42 != NULL) && (n_42 != t)))
        _fail(t);
      else
        n_42 = t;
      t = t_42(t);
    }
    return(t);
  }
  if(((h_42 != NULL) && (h_42 != t)))
    _fail(t);
  else
    h_42 = t;
  t = not_null(h_42);
  if(match_cons(t, sym_Test_1))
    {
      i_42 = ATgetArgument(t, 0);
      t = r_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1_0 (ATerm o_67 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  ATerm o_43 (ATerm t)
  {
    ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,k_43 = NULL;
    ATerm q_43 (ATerm t)
    {
      ATerm l_43 = NULL,m_43 = NULL;
      t = not_null(k_43);
      if(((l_43 != NULL) && (l_43 != t)))
        _fail(t);
      else
        l_43 = t;
      t = not_null(k_43);
      {
        ATerm n_43 = NULL;
        ATerm r_43 (ATerm t)
        {
          t = not_null(n_43);
          if(((m_43 != NULL) && (m_43 != t)))
            _fail(t);
          else
            m_43 = t;
          t = not_null(n_43);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(l_43)), not_null(f_43));
        if(((n_43 != NULL) && (n_43 != t)))
          _fail(t);
        else
          n_43 = t;
        t = r_43(t);
        t = not_null(m_43);
      }
      return(t);
    }
    t = not_null(a_43);
    if(((d_43 != NULL) && (d_43 != t)))
      _fail(t);
    else
      d_43 = t;
    t = not_null(b_43);
    if(((e_43 != NULL) && (e_43 != t)))
      _fail(t);
    else
      e_43 = t;
    t = not_null(a_43);
    {
      ATerm j_43 = NULL;
      ATerm p_43 (ATerm t)
      {
        t = not_null(j_43);
        if(((f_43 != NULL) && (f_43 != t)))
          _fail(t);
        else
          f_43 = t;
        t = not_null(j_43);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_43));
      if(((j_43 != NULL) && (j_43 != t)))
        _fail(t);
      else
        j_43 = t;
      t = p_43(t);
      t = not_null(e_43);
      t = o_67(t);
      if(((k_43 != NULL) && (k_43 != t)))
        _fail(t);
      else
        k_43 = t;
      t = q_43(t);
    }
    return(t);
  }
  if(((a_43 != NULL) && (a_43 != t)))
    _fail(t);
  else
    a_43 = t;
  t = not_null(a_43);
  if(match_cons(t, sym_Not_1))
    {
      b_43 = ATgetArgument(t, 0);
      t = o_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  ATerm w_43 = NULL;
  ATerm c_44 (ATerm t)
  {
    ATerm x_43 = NULL,y_43 = NULL,a_44 = NULL;
    t = not_null(w_43);
    if(((x_43 != NULL) && (x_43 != t)))
      _fail(t);
    else
      x_43 = t;
    t = not_null(w_43);
    {
      ATerm b_6;
      b_6 = t;
      {
        ATerm z_43 = NULL;
        ATerm d_44 (ATerm t)
        {
          t = not_null(z_43);
          if(((y_43 != NULL) && (y_43 != t)))
            _fail(t);
          else
            y_43 = t;
          t = not_null(z_43);
          return(t);
        }
        t = SSLgetAnnotations(not_null(x_43));
        if(((z_43 != NULL) && (z_43 != t)))
          _fail(t);
        else
          z_43 = t;
        t = d_44(t);
      }
      t = b_6;
      {
        ATerm b_44 = NULL;
        ATerm e_44 (ATerm t)
        {
          t = not_null(b_44);
          if(((a_44 != NULL) && (a_44 != t)))
            _fail(t);
          else
            a_44 = t;
          t = not_null(b_44);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(y_43));
        if(((b_44 != NULL) && (b_44 != t)))
          _fail(t);
        else
          b_44 = t;
        t = e_44(t);
        t = not_null(a_44);
      }
    }
    return(t);
  }
  if(((w_43 != NULL) && (w_43 != t)))
    _fail(t);
  else
    w_43 = t;
  t = not_null(w_43);
  if(match_cons(t, sym_Fail_0))
    {
      t = c_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  ATerm l_44 = NULL;
  ATerm s_44 (ATerm t)
  {
    ATerm m_44 = NULL,o_44 = NULL,q_44 = NULL;
    t = not_null(l_44);
    if(((m_44 != NULL) && (m_44 != t)))
      _fail(t);
    else
      m_44 = t;
    t = not_null(l_44);
    {
      ATerm c_6;
      c_6 = t;
      {
        ATerm p_44 = NULL;
        ATerm t_44 (ATerm t)
        {
          t = not_null(p_44);
          if(((o_44 != NULL) && (o_44 != t)))
            _fail(t);
          else
            o_44 = t;
          t = not_null(p_44);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_44));
        if(((p_44 != NULL) && (p_44 != t)))
          _fail(t);
        else
          p_44 = t;
        t = t_44(t);
      }
      t = c_6;
      {
        ATerm r_44 = NULL;
        ATerm u_44 (ATerm t)
        {
          t = not_null(r_44);
          if(((q_44 != NULL) && (q_44 != t)))
            _fail(t);
          else
            q_44 = t;
          t = not_null(r_44);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(o_44));
        if(((r_44 != NULL) && (r_44 != t)))
          _fail(t);
        else
          r_44 = t;
        t = u_44(t);
        t = not_null(q_44);
      }
    }
    return(t);
  }
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  t = not_null(l_44);
  if(match_cons(t, sym_Id_0))
    {
      t = s_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
      ;
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0_0(t);
            ;
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            {
              ATerm h_6 = t;
              int i_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(i_6);
                }
              else
                {
                  t = h_6;
                  {
                    ATerm j_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = j_6;
                        {
                          ATerm l_6 = t;
                          int m_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(m_6);
                            }
                          else
                            {
                              t = l_6;
                              {
                                ATerm n_6 = t;
                                int o_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(o_6);
                                  }
                                else
                                  {
                                    t = n_6;
                                    {
                                      ATerm p_6 = t;
                                      int q_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(u_6);
                                                    }
                                                  else
                                                    {
                                                      t = t_6;
                                                      {
                                                        ATerm v_6 = t;
                                                        int w_6 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(w_6);
                                                          }
                                                        else
                                                          {
                                                            t = v_6;
                                                            {
                                                              ATerm x_6 = t;
                                                              int y_6 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1_0(is_string_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_0 (ATerm t)
                                                                  {
                                                                    t = list_1_0(strategy_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm v_0 (ATerm t)
                                                                  {
                                                                    t = list_1_0(term_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3_0(t_0, u_0, v_0, t);
                                                                  ;
                                                                  LocalPopChoice(y_6);
                                                                }
                                                              else
                                                                {
                                                                  t = x_6;
                                                                  {
                                                                    ATerm z_6 = t;
                                                                    int a_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(a_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_6;
                                                                        {
                                                                          ATerm b_7 = t;
                                                                          int c_7 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(c_7);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_7;
                                                                              {
                                                                                ATerm d_7 = t;
                                                                                int e_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm w_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1_0(strategy_expression_0_0, t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2_0(is_string_0_0, w_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(e_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_7;
                                                                                    {
                                                                                      ATerm f_7 = t;
                                                                                      int g_7 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(g_7);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_7;
                                                                                          {
                                                                                            ATerm h_7 = t;
                                                                                            int i_7 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(i_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_7;
                                                                                                {
                                                                                                  ATerm j_7 = t;
                                                                                                  int k_7 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(k_7);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_7;
                                                                                                      {
                                                                                                        ATerm l_7 = t;
                                                                                                        int m_7 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_7);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_7;
                                                                                                            {
                                                                                                              ATerm n_7 = t;
                                                                                                              int o_7 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(shallow_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(o_7);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_7;
                                                                                                                  {
                                                                                                                    ATerm p_7 = t;
                                                                                                                    int q_7 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(q_7);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_7;
                                                                                                                        {
                                                                                                                          ATerm r_7 = t;
                                                                                                                          int s_7 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm x_0 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm y_0 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm t_7 = t;
                                                                                                                                  int u_7 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = is_string_0_0(t);
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(u_7);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = t_7;
                                                                                                                                      t = list_1_0(is_int_0_0, t);
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1_0(y_0, t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2_0(x_0, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(s_7);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_7;
                                                                                                                              {
                                                                                                                                ATerm v_7 = t;
                                                                                                                                int w_7 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(w_7);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_7;
                                                                                                                                    {
                                                                                                                                      ATerm x_7 = t;
                                                                                                                                      int y_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm z_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(strategy_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm a_1 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(term_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3_0(is_string_0_0, z_0, a_1, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(y_7);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = x_7;
                                                                                                                                          {
                                                                                                                                            ATerm z_7 = t;
                                                                                                                                            int a_8 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm b_1 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm c_1 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm b_8 = t;
                                                                                                                                                    int c_8 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        t = SDef_3_0(is_string_0_0, Nil_0_0, strategy_expression_0_0, t);
                                                                                                                                                        ;
                                                                                                                                                        LocalPopChoice(c_8);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = b_8;
                                                                                                                                                        t = SDefT_4_0(is_string_0_0, Nil_0_0, Nil_0_0, strategy_expression_0_0, t);
                                                                                                                                                      }
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1_0(c_1, t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2_0(b_1, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(a_8);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = z_7;
                                                                                                                                                {
                                                                                                                                                  ATerm d_8 = t;
                                                                                                                                                  int e_8 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm d_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1_0(_id, t);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Assign_2_0(d_1, term_expression_0_0, t);
                                                                                                                                                      ;
                                                                                                                                                      LocalPopChoice(e_8);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = d_8;
                                                                                                                                                      {
                                                                                                                                                        ATerm f_8 = t;
                                                                                                                                                        int g_8 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm e_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1_0(_id, t);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_1_0(e_1, t);
                                                                                                                                                            ;
                                                                                                                                                            LocalPopChoice(g_8);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = f_8;
                                                                                                                                                            {
                                                                                                                                                              ATerm f_1 (ATerm t)
                                                                                                                                                              {
                                                                                                                                                                t = term_h_8;
                                                                                                                                                                return(t);
                                                                                                                                                              }
                                                                                                                                                              t = debug_1_0(f_1, t);
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
ATerm FunType_2_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  ATerm r_45 (ATerm t)
  {
    ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,l_45 = NULL;
    ATerm t_45 (ATerm t)
    {
      ATerm m_45 = NULL,n_45 = NULL;
      ATerm u_45 (ATerm t)
      {
        ATerm o_45 = NULL,p_45 = NULL;
        t = not_null(n_45);
        if(((o_45 != NULL) && (o_45 != t)))
          _fail(t);
        else
          o_45 = t;
        t = not_null(n_45);
        {
          ATerm q_45 = NULL;
          ATerm v_45 (ATerm t)
          {
            t = not_null(q_45);
            if(((p_45 != NULL) && (p_45 != t)))
              _fail(t);
            else
              p_45 = t;
            t = not_null(q_45);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(m_45), not_null(o_45)), not_null(j_45));
          if(((q_45 != NULL) && (q_45 != t)))
            _fail(t);
          else
            q_45 = t;
          t = v_45(t);
          t = not_null(p_45);
        }
        return(t);
      }
      t = not_null(l_45);
      if(((m_45 != NULL) && (m_45 != t)))
        _fail(t);
      else
        m_45 = t;
      t = not_null(i_45);
      t = t_62(t);
      if(((n_45 != NULL) && (n_45 != t)))
        _fail(t);
      else
        n_45 = t;
      t = u_45(t);
      return(t);
    }
    t = not_null(d_45);
    if(((g_45 != NULL) && (g_45 != t)))
      _fail(t);
    else
      g_45 = t;
    t = not_null(e_45);
    if(((h_45 != NULL) && (h_45 != t)))
      _fail(t);
    else
      h_45 = t;
    t = not_null(f_45);
    if(((i_45 != NULL) && (i_45 != t)))
      _fail(t);
    else
      i_45 = t;
    t = not_null(d_45);
    {
      ATerm k_45 = NULL;
      ATerm s_45 (ATerm t)
      {
        t = not_null(k_45);
        if(((j_45 != NULL) && (j_45 != t)))
          _fail(t);
        else
          j_45 = t;
        t = not_null(k_45);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_45));
      if(((k_45 != NULL) && (k_45 != t)))
        _fail(t);
      else
        k_45 = t;
      t = s_45(t);
      t = not_null(h_45);
      t = s_62(t);
      if(((l_45 != NULL) && (l_45 != t)))
        _fail(t);
      else
        l_45 = t;
      t = t_45(t);
    }
    return(t);
  }
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  t = not_null(d_45);
  if(match_cons(t, sym_FunType_2))
    {
      e_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
      t = r_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2_0 (ATerm l_63 (ATerm), ATerm m_63 (ATerm), ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  ATerm w_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,k_46 = NULL;
    ATerm y_46 (ATerm t)
    {
      ATerm r_46 = NULL,s_46 = NULL;
      ATerm z_46 (ATerm t)
      {
        ATerm t_46 = NULL,u_46 = NULL;
        t = not_null(s_46);
        if(((t_46 != NULL) && (t_46 != t)))
          _fail(t);
        else
          t_46 = t;
        t = not_null(s_46);
        {
          ATerm v_46 = NULL;
          ATerm a_47 (ATerm t)
          {
            t = not_null(v_46);
            if(((u_46 != NULL) && (u_46 != t)))
              _fail(t);
            else
              u_46 = t;
            t = not_null(v_46);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_46), not_null(t_46)), not_null(i_46));
          if(((v_46 != NULL) && (v_46 != t)))
            _fail(t);
          else
            v_46 = t;
          t = a_47(t);
          t = not_null(u_46);
        }
        return(t);
      }
      t = not_null(k_46);
      if(((r_46 != NULL) && (r_46 != t)))
        _fail(t);
      else
        r_46 = t;
      t = not_null(h_46);
      t = m_63(t);
      if(((s_46 != NULL) && (s_46 != t)))
        _fail(t);
      else
        s_46 = t;
      t = z_46(t);
      return(t);
    }
    t = not_null(c_46);
    if(((f_46 != NULL) && (f_46 != t)))
      _fail(t);
    else
      f_46 = t;
    t = not_null(d_46);
    if(((g_46 != NULL) && (g_46 != t)))
      _fail(t);
    else
      g_46 = t;
    t = not_null(e_46);
    if(((h_46 != NULL) && (h_46 != t)))
      _fail(t);
    else
      h_46 = t;
    t = not_null(c_46);
    {
      ATerm j_46 = NULL;
      ATerm x_46 (ATerm t)
      {
        t = not_null(j_46);
        if(((i_46 != NULL) && (i_46 != t)))
          _fail(t);
        else
          i_46 = t;
        t = not_null(j_46);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_46));
      if(((j_46 != NULL) && (j_46 != t)))
        _fail(t);
      else
        j_46 = t;
      t = x_46(t);
      t = not_null(g_46);
      t = l_63(t);
      if(((k_46 != NULL) && (k_46 != t)))
        _fail(t);
      else
        k_46 = t;
      t = y_46(t);
    }
    return(t);
  }
  if(((c_46 != NULL) && (c_46 != t)))
    _fail(t);
  else
    c_46 = t;
  t = not_null(c_46);
  if(match_cons(t, sym_Op_2))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
      t = w_46(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ConstType_1_0 (ATerm r_62 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  ATerm q_47 (ATerm t)
  {
    ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,m_47 = NULL;
    ATerm s_47 (ATerm t)
    {
      ATerm n_47 = NULL,o_47 = NULL;
      t = not_null(m_47);
      if(((n_47 != NULL) && (n_47 != t)))
        _fail(t);
      else
        n_47 = t;
      t = not_null(m_47);
      {
        ATerm p_47 = NULL;
        ATerm t_47 (ATerm t)
        {
          t = not_null(p_47);
          if(((o_47 != NULL) && (o_47 != t)))
            _fail(t);
          else
            o_47 = t;
          t = not_null(p_47);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(n_47)), not_null(k_47));
        if(((p_47 != NULL) && (p_47 != t)))
          _fail(t);
        else
          p_47 = t;
        t = t_47(t);
        t = not_null(o_47);
      }
      return(t);
    }
    t = not_null(g_47);
    if(((i_47 != NULL) && (i_47 != t)))
      _fail(t);
    else
      i_47 = t;
    t = not_null(h_47);
    if(((j_47 != NULL) && (j_47 != t)))
      _fail(t);
    else
      j_47 = t;
    t = not_null(g_47);
    {
      ATerm l_47 = NULL;
      ATerm r_47 (ATerm t)
      {
        t = not_null(l_47);
        if(((k_47 != NULL) && (k_47 != t)))
          _fail(t);
        else
          k_47 = t;
        t = not_null(l_47);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_47));
      if(((l_47 != NULL) && (l_47 != t)))
        _fail(t);
      else
        l_47 = t;
      t = r_47(t);
      t = not_null(j_47);
      t = r_62(t);
      if(((m_47 != NULL) && (m_47 != t)))
        _fail(t);
      else
        m_47 = t;
      t = s_47(t);
    }
    return(t);
  }
  if(((g_47 != NULL) && (g_47 != t)))
    _fail(t);
  else
    g_47 = t;
  t = not_null(g_47);
  if(match_cons(t, sym_ConstType_1))
    {
      h_47 = ATgetArgument(t, 0);
      t = q_47(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        t = Op_2_0(is_string_0_0, Nil_0_0, t);
        return(t);
      }
      t = ConstType_1_0(g_1, t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm h_1 (ATerm t)
        {
          t = list_1_0(type_expression_0_0, t);
          return(t);
        }
        t = FunType_2_0(h_1, type_expression_0_0, t);
      }
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  ATerm o_48 (ATerm t)
  {
    ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,i_48 = NULL;
    ATerm q_48 (ATerm t)
    {
      ATerm j_48 = NULL,k_48 = NULL;
      ATerm r_48 (ATerm t)
      {
        ATerm l_48 = NULL,m_48 = NULL;
        t = not_null(k_48);
        if(((l_48 != NULL) && (l_48 != t)))
          _fail(t);
        else
          l_48 = t;
        t = not_null(k_48);
        {
          ATerm n_48 = NULL;
          ATerm s_48 (ATerm t)
          {
            t = not_null(n_48);
            if(((m_48 != NULL) && (m_48 != t)))
              _fail(t);
            else
              m_48 = t;
            t = not_null(n_48);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_48), not_null(l_48)), not_null(g_48));
          if(((n_48 != NULL) && (n_48 != t)))
            _fail(t);
          else
            n_48 = t;
          t = s_48(t);
          t = not_null(m_48);
        }
        return(t);
      }
      t = not_null(i_48);
      if(((j_48 != NULL) && (j_48 != t)))
        _fail(t);
      else
        j_48 = t;
      t = not_null(f_48);
      t = b_69(t);
      if(((k_48 != NULL) && (k_48 != t)))
        _fail(t);
      else
        k_48 = t;
      t = r_48(t);
      return(t);
    }
    t = not_null(a_48);
    if(((d_48 != NULL) && (d_48 != t)))
      _fail(t);
    else
      d_48 = t;
    t = not_null(b_48);
    if(((e_48 != NULL) && (e_48 != t)))
      _fail(t);
    else
      e_48 = t;
    t = not_null(c_48);
    if(((f_48 != NULL) && (f_48 != t)))
      _fail(t);
    else
      f_48 = t;
    t = not_null(a_48);
    {
      ATerm h_48 = NULL;
      ATerm p_48 (ATerm t)
      {
        t = not_null(h_48);
        if(((g_48 != NULL) && (g_48 != t)))
          _fail(t);
        else
          g_48 = t;
        t = not_null(h_48);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_48));
      if(((h_48 != NULL) && (h_48 != t)))
        _fail(t);
      else
        h_48 = t;
      t = p_48(t);
      t = not_null(e_48);
      t = a_69(t);
      if(((i_48 != NULL) && (i_48 != t)))
        _fail(t);
      else
        i_48 = t;
      t = q_48(t);
    }
    return(t);
  }
  if(((a_48 != NULL) && (a_48 != t)))
    _fail(t);
  else
    a_48 = t;
  t = not_null(a_48);
  if(match_cons(t, sym_VarDec_2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
      t = o_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  ATerm g_50 (ATerm t)
  {
    ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,n_49 = NULL;
    ATerm i_50 (ATerm t)
    {
      ATerm o_49 = NULL,p_49 = NULL;
      ATerm j_50 (ATerm t)
      {
        ATerm q_49 = NULL,r_49 = NULL;
        ATerm k_50 (ATerm t)
        {
          ATerm s_49 = NULL,x_49 = NULL;
          ATerm l_50 (ATerm t)
          {
            ATerm y_49 = NULL,e_50 = NULL;
            t = not_null(x_49);
            if(((y_49 != NULL) && (y_49 != t)))
              _fail(t);
            else
              y_49 = t;
            t = not_null(x_49);
            {
              ATerm f_50 = NULL;
              ATerm m_50 (ATerm t)
              {
                t = not_null(f_50);
                if(((e_50 != NULL) && (e_50 != t)))
                  _fail(t);
                else
                  e_50 = t;
                t = not_null(f_50);
                return(t);
              }
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(o_49), not_null(q_49), not_null(s_49), not_null(y_49)), not_null(l_49));
              if(((f_50 != NULL) && (f_50 != t)))
                _fail(t);
              else
                f_50 = t;
              t = m_50(t);
              t = not_null(e_50);
            }
            return(t);
          }
          t = not_null(r_49);
          if(((s_49 != NULL) && (s_49 != t)))
            _fail(t);
          else
            s_49 = t;
          t = not_null(k_49);
          t = k_69(t);
          if(((x_49 != NULL) && (x_49 != t)))
            _fail(t);
          else
            x_49 = t;
          t = l_50(t);
          return(t);
        }
        t = not_null(p_49);
        if(((q_49 != NULL) && (q_49 != t)))
          _fail(t);
        else
          q_49 = t;
        t = not_null(j_49);
        t = j_69(t);
        if(((r_49 != NULL) && (r_49 != t)))
          _fail(t);
        else
          r_49 = t;
        t = k_50(t);
        return(t);
      }
      t = not_null(n_49);
      if(((o_49 != NULL) && (o_49 != t)))
        _fail(t);
      else
        o_49 = t;
      t = not_null(i_49);
      t = i_69(t);
      if(((p_49 != NULL) && (p_49 != t)))
        _fail(t);
      else
        p_49 = t;
      t = j_50(t);
      return(t);
    }
    t = not_null(b_49);
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(c_49);
    if(((h_49 != NULL) && (h_49 != t)))
      _fail(t);
    else
      h_49 = t;
    t = not_null(d_49);
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = not_null(e_49);
    if(((j_49 != NULL) && (j_49 != t)))
      _fail(t);
    else
      j_49 = t;
    t = not_null(f_49);
    if(((k_49 != NULL) && (k_49 != t)))
      _fail(t);
    else
      k_49 = t;
    t = not_null(b_49);
    {
      ATerm m_49 = NULL;
      ATerm h_50 (ATerm t)
      {
        t = not_null(m_49);
        if(((l_49 != NULL) && (l_49 != t)))
          _fail(t);
        else
          l_49 = t;
        t = not_null(m_49);
        return(t);
      }
      t = SSLgetAnnotations(not_null(g_49));
      if(((m_49 != NULL) && (m_49 != t)))
        _fail(t);
      else
        m_49 = t;
      t = h_50(t);
      t = not_null(h_49);
      t = h_69(t);
      if(((n_49 != NULL) && (n_49 != t)))
        _fail(t);
      else
        n_49 = t;
      t = i_50(t);
    }
    return(t);
  }
  if(((b_49 != NULL) && (b_49 != t)))
    _fail(t);
  else
    b_49 = t;
  t = not_null(b_49);
  if(match_cons(t, sym_SDefT_4))
    {
      c_49 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
      e_49 = ATgetArgument(t, 2);
      f_49 = ATgetArgument(t, 3);
      t = g_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  ATerm t_51 (ATerm t)
  {
    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,e_51 = NULL,g_51 = NULL;
    ATerm v_51 (ATerm t)
    {
      ATerm h_51 = NULL,i_51 = NULL;
      ATerm w_51 (ATerm t)
      {
        ATerm j_51 = NULL,k_51 = NULL;
        ATerm x_51 (ATerm t)
        {
          ATerm q_51 = NULL,r_51 = NULL;
          t = not_null(k_51);
          if(((q_51 != NULL) && (q_51 != t)))
            _fail(t);
          else
            q_51 = t;
          t = not_null(k_51);
          {
            ATerm s_51 = NULL;
            ATerm y_51 (ATerm t)
            {
              t = not_null(s_51);
              if(((r_51 != NULL) && (r_51 != t)))
                _fail(t);
              else
                r_51 = t;
              t = not_null(s_51);
              return(t);
            }
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_51), not_null(j_51), not_null(q_51)), not_null(e_51));
            if(((s_51 != NULL) && (s_51 != t)))
              _fail(t);
            else
              s_51 = t;
            t = y_51(t);
            t = not_null(r_51);
          }
          return(t);
        }
        t = not_null(i_51);
        if(((j_51 != NULL) && (j_51 != t)))
          _fail(t);
        else
          j_51 = t;
        t = not_null(b_51);
        t = g_69(t);
        if(((k_51 != NULL) && (k_51 != t)))
          _fail(t);
        else
          k_51 = t;
        t = x_51(t);
        return(t);
      }
      t = not_null(g_51);
      if(((h_51 != NULL) && (h_51 != t)))
        _fail(t);
      else
        h_51 = t;
      t = not_null(a_51);
      t = f_69(t);
      if(((i_51 != NULL) && (i_51 != t)))
        _fail(t);
      else
        i_51 = t;
      t = w_51(t);
      return(t);
    }
    t = not_null(u_50);
    if(((y_50 != NULL) && (y_50 != t)))
      _fail(t);
    else
      y_50 = t;
    t = not_null(v_50);
    if(((z_50 != NULL) && (z_50 != t)))
      _fail(t);
    else
      z_50 = t;
    t = not_null(w_50);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = not_null(x_50);
    if(((b_51 != NULL) && (b_51 != t)))
      _fail(t);
    else
      b_51 = t;
    t = not_null(u_50);
    {
      ATerm f_51 = NULL;
      ATerm u_51 (ATerm t)
      {
        t = not_null(f_51);
        if(((e_51 != NULL) && (e_51 != t)))
          _fail(t);
        else
          e_51 = t;
        t = not_null(f_51);
        return(t);
      }
      t = SSLgetAnnotations(not_null(y_50));
      if(((f_51 != NULL) && (f_51 != t)))
        _fail(t);
      else
        f_51 = t;
      t = u_51(t);
      t = not_null(z_50);
      t = e_69(t);
      if(((g_51 != NULL) && (g_51 != t)))
        _fail(t);
      else
        g_51 = t;
      t = v_51(t);
    }
    return(t);
  }
  if(((u_50 != NULL) && (u_50 != t)))
    _fail(t);
  else
    u_50 = t;
  t = not_null(u_50);
  if(match_cons(t, sym_SDef_3))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      x_50 = ATgetArgument(t, 2);
      t = t_51(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
          return(t);
        }
        t = list_1_0(j_1, t);
        return(t);
      }
      t = SDef_3_0(is_string_0_0, i_1, strategy_expression_0_0, t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm m_1 (ATerm t)
              {
                t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
                return(t);
              }
              t = list_1_0(m_1, t);
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
                return(t);
              }
              t = list_1_0(n_1, t);
              return(t);
            }
            t = SDefT_4_0(is_string_0_0, k_1, l_1, strategy_expression_0_0, t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm o_1 (ATerm t)
              {
                t = term_o_8;
                return(t);
              }
              t = debug_1_0(o_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm z_51 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = Cons_2_0(s_83, z_51, t);
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm g_62 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  ATerm q_52 (ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,m_52 = NULL;
    ATerm s_52 (ATerm t)
    {
      ATerm n_52 = NULL,o_52 = NULL;
      t = not_null(m_52);
      if(((n_52 != NULL) && (n_52 != t)))
        _fail(t);
      else
        n_52 = t;
      t = not_null(m_52);
      {
        ATerm p_52 = NULL;
        ATerm t_52 (ATerm t)
        {
          t = not_null(p_52);
          if(((o_52 != NULL) && (o_52 != t)))
            _fail(t);
          else
            o_52 = t;
          t = not_null(p_52);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(n_52)), not_null(k_52));
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
        t = t_52(t);
        t = not_null(o_52);
      }
      return(t);
    }
    t = not_null(g_52);
    if(((i_52 != NULL) && (i_52 != t)))
      _fail(t);
    else
      i_52 = t;
    t = not_null(h_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(g_52);
    {
      ATerm l_52 = NULL;
      ATerm r_52 (ATerm t)
      {
        t = not_null(l_52);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = not_null(l_52);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_52));
      if(((l_52 != NULL) && (l_52 != t)))
        _fail(t);
      else
        l_52 = t;
      t = r_52(t);
      t = not_null(j_52);
      t = g_62(t);
      if(((m_52 != NULL) && (m_52 != t)))
        _fail(t);
      else
        m_52 = t;
      t = s_52(t);
    }
    return(t);
  }
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  t = not_null(g_52);
  if(match_cons(t, sym_Strategies_1))
    {
      h_52 = ATgetArgument(t, 0);
      t = q_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  ATerm q_53 (ATerm t)
  {
    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,m_53 = NULL;
    ATerm s_53 (ATerm t)
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
        ATerm t_53 (ATerm t)
        {
          t = not_null(p_53);
          if(((o_53 != NULL) && (o_53 != t)))
            _fail(t);
          else
            o_53 = t;
          t = not_null(p_53);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(n_53)), not_null(k_53));
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        t = t_53(t);
        t = not_null(o_53);
      }
      return(t);
    }
    t = not_null(g_53);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = not_null(h_53);
    if(((j_53 != NULL) && (j_53 != t)))
      _fail(t);
    else
      j_53 = t;
    t = not_null(g_53);
    {
      ATerm l_53 = NULL;
      ATerm r_53 (ATerm t)
      {
        t = not_null(l_53);
        if(((k_53 != NULL) && (k_53 != t)))
          _fail(t);
        else
          k_53 = t;
        t = not_null(l_53);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_53));
      if(((l_53 != NULL) && (l_53 != t)))
        _fail(t);
      else
        l_53 = t;
      t = r_53(t);
      t = not_null(j_53);
      t = l_62(t);
      if(((m_53 != NULL) && (m_53 != t)))
        _fail(t);
      else
        m_53 = t;
      t = s_53(t);
    }
    return(t);
  }
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  t = not_null(g_53);
  if(match_cons(t, sym_Specification_1))
    {
      h_53 = ATgetArgument(t, 0);
      t = q_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              t = list_1_0(strategy_definition_0_0, t);
              return(t);
            }
            t = Strategies_1_0(s_1, t);
            return(t);
          }
          t = Cons_2_0(r_1, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_1, t);
        return(t);
      }
      t = Specification_1_0(p_1, t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm t_1 (ATerm t)
        {
          t = term_t_8;
          return(t);
        }
        t = debug_1_0(t_1, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  ATerm o_54 (ATerm t)
  {
    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,i_54 = NULL;
    ATerm q_54 (ATerm t)
    {
      ATerm j_54 = NULL,k_54 = NULL;
      ATerm r_54 (ATerm t)
      {
        ATerm l_54 = NULL,m_54 = NULL;
        t = not_null(k_54);
        if(((l_54 != NULL) && (l_54 != t)))
          _fail(t);
        else
          l_54 = t;
        t = not_null(k_54);
        {
          ATerm n_54 = NULL;
          ATerm s_54 (ATerm t)
          {
            t = not_null(n_54);
            if(((m_54 != NULL) && (m_54 != t)))
              _fail(t);
            else
              m_54 = t;
            t = not_null(n_54);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_54), not_null(l_54)), not_null(g_54));
          if(((n_54 != NULL) && (n_54 != t)))
            _fail(t);
          else
            n_54 = t;
          t = s_54(t);
          t = not_null(m_54);
        }
        return(t);
      }
      t = not_null(i_54);
      if(((j_54 != NULL) && (j_54 != t)))
        _fail(t);
      else
        j_54 = t;
      t = not_null(f_54);
      t = s_60(t);
      if(((k_54 != NULL) && (k_54 != t)))
        _fail(t);
      else
        k_54 = t;
      t = r_54(t);
      return(t);
    }
    t = not_null(a_54);
    if(((d_54 != NULL) && (d_54 != t)))
      _fail(t);
    else
      d_54 = t;
    t = not_null(b_54);
    if(((e_54 != NULL) && (e_54 != t)))
      _fail(t);
    else
      e_54 = t;
    t = not_null(c_54);
    if(((f_54 != NULL) && (f_54 != t)))
      _fail(t);
    else
      f_54 = t;
    t = not_null(a_54);
    {
      ATerm h_54 = NULL;
      ATerm p_54 (ATerm t)
      {
        t = not_null(h_54);
        if(((g_54 != NULL) && (g_54 != t)))
          _fail(t);
        else
          g_54 = t;
        t = not_null(h_54);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_54));
      if(((h_54 != NULL) && (h_54 != t)))
        _fail(t);
      else
        h_54 = t;
      t = p_54(t);
      t = not_null(e_54);
      t = r_60(t);
      if(((i_54 != NULL) && (i_54 != t)))
        _fail(t);
      else
        i_54 = t;
      t = q_54(t);
    }
    return(t);
  }
  if(((a_54 != NULL) && (a_54 != t)))
    _fail(t);
  else
    a_54 = t;
  t = not_null(a_54);
  if(match_cons(t, sym__2))
    {
      b_54 = ATgetArgument(t, 0);
      c_54 = ATgetArgument(t, 1);
      t = o_54(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_8;
  u_8 = t;
  {
    ATerm u_54 = NULL;
    ATerm v_54 = NULL;
    ATerm w_54 (ATerm t)
    {
      t = not_null(v_54);
      if(((u_54 != NULL) && (u_54 != t)))
        _fail(t);
      else
        u_54 = t;
      t = not_null(v_54);
      return(t);
    }
    t = term_v_8;
    t = whoami_0_0(t);
    if(((v_54 != NULL) && (v_54 != t)))
      _fail(t);
    else
      v_54 = t;
    t = w_54(t);
    t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_8), not_null(u_54)), term_x_8));
    t = printnl_0_0(t);
    t = term_z_8;
    t = exit_0_0(t);
  }
  t = u_8;
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  ATerm e_55 (ATerm t)
  {
    ATerm c_55 = NULL,d_55 = NULL;
    t = not_null(a_55);
    if(((c_55 != NULL) && (c_55 != t)))
      _fail(t);
    else
      c_55 = t;
    t = not_null(b_55);
    if(((d_55 != NULL) && (d_55 != t)))
      _fail(t);
    else
      d_55 = t;
    t = not_null(z_54);
    {
      ATerm a_9;
      a_9 = t;
      t = SSL_printnl(not_null(c_55), not_null(d_55));
      t = a_9;
    }
    return(t);
  }
  if(((z_54 != NULL) && (z_54 != t)))
    _fail(t);
  else
    z_54 = t;
  t = not_null(z_54);
  if(match_cons(t, sym__2))
    {
      a_55 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
      t = e_55(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm g_55 = NULL;
  ATerm i_55 (ATerm t)
  {
    ATerm h_55 = NULL;
    t = not_null(g_55);
    if(((h_55 != NULL) && (h_55 != t)))
      _fail(t);
    else
      h_55 = t;
    t = not_null(g_55);
    t = SSL_implode_string(not_null(h_55));
    return(t);
  }
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  t = i_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
        ATerm w_55 (ATerm t)
        {
          ATerm t_55 = NULL,u_55 = NULL;
          t = not_null(r_55);
          if(((t_55 != NULL) && (t_55 != t)))
            _fail(t);
          else
            t_55 = t;
          t = not_null(s_55);
          if(((u_55 != NULL) && (u_55 != t)))
            _fail(t);
          else
            u_55 = t;
          t = not_null(t_55);
          {
            ATerm u_1 (ATerm t)
            {
              t = not_null(u_55);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(u_1, t);
          }
          return(t);
        }
        if(((q_55 != NULL) && (q_55 != t)))
          _fail(t);
        else
          q_55 = t;
        t = not_null(q_55);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_55 = ATgetFirst((ATermList) t);
            s_55 = (ATerm) ATgetNext((ATermList) t);
            t = w_55(t);
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
  ATerm j_56 = NULL;
  ATerm r_56 (ATerm t)
  {
    ATerm k_56 = NULL,l_56 = NULL;
    t = not_null(j_56);
    if(((k_56 != NULL) && (k_56 != t)))
      _fail(t);
    else
      k_56 = t;
    t = not_null(j_56);
    {
      ATerm m_56 = NULL;
      ATerm s_56 (ATerm t)
      {
        ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
        ATerm t_56 (ATerm t)
        {
          t = not_null(q_56);
          if(((l_56 != NULL) && (l_56 != t)))
            _fail(t);
          else
            l_56 = t;
          t = not_null(o_56);
          return(t);
        }
        t = not_null(m_56);
        if(((n_56 != NULL) && (n_56 != t)))
          _fail(t);
        else
          n_56 = t;
        t = not_null(m_56);
        t = SSL_explode_term(not_null(n_56));
        if(((o_56 != NULL) && (o_56 != t)))
          _fail(t);
        else
          o_56 = t;
        t = not_null(o_56);
        if(match_cons(t, sym__2))
          {
            p_56 = ATgetArgument(t, 0);
            q_56 = ATgetArgument(t, 1);
            t = not_null(p_56);
            if(match_string(t, ""))
              {
                t = t_56(t);
              }
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
      t = not_null(k_56);
      if(((m_56 != NULL) && (m_56 != t)))
        _fail(t);
      else
        m_56 = t;
      t = s_56(t);
      t = not_null(l_56);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((j_56 != NULL) && (j_56 != t)))
    _fail(t);
  else
    j_56 = t;
  t = r_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm u_56 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_56, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = Nil_0_0(t);
        t = f_84(t);
      }
    return(t);
  }
  t = u_56(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  ATerm c_57 (ATerm t)
  {
    ATerm a_57 = NULL,b_57 = NULL;
    t = not_null(y_56);
    if(((b_57 != NULL) && (b_57 != t)))
      _fail(t);
    else
      b_57 = t;
    t = not_null(z_56);
    if(((a_57 != NULL) && (a_57 != t)))
      _fail(t);
    else
      a_57 = t;
    t = not_null(b_57);
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(a_57);
        return(t);
      }
      t = at_end_1_0(v_1, t);
    }
    return(t);
  }
  if(((x_56 != NULL) && (x_56 != t)))
    _fail(t);
  else
    x_56 = t;
  t = not_null(x_56);
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      z_56 = ATgetArgument(t, 1);
      t = c_57(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm e_57 = NULL;
  ATerm g_57 (ATerm t)
  {
    ATerm f_57 = NULL;
    t = not_null(e_57);
    if(((f_57 != NULL) && (f_57 != t)))
      _fail(t);
    else
      f_57 = t;
    t = not_null(e_57);
    t = SSL_explode_string(not_null(f_57));
    return(t);
  }
  if(((e_57 != NULL) && (e_57 != t)))
    _fail(t);
  else
    e_57 = t;
  t = g_57(t);
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
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_1, t);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
              ATerm f_58 (ATerm t)
              {
                ATerm x_57 = NULL;
                t = not_null(v_57);
                if(((x_57 != NULL) && (x_57 != t)))
                  _fail(t);
                else
                  x_57 = t;
                t = not_null(x_57);
                return(t);
              }
              ATerm g_58 (ATerm t)
              {
                ATerm y_57 = NULL;
                t = not_null(v_57);
                if(((y_57 != NULL) && (y_57 != t)))
                  _fail(t);
                else
                  y_57 = t;
                t = not_null(y_57);
                {
                  ATerm l_9 = t;
                  int m_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_9);
                    }
                  else
                    {
                      t = l_9;
                      {
                        ATerm x_1 (ATerm t)
                        {
                          t = term_n_9;
                          return(t);
                        }
                        t = debug_1_0(x_1, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm h_58 (ATerm t)
              {
                ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,d_58 = NULL;
                t = not_null(v_57);
                if(((z_57 != NULL) && (z_57 != t)))
                  _fail(t);
                else
                  z_57 = t;
                t = not_null(w_57);
                if(((a_58 != NULL) && (a_58 != t)))
                  _fail(t);
                else
                  a_58 = t;
                t = not_null(u_57);
                {
                  ATerm o_9;
                  o_9 = t;
                  {
                    ATerm c_58 = NULL;
                    ATerm i_58 (ATerm t)
                    {
                      t = not_null(c_58);
                      if(((b_58 != NULL) && (b_58 != t)))
                        _fail(t);
                      else
                        b_58 = t;
                      t = not_null(c_58);
                      return(t);
                    }
                    t = not_null(z_57);
                    t = eval_config_0_0(t);
                    if(((c_58 != NULL) && (c_58 != t)))
                      _fail(t);
                    else
                      c_58 = t;
                    t = i_58(t);
                  }
                  t = o_9;
                  {
                    ATerm e_58 = NULL;
                    ATerm j_58 (ATerm t)
                    {
                      t = not_null(e_58);
                      if(((d_58 != NULL) && (d_58 != t)))
                        _fail(t);
                      else
                        d_58 = t;
                      t = not_null(e_58);
                      return(t);
                    }
                    t = not_null(a_58);
                    t = eval_config_0_0(t);
                    if(((e_58 != NULL) && (e_58 != t)))
                      _fail(t);
                    else
                      e_58 = t;
                    t = j_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_58), not_null(d_58));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((u_57 != NULL) && (u_57 != t)))
                _fail(t);
              else
                u_57 = t;
              t = not_null(u_57);
              if(match_cons(t, sym_Path_1))
                {
                  v_57 = ATgetArgument(t, 0);
                  t = f_58(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_57 = ATgetArgument(t, 0);
                      t = g_58(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_57 = ATgetArgument(t, 0);
                          w_57 = ATgetArgument(t, 1);
                          t = h_58(t);
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
  ATerm m_58 = NULL;
  ATerm q_58 (ATerm t)
  {
    ATerm n_58 = NULL;
    t = not_null(m_58);
    if(((n_58 != NULL) && (n_58 != t)))
      _fail(t);
    else
      n_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(n_58));
    t = table_get_0_0(t);
    {
      ATerm y_1 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm q_9;
          q_9 = t;
          {
            ATerm o_58 = NULL;
            ATerm p_58 = NULL;
            ATerm r_58 (ATerm t)
            {
              t = not_null(p_58);
              if(((o_58 != NULL) && (o_58 != t)))
                _fail(t);
              else
                o_58 = t;
              t = not_null(p_58);
              return(t);
            }
            if(((p_58 != NULL) && (p_58 != t)))
              _fail(t);
            else
              p_58 = t;
            t = r_58(t);
            t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(n_58), not_null(o_58));
            t = table_put_0_0(t);
          }
          t = q_9;
        }
        return(t);
      }
      t = try_1_0(y_1, t);
    }
    return(t);
  }
  if(((m_58 != NULL) && (m_58 != t)))
    _fail(t);
  else
    m_58 = t;
  t = q_58(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm r_9;
    r_9 = t;
    {
      ATerm t_58 = NULL;
      ATerm u_58 = NULL;
      ATerm v_58 (ATerm t)
      {
        t = not_null(u_58);
        if(((t_58 != NULL) && (t_58 != t)))
          _fail(t);
        else
          t_58 = t;
        t = not_null(u_58);
        return(t);
      }
      t = term_s_9;
      t = get_config_0_0(t);
      if(((u_58 != NULL) && (u_58 != t)))
        _fail(t);
      else
        u_58 = t;
      t = v_58(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_58), term_t_9);
      t = geq_0_0(t);
    }
    t = r_9;
    t = f_97(t);
    return(t);
  }
  t = try_1_0(z_1, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  ATerm i_59 (ATerm t)
  {
    ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
    t = not_null(b_59);
    if(((e_59 != NULL) && (e_59 != t)))
      _fail(t);
    else
      e_59 = t;
    t = not_null(d_59);
    if(((f_59 != NULL) && (f_59 != t)))
      _fail(t);
    else
      f_59 = t;
    t = not_null(a_59);
    t = SSL_fputc(not_null(e_59), not_null(f_59));
    {
      ATerm h_59 = NULL;
      ATerm j_59 (ATerm t)
      {
        t = not_null(h_59);
        if(((g_59 != NULL) && (g_59 != t)))
          _fail(t);
        else
          g_59 = t;
        t = not_null(h_59);
        return(t);
      }
      if(((h_59 != NULL) && (h_59 != t)))
        _fail(t);
      else
        h_59 = t;
      t = j_59(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_59));
    }
    return(t);
  }
  if(((a_59 != NULL) && (a_59 != t)))
    _fail(t);
  else
    a_59 = t;
  t = not_null(a_59);
  if(match_cons(t, sym__2))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
      t = not_null(c_59);
      if(match_cons(t, sym_Stream_1))
        {
          d_59 = ATgetArgument(t, 0);
          t = i_59(t);
        }
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
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  ATerm w_59 (ATerm t)
  {
    ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
    t = not_null(q_59);
    if(((s_59 != NULL) && (s_59 != t)))
      _fail(t);
    else
      s_59 = t;
    t = not_null(r_59);
    if(((t_59 != NULL) && (t_59 != t)))
      _fail(t);
    else
      t_59 = t;
    t = not_null(o_59);
    t = SSL_write_term_to_stream_text(not_null(s_59), not_null(t_59));
    {
      ATerm v_59 = NULL;
      ATerm x_59 (ATerm t)
      {
        t = not_null(v_59);
        if(((u_59 != NULL) && (u_59 != t)))
          _fail(t);
        else
          u_59 = t;
        t = not_null(v_59);
        return(t);
      }
      if(((v_59 != NULL) && (v_59 != t)))
        _fail(t);
      else
        v_59 = t;
      t = x_59(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_59));
    }
    return(t);
  }
  if(((o_59 != NULL) && (o_59 != t)))
    _fail(t);
  else
    o_59 = t;
  t = not_null(o_59);
  if(match_cons(t, sym__2))
    {
      p_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
      t = not_null(p_59);
      if(match_cons(t, sym_Stream_1))
        {
          q_59 = ATgetArgument(t, 0);
          t = w_59(t);
        }
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
  ATerm a_2 (ATerm t)
  {
    ATerm z_59 = NULL;
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm a_60 = NULL;
      ATerm b_60 (ATerm t)
      {
        t = not_null(a_60);
        if(((z_59 != NULL) && (z_59 != t)))
          _fail(t);
        else
          z_59 = t;
        t = not_null(a_60);
        return(t);
      }
      if(((a_60 != NULL) && (a_60 != t)))
        _fail(t);
      else
        a_60 = t;
      t = b_60(t);
      t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(z_59));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(a_2, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  ATerm o_60 (ATerm t)
  {
    ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
    t = not_null(i_60);
    if(((k_60 != NULL) && (k_60 != t)))
      _fail(t);
    else
      k_60 = t;
    t = not_null(j_60);
    if(((l_60 != NULL) && (l_60 != t)))
      _fail(t);
    else
      l_60 = t;
    t = not_null(g_60);
    t = SSL_write_term_to_stream_baf(not_null(k_60), not_null(l_60));
    {
      ATerm n_60 = NULL;
      ATerm p_60 (ATerm t)
      {
        t = not_null(n_60);
        if(((m_60 != NULL) && (m_60 != t)))
          _fail(t);
        else
          m_60 = t;
        t = not_null(n_60);
        return(t);
      }
      if(((n_60 != NULL) && (n_60 != t)))
        _fail(t);
      else
        n_60 = t;
      t = p_60(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_60));
    }
    return(t);
  }
  if(((g_60 != NULL) && (g_60 != t)))
    _fail(t);
  else
    g_60 = t;
  t = not_null(g_60);
  if(match_cons(t, sym__2))
    {
      h_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
      t = not_null(h_60);
      if(match_cons(t, sym_Stream_1))
        {
          i_60 = ATgetArgument(t, 0);
          t = o_60(t);
        }
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
ATerm WriteToFile_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
  ATerm f_61 (ATerm t)
  {
    ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,d_61 = NULL;
    t = not_null(x_60);
    if(((z_60 != NULL) && (z_60 != t)))
      _fail(t);
    else
      z_60 = t;
    t = not_null(y_60);
    if(((a_61 != NULL) && (a_61 != t)))
      _fail(t);
    else
      a_61 = t;
    t = not_null(z_60);
    {
      ATerm c_61 = NULL;
      ATerm g_61 (ATerm t)
      {
        t = not_null(c_61);
        if(((b_61 != NULL) && (b_61 != t)))
          _fail(t);
        else
          b_61 = t;
        t = not_null(c_61);
        return(t);
      }
      if(((c_61 != NULL) && (c_61 != t)))
        _fail(t);
      else
        c_61 = t;
      t = g_61(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_61), term_v_9);
      t = open_stream_0_0(t);
      {
        ATerm e_61 = NULL;
        ATerm h_61 (ATerm t)
        {
          t = not_null(e_61);
          if(((d_61 != NULL) && (d_61 != t)))
            _fail(t);
          else
            d_61 = t;
          t = not_null(e_61);
          return(t);
        }
        if(((e_61 != NULL) && (e_61 != t)))
          _fail(t);
        else
          e_61 = t;
        t = h_61(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_61), not_null(a_61));
        t = b_96(t);
        t = fclose_0_0(t);
        t = not_null(a_61);
      }
    }
    return(t);
  }
  if(((w_60 != NULL) && (w_60 != t)))
    _fail(t);
  else
    w_60 = t;
  t = not_null(w_60);
  if(match_cons(t, sym__2))
    {
      x_60 = ATgetArgument(t, 0);
      y_60 = ATgetArgument(t, 1);
      t = f_61(t);
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
  ATerm m_61 = NULL;
  ATerm w_9;
  w_9 = t;
  {
    ATerm b_2 (ATerm t)
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_2 (ATerm t)
          {
            ATerm n_61 = NULL,o_61 = NULL;
            ATerm r_61 (ATerm t)
            {
              t = not_null(o_61);
              if(((m_61 != NULL) && (m_61 != t)))
                _fail(t);
              else
                m_61 = t;
              t = not_null(n_61);
              return(t);
            }
            if(((n_61 != NULL) && (n_61 != t)))
              _fail(t);
            else
              n_61 = t;
            t = not_null(n_61);
            if(match_cons(t, sym_Output_1))
              {
                o_61 = ATgetArgument(t, 0);
                t = r_61(t);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1_0(c_2, t);
          ;
          LocalPopChoice(y_9);
        }
      else
        {
          t = x_9;
          {
            ATerm p_61 = NULL;
            ATerm s_61 (ATerm t)
            {
              t = not_null(p_61);
              if(((m_61 != NULL) && (m_61 != t)))
                _fail(t);
              else
                m_61 = t;
              t = not_null(p_61);
              return(t);
            }
            t = term_z_9;
            if(((p_61 != NULL) && (p_61 != t)))
              _fail(t);
            else
              p_61 = t;
            t = s_61(t);
          }
        }
      return(t);
    }
    t = _2_0(b_2, _id, t);
  }
  t = w_9;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm e_2 (ATerm t)
      {
        t = not_null(m_61);
        return(t);
      }
      t = split_2_0(e_2, _id, t);
      return(t);
    }
    t = _2_0(_id, d_2, t);
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_2 (ATerm t)
          {
            ATerm g_2 (ATerm t)
            {
              ATerm q_61 = NULL;
              if(((q_61 != NULL) && (q_61 != t)))
                _fail(t);
              else
                q_61 = t;
              t = not_null(q_61);
              if(match_cons(t, sym_Binary_0))
                {
                  t = not_null(q_61);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1_0(g_2, t);
            return(t);
          }
          t = _2_0(f_2, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
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
ATerm apply_strategy_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,y_61 = NULL,z_61 = NULL,e_62 = NULL;
  ATerm j_62 (ATerm t)
  {
    ATerm f_62 = NULL,h_62 = NULL;
    t = not_null(z_61);
    if(((f_62 != NULL) && (f_62 != t)))
      _fail(t);
    else
      f_62 = t;
    t = not_null(e_62);
    if(((h_62 != NULL) && (h_62 != t)))
      _fail(t);
    else
      h_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_62)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_61))), not_null(h_62));
    return(t);
  }
  ATerm c_10;
  c_10 = t;
  t = dtime_0_0(t);
  t = c_10;
  t = d_99(t);
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm x_61 = NULL;
      ATerm i_62 (ATerm t)
      {
        t = not_null(x_61);
        if(((w_61 != NULL) && (w_61 != t)))
          _fail(t);
        else
          w_61 = t;
        t = not_null(x_61);
        return(t);
      }
      t = dtime_0_0(t);
      if(((x_61 != NULL) && (x_61 != t)))
        _fail(t);
      else
        x_61 = t;
      t = i_62(t);
    }
    t = d_10;
    if(((y_61 != NULL) && (y_61 != t)))
      _fail(t);
    else
      y_61 = t;
    t = not_null(y_61);
    if(match_cons(t, sym__2))
      {
        z_61 = ATgetArgument(t, 0);
        e_62 = ATgetArgument(t, 1);
        t = j_62(t);
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
  ATerm o_62 = NULL,p_62 = NULL;
  ATerm x_62 (ATerm t)
  {
    ATerm q_62 = NULL;
    t = not_null(o_62);
    if(((q_62 != NULL) && (q_62 != t)))
      _fail(t);
    else
      q_62 = t;
    t = not_null(p_62);
    t = SSL_fclose(not_null(q_62));
    return(t);
  }
  ATerm y_62 (ATerm t)
  {
    ATerm w_62 = NULL;
    t = not_null(p_62);
    if(((w_62 != NULL) && (w_62 != t)))
      _fail(t);
    else
      w_62 = t;
    t = not_null(p_62);
    t = SSL_fclose(not_null(w_62));
    return(t);
  }
  if(((p_62 != NULL) && (p_62 != t)))
    _fail(t);
  else
    p_62 = t;
  t = not_null(p_62);
  if(match_cons(t, sym_Stream_1))
    {
      o_62 = ATgetArgument(t, 0);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_62(t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
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
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  ATerm e_63 (ATerm t)
  {
    ATerm d_63 = NULL;
    t = not_null(c_63);
    if(((d_63 != NULL) && (d_63 != t)))
      _fail(t);
    else
      d_63 = t;
    t = not_null(b_63);
    t = SSL_read_term_from_stream(not_null(d_63));
    return(t);
  }
  if(((b_63 != NULL) && (b_63 != t)))
    _fail(t);
  else
    b_63 = t;
  t = not_null(b_63);
  if(match_cons(t, sym_Stream_1))
    {
      c_63 = ATgetArgument(t, 0);
      t = e_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm g_10;
  g_10 = t;
  {
    ATerm h_63 = NULL,j_63 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm i_63 = NULL;
      ATerm n_63 (ATerm t)
      {
        t = not_null(i_63);
        if(((h_63 != NULL) && (h_63 != t)))
          _fail(t);
        else
          h_63 = t;
        t = not_null(i_63);
        return(t);
      }
      t = n_95(t);
      if(((i_63 != NULL) && (i_63 != t)))
        _fail(t);
      else
        i_63 = t;
      t = n_63(t);
    }
    t = h_10;
    {
      ATerm k_63 = NULL;
      ATerm o_63 (ATerm t)
      {
        t = not_null(k_63);
        if(((j_63 != NULL) && (j_63 != t)))
          _fail(t);
        else
          j_63 = t;
        t = not_null(k_63);
        return(t);
      }
      if(((k_63 != NULL) && (k_63 != t)))
        _fail(t);
      else
        k_63 = t;
      t = o_63(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_63)), not_null(h_63)));
      t = printnl_0_0(t);
    }
  }
  t = g_10;
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  ATerm z_63 (ATerm t)
  {
    ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
    t = not_null(t_63);
    if(((v_63 != NULL) && (v_63 != t)))
      _fail(t);
    else
      v_63 = t;
    t = not_null(u_63);
    if(((w_63 != NULL) && (w_63 != t)))
      _fail(t);
    else
      w_63 = t;
    t = not_null(s_63);
    t = SSL_fopen(not_null(v_63), not_null(w_63));
    {
      ATerm y_63 = NULL;
      ATerm a_64 (ATerm t)
      {
        t = not_null(y_63);
        if(((x_63 != NULL) && (x_63 != t)))
          _fail(t);
        else
          x_63 = t;
        t = not_null(y_63);
        return(t);
      }
      if(((y_63 != NULL) && (y_63 != t)))
        _fail(t);
      else
        y_63 = t;
      t = a_64(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_63));
    }
    return(t);
  }
  if(((s_63 != NULL) && (s_63 != t)))
    _fail(t);
  else
    s_63 = t;
  t = not_null(s_63);
  if(match_cons(t, sym__2))
    {
      t_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
      t = z_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm d_64 = NULL;
  ATerm f_64 (ATerm t)
  {
    ATerm e_64 = NULL;
    t = not_null(d_64);
    if(((e_64 != NULL) && (e_64 != t)))
      _fail(t);
    else
      e_64 = t;
    t = not_null(d_64);
    t = SSL_is_string(not_null(e_64));
    return(t);
  }
  if(((d_64 != NULL) && (d_64 != t)))
    _fail(t);
  else
    d_64 = t;
  t = f_64(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_64 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_64 = NULL;
    ATerm j_64 (ATerm t)
    {
      t = not_null(i_64);
      if(((h_64 != NULL) && (h_64 != t)))
        _fail(t);
      else
        h_64 = t;
      t = not_null(i_64);
      return(t);
    }
    if(((i_64 != NULL) && (i_64 != t)))
      _fail(t);
    else
      i_64 = t;
    t = j_64(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_64));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_64 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_64 = NULL;
    ATerm n_64 (ATerm t)
    {
      t = not_null(m_64);
      if(((l_64 != NULL) && (l_64 != t)))
        _fail(t);
      else
        l_64 = t;
      t = not_null(m_64);
      return(t);
    }
    if(((m_64 != NULL) && (m_64 != t)))
      _fail(t);
    else
      m_64 = t;
    t = n_64(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_64));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_64 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm q_64 = NULL;
    ATerm r_64 (ATerm t)
    {
      t = not_null(q_64);
      if(((p_64 != NULL) && (p_64 != t)))
        _fail(t);
      else
        p_64 = t;
      t = not_null(q_64);
      return(t);
    }
    if(((q_64 != NULL) && (q_64 != t)))
      _fail(t);
    else
      q_64 = t;
    t = r_64(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_64));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm w_64 = NULL;
  ATerm x_64 (ATerm t)
  {
    t = not_null(w_64);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm y_64 (ATerm t)
  {
    t = not_null(w_64);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm z_64 (ATerm t)
  {
    t = not_null(w_64);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((w_64 != NULL) && (w_64 != t)))
    _fail(t);
  else
    w_64 = t;
  t = not_null(w_64);
  if(match_cons(t, sym_stderr_0))
    {
      t = x_64(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_64(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = z_64(t);
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
  ATerm g_65 = NULL;
  ATerm r_65 (ATerm t)
  {
    ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
    t = not_null(g_65);
    if(((h_65 != NULL) && (h_65 != t)))
      _fail(t);
    else
      h_65 = t;
    t = not_null(g_65);
    {
      ATerm k_65 = NULL;
      ATerm s_65 (ATerm t)
      {
        ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
        ATerm t_65 (ATerm t)
        {
          t = not_null(p_65);
          if(((j_65 != NULL) && (j_65 != t)))
            _fail(t);
          else
            j_65 = t;
          t = not_null(q_65);
          if(((i_65 != NULL) && (i_65 != t)))
            _fail(t);
          else
            i_65 = t;
          t = not_null(m_65);
          return(t);
        }
        t = not_null(k_65);
        if(((l_65 != NULL) && (l_65 != t)))
          _fail(t);
        else
          l_65 = t;
        t = not_null(k_65);
        t = SSL_explode_term(not_null(l_65));
        if(((m_65 != NULL) && (m_65 != t)))
          _fail(t);
        else
          m_65 = t;
        t = not_null(m_65);
        if(match_cons(t, sym__2))
          {
            n_65 = ATgetArgument(t, 0);
            o_65 = ATgetArgument(t, 1);
            t = not_null(n_65);
            if(match_string(t, ""))
              {
                t = not_null(o_65);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_65 = ATgetFirst((ATermList) t);
                    q_65 = (ATerm) ATgetNext((ATermList) t);
                    t = t_65(t);
                  }
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
      t = not_null(h_65);
      if(((k_65 != NULL) && (k_65 != t)))
        _fail(t);
      else
        k_65 = t;
      t = s_65(t);
      t = not_null(j_65);
    }
    return(t);
  }
  if(((g_65 != NULL) && (g_65 != t)))
    _fail(t);
  else
    g_65 = t;
  t = r_65(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  ATerm g_66 (ATerm t)
  {
    t = not_null(y_65);
    {
      ATerm i_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
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
                ATerm h_2 (ATerm t)
                {
                  ATerm b_66 = NULL,c_66 = NULL;
                  ATerm j_66 (ATerm t)
                  {
                    ATerm f_66 = NULL;
                    t = not_null(c_66);
                    if(((f_66 != NULL) && (f_66 != t)))
                      _fail(t);
                    else
                      f_66 = t;
                    t = not_null(f_66);
                    return(t);
                  }
                  if(((b_66 != NULL) && (b_66 != t)))
                    _fail(t);
                  else
                    b_66 = t;
                  t = not_null(b_66);
                  if(match_cons(t, sym_Path_1))
                    {
                      c_66 = ATgetArgument(t, 0);
                      t = j_66(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(h_2, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(l_10);
              }
            else
              {
                t = k_10;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((y_65 != NULL) && (y_65 != t)))
    _fail(t);
  else
    y_65 = t;
  t = not_null(y_65);
  if(match_cons(t, sym__2))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
      t = g_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_66 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL;
      ATerm n_66 = NULL;
      ATerm y_66 (ATerm t)
      {
        t = not_null(n_66);
        if(((m_66 != NULL) && (m_66 != t)))
          _fail(t);
        else
          m_66 = t;
        t = not_null(n_66);
        return(t);
      }
      if(((n_66 != NULL) && (n_66 != t)))
        _fail(t);
      else
        n_66 = t;
      t = y_66(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_66), term_o_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_p_10;
          return(t);
        }
        t = debug_1_0(i_2, t);
        _fail(t);
      }
    }
  {
    ATerm q_10;
    q_10 = t;
    {
      ATerm s_66 = NULL;
      ATerm b_67 (ATerm t)
      {
        t = not_null(s_66);
        if(((r_66 != NULL) && (r_66 != t)))
          _fail(t);
        else
          r_66 = t;
        t = not_null(s_66);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((s_66 != NULL) && (s_66 != t)))
        _fail(t);
      else
        s_66 = t;
      t = b_67(t);
    }
    t = q_10;
    t = fclose_0_0(t);
    t = not_null(r_66);
  }
  return(t);
}
ATerm split_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm s_67 = NULL,u_67 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm t_67 = NULL;
    ATerm e_68 (ATerm t)
    {
      t = not_null(t_67);
      if(((s_67 != NULL) && (s_67 != t)))
        _fail(t);
      else
        s_67 = t;
      t = not_null(t_67);
      return(t);
    }
    t = f_91(t);
    if(((t_67 != NULL) && (t_67 != t)))
      _fail(t);
    else
      t_67 = t;
    t = e_68(t);
  }
  t = r_10;
  {
    ATerm a_68 = NULL;
    ATerm f_68 (ATerm t)
    {
      t = not_null(a_68);
      if(((u_67 != NULL) && (u_67 != t)))
        _fail(t);
      else
        u_67 = t;
      t = not_null(a_68);
      return(t);
    }
    t = g_91(t);
    if(((a_68 != NULL) && (a_68 != t)))
      _fail(t);
    else
      a_68 = t;
    t = f_68(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_67), not_null(u_67));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm j_68 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_68 = NULL,l_68 = NULL;
          ATerm n_68 (ATerm t)
          {
            t = not_null(l_68);
            if(((j_68 != NULL) && (j_68 != t)))
              _fail(t);
            else
              j_68 = t;
            t = not_null(k_68);
            return(t);
          }
          if(((k_68 != NULL) && (k_68 != t)))
            _fail(t);
          else
            k_68 = t;
          t = not_null(k_68);
          if(match_cons(t, sym_Input_1))
            {
              l_68 = ATgetArgument(t, 0);
              t = n_68(t);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1_0(j_2, t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm m_68 = NULL;
          ATerm o_68 (ATerm t)
          {
            t = not_null(m_68);
            if(((j_68 != NULL) && (j_68 != t)))
              _fail(t);
            else
              j_68 = t;
            t = not_null(m_68);
            return(t);
          }
          t = term_v_10;
          if(((m_68 != NULL) && (m_68 != t)))
            _fail(t);
          else
            m_68 = t;
          t = o_68(t);
        }
      }
  }
  t = s_10;
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(j_68);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, k_2, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm r_68 = NULL;
    if(((r_68 != NULL) && (r_68 != t)))
      _fail(t);
    else
      r_68 = t;
    t = not_null(r_68);
    if(match_string(t, "-k"))
      {
        t = not_null(r_68);
      }
    else
      {
        if(match_string(t, "--keep"))
          {
            t = not_null(r_68);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm w_10;
    w_10 = t;
    {
      ATerm s_68 = NULL;
      ATerm t_68 = NULL;
      ATerm u_68 (ATerm t)
      {
        t = not_null(t_68);
        if(((s_68 != NULL) && (s_68 != t)))
          _fail(t);
        else
          s_68 = t;
        t = not_null(t_68);
        return(t);
      }
      t = string_to_int_0_0(t);
      if(((t_68 != NULL) && (t_68 != t)))
        _fail(t);
      else
        t_68 = t;
      t = u_68(t);
      t = (ATerm) ATmakeAppl(sym__2, term_x_10, not_null(s_68));
      t = set_config_0_0(t);
    }
    t = w_10;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm w_68 = NULL;
  ATerm y_68 (ATerm t)
  {
    ATerm x_68 = NULL;
    t = not_null(w_68);
    if(((x_68 != NULL) && (x_68 != t)))
      _fail(t);
    else
      x_68 = t;
    t = not_null(w_68);
    t = SSL_string_to_int(not_null(x_68));
    return(t);
  }
  if(((w_68 != NULL) && (w_68 != t)))
    _fail(t);
  else
    w_68 = t;
  t = y_68(t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm n_69 = NULL;
        if(((n_69 != NULL) && (n_69 != t)))
          _fail(t);
        else
          n_69 = t;
        t = not_null(n_69);
        if(match_string(t, "-S"))
          {
            t = not_null(n_69);
          }
        else
          {
            if(match_string(t, "--silent"))
              {
                t = not_null(n_69);
              }
            else
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_c_11;
        t = set_config_0_0(t);
        t = term_d_11;
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_e_11;
        return(t);
      }
      t = Option_3_0(o_2, p_2, q_2, t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm o_69 = NULL;
              if(((o_69 != NULL) && (o_69 != t)))
                _fail(t);
              else
                o_69 = t;
              t = not_null(o_69);
              if(match_string(t, "--verbose"))
                {
                  t = not_null(o_69);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              ATerm r_69 = NULL;
              ATerm h_11;
              h_11 = t;
              {
                ATerm p_69 = NULL;
                ATerm q_69 = NULL;
                ATerm u_69 (ATerm t)
                {
                  t = not_null(q_69);
                  if(((p_69 != NULL) && (p_69 != t)))
                    _fail(t);
                  else
                    p_69 = t;
                  t = not_null(q_69);
                  return(t);
                }
                t = string_to_int_0_0(t);
                if(((q_69 != NULL) && (q_69 != t)))
                  _fail(t);
                else
                  q_69 = t;
                t = u_69(t);
                t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(p_69));
                t = set_config_0_0(t);
              }
              t = h_11;
              {
                ATerm s_69 = NULL;
                ATerm v_69 (ATerm t)
                {
                  t = not_null(s_69);
                  if(((r_69 != NULL) && (r_69 != t)))
                    _fail(t);
                  else
                    r_69 = t;
                  t = not_null(s_69);
                  return(t);
                }
                if(((s_69 != NULL) && (s_69 != t)))
                  _fail(t);
                else
                  s_69 = t;
                t = v_69(t);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_69));
              }
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm t_69 = NULL;
                if(((t_69 != NULL) && (t_69 != t)))
                  _fail(t);
                else
                  t_69 = t;
                t = not_null(t_69);
                if(match_string(t, "-s"))
                  {
                    t = not_null(t_69);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = term_k_11;
                t = set_config_0_0(t);
                t = term_l_11;
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_m_11;
                return(t);
              }
              t = Option_3_0(u_2, v_2, w_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm c_70 = NULL;
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = not_null(c_70);
    if(match_string(t, "-o"))
      {
        t = not_null(c_70);
      }
    else
      {
        if(match_string(t, "--output"))
          {
            t = not_null(c_70);
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
    ATerm f_70 = NULL;
    ATerm p_11;
    p_11 = t;
    {
      ATerm d_70 = NULL;
      ATerm e_70 = NULL;
      ATerm h_70 (ATerm t)
      {
        t = not_null(e_70);
        if(((d_70 != NULL) && (d_70 != t)))
          _fail(t);
        else
          d_70 = t;
        t = not_null(e_70);
        return(t);
      }
      if(((e_70 != NULL) && (e_70 != t)))
        _fail(t);
      else
        e_70 = t;
      t = h_70(t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(d_70));
      t = set_config_0_0(t);
    }
    t = p_11;
    {
      ATerm g_70 = NULL;
      ATerm i_70 (ATerm t)
      {
        t = not_null(g_70);
        if(((f_70 != NULL) && (f_70 != t)))
          _fail(t);
        else
          f_70 = t;
        t = not_null(g_70);
        return(t);
      }
      if(((g_70 != NULL) && (g_70 != t)))
        _fail(t);
      else
        g_70 = t;
      t = i_70(t);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_70));
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm k_70 = NULL;
          if(((k_70 != NULL) && (k_70 != t)))
            _fail(t);
          else
            k_70 = t;
          t = not_null(k_70);
          if(match_string(t, "-b"))
            {
              t = not_null(k_70);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = term_v_11;
          t = set_config_0_0(t);
          t = term_w_11;
          return(t);
        }
        ATerm c_3 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = Option_3_0(a_3, b_3, c_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  ATerm a_71 (ATerm t)
  {
    t = not_null(q_70);
    t = register_usage_1_0(k_0, t);
    return(t);
  }
  ATerm b_71 (ATerm t)
  {
    ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
    t = not_null(r_70);
    if(((v_70 != NULL) && (v_70 != t)))
      _fail(t);
    else
      v_70 = t;
    t = not_null(t_70);
    if(((w_70 != NULL) && (w_70 != t)))
      _fail(t);
    else
      w_70 = t;
    t = not_null(u_70);
    if(((x_70 != NULL) && (x_70 != t)))
      _fail(t);
    else
      x_70 = t;
    t = not_null(q_70);
    {
      ATerm y_11;
      y_11 = t;
      t = not_null(v_70);
      t = h_0(t);
      t = y_11;
      {
        ATerm z_70 = NULL;
        ATerm c_71 (ATerm t)
        {
          t = not_null(z_70);
          if(((y_70 != NULL) && (y_70 != t)))
            _fail(t);
          else
            y_70 = t;
          t = not_null(z_70);
          return(t);
        }
        t = not_null(w_70);
        t = i_0(t);
        if(((z_70 != NULL) && (z_70 != t)))
          _fail(t);
        else
          z_70 = t;
        t = c_71(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(x_70)), not_null(y_70));
      }
    }
    return(t);
  }
  if(((q_70 != NULL) && (q_70 != t)))
    _fail(t);
  else
    q_70 = t;
  t = not_null(q_70);
  if(match_string(t, "register-usage-info"))
    {
      t = a_71(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_70 = ATgetFirst((ATermList) t);
          s_70 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(s_70);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_70 = ATgetFirst((ATermList) t);
              u_70 = (ATerm) ATgetNext((ATermList) t);
              t = b_71(t);
            }
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
  ATerm d_3 (ATerm t)
  {
    ATerm g_71 = NULL;
    if(((g_71 != NULL) && (g_71 != t)))
      _fail(t);
    else
      g_71 = t;
    t = not_null(g_71);
    if(match_string(t, "-i"))
      {
        t = not_null(g_71);
      }
    else
      {
        if(match_string(t, "--input"))
          {
            t = not_null(g_71);
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm j_71 = NULL;
    ATerm z_11;
    z_11 = t;
    {
      ATerm h_71 = NULL;
      ATerm i_71 = NULL;
      ATerm l_71 (ATerm t)
      {
        t = not_null(i_71);
        if(((h_71 != NULL) && (h_71 != t)))
          _fail(t);
        else
          h_71 = t;
        t = not_null(i_71);
        return(t);
      }
      if(((i_71 != NULL) && (i_71 != t)))
        _fail(t);
      else
        i_71 = t;
      t = l_71(t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(h_71));
      t = set_config_0_0(t);
    }
    t = z_11;
    {
      ATerm k_71 = NULL;
      ATerm m_71 (ATerm t)
      {
        t = not_null(k_71);
        if(((j_71 != NULL) && (j_71 != t)))
          _fail(t);
        else
          j_71 = t;
        t = not_null(k_71);
        return(t);
      }
      if(((k_71 != NULL) && (k_71 != t)))
        _fail(t);
      else
        k_71 = t;
      t = m_71(t);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_71));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_71 = NULL;
  t = report_run_time_0_0(t);
  {
    ATerm p_71 = NULL;
    ATerm q_71 (ATerm t)
    {
      t = not_null(p_71);
      if(((o_71 != NULL) && (o_71 != t)))
        _fail(t);
      else
        o_71 = t;
      t = not_null(p_71);
      return(t);
    }
    t = term_v_8;
    t = whoami_0_0(t);
    if(((p_71 != NULL) && (p_71 != t)))
      _fail(t);
    else
      p_71 = t;
    t = q_71(t);
    t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, term_g_12), not_null(o_71)));
    t = printnl_0_0(t);
    t = term_z_8;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm s_71 = NULL;
  ATerm u_71 (ATerm t)
  {
    ATerm t_71 = NULL;
    t = not_null(s_71);
    if(((t_71 != NULL) && (t_71 != t)))
      _fail(t);
    else
      t_71 = t;
    t = not_null(s_71);
    t = SSL_TicksToSeconds(not_null(t_71));
    return(t);
  }
  if(((s_71 != NULL) && (s_71 != t)))
    _fail(t);
  else
    s_71 = t;
  t = u_71(t);
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  ATerm c_72 (ATerm t)
  {
    ATerm a_72 = NULL,b_72 = NULL;
    t = not_null(y_71);
    if(((a_72 != NULL) && (a_72 != t)))
      _fail(t);
    else
      a_72 = t;
    t = not_null(z_71);
    if(((b_72 != NULL) && (b_72 != t)))
      _fail(t);
    else
      b_72 = t;
    t = not_null(x_71);
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(a_72), not_null(b_72));
          ;
          LocalPopChoice(j_12);
        }
      else
        {
          t = i_12;
          t = SSL_addr(not_null(a_72), not_null(b_72));
        }
    }
    return(t);
  }
  if(((x_71 != NULL) && (x_71 != t)))
    _fail(t);
  else
    x_71 = t;
  t = not_null(x_71);
  if(match_cons(t, sym__2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
      t = c_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_89(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
        ATerm n_72 (ATerm t)
        {
          ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
          t = not_null(h_72);
          if(((j_72 != NULL) && (j_72 != t)))
            _fail(t);
          else
            j_72 = t;
          t = not_null(i_72);
          if(((k_72 != NULL) && (k_72 != t)))
            _fail(t);
          else
            k_72 = t;
          t = not_null(g_72);
          {
            ATerm m_72 = NULL;
            ATerm o_72 (ATerm t)
            {
              t = not_null(m_72);
              if(((l_72 != NULL) && (l_72 != t)))
                _fail(t);
              else
                l_72 = t;
              t = not_null(m_72);
              return(t);
            }
            t = not_null(k_72);
            t = foldr_2_0(q_89, r_89, t);
            if(((m_72 != NULL) && (m_72 != t)))
              _fail(t);
            else
              m_72 = t;
            t = o_72(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), not_null(l_72));
            t = r_89(t);
          }
          return(t);
        }
        if(((g_72 != NULL) && (g_72 != t)))
          _fail(t);
        else
          g_72 = t;
        t = not_null(g_72);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_72 = ATgetFirst((ATermList) t);
            i_72 = (ATerm) ATgetNext((ATermList) t);
            t = n_72(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t)
{
  ATerm t_72 = NULL;
  ATerm b_73 (ATerm t)
  {
    ATerm u_72 = NULL,v_72 = NULL;
    t = not_null(t_72);
    if(((u_72 != NULL) && (u_72 != t)))
      _fail(t);
    else
      u_72 = t;
    t = not_null(t_72);
    {
      ATerm w_72 = NULL;
      ATerm c_73 (ATerm t)
      {
        ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
        ATerm d_73 (ATerm t)
        {
          t = not_null(a_73);
          if(((v_72 != NULL) && (v_72 != t)))
            _fail(t);
          else
            v_72 = t;
          t = not_null(y_72);
          return(t);
        }
        t = not_null(w_72);
        if(((x_72 != NULL) && (x_72 != t)))
          _fail(t);
        else
          x_72 = t;
        t = not_null(w_72);
        t = SSL_explode_term(not_null(x_72));
        if(((y_72 != NULL) && (y_72 != t)))
          _fail(t);
        else
          y_72 = t;
        t = not_null(y_72);
        if(match_cons(t, sym__2))
          {
            z_72 = ATgetArgument(t, 0);
            a_73 = ATgetArgument(t, 1);
            t = d_73(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(u_72);
      if(((w_72 != NULL) && (w_72 != t)))
        _fail(t);
      else
        w_72 = t;
      t = c_73(t);
      t = not_null(v_72);
      t = foldr_2_0(j_93, k_93, t);
    }
    return(t);
  }
  if(((t_72 != NULL) && (t_72 != t)))
    _fail(t);
  else
    t_72 = t;
  t = b_73(t);
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
    ATerm g_3 (ATerm t)
    {
      t = term_b_11;
      return(t);
    }
    t = crush_2_0(g_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL;
  ATerm l_73 (ATerm t)
  {
    ATerm j_73 = NULL,k_73 = NULL;
    t = not_null(h_73);
    if(((j_73 != NULL) && (j_73 != t)))
      _fail(t);
    else
      j_73 = t;
    t = not_null(i_73);
    if(((k_73 != NULL) && (k_73 != t)))
      _fail(t);
    else
      k_73 = t;
    t = not_null(g_73);
    {
      ATerm m_12;
      m_12 = t;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(j_73), not_null(k_73));
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = SSL_gtr(not_null(j_73), not_null(k_73));
          }
      }
      t = m_12;
    }
    return(t);
  }
  if(((g_73 != NULL) && (g_73 != t)))
    _fail(t);
  else
    g_73 = t;
  t = not_null(g_73);
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
      t = l_73(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_73 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
      ATerm s_73 (ATerm t)
      {
        t = not_null(q_73);
        if(((o_73 != NULL) && (o_73 != t)))
          _fail(t);
        else
          o_73 = t;
        t = not_null(r_73);
        if(((o_73 != NULL) && (o_73 != t)))
          _fail(t);
        else
          o_73 = t;
        t = not_null(p_73);
        return(t);
      }
      if(((p_73 != NULL) && (p_73 != t)))
        _fail(t);
      else
        p_73 = t;
      t = not_null(p_73);
      if(match_cons(t, sym__2))
        {
          q_73 = ATgetArgument(t, 0);
          r_73 = ATgetArgument(t, 1);
          t = s_73(t);
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
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm t_12;
    t_12 = t;
    {
      ATerm u_73 = NULL;
      ATerm v_73 = NULL;
      ATerm w_73 (ATerm t)
      {
        t = not_null(v_73);
        if(((u_73 != NULL) && (u_73 != t)))
          _fail(t);
        else
          u_73 = t;
        t = not_null(v_73);
        return(t);
      }
      t = term_s_9;
      t = get_config_0_0(t);
      if(((v_73 != NULL) && (v_73 != t)))
        _fail(t);
      else
        v_73 = t;
      t = w_73(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), term_z_8);
      t = geq_0_0(t);
    }
    t = t_12;
    t = e_97(t);
    return(t);
  }
  t = try_1_0(h_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    ATerm z_73 = NULL,b_74 = NULL;
    ATerm u_12;
    u_12 = t;
    {
      ATerm a_74 = NULL;
      ATerm d_74 (ATerm t)
      {
        t = not_null(a_74);
        if(((z_73 != NULL) && (z_73 != t)))
          _fail(t);
        else
          z_73 = t;
        t = not_null(a_74);
        return(t);
      }
      t = run_time_0_0(t);
      if(((a_74 != NULL) && (a_74 != t)))
        _fail(t);
      else
        a_74 = t;
      t = d_74(t);
    }
    t = u_12;
    {
      ATerm c_74 = NULL;
      ATerm e_74 (ATerm t)
      {
        t = not_null(c_74);
        if(((b_74 != NULL) && (b_74 != t)))
          _fail(t);
        else
          b_74 = t;
        t = not_null(c_74);
        return(t);
      }
      t = term_v_8;
      t = whoami_0_0(t);
      if(((c_74 != NULL) && (c_74 != t)))
        _fail(t);
      else
        c_74 = t;
      t = e_74(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_12), not_null(z_73)), term_v_12), not_null(b_74)));
      t = printnl_0_0(t);
    }
    return(t);
  }
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_b_11;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  ATerm j_74 = NULL;
  ATerm p_74 (ATerm t)
  {
    ATerm k_74 = NULL,l_74 = NULL,n_74 = NULL;
    t = not_null(j_74);
    if(((k_74 != NULL) && (k_74 != t)))
      _fail(t);
    else
      k_74 = t;
    t = not_null(j_74);
    {
      ATerm x_12;
      x_12 = t;
      {
        ATerm m_74 = NULL;
        ATerm q_74 (ATerm t)
        {
          t = not_null(m_74);
          if(((l_74 != NULL) && (l_74 != t)))
            _fail(t);
          else
            l_74 = t;
          t = not_null(m_74);
          return(t);
        }
        t = SSLgetAnnotations(not_null(k_74));
        if(((m_74 != NULL) && (m_74 != t)))
          _fail(t);
        else
          m_74 = t;
        t = q_74(t);
      }
      t = x_12;
      {
        ATerm o_74 = NULL;
        ATerm r_74 (ATerm t)
        {
          t = not_null(o_74);
          if(((n_74 != NULL) && (n_74 != t)))
            _fail(t);
          else
            n_74 = t;
          t = not_null(o_74);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_74));
        if(((o_74 != NULL) && (o_74 != t)))
          _fail(t);
        else
          o_74 = t;
        t = r_74(t);
        t = not_null(n_74);
      }
    }
    return(t);
  }
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = not_null(j_74);
  if(match_cons(t, sym_Version_0))
    {
      t = p_74(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = y_12;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm e_13 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(m_14);
            }
          else
            {
              t = e_13;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(j_3, t);
      }
    }
  t = b_100(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_74 = NULL;
  ATerm v_74 (ATerm t)
  {
    ATerm u_74 = NULL;
    t = not_null(t_74);
    if(((u_74 != NULL) && (u_74 != t)))
      _fail(t);
    else
      u_74 = t;
    t = not_null(t_74);
    t = SSL_table_create(not_null(u_74));
    return(t);
  }
  if(((t_74 != NULL) && (t_74 != t)))
    _fail(t);
  else
    t_74 = t;
  t = v_74(t);
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm x_74 = NULL;
  ATerm z_74 (ATerm t)
  {
    ATerm y_74 = NULL;
    t = not_null(x_74);
    if(((y_74 != NULL) && (y_74 != t)))
      _fail(t);
    else
      y_74 = t;
    t = not_null(x_74);
    {
      ATerm p_14;
      p_14 = t;
      t = term_q_14;
      t = table_create_0_0(t);
      t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_f_15, not_null(y_74));
      t = table_put_0_0(t);
      t = p_14;
    }
    return(t);
  }
  if(((x_74 != NULL) && (x_74 != t)))
    _fail(t);
  else
    x_74 = t;
  t = z_74(t);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_75 = NULL;
  ATerm d_75 (ATerm t)
  {
    ATerm c_75 = NULL;
    t = not_null(b_75);
    if(((c_75 != NULL) && (c_75 != t)))
      _fail(t);
    else
      c_75 = t;
    t = not_null(b_75);
    t = SSL_table_destroy(not_null(c_75));
    return(t);
  }
  if(((b_75 != NULL) && (b_75 != t)))
    _fail(t);
  else
    b_75 = t;
  t = d_75(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm f_75 = NULL;
  ATerm h_75 (ATerm t)
  {
    ATerm g_75 = NULL;
    t = not_null(f_75);
    if(((g_75 != NULL) && (g_75 != t)))
      _fail(t);
    else
      g_75 = t;
    t = not_null(f_75);
    t = SSL_exit(not_null(g_75));
    return(t);
  }
  if(((f_75 != NULL) && (f_75 != t)))
    _fail(t);
  else
    f_75 = t;
  t = h_75(t);
  return(t);
}
ATerm long_description_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm i_75 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = Cons_2_0(p_83, i_75, t);
      }
    return(t);
  }
  t = i_75(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
  ATerm g_76 (ATerm t)
  {
    ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
    t = not_null(p_75);
    if(((s_75 != NULL) && (s_75 != t)))
      _fail(t);
    else
      s_75 = t;
    t = not_null(q_75);
    if(((t_75 != NULL) && (t_75 != t)))
      _fail(t);
    else
      t_75 = t;
    t = not_null(t_75);
    {
      ATerm i_15;
      i_15 = t;
      {
        ATerm x_75 = NULL,z_75 = NULL,f_76 = NULL;
        ATerm k_76 (ATerm t)
        {
          t = not_null(f_76);
          if(((u_75 != NULL) && (u_75 != t)))
            _fail(t);
          else
            u_75 = t;
          t = not_null(f_76);
          return(t);
        }
        ATerm j_15;
        j_15 = t;
        {
          ATerm y_75 = NULL;
          ATerm i_76 (ATerm t)
          {
            t = not_null(y_75);
            if(((x_75 != NULL) && (x_75 != t)))
              _fail(t);
            else
              x_75 = t;
            t = not_null(y_75);
            return(t);
          }
          t = g_0(t);
          if(((y_75 != NULL) && (y_75 != t)))
            _fail(t);
          else
            y_75 = t;
          t = i_76(t);
        }
        t = j_15;
        {
          ATerm a_76 = NULL;
          ATerm j_76 (ATerm t)
          {
            t = not_null(a_76);
            if(((z_75 != NULL) && (z_75 != t)))
              _fail(t);
            else
              z_75 = t;
            t = not_null(a_76);
            return(t);
          }
          t = not_null(s_75);
          t = f_0(t);
          if(((a_76 != NULL) && (a_76 != t)))
            _fail(t);
          else
            a_76 = t;
          t = j_76(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(x_75)), not_null(z_75));
          if(((f_76 != NULL) && (f_76 != t)))
            _fail(t);
          else
            f_76 = t;
          t = k_76(t);
        }
      }
      t = i_15;
      {
        ATerm k_3 (ATerm t)
        {
          t = not_null(u_75);
          return(t);
        }
        t = reverse_acc_2_0(f_0, k_3, t);
      }
    }
    return(t);
  }
  ATerm h_76 (ATerm t)
  {
    t = term_v_8;
    t = g_0(t);
    return(t);
  }
  if(((r_75 != NULL) && (r_75 != t)))
    _fail(t);
  else
    r_75 = t;
  t = not_null(r_75);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_75 = ATgetFirst((ATermList) t);
      q_75 = (ATerm) ATgetNext((ATermList) t);
      t = g_76(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_76(t);
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
  ATerm l_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, l_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  ATerm a_77 (ATerm t)
  {
    ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,w_76 = NULL;
    ATerm c_77 (ATerm t)
    {
      ATerm x_76 = NULL,y_76 = NULL;
      t = not_null(w_76);
      if(((x_76 != NULL) && (x_76 != t)))
        _fail(t);
      else
        x_76 = t;
      t = not_null(w_76);
      {
        ATerm z_76 = NULL;
        ATerm d_77 (ATerm t)
        {
          t = not_null(z_76);
          if(((y_76 != NULL) && (y_76 != t)))
            _fail(t);
          else
            y_76 = t;
          t = not_null(z_76);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_76)), not_null(u_76));
        if(((z_76 != NULL) && (z_76 != t)))
          _fail(t);
        else
          z_76 = t;
        t = d_77(t);
        t = not_null(y_76);
      }
      return(t);
    }
    t = not_null(q_76);
    if(((s_76 != NULL) && (s_76 != t)))
      _fail(t);
    else
      s_76 = t;
    t = not_null(r_76);
    if(((t_76 != NULL) && (t_76 != t)))
      _fail(t);
    else
      t_76 = t;
    t = not_null(q_76);
    {
      ATerm v_76 = NULL;
      ATerm b_77 (ATerm t)
      {
        t = not_null(v_76);
        if(((u_76 != NULL) && (u_76 != t)))
          _fail(t);
        else
          u_76 = t;
        t = not_null(v_76);
        return(t);
      }
      t = SSLgetAnnotations(not_null(s_76));
      if(((v_76 != NULL) && (v_76 != t)))
        _fail(t);
      else
        v_76 = t;
      t = b_77(t);
      t = not_null(t_76);
      t = v_75(t);
      if(((w_76 != NULL) && (w_76 != t)))
        _fail(t);
      else
        w_76 = t;
      t = c_77(t);
    }
    return(t);
  }
  if(((q_76 != NULL) && (q_76 != t)))
    _fail(t);
  else
    q_76 = t;
  t = not_null(q_76);
  if(match_cons(t, sym_Program_1))
    {
      r_76 = ATgetArgument(t, 0);
      t = a_77(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_77 = NULL;
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_77 = NULL;
      ATerm p_77 (ATerm t)
      {
        t = not_null(j_77);
        if(((i_77 != NULL) && (i_77 != t)))
          _fail(t);
        else
          i_77 = t;
        t = not_null(j_77);
        return(t);
      }
      t = term_h_12;
      t = get_config_0_0(t);
      if(((j_77 != NULL) && (j_77 != t)))
        _fail(t);
      else
        j_77 = t;
      t = p_77(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            ATerm k_77 = NULL;
            ATerm q_77 (ATerm t)
            {
              t = not_null(k_77);
              if(((i_77 != NULL) && (i_77 != t)))
                _fail(t);
              else
                i_77 = t;
              t = not_null(k_77);
              return(t);
            }
            if(((k_77 != NULL) && (k_77 != t)))
              _fail(t);
            else
              k_77 = t;
            t = q_77(t);
            return(t);
          }
          t = Program_1_0(n_3, t);
          return(t);
        }
        t = option_defined_1_0(m_3, t);
      }
    }
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        t = not_null(i_77);
        return(t);
      }
      t = short_description_1_0(p_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(o_3, t);
    t = term_a_16;
    t = echo_0_0(t);
    t = term_m_16;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm l_77 = NULL;
        ATerm m_77 = NULL;
        ATerm r_77 (ATerm t)
        {
          t = not_null(m_77);
          if(((l_77 != NULL) && (l_77 != t)))
            _fail(t);
          else
            l_77 = t;
          t = not_null(m_77);
          return(t);
        }
        if(((m_77 != NULL) && (m_77 != t)))
          _fail(t);
        else
          m_77 = t;
        t = r_77(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_77)), term_n_16);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_3, t);
      {
        ATerm r_3 (ATerm t)
        {
          ATerm n_77 = NULL;
          ATerm o_77 = NULL;
          ATerm s_77 (ATerm t)
          {
            t = not_null(o_77);
            if(((n_77 != NULL) && (n_77 != t)))
              _fail(t);
            else
              n_77 = t;
            t = not_null(o_77);
            return(t);
          }
          ATerm s_3 (ATerm t)
          {
            t = not_null(i_77);
            return(t);
          }
          t = long_description_1_0(s_3, t);
          if(((o_77 != NULL) && (o_77 != t)))
            _fail(t);
          else
            o_77 = t;
          t = s_77(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(n_77)), term_o_16);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(r_3, t);
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
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL;
  ATerm i_78 (ATerm t)
  {
    ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,e_78 = NULL;
    ATerm k_78 (ATerm t)
    {
      ATerm f_78 = NULL,g_78 = NULL;
      t = not_null(e_78);
      if(((f_78 != NULL) && (f_78 != t)))
        _fail(t);
      else
        f_78 = t;
      t = not_null(e_78);
      {
        ATerm h_78 = NULL;
        ATerm l_78 (ATerm t)
        {
          t = not_null(h_78);
          if(((g_78 != NULL) && (g_78 != t)))
            _fail(t);
          else
            g_78 = t;
          t = not_null(h_78);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_78)), not_null(c_78));
        if(((h_78 != NULL) && (h_78 != t)))
          _fail(t);
        else
          h_78 = t;
        t = l_78(t);
        t = not_null(g_78);
      }
      return(t);
    }
    t = not_null(y_77);
    if(((a_78 != NULL) && (a_78 != t)))
      _fail(t);
    else
      a_78 = t;
    t = not_null(z_77);
    if(((b_78 != NULL) && (b_78 != t)))
      _fail(t);
    else
      b_78 = t;
    t = not_null(y_77);
    {
      ATerm d_78 = NULL;
      ATerm j_78 (ATerm t)
      {
        t = not_null(d_78);
        if(((c_78 != NULL) && (c_78 != t)))
          _fail(t);
        else
          c_78 = t;
        t = not_null(d_78);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_78));
      if(((d_78 != NULL) && (d_78 != t)))
        _fail(t);
      else
        d_78 = t;
      t = j_78(t);
      t = not_null(b_78);
      t = w_75(t);
      if(((e_78 != NULL) && (e_78 != t)))
        _fail(t);
      else
        e_78 = t;
      t = k_78(t);
    }
    return(t);
  }
  if(((y_77 != NULL) && (y_77 != t)))
    _fail(t);
  else
    y_77 = t;
  t = not_null(y_77);
  if(match_cons(t, sym_Undefined_1))
    {
      z_77 = ATgetArgument(t, 0);
      t = i_78(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm m_78 (ATerm t)
  {
    ATerm r_16 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_83, _id, t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = r_16;
        t = Cons_2_0(_id, m_78, t);
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  t = fetch_1_0(b_101, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(((o_78 != NULL) && (o_78 != t)))
    _fail(t);
  else
    o_78 = t;
  t = not_null(o_78);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(o_78);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_78 = ATgetFirst((ATermList) t);
          q_78 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(o_78);
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
  ATerm m_17;
  m_17 = t;
  {
    ATerm t_78 = NULL;
    ATerm w_78 = NULL;
    ATerm y_78 (ATerm t)
    {
      t = not_null(w_78);
      if(((t_78 != NULL) && (t_78 != t)))
        _fail(t);
      else
        t_78 = t;
      t = not_null(w_78);
      return(t);
    }
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          ATerm u_78 = NULL;
          ATerm v_78 = NULL;
          ATerm x_78 (ATerm t)
          {
            t = not_null(v_78);
            if(((u_78 != NULL) && (u_78 != t)))
              _fail(t);
            else
              u_78 = t;
            t = not_null(v_78);
            return(t);
          }
          if(((v_78 != NULL) && (v_78 != t)))
            _fail(t);
          else
            v_78 = t;
          t = x_78(t);
          t = (ATerm) ATinsert(ATempty, not_null(u_78));
        }
      }
    if(((w_78 != NULL) && (w_78 != t)))
      _fail(t);
    else
      w_78 = t;
    t = y_78(t);
    t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(t_78));
    t = printnl_0_0(t);
  }
  t = m_17;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_12;
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
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm d_79 = NULL;
  ATerm j_79 (ATerm t)
  {
    ATerm e_79 = NULL,f_79 = NULL,h_79 = NULL;
    t = not_null(d_79);
    if(((e_79 != NULL) && (e_79 != t)))
      _fail(t);
    else
      e_79 = t;
    t = not_null(d_79);
    {
      ATerm k_18;
      k_18 = t;
      {
        ATerm g_79 = NULL;
        ATerm k_79 (ATerm t)
        {
          t = not_null(g_79);
          if(((f_79 != NULL) && (f_79 != t)))
            _fail(t);
          else
            f_79 = t;
          t = not_null(g_79);
          return(t);
        }
        t = SSLgetAnnotations(not_null(e_79));
        if(((g_79 != NULL) && (g_79 != t)))
          _fail(t);
        else
          g_79 = t;
        t = k_79(t);
      }
      t = k_18;
      {
        ATerm i_79 = NULL;
        ATerm l_79 (ATerm t)
        {
          t = not_null(i_79);
          if(((h_79 != NULL) && (h_79 != t)))
            _fail(t);
          else
            h_79 = t;
          t = not_null(i_79);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_79));
        if(((i_79 != NULL) && (i_79 != t)))
          _fail(t);
        else
          i_79 = t;
        t = l_79(t);
        t = not_null(h_79);
      }
    }
    return(t);
  }
  if(((d_79 != NULL) && (d_79 != t)))
    _fail(t);
  else
    d_79 = t;
  t = not_null(d_79);
  if(match_cons(t, sym_Help_0))
    {
      t = j_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_76(t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm o_79 = NULL;
        if(((o_79 != NULL) && (o_79 != t)))
          _fail(t);
        else
          o_79 = t;
        t = not_null(o_79);
        if(match_string(t, "--about"))
          {
            t = not_null(o_79);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_q_18;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_p_19;
        return(t);
      }
      t = Option_3_0(t_3, u_3, v_3, t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm p_79 = NULL;
          if(((p_79 != NULL) && (p_79 != t)))
            _fail(t);
          else
            p_79 = t;
          t = not_null(p_79);
          if(match_string(t, "--version"))
            {
              t = not_null(p_79);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_3 (ATerm t)
        {
          t = term_q_18;
          t = set_config_0_0(t);
          t = term_r_19;
          t = set_config_0_0(t);
          t = term_s_19;
          return(t);
        }
        ATerm y_3 (ATerm t)
        {
          t = term_t_19;
          return(t);
        }
        t = Option_3_0(w_3, x_3, y_3, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  ATerm x_79 (ATerm t)
  {
    ATerm v_79 = NULL,w_79 = NULL;
    t = not_null(t_79);
    if(((v_79 != NULL) && (v_79 != t)))
      _fail(t);
    else
      v_79 = t;
    t = not_null(u_79);
    if(((w_79 != NULL) && (w_79 != t)))
      _fail(t);
    else
      w_79 = t;
    t = not_null(s_79);
    t = SSL_table_get(not_null(v_79), not_null(w_79));
    return(t);
  }
  if(((s_79 != NULL) && (s_79 != t)))
    _fail(t);
  else
    s_79 = t;
  t = not_null(s_79);
  if(match_cons(t, sym__2))
    {
      t_79 = ATgetArgument(t, 0);
      u_79 = ATgetArgument(t, 1);
      t = x_79(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
  ATerm k_80 (ATerm t)
  {
    ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
    t = not_null(c_80);
    if(((g_80 != NULL) && (g_80 != t)))
      _fail(t);
    else
      g_80 = t;
    t = not_null(d_80);
    if(((h_80 != NULL) && (h_80 != t)))
      _fail(t);
    else
      h_80 = t;
    t = not_null(e_80);
    if(((f_80 != NULL) && (f_80 != t)))
      _fail(t);
    else
      f_80 = t;
    t = not_null(b_80);
    {
      ATerm i_20;
      i_20 = t;
      {
        ATerm i_80 = NULL;
        ATerm j_80 = NULL;
        ATerm l_80 (ATerm t)
        {
          t = not_null(j_80);
          if(((i_80 != NULL) && (i_80 != t)))
            _fail(t);
          else
            i_80 = t;
          t = not_null(j_80);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_80), not_null(h_80));
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              t = (ATerm) ATempty;
            }
          if(((j_80 != NULL) && (j_80 != t)))
            _fail(t);
          else
            j_80 = t;
          t = l_80(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(g_80), not_null(h_80), (ATerm) ATinsert(CheckATermList(not_null(i_80)), not_null(f_80)));
        t = table_put_0_0(t);
      }
      t = i_20;
    }
    return(t);
  }
  if(((b_80 != NULL) && (b_80 != t)))
    _fail(t);
  else
    b_80 = t;
  t = not_null(b_80);
  if(match_cons(t, sym__3))
    {
      c_80 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
      e_80 = ATgetArgument(t, 2);
      t = k_80(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm n_80 = NULL;
  ATerm o_80 = NULL;
  ATerm p_80 (ATerm t)
  {
    t = not_null(o_80);
    if(((n_80 != NULL) && (n_80 != t)))
      _fail(t);
    else
      n_80 = t;
    t = not_null(o_80);
    return(t);
  }
  t = term_v_8;
  t = g_102(t);
  if(((o_80 != NULL) && (o_80 != t)))
    _fail(t);
  else
    o_80 = t;
  t = p_80(t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_16, term_l_16, not_null(n_80));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  ATerm b_81 (ATerm t)
  {
    t = not_null(u_80);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm c_81 (ATerm t)
  {
    ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
    t = not_null(v_80);
    if(((x_80 != NULL) && (x_80 != t)))
      _fail(t);
    else
      x_80 = t;
    t = not_null(w_80);
    if(((y_80 != NULL) && (y_80 != t)))
      _fail(t);
    else
      y_80 = t;
    t = not_null(u_80);
    {
      ATerm o_20;
      o_20 = t;
      t = not_null(x_80);
      t = a_0(t);
      t = o_20;
      {
        ATerm a_81 = NULL;
        ATerm d_81 (ATerm t)
        {
          t = not_null(a_81);
          if(((z_80 != NULL) && (z_80 != t)))
            _fail(t);
          else
            z_80 = t;
          t = not_null(a_81);
          return(t);
        }
        t = term_v_8;
        t = b_0(t);
        if(((a_81 != NULL) && (a_81 != t)))
          _fail(t);
        else
          a_81 = t;
        t = d_81(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(y_80)), not_null(z_80));
      }
    }
    return(t);
  }
  if(((u_80 != NULL) && (u_80 != t)))
    _fail(t);
  else
    u_80 = t;
  t = not_null(u_80);
  if(match_string(t, "register-usage-info"))
    {
      t = b_81(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_80 = ATgetFirst((ATermList) t);
          w_80 = (ATerm) ATgetNext((ATermList) t);
          t = c_81(t);
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
  ATerm z_3 (ATerm t)
  {
    ATerm f_81 = NULL;
    if(((f_81 != NULL) && (f_81 != t)))
      _fail(t);
    else
      f_81 = t;
    t = not_null(f_81);
    if(match_string(t, "--help"))
      {
        t = not_null(f_81);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(f_81);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(f_81);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_p_20;
    t = set_config_0_0(t);
    t = term_q_20;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_r_20;
    return(t);
  }
  t = Option_3_0(z_3, a_4, b_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  ATerm n_81 (ATerm t)
  {
    ATerm l_81 = NULL,m_81 = NULL;
    t = not_null(j_81);
    if(((l_81 != NULL) && (l_81 != t)))
      _fail(t);
    else
      l_81 = t;
    t = not_null(k_81);
    if(((m_81 != NULL) && (m_81 != t)))
      _fail(t);
    else
      m_81 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(m_81)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_81)));
    return(t);
  }
  if(((i_81 != NULL) && (i_81 != t)))
    _fail(t);
  else
    i_81 = t;
  t = not_null(i_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_81 = ATgetFirst((ATermList) t);
      k_81 = (ATerm) ATgetNext((ATermList) t);
      t = n_81(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_62 (ATerm), ATerm b_62 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  ATerm i_82 (ATerm t)
  {
    ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,c_82 = NULL;
    ATerm k_82 (ATerm t)
    {
      ATerm d_82 = NULL,e_82 = NULL;
      ATerm l_82 (ATerm t)
      {
        ATerm f_82 = NULL,g_82 = NULL;
        t = not_null(e_82);
        if(((f_82 != NULL) && (f_82 != t)))
          _fail(t);
        else
          f_82 = t;
        t = not_null(e_82);
        {
          ATerm h_82 = NULL;
          ATerm m_82 (ATerm t)
          {
            t = not_null(h_82);
            if(((g_82 != NULL) && (g_82 != t)))
              _fail(t);
            else
              g_82 = t;
            t = not_null(h_82);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_82)), not_null(d_82)), not_null(a_82));
          if(((h_82 != NULL) && (h_82 != t)))
            _fail(t);
          else
            h_82 = t;
          t = m_82(t);
          t = not_null(g_82);
        }
        return(t);
      }
      t = not_null(c_82);
      if(((d_82 != NULL) && (d_82 != t)))
        _fail(t);
      else
        d_82 = t;
      t = not_null(z_81);
      t = b_62(t);
      if(((e_82 != NULL) && (e_82 != t)))
        _fail(t);
      else
        e_82 = t;
      t = l_82(t);
      return(t);
    }
    t = not_null(u_81);
    if(((x_81 != NULL) && (x_81 != t)))
      _fail(t);
    else
      x_81 = t;
    t = not_null(v_81);
    if(((y_81 != NULL) && (y_81 != t)))
      _fail(t);
    else
      y_81 = t;
    t = not_null(w_81);
    if(((z_81 != NULL) && (z_81 != t)))
      _fail(t);
    else
      z_81 = t;
    t = not_null(u_81);
    {
      ATerm b_82 = NULL;
      ATerm j_82 (ATerm t)
      {
        t = not_null(b_82);
        if(((a_82 != NULL) && (a_82 != t)))
          _fail(t);
        else
          a_82 = t;
        t = not_null(b_82);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_81));
      if(((b_82 != NULL) && (b_82 != t)))
        _fail(t);
      else
        b_82 = t;
      t = j_82(t);
      t = not_null(y_81);
      t = a_62(t);
      if(((c_82 != NULL) && (c_82 != t)))
        _fail(t);
      else
        c_82 = t;
      t = k_82(t);
    }
    return(t);
  }
  if(((u_81 != NULL) && (u_81 != t)))
    _fail(t);
  else
    u_81 = t;
  t = not_null(u_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_81 = ATgetFirst((ATermList) t);
      w_81 = (ATerm) ATgetNext((ATermList) t);
      t = i_82(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  ATerm x_82 (ATerm t)
  {
    ATerm s_82 = NULL,t_82 = NULL,v_82 = NULL;
    t = not_null(r_82);
    if(((s_82 != NULL) && (s_82 != t)))
      _fail(t);
    else
      s_82 = t;
    t = not_null(r_82);
    {
      ATerm l_21;
      l_21 = t;
      {
        ATerm u_82 = NULL;
        ATerm y_82 (ATerm t)
        {
          t = not_null(u_82);
          if(((t_82 != NULL) && (t_82 != t)))
            _fail(t);
          else
            t_82 = t;
          t = not_null(u_82);
          return(t);
        }
        t = SSLgetAnnotations(not_null(s_82));
        if(((u_82 != NULL) && (u_82 != t)))
          _fail(t);
        else
          u_82 = t;
        t = y_82(t);
      }
      t = l_21;
      {
        ATerm w_82 = NULL;
        ATerm z_82 (ATerm t)
        {
          t = not_null(w_82);
          if(((v_82 != NULL) && (v_82 != t)))
            _fail(t);
          else
            v_82 = t;
          t = not_null(w_82);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(t_82));
        if(((w_82 != NULL) && (w_82 != t)))
          _fail(t);
        else
          w_82 = t;
        t = z_82(t);
        t = not_null(v_82);
      }
    }
    return(t);
  }
  if(((r_82 != NULL) && (r_82 != t)))
    _fail(t);
  else
    r_82 = t;
  t = not_null(r_82);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_82(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  ATerm h_83 (ATerm t)
  {
    ATerm f_83 = NULL,g_83 = NULL;
    t = not_null(d_83);
    if(((f_83 != NULL) && (f_83 != t)))
      _fail(t);
    else
      f_83 = t;
    t = not_null(e_83);
    if(((g_83 != NULL) && (g_83 != t)))
      _fail(t);
    else
      g_83 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_p_9, not_null(f_83), not_null(g_83));
    t = table_put_0_0(t);
    return(t);
  }
  if(((c_83 != NULL) && (c_83 != t)))
    _fail(t);
  else
    c_83 = t;
  t = not_null(c_83);
  if(match_cons(t, sym__2))
    {
      d_83 = ATgetArgument(t, 0);
      e_83 = ATgetArgument(t, 1);
      t = h_83(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm m_21;
  m_21 = t;
  {
    ATerm c_4 (ATerm t)
    {
      t = term_n_21;
      t = e_102(t);
      return(t);
    }
    t = try_1_0(c_4, t);
  }
  t = m_21;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm m_83 = NULL;
      ATerm o_21;
      o_21 = t;
      {
        ATerm k_83 = NULL;
        ATerm l_83 = NULL;
        ATerm r_83 (ATerm t)
        {
          t = not_null(l_83);
          if(((k_83 != NULL) && (k_83 != t)))
            _fail(t);
          else
            k_83 = t;
          t = not_null(l_83);
          return(t);
        }
        if(((l_83 != NULL) && (l_83 != t)))
          _fail(t);
        else
          l_83 = t;
        t = r_83(t);
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(k_83));
        t = set_config_0_0(t);
      }
      t = o_21;
      {
        ATerm o_83 = NULL;
        ATerm u_83 (ATerm t)
        {
          t = not_null(o_83);
          if(((m_83 != NULL) && (m_83 != t)))
            _fail(t);
          else
            m_83 = t;
          t = not_null(o_83);
          return(t);
        }
        if(((o_83 != NULL) && (o_83 != t)))
          _fail(t);
        else
          o_83 = t;
        t = u_83(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_83));
      }
      return(t);
    }
    ATerm e_4 (ATerm t)
    {
      ATerm p_21 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = e_102(t);
              t = Cons_2_0(_id, e_4, t);
            }
          ;
          LocalPopChoice(e_22);
        }
      else
        {
          t = p_21;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(d_4, e_4, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm y_83 = NULL,b_84 = NULL,c_84 = NULL;
  ATerm h_22;
  h_22 = t;
  {
    ATerm d_84 = NULL,e_84 = NULL,h_84 = NULL,i_84 = NULL;
    ATerm j_84 (ATerm t)
    {
      t = not_null(e_84);
      if(((y_83 != NULL) && (y_83 != t)))
        _fail(t);
      else
        y_83 = t;
      t = not_null(h_84);
      if(((b_84 != NULL) && (b_84 != t)))
        _fail(t);
      else
        b_84 = t;
      t = not_null(i_84);
      if(((c_84 != NULL) && (c_84 != t)))
        _fail(t);
      else
        c_84 = t;
      t = not_null(d_84);
      t = SSL_table_put(not_null(y_83), not_null(b_84), not_null(c_84));
      return(t);
    }
    if(((d_84 != NULL) && (d_84 != t)))
      _fail(t);
    else
      d_84 = t;
    t = not_null(d_84);
    if(match_cons(t, sym__3))
      {
        e_84 = ATgetArgument(t, 0);
        h_84 = ATgetArgument(t, 1);
        i_84 = ATgetArgument(t, 2);
        t = j_84(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = h_22;
  return(t);
}
ATerm parse_options_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm l_84 = NULL;
  ATerm i_22;
  i_22 = t;
  t = term_j_22;
  t = table_put_0_0(t);
  t = i_22;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_102(t);
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm m_22 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_23);
              }
            else
              {
                t = m_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_4, t);
    {
      ATerm g_4 (ATerm t)
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_23;
            t_23 = t;
            {
              ATerm u_23 = t;
              int v_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_d_13;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(v_23);
                }
              else
                {
                  t = u_23;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = t_23;
            t = system_usage_0_0(t);
            t = term_b_11;
            t = exit_0_0(t);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_23;
                  y_23 = t;
                  t = term_p_18;
                  t = get_config_0_0(t);
                  t = y_23;
                  t = system_about_0_0(t);
                  t = term_b_11;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
                  {
                    ATerm h_4 (ATerm t)
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm m_84 = NULL;
                        ATerm n_84 (ATerm t)
                        {
                          t = not_null(m_84);
                          if(((l_84 != NULL) && (l_84 != t)))
                            _fail(t);
                          else
                            l_84 = t;
                          t = not_null(m_84);
                          return(t);
                        }
                        if(((m_84 != NULL) && (m_84 != t)))
                          _fail(t);
                        else
                          m_84 = t;
                        t = n_84(t);
                        return(t);
                      }
                      t = Undefined_1_0(i_4, t);
                      return(t);
                    }
                    t = option_defined_1_0(h_4, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_84)), term_z_23));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_z_8;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(g_4, t);
      {
        ATerm a_25;
        a_25 = t;
        t = term_b_16;
        t = table_destroy_0_0(t);
        t = a_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  t = parse_options_1_0(d_100, t);
  t = store_options_0_0(t);
  t = f_100(t);
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_100, t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_100(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_99(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(s_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_4, u_99, v_99, k_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm h_25;
      h_25 = t;
      {
        ATerm p_84 = NULL;
        ATerm q_84 = NULL;
        ATerm r_84 (ATerm t)
        {
          t = not_null(q_84);
          if(((p_84 != NULL) && (p_84 != t)))
            _fail(t);
          else
            p_84 = t;
          t = not_null(q_84);
          return(t);
        }
        t = term_h_12;
        t = get_config_0_0(t);
        if(((q_84 != NULL) && (q_84 != t)))
          _fail(t);
        else
          q_84 = t;
        t = r_84(t);
        t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATempty, not_null(p_84)));
        t = printnl_0_0(t);
      }
      t = h_25;
      return(t);
    }
    t = if_verbose2_1_0(m_4, t);
    return(t);
  }
  t = iowrap_4_0(m_99, n_99, o_99, l_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  t = iowrap_3_0(k_99, l_99, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = _2_0(_id, h_99, t);
    return(t);
  }
  t = iowrap_2_0(n_4, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_specification_0_0, t);
  return(t);
}
