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
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_p_16;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_z_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_n_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Param", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_String_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Int_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_j_6);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_z_8);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_j_6);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_j_6);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_j_6);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__3, term_v_18, term_w_18, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm filter_1 (ATerm, ATerm u_81 (ATerm));
ATerm build_group_by_pairs_4 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm make_set_0 (ATerm);
ATerm group_by_3 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_99 (ATerm));
ATerm Param_0 (ATerm);
ATerm to_dec_prod_item_0 (ATerm);
ATerm to_build_in_prod_item_0 (ATerm);
ATerm to_prod_item_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_99 (ATerm));
ATerm add_param_rule_0 (ATerm);
ATerm inc_0 (ATerm);
ATerm map_with_index_1 (ATerm, ATerm q_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_99 (ATerm));
ATerm scope_2 (ATerm, ATerm j_99 (ATerm), ATerm k_99 (ATerm));
ATerm to_prod_items_0 (ATerm);
ATerm length_0 (ATerm);
ATerm get_nt_params_0 (ATerm);
ATerm get_nt_name_0 (ATerm);
ATerm get_nt_0 (ATerm);
ATerm to_NonTermDec_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm));
ATerm union_1 (ATerm, ATerm r_97 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm));
ATerm crush_3 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm collect_om_1 (ATerm, ATerm h_96 (ATerm));
ATerm collect_1 (ATerm, ATerm j_96 (ATerm));
ATerm stratego_ast_to_tg_0 (ATerm);
ATerm _2 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_71 (ATerm));
ATerm debug_1 (ATerm, ATerm b_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm crush_2 (ATerm, ATerm g_97 (ATerm), ATerm h_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_87 (ATerm));
ATerm map_1 (ATerm, ATerm v_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_87 (ATerm));
ATerm Program_1 (ATerm, ATerm b_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm a_72 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_72 (ATerm), ATerm h_72 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_72 (ATerm));
ATerm io_astratego2tg_0 (ATerm);
ATerm main_0 (ATerm);
ATerm filter_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = filter_1(t, u_81);
              return(t);
            }
            t = Cons_2(t, u_81, b_0);
            LocalPopChoice(i_6);
          }
        else
          {
            t = h_6;
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
                    t = filter_1(t, u_81);
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
ATerm build_group_by_pairs_4 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm), ATerm q_71 (ATerm))
{
  ATerm a_2 = NULL;
  ATerm c_2 = NULL;
  a_2 = t;
  {
    ATerm e_2 = NULL;
    t = term_j_6;
    {
      t = q_71(t);
      {
        ATerm e_0 (ATerm t)
        {
          ATerm k_6;
          k_6 = t;
          {
            ATerm d_2 = NULL;
            t = n_71(t);
            {
              d_2 = t;
              if(((a_2 != NULL) && (a_2 != d_2)))
                _fail(d_2);
              else
                a_2 = d_2;
            }
          }
          t = k_6;
          return(t);
        }
        t = filter_1(t, e_0);
        {
          t = map_1(t, o_71);
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
      t = p_71(t);
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
  t = foldr_3(t, f_0, union_0, h_0);
  return(t);
}
ATerm group_by_3 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    t = map_1(t, k_71);
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
          t = build_group_by_pairs_4(t, k_71, l_71, m_71, o_0);
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
ATerm rewrite_1 (ATerm t, ATerm n_99 (ATerm))
{
  ATerm h_3 = NULL;
  ATerm j_3 = NULL;
  h_3 = t;
  {
    ATerm k_3 = NULL;
    t = term_j_6;
    {
      t = n_99(t);
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
            t = term_n_6;
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
                if(match_string(y_3, "c_0"))
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
            ATerm o_6 = t;
            int p_6 = stack_ptr;
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
                LocalPopChoice(p_6);
              }
            else
              {
                t = o_6;
                {
                  ATerm q_6 = t;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_4));
                      t = Param_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_6;
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
          t = term_r_6;
        }
      else
        {
          if(match_string(d_5, "Int"))
            {
              t = term_s_6;
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
  ATerm t_6 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = to_build_in_prod_item_0(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = t_6;
      t = to_dec_prod_item_0(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_99 (ATerm))
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
        ATerm e_7;
        e_7 = t;
        {
          ATerm t_5 = NULL;
          ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
          t = l_99(t);
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
                    ATerm f_7 = t;
                    int m_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), term_o_7);
                        t = table_get_0(t);
                        LocalPopChoice(m_7);
                      }
                    else
                      {
                        t = f_7;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_5), term_o_7, (ATerm) ATinsert(CheckATermList(not_null(s_5)), (ATerm) ATinsert(CheckATermList(not_null(r_5)), not_null(m_5))));
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
        t = e_7;
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
            ATerm p_7;
            p_7 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_6)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_7, not_null(e_6)));
              {
                ATerm q_0 (ATerm t)
                {
                  t = term_n_6;
                  return(t);
                }
                t = assert_1(t, q_0);
              }
            }
            t = p_7;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_6), term_r_7);
    t = add_0(t);
  }
  return(t);
}
ATerm map_with_index_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm w_6 = NULL;
  ATerm x_6 = NULL;
  x_6 = t;
  if(((w_6 != NULL) && (w_6 != x_6)))
    _fail(x_6);
  else
    w_6 = x_6;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_7, not_null(w_6));
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
                      ATerm s_7;
                      s_7 = t;
                      {
                        ATerm h_7 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_6), not_null(b_7));
                        {
                          t = q_79(t);
                          {
                            h_7 = t;
                            if(((g_7 != NULL) && (g_7 != h_7)))
                              _fail(h_7);
                            else
                              g_7 = h_7;
                          }
                        }
                      }
                      t = s_7;
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
        ATerm t_7;
        t_7 = t;
        {
          ATerm i_8 = NULL;
          ATerm j_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_8), not_null(f_8));
          {
            ATerm y_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = y_7;
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
        t = t_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_99 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  ATerm a_8;
  a_8 = t;
  {
    ATerm t_8 = NULL;
    ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
    t = i_99(t);
    {
      t_8 = t;
      {
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
        {
          ATerm b_8 = t;
          int g_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), term_o_7);
              t = table_get_0(t);
              LocalPopChoice(g_8);
            }
          else
            {
              t = b_8;
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
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_8), term_o_7, not_null(q_8));
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
  t = a_8;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm))
{
  ATerm h_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_77(t);
      t = l_77(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = h_8;
      {
        t = l_77(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm e_9 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm f_9 = NULL;
    ATerm g_9 = NULL;
    t = h_99(t);
    {
      f_9 = t;
      {
        if(((e_9 != NULL) && (e_9 != f_9)))
          _fail(f_9);
        else
          e_9 = f_9;
        {
          ATerm h_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), term_o_7);
          {
            ATerm m_8 = t;
            int n_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_8);
              }
            else
              {
                t = m_8;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_9), term_o_7, (ATerm) ATinsert(CheckATermList(not_null(g_9)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_8;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm j_99 (ATerm), ATerm k_99 (ATerm))
{
  t = begin_scope_1(t, j_99);
  {
    ATerm u_0 (ATerm t)
    {
      t = end_scope_1(t, j_99);
      return(t);
    }
    t = restore_always_2(t, k_99, u_0);
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
          t = term_n_6;
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm l_10 = NULL;
          t = not_null(v_9);
          {
            ATerm o_8 = t;
            int y_8 = stack_ptr;
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
                LocalPopChoice(y_8);
                t = map_with_index_1(t, add_param_rule_0);
              }
            else
              {
                t = o_8;
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
    t = term_z_8;
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    t = term_r_7;
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
          t = term_z_8;
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
ATerm HdMember_p__2 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm))
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
    {
      i_13 = ATgetFirst((ATermList) h_13);
      j_13 = (ATerm) ATgetNext((ATermList) h_13);
      {
        t = w_97(t);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm m_13 = NULL;
            m_13 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(m_13));
              t = v_97(t);
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
ATerm union_1 (ATerm t, ATerm r_97 (ATerm))
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
            ATerm a_9 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_13);
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
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(u_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_97, b_1);
                      t = y_13(t);
                      LocalPopChoice(d_9);
                    }
                  else
                    {
                      t = c_9;
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
ATerm foldr_3 (ATerm t, ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm g_98 (ATerm))
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_98(t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
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
              ATerm k_9;
              k_9 = t;
              {
                ATerm j_14 = NULL;
                t = not_null(e_14);
                {
                  t = g_98(t);
                  {
                    j_14 = t;
                    if(((i_14 != NULL) && (i_14 != j_14)))
                      _fail(j_14);
                    else
                      i_14 = j_14;
                  }
                }
              }
              t = k_9;
              {
                ATerm l_14 = NULL;
                t = not_null(f_14);
                {
                  t = foldr_3(t, e_98, f_98, g_98);
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
                  t = f_98(t);
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
ATerm crush_3 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm))
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
      t = foldr_3(t, i_97, j_97, k_97);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm h_96 (ATerm))
{
  ATerm h_15 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL;
        ATerm g_15 = NULL;
        t = h_96(t);
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
        t = (ATerm) ATinsert(ATempty, not_null(f_15));
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm c_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, c_1, union_0, h_15);
        }
      }
    return(t);
  }
  t = h_15(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm j_96 (ATerm))
{
  t = collect_om_1(t, j_96);
  return(t);
}
ATerm stratego_ast_to_tg_0 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
    u_15 = t;
    j_15 :
    if(match_cons(u_15, sym_OpDecl_2))
      {
        v_15 = ATgetArgument(u_15, 0);
        w_15 = ATgetArgument(u_15, 1);
        {
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_1(t, d_1);
  {
    t = map_1(t, to_NonTermDec_0);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
        x_15 = t;
        l_15 :
        if(match_cons(x_15, sym_NonTermDec_3))
          {
            y_15 = ATgetArgument(x_15, 0);
            z_15 = ATgetArgument(x_15, 1);
            a_16 = ATgetArgument(x_15, 2);
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), not_null(z_15));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm f_1 (ATerm t)
      {
        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
        d_16 = t;
        n_15 :
        if(match_cons(d_16, sym_NonTermDec_3))
          {
            e_16 = ATgetArgument(d_16, 0);
            f_16 = ATgetArgument(d_16, 1);
            g_16 = ATgetArgument(d_16, 2);
            o_15 :
            if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
              {
                h_16 = ATgetFirst((ATermList) g_16);
                i_16 = (ATerm) ATgetNext((ATermList) g_16);
                p_15 :
                if(((ATgetType(i_16) == AT_LIST) && ATisEmpty(i_16)))
                  {
                    t = not_null(h_16);
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
      ATerm i_1 (ATerm t)
      {
        ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
        k_16 = t;
        r_15 :
        if(match_cons(k_16, sym__2))
          {
            l_16 = ATgetArgument(k_16, 0);
            o_16 = ATgetArgument(k_16, 1);
            s_15 :
            if(match_cons(l_16, sym__2))
              {
                m_16 = ATgetArgument(l_16, 0);
                n_16 = ATgetArgument(l_16, 1);
                t = (ATerm) ATmakeAppl(sym_NonTermDec_3, not_null(m_16), not_null(n_16), not_null(o_16));
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
      t = group_by_3(t, e_1, f_1, i_1);
      {
        ATerm t_16 = NULL;
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
        t = (ATerm) ATmakeAppl(sym_TreeGrammar_1, not_null(s_16));
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      {
        ATerm k_17 = NULL,m_17 = NULL;
        ATerm l_17 = NULL;
        t = SSLgetAnnotations(not_null(e_17));
        {
          l_17 = t;
          if(((k_17 != NULL) && (k_17 != l_17)))
            _fail(l_17);
          else
            k_17 = l_17;
        }
        {
          t = not_null(f_17);
          {
            ATerm o_17 = NULL;
            t = f_57(t);
            {
              m_17 = t;
              {
                t = not_null(g_17);
                {
                  ATerm q_17 = NULL;
                  t = g_57(t);
                  {
                    o_17 = t;
                    {
                      ATerm r_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_17), not_null(o_17)), not_null(k_17));
                      {
                        r_17 = t;
                        if(((q_17 != NULL) && (q_17 != r_17)))
                          _fail(r_17);
                        else
                          q_17 = r_17;
                      }
                      t = not_null(q_17);
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
  ATerm z_17 = NULL;
  ATerm n_9;
  n_9 = t;
  {
    ATerm j_1 (ATerm t)
    {
      ATerm a_18 = NULL,b_18 = NULL;
      a_18 = t;
      y_17 :
      if(match_cons(a_18, sym_Program_1))
        {
          b_18 = ATgetArgument(a_18, 0);
          if(((z_17 != NULL) && (z_17 != b_18)))
            _fail(b_18);
          else
            z_17 = b_18;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), not_null(z_17)), term_s_9));
      {
        t = printnl_0(t);
        {
          t = term_r_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_9;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      {
        ATerm b_10;
        b_10 = t;
        t = SSL_printnl(not_null(g_18), not_null(h_18));
        t = b_10;
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
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_implode_string(not_null(m_18));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = h_10;
      {
        ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
        r_18 = t;
        q_18 :
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            s_18 = ATgetFirst((ATermList) r_18);
            t_18 = (ATerm) ATgetNext((ATermList) r_18);
            {
              t = not_null(s_18);
              {
                ATerm k_1 (ATerm t)
                {
                  t = not_null(t_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_1);
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
  ATerm d_19 = NULL;
  ATerm f_19 = NULL;
  d_19 = t;
  {
    ATerm g_19 = NULL;
    ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
    t = not_null(d_19);
    {
      g_19 = t;
      {
        t = SSL_explode_term(not_null(g_19));
        {
          i_19 = t;
          b_19 :
          if(match_cons(i_19, sym__2))
            {
              j_19 = ATgetArgument(i_19, 0);
              k_19 = ATgetArgument(i_19, 1);
              c_19 :
              if(match_string(j_19, ""))
                {
                  if(((f_19 != NULL) && (f_19 != k_19)))
                    _fail(k_19);
                  else
                    f_19 = k_19;
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
      t = not_null(f_19);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm o_19 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_19);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          t = Nil_0(t);
          t = k_78(t);
        }
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym__2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      {
        t = not_null(s_19);
        {
          ATerm l_1 (ATerm t)
          {
            t = not_null(t_19);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_explode_string(not_null(y_19));
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
  ATerm c_20 = NULL;
  c_20 = t;
  t = SSL_is_string(not_null(c_20));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_1);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              l_20 = t;
              k_20 :
              if(match_cons(l_20, sym_Path_1))
                {
                  m_20 = ATgetArgument(l_20, 0);
                  t = not_null(m_20);
                }
              else
                {
                  if(match_cons(l_20, sym_Var_1))
                    {
                      m_20 = ATgetArgument(l_20, 0);
                      {
                        t = not_null(m_20);
                        {
                          ATerm y_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = y_10;
                              {
                                ATerm n_1 (ATerm t)
                                {
                                  t = term_a_11;
                                  return(t);
                                }
                                t = debug_1(t, n_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_20, sym_Prefix_2))
                        {
                          m_20 = ATgetArgument(l_20, 0);
                          n_20 = ATgetArgument(l_20, 1);
                          {
                            ATerm s_20 = NULL,u_20 = NULL;
                            ATerm b_11;
                            b_11 = t;
                            {
                              ATerm t_20 = NULL;
                              t = not_null(m_20);
                              {
                                t = eval_config_0(t);
                                {
                                  t_20 = t;
                                  if(((s_20 != NULL) && (s_20 != t_20)))
                                    _fail(t_20);
                                  else
                                    s_20 = t_20;
                                }
                              }
                            }
                            t = b_11;
                            {
                              ATerm v_20 = NULL;
                              t = not_null(n_20);
                              {
                                t = eval_config_0(t);
                                {
                                  v_20 = t;
                                  if(((u_20 != NULL) && (u_20 != v_20)))
                                    _fail(v_20);
                                  else
                                    u_20 = v_20;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_20), not_null(u_20));
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
  ATerm d_21 = NULL;
  d_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(d_21));
    {
      t = table_get_0(t);
      {
        ATerm o_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_11;
            d_11 = t;
            {
              ATerm f_21 = NULL;
              ATerm g_21 = NULL;
              g_21 = t;
              if(((f_21 != NULL) && (f_21 != g_21)))
                _fail(g_21);
              else
                f_21 = g_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_11, not_null(d_21), not_null(f_21));
                t = table_put_0(t);
              }
            }
            t = d_11;
          }
          return(t);
        }
        t = try_1(t, o_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm k_21 = NULL;
      ATerm l_21 = NULL;
      t = term_j_11;
      {
        t = get_config_0(t);
        {
          l_21 = t;
          if(((k_21 != NULL) && (k_21 != l_21)))
            _fail(l_21);
          else
            k_21 = l_21;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), term_k_11);
        t = geq_0(t);
      }
    }
    t = i_11;
    t = m_94(t);
    return(t);
  }
  t = try_1(t, p_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym__2))
    {
      q_21 = ATgetArgument(p_21, 0);
      r_21 = ATgetArgument(p_21, 1);
      t = SSL_WriteToTextFile(not_null(q_21), not_null(r_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      t = SSL_WriteToBinaryFile(not_null(y_21), not_null(z_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_22 = NULL;
  ATerm l_11;
  l_11 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            ATerm i_22 = NULL,j_22 = NULL;
            i_22 = t;
            e_22 :
            if(match_cons(i_22, sym_Output_1))
              {
                j_22 = ATgetArgument(i_22, 0);
                if(((h_22 != NULL) && (h_22 != j_22)))
                  _fail(j_22);
                else
                  h_22 = j_22;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_1);
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          {
            ATerm k_22 = NULL;
            t = term_u_11;
            {
              k_22 = t;
              if(((h_22 != NULL) && (h_22 != k_22)))
                _fail(k_22);
              else
                h_22 = k_22;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_1, _id);
  }
  t = l_11;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(h_22);
        return(t);
      }
      t = split_2(t, t_1, _id);
      return(t);
    }
    t = _2(t, _id, s_1);
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              ATerm l_22 = NULL;
              l_22 = t;
              g_22 :
              if(!(match_cons(l_22, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_1);
            return(t);
          }
          t = _2(t, u_1, WriteToBinaryFile_0);
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  ATerm x_11;
  x_11 = t;
  t = dtime_0(t);
  t = x_11;
  {
    t = t_71(t);
    {
      ATerm y_11;
      y_11 = t;
      {
        ATerm s_22 = NULL;
        t = dtime_0(t);
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
      }
      t = y_11;
      {
        t_22 = t;
        q_22 :
        if(match_cons(t_22, sym__2))
          {
            u_22 = ATgetArgument(t_22, 0);
            v_22 = ATgetArgument(t_22, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_22)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_22))), not_null(v_22));
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
ATerm debug_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm z_11;
  z_11 = t;
  {
    ATerm c_23 = NULL,e_23 = NULL;
    ATerm a_12;
    a_12 = t;
    {
      ATerm d_23 = NULL;
      t = b_73(t);
      {
        d_23 = t;
        if(((c_23 != NULL) && (c_23 != d_23)))
          _fail(d_23);
        else
          c_23 = d_23;
      }
    }
    t = a_12;
    {
      ATerm f_23 = NULL;
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), not_null(c_23)));
        t = printnl_0(t);
      }
    }
  }
  t = z_11;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_23 = NULL;
      k_23 = t;
      {
        if(((j_23 != NULL) && (j_23 != k_23)))
          _fail(k_23);
        else
          j_23 = k_23;
        t = SSL_ReadFromFile(not_null(j_23));
      }
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_d_12;
          return(t);
        }
        t = debug_1(t, w_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  ATerm o_23 = NULL,q_23 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm p_23 = NULL;
    t = k_84(t);
    {
      p_23 = t;
      if(((o_23 != NULL) && (o_23 != p_23)))
        _fail(p_23);
      else
        o_23 = p_23;
    }
  }
  t = i_12;
  {
    ATerm r_23 = NULL;
    t = l_84(t);
    {
      r_23 = t;
      if(((q_23 != NULL) && (q_23 != r_23)))
        _fail(r_23);
      else
        q_23 = r_23;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(q_23));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_23 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm y_23 = NULL,z_23 = NULL;
          y_23 = t;
          v_23 :
          if(match_cons(y_23, sym_Input_1))
            {
              z_23 = ATgetArgument(y_23, 0);
              if(((x_23 != NULL) && (x_23 != z_23)))
                _fail(z_23);
              else
                x_23 = z_23;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_1);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          ATerm a_24 = NULL;
          t = term_u_12;
          {
            a_24 = t;
            if(((x_23 != NULL) && (x_23 != a_24)))
              _fail(a_24);
            else
              x_23 = a_24;
          }
        }
      }
  }
  t = j_12;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(x_23);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm e_24 = NULL;
    e_24 = t;
    d_24 :
    if(!(match_string(e_24, "-v")))
      {
        if(!(match_string(e_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_w_12;
    t = set_config_0(t);
    t = term_x_12;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_c_13;
    return(t);
  }
  t = Option_3(t, z_1, b_2, f_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    f_24 :
    if(!(match_string(h_24, "-k")))
      {
        if(!(match_string(h_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm d_13;
    d_13 = t;
    {
      ATerm i_24 = NULL;
      ATerm j_24 = NULL;
      t = string_to_int_0(t);
      {
        j_24 = t;
        if(((i_24 != NULL) && (i_24 != j_24)))
          _fail(j_24);
        else
          i_24 = j_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(i_24));
        t = set_config_0(t);
      }
    }
    t = d_13;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  t = SSL_string_to_int(not_null(m_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm u_24 = NULL;
        u_24 = t;
        p_24 :
        if(!(match_string(u_24, "-S")))
          {
            if(!(match_string(u_24, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = term_n_13;
        t = set_config_0(t);
        t = term_o_13;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_p_13;
        return(t);
      }
      t = Option_3(t, l_2, m_2, o_2);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm q_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              ATerm v_24 = NULL;
              v_24 = t;
              q_24 :
              if(!(match_string(v_24, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm y_24 = NULL;
              ATerm w_13;
              w_13 = t;
              {
                ATerm w_24 = NULL;
                ATerm x_24 = NULL;
                t = string_to_int_0(t);
                {
                  x_24 = t;
                  if(((w_24 != NULL) && (w_24 != x_24)))
                    _fail(x_24);
                  else
                    w_24 = x_24;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(w_24));
                  t = set_config_0(t);
                }
              }
              t = w_13;
              {
                ATerm z_24 = NULL;
                z_24 = t;
                if(((y_24 != NULL) && (y_24 != z_24)))
                  _fail(z_24);
                else
                  y_24 = z_24;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_24));
              }
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_x_13;
              return(t);
            }
            t = ArgOption_3(t, p_2, q_2, v_2);
            LocalPopChoice(v_13);
          }
        else
          {
            t = q_13;
            {
              ATerm w_2 (ATerm t)
              {
                ATerm a_25 = NULL;
                a_25 = t;
                t_24 :
                if(!(match_string(a_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = term_a_14;
                t = set_config_0(t);
                t = term_b_14;
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_g_14;
                return(t);
              }
              t = Option_3(t, w_2, x_2, c_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(m_14);
    }
  else
    {
      t = h_14;
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm g_25 = NULL;
    g_25 = t;
    d_25 :
    if(!(match_string(g_25, "-o")))
      {
        if(!(match_string(g_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm j_25 = NULL;
    ATerm p_14;
    p_14 = t;
    {
      ATerm h_25 = NULL;
      ATerm i_25 = NULL;
      i_25 = t;
      if(((h_25 != NULL) && (h_25 != i_25)))
        _fail(i_25);
      else
        h_25 = i_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_14, not_null(h_25));
        t = set_config_0(t);
      }
    }
    t = p_14;
    {
      ATerm k_25 = NULL;
      k_25 = t;
      if(((j_25 != NULL) && (j_25 != k_25)))
        _fail(k_25);
      else
        j_25 = k_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_25));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  t = ArgOption_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = u_14;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm o_25 = NULL;
          o_25 = t;
          n_25 :
          if(!(match_string(o_25, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_c_15;
          t = set_config_0(t);
          t = term_d_15;
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_e_15;
          return(t);
        }
        t = Option_3(t, g_3, i_3, l_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  u_25 = t;
  s_25 :
  if(match_string(u_25, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
        {
          v_25 = ATgetFirst((ATermList) u_25);
          m_27 = (ATerm) ATgetNext((ATermList) u_25);
          t_25 :
          if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
            {
              n_27 = ATgetFirst((ATermList) m_27);
              o_27 = (ATerm) ATgetNext((ATermList) m_27);
              {
                ATerm s_27 = NULL;
                ATerm i_15;
                i_15 = t;
                {
                  t = not_null(v_25);
                  t = k_0(t);
                }
                t = i_15;
                {
                  ATerm t_27 = NULL;
                  t = not_null(n_27);
                  {
                    t = l_0(t);
                    {
                      t_27 = t;
                      if(((s_27 != NULL) && (s_27 != t_27)))
                        _fail(t_27);
                      else
                        s_27 = t_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_27)), not_null(s_27));
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
  ATerm m_3 (ATerm t)
  {
    ATerm h_28 = NULL;
    h_28 = t;
    z_27 :
    if(!(match_string(h_28, "-i")))
      {
        if(!(match_string(h_28, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm l_28 = NULL;
    ATerm k_15;
    k_15 = t;
    {
      ATerm j_28 = NULL;
      ATerm k_28 = NULL;
      k_28 = t;
      if(((j_28 != NULL) && (j_28 != k_28)))
        _fail(k_28);
      else
        j_28 = k_28;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(j_28));
        t = set_config_0(t);
      }
    }
    t = k_15;
    {
      ATerm m_28 = NULL;
      m_28 = t;
      if(((l_28 != NULL) && (l_28 != m_28)))
        _fail(m_28);
      else
        l_28 = m_28;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_28));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_q_15;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm t_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = t_15;
      {
        ATerm c_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = c_16;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, term_p_16));
  {
    t = printnl_0(t);
    {
      t = term_r_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = SSL_TicksToSeconds(not_null(q_28));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_28), not_null(x_28));
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = SSL_addr(not_null(w_28), not_null(x_28));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm))
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_98(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
        j_29 = t;
        i_29 :
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            k_29 = ATgetFirst((ATermList) j_29);
            l_29 = (ATerm) ATgetNext((ATermList) j_29);
            {
              ATerm o_29 = NULL;
              ATerm p_29 = NULL;
              t = not_null(l_29);
              {
                t = foldr_2(t, c_98, d_98);
                {
                  p_29 = t;
                  if(((o_29 != NULL) && (o_29 != p_29)))
                    _fail(p_29);
                  else
                    o_29 = p_29;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), not_null(o_29));
                t = d_98(t);
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
ATerm crush_2 (ATerm t, ATerm g_97 (ATerm), ATerm h_97 (ATerm))
{
  ATerm b_30 = NULL;
  ATerm d_30 = NULL;
  b_30 = t;
  {
    ATerm e_30 = NULL;
    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
    t = not_null(b_30);
    {
      e_30 = t;
      {
        t = SSL_explode_term(not_null(e_30));
        {
          g_30 = t;
          a_30 :
          if(match_cons(g_30, sym__2))
            {
              h_30 = ATgetArgument(g_30, 0);
              i_30 = ATgetArgument(g_30, 1);
              if(((d_30 != NULL) && (d_30 != i_30)))
                _fail(i_30);
              else
                d_30 = i_30;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_30);
      t = foldr_2(t, g_97, h_97);
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
    ATerm u_3 (ATerm t)
    {
      t = term_z_8;
      return(t);
    }
    t = crush_2(t, u_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,t_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym__2))
    {
      p_30 = ATgetArgument(o_30, 0);
      t_30 = ATgetArgument(o_30, 1);
      {
        ATerm w_16;
        w_16 = t;
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_30), not_null(t_30));
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              t = SSL_gtr(not_null(p_30), not_null(t_30));
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
  ATerm z_30 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
      a_31 = t;
      y_30 :
      if(match_cons(a_31, sym__2))
        {
          b_31 = ATgetArgument(a_31, 0);
          c_31 = ATgetArgument(a_31, 1);
          {
            if(((z_30 != NULL) && (z_30 != b_31)))
              _fail(b_31);
            else
              z_30 = b_31;
            if(((z_30 != NULL) && (z_30 != c_31)))
              _fail(c_31);
            else
              z_30 = c_31;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm f_31 = NULL;
      ATerm g_31 = NULL;
      t = term_j_11;
      {
        t = get_config_0(t);
        {
          g_31 = t;
          if(((f_31 != NULL) && (f_31 != g_31)))
            _fail(g_31);
          else
            f_31 = g_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), term_r_7);
        t = geq_0(t);
      }
    }
    t = b_17;
    t = l_94(t);
    return(t);
  }
  t = try_1(t, v_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm k_31 = NULL,m_31 = NULL;
    ATerm c_17;
    c_17 = t;
    {
      ATerm l_31 = NULL;
      t = run_time_0(t);
      {
        l_31 = t;
        if(((k_31 != NULL) && (k_31 != l_31)))
          _fail(l_31);
        else
          k_31 = l_31;
      }
    }
    t = c_17;
    {
      ATerm n_31 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          n_31 = t;
          if(((m_31 != NULL) && (m_31 != n_31)))
            _fail(n_31);
          else
            m_31 = n_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_17), not_null(k_31)), term_i_17), not_null(m_31)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_4);
  {
    t = term_z_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym_Version_0))
    {
      ATerm w_31 = NULL,y_31 = NULL;
      ATerm n_17;
      n_17 = t;
      {
        ATerm x_31 = NULL;
        t = SSLgetAnnotations(not_null(u_31));
        {
          x_31 = t;
          if(((w_31 != NULL) && (w_31 != x_31)))
            _fail(x_31);
          else
            w_31 = x_31;
        }
      }
      t = n_17;
      {
        ATerm z_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
        t = not_null(y_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm p_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = p_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
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
  t = option_defined_1(t, b_4);
  t = r_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = SSL_table_create(not_null(e_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  {
    ATerm v_17;
    v_17 = t;
    {
      t = term_w_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, not_null(i_32));
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
  ATerm m_32 = NULL;
  m_32 = t;
  t = SSL_table_destroy(not_null(m_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_exit(not_null(q_32));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(((ATgetType(u_32) == AT_LIST) && ATisEmpty(u_32)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_32) == AT_LIST) && !(ATisEmpty(u_32))))
        {
          v_32 = ATgetFirst((ATermList) u_32);
          w_32 = (ATerm) ATgetNext((ATermList) u_32);
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
    ATerm z_32 = NULL;
    ATerm c_33 = NULL;
    ATerm d_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = d_18;
        {
          ATerm a_33 = NULL;
          ATerm b_33 = NULL;
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
          t = (ATerm) ATinsert(ATempty, not_null(a_33));
        }
      }
    {
      c_33 = t;
      if(((z_32 != NULL) && (z_32 != c_33)))
        _fail(c_33);
      else
        z_32 = c_33;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_11, not_null(z_32));
      t = printnl_0(t);
    }
  }
  t = c_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm f_33 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = Cons_2(t, v_77, f_33);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  o_33 = t;
  l_33 :
  if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
    {
      m_33 = ATgetFirst((ATermList) o_33);
      n_33 = (ATerm) ATgetNext((ATermList) o_33);
      {
        ATerm r_33 = NULL;
        t = not_null(n_33);
        {
          ATerm l_18;
          l_18 = t;
          {
            ATerm s_33 = NULL,u_33 = NULL,w_33 = NULL;
            ATerm n_18;
            n_18 = t;
            {
              ATerm t_33 = NULL;
              t = j_0(t);
              {
                t_33 = t;
                if(((s_33 != NULL) && (s_33 != t_33)))
                  _fail(t_33);
                else
                  s_33 = t_33;
              }
            }
            t = n_18;
            {
              ATerm v_33 = NULL;
              t = not_null(m_33);
              {
                t = i_0(t);
                {
                  v_33 = t;
                  if(((u_33 != NULL) && (u_33 != v_33)))
                    _fail(v_33);
                  else
                    u_33 = v_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_33)), not_null(u_33));
                {
                  w_33 = t;
                  if(((r_33 != NULL) && (r_33 != w_33)))
                    _fail(w_33);
                  else
                    r_33 = w_33;
                }
              }
            }
          }
          t = l_18;
          {
            ATerm c_4 (ATerm t)
            {
              t = not_null(r_33);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_33) == AT_LIST) && ATisEmpty(o_33)))
        {
          {
            t = term_j_6;
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
  ATerm d_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_Program_1))
    {
      i_34 = ATgetArgument(h_34, 0);
      {
        ATerm l_34 = NULL,n_34 = NULL;
        ATerm m_34 = NULL;
        t = SSLgetAnnotations(not_null(h_34));
        {
          m_34 = t;
          if(((l_34 != NULL) && (l_34 != m_34)))
            _fail(m_34);
          else
            l_34 = m_34;
        }
        {
          t = not_null(i_34);
          {
            ATerm p_34 = NULL;
            t = b_59(t);
            {
              n_34 = t;
              {
                ATerm q_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_34)), not_null(l_34));
                {
                  q_34 = t;
                  if(((p_34 != NULL) && (p_34 != q_34)))
                    _fail(q_34);
                  else
                    p_34 = q_34;
                }
                t = not_null(p_34);
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
  ATerm z_34 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_35 = NULL;
      t = term_h_17;
      {
        t = get_config_0(t);
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
      }
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            ATerm b_35 = NULL;
            b_35 = t;
            if(((z_34 != NULL) && (z_34 != b_35)))
              _fail(b_35);
            else
              z_34 = b_35;
            return(t);
          }
          t = Program_1(t, f_4);
          return(t);
        }
        t = option_defined_1(t, e_4);
      }
    }
  {
    ATerm g_4 (ATerm t)
    {
      ATerm l_4 (ATerm t)
      {
        t = not_null(z_34);
        return(t);
      }
      t = short_description_1(t, l_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_4);
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
                ATerm m_4 (ATerm t)
                {
                  ATerm c_35 = NULL;
                  ATerm d_35 = NULL;
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_35)), term_y_18);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm e_35 = NULL;
                    ATerm f_35 = NULL;
                    ATerm s_4 (ATerm t)
                    {
                      t = not_null(z_34);
                      return(t);
                    }
                    t = long_description_1(t, s_4);
                    {
                      f_35 = t;
                      if(((e_35 != NULL) && (e_35 != f_35)))
                        _fail(f_35);
                      else
                        e_35 = f_35;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_35)), term_z_18);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_4);
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
  ATerm a_19;
  a_19 = t;
  {
    ATerm l_35 = NULL;
    ATerm m_35 = NULL;
    m_35 = t;
    if(((l_35 != NULL) && (l_35 != m_35)))
      _fail(m_35);
    else
      l_35 = m_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, not_null(l_35)));
      t = printnl_0(t);
    }
  }
  t = a_19;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm e_19;
  e_19 = t;
  {
    t = c_73(t);
    t = debug_0(t);
  }
  t = e_19;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_59 (ATerm))
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
            t = c_59(t);
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
ATerm fetch_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm h_36 (ATerm t)
  {
    ATerm h_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_78, _id);
        LocalPopChoice(l_19);
      }
    else
      {
        t = h_19;
        t = Cons_2(t, _id, h_36);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_86 (ATerm))
{
  t = fetch_1(t, k_86);
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
      ATerm m_19;
      m_19 = t;
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
      t = m_19;
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
ATerm try_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm n_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_76(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = n_19;
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
        ATerm u_19;
        u_19 = t;
        {
          ATerm n_37 = NULL;
          ATerm o_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(i_37));
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
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
        t = u_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm s_37 = NULL;
  ATerm t_37 = NULL;
  t = term_j_6;
  {
    t = p_87(t);
    {
      t_37 = t;
      if(((s_37 != NULL) && (s_37 != t_37)))
        _fail(t_37);
      else
        s_37 = t_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_18, term_w_18, not_null(s_37));
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
            ATerm x_19;
            x_19 = t;
            {
              t = not_null(a_38);
              t = a_0(t);
            }
            t = x_19;
            {
              ATerm f_38 = NULL;
              t = term_j_6;
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
  ATerm t_4 (ATerm t)
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
  ATerm u_4 (ATerm t)
  {
    t = term_a_20;
    {
      t = set_config_0(t);
      t = term_b_20;
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_d_20;
    return(t);
  }
  t = Option_3(t, t_4, u_4, v_4);
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
ATerm Cons_2 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm))
{
  ATerm z_38 = NULL,a_39 = NULL,e_39 = NULL;
  z_38 = t;
  y_38 :
  if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
    {
      a_39 = ATgetFirst((ATermList) z_38);
      e_39 = (ATerm) ATgetNext((ATermList) z_38);
      {
        ATerm i_39 = NULL,k_39 = NULL;
        ATerm j_39 = NULL;
        t = SSLgetAnnotations(not_null(z_38));
        {
          j_39 = t;
          if(((i_39 != NULL) && (i_39 != j_39)))
            _fail(j_39);
          else
            i_39 = j_39;
        }
        {
          t = not_null(a_39);
          {
            ATerm m_39 = NULL;
            t = o_58(t);
            {
              k_39 = t;
              {
                t = not_null(e_39);
                {
                  ATerm o_39 = NULL;
                  t = p_58(t);
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
        ATerm e_20;
        e_20 = t;
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
        t = e_20;
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
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym__2))
    {
      l_40 = ATgetArgument(k_40, 0);
      m_40 = ATgetArgument(k_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_11, not_null(l_40), not_null(m_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm f_20;
  f_20 = t;
  {
    ATerm w_4 (ATerm t)
    {
      t = term_g_20;
      t = n_87(t);
      return(t);
    }
    t = try_1(t, w_4);
  }
  t = f_20;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm x_40 = NULL;
      ATerm h_20;
      h_20 = t;
      {
        ATerm v_40 = NULL;
        ATerm w_40 = NULL;
        w_40 = t;
        if(((v_40 != NULL) && (v_40 != w_40)))
          _fail(w_40);
        else
          v_40 = w_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_17, not_null(v_40));
          t = set_config_0(t);
        }
      }
      t = h_20;
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
    ATerm y_4 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              {
                t = n_87(t);
                t = Cons_2(t, _id, y_4);
              }
            }
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_4, y_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  ATerm q_20;
  q_20 = t;
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
  t = q_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_87 (ATerm))
{
  ATerm n_41 = NULL;
  ATerm r_20;
  r_20 = t;
  {
    t = term_w_20;
    t = table_put_0(t);
  }
  t = r_20;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_87(t);
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_4);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_21;
            b_21 = t;
            {
              ATerm c_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_19;
                  t = get_config_0(t);
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = c_21;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = b_21;
            {
              t = system_usage_0(t);
              {
                t = term_z_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm o_41 = NULL;
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                  return(t);
                }
                t = Undefined_1(t, g_5);
                return(t);
              }
              t = option_defined_1(t, f_5);
              {
                ATerm h_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_41)), term_h_21);
                  return(t);
                }
                t = say_1(t, h_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_5);
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
ATerm option_wrap_4 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm a_72 (ATerm))
{
  t = parse_options_1(t, x_71);
  {
    t = store_options_0(t);
    {
      t = z_71(t);
      {
        ATerm j_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_71);
            LocalPopChoice(m_21);
          }
        else
          {
            t = j_21;
            {
              ATerm n_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_72(t);
                  t = report_success_0(t);
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = n_21;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_72(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, o_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_5, q_72, r_72, o_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm v_21;
      v_21 = t;
      {
        ATerm r_41 = NULL;
        ATerm u_41 = NULL;
        t = term_h_17;
        {
          t = get_config_0(t);
          {
            u_41 = t;
            if(((r_41 != NULL) && (r_41 != u_41)))
              _fail(u_41);
            else
              r_41 = u_41;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, not_null(r_41)));
          t = printnl_0(t);
        }
      }
      t = v_21;
      return(t);
    }
    t = if_verbose2_1(t, x_5);
    return(t);
  }
  t = iowrap_4(t, i_72, j_72, k_72, p_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_72 (ATerm), ATerm h_72 (ATerm))
{
  t = iowrap_3(t, g_72, h_72, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    t = _2(t, _id, d_72);
    return(t);
  }
  t = iowrap_2(t, y_5, _fail);
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
