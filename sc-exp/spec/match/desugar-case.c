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
ATerm term_q_17;
ATerm term_j_16;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_g_15;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_q_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_g_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_l_5;
ATerm term_j_5;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_i_4;
ATerm term_h_4;
ATerm term_g_4;
void init_constant_terms (void)
{
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_u_5, term_e_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_g_4);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_g_4);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_c_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_g_4);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_g_4);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_g_4);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__3, term_b_13, term_c_13, (ATerm) ATempty);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm DesugarCase_0 (ATerm);
ATerm DesugarAssign_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm g_78 (ATerm));
ATerm topdown_1 (ATerm, ATerm e_79 (ATerm));
ATerm _2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_98 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm h_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_100 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_96 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm w_90 (ATerm), ATerm x_90 (ATerm));
ATerm crush_2 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_98 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_101 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_103 (ATerm));
ATerm map_1 (ATerm, ATerm v_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_103 (ATerm));
ATerm Program_1 (ATerm, ATerm e_77 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_102 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_77 (ATerm));
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_103 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_103 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_103 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_100 (ATerm), ATerm r_100 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_100 (ATerm));
ATerm main_0 (ATerm);
ATerm DesugarCase_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  i_2 = t;
  t_1 :
  if(match_cons(i_2, sym_Case_2))
    {
      j_2 = ATgetArgument(i_2, 0);
      k_2 = ATgetArgument(i_2, 1);
      u_1 :
      if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
        {
          h_2 = ATgetFirst((ATermList) j_2);
          g_2 = (ATerm) ATgetNext((ATermList) j_2);
          y_1 :
          if(match_cons(h_2, sym_Alt_3))
            {
              b_2 = ATgetArgument(h_2, 0);
              e_2 = ATgetArgument(h_2, 1);
              f_2 = ATgetArgument(h_2, 2);
              z_1 :
              if(match_cons(b_2, sym_Real_1))
                {
                  c_2 = ATgetArgument(b_2, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(c_2))), not_null(f_2), (ATerm) ATmakeAppl(sym_Case_2, not_null(g_2), not_null(k_2)));
                }
              else
                {
                  if(match_cons(b_2, sym_Int_1))
                    {
                      c_2 = ATgetArgument(b_2, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(c_2))), not_null(f_2), (ATerm) ATmakeAppl(sym_Case_2, not_null(g_2), not_null(k_2)));
                    }
                  else
                    {
                      if(match_cons(b_2, sym_Str_1))
                        {
                          c_2 = ATgetArgument(b_2, 0);
                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_2))), not_null(f_2), (ATerm) ATmakeAppl(sym_Case_2, not_null(g_2), not_null(k_2)));
                        }
                      else
                        {
                          if(match_cons(b_2, sym_Fun_2))
                            {
                              c_2 = ATgetArgument(b_2, 0);
                              d_2 = ATgetArgument(b_2, 1);
                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_2), not_null(e_2))), not_null(f_2), (ATerm) ATmakeAppl(sym_Case_2, not_null(g_2), not_null(k_2)));
                            }
                          else
                            {
                              _fail(t);
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
          if(((ATgetType(j_2) == AT_LIST) && ATisEmpty(j_2)))
            {
              t = not_null(k_2);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(i_2, sym_Case_3))
        {
          j_2 = ATgetArgument(i_2, 0);
          k_2 = ATgetArgument(i_2, 1);
          l_2 = ATgetArgument(i_2, 2);
          a_2 :
          if(match_cons(j_2, sym_Var_1))
            {
              h_2 = ATgetArgument(j_2, 0);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_2))), (ATerm) ATmakeAppl(sym_Case_2, not_null(k_2), not_null(l_2)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(i_2, sym_Case_4))
            {
              j_2 = ATgetArgument(i_2, 0);
              k_2 = ATgetArgument(i_2, 1);
              l_2 = ATgetArgument(i_2, 2);
              m_2 = ATgetArgument(i_2, 3);
              t = (ATerm) ATmakeAppl(sym_Case_3, not_null(k_2), not_null(l_2), not_null(m_2));
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm DesugarAssign_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  c_4 = t;
  z_3 :
  if(match_cons(c_4, sym_Assign_1))
    {
      d_4 = ATgetArgument(c_4, 0);
      a_4 :
      if(match_cons(d_4, sym_Var_1))
        {
          e_4 = ATgetArgument(d_4, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_4)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_4, sym_Assign_2))
        {
          d_4 = ATgetArgument(c_4, 0);
          f_4 = ATgetArgument(c_4, 1);
          b_4 :
          if(match_cons(d_4, sym_Var_1))
            {
              e_4 = ATgetArgument(d_4, 0);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_4)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_4))));
            }
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
ATerm repeat_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm c_0 (ATerm t)
    {
      t = g_78(t);
      t = l_4(t);
      return(t);
    }
    t = try_1(t, c_0);
    return(t);
  }
  t = l_4(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_79 (ATerm))
{
  t = e_79(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, e_79);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  r_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      {
        ATerm y_4 = NULL,a_5 = NULL;
        ATerm z_4 = NULL;
        t = SSLgetAnnotations(not_null(s_4));
        {
          z_4 = t;
          if(((y_4 != NULL) && (y_4 != z_4)))
            _fail(z_4);
          else
            y_4 = z_4;
        }
        {
          t = not_null(t_4);
          {
            ATerm c_5 = NULL;
            t = c_62(t);
            {
              a_5 = t;
              {
                t = not_null(u_4);
                {
                  ATerm e_5 = NULL;
                  t = d_62(t);
                  {
                    c_5 = t;
                    {
                      ATerm f_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_5), not_null(c_5)), not_null(y_4));
                      {
                        f_5 = t;
                        if(((e_5 != NULL) && (e_5 != f_5)))
                          _fail(f_5);
                        else
                          e_5 = f_5;
                      }
                      t = not_null(e_5);
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
  ATerm y_3;
  y_3 = t;
  {
    ATerm m_5 = NULL;
    ATerm n_5 = NULL;
    t = term_g_4;
    {
      t = whoami_0(t);
      {
        n_5 = t;
        if(((m_5 != NULL) && (m_5 != n_5)))
          _fail(n_5);
        else
          m_5 = n_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_4), not_null(m_5)), term_i_4));
      {
        t = printnl_0(t);
        {
          t = term_k_4;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_3;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym__2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        ATerm m_4;
        m_4 = t;
        t = SSL_printnl(not_null(s_5), not_null(t_5));
        t = m_4;
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
  ATerm y_5 = NULL;
  y_5 = t;
  t = SSL_implode_string(not_null(y_5));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(o_4);
    }
  else
    {
      t = n_4;
      {
        ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
        d_6 = t;
        c_6 :
        if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
          {
            e_6 = ATgetFirst((ATermList) d_6);
            f_6 = (ATerm) ATgetNext((ATermList) d_6);
            {
              t = not_null(e_6);
              {
                ATerm f_0 (ATerm t)
                {
                  t = not_null(f_6);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_0);
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
  ATerm p_6 = NULL;
  ATerm r_6 = NULL;
  p_6 = t;
  {
    ATerm s_6 = NULL;
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
    t = not_null(p_6);
    {
      s_6 = t;
      {
        t = SSL_explode_term(not_null(s_6));
        {
          u_6 = t;
          n_6 :
          if(match_cons(u_6, sym__2))
            {
              v_6 = ATgetArgument(u_6, 0);
              w_6 = ATgetArgument(u_6, 1);
              o_6 :
              if(match_string(v_6, ""))
                {
                  if(((r_6 != NULL) && (r_6 != w_6)))
                    _fail(w_6);
                  else
                    r_6 = w_6;
                }
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
      t = not_null(r_6);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm p_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_7);
        ;
        LocalPopChoice(q_4);
      }
    else
      {
        t = p_4;
        {
          t = Nil_0(t);
          t = l_85(t);
        }
      }
    return(t);
  }
  t = a_7(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym__2))
    {
      e_7 = ATgetArgument(d_7, 0);
      f_7 = ATgetArgument(d_7, 1);
      {
        t = not_null(e_7);
        {
          ATerm h_0 (ATerm t)
          {
            t = not_null(f_7);
            return(t);
          }
          t = at_end_1(t, h_0);
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
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_4);
    }
  else
    {
      t = v_4;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  t = SSL_explode_string(not_null(k_7));
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
  ATerm x_4 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_5);
    }
  else
    {
      t = x_4;
      {
        ATerm d_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_0);
            ;
            LocalPopChoice(g_5);
          }
        else
          {
            t = d_5;
            {
              ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
              t_7 = t;
              s_7 :
              if(match_cons(t_7, sym_Path_1))
                {
                  u_7 = ATgetArgument(t_7, 0);
                  t = not_null(u_7);
                }
              else
                {
                  if(match_cons(t_7, sym_Var_1))
                    {
                      u_7 = ATgetArgument(t_7, 0);
                      {
                        t = not_null(u_7);
                        {
                          ATerm h_5 = t;
                          int i_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_5);
                            }
                          else
                            {
                              t = h_5;
                              {
                                ATerm n_0 (ATerm t)
                                {
                                  t = term_j_5;
                                  return(t);
                                }
                                t = debug_1(t, n_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_7, sym_Prefix_2))
                        {
                          u_7 = ATgetArgument(t_7, 0);
                          v_7 = ATgetArgument(t_7, 1);
                          {
                            ATerm a_8 = NULL,c_8 = NULL;
                            ATerm k_5;
                            k_5 = t;
                            {
                              ATerm b_8 = NULL;
                              t = not_null(u_7);
                              {
                                t = eval_config_0(t);
                                {
                                  b_8 = t;
                                  if(((a_8 != NULL) && (a_8 != b_8)))
                                    _fail(b_8);
                                  else
                                    a_8 = b_8;
                                }
                              }
                            }
                            t = k_5;
                            {
                              ATerm d_8 = NULL;
                              t = not_null(v_7);
                              {
                                t = eval_config_0(t);
                                {
                                  d_8 = t;
                                  if(((c_8 != NULL) && (c_8 != d_8)))
                                    _fail(d_8);
                                  else
                                    c_8 = d_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(c_8));
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
  ATerm l_8 = NULL;
  l_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(l_8));
    {
      t = table_get_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_5;
            o_5 = t;
            {
              ATerm n_8 = NULL;
              ATerm o_8 = NULL;
              o_8 = t;
              if(((n_8 != NULL) && (n_8 != o_8)))
                _fail(o_8);
              else
                n_8 = o_8;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_5, not_null(l_8), not_null(n_8));
                t = table_put_0(t);
              }
            }
            t = o_5;
          }
          return(t);
        }
        t = try_1(t, o_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm p_0 (ATerm t)
  {
    ATerm p_5;
    p_5 = t;
    {
      ATerm s_8 = NULL;
      ATerm t_8 = NULL;
      t = term_u_5;
      {
        t = get_config_0(t);
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), term_v_5);
        t = geq_0(t);
      }
    }
    t = p_5;
    t = l_98(t);
    return(t);
  }
  t = try_1(t, p_0);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  x_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      y_8 :
      if(match_cons(b_9, sym_Stream_1))
        {
          c_9 = ATgetArgument(b_9, 0);
          {
            ATerm f_9 = NULL;
            t = SSL_fputc(not_null(a_9), not_null(c_9));
            {
              ATerm g_9 = NULL;
              g_9 = t;
              if(((f_9 != NULL) && (f_9 != g_9)))
                _fail(g_9);
              else
                f_9 = g_9;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_9));
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
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  n_9 = t;
  l_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      q_9 = ATgetArgument(n_9, 1);
      m_9 :
      if(match_cons(o_9, sym_Stream_1))
        {
          p_9 = ATgetArgument(o_9, 0);
          {
            ATerm t_9 = NULL;
            t = SSL_write_term_to_stream_text(not_null(p_9), not_null(q_9));
            {
              ATerm u_9 = NULL;
              u_9 = t;
              if(((t_9 != NULL) && (t_9 != u_9)))
                _fail(u_9);
              else
                t_9 = u_9;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_9));
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
  ATerm q_0 (ATerm t)
  {
    ATerm y_9 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm z_9 = NULL;
      z_9 = t;
      if(((y_9 != NULL) && (y_9 != z_9)))
        _fail(z_9);
      else
        y_9 = z_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, not_null(y_9));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, q_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  f_10 = t;
  d_10 :
  if(match_cons(f_10, sym__2))
    {
      g_10 = ATgetArgument(f_10, 0);
      i_10 = ATgetArgument(f_10, 1);
      e_10 :
      if(match_cons(g_10, sym_Stream_1))
        {
          h_10 = ATgetArgument(g_10, 0);
          {
            ATerm l_10 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(h_10), not_null(i_10));
            {
              ATerm m_10 = NULL;
              m_10 = t;
              if(((l_10 != NULL) && (l_10 != m_10)))
                _fail(m_10);
              else
                l_10 = m_10;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_10));
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
ATerm WriteToFile_1 (ATerm t, ATerm h_97 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym__2))
    {
      u_10 = ATgetArgument(t_10, 0);
      v_10 = ATgetArgument(t_10, 1);
      {
        ATerm y_10 = NULL,a_11 = NULL;
        t = not_null(u_10);
        {
          ATerm z_10 = NULL;
          z_10 = t;
          if(((y_10 != NULL) && (y_10 != z_10)))
            _fail(z_10);
          else
            y_10 = z_10;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), term_x_5);
            {
              t = open_stream_0(t);
              {
                ATerm b_11 = NULL;
                b_11 = t;
                if(((a_11 != NULL) && (a_11 != b_11)))
                  _fail(b_11);
                else
                  a_11 = b_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(v_10));
                  {
                    t = h_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(v_10);
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
  ATerm j_11 = NULL;
  ATerm z_5;
  z_5 = t;
  {
    ATerm r_0 (ATerm t)
    {
      ATerm a_6 = t;
      int b_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 (ATerm t)
          {
            ATerm k_11 = NULL,l_11 = NULL;
            k_11 = t;
            g_11 :
            if(match_cons(k_11, sym_Output_1))
              {
                l_11 = ATgetArgument(k_11, 0);
                if(((j_11 != NULL) && (j_11 != l_11)))
                  _fail(l_11);
                else
                  j_11 = l_11;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_0);
          ;
          LocalPopChoice(b_6);
        }
      else
        {
          t = a_6;
          {
            ATerm m_11 = NULL;
            t = term_g_6;
            {
              m_11 = t;
              if(((j_11 != NULL) && (j_11 != m_11)))
                _fail(m_11);
              else
                j_11 = m_11;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_0, _id);
  }
  t = z_5;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = not_null(j_11);
        return(t);
      }
      t = split_2(t, u_0, _id);
      return(t);
    }
    t = _2(t, _id, t_0);
    {
      ATerm h_6 = t;
      int i_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm w_0 (ATerm t)
            {
              ATerm n_11 = NULL;
              n_11 = t;
              i_11 :
              if(!(match_cons(n_11, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_0);
            return(t);
          }
          t = _2(t, v_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(i_6);
        }
      else
        {
          t = h_6;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  ATerm j_6;
  j_6 = t;
  t = dtime_0(t);
  t = j_6;
  {
    t = j_100(t);
    {
      ATerm k_6;
      k_6 = t;
      {
        ATerm u_11 = NULL;
        t = dtime_0(t);
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
      }
      t = k_6;
      {
        v_11 = t;
        s_11 :
        if(match_cons(v_11, sym__2))
          {
            w_11 = ATgetArgument(v_11, 0);
            x_11 = ATgetArgument(v_11, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_11)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_11))), not_null(x_11));
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
  ATerm f_12 = NULL,g_12 = NULL;
  ATerm m_12 (ATerm t)
  {
    t = SSL_fclose(not_null(g_12));
    return(t);
  }
  g_12 = t;
  e_12 :
  if(match_cons(g_12, sym_Stream_1))
    {
      f_12 = ATgetArgument(g_12, 0);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(f_12));
            ;
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            t = m_12(t);
          }
      }
    }
  else
    {
      t = m_12(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_Stream_1))
    {
      q_12 = ATgetArgument(p_12, 0);
      t = SSL_read_term_from_stream(not_null(q_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_96 (ATerm))
{
  ATerm q_6;
  q_6 = t;
  {
    ATerm v_12 = NULL,x_12 = NULL;
    ATerm t_6;
    t_6 = t;
    {
      ATerm w_12 = NULL;
      t = t_96(t);
      {
        w_12 = t;
        if(((v_12 != NULL) && (v_12 != w_12)))
          _fail(w_12);
        else
          v_12 = w_12;
      }
    }
    t = t_6;
    {
      ATerm y_12 = NULL;
      y_12 = t;
      if(((x_12 != NULL) && (x_12 != y_12)))
        _fail(y_12);
      else
        x_12 = y_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_12)), not_null(v_12)));
        t = printnl_0(t);
      }
    }
  }
  t = q_6;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        ATerm j_13 = NULL;
        t = SSL_fopen(not_null(f_13), not_null(g_13));
        {
          ATerm k_13 = NULL;
          k_13 = t;
          if(((j_13 != NULL) && (j_13 != k_13)))
            _fail(k_13);
          else
            j_13 = k_13;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_13));
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
  ATerm o_13 = NULL;
  o_13 = t;
  t = SSL_is_string(not_null(o_13));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm t_13 = NULL;
    t_13 = t;
    if(((s_13 != NULL) && (s_13 != t_13)))
      _fail(t_13);
    else
      s_13 = t_13;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_13));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm w_13 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm x_13 = NULL;
    x_13 = t;
    if(((w_13 != NULL) && (w_13 != x_13)))
      _fail(x_13);
    else
      w_13 = x_13;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_13));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_14 = NULL;
    b_14 = t;
    if(((a_14 != NULL) && (a_14 != b_14)))
      _fail(b_14);
    else
      a_14 = b_14;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_14));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(h_14, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(h_14, sym_stdin_0))
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
  ATerm r_14 = NULL;
  ATerm t_14 = NULL,u_14 = NULL;
  r_14 = t;
  {
    ATerm v_14 = NULL;
    ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
    t = not_null(r_14);
    {
      v_14 = t;
      {
        t = SSL_explode_term(not_null(v_14));
        {
          x_14 = t;
          o_14 :
          if(match_cons(x_14, sym__2))
            {
              y_14 = ATgetArgument(x_14, 0);
              z_14 = ATgetArgument(x_14, 1);
              p_14 :
              if(match_string(y_14, ""))
                {
                  q_14 :
                  if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
                    {
                      a_15 = ATgetFirst((ATermList) z_14);
                      b_15 = (ATerm) ATgetNext((ATermList) z_14);
                      {
                        if(((u_14 != NULL) && (u_14 != a_15)))
                          _fail(a_15);
                        else
                          u_14 = a_15;
                        if(((t_14 != NULL) && (t_14 != b_15)))
                          _fail(b_15);
                        else
                          t_14 = b_15;
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
    t = not_null(u_14);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm z_6 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm m_15 = NULL,n_15 = NULL;
                    m_15 = t;
                    h_15 :
                    if(match_cons(m_15, sym_Path_1))
                      {
                        n_15 = ATgetArgument(m_15, 0);
                        t = not_null(n_15);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, x_0, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(b_7);
                }
              else
                {
                  t = z_6;
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
  ATerm v_15 = NULL;
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_15 = NULL;
      ATerm u_15 = NULL;
      u_15 = t;
      if(((t_15 != NULL) && (t_15 != u_15)))
        _fail(u_15);
      else
        t_15 = u_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), term_i_7);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm y_0 (ATerm t)
        {
          t = term_j_7;
          return(t);
        }
        t = debug_1(t, y_0);
        _fail(t);
      }
    }
  {
    ATerm l_7;
    l_7 = t;
    {
      ATerm w_15 = NULL;
      t = read_from_stream_0(t);
      {
        w_15 = t;
        if(((v_15 != NULL) && (v_15 != w_15)))
          _fail(w_15);
        else
          v_15 = w_15;
      }
    }
    t = l_7;
    {
      t = fclose_0(t);
      t = not_null(v_15);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  ATerm b_16 = NULL,d_16 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm c_16 = NULL;
    t = l_92(t);
    {
      c_16 = t;
      if(((b_16 != NULL) && (b_16 != c_16)))
        _fail(c_16);
      else
        b_16 = c_16;
    }
  }
  t = m_7;
  {
    ATerm e_16 = NULL;
    t = m_92(t);
    {
      e_16 = t;
      if(((d_16 != NULL) && (d_16 != e_16)))
        _fail(e_16);
      else
        d_16 = e_16;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(d_16));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_16 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          ATerm l_16 = NULL,m_16 = NULL;
          l_16 = t;
          i_16 :
          if(match_cons(l_16, sym_Input_1))
            {
              m_16 = ATgetArgument(l_16, 0);
              if(((k_16 != NULL) && (k_16 != m_16)))
                _fail(m_16);
              else
                k_16 = m_16;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_0);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          ATerm n_16 = NULL;
          t = term_q_7;
          {
            n_16 = t;
            if(((k_16 != NULL) && (k_16 != n_16)))
              _fail(n_16);
            else
              k_16 = n_16;
          }
        }
      }
  }
  t = n_7;
  {
    ATerm a_1 (ATerm t)
    {
      t = not_null(k_16);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm s_16 = NULL;
    s_16 = t;
    q_16 :
    if(!(match_string(s_16, "-k")))
      {
        if(!(match_string(s_16, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm r_7;
    r_7 = t;
    {
      ATerm t_16 = NULL;
      ATerm u_16 = NULL;
      t = string_to_int_0(t);
      {
        u_16 = t;
        if(((t_16 != NULL) && (t_16 != u_16)))
          _fail(u_16);
        else
          t_16 = u_16;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(t_16));
        t = set_config_0(t);
      }
    }
    t = r_7;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_x_7;
    return(t);
  }
  t = ArgOption_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  t = SSL_string_to_int(not_null(x_16));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_17 = NULL;
        f_17 = t;
        a_17 :
        if(!(match_string(f_17, "-S")))
          {
            if(!(match_string(f_17, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        t = term_f_8;
        t = set_config_0(t);
        t = term_g_8;
        return(t);
      }
      ATerm g_1 (ATerm t)
      {
        t = term_h_8;
        return(t);
      }
      t = Option_3(t, e_1, f_1, g_1);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              ATerm g_17 = NULL;
              g_17 = t;
              b_17 :
              if(!(match_string(g_17, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_1 (ATerm t)
            {
              ATerm j_17 = NULL;
              ATerm k_8;
              k_8 = t;
              {
                ATerm h_17 = NULL;
                ATerm i_17 = NULL;
                t = string_to_int_0(t);
                {
                  i_17 = t;
                  if(((h_17 != NULL) && (h_17 != i_17)))
                    _fail(i_17);
                  else
                    h_17 = i_17;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_5, not_null(h_17));
                  t = set_config_0(t);
                }
              }
              t = k_8;
              {
                ATerm k_17 = NULL;
                k_17 = t;
                if(((j_17 != NULL) && (j_17 != k_17)))
                  _fail(k_17);
                else
                  j_17 = k_17;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_17));
              }
              return(t);
            }
            ATerm j_1 (ATerm t)
            {
              t = term_m_8;
              return(t);
            }
            t = ArgOption_3(t, h_1, i_1, j_1);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm k_1 (ATerm t)
              {
                ATerm l_17 = NULL;
                l_17 = t;
                e_17 :
                if(!(match_string(l_17, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_1 (ATerm t)
              {
                t = term_q_8;
                t = set_config_0(t);
                t = term_r_8;
                return(t);
              }
              ATerm m_1 (ATerm t)
              {
                t = term_u_8;
                return(t);
              }
              t = Option_3(t, k_1, l_1, m_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm r_17 = NULL;
    r_17 = t;
    o_17 :
    if(!(match_string(r_17, "-o")))
      {
        if(!(match_string(r_17, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm u_17 = NULL;
    ATerm d_9;
    d_9 = t;
    {
      ATerm s_17 = NULL;
      ATerm t_17 = NULL;
      t_17 = t;
      if(((s_17 != NULL) && (s_17 != t_17)))
        _fail(t_17);
      else
        s_17 = t_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(s_17));
        t = set_config_0(t);
      }
    }
    t = d_9;
    {
      ATerm v_17 = NULL;
      v_17 = t;
      if(((u_17 != NULL) && (u_17 != v_17)))
        _fail(v_17);
      else
        u_17 = v_17;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_17));
    }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_h_9;
    return(t);
  }
  t = ArgOption_3(t, n_1, o_1, p_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm z_17 = NULL;
          z_17 = t;
          y_17 :
          if(!(match_string(z_17, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          t = term_r_9;
          t = set_config_0(t);
          t = term_s_9;
          return(t);
        }
        ATerm s_1 (ATerm t)
        {
          t = term_v_9;
          return(t);
        }
        t = Option_3(t, q_1, r_1, s_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  f_18 = t;
  d_18 :
  if(match_string(f_18, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
        {
          g_18 = ATgetFirst((ATermList) f_18);
          h_18 = (ATerm) ATgetNext((ATermList) f_18);
          e_18 :
          if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
            {
              i_18 = ATgetFirst((ATermList) h_18);
              j_18 = (ATerm) ATgetNext((ATermList) h_18);
              {
                ATerm n_18 = NULL;
                ATerm w_9;
                w_9 = t;
                {
                  t = not_null(g_18);
                  t = j_0(t);
                }
                t = w_9;
                {
                  ATerm o_18 = NULL;
                  t = not_null(i_18);
                  {
                    t = k_0(t);
                    {
                      o_18 = t;
                      if(((n_18 != NULL) && (n_18 != o_18)))
                        _fail(o_18);
                      else
                        n_18 = o_18;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_18)), not_null(n_18));
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
  ATerm v_1 (ATerm t)
  {
    ATerm v_18 = NULL;
    v_18 = t;
    s_18 :
    if(!(match_string(v_18, "-i")))
      {
        if(!(match_string(v_18, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm y_18 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm w_18 = NULL;
      ATerm x_18 = NULL;
      x_18 = t;
      if(((w_18 != NULL) && (w_18 != x_18)))
        _fail(x_18);
      else
        w_18 = x_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(w_18));
        t = set_config_0(t);
      }
    }
    t = x_9;
    {
      ATerm z_18 = NULL;
      z_18 = t;
      if(((y_18 != NULL) && (y_18 != z_18)))
        _fail(z_18);
      else
        y_18 = z_18;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_18));
    }
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_b_10;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = c_10;
      {
        ATerm k_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = k_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = report_run_time_0(t);
  {
    ATerm e_19 = NULL;
    t = term_g_4;
    {
      t = whoami_0(t);
      {
        e_19 = t;
        if(((d_19 != NULL) && (d_19 != e_19)))
          _fail(e_19);
        else
          d_19 = e_19;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, term_o_10), not_null(d_19)));
      {
        t = printnl_0(t);
        {
          t = term_k_4;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_p_10;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  t = SSL_TicksToSeconds(not_null(h_19));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_19), not_null(o_19));
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = SSL_addr(not_null(n_19), not_null(o_19));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm))
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_90(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
        v_19 = t;
        u_19 :
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            w_19 = ATgetFirst((ATermList) v_19);
            x_19 = (ATerm) ATgetNext((ATermList) v_19);
            {
              ATerm a_20 = NULL;
              ATerm b_20 = NULL;
              t = not_null(x_19);
              {
                t = foldr_2(t, w_90, x_90);
                {
                  b_20 = t;
                  if(((a_20 != NULL) && (a_20 != b_20)))
                    _fail(b_20);
                  else
                    a_20 = b_20;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(a_20));
                t = x_90(t);
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
ATerm crush_2 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm i_20 = NULL;
  ATerm k_20 = NULL;
  i_20 = t;
  {
    ATerm l_20 = NULL;
    ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
    t = not_null(i_20);
    {
      l_20 = t;
      {
        t = SSL_explode_term(not_null(l_20));
        {
          n_20 = t;
          h_20 :
          if(match_cons(n_20, sym__2))
            {
              o_20 = ATgetArgument(n_20, 0);
              p_20 = ATgetArgument(n_20, 1);
              if(((k_20 != NULL) && (k_20 != p_20)))
                _fail(p_20);
              else
                k_20 = p_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_20);
      t = foldr_2(t, p_94, q_94);
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
    ATerm n_2 (ATerm t)
    {
      t = term_e_8;
      return(t);
    }
    t = crush_2(t, n_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      {
        ATerm c_11;
        c_11 = t;
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_20), not_null(x_20));
              ;
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              t = SSL_gtr(not_null(w_20), not_null(x_20));
            }
        }
        t = c_11;
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
  ATerm d_21 = NULL;
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
      e_21 = t;
      c_21 :
      if(match_cons(e_21, sym__2))
        {
          f_21 = ATgetArgument(e_21, 0);
          g_21 = ATgetArgument(e_21, 1);
          {
            if(((d_21 != NULL) && (d_21 != f_21)))
              _fail(f_21);
            else
              d_21 = f_21;
            if(((d_21 != NULL) && (d_21 != g_21)))
              _fail(g_21);
            else
              d_21 = g_21;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm o_11;
    o_11 = t;
    {
      ATerm j_21 = NULL;
      ATerm k_21 = NULL;
      t = term_u_5;
      {
        t = get_config_0(t);
        {
          k_21 = t;
          if(((j_21 != NULL) && (j_21 != k_21)))
            _fail(k_21);
          else
            j_21 = k_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), term_k_4);
        t = geq_0(t);
      }
    }
    t = o_11;
    t = k_98(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm o_21 = NULL,q_21 = NULL;
    ATerm p_11;
    p_11 = t;
    {
      ATerm p_21 = NULL;
      t = run_time_0(t);
      {
        p_21 = t;
        if(((o_21 != NULL) && (o_21 != p_21)))
          _fail(p_21);
        else
          o_21 = p_21;
      }
    }
    t = p_11;
    {
      ATerm r_21 = NULL;
      t = term_g_4;
      {
        t = whoami_0(t);
        {
          r_21 = t;
          if(((q_21 != NULL) && (q_21 != r_21)))
            _fail(r_21);
          else
            q_21 = r_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_11), not_null(o_21)), term_q_11), not_null(q_21)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_e_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym_Version_0))
    {
      ATerm a_22 = NULL,c_22 = NULL;
      ATerm y_11;
      y_11 = t;
      {
        ATerm b_22 = NULL;
        t = SSLgetAnnotations(not_null(y_21));
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
      }
      t = y_11;
      {
        ATerm d_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_22));
        {
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
        }
        t = not_null(c_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_101 (ATerm))
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_12;
      t = get_config_0(t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                ATerm h_12 = t;
                int i_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(i_12);
                  }
                else
                  {
                    t = h_12;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, q_2);
      }
    }
  t = h_101(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  t = SSL_table_create(not_null(i_22));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  {
    ATerm j_12;
    j_12 = t;
    {
      t = term_k_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, not_null(m_22));
          t = table_put_0(t);
        }
      }
    }
    t = j_12;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_table_destroy(not_null(q_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_exit(not_null(u_22));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_103 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm x_22 (ATerm t)
  {
    ATerm n_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = n_12;
        t = Cons_2(t, v_84, x_22);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  g_23 = t;
  d_23 :
  if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
    {
      e_23 = ATgetFirst((ATermList) g_23);
      f_23 = (ATerm) ATgetNext((ATermList) g_23);
      {
        ATerm j_23 = NULL;
        t = not_null(f_23);
        {
          ATerm s_12;
          s_12 = t;
          {
            ATerm k_23 = NULL,m_23 = NULL,o_23 = NULL;
            ATerm t_12;
            t_12 = t;
            {
              ATerm l_23 = NULL;
              t = i_0(t);
              {
                l_23 = t;
                if(((k_23 != NULL) && (k_23 != l_23)))
                  _fail(l_23);
                else
                  k_23 = l_23;
              }
            }
            t = t_12;
            {
              ATerm n_23 = NULL;
              t = not_null(e_23);
              {
                t = g_0(t);
                {
                  n_23 = t;
                  if(((m_23 != NULL) && (m_23 != n_23)))
                    _fail(n_23);
                  else
                    m_23 = n_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_23)), not_null(m_23));
                {
                  o_23 = t;
                  if(((j_23 != NULL) && (j_23 != o_23)))
                    _fail(o_23);
                  else
                    j_23 = o_23;
                }
              }
            }
          }
          t = s_12;
          {
            ATerm r_2 (ATerm t)
            {
              t = not_null(j_23);
              return(t);
            }
            t = reverse_acc_2(t, g_0, r_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_23) == AT_LIST) && ATisEmpty(g_23)))
        {
          {
            t = term_g_4;
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
  ATerm s_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_103 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym_Program_1))
    {
      a_24 = ATgetArgument(z_23, 0);
      {
        ATerm d_24 = NULL,f_24 = NULL;
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(z_23));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
        {
          t = not_null(a_24);
          {
            ATerm h_24 = NULL;
            t = e_77(t);
            {
              f_24 = t;
              {
                ATerm i_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_24)), not_null(d_24));
                {
                  i_24 = t;
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                }
                t = not_null(h_24);
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
  ATerm r_24 = NULL;
  ATerm u_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24 = NULL;
      t = term_p_10;
      {
        t = get_config_0(t);
        {
          s_24 = t;
          if(((r_24 != NULL) && (r_24 != s_24)))
            _fail(s_24);
          else
            r_24 = s_24;
        }
      }
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = u_12;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            ATerm t_24 = NULL;
            t_24 = t;
            if(((r_24 != NULL) && (r_24 != t_24)))
              _fail(t_24);
            else
              r_24 = t_24;
            return(t);
          }
          t = Program_1(t, u_2);
          return(t);
        }
        t = option_defined_1(t, t_2);
      }
    }
  {
    ATerm v_2 (ATerm t)
    {
      ATerm w_2 (ATerm t)
      {
        t = not_null(r_24);
        return(t);
      }
      t = short_description_1(t, w_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_2);
    {
      t = term_a_13;
      {
        t = echo_0(t);
        {
          t = term_h_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm u_24 = NULL;
                  ATerm v_24 = NULL;
                  v_24 = t;
                  if(((u_24 != NULL) && (u_24 != v_24)))
                    _fail(v_24);
                  else
                    u_24 = v_24;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_24)), term_i_13);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_2);
                {
                  ATerm y_2 (ATerm t)
                  {
                    ATerm w_24 = NULL;
                    ATerm x_24 = NULL;
                    ATerm z_2 (ATerm t)
                    {
                      t = not_null(r_24);
                      return(t);
                    }
                    t = long_description_1(t, z_2);
                    {
                      x_24 = t;
                      if(((w_24 != NULL) && (w_24 != x_24)))
                        _fail(x_24);
                      else
                        w_24 = x_24;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_24)), term_l_13);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_2);
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_Undefined_1))
    {
      i_25 = ATgetArgument(h_25, 0);
      {
        ATerm l_25 = NULL,n_25 = NULL;
        ATerm m_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        {
          t = not_null(i_25);
          {
            ATerm p_25 = NULL;
            t = f_77(t);
            {
              n_25 = t;
              {
                ATerm q_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_25)), not_null(l_25));
                {
                  q_25 = t;
                  if(((p_25 != NULL) && (p_25 != q_25)))
                    _fail(q_25);
                  else
                    p_25 = q_25;
                }
                t = not_null(p_25);
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
ATerm fetch_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm v_25 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_85, _id);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = Cons_2(t, _id, v_25);
      }
    return(t);
  }
  t = v_25(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_102 (ATerm))
{
  t = fetch_1(t, h_102);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(((ATgetType(x_25) == AT_LIST) && ATisEmpty(x_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
        {
          y_25 = ATgetFirst((ATermList) x_25);
          z_25 = (ATerm) ATgetNext((ATermList) x_25);
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
  ATerm r_13;
  r_13 = t;
  {
    ATerm c_26 = NULL;
    ATerm f_26 = NULL;
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
          ATerm d_26 = NULL;
          ATerm e_26 = NULL;
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
          t = (ATerm) ATinsert(ATempty, not_null(d_26));
        }
      }
    {
      f_26 = t;
      if(((c_26 != NULL) && (c_26 != f_26)))
        _fail(f_26);
      else
        c_26 = f_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(c_26));
      t = printnl_0(t);
    }
  }
  t = r_13;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_p_10;
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
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym_Help_0))
    {
      ATerm o_26 = NULL,q_26 = NULL;
      ATerm c_14;
      c_14 = t;
      {
        ATerm p_26 = NULL;
        t = SSLgetAnnotations(not_null(m_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
      }
      t = c_14;
      {
        ATerm r_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_26));
        {
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
        }
        t = not_null(q_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_77(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      {
      }
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm f_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm x_26 = NULL;
        x_26 = t;
        v_26 :
        if(!(match_string(x_26, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_k_14;
        t = set_config_0(t);
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_l_14;
        return(t);
      }
      t = Option_3(t, a_3, b_3, c_3);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = f_14;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm y_26 = NULL;
          y_26 = t;
          w_26 :
          if(!(match_string(y_26, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = term_k_14;
          {
            t = set_config_0(t);
            {
              t = term_n_14;
              t = set_config_0(t);
            }
          }
          t = term_s_14;
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_w_14;
          return(t);
        }
        t = Option_3(t, d_3, e_3, f_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym__2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      t = SSL_table_get(not_null(c_27), not_null(d_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__3))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      t_28 = ATgetArgument(q_28, 2);
      {
        ATerm c_15;
        c_15 = t;
        {
          ATerm x_28 = NULL;
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(s_28));
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), not_null(s_28), (ATerm) ATinsert(CheckATermList(not_null(x_28)), not_null(t_28)));
            t = table_put_0(t);
          }
        }
        t = c_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_103 (ATerm))
{
  ATerm c_29 = NULL;
  ATerm d_29 = NULL;
  t = term_g_4;
  {
    t = m_103(t);
    {
      d_29 = t;
      if(((c_29 != NULL) && (c_29 != d_29)))
        _fail(d_29);
      else
        c_29 = d_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_13, term_c_13, not_null(c_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_string(j_29, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
        {
          k_29 = ATgetFirst((ATermList) j_29);
          l_29 = (ATerm) ATgetNext((ATermList) j_29);
          {
            ATerm o_29 = NULL;
            ATerm f_15;
            f_15 = t;
            {
              t = not_null(k_29);
              t = a_0(t);
            }
            t = f_15;
            {
              ATerm p_29 = NULL;
              t = term_g_4;
              {
                t = b_0(t);
                {
                  p_29 = t;
                  if(((o_29 != NULL) && (o_29 != p_29)))
                    _fail(p_29);
                  else
                    o_29 = p_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_29)), not_null(o_29));
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
  ATerm g_3 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    t_29 :
    if(!(match_string(u_29, "--help")))
      {
        if(!(match_string(u_29, "-h")))
          {
            if(!(match_string(u_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_g_15;
    {
      t = set_config_0(t);
      t = term_o_15;
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_p_15;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  b_30 :
  if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
    {
      d_30 = ATgetFirst((ATermList) c_30);
      e_30 = (ATerm) ATgetNext((ATermList) c_30);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_30)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_30)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  n_30 :
  if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
    {
      s_30 = ATgetFirst((ATermList) r_30);
      t_30 = (ATerm) ATgetNext((ATermList) r_30);
      {
        ATerm x_30 = NULL,z_30 = NULL;
        ATerm y_30 = NULL;
        t = SSLgetAnnotations(not_null(r_30));
        {
          y_30 = t;
          if(((x_30 != NULL) && (x_30 != y_30)))
            _fail(y_30);
          else
            x_30 = y_30;
        }
        {
          t = not_null(s_30);
          {
            ATerm b_31 = NULL;
            t = l_63(t);
            {
              z_30 = t;
              {
                t = not_null(t_30);
                {
                  ATerm d_31 = NULL;
                  t = m_63(t);
                  {
                    b_31 = t;
                    {
                      ATerm e_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_31)), not_null(z_30)), not_null(x_30));
                      {
                        e_31 = t;
                        if(((d_31 != NULL) && (d_31 != e_31)))
                          _fail(e_31);
                        else
                          d_31 = e_31;
                      }
                      t = not_null(d_31);
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
  ATerm o_31 = NULL;
  o_31 = t;
  n_31 :
  if(((ATgetType(o_31) == AT_LIST) && ATisEmpty(o_31)))
    {
      {
        ATerm q_31 = NULL,s_31 = NULL;
        ATerm q_15;
        q_15 = t;
        {
          ATerm r_31 = NULL;
          t = SSLgetAnnotations(not_null(o_31));
          {
            r_31 = t;
            if(((q_31 != NULL) && (q_31 != r_31)))
              _fail(r_31);
            else
              q_31 = r_31;
          }
        }
        t = q_15;
        {
          ATerm t_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_31));
          {
            t_31 = t;
            if(((s_31 != NULL) && (s_31 != t_31)))
              _fail(t_31);
            else
              s_31 = t_31;
          }
          t = not_null(s_31);
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
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym__2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_5, not_null(a_32), not_null(b_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm r_15;
  r_15 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_s_15;
      t = k_103(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = r_15;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm j_32 = NULL;
      ATerm x_15;
      x_15 = t;
      {
        ATerm h_32 = NULL;
        ATerm i_32 = NULL;
        i_32 = t;
        if(((h_32 != NULL) && (h_32 != i_32)))
          _fail(i_32);
        else
          h_32 = i_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(h_32));
          t = set_config_0(t);
        }
      }
      t = x_15;
      {
        ATerm k_32 = NULL;
        k_32 = t;
        if(((j_32 != NULL) && (j_32 != k_32)))
          _fail(k_32);
        else
          j_32 = k_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_32));
      }
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = a_16;
              {
                t = k_103(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          ;
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  ATerm g_16;
  g_16 = t;
  {
    ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
    t_32 = t;
    p_32 :
    if(match_cons(t_32, sym__3))
      {
        u_32 = ATgetArgument(t_32, 0);
        v_32 = ATgetArgument(t_32, 1);
        w_32 = ATgetArgument(t_32, 2);
        {
          if(((q_32 != NULL) && (q_32 != u_32)))
            _fail(u_32);
          else
            q_32 = u_32;
          {
            if(((r_32 != NULL) && (r_32 != v_32)))
              _fail(v_32);
            else
              r_32 = v_32;
            {
              if(((s_32 != NULL) && (s_32 != w_32)))
                _fail(w_32);
              else
                s_32 = w_32;
              t = SSL_table_put(not_null(q_32), not_null(r_32), not_null(s_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm z_32 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    t = term_j_16;
    t = table_put_0(t);
  }
  t = h_16;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_103(t);
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          {
            ATerm r_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(v_16);
              }
            else
              {
                t = r_16;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm w_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16;
            z_16 = t;
            {
              ATerm c_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_12;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = c_17;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = z_16;
            {
              t = system_usage_0(t);
              {
                t = term_e_8;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = w_16;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_17;
                  p_17 = t;
                  {
                    t = term_j_14;
                    t = get_config_0(t);
                  }
                  t = p_17;
                  {
                    t = system_about_0(t);
                    {
                      t = term_e_8;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  {
                    ATerm o_3 (ATerm t)
                    {
                      ATerm p_3 (ATerm t)
                      {
                        ATerm a_33 = NULL;
                        a_33 = t;
                        if(((z_32 != NULL) && (z_32 != a_33)))
                          _fail(a_33);
                        else
                          z_32 = a_33;
                        return(t);
                      }
                      t = Undefined_1(t, p_3);
                      return(t);
                    }
                    t = option_defined_1(t, o_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_32)), term_q_17));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_k_4;
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
      t = try_1(t, n_3);
      {
        ATerm w_17;
        w_17 = t;
        {
          t = term_b_13;
          t = table_destroy_0(t);
        }
        t = w_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm m_101 (ATerm))
{
  t = parse_options_1(t, j_101);
  {
    t = store_options_0(t);
    {
      t = l_101(t);
      {
        ATerm x_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_101);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = x_17;
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_101(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_100(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_100);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_3, a_101, b_101, r_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm m_18;
      m_18 = t;
      {
        ATerm d_33 = NULL;
        ATerm e_33 = NULL;
        t = term_p_10;
        {
          t = get_config_0(t);
          {
            e_33 = t;
            if(((d_33 != NULL) && (d_33 != e_33)))
              _fail(e_33);
            else
              d_33 = e_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_4, (ATerm) ATinsert(ATempty, not_null(d_33)));
          t = printnl_0(t);
        }
      }
      t = m_18;
      return(t);
    }
    t = if_verbose2_1(t, t_3);
    return(t);
  }
  t = iowrap_4(t, s_100, t_100, u_100, s_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_100 (ATerm), ATerm r_100 (ATerm))
{
  t = iowrap_3(t, q_100, r_100, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    t = _2(t, _id, n_100);
    return(t);
  }
  t = iowrap_2(t, u_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DesugarAssign_0(t);
            ;
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = DesugarCase_0(t);
          }
        return(t);
      }
      t = repeat_1(t, x_3);
      return(t);
    }
    t = topdown_1(t, w_3);
    return(t);
  }
  t = iowrap_1(t, v_3);
  return(t);
}
