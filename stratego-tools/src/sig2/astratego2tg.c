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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_h_21;
ATerm term_w_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_p_16;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_i_12;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_a_9;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_k_6;
void init_constant_terms (void)
{
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_k_6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_a_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_9);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_k_6);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_k_6);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_k_6);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__3, term_v_18, term_w_18, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm k_81 (ATerm));
ATerm build_group_by_pairs_4 (ATerm, ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm make_set_0 (ATerm);
ATerm group_by_3 (ATerm, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm));
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
ATerm map_with_index_1 (ATerm, ATerm g_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_98 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm));
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
ATerm collect_om_1 (ATerm, ATerm x_95 (ATerm));
ATerm collect_1 (ATerm, ATerm y_95 (ATerm));
ATerm stratego_ast_to_tg_0 (ATerm);
ATerm _2 (ATerm, ATerm h_57 (ATerm), ATerm i_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_71 (ATerm));
ATerm debug_1 (ATerm, ATerm d_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm crush_2 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_87 (ATerm));
ATerm map_1 (ATerm, ATerm l_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_87 (ATerm));
ATerm Program_1 (ATerm, ATerm d_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_58 (ATerm), ATerm r_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_72 (ATerm));
ATerm io_astratego2tg_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm a_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_6);
    }
  else
    {
      t = a_6;
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1(t, k_81);
              return(t);
            }
            t = Cons_2(t, k_81, e_0);
            ;
            LocalPopChoice(j_6);
          }
        else
          {
            t = i_6;
            {
              ATerm s_0 = NULL,g_1 = NULL,h_1 = NULL;
              s_0 = t;
              r_0 :
              if(((ATgetType(s_0) == AT_LIST) && !(ATisEmpty(s_0))))
                {
                  g_1 = ATgetFirst((ATermList) s_0);
                  h_1 = (ATerm) ATgetNext((ATermList) s_0);
                  {
                    t = not_null(h_1);
                    t = filter_1(t, k_81);
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
ATerm build_group_by_pairs_4 (ATerm t, ATerm p_71 (ATerm), ATerm q_71 (ATerm), ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm a_2 = NULL;
  ATerm c_2 = NULL;
  a_2 = t;
  {
    ATerm e_2 = NULL;
    t = term_k_6;
    {
      t = s_71(t);
      {
        ATerm f_0 (ATerm t)
        {
          ATerm n_6;
          n_6 = t;
          {
            ATerm d_2 = NULL;
            t = p_71(t);
            {
              d_2 = t;
              if(((a_2 != NULL) && (a_2 != d_2)))
                _fail(d_2);
              else
                a_2 = d_2;
            }
          }
          t = n_6;
          return(t);
        }
        t = filter_1(t, f_0);
        {
          t = map_1(t, q_71);
          {
            e_2 = t;
            if(((c_2 != NULL) && (c_2 != e_2)))
              _fail(e_2);
            else
              c_2 = e_2;
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_2), not_null(c_2));
      t = r_71(t);
    }
  }
  return(t);
}
ATerm make_set_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm j_2 = NULL;
    ATerm k_2 = NULL;
    k_2 = t;
    if(((j_2 != NULL) && (j_2 != k_2)))
      _fail(k_2);
    else
      j_2 = k_2;
    t = (ATerm) ATinsert(ATempty, not_null(j_2));
    return(t);
  }
  t = foldr_3(t, h_0, union_0, m_0);
  return(t);
}
ATerm group_by_3 (ATerm t, ATerm m_71 (ATerm), ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    t = map_1(t, m_71);
    {
      t = make_set_0(t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm o_0 (ATerm t)
          {
            t = not_null(n_2);
            return(t);
          }
          t = build_group_by_pairs_4(t, m_71, n_71, o_71, o_0);
          return(t);
        }
        t = map_1(t, n_0);
      }
    }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL;
  s_2 = t;
  r_2 :
  if(((ATgetType(s_2) == AT_LIST) && !(ATisEmpty(s_2))))
    {
      t_2 = ATgetFirst((ATermList) s_2);
      u_2 = (ATerm) ATgetNext((ATermList) s_2);
      t = not_null(t_2);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  z_2 = t;
  y_2 :
  if(match_cons(z_2, sym__2))
    {
      a_3 = ATgetArgument(z_2, 0);
      b_3 = ATgetArgument(z_2, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_3), not_null(b_3));
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
  ATerm h_3 = NULL;
  ATerm j_3 = NULL;
  h_3 = t;
  {
    ATerm k_3 = NULL;
    t = term_k_6;
    {
      t = a_99(t);
      {
        k_3 = t;
        if(((j_3 != NULL) && (j_3 != k_3)))
          _fail(k_3);
        else
          j_3 = k_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_3), not_null(h_3));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Param_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  s_3 = t;
  r_3 :
  if(match_cons(s_3, sym_Var_1))
    {
      t_3 = ATgetArgument(s_3, 0);
      {
        ATerm w_3 = NULL;
        ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
        t = not_null(s_3);
        {
          ATerm p_0 (ATerm t)
          {
            t = term_o_6;
            return(t);
          }
          t = rewrite_1(t, p_0);
          {
            x_3 = t;
            p_3 :
            if(match_cons(x_3, sym_Defined_2))
              {
                y_3 = ATgetArgument(x_3, 0);
                z_3 = ATgetArgument(x_3, 1);
                q_3 :
                if(match_string(y_3, "b_0"))
                  {
                    if(((w_3 != NULL) && (w_3 != z_3)))
                      _fail(z_3);
                    else
                      w_3 = z_3;
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
        t = not_null(w_3);
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
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  j_4 = t;
  h_4 :
  if(match_cons(j_4, sym_Op_2))
    {
      k_4 = ATgetArgument(j_4, 0);
      i_4 = ATgetArgument(j_4, 1);
      {
        ATerm n_4 = NULL;
        ATerm o_4 = NULL;
        t = not_null(i_4);
        {
          t = map_1(t, to_prod_item_0);
          {
            o_4 = t;
            if(((n_4 != NULL) && (n_4 != o_4)))
              _fail(o_4);
            else
              n_4 = o_4;
          }
        }
        t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_4)), not_null(n_4));
      }
    }
  else
    {
      if(match_cons(j_4, sym_Var_1))
        {
          k_4 = ATgetArgument(j_4, 0);
          {
            ATerm p_6 = t;
            int q_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_4 = NULL;
                ATerm r_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_4));
                {
                  t = Param_0(t);
                  {
                    r_4 = t;
                    if(((q_4 != NULL) && (q_4 != r_4)))
                      _fail(r_4);
                    else
                      q_4 = r_4;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Param_1, not_null(q_4));
                ;
                LocalPopChoice(q_6);
              }
            else
              {
                t = p_6;
                {
                  ATerm r_6 = t;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_4));
                      t = Param_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = r_6;
                    }
                  t = (ATerm) ATmakeAppl(sym_NonTermRef_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_4)), (ATerm) ATempty);
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
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  a_5 :
  if(match_cons(c_5, sym_Var_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      b_5 :
      if(match_string(d_5, "String"))
        {
          t = term_s_6;
        }
      else
        {
          if(match_string(d_5, "Int"))
            {
              t = term_t_6;
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
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = to_build_in_prod_item_0(t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = to_dec_prod_item_0(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  k_5 :
  if(match_cons(l_5, sym__2))
    {
      m_5 = ATgetArgument(l_5, 0);
      n_5 = ATgetArgument(l_5, 1);
      {
        ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
        ATerm f_7;
        f_7 = t;
        {
          ATerm t_5 = NULL;
          ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
          t = y_98(t);
          {
            t_5 = t;
            {
              if(((q_5 != NULL) && (q_5 != t_5)))
                _fail(t_5);
              else
                q_5 = t_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_5), not_null(m_5), not_null(n_5));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_7 = t;
                    int o_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), term_p_7);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(o_7);
                      }
                    else
                      {
                        t = m_7;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_5 = t;
                      j_5 :
                      if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
                        {
                          v_5 = ATgetFirst((ATermList) u_5);
                          w_5 = (ATerm) ATgetNext((ATermList) u_5);
                          {
                            if(((r_5 != NULL) && (r_5 != v_5)))
                              _fail(v_5);
                            else
                              r_5 = v_5;
                            {
                              if(((s_5 != NULL) && (s_5 != w_5)))
                                _fail(w_5);
                              else
                                s_5 = w_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_5), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(s_5)), (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(m_5))));
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
        t = f_7;
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
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  d_6 = t;
  b_6 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      c_6 :
      if(match_cons(f_6, sym_Var_1))
        {
          g_6 = ATgetArgument(f_6, 0);
          {
            ATerm q_7;
            q_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_6)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_7, not_null(e_6)));
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_o_6;
                  return(t);
                }
                t = assert_1(t, q_0);
              }
            }
            t = q_7;
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
  ATerm l_6 = NULL;
  ATerm m_6 = NULL;
  m_6 = t;
  if(((l_6 != NULL) && (l_6 != m_6)))
    _fail(m_6);
  else
    l_6 = m_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_s_7);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm w_6 = NULL;
  ATerm x_6 = NULL;
  x_6 = t;
  if(((w_6 != NULL) && (w_6 != x_6)))
    _fail(x_6);
  else
    w_6 = x_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_7, not_null(w_6));
    {
      ATerm n_7 (ATerm t)
      {
        ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
        y_6 = t;
        u_6 :
        if(match_cons(y_6, sym__2))
          {
            z_6 = ATgetArgument(y_6, 0);
            a_7 = ATgetArgument(y_6, 1);
            v_6 :
            if(((ATgetType(a_7) == AT_LIST) && ATisEmpty(a_7)))
              {
                t = (ATerm) ATempty;
              }
            else
              {
                if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
                  {
                    b_7 = ATgetFirst((ATermList) a_7);
                    c_7 = (ATerm) ATgetNext((ATermList) a_7);
                    {
                      ATerm g_7 = NULL,i_7 = NULL;
                      ATerm t_7;
                      t_7 = t;
                      {
                        ATerm h_7 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
                        {
                          t = g_79(t);
                          {
                            h_7 = t;
                            if(((g_7 != NULL) && (g_7 != h_7)))
                              _fail(h_7);
                            else
                              g_7 = h_7;
                          }
                        }
                      }
                      t = t_7;
                      {
                        ATerm j_7 = NULL,l_7 = NULL;
                        ATerm k_7 = NULL;
                        t = not_null(z_6);
                        {
                          t = inc_0(t);
                          {
                            k_7 = t;
                            if(((j_7 != NULL) && (j_7 != k_7)))
                              _fail(k_7);
                            else
                              j_7 = k_7;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), not_null(c_7));
                          {
                            t = n_7(t);
                            {
                              l_7 = t;
                              if(((i_7 != NULL) && (i_7 != l_7)))
                                _fail(l_7);
                              else
                                i_7 = l_7;
                            }
                          }
                        }
                        t = (ATerm) ATinsert(CheckATermList(not_null(i_7)), not_null(g_7));
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
      t = n_7(t);
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
    {
      w_7 = ATgetFirst((ATermList) v_7);
      x_7 = (ATerm) ATgetNext((ATermList) v_7);
      t = not_null(x_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym__2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        ATerm y_7;
        y_7 = t;
        {
          ATerm i_8 = NULL;
          ATerm j_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(f_8));
          {
            ATerm z_7 = t;
            int a_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(a_8);
              }
            else
              {
                t = z_7;
                t = (ATerm) ATempty;
              }
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_8), not_null(f_8), not_null(i_8));
            t = table_put_0(t);
          }
        }
        t = y_7;
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
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  ATerm b_8;
  b_8 = t;
  {
    ATerm t_8 = NULL;
    ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
    t = v_98(t);
    {
      t_8 = t;
      {
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
        {
          ATerm g_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), term_p_7);
              t = table_get_0(t);
              ;
              LocalPopChoice(h_8);
            }
          else
            {
              t = g_8;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_8 = t;
            p_8 :
            if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
              {
                v_8 = ATgetFirst((ATermList) u_8);
                w_8 = (ATerm) ATgetNext((ATermList) u_8);
                {
                  if(((r_8 != NULL) && (r_8 != v_8)))
                    _fail(v_8);
                  else
                    r_8 = v_8;
                  {
                    if(((q_8 != NULL) && (q_8 != w_8)))
                      _fail(w_8);
                    else
                      q_8 = w_8;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_8), term_p_7, not_null(q_8));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_8);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm x_8 = NULL;
                              x_8 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), not_null(x_8));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_0);
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
  t = b_8;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_77(t);
      t = b_77(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        t = b_77(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm e_9 = NULL;
  ATerm m_8;
  m_8 = t;
  {
    ATerm f_9 = NULL;
    ATerm g_9 = NULL;
    t = u_98(t);
    {
      f_9 = t;
      {
        if(((e_9 != NULL) && (e_9 != f_9)))
          _fail(f_9);
        else
          e_9 = f_9;
        {
          ATerm h_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_p_7);
          {
            ATerm n_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_8);
              }
            else
              {
                t = n_8;
                t = (ATerm) ATempty;
              }
            {
              h_9 = t;
              if(((g_9 != NULL) && (g_9 != h_9)))
                _fail(h_9);
              else
                g_9 = h_9;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_9), term_p_7, (ATerm) ATinsert(CheckATermList(not_null(g_9)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = m_8;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_98 (ATerm), ATerm x_98 (ATerm))
{
  t = begin_scope_1(t, w_98);
  {
    ATerm u_0 (ATerm t)
    {
      t = end_scope_1(t, w_98);
      return(t);
    }
    t = restore_always_2(t, x_98, u_0);
  }
  return(t);
}
ATerm to_prod_items_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  t_9 :
  if(match_cons(x_9, sym_FunType_2))
    {
      y_9 = ATgetArgument(x_9, 0);
      v_9 = ATgetArgument(x_9, 1);
      {
        ATerm c_10 = NULL;
        ATerm v_0 (ATerm t)
        {
          t = term_o_6;
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm l_10 = NULL;
          t = not_null(v_9);
          {
            ATerm y_8 = t;
            int z_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
                d_10 = t;
                o_9 :
                if(match_cons(d_10, sym_ConstType_1))
                  {
                    e_10 = ATgetArgument(d_10, 0);
                    p_9 :
                    if(match_cons(e_10, sym_Op_2))
                      {
                        f_10 = ATgetArgument(e_10, 0);
                        g_10 = ATgetArgument(e_10, 1);
                        t = not_null(g_10);
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
                LocalPopChoice(z_8);
                t = map_with_index_1(t, add_param_rule_0);
              }
            else
              {
                t = y_8;
                {
                }
              }
            {
              t = not_null(y_9);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm i_10 = NULL,j_10 = NULL;
                  i_10 = t;
                  r_9 :
                  if(match_cons(i_10, sym_ConstType_1))
                    {
                      j_10 = ATgetArgument(i_10, 0);
                      {
                        t = not_null(j_10);
                        t = to_prod_item_0(t);
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, x_0);
                {
                  l_10 = t;
                  if(((c_10 != NULL) && (c_10 != l_10)))
                    _fail(l_10);
                  else
                    c_10 = l_10;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, v_0, w_0);
        t = not_null(c_10);
      }
    }
  else
    {
      if(match_cons(x_9, sym_ConstType_1))
        {
          y_9 = ATgetArgument(x_9, 0);
          u_9 :
          if(match_cons(y_9, sym_Op_2))
            {
              z_9 = ATgetArgument(y_9, 0);
              w_9 = ATgetArgument(y_9, 1);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(y_9, sym_Var_1))
                {
                  z_9 = ATgetArgument(y_9, 0);
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
  ATerm y_0 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_s_7;
    return(t);
  }
  t = foldr_3(t, y_0, add_0, z_0);
  return(t);
}
ATerm get_nt_params_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  w_10 = t;
  u_10 :
  if(match_cons(w_10, sym_Op_2))
    {
      x_10 = ATgetArgument(w_10, 0);
      v_10 = ATgetArgument(w_10, 1);
      {
        t = not_null(v_10);
        t = length_0(t);
      }
    }
  else
    {
      if(match_cons(w_10, sym_Var_1))
        {
          x_10 = ATgetArgument(w_10, 0);
          t = term_a_9;
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
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  g_11 = t;
  e_11 :
  if(match_cons(g_11, sym_Op_2))
    {
      h_11 = ATgetArgument(g_11, 0);
      f_11 = ATgetArgument(g_11, 1);
      t = not_null(h_11);
    }
  else
    {
      if(match_cons(g_11, sym_Var_1))
        {
          h_11 = ATgetArgument(g_11, 0);
          t = not_null(h_11);
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
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
  q_11 = t;
  o_11 :
  if(match_cons(q_11, sym_ConstType_1))
    {
      r_11 = ATgetArgument(q_11, 0);
      t = not_null(r_11);
    }
  else
    {
      if(match_cons(q_11, sym_FunType_2))
        {
          r_11 = ATgetArgument(q_11, 0);
          s_11 = ATgetArgument(q_11, 1);
          p_11 :
          if(match_cons(s_11, sym_ConstType_1))
            {
              t_11 = ATgetArgument(s_11, 0);
              t = not_null(t_11);
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
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym_OpDecl_2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
        ATerm o_12 = NULL;
        t = not_null(h_12);
        {
          ATerm p_12 = NULL;
          t = get_nt_0(t);
          {
            o_12 = t;
            {
              if(((l_12 != NULL) && (l_12 != o_12)))
                _fail(o_12);
              else
                l_12 = o_12;
              {
                t = not_null(l_12);
                {
                  ATerm q_12 = NULL;
                  t = get_nt_name_0(t);
                  {
                    p_12 = t;
                    {
                      if(((k_12 != NULL) && (k_12 != p_12)))
                        _fail(p_12);
                      else
                        k_12 = p_12;
                      {
                        t = not_null(l_12);
                        {
                          ATerm r_12 = NULL;
                          t = get_nt_params_0(t);
                          {
                            q_12 = t;
                            {
                              if(((m_12 != NULL) && (m_12 != q_12)))
                                _fail(q_12);
                              else
                                m_12 = q_12;
                              {
                                t = not_null(h_12);
                                {
                                  t = to_prod_items_0(t);
                                  {
                                    r_12 = t;
                                    if(((n_12 != NULL) && (n_12 != r_12)))
                                      _fail(r_12);
                                    else
                                      n_12 = r_12;
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
        t = (ATerm) ATmakeAppl(sym_NonTermDec_3, (ATerm)ATmakeAppl(sym_Id_1, not_null(k_12)), not_null(m_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Prod_2, (ATerm)ATmakeAppl(sym_Id_1, not_null(g_12)), not_null(n_12))));
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym__2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
    {
      i_13 = ATgetFirst((ATermList) h_13);
      j_13 = (ATerm) ATgetNext((ATermList) h_13);
      {
        t = j_97(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm m_13 = NULL;
            m_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(m_13));
              t = i_97(t);
            }
            return(t);
          }
          t = fetch_1(t, a_1);
        }
        t = not_null(j_13);
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
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym__2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        t = not_null(t_13);
        {
          ATerm y_13 (ATerm t)
          {
            ATerm b_9 = t;
            int c_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_13);
                ;
                LocalPopChoice(c_9);
              }
            else
              {
                t = b_9;
                {
                  ATerm d_9 = t;
                  int i_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(u_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_97, b_1);
                      t = y_13(t);
                      ;
                      LocalPopChoice(i_9);
                    }
                  else
                    {
                      t = d_9;
                      t = Cons_2(t, _id, y_13);
                    }
                }
              }
            return(t);
          }
          t = y_13(t);
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_97(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
        d_14 = t;
        c_14 :
        if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
          {
            e_14 = ATgetFirst((ATermList) d_14);
            f_14 = (ATerm) ATgetNext((ATermList) d_14);
            {
              ATerm i_14 = NULL,k_14 = NULL;
              ATerm l_9;
              l_9 = t;
              {
                ATerm j_14 = NULL;
                t = not_null(e_14);
                {
                  t = t_97(t);
                  {
                    j_14 = t;
                    if(((i_14 != NULL) && (i_14 != j_14)))
                      _fail(j_14);
                    else
                      i_14 = j_14;
                  }
                }
              }
              t = l_9;
              {
                ATerm l_14 = NULL;
                t = not_null(f_14);
                {
                  t = foldr_3(t, r_97, s_97, t_97);
                  {
                    l_14 = t;
                    if(((k_14 != NULL) && (k_14 != l_14)))
                      _fail(l_14);
                    else
                      k_14 = l_14;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), not_null(k_14));
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
  ATerm t_14 = NULL;
  ATerm v_14 = NULL;
  t_14 = t;
  {
    ATerm w_14 = NULL;
    ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
    t = not_null(t_14);
    {
      w_14 = t;
      {
        t = SSL_explode_term(not_null(w_14));
        {
          y_14 = t;
          s_14 :
          if(match_cons(y_14, sym__2))
            {
              z_14 = ATgetArgument(y_14, 0);
              a_15 = ATgetArgument(y_14, 1);
              if(((v_14 != NULL) && (v_14 != a_15)))
                _fail(a_15);
              else
                v_14 = a_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_14);
      t = foldr_3(t, v_96, w_96, x_96);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm x_95 (ATerm))
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL;
      ATerm g_15 = NULL;
      t = x_95(t);
      {
        g_15 = t;
        if(((f_15 != NULL) && (f_15 != g_15)))
          _fail(g_15);
        else
          f_15 = g_15;
      }
      t = (ATerm) ATinsert(ATempty, not_null(f_15));
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm c_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = collect_om_1(t, x_95);
          return(t);
        }
        t = crush_3(t, c_1, union_0, d_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm y_95 (ATerm))
{
  t = collect_om_1(t, y_95);
  return(t);
}
ATerm stratego_ast_to_tg_0 (ATerm t)
{
  ATerm r_16 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
    t_15 = t;
    i_15 :
    if(match_cons(t_15, sym_OpDecl_2))
      {
        u_15 = ATgetArgument(t_15, 0);
        v_15 = ATgetArgument(t_15, 1);
        {
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_1(t, e_1);
  {
    t = map_1(t, to_NonTermDec_0);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
        w_15 = t;
        k_15 :
        if(match_cons(w_15, sym_NonTermDec_3))
          {
            x_15 = ATgetArgument(w_15, 0);
            y_15 = ATgetArgument(w_15, 1);
            z_15 = ATgetArgument(w_15, 2);
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(y_15));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
        c_16 = t;
        m_15 :
        if(match_cons(c_16, sym_NonTermDec_3))
          {
            d_16 = ATgetArgument(c_16, 0);
            e_16 = ATgetArgument(c_16, 1);
            f_16 = ATgetArgument(c_16, 2);
            n_15 :
            if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
              {
                g_16 = ATgetFirst((ATermList) f_16);
                h_16 = (ATerm) ATgetNext((ATermList) f_16);
                o_15 :
                if(((ATgetType(h_16) == AT_LIST) && ATisEmpty(h_16)))
                  {
                    t = not_null(g_16);
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
      ATerm j_1 (ATerm t)
      {
        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
        j_16 = t;
        q_15 :
        if(match_cons(j_16, sym__2))
          {
            k_16 = ATgetArgument(j_16, 0);
            n_16 = ATgetArgument(j_16, 1);
            r_15 :
            if(match_cons(k_16, sym__2))
              {
                l_16 = ATgetArgument(k_16, 0);
                m_16 = ATgetArgument(k_16, 1);
                t = (ATerm) ATmakeAppl(sym_NonTermDec_3, not_null(l_16), not_null(m_16), not_null(n_16));
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
      t = group_by_3(t, f_1, i_1, j_1);
      {
        ATerm s_16 = NULL;
        s_16 = t;
        if(((r_16 != NULL) && (r_16 != s_16)))
          _fail(s_16);
        else
          r_16 = s_16;
        t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, not_null(r_16));
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_57 (ATerm), ATerm i_57 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm j_17 = NULL,l_17 = NULL;
        ATerm k_17 = NULL;
        t = SSLgetAnnotations(not_null(d_17));
        {
          k_17 = t;
          if(((j_17 != NULL) && (j_17 != k_17)))
            _fail(k_17);
          else
            j_17 = k_17;
        }
        {
          t = not_null(e_17);
          {
            ATerm n_17 = NULL;
            t = h_57(t);
            {
              l_17 = t;
              {
                t = not_null(f_17);
                {
                  ATerm p_17 = NULL;
                  t = i_57(t);
                  {
                    n_17 = t;
                    {
                      ATerm q_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_17), not_null(n_17)), not_null(j_17));
                      {
                        q_17 = t;
                        if(((p_17 != NULL) && (p_17 != q_17)))
                          _fail(q_17);
                        else
                          p_17 = q_17;
                      }
                      t = not_null(p_17);
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
  ATerm y_17 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm z_17 = NULL,a_18 = NULL;
      z_17 = t;
      x_17 :
      if(match_cons(z_17, sym_Program_1))
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
    t = option_defined_1(t, k_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_10), not_null(y_17)), term_a_10));
      {
        t = printnl_0(t);
        {
          t = term_s_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm h_10;
        h_10 = t;
        t = SSL_printnl(not_null(f_18), not_null(g_18));
        t = h_10;
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
  ATerm l_18 = NULL;
  l_18 = t;
  t = SSL_implode_string(not_null(l_18));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = k_10;
      {
        ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
        q_18 = t;
        p_18 :
        if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
          {
            r_18 = ATgetFirst((ATermList) q_18);
            s_18 = (ATerm) ATgetNext((ATermList) q_18);
            {
              t = not_null(r_18);
              {
                ATerm l_1 (ATerm t)
                {
                  t = not_null(s_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_1);
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
  ATerm c_19 = NULL;
  ATerm e_19 = NULL;
  c_19 = t;
  {
    ATerm f_19 = NULL;
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
    t = not_null(c_19);
    {
      f_19 = t;
      {
        t = SSL_explode_term(not_null(f_19));
        {
          h_19 = t;
          a_19 :
          if(match_cons(h_19, sym__2))
            {
              i_19 = ATgetArgument(h_19, 0);
              j_19 = ATgetArgument(h_19, 1);
              b_19 :
              if(match_string(i_19, ""))
                {
                  if(((e_19 != NULL) && (e_19 != j_19)))
                    _fail(j_19);
                  else
                    e_19 = j_19;
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
      t = not_null(e_19);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm n_19 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_19);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          t = Nil_0(t);
          t = a_78(t);
        }
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      {
        t = not_null(r_19);
        {
          ATerm m_1 (ATerm t)
          {
            t = not_null(s_19);
            return(t);
          }
          t = at_end_1(t, m_1);
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
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = SSL_explode_string(not_null(x_19));
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
  ATerm b_20 = NULL;
  b_20 = t;
  t = SSL_is_string(not_null(b_20));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_1);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = t_10;
            {
              ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
              k_20 = t;
              j_20 :
              if(match_cons(k_20, sym_Path_1))
                {
                  l_20 = ATgetArgument(k_20, 0);
                  t = not_null(l_20);
                }
              else
                {
                  if(match_cons(k_20, sym_Var_1))
                    {
                      l_20 = ATgetArgument(k_20, 0);
                      {
                        t = not_null(l_20);
                        {
                          ATerm z_10 = t;
                          int a_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_b_11;
                                  return(t);
                                }
                                t = debug_1(t, o_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_20, sym_Prefix_2))
                        {
                          l_20 = ATgetArgument(k_20, 0);
                          m_20 = ATgetArgument(k_20, 1);
                          {
                            ATerm r_20 = NULL,t_20 = NULL;
                            ATerm c_11;
                            c_11 = t;
                            {
                              ATerm s_20 = NULL;
                              t = not_null(l_20);
                              {
                                t = eval_config_0(t);
                                {
                                  s_20 = t;
                                  if(((r_20 != NULL) && (r_20 != s_20)))
                                    _fail(s_20);
                                  else
                                    r_20 = s_20;
                                }
                              }
                            }
                            t = c_11;
                            {
                              ATerm u_20 = NULL;
                              t = not_null(m_20);
                              {
                                t = eval_config_0(t);
                                {
                                  u_20 = t;
                                  if(((t_20 != NULL) && (t_20 != u_20)))
                                    _fail(u_20);
                                  else
                                    t_20 = u_20;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(t_20));
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
  ATerm c_21 = NULL;
  c_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_11, not_null(c_21));
    {
      t = table_get_0(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_11;
            i_11 = t;
            {
              ATerm e_21 = NULL;
              ATerm f_21 = NULL;
              f_21 = t;
              if(((e_21 != NULL) && (e_21 != f_21)))
                _fail(f_21);
              else
                e_21 = f_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_11, not_null(c_21), not_null(e_21));
                t = table_put_0(t);
              }
            }
            t = i_11;
          }
          return(t);
        }
        t = try_1(t, p_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm j_21 = NULL;
      ATerm k_21 = NULL;
      t = term_k_11;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), term_l_11);
        t = geq_0(t);
      }
    }
    t = j_11;
    t = d_94(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym__2))
    {
      p_21 = ATgetArgument(o_21, 0);
      q_21 = ATgetArgument(o_21, 1);
      t = SSL_WriteToTextFile(not_null(p_21), not_null(q_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      t = SSL_WriteToBinaryFile(not_null(x_21), not_null(y_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm n_11 = t;
      int u_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm h_22 = NULL,i_22 = NULL;
            h_22 = t;
            d_22 :
            if(match_cons(h_22, sym_Output_1))
              {
                i_22 = ATgetArgument(h_22, 0);
                if(((g_22 != NULL) && (g_22 != i_22)))
                  _fail(i_22);
                else
                  g_22 = i_22;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_1);
          ;
          LocalPopChoice(u_11);
        }
      else
        {
          t = n_11;
          {
            ATerm j_22 = NULL;
            t = term_v_11;
            {
              j_22 = t;
              if(((g_22 != NULL) && (g_22 != j_22)))
                _fail(j_22);
              else
                g_22 = j_22;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_1, _id);
  }
  t = m_11;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = not_null(g_22);
        return(t);
      }
      t = split_2(t, u_1, _id);
      return(t);
    }
    t = _2(t, _id, t_1);
    {
      ATerm w_11 = t;
      int x_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              ATerm k_22 = NULL;
              k_22 = t;
              f_22 :
              if(!(match_cons(k_22, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_1);
            return(t);
          }
          t = _2(t, v_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(x_11);
        }
      else
        {
          t = w_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm q_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  ATerm y_11;
  y_11 = t;
  t = dtime_0(t);
  t = y_11;
  {
    t = v_71(t);
    {
      ATerm z_11;
      z_11 = t;
      {
        ATerm r_22 = NULL;
        t = dtime_0(t);
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
      }
      t = z_11;
      {
        s_22 = t;
        p_22 :
        if(match_cons(s_22, sym__2))
          {
            t_22 = ATgetArgument(s_22, 0);
            u_22 = ATgetArgument(s_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_22)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_22))), not_null(u_22));
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
ATerm debug_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm a_12;
  a_12 = t;
  {
    ATerm b_23 = NULL,d_23 = NULL;
    ATerm b_12;
    b_12 = t;
    {
      ATerm c_23 = NULL;
      t = d_73(t);
      {
        c_23 = t;
        if(((b_23 != NULL) && (b_23 != c_23)))
          _fail(c_23);
        else
          b_23 = c_23;
      }
    }
    t = b_12;
    {
      ATerm e_23 = NULL;
      e_23 = t;
      if(((d_23 != NULL) && (d_23 != e_23)))
        _fail(e_23);
      else
        d_23 = e_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_23)), not_null(b_23)));
        t = printnl_0(t);
      }
    }
  }
  t = a_12;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL;
      j_23 = t;
      {
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
        t = SSL_ReadFromFile(not_null(i_23));
      }
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm x_1 (ATerm t)
        {
          t = term_i_12;
          return(t);
        }
        t = debug_1(t, x_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm))
{
  ATerm n_23 = NULL,p_23 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm o_23 = NULL;
    t = a_84(t);
    {
      o_23 = t;
      if(((n_23 != NULL) && (n_23 != o_23)))
        _fail(o_23);
      else
        n_23 = o_23;
    }
  }
  t = j_12;
  {
    ATerm q_23 = NULL;
    t = b_84(t);
    {
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(p_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_23 = NULL;
  ATerm s_12;
  s_12 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm x_23 = NULL,y_23 = NULL;
          x_23 = t;
          u_23 :
          if(match_cons(x_23, sym_Input_1))
            {
              y_23 = ATgetArgument(x_23, 0);
              if(((w_23 != NULL) && (w_23 != y_23)))
                _fail(y_23);
              else
                w_23 = y_23;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_1);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          ATerm z_23 = NULL;
          t = term_v_12;
          {
            z_23 = t;
            if(((w_23 != NULL) && (w_23 != z_23)))
              _fail(z_23);
            else
              w_23 = z_23;
          }
        }
      }
  }
  t = s_12;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(w_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm d_24 = NULL;
    d_24 = t;
    c_24 :
    if(!(match_string(d_24, "-v")))
      {
        if(!(match_string(d_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_x_12;
    t = set_config_0(t);
    t = term_c_13;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  t = Option_3(t, b_2, f_2, g_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm g_24 = NULL;
    g_24 = t;
    e_24 :
    if(!(match_string(g_24, "-k")))
      {
        if(!(match_string(g_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm e_13;
    e_13 = t;
    {
      ATerm h_24 = NULL;
      ATerm i_24 = NULL;
      t = string_to_int_0(t);
      {
        i_24 = t;
        if(((h_24 != NULL) && (h_24 != i_24)))
          _fail(i_24);
        else
          h_24 = i_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(h_24));
        t = set_config_0(t);
      }
    }
    t = e_13;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, l_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_string_to_int(not_null(l_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        ATerm t_24 = NULL;
        t_24 = t;
        o_24 :
        if(!(match_string(t_24, "-S")))
          {
            if(!(match_string(t_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_o_13;
        t = set_config_0(t);
        t = term_p_13;
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = term_q_13;
        return(t);
      }
      t = Option_3(t, m_2, o_2, p_2);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm u_24 = NULL;
              u_24 = t;
              p_24 :
              if(!(match_string(u_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              ATerm x_24 = NULL;
              ATerm x_13;
              x_13 = t;
              {
                ATerm v_24 = NULL;
                ATerm w_24 = NULL;
                t = string_to_int_0(t);
                {
                  w_24 = t;
                  if(((v_24 != NULL) && (v_24 != w_24)))
                    _fail(w_24);
                  else
                    v_24 = w_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(v_24));
                  t = set_config_0(t);
                }
              }
              t = x_13;
              {
                ATerm y_24 = NULL;
                y_24 = t;
                if(((x_24 != NULL) && (x_24 != y_24)))
                  _fail(y_24);
                else
                  x_24 = y_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_24));
              }
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              t = term_z_13;
              return(t);
            }
            t = ArgOption_3(t, q_2, v_2, w_2);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm x_2 (ATerm t)
              {
                ATerm z_24 = NULL;
                z_24 = t;
                s_24 :
                if(!(match_string(z_24, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_b_14;
                t = set_config_0(t);
                t = term_g_14;
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_h_14;
                return(t);
              }
              t = Option_3(t, x_2, c_3, d_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    c_25 :
    if(!(match_string(f_25, "-o")))
      {
        if(!(match_string(f_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm i_25 = NULL;
    ATerm q_14;
    q_14 = t;
    {
      ATerm g_25 = NULL;
      ATerm h_25 = NULL;
      h_25 = t;
      if(((g_25 != NULL) && (g_25 != h_25)))
        _fail(h_25);
      else
        g_25 = h_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(g_25));
        t = set_config_0(t);
      }
    }
    t = q_14;
    {
      ATerm j_25 = NULL;
      j_25 = t;
      if(((i_25 != NULL) && (i_25 != j_25)))
        _fail(j_25);
      else
        i_25 = j_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_25));
    }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = ArgOption_3(t, e_3, f_3, g_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = x_14;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm n_25 = NULL;
          n_25 = t;
          m_25 :
          if(!(match_string(n_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_d_15;
          t = set_config_0(t);
          t = term_e_15;
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_h_15;
          return(t);
        }
        t = Option_3(t, i_3, l_3, m_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,m_27 = NULL,n_27 = NULL;
  t_25 = t;
  r_25 :
  if(match_string(t_25, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
        {
          u_25 = ATgetFirst((ATermList) t_25);
          v_25 = (ATerm) ATgetNext((ATermList) t_25);
          s_25 :
          if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
            {
              m_27 = ATgetFirst((ATermList) v_25);
              n_27 = (ATerm) ATgetNext((ATermList) v_25);
              {
                ATerm r_27 = NULL;
                ATerm j_15;
                j_15 = t;
                {
                  t = not_null(u_25);
                  t = j_0(t);
                }
                t = j_15;
                {
                  ATerm s_27 = NULL;
                  t = not_null(m_27);
                  {
                    t = k_0(t);
                    {
                      s_27 = t;
                      if(((r_27 != NULL) && (r_27 != s_27)))
                        _fail(s_27);
                      else
                        r_27 = s_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_27)), not_null(r_27));
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
  ATerm n_3 (ATerm t)
  {
    ATerm b_28 = NULL;
    b_28 = t;
    y_27 :
    if(!(match_string(b_28, "-i")))
      {
        if(!(match_string(b_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm k_28 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm h_28 = NULL;
      ATerm j_28 = NULL;
      j_28 = t;
      if(((h_28 != NULL) && (h_28 != j_28)))
        _fail(j_28);
      else
        h_28 = j_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(h_28));
        t = set_config_0(t);
      }
    }
    t = l_15;
    {
      ATerm l_28 = NULL;
      l_28 = t;
      if(((k_28 != NULL) && (k_28 != l_28)))
        _fail(l_28);
      else
        k_28 = l_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_28));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm i_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(o_16);
          }
        else
          {
            t = i_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, term_p_16));
  {
    t = printnl_0(t);
    {
      t = term_s_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = SSL_TicksToSeconds(not_null(p_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        ATerm q_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_28), not_null(w_28));
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = q_16;
            t = SSL_addr(not_null(v_28), not_null(w_28));
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_97(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
        i_29 = t;
        h_29 :
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            j_29 = ATgetFirst((ATermList) i_29);
            k_29 = (ATerm) ATgetNext((ATermList) i_29);
            {
              ATerm n_29 = NULL;
              ATerm o_29 = NULL;
              t = not_null(k_29);
              {
                t = foldr_2(t, p_97, q_97);
                {
                  o_29 = t;
                  if(((n_29 != NULL) && (n_29 != o_29)))
                    _fail(o_29);
                  else
                    n_29 = o_29;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(n_29));
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
  ATerm a_30 = NULL;
  ATerm c_30 = NULL;
  a_30 = t;
  {
    ATerm d_30 = NULL;
    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
    t = not_null(a_30);
    {
      d_30 = t;
      {
        t = SSL_explode_term(not_null(d_30));
        {
          f_30 = t;
          u_29 :
          if(match_cons(f_30, sym__2))
            {
              g_30 = ATgetArgument(f_30, 0);
              h_30 = ATgetArgument(f_30, 1);
              if(((c_30 != NULL) && (c_30 != h_30)))
                _fail(h_30);
              else
                c_30 = h_30;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_30);
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
    ATerm v_3 (ATerm t)
    {
      t = term_a_9;
      return(t);
    }
    t = crush_2(t, v_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm w_16;
        w_16 = t;
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_30), not_null(p_30));
              ;
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              t = SSL_gtr(not_null(o_30), not_null(p_30));
            }
        }
        t = w_16;
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
  ATerm y_30 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      z_30 = t;
      x_30 :
      if(match_cons(z_30, sym__2))
        {
          a_31 = ATgetArgument(z_30, 0);
          b_31 = ATgetArgument(z_30, 1);
          {
            if(((y_30 != NULL) && (y_30 != a_31)))
              _fail(a_31);
            else
              y_30 = a_31;
            if(((y_30 != NULL) && (y_30 != b_31)))
              _fail(b_31);
            else
              y_30 = b_31;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm e_31 = NULL;
      ATerm f_31 = NULL;
      t = term_k_11;
      {
        t = get_config_0(t);
        {
          f_31 = t;
          if(((e_31 != NULL) && (e_31 != f_31)))
            _fail(f_31);
          else
            e_31 = f_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), term_s_7);
        t = geq_0(t);
      }
    }
    t = b_17;
    t = c_94(t);
    return(t);
  }
  t = try_1(t, a_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm j_31 = NULL,l_31 = NULL;
    ATerm g_17;
    g_17 = t;
    {
      ATerm k_31 = NULL;
      t = run_time_0(t);
      {
        k_31 = t;
        if(((j_31 != NULL) && (j_31 != k_31)))
          _fail(k_31);
        else
          j_31 = k_31;
      }
    }
    t = g_17;
    {
      ATerm m_31 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), not_null(j_31)), term_i_17), not_null(l_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_4);
  {
    t = term_a_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_Version_0))
    {
      ATerm v_31 = NULL,x_31 = NULL;
      ATerm o_17;
      o_17 = t;
      {
        ATerm w_31 = NULL;
        t = SSLgetAnnotations(not_null(t_31));
        {
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
        }
      }
      t = o_17;
      {
        ATerm y_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_31));
        {
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
        }
        t = not_null(x_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_4);
  t = t_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  t = SSL_table_create(not_null(d_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  {
    ATerm v_17;
    v_17 = t;
    {
      t = term_w_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_b_18, not_null(h_32));
          t = table_put_0(t);
        }
      }
    }
    t = v_17;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  t = SSL_table_destroy(not_null(l_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = SSL_exit(not_null(p_32));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(((ATgetType(t_32) == AT_LIST) && ATisEmpty(t_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
        {
          u_32 = ATgetFirst((ATermList) t_32);
          v_32 = (ATerm) ATgetNext((ATermList) t_32);
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
  ATerm c_18;
  c_18 = t;
  {
    ATerm y_32 = NULL;
    ATerm b_33 = NULL;
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm z_32 = NULL;
          ATerm a_33 = NULL;
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
          t = (ATerm) ATinsert(ATempty, not_null(z_32));
        }
      }
    {
      b_33 = t;
      if(((y_32 != NULL) && (y_32 != b_33)))
        _fail(b_33);
      else
        y_32 = b_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(y_32));
      t = printnl_0(t);
    }
  }
  t = c_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm e_33 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = Cons_2(t, l_77, e_33);
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  n_33 = t;
  k_33 :
  if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
    {
      l_33 = ATgetFirst((ATermList) n_33);
      m_33 = (ATerm) ATgetNext((ATermList) n_33);
      {
        ATerm q_33 = NULL;
        t = not_null(m_33);
        {
          ATerm m_18;
          m_18 = t;
          {
            ATerm r_33 = NULL,t_33 = NULL,v_33 = NULL;
            ATerm n_18;
            n_18 = t;
            {
              ATerm s_33 = NULL;
              t = i_0(t);
              {
                s_33 = t;
                if(((r_33 != NULL) && (r_33 != s_33)))
                  _fail(s_33);
                else
                  r_33 = s_33;
              }
            }
            t = n_18;
            {
              ATerm u_33 = NULL;
              t = not_null(l_33);
              {
                t = g_0(t);
                {
                  u_33 = t;
                  if(((t_33 != NULL) && (t_33 != u_33)))
                    _fail(u_33);
                  else
                    t_33 = u_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_33)), not_null(t_33));
                {
                  v_33 = t;
                  if(((q_33 != NULL) && (q_33 != v_33)))
                    _fail(v_33);
                  else
                    q_33 = v_33;
                }
              }
            }
          }
          t = m_18;
          {
            ATerm d_4 (ATerm t)
            {
              t = not_null(q_33);
              return(t);
            }
            t = reverse_acc_2(t, g_0, d_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_33) == AT_LIST) && ATisEmpty(n_33)))
        {
          {
            t = term_k_6;
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
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_Program_1))
    {
      h_34 = ATgetArgument(g_34, 0);
      {
        ATerm k_34 = NULL,m_34 = NULL;
        ATerm l_34 = NULL;
        t = SSLgetAnnotations(not_null(g_34));
        {
          l_34 = t;
          if(((k_34 != NULL) && (k_34 != l_34)))
            _fail(l_34);
          else
            k_34 = l_34;
        }
        {
          t = not_null(h_34);
          {
            ATerm o_34 = NULL;
            t = d_59(t);
            {
              m_34 = t;
              {
                ATerm p_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_34)), not_null(k_34));
                {
                  p_34 = t;
                  if(((o_34 != NULL) && (o_34 != p_34)))
                    _fail(p_34);
                  else
                    o_34 = p_34;
                }
                t = not_null(o_34);
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
  ATerm y_34 = NULL;
  ATerm o_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_34 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
      }
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = o_18;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            ATerm a_35 = NULL;
            a_35 = t;
            if(((y_34 != NULL) && (y_34 != a_35)))
              _fail(a_35);
            else
              y_34 = a_35;
            return(t);
          }
          t = Program_1(t, g_4);
          return(t);
        }
        t = option_defined_1(t, f_4);
      }
    }
  {
    ATerm l_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        t = not_null(y_34);
        return(t);
      }
      t = short_description_1(t, m_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, l_4);
    {
      t = term_u_18;
      {
        t = echo_0(t);
        {
          t = term_x_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm b_35 = NULL;
                  ATerm c_35 = NULL;
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_y_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_4);
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm d_35 = NULL;
                    ATerm e_35 = NULL;
                    ATerm t_4 (ATerm t)
                    {
                      t = not_null(y_34);
                      return(t);
                    }
                    t = long_description_1(t, t_4);
                    {
                      e_35 = t;
                      if(((d_35 != NULL) && (d_35 != e_35)))
                        _fail(e_35);
                      else
                        d_35 = e_35;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_35)), term_z_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_4);
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
  ATerm d_19;
  d_19 = t;
  {
    ATerm k_35 = NULL;
    ATerm l_35 = NULL;
    l_35 = t;
    if(((k_35 != NULL) && (k_35 != l_35)))
      _fail(l_35);
    else
      k_35 = l_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(k_35)));
      t = printnl_0(t);
    }
  }
  t = d_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm g_19;
  g_19 = t;
  {
    t = e_73(t);
    t = debug_0(t);
  }
  t = g_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_59 (ATerm))
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Undefined_1))
    {
      t_35 = ATgetArgument(s_35, 0);
      {
        ATerm w_35 = NULL,y_35 = NULL;
        ATerm x_35 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
        {
          t = not_null(t_35);
          {
            ATerm a_36 = NULL;
            t = e_59(t);
            {
              y_35 = t;
              {
                ATerm b_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_35)), not_null(w_35));
                {
                  b_36 = t;
                  if(((a_36 != NULL) && (a_36 != b_36)))
                    _fail(b_36);
                  else
                    a_36 = b_36;
                }
                t = not_null(a_36);
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
ATerm fetch_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm g_36 (ATerm t)
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_77, _id);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = Cons_2(t, _id, g_36);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_86 (ATerm))
{
  t = fetch_1(t, a_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Help_0))
    {
      ATerm n_36 = NULL,p_36 = NULL;
      ATerm m_19;
      m_19 = t;
      {
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(l_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
      }
      t = m_19;
      {
        ATerm q_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        t = not_null(p_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm o_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_76(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = o_19;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym__2))
    {
      x_36 = ATgetArgument(w_36, 0);
      y_36 = ATgetArgument(w_36, 1);
      t = SSL_table_get(not_null(x_36), not_null(y_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym__3))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      i_37 = ATgetArgument(f_37, 2);
      {
        ATerm u_19;
        u_19 = t;
        {
          ATerm m_37 = NULL;
          ATerm n_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), not_null(h_37));
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                t = (ATerm) ATempty;
              }
            {
              n_37 = t;
              if(((m_37 != NULL) && (m_37 != n_37)))
                _fail(n_37);
              else
                m_37 = n_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_37), not_null(h_37), (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(i_37)));
            t = table_put_0(t);
          }
        }
        t = u_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm r_37 = NULL;
  ATerm s_37 = NULL;
  t = term_k_6;
  {
    t = f_87(t);
    {
      s_37 = t;
      if(((r_37 != NULL) && (r_37 != s_37)))
        _fail(s_37);
      else
        r_37 = s_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_18, term_w_18, not_null(r_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_string(y_37, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(y_37) == AT_LIST) && !(ATisEmpty(y_37))))
        {
          z_37 = ATgetFirst((ATermList) y_37);
          a_38 = (ATerm) ATgetNext((ATermList) y_37);
          {
            ATerm d_38 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              t = not_null(z_37);
              t = a_0(t);
            }
            t = y_19;
            {
              ATerm e_38 = NULL;
              t = term_k_6;
              {
                t = c_0(t);
                {
                  e_38 = t;
                  if(((d_38 != NULL) && (d_38 != e_38)))
                    _fail(e_38);
                  else
                    d_38 = e_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_38)), not_null(d_38));
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
  ATerm u_4 (ATerm t)
  {
    ATerm j_38 = NULL;
    j_38 = t;
    i_38 :
    if(!(match_string(j_38, "--help")))
      {
        if(!(match_string(j_38, "-h")))
          {
            if(!(match_string(j_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_a_20;
    {
      t = set_config_0(t);
      t = term_c_20;
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_d_20;
    return(t);
  }
  t = Option_3(t, u_4, v_4, w_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
    {
      n_38 = ATgetFirst((ATermList) m_38);
      o_38 = (ATerm) ATgetNext((ATermList) m_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_58 (ATerm), ATerm r_58 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
    {
      z_38 = ATgetFirst((ATermList) y_38);
      a_39 = (ATerm) ATgetNext((ATermList) y_38);
      {
        ATerm h_39 = NULL,j_39 = NULL;
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(y_38));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        {
          t = not_null(z_38);
          {
            ATerm l_39 = NULL;
            t = q_58(t);
            {
              j_39 = t;
              {
                t = not_null(a_39);
                {
                  ATerm n_39 = NULL;
                  t = r_58(t);
                  {
                    l_39 = t;
                    {
                      ATerm o_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_39)), not_null(j_39)), not_null(h_39));
                      {
                        o_39 = t;
                        if(((n_39 != NULL) && (n_39 != o_39)))
                          _fail(o_39);
                        else
                          n_39 = o_39;
                      }
                      t = not_null(n_39);
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
  ATerm y_39 = NULL;
  y_39 = t;
  x_39 :
  if(((ATgetType(y_39) == AT_LIST) && ATisEmpty(y_39)))
    {
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm e_20;
        e_20 = t;
        {
          ATerm b_40 = NULL;
          t = SSLgetAnnotations(not_null(y_39));
          {
            b_40 = t;
            if(((a_40 != NULL) && (a_40 != b_40)))
              _fail(b_40);
            else
              a_40 = b_40;
          }
        }
        t = e_20;
        {
          ATerm d_40 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_40));
          {
            d_40 = t;
            if(((c_40 != NULL) && (c_40 != d_40)))
              _fail(d_40);
            else
              c_40 = d_40;
          }
          t = not_null(c_40);
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
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym__2))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_11, not_null(k_40), not_null(l_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm f_20;
  f_20 = t;
  {
    ATerm x_4 (ATerm t)
    {
      t = term_g_20;
      t = d_87(t);
      return(t);
    }
    t = try_1(t, x_4);
  }
  t = f_20;
  {
    ATerm y_4 (ATerm t)
    {
      ATerm w_40 = NULL;
      ATerm h_20;
      h_20 = t;
      {
        ATerm u_40 = NULL;
        ATerm v_40 = NULL;
        v_40 = t;
        if(((u_40 != NULL) && (u_40 != v_40)))
          _fail(v_40);
        else
          u_40 = v_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_17, not_null(u_40));
          t = set_config_0(t);
        }
      }
      t = h_20;
      {
        ATerm x_40 = NULL;
        x_40 = t;
        if(((w_40 != NULL) && (w_40 != x_40)))
          _fail(x_40);
        else
          w_40 = x_40;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_40));
      }
      return(t);
    }
    ATerm z_4 (ATerm t)
    {
      ATerm i_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              {
                t = d_87(t);
                t = Cons_2(t, _id, z_4);
              }
            }
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = i_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_4, z_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
    g_41 = t;
    c_41 :
    if(match_cons(g_41, sym__3))
      {
        h_41 = ATgetArgument(g_41, 0);
        i_41 = ATgetArgument(g_41, 1);
        j_41 = ATgetArgument(g_41, 2);
        {
          if(((d_41 != NULL) && (d_41 != h_41)))
            _fail(h_41);
          else
            d_41 = h_41;
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
              t = SSL_table_put(not_null(d_41), not_null(e_41), not_null(f_41));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm m_41 = NULL;
  ATerm v_20;
  v_20 = t;
  {
    t = term_w_20;
    t = table_put_0(t);
  }
  t = v_20;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_5);
    {
      ATerm f_5 (ATerm t)
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21;
            b_21 = t;
            {
              ATerm d_21 = t;
              int g_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_19;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(g_21);
                }
              else
                {
                  t = d_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_21;
            {
              t = system_usage_0(t);
              {
                t = term_a_9;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm g_5 (ATerm t)
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm n_41 = NULL;
                  n_41 = t;
                  if(((m_41 != NULL) && (m_41 != n_41)))
                    _fail(n_41);
                  else
                    m_41 = n_41;
                  return(t);
                }
                t = Undefined_1(t, h_5);
                return(t);
              }
              t = option_defined_1(t, g_5);
              {
                ATerm i_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_41)), term_h_21);
                  return(t);
                }
                t = say_1(t, i_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_s_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_5);
      {
        ATerm i_21;
        i_21 = t;
        {
          t = term_v_18;
          t = table_destroy_0(t);
        }
        t = i_21;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  t = parse_options_1(t, z_71);
  {
    t = store_options_0(t);
    {
      t = b_72(t);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_72);
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            {
              ATerm r_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_72(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = r_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_72 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_72(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_5, s_72, t_72, p_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_21;
      z_21 = t;
      {
        ATerm q_41 = NULL;
        ATerm r_41 = NULL;
        t = term_h_17;
        {
          t = get_config_0(t);
          {
            r_41 = t;
            if(((q_41 != NULL) && (q_41 != r_41)))
              _fail(r_41);
            else
              q_41 = r_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(q_41)));
          t = printnl_0(t);
        }
      }
      t = z_21;
      return(t);
    }
    t = if_verbose2_1(t, y_5);
    return(t);
  }
  t = iowrap_4(t, k_72, l_72, m_72, x_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm))
{
  t = iowrap_3(t, i_72, j_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = _2(t, _id, f_72);
    return(t);
  }
  t = iowrap_2(t, z_5, _fail);
  return(t);
}
ATerm io_astratego2tg_0 (ATerm t)
{
  t = iowrap_1(t, stratego_ast_to_tg_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_astratego2tg_0(t);
  return(t);
}
