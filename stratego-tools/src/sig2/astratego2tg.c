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
Symbol sym_Infinite_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  init_constant_terms();
}
ATerm term_z_21;
ATerm term_g_21;
ATerm term_u_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_y_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_b_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_p_8;
ATerm term_h_7;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_t_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_m_5);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_p_8);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_m_5);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_m_5);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_i_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_i_20, term_m_5);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__3, term_e_19, term_i_19, (ATerm) ATempty);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm h_81 (ATerm));
ATerm build_group_by_pairs_4 (ATerm, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm make_set_0 (ATerm);
ATerm group_by_3 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_99 (ATerm));
ATerm Param_0 (ATerm);
ATerm to_dec_prod_item_0 (ATerm);
ATerm to_build_in_prod_item_0 (ATerm);
ATerm to_prod_item_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_98 (ATerm));
ATerm add_param_rule_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm d_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_98 (ATerm));
ATerm scope_2 (ATerm, ATerm w_98 (ATerm), ATerm x_98 (ATerm));
ATerm to_prod_items_0 (ATerm);
ATerm length_0 (ATerm);
ATerm get_nt_params_0 (ATerm);
ATerm get_nt_name_0 (ATerm);
ATerm get_nt_0 (ATerm);
ATerm to_NonTermDec_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm));
ATerm union_1 (ATerm, ATerm e_97 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm));
ATerm crush_3 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm));
ATerm collect_om_1 (ATerm, ATerm u_95 (ATerm));
ATerm collect_1 (ATerm, ATerm w_95 (ATerm));
ATerm stratego_ast_to_tg_0 (ATerm);
ATerm _2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_93 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_71 (ATerm));
ATerm debug_1 (ATerm, ATerm v_72 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_83 (ATerm), ATerm x_83 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm crush_2 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_93 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_86 (ATerm));
ATerm map_1 (ATerm, ATerm i_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_86 (ATerm));
ATerm Program_1 (ATerm, ATerm u_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_71 (ATerm));
ATerm io_astratego2tg_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      {
        ATerm k_5 = t;
        int l_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = filter_1(t, h_81);
              return(t);
            }
            t = Cons_2(t, h_81, b_0);
            LocalPopChoice(l_5);
          }
        else
          {
            t = k_5;
            {
              ATerm s_0 = NULL,g_1 = NULL,i_1 = NULL;
              s_0 = t;
              r_0 :
              if(((ATgetType(s_0) == AT_LIST) && !(ATisEmpty(s_0))))
                {
                  g_1 = ATgetFirst((ATermList) s_0);
                  i_1 = (ATerm) ATgetNext((ATermList) s_0);
                  {
                    t = not_null(i_1);
                    t = filter_1(t, h_81);
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
  return(t);
}
ATerm build_group_by_pairs_4 (ATerm t, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm d_2 = NULL;
  ATerm f_2 = NULL;
  d_2 = t;
  {
    ATerm i_2 = NULL;
    t = term_m_5;
    {
      t = k_71(t);
      {
        ATerm e_0 (ATerm t)
        {
          ATerm s_5;
          s_5 = t;
          {
            ATerm g_2 = NULL;
            t = h_71(t);
            {
              g_2 = t;
              if(((d_2 != NULL) && (d_2 != g_2)))
                _fail(g_2);
              else
                d_2 = g_2;
            }
          }
          t = s_5;
          return(t);
        }
        t = filter_1(t, e_0);
        {
          t = map_1(t, i_71);
          {
            i_2 = t;
            if(((f_2 != NULL) && (f_2 != i_2)))
              _fail(i_2);
            else
              f_2 = i_2;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_2), not_null(f_2));
      t = j_71(t);
    }
  }
  return(t);
}
ATerm make_set_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm h_0 (ATerm t)
  {
    t = union_1(t, eq_0);
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm n_2 = NULL;
    ATerm o_2 = NULL;
    o_2 = t;
    if(((n_2 != NULL) && (n_2 != o_2)))
      _fail(o_2);
    else
      n_2 = o_2;
    t = (ATerm) ATinsert(ATempty, not_null(n_2));
    return(t);
  }
  t = foldr_3(t, f_0, h_0, n_0);
  return(t);
}
ATerm group_by_3 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  ATerm r_2 = NULL;
  r_2 = t;
  {
    t = map_1(t, e_71);
    {
      t = make_set_0(t);
      {
        ATerm o_0 (ATerm t)
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(r_2);
            return(t);
          }
          t = build_group_by_pairs_4(t, e_71, f_71, g_71, p_0);
          return(t);
        }
        t = map_1(t, o_0);
      }
    }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  v_2 :
  if(((ATgetType(w_2) == AT_LIST) && !(ATisEmpty(w_2))))
    {
      x_2 = ATgetFirst((ATermList) w_2);
      y_2 = (ATerm) ATgetNext((ATermList) w_2);
      t = not_null(x_2);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_cons(d_3, sym__2))
    {
      e_3 = ATgetArgument(d_3, 0);
      f_3 = ATgetArgument(d_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(f_3));
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
ATerm rewrite_1 (ATerm t, ATerm a_99 (ATerm))
{
  ATerm l_3 = NULL;
  ATerm n_3 = NULL;
  l_3 = t;
  {
    ATerm o_3 = NULL;
    t = term_m_5;
    {
      t = a_99(t);
      {
        o_3 = t;
        if(((n_3 != NULL) && (n_3 != o_3)))
          _fail(o_3);
        else
          n_3 = o_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(l_3));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Param_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym_Var_1))
    {
      x_3 = ATgetArgument(w_3, 0);
      {
        ATerm a_4 = NULL;
        ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL;
        t = not_null(w_3);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_t_5;
            return(t);
          }
          t = rewrite_1(t, q_0);
          {
            b_4 = t;
            t_3 :
            if(match_cons(b_4, sym_Defined_2))
              {
                c_4 = ATgetArgument(b_4, 0);
                d_4 = ATgetArgument(b_4, 1);
                u_3 :
                if(match_string(c_4, "c_0"))
                  {
                    if(((a_4 != NULL) && (a_4 != d_4)))
                      _fail(d_4);
                    else
                      a_4 = d_4;
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
        t = not_null(a_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm to_dec_prod_item_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  n_4 = t;
  l_4 :
  if(match_cons(n_4, sym_Op_2))
    {
      o_4 = ATgetArgument(n_4, 0);
      m_4 = ATgetArgument(n_4, 1);
      {
        ATerm r_4 = NULL;
        ATerm s_4 = NULL;
        t = not_null(m_4);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm b_6 = t;
            int c_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = to_build_in_prod_item_0(t);
                LocalPopChoice(c_6);
              }
            else
              {
                t = b_6;
                t = to_dec_prod_item_0(t);
              }
            return(t);
          }
          t = map_1(t, t_0);
          {
            s_4 = t;
            if(((r_4 != NULL) && (r_4 != s_4)))
              _fail(s_4);
            else
              r_4 = s_4;
          }
        }
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_4)), not_null(r_4));
      }
    }
  else
    {
      if(match_cons(n_4, sym_Var_1))
        {
          o_4 = ATgetArgument(n_4, 0);
          {
            ATerm d_6 = t;
            int e_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_4 = NULL;
                ATerm v_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_4));
                {
                  t = Param_0(t);
                  {
                    v_4 = t;
                    if(((u_4 != NULL) && (u_4 != v_4)))
                      _fail(v_4);
                    else
                      u_4 = v_4;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Param_1, not_null(u_4));
                LocalPopChoice(e_6);
              }
            else
              {
                t = d_6;
                {
                  ATerm l_6 = t;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_4));
                      t = Param_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_6;
                    }
                  t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_4)), (ATerm) ATempty);
                }
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
ATerm to_build_in_prod_item_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  g_5 = t;
  e_5 :
  if(match_cons(g_5, sym_Var_1))
    {
      h_5 = ATgetArgument(g_5, 0);
      f_5 :
      if(match_string(h_5, "String"))
        {
          t = term_m_6;
        }
      else
        {
          if(match_string(h_5, "Int"))
            {
              t = term_n_6;
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
ATerm to_prod_item_0 (ATerm t)
{
  ATerm o_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = to_build_in_prod_item_0(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = o_6;
      t = to_dec_prod_item_0(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
        ATerm s_6;
        s_6 = t;
        {
          ATerm x_5 = NULL;
          ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
          t = y_98(t);
          {
            x_5 = t;
            {
              if(((u_5 != NULL) && (u_5 != x_5)))
                _fail(x_5);
              else
                u_5 = x_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_5), not_null(q_5), not_null(r_5));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_5), term_v_6);
                        t = table_get_0(t);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_5 = t;
                      n_5 :
                      if(((ATgetType(y_5) == AT_LIST) && !(ATisEmpty(y_5))))
                        {
                          z_5 = ATgetFirst((ATermList) y_5);
                          a_6 = (ATerm) ATgetNext((ATermList) y_5);
                          {
                            if(((v_5 != NULL) && (v_5 != z_5)))
                              _fail(z_5);
                            else
                              v_5 = z_5;
                            {
                              if(((w_5 != NULL) && (w_5 != a_6)))
                                _fail(a_6);
                              else
                                w_5 = a_6;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_5), term_v_6, (ATerm) ATinsert(CheckATermList(not_null(w_5)), (ATerm) ATinsert(CheckATermList(not_null(v_5)), not_null(q_5))));
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
        t = s_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_param_rule_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  h_6 = t;
  f_6 :
  if(match_cons(h_6, sym__2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      g_6 :
      if(match_cons(j_6, sym_Var_1))
        {
          k_6 = ATgetArgument(j_6, 0);
          {
            ATerm w_6;
            w_6 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_6)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_6, not_null(i_6)));
              {
                ATerm u_0 (ATerm t)
                {
                  t = term_t_5;
                  return(t);
                }
                t = assert_1(t, u_0);
              }
            }
            t = w_6;
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
ATerm inc_0 (ATerm t)
{
  ATerm p_6 = NULL;
  ATerm q_6 = NULL;
  q_6 = t;
  if(((p_6 != NULL) && (p_6 != q_6)))
    _fail(q_6);
  else
    p_6 = q_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), term_h_7);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm a_7 = NULL;
  ATerm b_7 = NULL;
  b_7 = t;
  if(((a_7 != NULL) && (a_7 != b_7)))
    _fail(b_7);
  else
    a_7 = b_7;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(a_7));
    {
      ATerm r_7 (ATerm t)
      {
        ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
        c_7 = t;
        y_6 :
        if(match_cons(c_7, sym__2))
          {
            d_7 = ATgetArgument(c_7, 0);
            e_7 = ATgetArgument(c_7, 1);
            z_6 :
            if(((ATgetType(e_7) == AT_LIST) && ATisEmpty(e_7)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
                  {
                    f_7 = ATgetFirst((ATermList) e_7);
                    g_7 = (ATerm) ATgetNext((ATermList) e_7);
                    {
                      ATerm k_7 = NULL,m_7 = NULL;
                      ATerm i_7;
                      i_7 = t;
                      {
                        ATerm l_7 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(f_7));
                        {
                          t = d_79(t);
                          {
                            l_7 = t;
                            if(((k_7 != NULL) && (k_7 != l_7)))
                              _fail(l_7);
                            else
                              k_7 = l_7;
                          }
                        }
                      }
                      t = i_7;
                      {
                        ATerm n_7 = NULL,p_7 = NULL;
                        ATerm o_7 = NULL;
                        t = not_null(d_7);
                        {
                          t = inc_0(t);
                          {
                            o_7 = t;
                            if(((n_7 != NULL) && (n_7 != o_7)))
                              _fail(o_7);
                            else
                              n_7 = o_7;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), not_null(g_7));
                          {
                            t = r_7(t);
                            {
                              p_7 = t;
                              if(((m_7 != NULL) && (m_7 != p_7)))
                                _fail(p_7);
                              else
                                m_7 = p_7;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(m_7)), not_null(k_7));
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
      t = r_7(t);
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
    {
      a_8 = ATgetFirst((ATermList) z_7);
      b_8 = (ATerm) ATgetNext((ATermList) z_7);
      t = not_null(b_8);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        ATerm j_7;
        j_7 = t;
        {
          ATerm m_8 = NULL;
          ATerm n_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(j_8));
          {
            ATerm q_7 = t;
            int s_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(s_7);
              }
            else
              {
                t = q_7;
                t = (ATerm) ATempty;
              }
            {
              n_8 = t;
              if(((m_8 != NULL) && (m_8 != n_8)))
                _fail(n_8);
              else
                m_8 = n_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_8), not_null(j_8), not_null(m_8));
            t = table_put_0(t);
          }
        }
        t = j_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_98 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  ATerm t_7;
  t_7 = t;
  {
    ATerm x_8 = NULL;
    ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
    t = v_98(t);
    {
      x_8 = t;
      {
        if(((w_8 != NULL) && (w_8 != x_8)))
          _fail(x_8);
        else
          w_8 = x_8;
        {
          ATerm u_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), term_v_6);
              t = table_get_0(t);
              LocalPopChoice(v_7);
            }
          else
            {
              t = u_7;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            y_8 = t;
            t_8 :
            if(((ATgetType(y_8) == AT_LIST) && !(ATisEmpty(y_8))))
              {
                z_8 = ATgetFirst((ATermList) y_8);
                a_9 = (ATerm) ATgetNext((ATermList) y_8);
                {
                  if(((v_8 != NULL) && (v_8 != z_8)))
                    _fail(z_8);
                  else
                    v_8 = z_8;
                  {
                    if(((u_8 != NULL) && (u_8 != a_9)))
                      _fail(a_9);
                    else
                      u_8 = a_9;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_8), term_v_6, not_null(u_8));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(v_8);
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm b_9 = NULL;
                              b_9 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), not_null(b_9));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_0);
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
    }
  }
  t = t_7;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_76(t);
      t = a_77(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        t = a_77(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm i_9 = NULL;
  ATerm c_8;
  c_8 = t;
  {
    ATerm j_9 = NULL;
    ATerm k_9 = NULL;
    t = u_98(t);
    {
      j_9 = t;
      {
        if(((i_9 != NULL) && (i_9 != j_9)))
          _fail(j_9);
        else
          i_9 = j_9;
        {
          ATerm l_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_v_6);
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
                t = (ATerm) ATempty;
              }
            {
              l_9 = t;
              if(((k_9 != NULL) && (k_9 != l_9)))
                _fail(l_9);
              else
                k_9 = l_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_9), term_v_6, (ATerm) ATinsert(CheckATermList(not_null(k_9)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_8;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  t = begin_scope_1(t, w_98);
  {
    ATerm w_0 (ATerm t)
    {
      t = end_scope_1(t, w_98);
      return(t);
    }
    t = restore_always_2(t, x_98, w_0);
  }
  return(t);
}
ATerm to_prod_items_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  x_9 :
  if(match_cons(b_10, sym_FunType_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      z_9 = ATgetArgument(b_10, 1);
      {
        ATerm g_10 = NULL;
        ATerm x_0 (ATerm t)
        {
          t = term_t_5;
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          ATerm p_10 = NULL;
          t = not_null(z_9);
          {
            ATerm f_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
                h_10 = t;
                s_9 :
                if(match_cons(h_10, sym_ConstType_1))
                  {
                    i_10 = ATgetArgument(h_10, 0);
                    t_9 :
                    if(match_cons(i_10, sym_Op_2))
                      {
                        j_10 = ATgetArgument(i_10, 0);
                        k_10 = ATgetArgument(i_10, 1);
                        t = not_null(k_10);
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
                LocalPopChoice(k_8);
                t = map_with_index_1(t, add_param_rule_0);
              }
            else
              {
                t = f_8;
                {
                }
              }
            {
              t = not_null(c_10);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm m_10 = NULL,n_10 = NULL;
                  m_10 = t;
                  v_9 :
                  if(match_cons(m_10, sym_ConstType_1))
                    {
                      n_10 = ATgetArgument(m_10, 0);
                      {
                        t = not_null(n_10);
                        {
                          ATerm l_8 = t;
                          int o_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = to_build_in_prod_item_0(t);
                              LocalPopChoice(o_8);
                            }
                          else
                            {
                              t = l_8;
                              t = to_dec_prod_item_0(t);
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
                t = map_1(t, z_0);
                {
                  p_10 = t;
                  if(((g_10 != NULL) && (g_10 != p_10)))
                    _fail(p_10);
                  else
                    g_10 = p_10;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, x_0, y_0);
        t = not_null(g_10);
      }
    }
  else
    {
      if(match_cons(b_10, sym_ConstType_1))
        {
          c_10 = ATgetArgument(b_10, 0);
          y_9 :
          if(match_cons(c_10, sym_Op_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              a_10 = ATgetArgument(c_10, 1);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(c_10, sym_Var_1))
                {
                  d_10 = ATgetArgument(c_10, 0);
                  t = (ATerm) ATempty;
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
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_p_8;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    t = term_h_7;
    return(t);
  }
  t = foldr_3(t, a_1, add_0, b_1);
  return(t);
}
ATerm get_nt_params_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  a_11 = t;
  y_10 :
  if(match_cons(a_11, sym_Op_2))
    {
      b_11 = ATgetArgument(a_11, 0);
      z_10 = ATgetArgument(a_11, 1);
      {
        t = not_null(z_10);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(a_11, sym_Var_1))
        {
          b_11 = ATgetArgument(a_11, 0);
          t = term_p_8;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm get_nt_name_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  k_11 = t;
  i_11 :
  if(match_cons(k_11, sym_Op_2))
    {
      l_11 = ATgetArgument(k_11, 0);
      j_11 = ATgetArgument(k_11, 1);
      t = not_null(l_11);
    }
  else
    {
      if(match_cons(k_11, sym_Var_1))
        {
          l_11 = ATgetArgument(k_11, 0);
          t = not_null(l_11);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm get_nt_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  u_11 = t;
  s_11 :
  if(match_cons(u_11, sym_ConstType_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      t = not_null(v_11);
    }
  else
    {
      if(match_cons(u_11, sym_FunType_2))
        {
          v_11 = ATgetArgument(u_11, 0);
          w_11 = ATgetArgument(u_11, 1);
          t_11 :
          if(match_cons(w_11, sym_ConstType_1))
            {
              x_11 = ATgetArgument(w_11, 0);
              t = not_null(x_11);
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
ATerm to_NonTermDec_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_OpDecl_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      {
        ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
        ATerm s_12 = NULL;
        t = not_null(l_12);
        {
          ATerm t_12 = NULL;
          t = get_nt_0(t);
          {
            s_12 = t;
            {
              if(((p_12 != NULL) && (p_12 != s_12)))
                _fail(s_12);
              else
                p_12 = s_12;
              {
                t = not_null(p_12);
                {
                  ATerm u_12 = NULL;
                  t = get_nt_name_0(t);
                  {
                    t_12 = t;
                    {
                      if(((o_12 != NULL) && (o_12 != t_12)))
                        _fail(t_12);
                      else
                        o_12 = t_12;
                      {
                        t = not_null(p_12);
                        {
                          ATerm v_12 = NULL;
                          t = get_nt_params_0(t);
                          {
                            u_12 = t;
                            {
                              if(((q_12 != NULL) && (q_12 != u_12)))
                                _fail(u_12);
                              else
                                q_12 = u_12;
                              {
                                t = not_null(l_12);
                                {
                                  t = to_prod_items_0(t);
                                  {
                                    v_12 = t;
                                    if(((r_12 != NULL) && (r_12 != v_12)))
                                      _fail(v_12);
                                    else
                                      r_12 = v_12;
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
        t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(o_12)), not_null(q_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_12)), not_null(r_12))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym__2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      if(((e_13 != NULL) && (e_13 != f_13)))
        _fail(f_13);
      else
        e_13 = f_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
    {
      m_13 = ATgetFirst((ATermList) l_13);
      n_13 = (ATerm) ATgetNext((ATermList) l_13);
      {
        t = j_97(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm q_13 = NULL;
            q_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), not_null(q_13));
              t = i_97(t);
            }
            return(t);
          }
          t = fetch_1(t, c_1);
        }
        t = not_null(n_13);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm e_97 (ATerm))
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  v_13 :
  if(match_cons(w_13, sym__2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      {
        t = not_null(x_13);
        {
          ATerm c_14 (ATerm t)
          {
            ATerm q_8 = t;
            int r_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_13);
                LocalPopChoice(r_8);
              }
            else
              {
                t = q_8;
                {
                  ATerm s_8 = t;
                  int c_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(y_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_97, d_1);
                      t = c_14(t);
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = s_8;
                      t = Cons_2(t, _id, c_14);
                    }
                }
              }
            return(t);
          }
          t = c_14(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm))
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_97(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
        h_14 = t;
        g_14 :
        if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
          {
            i_14 = ATgetFirst((ATermList) h_14);
            j_14 = (ATerm) ATgetNext((ATermList) h_14);
            {
              ATerm m_14 = NULL,o_14 = NULL;
              ATerm f_9;
              f_9 = t;
              {
                ATerm n_14 = NULL;
                t = not_null(i_14);
                {
                  t = t_97(t);
                  {
                    n_14 = t;
                    if(((m_14 != NULL) && (m_14 != n_14)))
                      _fail(n_14);
                    else
                      m_14 = n_14;
                  }
                }
              }
              t = f_9;
              {
                ATerm p_14 = NULL;
                t = not_null(j_14);
                {
                  t = foldr_3(t, r_97, s_97, t_97);
                  {
                    p_14 = t;
                    if(((o_14 != NULL) && (o_14 != p_14)))
                      _fail(p_14);
                    else
                      o_14 = p_14;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(o_14));
                  t = s_97(t);
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
ATerm crush_3 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm))
{
  ATerm x_14 = NULL;
  ATerm z_14 = NULL;
  x_14 = t;
  {
    ATerm a_15 = NULL;
    ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
    t = not_null(x_14);
    {
      a_15 = t;
      {
        t = SSL_explode_term(not_null(a_15));
        {
          c_15 = t;
          w_14 :
          if(match_cons(c_15, sym__2))
            {
              d_15 = ATgetArgument(c_15, 0);
              e_15 = ATgetArgument(c_15, 1);
              if(((z_14 != NULL) && (z_14 != e_15)))
                _fail(e_15);
              else
                z_14 = e_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_14);
      t = foldr_3(t, v_96, w_96, x_96);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm l_15 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL;
        ATerm k_15 = NULL;
        t = u_95(t);
        {
          k_15 = t;
          if(((j_15 != NULL) && (j_15 != k_15)))
            _fail(k_15);
          else
            j_15 = k_15;
        }
        t = (ATerm) ATinsert(ATempty, not_null(j_15));
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        {
          ATerm e_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, e_1, f_1, l_15);
        }
      }
    return(t);
  }
  t = l_15(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm w_95 (ATerm))
{
  t = collect_om_1(t, w_95);
  return(t);
}
ATerm stratego_ast_to_tg_0 (ATerm t)
{
  ATerm w_16 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
    y_15 = t;
    n_15 :
    if(match_cons(y_15, sym_OpDecl_2))
      {
        z_15 = ATgetArgument(y_15, 0);
        a_16 = ATgetArgument(y_15, 1);
        {
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_om_1(t, h_1);
  {
    t = map_1(t, to_NonTermDec_0);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
        b_16 = t;
        p_15 :
        if(match_cons(b_16, sym_NonTermDec_3))
          {
            c_16 = ATgetArgument(b_16, 0);
            d_16 = ATgetArgument(b_16, 1);
            e_16 = ATgetArgument(b_16, 2);
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(d_16));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
        h_16 = t;
        r_15 :
        if(match_cons(h_16, sym_NonTermDec_3))
          {
            i_16 = ATgetArgument(h_16, 0);
            j_16 = ATgetArgument(h_16, 1);
            k_16 = ATgetArgument(h_16, 2);
            s_15 :
            if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
              {
                l_16 = ATgetFirst((ATermList) k_16);
                m_16 = (ATerm) ATgetNext((ATermList) k_16);
                t_15 :
                if(((ATgetType(m_16) == AT_LIST) && ATisEmpty(m_16)))
                  {
                    t = not_null(l_16);
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
      ATerm l_1 (ATerm t)
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
        o_16 = t;
        v_15 :
        if(match_cons(o_16, sym__2))
          {
            p_16 = ATgetArgument(o_16, 0);
            s_16 = ATgetArgument(o_16, 1);
            w_15 :
            if(match_cons(p_16, sym__2))
              {
                q_16 = ATgetArgument(p_16, 0);
                r_16 = ATgetArgument(p_16, 1);
                t = (ATerm) ATmakeAppl(sym_NonTermDec_3, not_null(q_16), not_null(r_16), not_null(s_16));
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
      t = group_by_3(t, j_1, k_1, l_1);
      {
        ATerm x_16 = NULL;
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
        t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, not_null(w_16));
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        ATerm o_17 = NULL,q_17 = NULL;
        ATerm p_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
        }
        {
          t = not_null(j_17);
          {
            ATerm s_17 = NULL;
            t = z_56(t);
            {
              q_17 = t;
              {
                t = not_null(k_17);
                {
                  ATerm u_17 = NULL;
                  t = a_57(t);
                  {
                    s_17 = t;
                    {
                      ATerm v_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_17), not_null(s_17)), not_null(o_17));
                      {
                        v_17 = t;
                        if(((u_17 != NULL) && (u_17 != v_17)))
                          _fail(v_17);
                        else
                          u_17 = v_17;
                      }
                      t = not_null(u_17);
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
  ATerm d_18 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm e_18 = NULL,f_18 = NULL;
      e_18 = t;
      c_18 :
      if(match_cons(e_18, sym_Program_1))
        {
          f_18 = ATgetArgument(e_18, 0);
          if(((d_18 != NULL) && (d_18 != f_18)))
            _fail(f_18);
          else
            d_18 = f_18;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), not_null(d_18)), term_o_9));
      {
        t = printnl_0(t);
        {
          t = term_h_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm q_9;
        q_9 = t;
        t = SSL_printnl(not_null(k_18), not_null(l_18));
        t = q_9;
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
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_implode_string(not_null(q_18));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = r_9;
      {
        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
        v_18 = t;
        u_18 :
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            w_18 = ATgetFirst((ATermList) v_18);
            x_18 = (ATerm) ATgetNext((ATermList) v_18);
            {
              t = not_null(w_18);
              {
                ATerm n_1 (ATerm t)
                {
                  t = not_null(x_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_1);
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
  ATerm h_19 = NULL;
  ATerm j_19 = NULL;
  h_19 = t;
  {
    ATerm k_19 = NULL;
    ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
    t = not_null(h_19);
    {
      k_19 = t;
      {
        t = SSL_explode_term(not_null(k_19));
        {
          m_19 = t;
          f_19 :
          if(match_cons(m_19, sym__2))
            {
              n_19 = ATgetArgument(m_19, 0);
              o_19 = ATgetArgument(m_19, 1);
              g_19 :
              if(match_string(n_19, ""))
                {
                  if(((j_19 != NULL) && (j_19 != o_19)))
                    _fail(o_19);
                  else
                    j_19 = o_19;
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
      t = not_null(j_19);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm s_19 (ATerm t)
  {
    ATerm w_9 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_19);
        LocalPopChoice(e_10);
      }
    else
      {
        t = w_9;
        {
          t = Nil_0(t);
          t = x_77(t);
        }
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        t = not_null(w_19);
        {
          ATerm o_1 (ATerm t)
          {
            t = not_null(x_19);
            return(t);
          }
          t = at_end_1(t, o_1);
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
  ATerm f_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(l_10);
    }
  else
    {
      t = f_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_explode_string(not_null(c_20));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm o_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = o_10;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  t = SSL_is_string(not_null(g_20));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = v_10;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_1);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
              p_20 = t;
              o_20 :
              if(match_cons(p_20, sym_Path_1))
                {
                  q_20 = ATgetArgument(p_20, 0);
                  t = not_null(q_20);
                }
              else
                {
                  if(match_cons(p_20, sym_Var_1))
                    {
                      q_20 = ATgetArgument(p_20, 0);
                      {
                        t = not_null(q_20);
                        {
                          ATerm x_10 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = x_10;
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = term_d_11;
                                  return(t);
                                }
                                t = debug_1(t, q_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_20, sym_Prefix_2))
                        {
                          q_20 = ATgetArgument(p_20, 0);
                          r_20 = ATgetArgument(p_20, 1);
                          {
                            ATerm w_20 = NULL,y_20 = NULL;
                            ATerm e_11;
                            e_11 = t;
                            {
                              ATerm x_20 = NULL;
                              t = not_null(q_20);
                              {
                                t = eval_config_0(t);
                                {
                                  x_20 = t;
                                  if(((w_20 != NULL) && (w_20 != x_20)))
                                    _fail(x_20);
                                  else
                                    w_20 = x_20;
                                }
                              }
                            }
                            t = e_11;
                            {
                              ATerm z_20 = NULL;
                              t = not_null(r_20);
                              {
                                t = eval_config_0(t);
                                {
                                  z_20 = t;
                                  if(((y_20 != NULL) && (y_20 != z_20)))
                                    _fail(z_20);
                                  else
                                    y_20 = z_20;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), not_null(y_20));
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
  ATerm h_21 = NULL;
  h_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(h_21));
    {
      t = table_get_0(t);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_11;
              m_11 = t;
              {
                ATerm j_21 = NULL;
                ATerm k_21 = NULL;
                k_21 = t;
                if(((j_21 != NULL) && (j_21 != k_21)))
                  _fail(k_21);
                else
                  j_21 = k_21;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_f_11, not_null(h_21), not_null(j_21));
                  t = table_put_0(t);
                }
              }
              t = m_11;
            }
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11;
      p_11 = t;
      {
        ATerm o_21 = NULL;
        ATerm p_21 = NULL;
        t = term_q_11;
        {
          t = get_config_0(t);
          {
            p_21 = t;
            if(((o_21 != NULL) && (o_21 != p_21)))
              _fail(p_21);
            else
              o_21 = p_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), term_r_11);
          t = geq_0(t);
        }
      }
      t = p_11;
      t = z_93(t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      t = SSL_WriteToTextFile(not_null(u_21), not_null(v_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym__2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      t = SSL_WriteToBinaryFile(not_null(c_22), not_null(d_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_22 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm m_22 = NULL,n_22 = NULL;
            m_22 = t;
            i_22 :
            if(match_cons(m_22, sym_Output_1))
              {
                n_22 = ATgetArgument(m_22, 0);
                if(((l_22 != NULL) && (l_22 != n_22)))
                  _fail(n_22);
                else
                  l_22 = n_22;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, s_1);
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          {
            ATerm o_22 = NULL;
            t = term_b_12;
            {
              o_22 = t;
              if(((l_22 != NULL) && (l_22 != o_22)))
                _fail(o_22);
              else
                l_22 = o_22;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_1, _id);
  }
  t = y_11;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = not_null(l_22);
        return(t);
      }
      t = split_2(t, u_1, _id);
      return(t);
    }
    t = _2(t, _id, t_1);
    {
      ATerm c_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm p_22 = NULL;
              p_22 = t;
              k_22 :
              if(!(match_cons(p_22, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_1);
            return(t);
          }
          t = _2(t, v_1, WriteToBinaryFile_0);
          LocalPopChoice(d_12);
        }
      else
        {
          t = c_12;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm v_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  ATerm e_12;
  e_12 = t;
  t = dtime_0(t);
  t = e_12;
  {
    t = n_71(t);
    {
      ATerm f_12;
      f_12 = t;
      {
        ATerm w_22 = NULL;
        t = dtime_0(t);
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
      }
      t = f_12;
      {
        x_22 = t;
        u_22 :
        if(match_cons(x_22, sym__2))
          {
            y_22 = ATgetArgument(x_22, 0);
            z_22 = ATgetArgument(x_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_22)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_22))), not_null(z_22));
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
ATerm debug_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm g_12;
  g_12 = t;
  {
    ATerm g_23 = NULL,i_23 = NULL;
    ATerm h_12;
    h_12 = t;
    {
      ATerm h_23 = NULL;
      t = v_72(t);
      {
        h_23 = t;
        if(((g_23 != NULL) && (g_23 != h_23)))
          _fail(h_23);
        else
          g_23 = h_23;
      }
    }
    t = h_12;
    {
      ATerm j_23 = NULL;
      j_23 = t;
      if(((i_23 != NULL) && (i_23 != j_23)))
        _fail(j_23);
      else
        i_23 = j_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), not_null(g_23)));
        t = printnl_0(t);
      }
    }
  }
  t = g_12;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_23 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL;
      o_23 = t;
      {
        if(((n_23 != NULL) && (n_23 != o_23)))
          _fail(o_23);
        else
          n_23 = o_23;
        t = SSL_ReadFromFile(not_null(n_23));
      }
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_w_12;
          return(t);
        }
        t = debug_1(t, x_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_83 (ATerm), ATerm x_83 (ATerm))
{
  ATerm s_23 = NULL,u_23 = NULL;
  ATerm x_12;
  x_12 = t;
  {
    ATerm t_23 = NULL;
    t = w_83(t);
    {
      t_23 = t;
      if(((s_23 != NULL) && (s_23 != t_23)))
        _fail(t_23);
      else
        s_23 = t_23;
    }
  }
  t = x_12;
  {
    ATerm v_23 = NULL;
    t = x_83(t);
    {
      v_23 = t;
      if(((u_23 != NULL) && (u_23 != v_23)))
        _fail(v_23);
      else
        u_23 = v_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(u_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_24 = NULL;
  ATerm y_12;
  y_12 = t;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm c_24 = NULL,d_24 = NULL;
          c_24 = t;
          z_23 :
          if(match_cons(c_24, sym_Input_1))
            {
              d_24 = ATgetArgument(c_24, 0);
              if(((b_24 != NULL) && (b_24 != d_24)))
                _fail(d_24);
              else
                b_24 = d_24;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, y_1);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          ATerm e_24 = NULL;
          t = term_b_13;
          {
            e_24 = t;
            if(((b_24 != NULL) && (b_24 != e_24)))
              _fail(e_24);
            else
              b_24 = e_24;
          }
        }
      }
  }
  t = y_12;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(b_24);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm i_24 = NULL;
    i_24 = t;
    h_24 :
    if(!(match_string(i_24, "-v")))
      {
        if(!(match_string(i_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_h_13;
    t = set_config_0(t);
    t = term_i_13;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = Option_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm l_24 = NULL;
    l_24 = t;
    j_24 :
    if(!(match_string(l_24, "-k")))
      {
        if(!(match_string(l_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm o_13;
    o_13 = t;
    {
      ATerm m_24 = NULL;
      ATerm n_24 = NULL;
      t = string_to_int_0(t);
      {
        n_24 = t;
        if(((m_24 != NULL) && (m_24 != n_24)))
          _fail(n_24);
        else
          m_24 = n_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(m_24));
        t = set_config_0(t);
      }
    }
    t = o_13;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = ArgOption_3(t, e_2, h_2, j_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_string_to_int(not_null(q_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm y_24 = NULL;
        y_24 = t;
        t_24 :
        if(!(match_string(y_24, "-S")))
          {
            if(!(match_string(y_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_u_13;
        t = set_config_0(t);
        t = term_z_13;
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = Option_3(t, k_2, l_2, m_2);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm b_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              ATerm z_24 = NULL;
              z_24 = t;
              u_24 :
              if(!(match_string(z_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm c_25 = NULL;
              ATerm e_14;
              e_14 = t;
              {
                ATerm a_25 = NULL;
                ATerm b_25 = NULL;
                t = string_to_int_0(t);
                {
                  b_25 = t;
                  if(((a_25 != NULL) && (a_25 != b_25)))
                    _fail(b_25);
                  else
                    a_25 = b_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_11, not_null(a_25));
                  t = set_config_0(t);
                }
              }
              t = e_14;
              {
                ATerm d_25 = NULL;
                d_25 = t;
                if(((c_25 != NULL) && (c_25 != d_25)))
                  _fail(d_25);
                else
                  c_25 = d_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_25));
              }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_f_14;
              return(t);
            }
            t = ArgOption_3(t, p_2, q_2, s_2);
            LocalPopChoice(d_14);
          }
        else
          {
            t = b_14;
            {
              ATerm t_2 (ATerm t)
              {
                ATerm e_25 = NULL;
                e_25 = t;
                x_24 :
                if(!(match_string(e_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = term_l_14;
                t = set_config_0(t);
                t = term_q_14;
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_r_14;
                return(t);
              }
              t = Option_3(t, t_2, u_2, z_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    h_25 :
    if(!(match_string(k_25, "-o")))
      {
        if(!(match_string(k_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm n_25 = NULL;
    ATerm y_14;
    y_14 = t;
    {
      ATerm l_25 = NULL;
      ATerm m_25 = NULL;
      m_25 = t;
      if(((l_25 != NULL) && (l_25 != m_25)))
        _fail(m_25);
      else
        l_25 = m_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_15, not_null(l_25));
        t = set_config_0(t);
      }
    }
    t = y_14;
    {
      ATerm o_25 = NULL;
      o_25 = t;
      if(((n_25 != NULL) && (n_25 != o_25)))
        _fail(o_25);
      else
        n_25 = o_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_25));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_f_15;
    return(t);
  }
  t = ArgOption_3(t, a_3, b_3, g_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm s_25 = NULL;
          s_25 = t;
          r_25 :
          if(!(match_string(s_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_m_15;
          t = set_config_0(t);
          t = term_o_15;
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_q_15;
          return(t);
        }
        t = Option_3(t, h_3, i_3, j_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  o_27 = t;
  m_27 :
  if(match_string(o_27, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          p_27 = ATgetFirst((ATermList) o_27);
          q_27 = (ATerm) ATgetNext((ATermList) o_27);
          n_27 :
          if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
            {
              r_27 = ATgetFirst((ATermList) q_27);
              s_27 = (ATerm) ATgetNext((ATermList) q_27);
              {
                ATerm y_27 = NULL;
                ATerm u_15;
                u_15 = t;
                {
                  t = not_null(p_27);
                  t = k_0(t);
                }
                t = u_15;
                {
                  ATerm z_27 = NULL;
                  t = not_null(r_27);
                  {
                    t = l_0(t);
                    {
                      z_27 = t;
                      if(((y_27 != NULL) && (y_27 != z_27)))
                        _fail(z_27);
                      else
                        y_27 = z_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_27)), not_null(y_27));
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
  ATerm k_3 (ATerm t)
  {
    ATerm m_28 = NULL;
    m_28 = t;
    j_28 :
    if(!(match_string(m_28, "-i")))
      {
        if(!(match_string(m_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm p_28 = NULL;
    ATerm x_15;
    x_15 = t;
    {
      ATerm n_28 = NULL;
      ATerm o_28 = NULL;
      o_28 = t;
      if(((n_28 != NULL) && (n_28 != o_28)))
        _fail(o_28);
      else
        n_28 = o_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(n_28));
        t = set_config_0(t);
      }
    }
    t = x_15;
    {
      ATerm q_28 = NULL;
      q_28 = t;
      if(((p_28 != NULL) && (p_28 != q_28)))
        _fail(q_28);
      else
        p_28 = q_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_28));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  t = ArgOption_3(t, k_3, m_3, p_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = n_16;
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATempty, term_y_16));
  {
    t = printnl_0(t);
    {
      t = term_h_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_TicksToSeconds(not_null(u_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym__2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_29), not_null(g_29));
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = SSL_addr(not_null(f_29), not_null(g_29));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_97 (ATerm), ATerm q_97 (ATerm))
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_97(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm n_29 = NULL,o_29 = NULL,u_29 = NULL;
        n_29 = t;
        m_29 :
        if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
          {
            o_29 = ATgetFirst((ATermList) n_29);
            u_29 = (ATerm) ATgetNext((ATermList) n_29);
            {
              ATerm x_29 = NULL;
              ATerm y_29 = NULL;
              t = not_null(u_29);
              {
                t = foldr_2(t, p_97, q_97);
                {
                  y_29 = t;
                  if(((x_29 != NULL) && (x_29 != y_29)))
                    _fail(y_29);
                  else
                    x_29 = y_29;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(x_29));
                t = q_97(t);
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
ATerm crush_2 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm))
{
  ATerm f_30 = NULL;
  ATerm h_30 = NULL;
  f_30 = t;
  {
    ATerm i_30 = NULL;
    ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
    t = not_null(f_30);
    {
      i_30 = t;
      {
        t = SSL_explode_term(not_null(i_30));
        {
          n_30 = t;
          e_30 :
          if(match_cons(n_30, sym__2))
            {
              o_30 = ATgetArgument(n_30, 0);
              p_30 = ATgetArgument(n_30, 1);
              if(((h_30 != NULL) && (h_30 != p_30)))
                _fail(p_30);
              else
                h_30 = p_30;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_30);
      t = foldr_2(t, t_96, u_96);
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
    ATerm q_3 (ATerm t)
    {
      t = term_p_8;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym__2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      {
        ATerm d_17;
        d_17 = t;
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_30), not_null(x_30));
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = SSL_gtr(not_null(w_30), not_null(x_30));
            }
        }
        t = d_17;
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
  ATerm d_31 = NULL;
  ATerm g_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
      e_31 = t;
      c_31 :
      if(match_cons(e_31, sym__2))
        {
          f_31 = ATgetArgument(e_31, 0);
          g_31 = ATgetArgument(e_31, 1);
          {
            if(((d_31 != NULL) && (d_31 != f_31)))
              _fail(f_31);
            else
              d_31 = f_31;
            if(((d_31 != NULL) && (d_31 != g_31)))
              _fail(g_31);
            else
              d_31 = g_31;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_17);
    }
  else
    {
      t = g_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17;
      r_17 = t;
      {
        ATerm j_31 = NULL;
        ATerm k_31 = NULL;
        t = term_q_11;
        {
          t = get_config_0(t);
          {
            k_31 = t;
            if(((j_31 != NULL) && (j_31 != k_31)))
              _fail(k_31);
            else
              j_31 = k_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), term_h_7);
          t = geq_0(t);
        }
      }
      t = r_17;
      t = y_93(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm o_31 = NULL,q_31 = NULL;
    ATerm t_17;
    t_17 = t;
    {
      ATerm p_31 = NULL;
      t = run_time_0(t);
      {
        p_31 = t;
        if(((o_31 != NULL) && (o_31 != p_31)))
          _fail(p_31);
        else
          o_31 = p_31;
      }
    }
    t = t_17;
    {
      ATerm r_31 = NULL;
      t = term_w_17;
      {
        t = get_config_0(t);
        {
          r_31 = t;
          if(((q_31 != NULL) && (q_31 != r_31)))
            _fail(r_31);
          else
            q_31 = r_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), not_null(o_31)), term_x_17), not_null(q_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_3);
  {
    t = term_p_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Version_0))
    {
      ATerm a_32 = NULL,c_32 = NULL;
      ATerm z_17;
      z_17 = t;
      {
        ATerm b_32 = NULL;
        t = SSLgetAnnotations(not_null(y_31));
        {
          b_32 = t;
          if(((a_32 != NULL) && (a_32 != b_32)))
            _fail(b_32);
          else
            a_32 = b_32;
        }
      }
      t = z_17;
      {
        ATerm d_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_32));
        {
          d_32 = t;
          if(((c_32 != NULL) && (c_32 != d_32)))
            _fail(d_32);
          else
            c_32 = d_32;
        }
        t = not_null(c_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, s_3);
  t = l_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  t = SSL_table_create(not_null(i_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  {
    ATerm m_18;
    m_18 = t;
    {
      t = term_n_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_18, term_o_18, not_null(m_32));
          t = table_put_0(t);
        }
      }
    }
    t = m_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_table_destroy(not_null(q_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_exit(not_null(u_32));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(((ATgetType(y_32) == AT_LIST) && ATisEmpty(y_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
        {
          z_32 = ATgetFirst((ATermList) y_32);
          a_33 = (ATerm) ATgetNext((ATermList) y_32);
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
  ATerm p_18;
  p_18 = t;
  {
    ATerm d_33 = NULL;
    ATerm g_33 = NULL;
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm e_33 = NULL;
          ATerm f_33 = NULL;
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
          t = (ATerm) ATinsert(ATempty, not_null(e_33));
        }
      }
    {
      g_33 = t;
      if(((d_33 != NULL) && (d_33 != g_33)))
        _fail(g_33);
      else
        d_33 = g_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(d_33));
      t = printnl_0(t);
    }
  }
  t = p_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm j_33 (ATerm t)
  {
    ATerm t_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = t_18;
        t = Cons_2(t, i_77, j_33);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  s_33 = t;
  p_33 :
  if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
    {
      q_33 = ATgetFirst((ATermList) s_33);
      r_33 = (ATerm) ATgetNext((ATermList) s_33);
      {
        ATerm v_33 = NULL;
        t = not_null(r_33);
        {
          ATerm z_18;
          z_18 = t;
          {
            ATerm w_33 = NULL,y_33 = NULL,a_34 = NULL;
            ATerm a_19;
            a_19 = t;
            {
              ATerm x_33 = NULL;
              t = j_0(t);
              {
                x_33 = t;
                if(((w_33 != NULL) && (w_33 != x_33)))
                  _fail(x_33);
                else
                  w_33 = x_33;
              }
            }
            t = a_19;
            {
              ATerm z_33 = NULL;
              t = not_null(q_33);
              {
                t = i_0(t);
                {
                  z_33 = t;
                  if(((y_33 != NULL) && (y_33 != z_33)))
                    _fail(z_33);
                  else
                    y_33 = z_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_33)), not_null(y_33));
                {
                  a_34 = t;
                  if(((v_33 != NULL) && (v_33 != a_34)))
                    _fail(a_34);
                  else
                    v_33 = a_34;
                }
              }
            }
          }
          t = z_18;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(v_33);
              return(t);
            }
            t = reverse_acc_2(t, i_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(s_33) == AT_LIST) && ATisEmpty(s_33)))
        {
          {
            t = term_m_5;
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
  ATerm z_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_58 (ATerm))
{
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym_Program_1))
    {
      m_34 = ATgetArgument(l_34, 0);
      {
        ATerm p_34 = NULL,r_34 = NULL;
        ATerm q_34 = NULL;
        t = SSLgetAnnotations(not_null(l_34));
        {
          q_34 = t;
          if(((p_34 != NULL) && (p_34 != q_34)))
            _fail(q_34);
          else
            p_34 = q_34;
        }
        {
          t = not_null(m_34);
          {
            ATerm t_34 = NULL;
            t = u_58(t);
            {
              r_34 = t;
              {
                ATerm u_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_34)), not_null(p_34));
                {
                  u_34 = t;
                  if(((t_34 != NULL) && (t_34 != u_34)))
                    _fail(u_34);
                  else
                    t_34 = u_34;
                }
                t = not_null(t_34);
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
  ATerm c_35 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_35 = NULL;
      t = term_w_17;
      {
        t = get_config_0(t);
        {
          d_35 = t;
          if(((c_35 != NULL) && (c_35 != d_35)))
            _fail(d_35);
          else
            c_35 = d_35;
        }
      }
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm e_35 = NULL;
            e_35 = t;
            if(((c_35 != NULL) && (c_35 != e_35)))
              _fail(e_35);
            else
              c_35 = e_35;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = fetch_1(t, e_4);
      }
    }
  {
    t = term_d_19;
    {
      t = echo_0(t);
      {
        t = term_l_19;
        {
          t = table_get_0(t);
          {
            ATerm g_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, g_4);
            {
              ATerm h_4 (ATerm t)
              {
                ATerm f_35 = NULL;
                ATerm g_35 = NULL;
                g_35 = t;
                if(((f_35 != NULL) && (f_35 != g_35)))
                  _fail(g_35);
                else
                  f_35 = g_35;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_35)), term_p_19);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_4);
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
  ATerm q_19;
  q_19 = t;
  {
    ATerm l_35 = NULL;
    ATerm m_35 = NULL;
    m_35 = t;
    if(((l_35 != NULL) && (l_35 != m_35)))
      _fail(m_35);
    else
      l_35 = m_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATempty, not_null(l_35)));
      t = printnl_0(t);
    }
  }
  t = q_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm r_19;
  r_19 = t;
  {
    t = w_72(t);
    t = debug_0(t);
  }
  t = r_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_Undefined_1))
    {
      u_35 = ATgetArgument(t_35, 0);
      {
        ATerm x_35 = NULL,z_35 = NULL;
        ATerm y_35 = NULL;
        t = SSLgetAnnotations(not_null(t_35));
        {
          y_35 = t;
          if(((x_35 != NULL) && (x_35 != y_35)))
            _fail(y_35);
          else
            x_35 = y_35;
        }
        {
          t = not_null(u_35);
          {
            ATerm b_36 = NULL;
            t = v_58(t);
            {
              z_35 = t;
              {
                ATerm c_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_35)), not_null(x_35));
                {
                  c_36 = t;
                  if(((b_36 != NULL) && (b_36 != c_36)))
                    _fail(c_36);
                  else
                    b_36 = c_36;
                }
                t = not_null(b_36);
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
ATerm fetch_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm h_36 (ATerm t)
  {
    ATerm t_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_77, _id);
        LocalPopChoice(y_19);
      }
    else
      {
        t = t_19;
        t = Cons_2(t, _id, h_36);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_85 (ATerm))
{
  t = fetch_1(t, w_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Help_0))
    {
      ATerm o_36 = NULL,q_36 = NULL;
      ATerm z_19;
      z_19 = t;
      {
        ATerm p_36 = NULL;
        t = SSLgetAnnotations(not_null(m_36));
        {
          p_36 = t;
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
        }
      }
      t = z_19;
      {
        ATerm r_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_36));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_76(t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_cons(x_36, sym__2))
    {
      y_36 = ATgetArgument(x_36, 0);
      z_36 = ATgetArgument(x_36, 1);
      t = SSL_table_get(not_null(y_36), not_null(z_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym__3))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      j_37 = ATgetArgument(g_37, 2);
      {
        ATerm d_20;
        d_20 = t;
        {
          ATerm n_37 = NULL;
          ATerm o_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(i_37));
          {
            ATerm e_20 = t;
            int f_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_20);
              }
            else
              {
                t = e_20;
                t = (ATerm) ATempty;
              }
            {
              o_37 = t;
              if(((n_37 != NULL) && (n_37 != o_37)))
                _fail(o_37);
              else
                n_37 = o_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_37), not_null(i_37), (ATerm) ATinsert(CheckATermList(not_null(n_37)), not_null(j_37)));
            t = table_put_0(t);
          }
        }
        t = d_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm s_37 = NULL;
  ATerm t_37 = NULL;
  t = term_m_5;
  {
    t = b_87(t);
    {
      t_37 = t;
      if(((s_37 != NULL) && (s_37 != t_37)))
        _fail(t_37);
      else
        s_37 = t_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_19, term_i_19, not_null(s_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_string(z_37, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
        {
          a_38 = ATgetFirst((ATermList) z_37);
          b_38 = (ATerm) ATgetNext((ATermList) z_37);
          {
            ATerm e_38 = NULL;
            ATerm h_20;
            h_20 = t;
            {
              t = not_null(a_38);
              t = a_0(t);
            }
            t = h_20;
            {
              ATerm f_38 = NULL;
              t = term_m_5;
              {
                t = d_0(t);
                {
                  f_38 = t;
                  if(((e_38 != NULL) && (e_38 != f_38)))
                    _fail(f_38);
                  else
                    e_38 = f_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_38)), not_null(e_38));
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
  ATerm i_4 (ATerm t)
  {
    ATerm k_38 = NULL;
    k_38 = t;
    j_38 :
    if(!(match_string(k_38, "--help")))
      {
        if(!(match_string(k_38, "-h")))
          {
            if(!(match_string(k_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_j_20;
    {
      t = set_config_0(t);
      t = term_k_20;
    }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  t = Option_3(t, i_4, j_4, k_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
    {
      o_38 = ATgetFirst((ATermList) n_38);
      p_38 = (ATerm) ATgetNext((ATermList) n_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(((ATgetType(c_39) == AT_LIST) && !(ATisEmpty(c_39))))
    {
      d_39 = ATgetFirst((ATermList) c_39);
      e_39 = (ATerm) ATgetNext((ATermList) c_39);
      {
        ATerm i_39 = NULL,k_39 = NULL;
        ATerm j_39 = NULL;
        t = SSLgetAnnotations(not_null(c_39));
        {
          j_39 = t;
          if(((i_39 != NULL) && (i_39 != j_39)))
            _fail(j_39);
          else
            i_39 = j_39;
        }
        {
          t = not_null(d_39);
          {
            ATerm m_39 = NULL;
            t = i_58(t);
            {
              k_39 = t;
              {
                t = not_null(e_39);
                {
                  ATerm o_39 = NULL;
                  t = j_58(t);
                  {
                    m_39 = t;
                    {
                      ATerm p_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_39)), not_null(k_39)), not_null(i_39));
                      {
                        p_39 = t;
                        if(((o_39 != NULL) && (o_39 != p_39)))
                          _fail(p_39);
                        else
                          o_39 = p_39;
                      }
                      t = not_null(o_39);
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
  ATerm z_39 = NULL;
  z_39 = t;
  y_39 :
  if(((ATgetType(z_39) == AT_LIST) && ATisEmpty(z_39)))
    {
      {
        ATerm b_40 = NULL,d_40 = NULL;
        ATerm m_20;
        m_20 = t;
        {
          ATerm c_40 = NULL;
          t = SSLgetAnnotations(not_null(z_39));
          {
            c_40 = t;
            if(((b_40 != NULL) && (b_40 != c_40)))
              _fail(c_40);
            else
              b_40 = c_40;
          }
        }
        t = m_20;
        {
          ATerm e_40 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_40));
          {
            e_40 = t;
            if(((d_40 != NULL) && (d_40 != e_40)))
              _fail(e_40);
            else
              d_40 = e_40;
          }
          t = not_null(d_40);
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
  ATerm l_40 = NULL,o_40 = NULL,p_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      o_40 = ATgetArgument(l_40, 0);
      p_40 = ATgetArgument(l_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_11, not_null(o_40), not_null(p_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm n_20;
  n_20 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_20;
        t = z_86(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
        }
      }
  }
  t = n_20;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm x_40 = NULL;
      ATerm v_20;
      v_20 = t;
      {
        ATerm v_40 = NULL;
        ATerm w_40 = NULL;
        w_40 = t;
        if(((v_40 != NULL) && (v_40 != w_40)))
          _fail(w_40);
        else
          v_40 = w_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(v_40));
          t = set_config_0(t);
        }
      }
      t = v_20;
      {
        ATerm y_40 = NULL;
        y_40 = t;
        if(((x_40 != NULL) && (x_40 != y_40)))
          _fail(y_40);
        else
          x_40 = y_40;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_40));
      }
      return(t);
    }
    ATerm q_4 (ATerm t)
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              {
                t = z_86(t);
                t = Cons_2(t, _id, q_4);
              }
            }
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_4, q_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  ATerm e_21;
  e_21 = t;
  {
    ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
    h_41 = t;
    d_41 :
    if(match_cons(h_41, sym__3))
      {
        i_41 = ATgetArgument(h_41, 0);
        j_41 = ATgetArgument(h_41, 1);
        k_41 = ATgetArgument(h_41, 2);
        {
          if(((e_41 != NULL) && (e_41 != i_41)))
            _fail(i_41);
          else
            e_41 = i_41;
          {
            if(((f_41 != NULL) && (f_41 != j_41)))
              _fail(j_41);
            else
              f_41 = j_41;
            {
              if(((g_41 != NULL) && (g_41 != k_41)))
                _fail(k_41);
              else
                g_41 = k_41;
              t = SSL_table_put(not_null(e_41), not_null(f_41), not_null(g_41));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm p_41 = NULL;
  ATerm f_21;
  f_21 = t;
  {
    t = term_g_21;
    t = table_put_0(t);
  }
  t = f_21;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm i_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_86(t);
          LocalPopChoice(l_21);
        }
      else
        {
          t = i_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_4);
    {
      ATerm m_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_21;
          q_21 = t;
          {
            ATerm r_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_20;
                t = get_config_0(t);
                LocalPopChoice(w_21);
              }
            else
              {
                t = r_21;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_21;
          {
            t = system_usage_0(t);
            {
              t = term_p_8;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_21);
        }
      else
        {
          t = m_21;
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm x_4 (ATerm t)
                  {
                    ATerm q_41 = NULL;
                    q_41 = t;
                    if(((p_41 != NULL) && (p_41 != q_41)))
                      _fail(q_41);
                    else
                      p_41 = q_41;
                    return(t);
                  }
                  t = Undefined_1(t, x_4);
                  return(t);
                }
                t = fetch_1(t, w_4);
                {
                  ATerm y_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_41)), term_z_21);
                    return(t);
                  }
                  t = say_1(t, y_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_h_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                {
                }
              }
          }
        }
      {
        ATerm e_22;
        e_22 = t;
        {
          t = term_e_19;
          t = table_destroy_0(t);
        }
        t = e_22;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  t = parse_options_1(t, r_71);
  {
    t = store_options_0(t);
    {
      t = t_71(t);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_71);
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm h_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_71(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = h_22;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm l_72 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_72(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, i_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_4, k_72, l_72, a_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm s_22;
      s_22 = t;
      {
        ATerm u_41 = NULL;
        ATerm v_41 = NULL;
        t = term_w_17;
        {
          t = get_config_0(t);
          {
            v_41 = t;
            if(((u_41 != NULL) && (u_41 != v_41)))
              _fail(v_41);
            else
              u_41 = v_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_9, (ATerm) ATinsert(ATempty, not_null(u_41)));
          t = printnl_0(t);
        }
      }
      t = s_22;
      return(t);
    }
    t = if_verbose2_1(t, c_5);
    return(t);
  }
  t = iowrap_4(t, c_72, d_72, e_72, b_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  t = iowrap_3(t, a_72, b_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    t = _2(t, _id, x_71);
    return(t);
  }
  t = iowrap_2(t, d_5, _fail);
  return(t);
}
ATerm io_astratego2tg_0 (ATerm t)
{
  t = iowrap_1(t, stratego_ast_to_tg_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_ast_to_tg_0);
  return(t);
}
