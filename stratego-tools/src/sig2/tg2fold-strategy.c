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
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_TupleCong_0;
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
Symbol sym_TreeGrammar_1;
Symbol sym_NonTermRef_2;
Symbol sym_NonTermDec_3;
Symbol sym_Prod_2;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
Symbol sym_Id_1;
Symbol sym_NonTermRef_2;
Symbol sym_Param_1;
Symbol sym_String_0;
Symbol sym_Int_0;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
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
  sym_TreeGrammar_1 = ATmakeSymbol("TreeGrammar", 1, ATfalse);
  ATprotectSymbol(sym_TreeGrammar_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_NonTermDec_3 = ATmakeSymbol("NonTermDec", 3, ATfalse);
  ATprotectSymbol(sym_NonTermDec_3);
  sym_Prod_2 = ATmakeSymbol("Prod", 2, ATfalse);
  ATprotectSymbol(sym_Prod_2);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_NonTermRef_2 = ATmakeSymbol("NonTermRef", 2, ATfalse);
  ATprotectSymbol(sym_NonTermRef_2);
  sym_Param_1 = ATmakeSymbol("Param", 1, ATfalse);
  ATprotectSymbol(sym_Param_1);
  sym_String_0 = ATmakeSymbol("String", 0, ATfalse);
  ATprotectSymbol(sym_String_0);
  sym_Int_0 = ATmakeSymbol("Int", 0, ATfalse);
  ATprotectSymbol(sym_Int_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
ATerm term_e_21;
ATerm term_o_20;
ATerm term_s_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_y_11;
ATerm term_l_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_t_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-string", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_5);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_5);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("is-int", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_5);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_f_5);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to-s", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to-", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("is-", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("fold-strategy", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_RootApp_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("T2-", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TODO", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("cond", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("transform", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("children", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_e_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("nt", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Var_1, term_i_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_6);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_o_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("risky", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("concat-strings", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_8);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nTransformation failed when trying to transform to ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Str_1, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n-------------\n", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_Str_1, term_h_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_l_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\nExpected ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Str_1, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(", but found:\n-------------\n", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Str_1, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_v_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_t_5);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_t_5);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_t_5);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_t_5);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__3, term_w_17, term_z_17, (ATerm) ATempty);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm arg_to_fold_arg_0 (ATerm);
ATerm prod_to_cong_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm to_Typedid_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm to_nt_paramname_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm q_80 (ATerm));
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_91 (ATerm), ATerm j_91 (ATerm));
ATerm for_3 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm));
ATerm copy_0 (ATerm);
ATerm int_to_int_list_0 (ATerm);
ATerm to_nt_0 (ATerm);
ATerm is_nt_0 (ATerm);
ATerm to_nt_sdef_0 (ATerm);
ATerm t2_nt_0 (ATerm);
ATerm t2_sdef_0 (ATerm);
ATerm T2_Module_0 (ATerm);
ATerm _2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_98 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_72 (ATerm));
ATerm debug_1 (ATerm, ATerm j_74 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
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
ATerm foldr_2 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm));
ATerm crush_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_98 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_73 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_90 (ATerm));
ATerm map_1 (ATerm, ATerm v_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_90 (ATerm));
ATerm Program_1 (ATerm, ATerm o_71 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_72 (ATerm));
ATerm io_tg2fold_strategy_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(t_1);
    {
      b_2 = t;
      {
        t = SSL_explode_term(not_null(b_2));
        {
          d_2 = t;
          f_1 :
          if(match_cons(d_2, sym__2))
            {
              e_2 = ATgetArgument(d_2, 0);
              f_2 = ATgetArgument(d_2, 1);
              g_1 :
              if(match_string(e_2, ""))
                {
                  h_1 :
                  if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      h_2 = (ATerm) ATgetNext((ATermList) f_2);
                      s_1 :
                      if(((ATgetType(h_2) == AT_LIST) && !(ATisEmpty(h_2))))
                        {
                          i_2 = ATgetFirst((ATermList) h_2);
                          j_2 = (ATerm) ATgetNext((ATermList) h_2);
                          {
                            if(((y_1 != NULL) && (y_1 != g_2)))
                              _fail(g_2);
                            else
                              y_1 = g_2;
                            {
                              if(((a_2 != NULL) && (a_2 != i_2)))
                                _fail(i_2);
                              else
                                a_2 = i_2;
                              if(((z_1 != NULL) && (z_1 != j_2)))
                                _fail(j_2);
                              else
                                z_1 = j_2;
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
    t = not_null(a_2);
  }
  return(t);
}
ATerm arg_to_fold_arg_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  w_2 = t;
  u_2 :
  if(match_cons(w_2, sym_Param_1))
    {
      x_2 = ATgetArgument(w_2, 0);
      {
        ATerm b_3 = NULL;
        ATerm c_3 = NULL;
        t = not_null(x_2);
        {
          t = to_nt_paramname_0(t);
          {
            c_3 = t;
            if(((b_3 != NULL) && (b_3 != c_3)))
              _fail(c_3);
            else
              b_3 = c_3;
          }
        }
        t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(b_3)));
      }
    }
  else
    {
      if(match_cons(w_2, sym_String_0))
        {
          t = term_c_5;
        }
      else
        {
          if(match_cons(w_2, sym_Int_0))
            {
              t = term_g_5;
            }
          else
            {
              if(match_cons(w_2, sym_NonTermRef_2))
                {
                  x_2 = ATgetArgument(w_2, 0);
                  z_2 = ATgetArgument(w_2, 1);
                  v_2 :
                  if(match_cons(x_2, sym_Id_1))
                    {
                      y_2 = ATgetArgument(x_2, 0);
                      {
                        ATerm f_3 = NULL,g_3 = NULL;
                        ATerm h_3 = NULL;
                        t = not_null(y_2);
                        {
                          ATerm i_3 = NULL;
                          t = to_nt_0(t);
                          {
                            h_3 = t;
                            {
                              if(((f_3 != NULL) && (f_3 != h_3)))
                                _fail(h_3);
                              else
                                f_3 = h_3;
                              {
                                t = not_null(z_2);
                                {
                                  t = map_1(t, arg_to_fold_arg_0);
                                  {
                                    i_3 = t;
                                    if(((g_3 != NULL) && (g_3 != i_3)))
                                      _fail(i_3);
                                    else
                                      g_3 = i_3;
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_3)), not_null(g_3));
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
  return(t);
}
ATerm prod_to_cong_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym_Prod_2))
    {
      v_3 = ATgetArgument(u_3, 0);
      x_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(match_cons(v_3, sym_Id_1))
        {
          w_3 = ATgetArgument(v_3, 0);
          {
            ATerm a_4 = NULL;
            ATerm b_4 = NULL;
            t = not_null(x_3);
            {
              t = map_1(t, arg_to_fold_arg_0);
              {
                b_4 = t;
                if(((a_4 != NULL) && (a_4 != b_4)))
                  _fail(b_4);
                else
                  a_4 = b_4;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_3)), not_null(a_4));
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
ATerm Fst_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm m_4 = NULL,n_4 = NULL;
  k_4 = t;
  {
    ATerm o_4 = NULL;
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
    t = not_null(k_4);
    {
      o_4 = t;
      {
        t = SSL_explode_term(not_null(o_4));
        {
          q_4 = t;
          h_4 :
          if(match_cons(q_4, sym__2))
            {
              r_4 = ATgetArgument(q_4, 0);
              s_4 = ATgetArgument(q_4, 1);
              i_4 :
              if(match_string(r_4, ""))
                {
                  j_4 :
                  if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
                    {
                      t_4 = ATgetFirst((ATermList) s_4);
                      u_4 = (ATerm) ATgetNext((ATermList) s_4);
                      {
                        if(((n_4 != NULL) && (n_4 != t_4)))
                          _fail(t_4);
                        else
                          n_4 = t_4;
                        if(((m_4 != NULL) && (m_4 != u_4)))
                          _fail(u_4);
                        else
                          m_4 = u_4;
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
    t = not_null(n_4);
  }
  return(t);
}
ATerm to_Typedid_0 (ATerm t)
{
  ATerm z_4 = NULL;
  z_4 = t;
  {
    t = not_null(z_4);
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, not_null(z_4));
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = SSL_int_to_string(not_null(d_5));
  return(t);
}
ATerm to_nt_paramname_0 (ATerm t)
{
  ATerm h_5 = NULL;
  ATerm i_5 = NULL;
  t = int_to_string_0(t);
  {
    i_5 = t;
    if(((h_5 != NULL) && (h_5 != i_5)))
      _fail(i_5);
    else
      h_5 = i_5;
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_5, not_null(h_5));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm inc_0 (ATerm t)
{
  ATerm l_5 = NULL;
  ATerm m_5 = NULL;
  m_5 = t;
  if(((l_5 != NULL) && (l_5 != m_5)))
    _fail(m_5);
  else
    l_5 = m_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_k_5);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm w_5 = NULL;
  ATerm x_5 = NULL;
  x_5 = t;
  if(((w_5 != NULL) && (w_5 != x_5)))
    _fail(x_5);
  else
    w_5 = x_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_5, not_null(w_5));
    {
      ATerm n_6 (ATerm t)
      {
        ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
        y_5 = t;
        u_5 :
        if(match_cons(y_5, sym__2))
          {
            z_5 = ATgetArgument(y_5, 0);
            a_6 = ATgetArgument(y_5, 1);
            v_5 :
            if(((ATgetType(a_6) == AT_LIST) && ATisEmpty(a_6)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
                  {
                    b_6 = ATgetFirst((ATermList) a_6);
                    c_6 = (ATerm) ATgetNext((ATermList) a_6);
                    {
                      ATerm g_6 = NULL,i_6 = NULL;
                      ATerm n_5;
                      n_5 = t;
                      {
                        ATerm h_6 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(b_6));
                        {
                          t = q_80(t);
                          {
                            h_6 = t;
                            if(((g_6 != NULL) && (g_6 != h_6)))
                              _fail(h_6);
                            else
                              g_6 = h_6;
                          }
                        }
                      }
                      t = n_5;
                      {
                        ATerm j_6 = NULL,l_6 = NULL;
                        ATerm k_6 = NULL;
                        t = not_null(z_5);
                        {
                          t = inc_0(t);
                          {
                            k_6 = t;
                            if(((j_6 != NULL) && (j_6 != k_6)))
                              _fail(k_6);
                            else
                              j_6 = k_6;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(c_6));
                          {
                            t = n_6(t);
                            {
                              l_6 = t;
                              if(((i_6 != NULL) && (i_6 != l_6)))
                                _fail(l_6);
                              else
                                i_6 = l_6;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(i_6)), not_null(g_6));
                      }
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
      t = n_6(t);
    }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym__2))
    {
      w_6 = ATgetArgument(v_6, 0);
      x_6 = ATgetArgument(v_6, 1);
      {
        ATerm o_5 = t;
        int p_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_6), not_null(x_6));
            ;
            LocalPopChoice(p_5);
          }
        else
          {
            t = o_5;
            t = SSL_subtr(not_null(w_6), not_null(x_6));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm i_91 (ATerm), ATerm j_91 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm q_5 = t;
    int r_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_91(t);
        ;
        LocalPopChoice(r_5);
      }
    else
      {
        t = q_5;
        {
          t = j_91(t);
          t = b_7(t);
        }
      }
    return(t);
  }
  t = b_7(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  t = l_91(t);
  t = while_not_2(t, m_91, n_91);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
    k_7 = t;
    d_7 :
    if(match_cons(k_7, sym__2))
      {
        l_7 = ATgetArgument(k_7, 0);
        m_7 = ATgetArgument(k_7, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(l_7), not_null(m_7), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm e_0 (ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
    p_7 = t;
    f_7 :
    if(match_cons(p_7, sym__3))
      {
        q_7 = ATgetArgument(p_7, 0);
        r_7 = ATgetArgument(p_7, 1);
        s_7 = ATgetArgument(p_7, 2);
        g_7 :
        if(match_int(q_7, 0))
          {
            t = not_null(s_7);
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
  ATerm f_0 (ATerm t)
  {
    ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
    v_7 = t;
    j_7 :
    if(match_cons(v_7, sym__3))
      {
        w_7 = ATgetArgument(v_7, 0);
        x_7 = ATgetArgument(v_7, 1);
        y_7 = ATgetArgument(v_7, 2);
        {
          ATerm c_8 = NULL;
          ATerm s_5;
          s_5 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_k_5);
            t = geq_0(t);
          }
          t = s_5;
          {
            ATerm d_8 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_k_5);
            {
              t = subt_0(t);
              {
                d_8 = t;
                if(((c_8 != NULL) && (c_8 != d_8)))
                  _fail(d_8);
                else
                  c_8 = d_8;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_8), not_null(x_7), (ATerm) ATinsert(CheckATermList(not_null(y_7)), not_null(x_7)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, c_0, e_0, f_0);
  return(t);
}
ATerm int_to_int_list_0 (ATerm t)
{
  ATerm j_8 = NULL;
  ATerm k_8 = NULL;
  k_8 = t;
  if(((j_8 != NULL) && (j_8 != k_8)))
    _fail(k_8);
  else
    j_8 = k_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_8), term_t_5);
    {
      t = copy_0(t);
      t = map_with_index_1(t, Fst_0);
    }
  }
  return(t);
}
ATerm to_nt_0 (ATerm t)
{
  ATerm n_8 = NULL;
  ATerm o_8 = NULL;
  o_8 = t;
  if(((n_8 != NULL) && (n_8 != o_8)))
    _fail(o_8);
  else
    n_8 = o_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_6, not_null(n_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm is_nt_0 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm s_8 = NULL;
  s_8 = t;
  if(((r_8 != NULL) && (r_8 != s_8)))
    _fail(s_8);
  else
    r_8 = s_8;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_6, not_null(r_8));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm to_nt_sdef_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  e_9 = t;
  c_9 :
  if(match_cons(e_9, sym_NonTermDec_3))
    {
      f_9 = ATgetArgument(e_9, 0);
      h_9 = ATgetArgument(e_9, 1);
      i_9 = ATgetArgument(e_9, 2);
      d_9 :
      if(match_cons(f_9, sym_Id_1))
        {
          g_9 = ATgetArgument(f_9, 0);
          {
            ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
            ATerm r_9 = NULL;
            t = not_null(g_9);
            {
              ATerm s_9 = NULL;
              t = t2_nt_0(t);
              {
                r_9 = t;
                {
                  if(((m_9 != NULL) && (m_9 != r_9)))
                    _fail(r_9);
                  else
                    m_9 = r_9;
                  {
                    t = not_null(g_9);
                    {
                      ATerm t_9 = NULL;
                      t = is_nt_0(t);
                      {
                        s_9 = t;
                        {
                          if(((n_9 != NULL) && (n_9 != s_9)))
                            _fail(s_9);
                          else
                            n_9 = s_9;
                          {
                            t = not_null(g_9);
                            {
                              ATerm u_9 = NULL;
                              t = to_nt_0(t);
                              {
                                t_9 = t;
                                {
                                  if(((o_9 != NULL) && (o_9 != t_9)))
                                    _fail(t_9);
                                  else
                                    o_9 = t_9;
                                  {
                                    t = not_null(h_9);
                                    {
                                      t = int_to_int_list_0(t);
                                      {
                                        ATerm z_9 = NULL;
                                        ATerm h_0 (ATerm t)
                                        {
                                          t = to_nt_paramname_0(t);
                                          t = to_Typedid_0(t);
                                          return(t);
                                        }
                                        t = map_1(t, h_0);
                                        {
                                          u_9 = t;
                                          {
                                            if(((p_9 != NULL) && (p_9 != u_9)))
                                              _fail(u_9);
                                            else
                                              p_9 = u_9;
                                            {
                                              t = not_null(i_9);
                                              {
                                                ATerm m_0 (ATerm t)
                                                {
                                                  t = term_f_6;
                                                  return(t);
                                                }
                                                ATerm n_0 (ATerm t)
                                                {
                                                  ATerm v_9 = NULL,x_9 = NULL;
                                                  ATerm m_6;
                                                  m_6 = t;
                                                  {
                                                    ATerm w_9 = NULL;
                                                    t = Fst_0(t);
                                                    {
                                                      t = prod_to_cong_0(t);
                                                      {
                                                        w_9 = t;
                                                        if(((v_9 != NULL) && (v_9 != w_9)))
                                                          _fail(w_9);
                                                        else
                                                          v_9 = w_9;
                                                      }
                                                    }
                                                  }
                                                  t = m_6;
                                                  {
                                                    ATerm y_9 = NULL;
                                                    t = Snd_0(t);
                                                    {
                                                      y_9 = t;
                                                      if(((x_9 != NULL) && (x_9 != y_9)))
                                                        _fail(y_9);
                                                      else
                                                        x_9 = y_9;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_9), not_null(x_9));
                                                  }
                                                  return(t);
                                                }
                                                t = foldr_2(t, m_0, n_0);
                                                {
                                                  z_9 = t;
                                                  if(((q_9 != NULL) && (q_9 != z_9)))
                                                    _fail(z_9);
                                                  else
                                                    q_9 = z_9;
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
            t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_9), not_null(p_9), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_9)), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(m_9)))), (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_9))))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_r_6), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_9))))));
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
ATerm t2_nt_0 (ATerm t)
{
  ATerm j_10 = NULL;
  ATerm k_10 = NULL;
  k_10 = t;
  if(((j_10 != NULL) && (j_10 != k_10)))
    _fail(k_10);
  else
    j_10 = k_10;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(j_10));
    t = conc_strings_0(t);
  }
  return(t);
}
ATerm t2_sdef_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  q_10 = t;
  o_10 :
  if(match_cons(q_10, sym_NonTermDec_3))
    {
      r_10 = ATgetArgument(q_10, 0);
      t_10 = ATgetArgument(q_10, 1);
      u_10 = ATgetArgument(q_10, 2);
      p_10 :
      if(match_cons(r_10, sym_Id_1))
        {
          s_10 = ATgetArgument(r_10, 0);
          {
            ATerm w_10 = NULL;
            ATerm x_10 = NULL;
            t = not_null(s_10);
            {
              t = t2_nt_0(t);
              {
                x_10 = t;
                if(((w_10 != NULL) && (w_10 != x_10)))
                  _fail(x_10);
                else
                  w_10 = x_10;
              }
            }
            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, not_null(w_10), term_f_6);
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
ATerm T2_Module_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_TreeGrammar_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        ATerm h_11 = NULL,i_11 = NULL;
        ATerm j_11 = NULL;
        t = not_null(f_11);
        {
          ATerm k_11 = NULL;
          t = map_1(t, t2_sdef_0);
          {
            j_11 = t;
            {
              if(((h_11 != NULL) && (h_11 != j_11)))
                _fail(j_11);
              else
                h_11 = j_11;
              {
                t = not_null(f_11);
                {
                  t = map_1(t, to_nt_sdef_0);
                  {
                    k_11 = t;
                    if(((i_11 != NULL) && (i_11 != k_11)))
                      _fail(k_11);
                    else
                      i_11 = k_11;
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Module_2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_o_6, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_h_7), term_c_7), term_z_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_r_6), term_n_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, term_t_7, term_q_6, (ATerm) ATmakeAppl(sym_Call_2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, term_m_8), (ATerm) ATmakeAppl(sym_BA_2, term_e_8, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), term_n_7), term_g_8)))))), (ATerm) ATmakeAppl(sym_Call_2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, term_w_8), (ATerm) ATmakeAppl(sym_BA_2, term_e_8, (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), term_n_7), term_q_8))))))))))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_11))), (ATerm) ATmakeAppl(sym_Strategies_1, not_null(i_11))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym__2))
    {
      v_11 = ATgetArgument(u_11, 0);
      w_11 = ATgetArgument(u_11, 1);
      {
        ATerm a_12 = NULL,c_12 = NULL;
        ATerm b_12 = NULL;
        t = SSLgetAnnotations(not_null(u_11));
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
        {
          t = not_null(v_11);
          {
            ATerm e_12 = NULL;
            t = c_58(t);
            {
              c_12 = t;
              {
                t = not_null(w_11);
                {
                  ATerm g_12 = NULL;
                  t = d_58(t);
                  {
                    e_12 = t;
                    {
                      ATerm h_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_12), not_null(e_12)), not_null(a_12));
                      {
                        h_12 = t;
                        if(((g_12 != NULL) && (g_12 != h_12)))
                          _fail(h_12);
                        else
                          g_12 = h_12;
                      }
                      t = not_null(g_12);
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
  ATerm x_8;
  x_8 = t;
  {
    ATerm o_12 = NULL;
    ATerm p_12 = NULL;
    t = term_t_5;
    {
      t = whoami_0(t);
      {
        p_12 = t;
        if(((o_12 != NULL) && (o_12 != p_12)))
          _fail(p_12);
        else
          o_12 = p_12;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_9), not_null(o_12)), term_z_8));
      {
        t = printnl_0(t);
        {
          t = term_k_5;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm b_9;
        b_9 = t;
        t = SSL_printnl(not_null(u_12), not_null(v_12));
        t = b_9;
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
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_implode_string(not_null(a_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
        f_13 = t;
        e_13 :
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            g_13 = ATgetFirst((ATermList) f_13);
            h_13 = (ATerm) ATgetNext((ATermList) f_13);
            {
              t = not_null(g_13);
              {
                ATerm o_0 (ATerm t)
                {
                  t = not_null(h_13);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_0);
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
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm u_13 = NULL;
    ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(r_13);
    {
      u_13 = t;
      {
        t = SSL_explode_term(not_null(u_13));
        {
          w_13 = t;
          p_13 :
          if(match_cons(w_13, sym__2))
            {
              x_13 = ATgetArgument(w_13, 0);
              y_13 = ATgetArgument(w_13, 1);
              q_13 :
              if(match_string(x_13, ""))
                {
                  if(((t_13 != NULL) && (t_13 != y_13)))
                    _fail(y_13);
                  else
                    t_13 = y_13;
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
      t = not_null(t_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm c_14 (ATerm t)
  {
    ATerm l_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_14);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = l_9;
        {
          t = Nil_0(t);
          t = k_79(t);
        }
      }
    return(t);
  }
  t = c_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  e_14 :
  if(match_cons(f_14, sym__2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      {
        t = not_null(g_14);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(h_14);
            return(t);
          }
          t = at_end_1(t, p_0);
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_explode_string(not_null(m_14));
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
ATerm is_string_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_is_string(not_null(q_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_0);
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
              z_14 = t;
              y_14 :
              if(match_cons(z_14, sym_Path_1))
                {
                  a_15 = ATgetArgument(z_14, 0);
                  t = not_null(a_15);
                }
              else
                {
                  if(match_cons(z_14, sym_Var_1))
                    {
                      a_15 = ATgetArgument(z_14, 0);
                      {
                        t = not_null(a_15);
                        {
                          ATerm h_10 = t;
                          int i_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_10);
                            }
                          else
                            {
                              t = h_10;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_l_10;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_14, sym_Prefix_2))
                        {
                          a_15 = ATgetArgument(z_14, 0);
                          b_15 = ATgetArgument(z_14, 1);
                          {
                            ATerm g_15 = NULL,i_15 = NULL;
                            ATerm m_10;
                            m_10 = t;
                            {
                              ATerm h_15 = NULL;
                              t = not_null(a_15);
                              {
                                t = eval_config_0(t);
                                {
                                  h_15 = t;
                                  if(((g_15 != NULL) && (g_15 != h_15)))
                                    _fail(h_15);
                                  else
                                    g_15 = h_15;
                                }
                              }
                            }
                            t = m_10;
                            {
                              ATerm j_15 = NULL;
                              t = not_null(b_15);
                              {
                                t = eval_config_0(t);
                                {
                                  j_15 = t;
                                  if(((i_15 != NULL) && (i_15 != j_15)))
                                    _fail(j_15);
                                  else
                                    i_15 = j_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(i_15));
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
  ATerm r_15 = NULL;
  r_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(r_15));
    {
      t = table_get_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_10;
            v_10 = t;
            {
              ATerm t_15 = NULL;
              ATerm u_15 = NULL;
              u_15 = t;
              if(((t_15 != NULL) && (t_15 != u_15)))
                _fail(u_15);
              else
                t_15 = u_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_10, not_null(r_15), not_null(t_15));
                t = table_put_0(t);
              }
            }
            t = v_10;
          }
          return(t);
        }
        t = try_1(t, s_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm y_15 = NULL;
      ATerm z_15 = NULL;
      t = term_z_10;
      {
        t = get_config_0(t);
        {
          z_15 = t;
          if(((y_15 != NULL) && (y_15 != z_15)))
            _fail(z_15);
          else
            y_15 = z_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), term_a_11);
        t = geq_0(t);
      }
    }
    t = y_10;
    t = f_98(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym__2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      t = SSL_WriteToTextFile(not_null(e_16), not_null(f_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  k_16 :
  if(match_cons(l_16, sym__2))
    {
      m_16 = ATgetArgument(l_16, 0);
      n_16 = ATgetArgument(l_16, 1);
      t = SSL_WriteToBinaryFile(not_null(m_16), not_null(n_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_16 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm c_11 = t;
      int g_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_0 (ATerm t)
          {
            ATerm w_16 = NULL,x_16 = NULL;
            w_16 = t;
            s_16 :
            if(match_cons(w_16, sym_Output_1))
              {
                x_16 = ATgetArgument(w_16, 0);
                if(((v_16 != NULL) && (v_16 != x_16)))
                  _fail(x_16);
                else
                  v_16 = x_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_0);
          ;
          LocalPopChoice(g_11);
        }
      else
        {
          t = c_11;
          {
            ATerm y_16 = NULL;
            t = term_l_11;
            {
              y_16 = t;
              if(((v_16 != NULL) && (v_16 != y_16)))
                _fail(y_16);
              else
                v_16 = y_16;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_0, _id);
  }
  t = b_11;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = not_null(v_16);
        return(t);
      }
      t = split_2(t, x_0, _id);
      return(t);
    }
    t = _2(t, _id, w_0);
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm z_0 (ATerm t)
            {
              ATerm z_16 = NULL;
              z_16 = t;
              u_16 :
              if(!(match_cons(z_16, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_0);
            return(t);
          }
          t = _2(t, y_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm f_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  ATerm o_11;
  o_11 = t;
  t = dtime_0(t);
  t = o_11;
  {
    t = n_72(t);
    {
      ATerm p_11;
      p_11 = t;
      {
        ATerm g_17 = NULL;
        t = dtime_0(t);
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
      }
      t = p_11;
      {
        h_17 = t;
        e_17 :
        if(match_cons(h_17, sym__2))
          {
            i_17 = ATgetArgument(h_17, 0);
            j_17 = ATgetArgument(h_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_17))), not_null(j_17));
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
ATerm debug_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm q_11;
  q_11 = t;
  {
    ATerm q_17 = NULL,s_17 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm r_17 = NULL;
      t = j_74(t);
      {
        r_17 = t;
        if(((q_17 != NULL) && (q_17 != r_17)))
          _fail(r_17);
        else
          q_17 = r_17;
      }
    }
    t = r_11;
    {
      ATerm t_17 = NULL;
      t_17 = t;
      if(((s_17 != NULL) && (s_17 != t_17)))
        _fail(t_17);
      else
        s_17 = t_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_17)), not_null(q_17)));
        t = printnl_0(t);
      }
    }
  }
  t = q_11;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm s_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_17 = NULL;
      y_17 = t;
      {
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
        t = SSL_ReadFromFile(not_null(x_17));
      }
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = s_11;
      {
        ATerm a_1 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = debug_1(t, a_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm c_18 = NULL,e_18 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    ATerm d_18 = NULL;
    t = w_86(t);
    {
      d_18 = t;
      if(((c_18 != NULL) && (c_18 != d_18)))
        _fail(d_18);
      else
        c_18 = d_18;
    }
  }
  t = z_11;
  {
    ATerm f_18 = NULL;
    t = x_86(t);
    {
      f_18 = t;
      if(((e_18 != NULL) && (e_18 != f_18)))
        _fail(f_18);
      else
        e_18 = f_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), not_null(e_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_18 = NULL;
  ATerm d_12;
  d_12 = t;
  {
    ATerm f_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm m_18 = NULL,n_18 = NULL;
          m_18 = t;
          j_18 :
          if(match_cons(m_18, sym_Input_1))
            {
              n_18 = ATgetArgument(m_18, 0);
              if(((l_18 != NULL) && (l_18 != n_18)))
                _fail(n_18);
              else
                l_18 = n_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, b_1);
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = f_12;
        {
          ATerm o_18 = NULL;
          t = term_j_12;
          {
            o_18 = t;
            if(((l_18 != NULL) && (l_18 != o_18)))
              _fail(o_18);
            else
              l_18 = o_18;
          }
        }
      }
  }
  t = d_12;
  {
    ATerm c_1 (ATerm t)
    {
      t = not_null(l_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm s_18 = NULL;
    s_18 = t;
    r_18 :
    if(!(match_string(s_18, "-v")))
      {
        if(!(match_string(s_18, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_l_12;
    t = set_config_0(t);
    t = term_m_12;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_n_12;
    return(t);
  }
  t = Option_3(t, d_1, e_1, i_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm v_18 = NULL;
    v_18 = t;
    t_18 :
    if(!(match_string(v_18, "-k")))
      {
        if(!(match_string(v_18, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm w_18 = NULL;
      ATerm x_18 = NULL;
      t = string_to_int_0(t);
      {
        x_18 = t;
        if(((w_18 != NULL) && (w_18 != x_18)))
          _fail(x_18);
        else
          w_18 = x_18;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(w_18));
        t = set_config_0(t);
      }
    }
    t = q_12;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_w_12;
    return(t);
  }
  t = ArgOption_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_string_to_int(not_null(a_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm i_19 = NULL;
        i_19 = t;
        d_19 :
        if(!(match_string(i_19, "-S")))
          {
            if(!(match_string(i_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_b_13;
        t = set_config_0(t);
        t = term_c_13;
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_d_13;
        return(t);
      }
      t = Option_3(t, m_1, n_1, o_1);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm j_19 = NULL;
              j_19 = t;
              e_19 :
              if(!(match_string(j_19, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm m_19 = NULL;
              ATerm k_13;
              k_13 = t;
              {
                ATerm k_19 = NULL;
                ATerm l_19 = NULL;
                t = string_to_int_0(t);
                {
                  l_19 = t;
                  if(((k_19 != NULL) && (k_19 != l_19)))
                    _fail(l_19);
                  else
                    k_19 = l_19;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(k_19));
                  t = set_config_0(t);
                }
              }
              t = k_13;
              {
                ATerm n_19 = NULL;
                n_19 = t;
                if(((m_19 != NULL) && (m_19 != n_19)))
                  _fail(n_19);
                else
                  m_19 = n_19;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_19));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_l_13;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm o_19 = NULL;
                o_19 = t;
                h_19 :
                if(!(match_string(o_19, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_1 (ATerm t)
              {
                t = term_n_13;
                t = set_config_0(t);
                t = term_o_13;
                return(t);
              }
              ATerm w_1 (ATerm t)
              {
                t = term_s_13;
                return(t);
              }
              t = Option_3(t, u_1, v_1, w_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm v_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = v_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm u_19 = NULL;
    u_19 = t;
    r_19 :
    if(!(match_string(u_19, "-o")))
      {
        if(!(match_string(u_19, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm x_19 = NULL;
    ATerm d_14;
    d_14 = t;
    {
      ATerm v_19 = NULL;
      ATerm w_19 = NULL;
      w_19 = t;
      if(((v_19 != NULL) && (v_19 != w_19)))
        _fail(w_19);
      else
        v_19 = w_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(v_19));
        t = set_config_0(t);
      }
    }
    t = d_14;
    {
      ATerm y_19 = NULL;
      y_19 = t;
      if(((x_19 != NULL) && (x_19 != y_19)))
        _fail(y_19);
      else
        x_19 = y_19;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_19));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  t = ArgOption_3(t, x_1, c_2, k_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm c_20 = NULL;
          c_20 = t;
          b_20 :
          if(!(match_string(c_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_o_14;
          t = set_config_0(t);
          t = term_p_14;
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = term_r_14;
          return(t);
        }
        t = Option_3(t, l_2, m_2, n_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  i_20 = t;
  g_20 :
  if(match_string(i_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
        {
          j_20 = ATgetFirst((ATermList) i_20);
          k_20 = (ATerm) ATgetNext((ATermList) i_20);
          h_20 :
          if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
            {
              l_20 = ATgetFirst((ATermList) k_20);
              m_20 = (ATerm) ATgetNext((ATermList) k_20);
              {
                ATerm q_20 = NULL;
                ATerm s_14;
                s_14 = t;
                {
                  t = not_null(j_20);
                  t = j_0(t);
                }
                t = s_14;
                {
                  ATerm r_20 = NULL;
                  t = not_null(l_20);
                  {
                    t = k_0(t);
                    {
                      r_20 = t;
                      if(((q_20 != NULL) && (q_20 != r_20)))
                        _fail(r_20);
                      else
                        q_20 = r_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_20)), not_null(q_20));
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
  ATerm o_2 (ATerm t)
  {
    ATerm y_20 = NULL;
    y_20 = t;
    v_20 :
    if(!(match_string(y_20, "-i")))
      {
        if(!(match_string(y_20, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm b_21 = NULL;
    ATerm t_14;
    t_14 = t;
    {
      ATerm z_20 = NULL;
      ATerm a_21 = NULL;
      a_21 = t;
      if(((z_20 != NULL) && (z_20 != a_21)))
        _fail(a_21);
      else
        z_20 = a_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_14, not_null(z_20));
        t = set_config_0(t);
      }
    }
    t = t_14;
    {
      ATerm c_21 = NULL;
      c_21 = t;
      if(((b_21 != NULL) && (b_21 != c_21)))
        _fail(c_21);
      else
        b_21 = c_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_21));
    }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_v_14;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = report_run_time_0(t);
  {
    ATerm h_21 = NULL;
    t = term_t_5;
    {
      t = whoami_0(t);
      {
        h_21 = t;
        if(((g_21 != NULL) && (g_21 != h_21)))
          _fail(h_21);
        else
          g_21 = h_21;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, term_e_15), not_null(g_21)));
      {
        t = printnl_0(t);
        {
          t = term_k_5;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_15;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  t = SSL_TicksToSeconds(not_null(k_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym__2))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_21), not_null(r_21));
            ;
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            t = SSL_addr(not_null(q_21), not_null(r_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm))
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_85(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
        y_21 = t;
        x_21 :
        if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
          {
            z_21 = ATgetFirst((ATermList) y_21);
            a_22 = (ATerm) ATgetNext((ATermList) y_21);
            {
              ATerm d_22 = NULL;
              ATerm e_22 = NULL;
              t = not_null(a_22);
              {
                t = foldr_2(t, h_85, i_85);
                {
                  e_22 = t;
                  if(((d_22 != NULL) && (d_22 != e_22)))
                    _fail(e_22);
                  else
                    d_22 = e_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_21), not_null(d_22));
                t = i_85(t);
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
ATerm crush_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm l_22 = NULL;
  ATerm n_22 = NULL;
  l_22 = t;
  {
    ATerm o_22 = NULL;
    ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
    t = not_null(l_22);
    {
      o_22 = t;
      {
        t = SSL_explode_term(not_null(o_22));
        {
          q_22 = t;
          k_22 :
          if(match_cons(q_22, sym__2))
            {
              r_22 = ATgetArgument(q_22, 0);
              s_22 = ATgetArgument(q_22, 1);
              if(((n_22 != NULL) && (n_22 != s_22)))
                _fail(s_22);
              else
                n_22 = s_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_22);
      t = foldr_2(t, f_83, g_83);
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
    ATerm r_2 (ATerm t)
    {
      t = term_z_12;
      return(t);
    }
    t = crush_2(t, r_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm o_15;
        o_15 = t;
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_22), not_null(a_23));
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              t = SSL_gtr(not_null(z_22), not_null(a_23));
            }
        }
        t = o_15;
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
  ATerm g_23 = NULL;
  ATerm s_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
      h_23 = t;
      f_23 :
      if(match_cons(h_23, sym__2))
        {
          i_23 = ATgetArgument(h_23, 0);
          j_23 = ATgetArgument(h_23, 1);
          {
            if(((g_23 != NULL) && (g_23 != i_23)))
              _fail(i_23);
            else
              g_23 = i_23;
            if(((g_23 != NULL) && (g_23 != j_23)))
              _fail(j_23);
            else
              g_23 = j_23;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = s_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm w_15;
    w_15 = t;
    {
      ATerm m_23 = NULL;
      ATerm n_23 = NULL;
      t = term_z_10;
      {
        t = get_config_0(t);
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), term_k_5);
        t = geq_0(t);
      }
    }
    t = w_15;
    t = e_98(t);
    return(t);
  }
  t = try_1(t, s_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm r_23 = NULL,t_23 = NULL;
    ATerm x_15;
    x_15 = t;
    {
      ATerm s_23 = NULL;
      t = run_time_0(t);
      {
        s_23 = t;
        if(((r_23 != NULL) && (r_23 != s_23)))
          _fail(s_23);
        else
          r_23 = s_23;
      }
    }
    t = x_15;
    {
      ATerm u_23 = NULL;
      t = term_t_5;
      {
        t = whoami_0(t);
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_16), not_null(r_23)), term_a_16), not_null(t_23)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_z_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_Version_0))
    {
      ATerm d_24 = NULL,f_24 = NULL;
      ATerm g_16;
      g_16 = t;
      {
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(b_24));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
      }
      t = g_16;
      {
        ATerm g_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_24));
        {
          g_24 = t;
          if(((f_24 != NULL) && (f_24 != g_24)))
            _fail(g_24);
          else
            f_24 = g_24;
        }
        t = not_null(f_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_16;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              {
                ATerm q_16 = t;
                int r_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(r_16);
                  }
                else
                  {
                    t = q_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, a_3);
      }
    }
  t = l_73(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_table_create(not_null(l_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  {
    ATerm t_16;
    t_16 = t;
    {
      t = term_a_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_17, term_b_17, not_null(p_24));
          t = table_put_0(t);
        }
      }
    }
    t = t_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_table_destroy(not_null(t_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_exit(not_null(x_24));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(((ATgetType(b_25) == AT_LIST) && ATisEmpty(b_25)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
        {
          c_25 = ATgetFirst((ATermList) b_25);
          d_25 = (ATerm) ATgetNext((ATermList) b_25);
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
  ATerm c_17;
  c_17 = t;
  {
    ATerm g_25 = NULL;
    ATerm j_25 = NULL;
    ATerm d_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = d_17;
        {
          ATerm h_25 = NULL;
          ATerm i_25 = NULL;
          i_25 = t;
          if(((h_25 != NULL) && (h_25 != i_25)))
            _fail(i_25);
          else
            h_25 = i_25;
          t = (ATerm) ATinsert(ATempty, not_null(h_25));
        }
      }
    {
      j_25 = t;
      if(((g_25 != NULL) && (g_25 != j_25)))
        _fail(j_25);
      else
        g_25 = j_25;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(g_25));
      t = printnl_0(t);
    }
  }
  t = c_17;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm m_25 (ATerm t)
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = Cons_2(t, v_78, m_25);
      }
    return(t);
  }
  t = m_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_25 = NULL,x_26 = NULL,y_26 = NULL;
  y_26 = t;
  s_25 :
  if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
    {
      t_25 = ATgetFirst((ATermList) y_26);
      x_26 = (ATerm) ATgetNext((ATermList) y_26);
      {
        ATerm b_27 = NULL;
        t = not_null(x_26);
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm c_27 = NULL,e_27 = NULL,i_27 = NULL;
            ATerm o_17;
            o_17 = t;
            {
              ATerm d_27 = NULL;
              t = i_0(t);
              {
                d_27 = t;
                if(((c_27 != NULL) && (c_27 != d_27)))
                  _fail(d_27);
                else
                  c_27 = d_27;
              }
            }
            t = o_17;
            {
              ATerm f_27 = NULL;
              t = not_null(t_25);
              {
                t = g_0(t);
                {
                  f_27 = t;
                  if(((e_27 != NULL) && (e_27 != f_27)))
                    _fail(f_27);
                  else
                    e_27 = f_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_27)), not_null(e_27));
                {
                  i_27 = t;
                  if(((b_27 != NULL) && (b_27 != i_27)))
                    _fail(i_27);
                  else
                    b_27 = i_27;
                }
              }
            }
          }
          t = n_17;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(b_27);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_26) == AT_LIST) && ATisEmpty(y_26)))
        {
          {
            t = term_t_5;
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Program_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(y_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(z_27);
          {
            ATerm g_28 = NULL;
            t = o_71(t);
            {
              e_28 = t;
              {
                ATerm h_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_28)), not_null(c_28));
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
                t = not_null(g_28);
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
ATerm system_usage_0 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm p_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_28 = NULL;
      t = term_f_15;
      {
        t = get_config_0(t);
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
      }
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = p_17;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_3 (ATerm t)
          {
            ATerm x_28 = NULL;
            x_28 = t;
            if(((v_28 != NULL) && (v_28 != x_28)))
              _fail(x_28);
            else
              v_28 = x_28;
            return(t);
          }
          t = Program_1(t, k_3);
          return(t);
        }
        t = option_defined_1(t, j_3);
      }
    }
  {
    ATerm l_3 (ATerm t)
    {
      ATerm m_3 (ATerm t)
      {
        t = not_null(v_28);
        return(t);
      }
      t = short_description_1(t, m_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_3);
    {
      t = term_v_17;
      {
        t = echo_0(t);
        {
          t = term_a_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm y_28 = NULL;
                  ATerm z_28 = NULL;
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_28)), term_b_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_3);
                {
                  ATerm o_3 (ATerm t)
                  {
                    ATerm a_29 = NULL;
                    ATerm b_29 = NULL;
                    ATerm p_3 (ATerm t)
                    {
                      t = not_null(v_28);
                      return(t);
                    }
                    t = long_description_1(t, p_3);
                    {
                      b_29 = t;
                      if(((a_29 != NULL) && (a_29 != b_29)))
                        _fail(b_29);
                      else
                        a_29 = b_29;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_29)), term_g_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_3);
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
ATerm Undefined_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym_Undefined_1))
    {
      p_29 = ATgetArgument(o_29, 0);
      {
        ATerm s_29 = NULL,u_29 = NULL;
        ATerm t_29 = NULL;
        t = SSLgetAnnotations(not_null(o_29));
        {
          t_29 = t;
          if(((s_29 != NULL) && (s_29 != t_29)))
            _fail(t_29);
          else
            s_29 = t_29;
        }
        {
          t = not_null(p_29);
          {
            ATerm w_29 = NULL;
            t = p_71(t);
            {
              u_29 = t;
              {
                ATerm x_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_29)), not_null(s_29));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm f_30 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_79, _id);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = Cons_2(t, _id, f_30);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_89 (ATerm))
{
  t = fetch_1(t, k_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_Help_0))
    {
      ATerm m_30 = NULL,o_30 = NULL;
      ATerm k_18;
      k_18 = t;
      {
        ATerm n_30 = NULL;
        t = SSLgetAnnotations(not_null(k_30));
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
      }
      t = k_18;
      {
        ATerm p_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_30));
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
        t = not_null(o_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_77(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym__2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      t = SSL_table_get(not_null(w_30), not_null(x_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__3))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      h_31 = ATgetArgument(e_31, 2);
      {
        ATerm u_18;
        u_18 = t;
        {
          ATerm l_31 = NULL;
          ATerm m_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), not_null(g_31));
          {
            ATerm y_18 = t;
            int z_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_18);
              }
            else
              {
                t = y_18;
                t = (ATerm) ATempty;
              }
            {
              m_31 = t;
              if(((l_31 != NULL) && (l_31 != m_31)))
                _fail(m_31);
              else
                l_31 = m_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_31), not_null(g_31), (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(h_31)));
            t = table_put_0(t);
          }
        }
        t = u_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm q_31 = NULL;
  ATerm r_31 = NULL;
  t = term_t_5;
  {
    t = p_90(t);
    {
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_z_17, not_null(q_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_string(x_31, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          z_31 = (ATerm) ATgetNext((ATermList) x_31);
          {
            ATerm c_32 = NULL;
            ATerm b_19;
            b_19 = t;
            {
              t = not_null(y_31);
              t = a_0(t);
            }
            t = b_19;
            {
              ATerm d_32 = NULL;
              t = term_t_5;
              {
                t = b_0(t);
                {
                  d_32 = t;
                  if(((c_32 != NULL) && (c_32 != d_32)))
                    _fail(d_32);
                  else
                    c_32 = d_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_31)), not_null(c_32));
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
  ATerm q_3 (ATerm t)
  {
    ATerm i_32 = NULL;
    i_32 = t;
    h_32 :
    if(!(match_string(i_32, "--help")))
      {
        if(!(match_string(i_32, "-h")))
          {
            if(!(match_string(i_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_c_19;
    {
      t = set_config_0(t);
      t = term_f_19;
    }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_g_19;
    return(t);
  }
  t = Option_3(t, q_3, r_3, y_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(((ATgetType(l_32) == AT_LIST) && !(ATisEmpty(l_32))))
    {
      m_32 = ATgetFirst((ATermList) l_32);
      n_32 = (ATerm) ATgetNext((ATermList) l_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
    {
      y_32 = ATgetFirst((ATermList) x_32);
      z_32 = (ATerm) ATgetNext((ATermList) x_32);
      {
        ATerm d_33 = NULL,f_33 = NULL;
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(x_32));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
        {
          t = not_null(y_32);
          {
            ATerm h_33 = NULL;
            t = l_59(t);
            {
              f_33 = t;
              {
                t = not_null(z_32);
                {
                  ATerm j_33 = NULL;
                  t = m_59(t);
                  {
                    h_33 = t;
                    {
                      ATerm k_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_33)), not_null(f_33)), not_null(d_33));
                      {
                        k_33 = t;
                        if(((j_33 != NULL) && (j_33 != k_33)))
                          _fail(k_33);
                        else
                          j_33 = k_33;
                      }
                      t = not_null(j_33);
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
  ATerm u_33 = NULL;
  u_33 = t;
  t_33 :
  if(((ATgetType(u_33) == AT_LIST) && ATisEmpty(u_33)))
    {
      {
        ATerm w_33 = NULL,z_33 = NULL;
        ATerm p_19;
        p_19 = t;
        {
          ATerm y_33 = NULL;
          t = SSLgetAnnotations(not_null(u_33));
          {
            y_33 = t;
            if(((w_33 != NULL) && (w_33 != y_33)))
              _fail(y_33);
            else
              w_33 = y_33;
          }
        }
        t = p_19;
        {
          ATerm a_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_33));
          {
            a_34 = t;
            if(((z_33 != NULL) && (z_33 != a_34)))
              _fail(a_34);
            else
              z_33 = a_34;
          }
          t = not_null(z_33);
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
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_10, not_null(h_34), not_null(i_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm z_3 (ATerm t)
    {
      t = term_s_19;
      t = n_90(t);
      return(t);
    }
    t = try_1(t, z_3);
  }
  t = q_19;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm q_34 = NULL;
      ATerm t_19;
      t_19 = t;
      {
        ATerm o_34 = NULL;
        ATerm p_34 = NULL;
        p_34 = t;
        if(((o_34 != NULL) && (o_34 != p_34)))
          _fail(p_34);
        else
          o_34 = p_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_15, not_null(o_34));
          t = set_config_0(t);
        }
      }
      t = t_19;
      {
        ATerm r_34 = NULL;
        r_34 = t;
        if(((q_34 != NULL) && (q_34 != r_34)))
          _fail(r_34);
        else
          q_34 = r_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_34));
      }
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              {
                t = n_90(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
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
  ATerm x_34 = NULL,y_34 = NULL,b_35 = NULL;
  ATerm f_20;
  f_20 = t;
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
    c_35 = t;
    w_34 :
    if(match_cons(c_35, sym__3))
      {
        d_35 = ATgetArgument(c_35, 0);
        e_35 = ATgetArgument(c_35, 1);
        f_35 = ATgetArgument(c_35, 2);
        {
          if(((x_34 != NULL) && (x_34 != d_35)))
            _fail(d_35);
          else
            x_34 = d_35;
          {
            if(((y_34 != NULL) && (y_34 != e_35)))
              _fail(e_35);
            else
              y_34 = e_35;
            {
              if(((b_35 != NULL) && (b_35 != f_35)))
                _fail(f_35);
              else
                b_35 = f_35;
              t = SSL_table_put(not_null(x_34), not_null(y_34), not_null(b_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm p_35 = NULL;
  ATerm n_20;
  n_20 = t;
  {
    t = term_o_20;
    t = table_put_0(t);
  }
  t = n_20;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm p_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_90(t);
          ;
          LocalPopChoice(s_20);
        }
      else
        {
          t = p_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_4);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_20;
            w_20 = t;
            {
              ATerm x_20 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_16;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = x_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = w_20;
            {
              t = system_usage_0(t);
              {
                t = term_z_12;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm q_35 = NULL;
                  q_35 = t;
                  if(((p_35 != NULL) && (p_35 != q_35)))
                    _fail(q_35);
                  else
                    p_35 = q_35;
                  return(t);
                }
                t = Undefined_1(t, l_4);
                return(t);
              }
              t = option_defined_1(t, g_4);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_35)), term_e_21));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_5;
                      t = exit_0(t);
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
        ATerm f_21;
        f_21 = t;
        {
          t = term_w_17;
          t = table_destroy_0(t);
        }
        t = f_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  t = parse_options_1(t, n_73);
  {
    t = store_options_0(t);
    {
      t = p_73(t);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_73);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm l_21 = t;
              int m_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_73(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(m_21);
                }
              else
                {
                  t = l_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm n_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_73(t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = n_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_73);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, p_4, e_73, f_73, v_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm t_21;
      t_21 = t;
      {
        ATerm t_35 = NULL;
        ATerm u_35 = NULL;
        t = term_f_15;
        {
          t = get_config_0(t);
          {
            u_35 = t;
            if(((t_35 != NULL) && (t_35 != u_35)))
              _fail(u_35);
            else
              t_35 = u_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATempty, not_null(t_35)));
          t = printnl_0(t);
        }
      }
      t = t_21;
      return(t);
    }
    t = if_verbose2_1(t, x_4);
    return(t);
  }
  t = iowrap_4(t, w_72, x_72, y_72, w_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  t = iowrap_3(t, u_72, v_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    t = _2(t, _id, r_72);
    return(t);
  }
  t = iowrap_2(t, y_4, _fail);
  return(t);
}
ATerm io_tg2fold_strategy_0 (ATerm t)
{
  t = iowrap_1(t, T2_Module_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_tg2fold_strategy_0(t);
  return(t);
}
