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
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Ins_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_d_19;
ATerm term_p_18;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_c_14;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_r_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_5;
ATerm term_g_5;
ATerm term_y_4;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_Cong_2, term_x_4, (ATerm) ATempty);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_Op_2, term_x_4, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_x_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_g_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_g_11);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_i_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_g_11);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__3, term_h_16, term_i_16, (ATerm) ATempty);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromApp_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm d_74 (ATerm));
ATerm MetaExplode_0 (ATerm);
ATerm _2 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_90 (ATerm));
ATerm debug_1 (ATerm, ATerm b_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_86 (ATerm), ATerm h_86 (ATerm));
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm crush_2 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_94 (ATerm));
ATerm map_1 (ATerm, ATerm d_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_94 (ATerm));
ATerm Program_1 (ATerm, ATerm f_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_70 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_94 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_90 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm c_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      r_2 = t;
      g_1 :
      if(match_cons(r_2, sym_meta_var_1))
        {
          s_2 = ATgetArgument(r_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(g_4);
    }
  else
    {
      t = c_4;
      {
        ATerm m_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            ;
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            {
              ATerm o_4 = t;
              int p_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  ;
                  LocalPopChoice(p_4);
                }
              else
                {
                  t = o_4;
                  {
                    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      ATerm e_3 = NULL,f_3 = NULL,l_3 = NULL;
                      ATerm q_4;
                      q_4 = t;
                      {
                        ATerm g_3 = NULL;
                        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
                        t = not_null(w_2);
                        {
                          g_3 = t;
                          {
                            t = SSL_explode_term(not_null(g_3));
                            {
                              i_3 = t;
                              o_2 :
                              if(match_cons(i_3, sym__2))
                                {
                                  j_3 = ATgetArgument(i_3, 0);
                                  k_3 = ATgetArgument(i_3, 1);
                                  {
                                    if(((e_3 != NULL) && (e_3 != j_3)))
                                      _fail(j_3);
                                    else
                                      e_3 = j_3;
                                    if(((f_3 != NULL) && (f_3 != k_3)))
                                      _fail(k_3);
                                    else
                                      f_3 = k_3;
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
                      t = q_4;
                      {
                        ATerm m_3 = NULL;
                        t = not_null(f_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            m_3 = t;
                            if(((l_3 != NULL) && (l_3 != m_3)))
                              _fail(m_3);
                            else
                              l_3 = m_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_3), not_null(l_3));
                      }
                      return(t);
                    }
                    w_2 = t;
                    q_2 :
                    if(((ATgetType(w_2) == AT_LIST) && ATisEmpty(w_2)))
                      {
                        {
                          ATerm r_4 = t;
                          int s_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_y_4;
                              ;
                              LocalPopChoice(s_4);
                            }
                          else
                            {
                              t = r_4;
                              t = q_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(w_2) == AT_LIST) && !(ATisEmpty(w_2))))
                          {
                            u_2 = ATgetFirst((ATermList) w_2);
                            v_2 = (ATerm) ATgetNext((ATermList) w_2);
                            {
                              ATerm d_5 = t;
                              int e_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_2 = NULL,b_3 = NULL;
                                  ATerm f_5;
                                  f_5 = t;
                                  {
                                    ATerm a_3 = NULL;
                                    t = not_null(u_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        a_3 = t;
                                        if(((z_2 != NULL) && (z_2 != a_3)))
                                          _fail(a_3);
                                        else
                                          z_2 = a_3;
                                      }
                                    }
                                  }
                                  t = f_5;
                                  {
                                    ATerm c_3 = NULL;
                                    t = not_null(v_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        c_3 = t;
                                        if(((b_3 != NULL) && (b_3 != c_3)))
                                          _fail(c_3);
                                        else
                                          b_3 = c_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), not_null(z_2)));
                                  }
                                  ;
                                  LocalPopChoice(e_5);
                                }
                              else
                                {
                                  t = d_5;
                                  t = q_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = q_3(t);
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
ATerm TrmOp_0 (ATerm t)
{
  ATerm b_4 = NULL;
  ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL;
  b_4 = t;
  {
    ATerm j_5;
    j_5 = t;
    {
      ATerm f_4 = NULL;
      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
      t = not_null(b_4);
      {
        f_4 = t;
        {
          t = SSL_explode_term(not_null(f_4));
          {
            h_4 = t;
            z_3 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((d_4 != NULL) && (d_4 != i_4)))
                    _fail(i_4);
                  else
                    d_4 = i_4;
                  if(((e_4 != NULL) && (e_4 != j_4)))
                    _fail(j_4);
                  else
                    e_4 = j_4;
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
    t = j_5;
    {
      ATerm l_4 = NULL;
      t = not_null(e_4);
      {
        t = map_1(t, trm_explode_0);
        {
          l_4 = t;
          if(((k_4 != NULL) && (k_4 != l_4)))
            _fail(l_4);
          else
            k_4 = l_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_4), not_null(k_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
    {
      v_4 = ATgetFirst((ATermList) u_4);
      w_4 = (ATerm) ATgetNext((ATermList) u_4);
      {
        ATerm z_4 = NULL,b_5 = NULL;
        ATerm k_5;
        k_5 = t;
        {
          ATerm a_5 = NULL;
          t = not_null(v_4);
          {
            t = trm_explode_0(t);
            {
              a_5 = t;
              if(((z_4 != NULL) && (z_4 != a_5)))
                _fail(a_5);
              else
                z_4 = a_5;
            }
          }
        }
        t = k_5;
        {
          ATerm c_5 = NULL;
          t = not_null(w_4);
          {
            t = trm_explode_0(t);
            {
              c_5 = t;
              if(((b_5 != NULL) && (b_5 != c_5)))
                _fail(c_5);
              else
                b_5 = c_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_5)), not_null(z_4)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmNil_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATgetType(i_5) == AT_LIST) && ATisEmpty(i_5)))
    {
      t = term_l_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  r_5 = t;
  {
    ATerm w_5 = NULL;
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
    t = not_null(r_5);
    {
      w_5 = t;
      {
        t = SSL_explode_term(not_null(w_5));
        {
          y_5 = t;
          n_5 :
          if(match_cons(y_5, sym__2))
            {
              z_5 = ATgetArgument(y_5, 0);
              a_6 = ATgetArgument(y_5, 1);
              o_5 :
              if(match_string(z_5, ""))
                {
                  p_5 :
                  if(((ATgetType(a_6) == AT_LIST) && !(ATisEmpty(a_6))))
                    {
                      b_6 = ATgetFirst((ATermList) a_6);
                      c_6 = (ATerm) ATgetNext((ATermList) a_6);
                      q_5 :
                      if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
                        {
                          d_6 = ATgetFirst((ATermList) c_6);
                          e_6 = (ATerm) ATgetNext((ATermList) c_6);
                          {
                            if(((t_5 != NULL) && (t_5 != b_6)))
                              _fail(b_6);
                            else
                              t_5 = b_6;
                            {
                              if(((v_5 != NULL) && (v_5 != d_6)))
                                _fail(d_6);
                              else
                                v_5 = d_6;
                              if(((u_5 != NULL) && (u_5 != e_6)))
                                _fail(e_6);
                              else
                                u_5 = e_6;
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
    t = not_null(v_5);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_6 = NULL,r_6 = NULL;
  o_6 = t;
  {
    ATerm s_6 = NULL;
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
    t = not_null(o_6);
    {
      s_6 = t;
      {
        t = SSL_explode_term(not_null(s_6));
        {
          u_6 = t;
          l_6 :
          if(match_cons(u_6, sym__2))
            {
              v_6 = ATgetArgument(u_6, 0);
              w_6 = ATgetArgument(u_6, 1);
              m_6 :
              if(match_string(v_6, ""))
                {
                  n_6 :
                  if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
                    {
                      x_6 = ATgetFirst((ATermList) w_6);
                      y_6 = (ATerm) ATgetNext((ATermList) w_6);
                      {
                        if(((r_6 != NULL) && (r_6 != x_6)))
                          _fail(x_6);
                        else
                          r_6 = x_6;
                        if(((q_6 != NULL) && (q_6 != y_6)))
                          _fail(y_6);
                        else
                          q_6 = y_6;
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
    t = not_null(r_6);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm m_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_84(t);
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = m_5;
      {
        ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
        g_7 = t;
        f_7 :
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            h_7 = ATgetFirst((ATermList) g_7);
            i_7 = (ATerm) ATgetNext((ATermList) g_7);
            {
              ATerm l_7 = NULL,n_7 = NULL;
              ATerm x_5;
              x_5 = t;
              {
                ATerm m_7 = NULL;
                t = not_null(h_7);
                {
                  t = v_84(t);
                  {
                    m_7 = t;
                    if(((l_7 != NULL) && (l_7 != m_7)))
                      _fail(m_7);
                    else
                      l_7 = m_7;
                  }
                }
              }
              t = x_5;
              {
                ATerm o_7 = NULL;
                t = not_null(i_7);
                {
                  t = foldr_3(t, t_84, u_84, v_84);
                  {
                    o_7 = t;
                    if(((n_7 != NULL) && (n_7 != o_7)))
                      _fail(o_7);
                    else
                      n_7 = o_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), not_null(n_7));
                  t = u_84(t);
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
ATerm LstMetaVar_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_meta_listvar_1))
    {
      v_7 = ATgetArgument(u_7, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(v_7)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Conc_2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        t = not_null(e_8);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL;
            t = LstMetaVar_0(t);
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
            t = (ATerm) ATinsert(ATempty, not_null(i_8));
            return(t);
          }
          t = try_1(t, b_0);
          {
            ATerm c_0 (ATerm t)
            {
              t = not_null(f_8);
              {
                ATerm f_6 = t;
                int g_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    ;
                    LocalPopChoice(g_6);
                  }
                else
                  {
                    t = f_6;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm e_0 (ATerm t)
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm h_6;
              h_6 = t;
              {
                ATerm l_8 = NULL;
                t = Fst_0(t);
                {
                  l_8 = t;
                  if(((k_8 != NULL) && (k_8 != l_8)))
                    _fail(l_8);
                  else
                    k_8 = l_8;
                }
              }
              t = h_6;
              {
                ATerm n_8 = NULL;
                t = Snd_0(t);
                {
                  n_8 = t;
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), not_null(k_8)));
              }
              return(t);
            }
            t = foldr_3(t, c_0, e_0, trm_explode_0);
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
ATerm Anno_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Anno_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL,l_9 = NULL;
            ATerm k_9 = NULL;
            t = SSLgetAnnotations(not_null(d_9));
            {
              k_9 = t;
              if(((j_9 != NULL) && (j_9 != k_9)))
                _fail(k_9);
              else
                j_9 = k_9;
            }
            {
              t = not_null(e_9);
              {
                ATerm n_9 = NULL;
                t = m_0(t);
                {
                  l_9 = t;
                  {
                    t = not_null(f_9);
                    {
                      ATerm p_9 = NULL;
                      t = n_0(t);
                      {
                        n_9 = t;
                        {
                          ATerm q_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(l_9), not_null(n_9)), not_null(j_9));
                          {
                            q_9 = t;
                            if(((p_9 != NULL) && (p_9 != q_9)))
                              _fail(q_9);
                            else
                              p_9 = q_9;
                          }
                          t = not_null(p_9);
                        }
                      }
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(j_6);
          }
        else
          {
            t = i_6;
            {
              ATerm u_9 = NULL,w_9 = NULL;
              ATerm v_9 = NULL;
              t = SSLgetAnnotations(not_null(d_9));
              {
                v_9 = t;
                if(((u_9 != NULL) && (u_9 != v_9)))
                  _fail(v_9);
                else
                  u_9 = v_9;
              }
              {
                t = not_null(e_9);
                {
                  ATerm y_9 = NULL;
                  t = m_0(t);
                  {
                    w_9 = t;
                    {
                      t = not_null(f_9);
                      {
                        ATerm a_10 = NULL;
                        t = n_0(t);
                        {
                          y_9 = t;
                          {
                            ATerm b_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                            {
                              b_10 = t;
                              if(((a_10 != NULL) && (a_10 != b_10)))
                                _fail(b_10);
                              else
                                a_10 = b_10;
                            }
                            t = not_null(a_10);
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
ATerm TrmAnno_0 (ATerm t)
{
  t = Anno_2(t, trm_explode_0, MetaExplode_0);
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_FromStrategy_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        t = not_null(p_10);
        t = MetaExplode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromApp_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_FromApp_1))
    {
      w_10 = ATgetArgument(v_10, 0);
      {
        ATerm y_10 = NULL;
        t = not_null(w_10);
        {
          ATerm z_10 = NULL;
          t = MetaExplode_0(t);
          {
            z_10 = t;
            if(((y_10 != NULL) && (y_10 != z_10)))
              _fail(z_10);
            else
              y_10 = z_10;
          }
          t = (ATerm) ATmakeAppl(sym_RootApp_1, not_null(y_10));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromTerm_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_FromTerm_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        t = not_null(f_11);
        t = MetaExplode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmStr_0 (ATerm t)
{
  ATerm j_11 = NULL;
  t = is_string_0(t);
  {
    ATerm k_11 = NULL;
    k_11 = t;
    if(((j_11 != NULL) && (j_11 != k_11)))
      _fail(k_11);
    else
      j_11 = k_11;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(j_11));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_meta_listvar_1))
    {
      p_11 = ATgetArgument(o_11, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, term_l_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(p_11)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_meta_var_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm k_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = k_6;
      {
        ATerm t_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmLMetaVar_0(t);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = t_6;
            {
              ATerm a_7 = t;
              int b_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
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
                        t = TrmFromTerm_0(t);
                        ;
                        LocalPopChoice(d_7);
                      }
                    else
                      {
                        t = c_7;
                        {
                          ATerm e_7 = t;
                          int j_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromApp_0(t);
                              ;
                              LocalPopChoice(j_7);
                            }
                          else
                            {
                              t = e_7;
                              {
                                ATerm k_7 = t;
                                int p_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmFromStr_0(t);
                                    ;
                                    LocalPopChoice(p_7);
                                  }
                                else
                                  {
                                    t = k_7;
                                    {
                                      ATerm q_7 = t;
                                      int r_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmAnno_0(t);
                                          ;
                                          LocalPopChoice(r_7);
                                        }
                                      else
                                        {
                                          t = q_7;
                                          {
                                            ATerm s_7 = t;
                                            int w_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmConc_0(t);
                                                ;
                                                LocalPopChoice(w_7);
                                              }
                                            else
                                              {
                                                t = s_7;
                                                {
                                                  ATerm x_7 = t;
                                                  int y_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmNil_0(t);
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
                                                            t = TrmCons_0(t);
                                                            ;
                                                            LocalPopChoice(a_8);
                                                          }
                                                        else
                                                          {
                                                            t = z_7;
                                                            t = TrmOp_0(t);
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
ATerm alltd_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm y_11 (ATerm t)
  {
    ATerm b_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_74(t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = b_8;
        t = _all(t, y_11);
      }
    return(t);
  }
  t = y_11(t);
  return(t);
}
ATerm MetaExplode_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm e_12 = NULL,f_12 = NULL;
    e_12 = t;
    d_12 :
    if(match_cons(e_12, sym_ToTerm_1))
      {
        f_12 = ATgetArgument(e_12, 0);
        {
          t = not_null(f_12);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(e_12, sym_ToBuild_1))
          {
            f_12 = ATgetArgument(e_12, 0);
            {
              ATerm i_12 = NULL;
              t = not_null(f_12);
              {
                ATerm j_12 = NULL;
                t = trm_explode_0(t);
                {
                  j_12 = t;
                  if(((i_12 != NULL) && (i_12 != j_12)))
                    _fail(j_12);
                  else
                    i_12 = j_12;
                }
                t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_12));
              }
            }
          }
        else
          {
            if(match_cons(e_12, sym_ToStrategy_1))
              {
                f_12 = ATgetArgument(e_12, 0);
                {
                  t = not_null(f_12);
                  t = str_explode_0(t);
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
  t = alltd_1(t, f_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym__2))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      {
        ATerm b_13 = NULL,d_13 = NULL;
        ATerm c_13 = NULL;
        t = SSLgetAnnotations(not_null(v_12));
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
        {
          t = not_null(w_12);
          {
            ATerm f_13 = NULL;
            t = b_56(t);
            {
              d_13 = t;
              {
                t = not_null(x_12);
                {
                  ATerm h_13 = NULL;
                  t = c_56(t);
                  {
                    f_13 = t;
                    {
                      ATerm i_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_13), not_null(f_13)), not_null(b_13));
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
  ATerm q_13 = NULL;
  ATerm h_8;
  h_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm r_13 = NULL,s_13 = NULL;
      r_13 = t;
      p_13 :
      if(match_cons(r_13, sym_Program_1))
        {
          s_13 = ATgetArgument(r_13, 0);
          if(((q_13 != NULL) && (q_13 != s_13)))
            _fail(s_13);
          else
            q_13 = s_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_8), not_null(q_13)), term_p_8));
      {
        t = printnl_0(t);
        {
          t = term_r_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym__2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      {
        ATerm s_8;
        s_8 = t;
        t = SSL_printnl(not_null(x_13), not_null(y_13));
        t = s_8;
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
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_implode_string(not_null(d_14));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
        i_14 = t;
        h_14 :
        if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
          {
            j_14 = ATgetFirst((ATermList) i_14);
            k_14 = (ATerm) ATgetNext((ATermList) i_14);
            {
              t = not_null(j_14);
              {
                ATerm p_0 (ATerm t)
                {
                  t = not_null(k_14);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm u_14 = NULL;
  ATerm w_14 = NULL;
  u_14 = t;
  {
    ATerm x_14 = NULL;
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
    t = not_null(u_14);
    {
      x_14 = t;
      {
        t = SSL_explode_term(not_null(x_14));
        {
          z_14 = t;
          s_14 :
          if(match_cons(z_14, sym__2))
            {
              a_15 = ATgetArgument(z_14, 0);
              b_15 = ATgetArgument(z_14, 1);
              t_14 :
              if(match_string(a_15, ""))
                {
                  if(((w_14 != NULL) && (w_14 != b_15)))
                    _fail(b_15);
                  else
                    w_14 = b_15;
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
      t = not_null(w_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm f_15 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_15);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        {
          t = Nil_0(t);
          t = s_78(t);
        }
      }
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym__2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        t = not_null(j_15);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(k_15);
            return(t);
          }
          t = at_end_1(t, q_0);
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
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_explode_string(not_null(p_15));
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
  ATerm t_15 = NULL;
  t_15 = t;
  t = SSL_is_string(not_null(t_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm b_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = b_9;
            {
              ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
              c_16 = t;
              b_16 :
              if(match_cons(c_16, sym_Path_1))
                {
                  d_16 = ATgetArgument(c_16, 0);
                  t = not_null(d_16);
                }
              else
                {
                  if(match_cons(c_16, sym_Var_1))
                    {
                      d_16 = ATgetArgument(c_16, 0);
                      {
                        t = not_null(d_16);
                        {
                          ATerm h_9 = t;
                          int i_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(i_9);
                            }
                          else
                            {
                              t = h_9;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_m_9;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_16, sym_Prefix_2))
                        {
                          d_16 = ATgetArgument(c_16, 0);
                          e_16 = ATgetArgument(c_16, 1);
                          {
                            ATerm j_16 = NULL,l_16 = NULL;
                            ATerm o_9;
                            o_9 = t;
                            {
                              ATerm k_16 = NULL;
                              t = not_null(d_16);
                              {
                                t = eval_config_0(t);
                                {
                                  k_16 = t;
                                  if(((j_16 != NULL) && (j_16 != k_16)))
                                    _fail(k_16);
                                  else
                                    j_16 = k_16;
                                }
                              }
                            }
                            t = o_9;
                            {
                              ATerm m_16 = NULL;
                              t = not_null(e_16);
                              {
                                t = eval_config_0(t);
                                {
                                  m_16 = t;
                                  if(((l_16 != NULL) && (l_16 != m_16)))
                                    _fail(m_16);
                                  else
                                    l_16 = m_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(l_16));
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
  ATerm u_16 = NULL;
  u_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_9, not_null(u_16));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_9;
            s_9 = t;
            {
              ATerm w_16 = NULL;
              ATerm x_16 = NULL;
              x_16 = t;
              if(((w_16 != NULL) && (w_16 != x_16)))
                _fail(x_16);
              else
                w_16 = x_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_9, not_null(u_16), not_null(w_16));
                t = table_put_0(t);
              }
            }
            t = s_9;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm t_9;
    t_9 = t;
    {
      ATerm b_17 = NULL;
      ATerm c_17 = NULL;
      t = term_x_9;
      {
        t = get_config_0(t);
        {
          c_17 = t;
          if(((b_17 != NULL) && (b_17 != c_17)))
            _fail(c_17);
          else
            b_17 = c_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), term_z_9);
        t = geq_0(t);
      }
    }
    t = t_9;
    t = y_91(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      t = SSL_WriteToTextFile(not_null(h_17), not_null(i_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      t = SSL_WriteToBinaryFile(not_null(p_17), not_null(q_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_17 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm d_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm z_17 = NULL,a_18 = NULL;
            z_17 = t;
            v_17 :
            if(match_cons(z_17, sym_Output_1))
              {
                a_18 = ATgetArgument(z_17, 0);
                if(((y_17 != NULL) && (y_17 != a_18)))
                  _fail(a_18);
                else
                  y_17 = a_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_0);
          ;
          LocalPopChoice(e_10);
        }
      else
        {
          t = d_10;
          {
            ATerm b_18 = NULL;
            t = term_f_10;
            {
              b_18 = t;
              if(((y_17 != NULL) && (y_17 != b_18)))
                _fail(b_18);
              else
                y_17 = b_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_0, _id);
  }
  t = c_10;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm y_0 (ATerm t)
      {
        t = not_null(y_17);
        return(t);
      }
      t = split_2(t, y_0, _id);
      return(t);
    }
    t = _2(t, _id, x_0);
    {
      ATerm g_10 = t;
      int h_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_1 (ATerm t)
            {
              ATerm c_18 = NULL;
              c_18 = t;
              x_17 :
              if(!(match_cons(c_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_1);
            return(t);
          }
          t = _2(t, z_0, WriteToBinaryFile_0);
          ;
          LocalPopChoice(h_10);
        }
      else
        {
          t = g_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm i_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  ATerm i_10;
  i_10 = t;
  t = dtime_0(t);
  t = i_10;
  {
    t = f_90(t);
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm j_18 = NULL;
        t = dtime_0(t);
        {
          j_18 = t;
          if(((i_18 != NULL) && (i_18 != j_18)))
            _fail(j_18);
          else
            i_18 = j_18;
        }
      }
      t = j_10;
      {
        k_18 = t;
        h_18 :
        if(match_cons(k_18, sym__2))
          {
            l_18 = ATgetArgument(k_18, 0);
            m_18 = ATgetArgument(k_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_18))), not_null(m_18));
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
ATerm debug_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm k_10;
  k_10 = t;
  {
    ATerm t_18 = NULL,v_18 = NULL;
    ATerm l_10;
    l_10 = t;
    {
      ATerm u_18 = NULL;
      t = b_89(t);
      {
        u_18 = t;
        if(((t_18 != NULL) && (t_18 != u_18)))
          _fail(u_18);
        else
          t_18 = u_18;
      }
    }
    t = l_10;
    {
      ATerm w_18 = NULL;
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_18)), not_null(t_18)));
        t = printnl_0(t);
      }
    }
  }
  t = k_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_19 = NULL;
  ATerm m_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19 = NULL;
      b_19 = t;
      {
        if(((a_19 != NULL) && (a_19 != b_19)))
          _fail(b_19);
        else
          a_19 = b_19;
        t = SSL_ReadFromFile(not_null(a_19));
      }
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = m_10;
      {
        ATerm b_1 (ATerm t)
        {
          t = term_r_10;
          return(t);
        }
        t = debug_1(t, b_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm f_19 = NULL,h_19 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm g_19 = NULL;
    t = g_86(t);
    {
      g_19 = t;
      if(((f_19 != NULL) && (f_19 != g_19)))
        _fail(g_19);
      else
        f_19 = g_19;
    }
  }
  t = s_10;
  {
    ATerm i_19 = NULL;
    t = h_86(t);
    {
      i_19 = t;
      if(((h_19 != NULL) && (h_19 != i_19)))
        _fail(i_19);
      else
        h_19 = i_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(h_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_19 = NULL;
  ATerm t_10;
  t_10 = t;
  {
    ATerm x_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 (ATerm t)
        {
          ATerm p_19 = NULL,q_19 = NULL;
          p_19 = t;
          m_19 :
          if(match_cons(p_19, sym_Input_1))
            {
              q_19 = ATgetArgument(p_19, 0);
              if(((o_19 != NULL) && (o_19 != q_19)))
                _fail(q_19);
              else
                o_19 = q_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_1);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = x_10;
        {
          ATerm r_19 = NULL;
          t = term_b_11;
          {
            r_19 = t;
            if(((o_19 != NULL) && (o_19 != r_19)))
              _fail(r_19);
            else
              o_19 = r_19;
          }
        }
      }
  }
  t = t_10;
  {
    ATerm d_1 (ATerm t)
    {
      t = not_null(o_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm v_19 = NULL;
    v_19 = t;
    u_19 :
    if(!(match_string(v_19, "-v")))
      {
        if(!(match_string(v_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    t = term_h_11;
    t = set_config_0(t);
    t = term_i_11;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  t = Option_3(t, e_1, f_1, h_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm y_19 = NULL;
    y_19 = t;
    w_19 :
    if(!(match_string(y_19, "-k")))
      {
        if(!(match_string(y_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm m_11;
    m_11 = t;
    {
      ATerm z_19 = NULL;
      ATerm a_20 = NULL;
      t = string_to_int_0(t);
      {
        a_20 = t;
        if(((z_19 != NULL) && (z_19 != a_20)))
          _fail(a_20);
        else
          z_19 = a_20;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(z_19));
        t = set_config_0(t);
      }
    }
    t = m_11;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = ArgOption_3(t, i_1, j_1, k_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  t = SSL_string_to_int(not_null(d_20));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm l_20 = NULL;
        l_20 = t;
        g_20 :
        if(!(match_string(l_20, "-S")))
          {
            if(!(match_string(l_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_z_11;
        t = set_config_0(t);
        t = term_a_12;
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = Option_3(t, l_1, m_1, n_1);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = s_11;
      {
        ATerm c_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm m_20 = NULL;
              m_20 = t;
              h_20 :
              if(!(match_string(m_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm p_20 = NULL;
              ATerm h_12;
              h_12 = t;
              {
                ATerm n_20 = NULL;
                ATerm o_20 = NULL;
                t = string_to_int_0(t);
                {
                  o_20 = t;
                  if(((n_20 != NULL) && (n_20 != o_20)))
                    _fail(o_20);
                  else
                    n_20 = o_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(n_20));
                  t = set_config_0(t);
                }
              }
              t = h_12;
              {
                ATerm q_20 = NULL;
                q_20 = t;
                if(((p_20 != NULL) && (p_20 != q_20)))
                  _fail(q_20);
                else
                  p_20 = q_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_20));
              }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              t = term_k_12;
              return(t);
            }
            t = ArgOption_3(t, o_1, p_1, q_1);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = c_12;
            {
              ATerm r_1 (ATerm t)
              {
                ATerm r_20 = NULL;
                r_20 = t;
                k_20 :
                if(!(match_string(r_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm s_1 (ATerm t)
              {
                t = term_m_12;
                t = set_config_0(t);
                t = term_n_12;
                return(t);
              }
              ATerm t_1 (ATerm t)
              {
                t = term_o_12;
                return(t);
              }
              t = Option_3(t, r_1, s_1, t_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
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
            t = keep_option_0(t);
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm x_20 = NULL;
    x_20 = t;
    u_20 :
    if(!(match_string(x_20, "-o")))
      {
        if(!(match_string(x_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm a_21 = NULL;
    ATerm t_12;
    t_12 = t;
    {
      ATerm y_20 = NULL;
      ATerm z_20 = NULL;
      z_20 = t;
      if(((y_20 != NULL) && (y_20 != z_20)))
        _fail(z_20);
      else
        y_20 = z_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, not_null(y_20));
        t = set_config_0(t);
      }
    }
    t = t_12;
    {
      ATerm b_21 = NULL;
      b_21 = t;
      if(((a_21 != NULL) && (a_21 != b_21)))
        _fail(b_21);
      else
        a_21 = b_21;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_21));
    }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_z_12;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = a_13;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm f_21 = NULL;
          f_21 = t;
          e_21 :
          if(!(match_string(f_21, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          t = term_j_13;
          t = set_config_0(t);
          t = term_k_13;
          return(t);
        }
        ATerm z_1 (ATerm t)
        {
          t = term_l_13;
          return(t);
        }
        t = Option_3(t, x_1, y_1, z_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  l_21 = t;
  j_21 :
  if(match_string(l_21, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
        {
          m_21 = ATgetFirst((ATermList) l_21);
          n_21 = (ATerm) ATgetNext((ATermList) l_21);
          k_21 :
          if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
            {
              o_21 = ATgetFirst((ATermList) n_21);
              p_21 = (ATerm) ATgetNext((ATermList) n_21);
              {
                ATerm t_21 = NULL;
                ATerm m_13;
                m_13 = t;
                {
                  t = not_null(m_21);
                  t = j_0(t);
                }
                t = m_13;
                {
                  ATerm u_21 = NULL;
                  t = not_null(o_21);
                  {
                    t = k_0(t);
                    {
                      u_21 = t;
                      if(((t_21 != NULL) && (t_21 != u_21)))
                        _fail(u_21);
                      else
                        t_21 = u_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_21)), not_null(t_21));
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
  ATerm a_2 (ATerm t)
  {
    ATerm b_22 = NULL;
    b_22 = t;
    y_21 :
    if(!(match_string(b_22, "-i")))
      {
        if(!(match_string(b_22, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm e_22 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm c_22 = NULL;
      ATerm d_22 = NULL;
      d_22 = t;
      if(((c_22 != NULL) && (c_22 != d_22)))
        _fail(d_22);
      else
        c_22 = d_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(c_22));
        t = set_config_0(t);
      }
    }
    t = n_13;
    {
      ATerm f_22 = NULL;
      f_22 = t;
      if(((e_22 != NULL) && (e_22 != f_22)))
        _fail(f_22);
      else
        e_22 = f_22;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_22));
    }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = u_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, term_c_14));
  {
    t = printnl_0(t);
    {
      t = term_r_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  t = SSL_TicksToSeconds(not_null(j_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  o_22 = t;
  n_22 :
  if(match_cons(o_22, sym__2))
    {
      p_22 = ATgetArgument(o_22, 0);
      q_22 = ATgetArgument(o_22, 1);
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_22), not_null(q_22));
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = SSL_addr(not_null(p_22), not_null(q_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm g_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_84(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = g_14;
      {
        ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
        x_22 = t;
        w_22 :
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            y_22 = ATgetFirst((ATermList) x_22);
            z_22 = (ATerm) ATgetNext((ATermList) x_22);
            {
              ATerm c_23 = NULL;
              ATerm d_23 = NULL;
              t = not_null(z_22);
              {
                t = foldr_2(t, r_84, s_84);
                {
                  d_23 = t;
                  if(((c_23 != NULL) && (c_23 != d_23)))
                    _fail(d_23);
                  else
                    c_23 = d_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(c_23));
                t = s_84(t);
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
ATerm crush_2 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm))
{
  ATerm k_23 = NULL;
  ATerm m_23 = NULL;
  k_23 = t;
  {
    ATerm n_23 = NULL;
    ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
    t = not_null(k_23);
    {
      n_23 = t;
      {
        t = SSL_explode_term(not_null(n_23));
        {
          p_23 = t;
          j_23 :
          if(match_cons(p_23, sym__2))
            {
              q_23 = ATgetArgument(p_23, 0);
              r_23 = ATgetArgument(p_23, 1);
              if(((m_23 != NULL) && (m_23 != r_23)))
                _fail(r_23);
              else
                m_23 = r_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_23);
      t = foldr_2(t, p_83, q_83);
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
    ATerm d_2 (ATerm t)
    {
      t = term_x_11;
      return(t);
    }
    t = crush_2(t, d_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        ATerm m_14;
        m_14 = t;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_23), not_null(z_23));
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              t = SSL_gtr(not_null(y_23), not_null(z_23));
            }
        }
        t = m_14;
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
  ATerm f_24 = NULL;
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
      g_24 = t;
      e_24 :
      if(match_cons(g_24, sym__2))
        {
          h_24 = ATgetArgument(g_24, 0);
          i_24 = ATgetArgument(g_24, 1);
          {
            if(((f_24 != NULL) && (f_24 != h_24)))
              _fail(h_24);
            else
              f_24 = h_24;
            if(((f_24 != NULL) && (f_24 != i_24)))
              _fail(i_24);
            else
              f_24 = i_24;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_91 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm l_24 = NULL;
      ATerm m_24 = NULL;
      t = term_x_9;
      {
        t = get_config_0(t);
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_r_8);
        t = geq_0(t);
      }
    }
    t = r_14;
    t = x_91(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm q_24 = NULL,s_24 = NULL;
    ATerm v_14;
    v_14 = t;
    {
      ATerm r_24 = NULL;
      t = run_time_0(t);
      {
        r_24 = t;
        if(((q_24 != NULL) && (q_24 != r_24)))
          _fail(r_24);
        else
          q_24 = r_24;
      }
    }
    t = v_14;
    {
      ATerm t_24 = NULL;
      t = term_y_14;
      {
        t = get_config_0(t);
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), not_null(q_24)), term_c_15), not_null(s_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_2);
  {
    t = term_x_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym_Version_0))
    {
      ATerm c_25 = NULL,e_25 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(a_25));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
      }
      t = e_15;
      {
        ATerm f_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_25));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        t = not_null(e_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm g_2 (ATerm t)
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
  t = option_defined_1(t, g_2);
  t = d_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = SSL_table_create(not_null(k_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  {
    ATerm o_15;
    o_15 = t;
    {
      t = term_q_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_15, term_r_15, not_null(c_26));
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
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_table_destroy(not_null(g_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_exit(not_null(k_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(((ATgetType(o_26) == AT_LIST) && ATisEmpty(o_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
        {
          p_26 = ATgetFirst((ATermList) o_26);
          q_26 = (ATerm) ATgetNext((ATermList) o_26);
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
  ATerm s_15;
  s_15 = t;
  {
    ATerm t_26 = NULL;
    ATerm w_26 = NULL;
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
          ATerm u_26 = NULL;
          ATerm v_26 = NULL;
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
          t = (ATerm) ATinsert(ATempty, not_null(u_26));
        }
      }
    {
      w_26 = t;
      if(((t_26 != NULL) && (t_26 != w_26)))
        _fail(w_26);
      else
        t_26 = w_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(t_26));
      t = printnl_0(t);
    }
  }
  t = s_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm z_26 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = Cons_2(t, d_78, z_26);
      }
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  i_27 = t;
  f_27 :
  if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
    {
      g_27 = ATgetFirst((ATermList) i_27);
      h_27 = (ATerm) ATgetNext((ATermList) i_27);
      {
        ATerm l_27 = NULL;
        t = not_null(h_27);
        {
          ATerm y_15;
          y_15 = t;
          {
            ATerm r_27 = NULL,t_27 = NULL,v_27 = NULL;
            ATerm z_15;
            z_15 = t;
            {
              ATerm s_27 = NULL;
              t = i_0(t);
              {
                s_27 = t;
                if(((r_27 != NULL) && (r_27 != s_27)))
                  _fail(s_27);
                else
                  r_27 = s_27;
              }
            }
            t = z_15;
            {
              ATerm u_27 = NULL;
              t = not_null(g_27);
              {
                t = h_0(t);
                {
                  u_27 = t;
                  if(((t_27 != NULL) && (t_27 != u_27)))
                    _fail(u_27);
                  else
                    t_27 = u_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_27)), not_null(t_27));
                {
                  v_27 = t;
                  if(((l_27 != NULL) && (l_27 != v_27)))
                    _fail(v_27);
                  else
                    l_27 = v_27;
                }
              }
            }
          }
          t = y_15;
          {
            ATerm h_2 (ATerm t)
            {
              t = not_null(l_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_27) == AT_LIST) && ATisEmpty(i_27)))
        {
          {
            t = term_g_11;
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
  ATerm i_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm j_28 = NULL,k_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_Program_1))
    {
      k_28 = ATgetArgument(j_28, 0);
      {
        ATerm n_28 = NULL,p_28 = NULL;
        ATerm o_28 = NULL;
        t = SSLgetAnnotations(not_null(j_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
        {
          t = not_null(k_28);
          {
            ATerm r_28 = NULL;
            t = f_63(t);
            {
              p_28 = t;
              {
                ATerm s_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_28)), not_null(n_28));
                {
                  s_28 = t;
                  if(((r_28 != NULL) && (r_28 != s_28)))
                    _fail(s_28);
                  else
                    r_28 = s_28;
                }
                t = not_null(r_28);
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
  ATerm b_29 = NULL;
  ATerm a_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL;
      t = term_y_14;
      {
        t = get_config_0(t);
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
      }
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = a_16;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            ATerm d_29 = NULL;
            d_29 = t;
            if(((b_29 != NULL) && (b_29 != d_29)))
              _fail(d_29);
            else
              b_29 = d_29;
            return(t);
          }
          t = Program_1(t, k_2);
          return(t);
        }
        t = option_defined_1(t, j_2);
      }
    }
  {
    ATerm l_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        t = not_null(b_29);
        return(t);
      }
      t = short_description_1(t, m_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_2);
    {
      t = term_g_16;
      {
        t = echo_0(t);
        {
          t = term_n_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm e_29 = NULL;
                  ATerm f_29 = NULL;
                  f_29 = t;
                  if(((e_29 != NULL) && (e_29 != f_29)))
                    _fail(f_29);
                  else
                    e_29 = f_29;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_29)), term_o_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  ATerm p_2 (ATerm t)
                  {
                    ATerm g_29 = NULL;
                    ATerm h_29 = NULL;
                    ATerm t_2 (ATerm t)
                    {
                      t = not_null(b_29);
                      return(t);
                    }
                    t = long_description_1(t, t_2);
                    {
                      h_29 = t;
                      if(((g_29 != NULL) && (g_29 != h_29)))
                        _fail(h_29);
                      else
                        g_29 = h_29;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_29)), term_p_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_2);
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
ATerm debug_0 (ATerm t)
{
  ATerm q_16;
  q_16 = t;
  {
    ATerm n_29 = NULL;
    ATerm o_29 = NULL;
    o_29 = t;
    if(((n_29 != NULL) && (n_29 != o_29)))
      _fail(o_29);
    else
      n_29 = o_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, not_null(n_29)));
      t = printnl_0(t);
    }
  }
  t = q_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm r_16;
  r_16 = t;
  {
    t = c_89(t);
    t = debug_0(t);
  }
  t = r_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_Undefined_1))
    {
      w_29 = ATgetArgument(v_29, 0);
      {
        ATerm z_29 = NULL,b_30 = NULL;
        ATerm a_30 = NULL;
        t = SSLgetAnnotations(not_null(v_29));
        {
          a_30 = t;
          if(((z_29 != NULL) && (z_29 != a_30)))
            _fail(a_30);
          else
            z_29 = a_30;
        }
        {
          t = not_null(w_29);
          {
            ATerm d_30 = NULL;
            t = g_63(t);
            {
              b_30 = t;
              {
                ATerm e_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_30)), not_null(z_29));
                {
                  e_30 = t;
                  if(((d_30 != NULL) && (d_30 != e_30)))
                    _fail(e_30);
                  else
                    d_30 = e_30;
                }
                t = not_null(d_30);
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
ATerm fetch_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm j_30 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_78, _id);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, _id, j_30);
      }
    return(t);
  }
  t = j_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_93 (ATerm))
{
  t = fetch_1(t, a_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym_Help_0))
    {
      ATerm q_30 = NULL,s_30 = NULL;
      ATerm v_16;
      v_16 = t;
      {
        ATerm r_30 = NULL;
        t = SSLgetAnnotations(not_null(o_30));
        {
          r_30 = t;
          if(((q_30 != NULL) && (q_30 != r_30)))
            _fail(r_30);
          else
            q_30 = r_30;
        }
      }
      t = v_16;
      {
        ATerm t_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_30));
        {
          t_30 = t;
          if(((s_30 != NULL) && (s_30 != t_30)))
            _fail(t_30);
          else
            s_30 = t_30;
        }
        t = not_null(s_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_70(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      t = SSL_table_get(not_null(a_31), not_null(b_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym__3))
    {
      j_31 = ATgetArgument(i_31, 0);
      k_31 = ATgetArgument(i_31, 1);
      l_31 = ATgetArgument(i_31, 2);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm p_31 = NULL;
          ATerm q_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(k_31));
          {
            ATerm d_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_17);
              }
            else
              {
                t = d_17;
                t = (ATerm) ATempty;
              }
            {
              q_31 = t;
              if(((p_31 != NULL) && (p_31 != q_31)))
                _fail(q_31);
              else
                p_31 = q_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_31), not_null(k_31), (ATerm) ATinsert(CheckATermList(not_null(p_31)), not_null(l_31)));
            t = table_put_0(t);
          }
        }
        t = a_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm u_31 = NULL;
  ATerm v_31 = NULL;
  t = term_g_11;
  {
    t = f_94(t);
    {
      v_31 = t;
      if(((u_31 != NULL) && (u_31 != v_31)))
        _fail(v_31);
      else
        u_31 = v_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_16, term_i_16, not_null(u_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_string(b_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
        {
          c_32 = ATgetFirst((ATermList) b_32);
          d_32 = (ATerm) ATgetNext((ATermList) b_32);
          {
            ATerm g_32 = NULL;
            ATerm j_17;
            j_17 = t;
            {
              t = not_null(c_32);
              t = a_0(t);
            }
            t = j_17;
            {
              ATerm h_32 = NULL;
              t = term_g_11;
              {
                t = d_0(t);
                {
                  h_32 = t;
                  if(((g_32 != NULL) && (g_32 != h_32)))
                    _fail(h_32);
                  else
                    g_32 = h_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_32)), not_null(g_32));
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
  ATerm x_2 (ATerm t)
  {
    ATerm m_32 = NULL;
    m_32 = t;
    l_32 :
    if(!(match_string(m_32, "--help")))
      {
        if(!(match_string(m_32, "-h")))
          {
            if(!(match_string(m_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_l_17;
    {
      t = set_config_0(t);
      t = term_m_17;
    }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = Option_3(t, x_2, y_2, d_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
    {
      q_32 = ATgetFirst((ATermList) p_32);
      r_32 = (ATerm) ATgetNext((ATermList) p_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
    {
      d_33 = ATgetFirst((ATermList) c_33);
      e_33 = (ATerm) ATgetNext((ATermList) c_33);
      {
        ATerm i_33 = NULL,k_33 = NULL;
        ATerm j_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm m_33 = NULL;
            t = k_57(t);
            {
              k_33 = t;
              {
                t = not_null(e_33);
                {
                  ATerm o_33 = NULL;
                  t = l_57(t);
                  {
                    m_33 = t;
                    {
                      ATerm p_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_33)), not_null(k_33)), not_null(i_33));
                      {
                        p_33 = t;
                        if(((o_33 != NULL) && (o_33 != p_33)))
                          _fail(p_33);
                        else
                          o_33 = p_33;
                      }
                      t = not_null(o_33);
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
  ATerm d_34 = NULL;
  d_34 = t;
  c_34 :
  if(((ATgetType(d_34) == AT_LIST) && ATisEmpty(d_34)))
    {
      {
        ATerm f_34 = NULL,h_34 = NULL;
        ATerm s_17;
        s_17 = t;
        {
          ATerm g_34 = NULL;
          t = SSLgetAnnotations(not_null(d_34));
          {
            g_34 = t;
            if(((f_34 != NULL) && (f_34 != g_34)))
              _fail(g_34);
            else
              f_34 = g_34;
          }
        }
        t = s_17;
        {
          ATerm i_34 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_34));
          {
            i_34 = t;
            if(((h_34 != NULL) && (h_34 != i_34)))
              _fail(i_34);
            else
              h_34 = i_34;
          }
          t = not_null(h_34);
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym__2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_9, not_null(p_34), not_null(q_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm t_17;
  t_17 = t;
  {
    ATerm h_3 (ATerm t)
    {
      t = term_u_17;
      t = d_94(t);
      return(t);
    }
    t = try_1(t, h_3);
  }
  t = t_17;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm y_34 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm w_34 = NULL;
        ATerm x_34 = NULL;
        x_34 = t;
        if(((w_34 != NULL) && (w_34 != x_34)))
          _fail(x_34);
        else
          w_34 = x_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(w_34));
          t = set_config_0(t);
        }
      }
      t = w_17;
      {
        ATerm z_34 = NULL;
        z_34 = t;
        if(((y_34 != NULL) && (y_34 != z_34)))
          _fail(z_34);
        else
          y_34 = z_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_34));
      }
      return(t);
    }
    ATerm o_3 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                t = d_94(t);
                t = Cons_2(t, _id, o_3);
              }
            }
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_3, o_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_35 = NULL,l_35 = NULL,m_35 = NULL;
  ATerm n_18;
  n_18 = t;
  {
    ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
    n_35 = t;
    e_35 :
    if(match_cons(n_35, sym__3))
      {
        o_35 = ATgetArgument(n_35, 0);
        p_35 = ATgetArgument(n_35, 1);
        q_35 = ATgetArgument(n_35, 2);
        {
          if(((f_35 != NULL) && (f_35 != o_35)))
            _fail(o_35);
          else
            f_35 = o_35;
          {
            if(((l_35 != NULL) && (l_35 != p_35)))
              _fail(p_35);
            else
              l_35 = p_35;
            {
              if(((m_35 != NULL) && (m_35 != q_35)))
                _fail(q_35);
              else
                m_35 = q_35;
              t = SSL_table_put(not_null(f_35), not_null(l_35), not_null(m_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm t_35 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    t = term_p_18;
    t = table_put_0(t);
  }
  t = o_18;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = q_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_3);
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_18;
            y_18 = t;
            {
              ATerm z_18 = t;
              int c_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_k_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(c_19);
                }
              else
                {
                  t = z_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_18;
            {
              t = system_usage_0(t);
              {
                t = term_x_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = s_18;
            {
              ATerm s_3 (ATerm t)
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm u_35 = NULL;
                  u_35 = t;
                  if(((t_35 != NULL) && (t_35 != u_35)))
                    _fail(u_35);
                  else
                    t_35 = u_35;
                  return(t);
                }
                t = Undefined_1(t, t_3);
                return(t);
              }
              t = option_defined_1(t, s_3);
              {
                ATerm u_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_35)), term_d_19);
                  return(t);
                }
                t = say_1(t, u_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_3);
      {
        ATerm e_19;
        e_19 = t;
        {
          t = term_h_16;
          t = table_destroy_0(t);
        }
        t = e_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm))
{
  t = parse_options_1(t, j_90);
  {
    t = store_options_0(t);
    {
      t = l_90(t);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, k_90);
            ;
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_90(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = l_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_91(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, a_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_3, c_91, d_91, w_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      ATerm x_19;
      x_19 = t;
      {
        ATerm x_35 = NULL;
        ATerm y_35 = NULL;
        t = term_y_14;
        {
          t = get_config_0(t);
          {
            y_35 = t;
            if(((x_35 != NULL) && (x_35 != y_35)))
              _fail(y_35);
            else
              x_35 = y_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATinsert(ATempty, not_null(x_35)));
          t = printnl_0(t);
        }
      }
      t = x_19;
      return(t);
    }
    t = if_verbose2_1(t, y_3);
    return(t);
  }
  t = iowrap_4(t, u_90, v_90, w_90, x_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm))
{
  t = iowrap_3(t, s_90, t_90, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    t = _2(t, _id, p_90);
    return(t);
  }
  t = iowrap_2(t, a_4, _fail);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = meta_explode_0(t);
  return(t);
}
