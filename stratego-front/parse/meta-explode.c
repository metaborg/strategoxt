#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
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
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
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
ATerm term_p_19;
ATerm term_q_18;
ATerm term_c_18;
ATerm term_r_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_n_10;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_s_4;
ATerm term_h_4;
ATerm term_b_4;
ATerm term_a_4;
void init_constant_terms (void)
{
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym_Cong_2, term_a_4, (ATerm) ATempty);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym_Op_2, term_a_4, (ATerm) ATempty);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_r_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_x_10);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_x_10);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_g_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_x_10);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm i_73 (ATerm));
ATerm MetaExplode_0 (ATerm);
ATerm _2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_89 (ATerm));
ATerm debug_1 (ATerm, ATerm f_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm crush_2 (ATerm, ATerm t_82 (ATerm), ATerm u_82 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_93 (ATerm));
ATerm map_1 (ATerm, ATerm h_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_93 (ATerm));
ATerm Program_1 (ATerm, ATerm q_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_69 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_93 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_89 (ATerm), ATerm x_89 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_89 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm i_3 = t;
  int m_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL;
      v_2 = t;
      h_1 :
      if(match_cons(v_2, sym_meta_var_1))
        {
          w_2 = ATgetArgument(v_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_3);
    }
  else
    {
      t = i_3;
      {
        ATerm s_3 = t;
        int t_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            LocalPopChoice(t_3);
          }
        else
          {
            t = s_3;
            {
              ATerm u_3 = t;
              int w_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = u_3;
                  {
                    ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
                    ATerm v_3 (ATerm t)
                    {
                      ATerm j_3 = NULL,k_3 = NULL,q_3 = NULL;
                      ATerm x_3;
                      x_3 = t;
                      {
                        ATerm l_3 = NULL;
                        ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
                        t = not_null(b_3);
                        {
                          l_3 = t;
                          {
                            t = SSL_explode_term(not_null(l_3));
                            {
                              n_3 = t;
                              s_2 :
                              if(match_cons(n_3, sym__2))
                                {
                                  o_3 = ATgetArgument(n_3, 0);
                                  p_3 = ATgetArgument(n_3, 1);
                                  {
                                    if(((j_3 != NULL) && (j_3 != o_3)))
                                      _fail(o_3);
                                    else
                                      j_3 = o_3;
                                    if(((k_3 != NULL) && (k_3 != p_3)))
                                      _fail(p_3);
                                    else
                                      k_3 = p_3;
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
                      t = x_3;
                      {
                        ATerm r_3 = NULL;
                        t = not_null(k_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            r_3 = t;
                            if(((q_3 != NULL) && (q_3 != r_3)))
                              _fail(r_3);
                            else
                              q_3 = r_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(j_3), not_null(q_3));
                      }
                      return(t);
                    }
                    b_3 = t;
                    u_2 :
                    if(((ATgetType(b_3) == AT_LIST) && ATisEmpty(b_3)))
                      {
                        {
                          ATerm y_3 = t;
                          int z_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_b_4;
                              LocalPopChoice(z_3);
                            }
                          else
                            {
                              t = y_3;
                              t = v_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
                          {
                            z_2 = ATgetFirst((ATermList) b_3);
                            a_3 = (ATerm) ATgetNext((ATermList) b_3);
                            {
                              ATerm c_4 = t;
                              int d_4 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_3 = NULL,g_3 = NULL;
                                  ATerm f_4;
                                  f_4 = t;
                                  {
                                    ATerm f_3 = NULL;
                                    t = not_null(z_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        f_3 = t;
                                        if(((e_3 != NULL) && (e_3 != f_3)))
                                          _fail(f_3);
                                        else
                                          e_3 = f_3;
                                      }
                                    }
                                  }
                                  t = f_4;
                                  {
                                    ATerm h_3 = NULL;
                                    t = not_null(a_3);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        h_3 = t;
                                        if(((g_3 != NULL) && (g_3 != h_3)))
                                          _fail(h_3);
                                        else
                                          g_3 = h_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_3)), not_null(e_3)));
                                  }
                                  LocalPopChoice(d_4);
                                }
                              else
                                {
                                  t = c_4;
                                  t = v_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = v_3(t);
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
  ATerm g_4 = NULL;
  ATerm i_4 = NULL,j_4 = NULL,p_4 = NULL;
  g_4 = t;
  {
    ATerm l_4;
    l_4 = t;
    {
      ATerm k_4 = NULL;
      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
      t = not_null(g_4);
      {
        k_4 = t;
        {
          t = SSL_explode_term(not_null(k_4));
          {
            m_4 = t;
            e_4 :
            if(match_cons(m_4, sym__2))
              {
                n_4 = ATgetArgument(m_4, 0);
                o_4 = ATgetArgument(m_4, 1);
                {
                  if(((i_4 != NULL) && (i_4 != n_4)))
                    _fail(n_4);
                  else
                    i_4 = n_4;
                  if(((j_4 != NULL) && (j_4 != o_4)))
                    _fail(o_4);
                  else
                    j_4 = o_4;
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
    t = l_4;
    {
      ATerm q_4 = NULL;
      t = not_null(j_4);
      {
        t = map_1(t, trm_explode_0);
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_4), not_null(p_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  y_4 :
  if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
    {
      a_5 = ATgetFirst((ATermList) z_4);
      b_5 = (ATerm) ATgetNext((ATermList) z_4);
      {
        ATerm e_5 = NULL,g_5 = NULL;
        ATerm r_4;
        r_4 = t;
        {
          ATerm f_5 = NULL;
          t = not_null(a_5);
          {
            t = trm_explode_0(t);
            {
              f_5 = t;
              if(((e_5 != NULL) && (e_5 != f_5)))
                _fail(f_5);
              else
                e_5 = f_5;
            }
          }
        }
        t = r_4;
        {
          ATerm h_5 = NULL;
          t = not_null(b_5);
          {
            t = trm_explode_0(t);
            {
              h_5 = t;
              if(((g_5 != NULL) && (g_5 != h_5)))
                _fail(h_5);
              else
                g_5 = h_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_5)), not_null(e_5)));
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
  ATerm n_5 = NULL;
  n_5 = t;
  m_5 :
  if(((ATgetType(n_5) == AT_LIST) && ATisEmpty(n_5)))
    {
      t = term_s_4;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  w_5 = t;
  {
    ATerm b_6 = NULL;
    ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
    t = not_null(w_5);
    {
      b_6 = t;
      {
        t = SSL_explode_term(not_null(b_6));
        {
          d_6 = t;
          s_5 :
          if(match_cons(d_6, sym__2))
            {
              e_6 = ATgetArgument(d_6, 0);
              f_6 = ATgetArgument(d_6, 1);
              t_5 :
              if(match_string(e_6, ""))
                {
                  u_5 :
                  if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
                    {
                      g_6 = ATgetFirst((ATermList) f_6);
                      h_6 = (ATerm) ATgetNext((ATermList) f_6);
                      v_5 :
                      if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
                        {
                          i_6 = ATgetFirst((ATermList) h_6);
                          j_6 = (ATerm) ATgetNext((ATermList) h_6);
                          {
                            if(((y_5 != NULL) && (y_5 != g_6)))
                              _fail(g_6);
                            else
                              y_5 = g_6;
                            {
                              if(((a_6 != NULL) && (a_6 != i_6)))
                                _fail(i_6);
                              else
                                a_6 = i_6;
                              if(((z_5 != NULL) && (z_5 != j_6)))
                                _fail(j_6);
                              else
                                z_5 = j_6;
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
    t = not_null(a_6);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_6 = NULL;
  ATerm v_6 = NULL,w_6 = NULL;
  t_6 = t;
  {
    ATerm x_6 = NULL;
    ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
    t = not_null(t_6);
    {
      x_6 = t;
      {
        t = SSL_explode_term(not_null(x_6));
        {
          z_6 = t;
          q_6 :
          if(match_cons(z_6, sym__2))
            {
              a_7 = ATgetArgument(z_6, 0);
              b_7 = ATgetArgument(z_6, 1);
              r_6 :
              if(match_string(a_7, ""))
                {
                  s_6 :
                  if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
                    {
                      c_7 = ATgetFirst((ATermList) b_7);
                      d_7 = (ATerm) ATgetNext((ATermList) b_7);
                      {
                        if(((w_6 != NULL) && (w_6 != c_7)))
                          _fail(c_7);
                        else
                          w_6 = c_7;
                        if(((v_6 != NULL) && (v_6 != d_7)))
                          _fail(d_7);
                        else
                          v_6 = d_7;
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
    t = not_null(w_6);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_83(t);
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      {
        ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
        l_7 = t;
        k_7 :
        if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
          {
            m_7 = ATgetFirst((ATermList) l_7);
            n_7 = (ATerm) ATgetNext((ATermList) l_7);
            {
              ATerm q_7 = NULL,s_7 = NULL;
              ATerm v_4;
              v_4 = t;
              {
                ATerm r_7 = NULL;
                t = not_null(m_7);
                {
                  t = z_83(t);
                  {
                    r_7 = t;
                    if(((q_7 != NULL) && (q_7 != r_7)))
                      _fail(r_7);
                    else
                      q_7 = r_7;
                  }
                }
              }
              t = v_4;
              {
                ATerm t_7 = NULL;
                t = not_null(n_7);
                {
                  t = foldr_3(t, x_83, y_83, z_83);
                  {
                    t_7 = t;
                    if(((s_7 != NULL) && (s_7 != t_7)))
                      _fail(t_7);
                    else
                      s_7 = t_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_7), not_null(s_7));
                  t = y_83(t);
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
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_meta_listvar_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(a_8)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Conc_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      {
        t = not_null(j_8);
        {
          ATerm w_4 = t;
          int x_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8 = NULL;
              ATerm o_8 = NULL;
              t = LstMetaVar_0(t);
              {
                o_8 = t;
                if(((n_8 != NULL) && (n_8 != o_8)))
                  _fail(o_8);
                else
                  n_8 = o_8;
              }
              t = (ATerm) ATinsert(ATempty, not_null(n_8));
              LocalPopChoice(x_4);
            }
          else
            {
              t = w_4;
              {
              }
            }
          {
            ATerm b_0 (ATerm t)
            {
              t = not_null(k_8);
              {
                ATerm c_5 = t;
                int d_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    LocalPopChoice(d_5);
                  }
                else
                  {
                    t = c_5;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm c_0 (ATerm t)
            {
              ATerm p_8 = NULL,r_8 = NULL;
              ATerm i_5;
              i_5 = t;
              {
                ATerm q_8 = NULL;
                t = Fst_0(t);
                {
                  q_8 = t;
                  if(((p_8 != NULL) && (p_8 != q_8)))
                    _fail(q_8);
                  else
                    p_8 = q_8;
                }
              }
              t = i_5;
              {
                ATerm s_8 = NULL;
                t = Snd_0(t);
                {
                  s_8 = t;
                  if(((r_8 != NULL) && (r_8 != s_8)))
                    _fail(s_8);
                  else
                    r_8 = s_8;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_8)), not_null(p_8)));
              }
              return(t);
            }
            t = foldr_3(t, b_0, c_0, trm_explode_0);
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
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym_Anno_2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 = NULL,q_9 = NULL;
            ATerm p_9 = NULL;
            t = SSLgetAnnotations(not_null(i_9));
            {
              p_9 = t;
              if(((o_9 != NULL) && (o_9 != p_9)))
                _fail(p_9);
              else
                o_9 = p_9;
            }
            {
              t = not_null(j_9);
              {
                ATerm s_9 = NULL;
                t = m_0(t);
                {
                  q_9 = t;
                  {
                    t = not_null(k_9);
                    {
                      ATerm u_9 = NULL;
                      t = n_0(t);
                      {
                        s_9 = t;
                        {
                          ATerm v_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(q_9), not_null(s_9)), not_null(o_9));
                          {
                            v_9 = t;
                            if(((u_9 != NULL) && (u_9 != v_9)))
                              _fail(v_9);
                            else
                              u_9 = v_9;
                          }
                          t = not_null(u_9);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm z_9 = NULL,b_10 = NULL;
              ATerm a_10 = NULL;
              t = SSLgetAnnotations(not_null(i_9));
              {
                a_10 = t;
                if(((z_9 != NULL) && (z_9 != a_10)))
                  _fail(a_10);
                else
                  z_9 = a_10;
              }
              {
                t = not_null(j_9);
                {
                  ATerm d_10 = NULL;
                  t = m_0(t);
                  {
                    b_10 = t;
                    {
                      t = not_null(k_9);
                      {
                        ATerm f_10 = NULL;
                        t = n_0(t);
                        {
                          d_10 = t;
                          {
                            ATerm g_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(b_10), not_null(d_10)), not_null(z_9));
                            {
                              g_10 = t;
                              if(((f_10 != NULL) && (f_10 != g_10)))
                                _fail(g_10);
                              else
                                f_10 = g_10;
                            }
                            t = not_null(f_10);
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
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym_FromStrategy_1))
    {
      u_10 = ATgetArgument(t_10, 0);
      {
        t = not_null(u_10);
        t = MetaExplode_0(t);
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
  ATerm z_10 = NULL,a_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym_FromTerm_1))
    {
      a_11 = ATgetArgument(z_10, 0);
      {
        t = not_null(a_11);
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
  ATerm e_11 = NULL;
  t = is_string_0(t);
  {
    ATerm f_11 = NULL;
    f_11 = t;
    if(((e_11 != NULL) && (e_11 != f_11)))
      _fail(f_11);
    else
      e_11 = f_11;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(e_11));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_meta_listvar_1))
    {
      k_11 = ATgetArgument(j_11, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_h_4, (ATerm) ATinsert(ATinsert(ATempty, term_s_4), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(k_11)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_meta_var_1))
    {
      q_11 = ATgetArgument(p_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm l_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
      LocalPopChoice(o_5);
    }
  else
    {
      t = l_5;
      {
        ATerm p_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmLMetaVar_0(t);
            LocalPopChoice(q_5);
          }
        else
          {
            t = p_5;
            {
              ATerm r_5 = t;
              int x_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
                  LocalPopChoice(x_5);
                }
              else
                {
                  t = r_5;
                  {
                    ATerm c_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = c_6;
                        {
                          ATerm l_6 = t;
                          int m_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0(t);
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
                                    t = TrmAnno_0(t);
                                    LocalPopChoice(o_6);
                                  }
                                else
                                  {
                                    t = n_6;
                                    {
                                      ATerm p_6 = t;
                                      int u_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0(t);
                                          LocalPopChoice(u_6);
                                        }
                                      else
                                        {
                                          t = p_6;
                                          {
                                            ATerm y_6 = t;
                                            int e_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmNil_0(t);
                                                LocalPopChoice(e_7);
                                              }
                                            else
                                              {
                                                t = y_6;
                                                {
                                                  ATerm f_7 = t;
                                                  int g_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmCons_0(t);
                                                      LocalPopChoice(g_7);
                                                    }
                                                  else
                                                    {
                                                      t = f_7;
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
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm t_11 (ATerm t)
  {
    ATerm h_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_73(t);
        LocalPopChoice(i_7);
      }
    else
      {
        t = h_7;
        t = _all(t, t_11);
      }
    return(t);
  }
  t = t_11(t);
  return(t);
}
ATerm MetaExplode_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL;
    x_11 = t;
    w_11 :
    if(match_cons(x_11, sym_ToTerm_1))
      {
        y_11 = ATgetArgument(x_11, 0);
        {
          t = not_null(y_11);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(x_11, sym_ToStrategy_1))
          {
            y_11 = ATgetArgument(x_11, 0);
            {
              t = not_null(y_11);
              t = str_explode_0(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = alltd_1(t, e_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym__2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm p_12 = NULL,r_12 = NULL;
        ATerm q_12 = NULL;
        t = SSLgetAnnotations(not_null(j_12));
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
        {
          t = not_null(k_12);
          {
            ATerm t_12 = NULL;
            t = q_55(t);
            {
              r_12 = t;
              {
                t = not_null(l_12);
                {
                  ATerm v_12 = NULL;
                  t = r_55(t);
                  {
                    t_12 = t;
                    {
                      ATerm w_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_12), not_null(t_12)), not_null(p_12));
                      {
                        w_12 = t;
                        if(((v_12 != NULL) && (v_12 != w_12)))
                          _fail(w_12);
                        else
                          v_12 = w_12;
                      }
                      t = not_null(v_12);
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
  ATerm e_13 = NULL;
  ATerm j_7;
  j_7 = t;
  {
    ATerm f_0 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL;
      f_13 = t;
      d_13 :
      if(match_cons(f_13, sym_Program_1))
        {
          g_13 = ATgetArgument(f_13, 0);
          if(((e_13 != NULL) && (e_13 != g_13)))
            _fail(g_13);
          else
            e_13 = g_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, f_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(e_13)), term_p_7));
      {
        t = printnl_0(t);
        {
          t = term_v_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym__2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm w_7;
        w_7 = t;
        t = SSL_printnl(not_null(l_13), not_null(m_13));
        t = w_7;
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
  ATerm r_13 = NULL;
  r_13 = t;
  t = SSL_implode_string(not_null(r_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_8);
    }
  else
    {
      t = x_7;
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
        w_13 = t;
        v_13 :
        if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
          {
            x_13 = ATgetFirst((ATermList) w_13);
            y_13 = (ATerm) ATgetNext((ATermList) w_13);
            {
              t = not_null(x_13);
              {
                ATerm o_0 (ATerm t)
                {
                  t = not_null(y_13);
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
  ATerm i_14 = NULL;
  ATerm k_14 = NULL;
  i_14 = t;
  {
    ATerm l_14 = NULL;
    ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
    t = not_null(i_14);
    {
      l_14 = t;
      {
        t = SSL_explode_term(not_null(l_14));
        {
          n_14 = t;
          g_14 :
          if(match_cons(n_14, sym__2))
            {
              o_14 = ATgetArgument(n_14, 0);
              p_14 = ATgetArgument(n_14, 1);
              h_14 :
              if(match_string(o_14, ""))
                {
                  if(((k_14 != NULL) && (k_14 != p_14)))
                    _fail(p_14);
                  else
                    k_14 = p_14;
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
      t = not_null(k_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm t_14 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_14);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        {
          t = Nil_0(t);
          t = w_77(t);
        }
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        t = not_null(x_14);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(y_14);
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
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  t = SSL_explode_string(not_null(d_15));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = g_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_15 = NULL;
  h_15 = t;
  t = SSL_is_string(not_null(h_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_8);
    }
  else
    {
      t = m_8;
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              ATerm w_8 = t;
              int x_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(x_8);
                }
              else
                {
                  t = w_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_0);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
              q_15 = t;
              p_15 :
              if(match_cons(q_15, sym_Path_1))
                {
                  r_15 = ATgetArgument(q_15, 0);
                  t = not_null(r_15);
                }
              else
                {
                  if(match_cons(q_15, sym_Var_1))
                    {
                      r_15 = ATgetArgument(q_15, 0);
                      {
                        t = not_null(r_15);
                        {
                          ATerm y_8 = t;
                          int z_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_8);
                            }
                          else
                            {
                              t = y_8;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_a_9;
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
                      if(match_cons(q_15, sym_Prefix_2))
                        {
                          r_15 = ATgetArgument(q_15, 0);
                          s_15 = ATgetArgument(q_15, 1);
                          {
                            ATerm x_15 = NULL,z_15 = NULL;
                            ATerm b_9;
                            b_9 = t;
                            {
                              ATerm y_15 = NULL;
                              t = not_null(r_15);
                              {
                                t = eval_config_0(t);
                                {
                                  y_15 = t;
                                  if(((x_15 != NULL) && (x_15 != y_15)))
                                    _fail(y_15);
                                  else
                                    x_15 = y_15;
                                }
                              }
                            }
                            t = b_9;
                            {
                              ATerm a_16 = NULL;
                              t = not_null(s_15);
                              {
                                t = eval_config_0(t);
                                {
                                  a_16 = t;
                                  if(((z_15 != NULL) && (z_15 != a_16)))
                                    _fail(a_16);
                                  else
                                    z_15 = a_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(z_15));
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
  ATerm i_16 = NULL;
  i_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(i_16));
    {
      t = table_get_0(t);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm f_9;
              f_9 = t;
              {
                ATerm k_16 = NULL;
                ATerm l_16 = NULL;
                l_16 = t;
                if(((k_16 != NULL) && (k_16 != l_16)))
                  _fail(l_16);
                else
                  k_16 = l_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_9, not_null(i_16), not_null(k_16));
                  t = table_put_0(t);
                }
              }
              t = f_9;
            }
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm g_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9;
      m_9 = t;
      {
        ATerm p_16 = NULL;
        ATerm q_16 = NULL;
        t = term_n_9;
        {
          t = get_config_0(t);
          {
            q_16 = t;
            if(((p_16 != NULL) && (p_16 != q_16)))
              _fail(q_16);
            else
              p_16 = q_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), term_r_9);
          t = geq_0(t);
        }
      }
      t = m_9;
      t = c_91(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = g_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t = SSL_WriteToTextFile(not_null(v_16), not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      t = SSL_WriteToBinaryFile(not_null(d_17), not_null(e_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_17 = NULL;
  ATerm t_9;
  t_9 = t;
  {
    ATerm s_0 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 (ATerm t)
          {
            ATerm n_17 = NULL,o_17 = NULL;
            n_17 = t;
            j_17 :
            if(match_cons(n_17, sym_Output_1))
              {
                o_17 = ATgetArgument(n_17, 0);
                if(((m_17 != NULL) && (m_17 != o_17)))
                  _fail(o_17);
                else
                  m_17 = o_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_0);
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm p_17 = NULL;
            t = term_y_9;
            {
              p_17 = t;
              if(((m_17 != NULL) && (m_17 != p_17)))
                _fail(p_17);
              else
                m_17 = p_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_0, _id);
  }
  t = t_9;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = not_null(m_17);
        return(t);
      }
      t = split_2(t, v_0, _id);
      return(t);
    }
    t = _2(t, _id, u_0);
    {
      ATerm c_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              ATerm q_17 = NULL;
              q_17 = t;
              l_17 :
              if(!(match_cons(q_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_0);
            return(t);
          }
          t = _2(t, w_0, WriteToBinaryFile_0);
          LocalPopChoice(e_10);
        }
      else
        {
          t = c_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm w_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  ATerm h_10;
  h_10 = t;
  t = dtime_0(t);
  t = h_10;
  {
    t = j_89(t);
    {
      ATerm i_10;
      i_10 = t;
      {
        ATerm x_17 = NULL;
        t = dtime_0(t);
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
      }
      t = i_10;
      {
        y_17 = t;
        v_17 :
        if(match_cons(y_17, sym__2))
          {
            z_17 = ATgetArgument(y_17, 0);
            a_18 = ATgetArgument(y_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_17))), not_null(a_18));
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
ATerm debug_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm j_10;
  j_10 = t;
  {
    ATerm h_18 = NULL,j_18 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm i_18 = NULL;
      t = f_88(t);
      {
        i_18 = t;
        if(((h_18 != NULL) && (h_18 != i_18)))
          _fail(i_18);
        else
          h_18 = i_18;
      }
    }
    t = k_10;
    {
      ATerm k_18 = NULL;
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_18)), not_null(h_18)));
        t = printnl_0(t);
      }
    }
  }
  t = j_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm o_18 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL;
      p_18 = t;
      {
        if(((o_18 != NULL) && (o_18 != p_18)))
          _fail(p_18);
        else
          o_18 = p_18;
        t = SSL_ReadFromFile(not_null(o_18));
      }
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm y_0 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = debug_1(t, y_0);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm t_18 = NULL,v_18 = NULL;
  ATerm o_10;
  o_10 = t;
  {
    ATerm u_18 = NULL;
    t = k_85(t);
    {
      u_18 = t;
      if(((t_18 != NULL) && (t_18 != u_18)))
        _fail(u_18);
      else
        t_18 = u_18;
    }
  }
  t = o_10;
  {
    ATerm w_18 = NULL;
    t = l_85(t);
    {
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(v_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_19 = NULL;
  ATerm p_10;
  p_10 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          ATerm d_19 = NULL,e_19 = NULL;
          d_19 = t;
          a_19 :
          if(match_cons(d_19, sym_Input_1))
            {
              e_19 = ATgetArgument(d_19, 0);
              if(((c_19 != NULL) && (c_19 != e_19)))
                _fail(e_19);
              else
                c_19 = e_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, z_0);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm f_19 = NULL;
          t = term_v_10;
          {
            f_19 = t;
            if(((c_19 != NULL) && (c_19 != f_19)))
              _fail(f_19);
            else
              c_19 = f_19;
          }
        }
      }
  }
  t = p_10;
  {
    ATerm a_1 (ATerm t)
    {
      t = not_null(c_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm j_19 = NULL;
    j_19 = t;
    i_19 :
    if(!(match_string(j_19, "-v")))
      {
        if(!(match_string(j_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_b_11;
    t = set_config_0(t);
    t = term_c_11;
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_d_11;
    return(t);
  }
  t = Option_3(t, b_1, c_1, d_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm m_19 = NULL;
    m_19 = t;
    k_19 :
    if(!(match_string(m_19, "-k")))
      {
        if(!(match_string(m_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm n_19 = NULL;
      ATerm o_19 = NULL;
      t = string_to_int_0(t);
      {
        o_19 = t;
        if(((n_19 != NULL) && (n_19 != o_19)))
          _fail(o_19);
        else
          n_19 = o_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(n_19));
        t = set_config_0(t);
      }
    }
    t = g_11;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  t = ArgOption_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_string_to_int(not_null(r_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm z_19 = NULL;
        z_19 = t;
        u_19 :
        if(!(match_string(z_19, "-S")))
          {
            if(!(match_string(z_19, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_s_11;
        t = set_config_0(t);
        t = term_u_11;
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = Option_3(t, i_1, j_1, k_1);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              ATerm a_20 = NULL;
              a_20 = t;
              v_19 :
              if(!(match_string(a_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              ATerm d_20 = NULL;
              ATerm b_12;
              b_12 = t;
              {
                ATerm b_20 = NULL;
                ATerm c_20 = NULL;
                t = string_to_int_0(t);
                {
                  c_20 = t;
                  if(((b_20 != NULL) && (b_20 != c_20)))
                    _fail(c_20);
                  else
                    b_20 = c_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(b_20));
                  t = set_config_0(t);
                }
              }
              t = b_12;
              {
                ATerm e_20 = NULL;
                e_20 = t;
                if(((d_20 != NULL) && (d_20 != e_20)))
                  _fail(e_20);
                else
                  d_20 = e_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_20));
              }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = ArgOption_3(t, l_1, m_1, n_1);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm o_1 (ATerm t)
              {
                ATerm f_20 = NULL;
                f_20 = t;
                y_19 :
                if(!(match_string(f_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_1 (ATerm t)
              {
                t = term_e_12;
                t = set_config_0(t);
                t = term_f_12;
                return(t);
              }
              ATerm q_1 (ATerm t)
              {
                t = term_g_12;
                return(t);
              }
              t = Option_3(t, o_1, p_1, q_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = h_12;
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm l_20 = NULL;
    l_20 = t;
    i_20 :
    if(!(match_string(l_20, "-o")))
      {
        if(!(match_string(l_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    ATerm o_20 = NULL;
    ATerm s_12;
    s_12 = t;
    {
      ATerm m_20 = NULL;
      ATerm n_20 = NULL;
      n_20 = t;
      if(((m_20 != NULL) && (m_20 != n_20)))
        _fail(n_20);
      else
        m_20 = n_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_12, not_null(m_20));
        t = set_config_0(t);
      }
    }
    t = s_12;
    {
      ATerm p_20 = NULL;
      p_20 = t;
      if(((o_20 != NULL) && (o_20 != p_20)))
        _fail(p_20);
      else
        o_20 = p_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_20));
    }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_x_12;
    return(t);
  }
  t = ArgOption_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm t_20 = NULL;
          t_20 = t;
          s_20 :
          if(!(match_string(t_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_1 (ATerm t)
        {
          t = term_b_13;
          t = set_config_0(t);
          t = term_c_13;
          return(t);
        }
        ATerm w_1 (ATerm t)
        {
          t = term_h_13;
          return(t);
        }
        t = Option_3(t, u_1, v_1, w_1);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  z_20 = t;
  x_20 :
  if(match_string(z_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
        {
          a_21 = ATgetFirst((ATermList) z_20);
          b_21 = (ATerm) ATgetNext((ATermList) z_20);
          y_20 :
          if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
            {
              c_21 = ATgetFirst((ATermList) b_21);
              d_21 = (ATerm) ATgetNext((ATermList) b_21);
              {
                ATerm h_21 = NULL;
                ATerm i_13;
                i_13 = t;
                {
                  t = not_null(a_21);
                  t = j_0(t);
                }
                t = i_13;
                {
                  ATerm i_21 = NULL;
                  t = not_null(c_21);
                  {
                    t = k_0(t);
                    {
                      i_21 = t;
                      if(((h_21 != NULL) && (h_21 != i_21)))
                        _fail(i_21);
                      else
                        h_21 = i_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_21)), not_null(h_21));
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
  ATerm x_1 (ATerm t)
  {
    ATerm p_21 = NULL;
    p_21 = t;
    m_21 :
    if(!(match_string(p_21, "-i")))
      {
        if(!(match_string(p_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm s_21 = NULL;
    ATerm n_13;
    n_13 = t;
    {
      ATerm q_21 = NULL;
      ATerm r_21 = NULL;
      r_21 = t;
      if(((q_21 != NULL) && (q_21 != r_21)))
        _fail(r_21);
      else
        q_21 = r_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(q_21));
        t = set_config_0(t);
      }
    }
    t = n_13;
    {
      ATerm t_21 = NULL;
      t_21 = t;
      if(((s_21 != NULL) && (s_21 != t_21)))
        _fail(t_21);
      else
        s_21 = t_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_21));
    }
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = term_p_13;
    return(t);
  }
  t = ArgOption_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm q_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = q_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_z_13));
  {
    t = printnl_0(t);
    {
      t = term_v_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  t = SSL_TicksToSeconds(not_null(x_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_22), not_null(e_22));
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = SSL_addr(not_null(d_22), not_null(e_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_83(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
        l_22 = t;
        k_22 :
        if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
          {
            m_22 = ATgetFirst((ATermList) l_22);
            n_22 = (ATerm) ATgetNext((ATermList) l_22);
            {
              ATerm q_22 = NULL;
              ATerm r_22 = NULL;
              t = not_null(n_22);
              {
                t = foldr_2(t, v_83, w_83);
                {
                  r_22 = t;
                  if(((q_22 != NULL) && (q_22 != r_22)))
                    _fail(r_22);
                  else
                    q_22 = r_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(q_22));
                t = w_83(t);
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
ATerm crush_2 (ATerm t, ATerm t_82 (ATerm), ATerm u_82 (ATerm))
{
  ATerm y_22 = NULL;
  ATerm a_23 = NULL;
  y_22 = t;
  {
    ATerm b_23 = NULL;
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
    t = not_null(y_22);
    {
      b_23 = t;
      {
        t = SSL_explode_term(not_null(b_23));
        {
          d_23 = t;
          x_22 :
          if(match_cons(d_23, sym__2))
            {
              e_23 = ATgetArgument(d_23, 0);
              f_23 = ATgetArgument(d_23, 1);
              if(((a_23 != NULL) && (a_23 != f_23)))
                _fail(f_23);
              else
                a_23 = f_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_23);
      t = foldr_2(t, t_82, u_82);
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
    ATerm a_2 (ATerm t)
    {
      t = term_r_11;
      return(t);
    }
    t = crush_2(t, a_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm e_14;
        e_14 = t;
        {
          ATerm f_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_23), not_null(n_23));
              LocalPopChoice(j_14);
            }
          else
            {
              t = f_14;
              t = SSL_gtr(not_null(m_23), not_null(n_23));
            }
        }
        t = e_14;
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
  ATerm t_23 = NULL;
  ATerm m_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
      u_23 = t;
      s_23 :
      if(match_cons(u_23, sym__2))
        {
          v_23 = ATgetArgument(u_23, 0);
          w_23 = ATgetArgument(u_23, 1);
          {
            if(((t_23 != NULL) && (t_23 != v_23)))
              _fail(v_23);
            else
              t_23 = v_23;
            if(((t_23 != NULL) && (t_23 != w_23)))
              _fail(w_23);
            else
              t_23 = w_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_14);
    }
  else
    {
      t = m_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14;
      u_14 = t;
      {
        ATerm z_23 = NULL;
        ATerm a_24 = NULL;
        t = term_n_9;
        {
          t = get_config_0(t);
          {
            a_24 = t;
            if(((z_23 != NULL) && (z_23 != a_24)))
              _fail(a_24);
            else
              z_23 = a_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), term_v_7);
          t = geq_0(t);
        }
      }
      t = u_14;
      t = b_91(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm e_24 = NULL,g_24 = NULL;
    ATerm z_14;
    z_14 = t;
    {
      ATerm f_24 = NULL;
      t = run_time_0(t);
      {
        f_24 = t;
        if(((e_24 != NULL) && (e_24 != f_24)))
          _fail(f_24);
        else
          e_24 = f_24;
      }
    }
    t = z_14;
    {
      ATerm h_24 = NULL;
      t = term_a_15;
      {
        t = get_config_0(t);
        {
          h_24 = t;
          if(((g_24 != NULL) && (g_24 != h_24)))
            _fail(h_24);
          else
            g_24 = h_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), not_null(e_24)), term_b_15), not_null(g_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_2);
  {
    t = term_r_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym_Version_0))
    {
      ATerm q_24 = NULL,s_24 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm r_24 = NULL;
        t = SSLgetAnnotations(not_null(o_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
      }
      t = e_15;
      {
        ATerm t_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_24));
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
        t = not_null(s_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, c_2);
  t = h_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = SSL_table_create(not_null(y_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm k_15;
    k_15 = t;
    {
      t = term_l_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_15, term_m_15, not_null(c_25));
          t = table_put_0(t);
        }
      }
    }
    t = k_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  t = SSL_table_destroy(not_null(u_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  t = SSL_exit(not_null(y_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  b_26 :
  if(((ATgetType(c_26) == AT_LIST) && ATisEmpty(c_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
        {
          d_26 = ATgetFirst((ATermList) c_26);
          e_26 = (ATerm) ATgetNext((ATermList) c_26);
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
  ATerm n_15;
  n_15 = t;
  {
    ATerm h_26 = NULL;
    ATerm k_26 = NULL;
    ATerm o_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = o_15;
        {
          ATerm i_26 = NULL;
          ATerm j_26 = NULL;
          j_26 = t;
          if(((i_26 != NULL) && (i_26 != j_26)))
            _fail(j_26);
          else
            i_26 = j_26;
          t = (ATerm) ATinsert(ATempty, not_null(i_26));
        }
      }
    {
      k_26 = t;
      if(((h_26 != NULL) && (h_26 != k_26)))
        _fail(k_26);
      else
        h_26 = k_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(h_26));
      t = printnl_0(t);
    }
  }
  t = n_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm n_26 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = Cons_2(t, h_77, n_26);
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  w_26 = t;
  t_26 :
  if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
    {
      u_26 = ATgetFirst((ATermList) w_26);
      v_26 = (ATerm) ATgetNext((ATermList) w_26);
      {
        ATerm z_26 = NULL;
        t = not_null(v_26);
        {
          ATerm w_15;
          w_15 = t;
          {
            ATerm a_27 = NULL,h_27 = NULL,j_27 = NULL;
            ATerm b_16;
            b_16 = t;
            {
              ATerm g_27 = NULL;
              t = i_0(t);
              {
                g_27 = t;
                if(((a_27 != NULL) && (a_27 != g_27)))
                  _fail(g_27);
                else
                  a_27 = g_27;
              }
            }
            t = b_16;
            {
              ATerm i_27 = NULL;
              t = not_null(u_26);
              {
                t = h_0(t);
                {
                  i_27 = t;
                  if(((h_27 != NULL) && (h_27 != i_27)))
                    _fail(i_27);
                  else
                    h_27 = i_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_27)), not_null(h_27));
                {
                  j_27 = t;
                  if(((z_26 != NULL) && (z_26 != j_27)))
                    _fail(j_27);
                  else
                    z_26 = j_27;
                }
              }
            }
          }
          t = w_15;
          {
            ATerm d_2 (ATerm t)
            {
              t = not_null(z_26);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_26) == AT_LIST) && ATisEmpty(w_26)))
        {
          {
            t = term_x_10;
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
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  t_27 :
  if(match_cons(x_27, sym_Program_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(x_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(y_27);
          {
            ATerm f_28 = NULL;
            t = q_62(t);
            {
              d_28 = t;
              {
                ATerm g_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_28)), not_null(b_28));
                {
                  g_28 = t;
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                }
                t = not_null(f_28);
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
  ATerm o_28 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL;
      t = term_a_15;
      {
        t = get_config_0(t);
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            ATerm q_28 = NULL;
            q_28 = t;
            if(((o_28 != NULL) && (o_28 != q_28)))
              _fail(q_28);
            else
              o_28 = q_28;
            return(t);
          }
          t = Program_1(t, g_2);
          return(t);
        }
        t = fetch_1(t, f_2);
      }
    }
  {
    t = term_e_16;
    {
      t = echo_0(t);
      {
        t = term_h_16;
        {
          t = table_get_0(t);
          {
            ATerm h_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_2);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm r_28 = NULL;
                ATerm s_28 = NULL;
                s_28 = t;
                if(((r_28 != NULL) && (r_28 != s_28)))
                  _fail(s_28);
                else
                  r_28 = s_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_28)), term_j_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_2);
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
  ATerm m_16;
  m_16 = t;
  {
    ATerm x_28 = NULL;
    ATerm y_28 = NULL;
    y_28 = t;
    if(((x_28 != NULL) && (x_28 != y_28)))
      _fail(y_28);
    else
      x_28 = y_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(x_28)));
      t = printnl_0(t);
    }
  }
  t = m_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm n_16;
  n_16 = t;
  {
    t = g_88(t);
    t = debug_0(t);
  }
  t = n_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_Undefined_1))
    {
      g_29 = ATgetArgument(f_29, 0);
      {
        ATerm j_29 = NULL,l_29 = NULL;
        ATerm k_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm n_29 = NULL;
            t = r_62(t);
            {
              l_29 = t;
              {
                ATerm o_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_29)), not_null(j_29));
                {
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                }
                t = not_null(n_29);
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
ATerm fetch_1 (ATerm t, ATerm q_77 (ATerm))
{
  ATerm t_29 (ATerm t)
  {
    ATerm o_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_77, _id);
        LocalPopChoice(r_16);
      }
    else
      {
        t = o_16;
        t = Cons_2(t, _id, t_29);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_92 (ATerm))
{
  t = fetch_1(t, e_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_Help_0))
    {
      ATerm a_30 = NULL,c_30 = NULL;
      ATerm s_16;
      s_16 = t;
      {
        ATerm b_30 = NULL;
        t = SSLgetAnnotations(not_null(y_29));
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      t = s_16;
      {
        ATerm d_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_30));
        {
          d_30 = t;
          if(((c_30 != NULL) && (c_30 != d_30)))
            _fail(d_30);
          else
            c_30 = d_30;
        }
        t = not_null(c_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_69(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      t = SSL_table_get(not_null(k_30), not_null(l_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__3))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      {
        ATerm z_16;
        z_16 = t;
        {
          ATerm z_30 = NULL;
          ATerm a_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(u_30));
          {
            ATerm a_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_17);
              }
            else
              {
                t = a_17;
                t = (ATerm) ATempty;
              }
            {
              a_31 = t;
              if(((z_30 != NULL) && (z_30 != a_31)))
                _fail(a_31);
              else
                z_30 = a_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_30), not_null(u_30), (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(v_30)));
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
ATerm register_usage_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm e_31 = NULL;
  ATerm f_31 = NULL;
  t = term_x_10;
  {
    t = j_93(t);
    {
      f_31 = t;
      if(((e_31 != NULL) && (e_31 != f_31)))
        _fail(f_31);
      else
        e_31 = f_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_g_16, not_null(e_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_string(l_31, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
        {
          m_31 = ATgetFirst((ATermList) l_31);
          n_31 = (ATerm) ATgetNext((ATermList) l_31);
          {
            ATerm q_31 = NULL;
            ATerm g_17;
            g_17 = t;
            {
              t = not_null(m_31);
              t = a_0(t);
            }
            t = g_17;
            {
              ATerm r_31 = NULL;
              t = term_x_10;
              {
                t = d_0(t);
                {
                  r_31 = t;
                  if(((q_31 != NULL) && (q_31 != r_31)))
                    _fail(r_31);
                  else
                    q_31 = r_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_31)), not_null(q_31));
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
  ATerm j_2 (ATerm t)
  {
    ATerm w_31 = NULL;
    w_31 = t;
    v_31 :
    if(!(match_string(w_31, "--help")))
      {
        if(!(match_string(w_31, "-h")))
          {
            if(!(match_string(w_31, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_i_17;
    {
      t = set_config_0(t);
      t = term_k_17;
    }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = Option_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  y_31 :
  if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
    {
      a_32 = ATgetFirst((ATermList) z_31);
      b_32 = (ATerm) ATgetNext((ATermList) z_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  l_32 :
  if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
    {
      n_32 = ATgetFirst((ATermList) m_32);
      o_32 = (ATerm) ATgetNext((ATermList) m_32);
      {
        ATerm s_32 = NULL,u_32 = NULL;
        ATerm t_32 = NULL;
        t = SSLgetAnnotations(not_null(m_32));
        {
          t_32 = t;
          if(((s_32 != NULL) && (s_32 != t_32)))
            _fail(t_32);
          else
            s_32 = t_32;
        }
        {
          t = not_null(n_32);
          {
            ATerm w_32 = NULL;
            t = z_56(t);
            {
              u_32 = t;
              {
                t = not_null(o_32);
                {
                  ATerm y_32 = NULL;
                  t = a_57(t);
                  {
                    w_32 = t;
                    {
                      ATerm z_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_32)), not_null(u_32)), not_null(s_32));
                      {
                        z_32 = t;
                        if(((y_32 != NULL) && (y_32 != z_32)))
                          _fail(z_32);
                        else
                          y_32 = z_32;
                      }
                      t = not_null(y_32);
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
  ATerm n_33 = NULL;
  n_33 = t;
  m_33 :
  if(((ATgetType(n_33) == AT_LIST) && ATisEmpty(n_33)))
    {
      {
        ATerm p_33 = NULL,r_33 = NULL;
        ATerm s_17;
        s_17 = t;
        {
          ATerm q_33 = NULL;
          t = SSLgetAnnotations(not_null(n_33));
          {
            q_33 = t;
            if(((p_33 != NULL) && (p_33 != q_33)))
              _fail(q_33);
            else
              p_33 = q_33;
          }
        }
        t = s_17;
        {
          ATerm s_33 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_33));
          {
            s_33 = t;
            if(((r_33 != NULL) && (r_33 != s_33)))
              _fail(s_33);
            else
              r_33 = s_33;
          }
          t = not_null(r_33);
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
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
  y_33 = t;
  x_33 :
  if(match_cons(y_33, sym__2))
    {
      z_33 = ATgetArgument(y_33, 0);
      a_34 = ATgetArgument(y_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_9, not_null(z_33), not_null(a_34));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm t_17;
  t_17 = t;
  {
    ATerm u_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_18;
        t = h_93(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = u_17;
        {
        }
      }
  }
  t = t_17;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm i_34 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm g_34 = NULL;
        ATerm h_34 = NULL;
        h_34 = t;
        if(((g_34 != NULL) && (g_34 != h_34)))
          _fail(h_34);
        else
          g_34 = h_34;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(g_34));
          t = set_config_0(t);
        }
      }
      t = d_18;
      {
        ATerm j_34 = NULL;
        j_34 = t;
        if(((i_34 != NULL) && (i_34 != j_34)))
          _fail(j_34);
        else
          i_34 = j_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_34));
      }
      return(t);
    }
    ATerm n_2 (ATerm t)
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_18);
            }
          else
            {
              t = g_18;
              {
                t = h_93(t);
                t = Cons_2(t, _id, n_2);
              }
            }
          LocalPopChoice(f_18);
        }
      else
        {
          t = e_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_2, n_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  ATerm m_18;
  m_18 = t;
  {
    ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,a_35 = NULL;
    s_34 = t;
    o_34 :
    if(match_cons(s_34, sym__3))
      {
        t_34 = ATgetArgument(s_34, 0);
        u_34 = ATgetArgument(s_34, 1);
        a_35 = ATgetArgument(s_34, 2);
        {
          if(((p_34 != NULL) && (p_34 != t_34)))
            _fail(t_34);
          else
            p_34 = t_34;
          {
            if(((q_34 != NULL) && (q_34 != u_34)))
              _fail(u_34);
            else
              q_34 = u_34;
            {
              if(((r_34 != NULL) && (r_34 != a_35)))
                _fail(a_35);
              else
                r_34 = a_35;
              t = SSL_table_put(not_null(p_34), not_null(q_34), not_null(r_34));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_93 (ATerm))
{
  ATerm d_35 = NULL;
  ATerm n_18;
  n_18 = t;
  {
    t = term_q_18;
    t = table_put_0(t);
  }
  t = n_18;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_93(t);
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_2);
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_18;
          z_18 = t;
          {
            ATerm b_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_h_17;
                t = get_config_0(t);
                LocalPopChoice(g_19);
              }
            else
              {
                t = b_19;
                t = fetch_1(t, Help_0);
              }
          }
          t = z_18;
          {
            t = system_usage_0(t);
            {
              t = term_r_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          {
            ATerm h_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm e_35 = NULL;
                    e_35 = t;
                    if(((d_35 != NULL) && (d_35 != e_35)))
                      _fail(e_35);
                    else
                      d_35 = e_35;
                    return(t);
                  }
                  t = Undefined_1(t, q_2);
                  return(t);
                }
                t = fetch_1(t, p_2);
                {
                  ATerm r_2 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_35)), term_p_19);
                    return(t);
                  }
                  t = say_1(t, r_2);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_v_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(l_19);
              }
            else
              {
                t = h_19;
                {
                }
              }
          }
        }
      {
        ATerm q_19;
        q_19 = t;
        {
          t = term_f_16;
          t = table_destroy_0(t);
        }
        t = q_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm))
{
  t = parse_options_1(t, n_89);
  {
    t = store_options_0(t);
    {
      t = p_89(t);
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_89);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_89(t);
                  t = report_success_0(t);
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_90(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_90);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_2, g_90, h_90, x_2);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm a_90 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm j_20;
      j_20 = t;
      {
        ATerm h_35 = NULL;
        ATerm i_35 = NULL;
        t = term_a_15;
        {
          t = get_config_0(t);
          {
            i_35 = t;
            if(((h_35 != NULL) && (h_35 != i_35)))
              _fail(i_35);
            else
              h_35 = i_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(h_35)));
          t = printnl_0(t);
        }
      }
      t = j_20;
      return(t);
    }
    t = if_verbose2_1(t, c_3);
    return(t);
  }
  t = iowrap_4(t, y_89, z_89, a_90, y_2);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_89 (ATerm), ATerm x_89 (ATerm))
{
  t = iowrap_3(t, w_89, x_89, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_89 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    t = _2(t, _id, t_89);
    return(t);
  }
  t = iowrap_2(t, d_3, _fail);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, MetaExplode_0);
  return(t);
}
