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
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
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
ATerm term_t_20;
ATerm term_q_19;
ATerm term_z_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_q_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_y_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_v_3;
ATerm term_t_3;
void init_constant_terms (void)
{
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Call_2, term_j_6, (ATerm) ATempty);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATempty);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Op_2, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATempty);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_z_10);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_z_10);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_y_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_z_10);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__3, term_x_16, term_y_16, (ATerm) ATempty);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm SVar_1 (ATerm, ATerm f_70 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm SDef_3 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm RDef_3 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm p_72 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_73 (ATerm));
ATerm at_last_1 (ATerm, ATerm s_81 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm h_90 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm s_90 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_73 (ATerm));
ATerm topdown_1 (ATerm, ATerm p_74 (ATerm));
ATerm _2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_92 (ATerm));
ATerm debug_1 (ATerm, ATerm q_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_88 (ATerm), ATerm w_88 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm));
ATerm crush_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_92 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_96 (ATerm));
ATerm map_1 (ATerm, ATerm s_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_96 (ATerm));
ATerm Program_1 (ATerm, ATerm b_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm r_91 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_95 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_96 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm l_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_93 (ATerm));
ATerm stratego_desugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm g_4 = NULL;
  ATerm l_4 = NULL,m_4 = NULL;
  g_4 = t;
  {
    ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
    t = not_null(g_4);
    {
      t = explode_string_0(t);
      {
        o_4 = t;
        s_3 :
        if(((ATgetType(o_4) == AT_LIST) && !(ATisEmpty(o_4))))
          {
            p_4 = ATgetFirst((ATermList) o_4);
            q_4 = (ATerm) ATgetNext((ATermList) o_4);
            u_3 :
            if(match_int(p_4, 39))
              {
                ATerm r_4 = NULL;
                if(((l_4 != NULL) && (l_4 != q_4)))
                  _fail(q_4);
                else
                  l_4 = q_4;
                {
                  t = not_null(l_4);
                  {
                    t = implode_string_0(t);
                    {
                      r_4 = t;
                      if(((m_4 != NULL) && (m_4 != r_4)))
                        _fail(r_4);
                      else
                        m_4 = r_4;
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
            _fail(t);
          }
      }
    }
    t = not_null(m_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Op_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        ATerm l_5 = NULL,n_5 = NULL;
        ATerm m_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          m_5 = t;
          if(((l_5 != NULL) && (l_5 != m_5)))
            _fail(m_5);
          else
            l_5 = m_5;
        }
        {
          t = not_null(g_5);
          {
            ATerm p_5 = NULL;
            t = m_67(t);
            {
              n_5 = t;
              {
                t = not_null(h_5);
                {
                  ATerm r_5 = NULL;
                  t = n_67(t);
                  {
                    p_5 = t;
                    {
                      ATerm s_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_5), not_null(p_5)), not_null(l_5));
                      {
                        s_5 = t;
                        if(((r_5 != NULL) && (r_5 != s_5)))
                          _fail(s_5);
                        else
                          r_5 = s_5;
                      }
                      t = not_null(r_5);
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
ATerm OpDecl_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_OpDecl_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = SSLgetAnnotations(not_null(e_6));
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
        {
          t = not_null(f_6);
          {
            ATerm o_6 = NULL;
            t = y_66(t);
            {
              m_6 = t;
              {
                t = not_null(g_6);
                {
                  ATerm q_6 = NULL;
                  t = z_66(t);
                  {
                    o_6 = t;
                    {
                      ATerm r_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(m_6), not_null(o_6)), not_null(k_6));
                      {
                        r_6 = t;
                        if(((q_6 != NULL) && (q_6 != r_6)))
                          _fail(r_6);
                        else
                          q_6 = r_6;
                      }
                      t = not_null(q_6);
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
ATerm SVar_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_SVar_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm g_7 = NULL,i_7 = NULL;
        ATerm h_7 = NULL;
        t = SSLgetAnnotations(not_null(c_7));
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
        {
          t = not_null(d_7);
          {
            ATerm k_7 = NULL;
            t = f_70(t);
            {
              i_7 = t;
              {
                ATerm l_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_7)), not_null(g_7));
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
                t = not_null(k_7);
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
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Var_1))
    {
      e_8 = ATgetArgument(d_8, 0);
      {
        ATerm o_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 = NULL,j_8 = NULL;
            ATerm i_8 = NULL;
            t = SSLgetAnnotations(not_null(d_8));
            {
              i_8 = t;
              if(((h_8 != NULL) && (h_8 != i_8)))
                _fail(i_8);
              else
                h_8 = i_8;
            }
            {
              t = not_null(e_8);
              {
                ATerm l_8 = NULL;
                t = m_0(t);
                {
                  j_8 = t;
                  {
                    ATerm m_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_8)), not_null(h_8));
                    {
                      m_8 = t;
                      if(((l_8 != NULL) && (l_8 != m_8)))
                        _fail(m_8);
                      else
                        l_8 = m_8;
                    }
                    t = not_null(l_8);
                  }
                }
              }
            }
            LocalPopChoice(p_3);
          }
        else
          {
            t = o_3;
            {
              ATerm q_3 = t;
              int r_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_8 = NULL,r_8 = NULL;
                  ATerm q_8 = NULL;
                  t = SSLgetAnnotations(not_null(d_8));
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                  {
                    t = not_null(e_8);
                    {
                      ATerm t_8 = NULL;
                      t = m_0(t);
                      {
                        r_8 = t;
                        {
                          ATerm u_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_8)), not_null(p_8));
                          {
                            u_8 = t;
                            if(((t_8 != NULL) && (t_8 != u_8)))
                              _fail(u_8);
                            else
                              t_8 = u_8;
                          }
                          t = not_null(t_8);
                        }
                      }
                    }
                  }
                  LocalPopChoice(r_3);
                }
              else
                {
                  t = q_3;
                  {
                    ATerm x_8 = NULL,z_8 = NULL;
                    ATerm y_8 = NULL;
                    t = SSLgetAnnotations(not_null(d_8));
                    {
                      y_8 = t;
                      if(((x_8 != NULL) && (x_8 != y_8)))
                        _fail(y_8);
                      else
                        x_8 = y_8;
                    }
                    {
                      t = not_null(e_8);
                      {
                        ATerm b_9 = NULL;
                        t = m_0(t);
                        {
                          z_8 = t;
                          {
                            ATerm c_9 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), not_null(x_8));
                            {
                              c_9 = t;
                              if(((b_9 != NULL) && (b_9 != c_9)))
                                _fail(c_9);
                              else
                                b_9 = c_9;
                            }
                            t = not_null(b_9);
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
ATerm VarDec_2 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_VarDec_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm b_10 = NULL,d_10 = NULL;
        ATerm c_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          c_10 = t;
          if(((b_10 != NULL) && (b_10 != c_10)))
            _fail(c_10);
          else
            b_10 = c_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm f_10 = NULL;
            t = q_72(t);
            {
              d_10 = t;
              {
                t = not_null(x_9);
                {
                  ATerm h_10 = NULL;
                  t = r_72(t);
                  {
                    f_10 = t;
                    {
                      ATerm i_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_10), not_null(f_10)), not_null(b_10));
                      {
                        i_10 = t;
                        if(((h_10 != NULL) && (h_10 != i_10)))
                          _fail(i_10);
                        else
                          h_10 = i_10;
                      }
                      t = not_null(h_10);
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
ATerm SDef_3 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_SDef_3))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      y_10 = ATgetArgument(v_10, 2);
      {
        ATerm d_11 = NULL,f_11 = NULL;
        ATerm e_11 = NULL;
        t = SSLgetAnnotations(not_null(v_10));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
        {
          t = not_null(w_10);
          {
            ATerm h_11 = NULL;
            t = u_72(t);
            {
              f_11 = t;
              {
                t = not_null(x_10);
                {
                  ATerm j_11 = NULL;
                  t = v_72(t);
                  {
                    h_11 = t;
                    {
                      t = not_null(y_10);
                      {
                        ATerm l_11 = NULL;
                        t = w_72(t);
                        {
                          j_11 = t;
                          {
                            ATerm m_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(f_11), not_null(h_11), not_null(j_11)), not_null(d_11));
                            {
                              m_11 = t;
                              if(((l_11 != NULL) && (l_11 != m_11)))
                                _fail(m_11);
                              else
                                l_11 = m_11;
                            }
                            t = not_null(l_11);
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
ATerm RDef_3 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_RDef_3))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      d_12 = ATgetArgument(a_12, 2);
      {
        ATerm i_12 = NULL,k_12 = NULL;
        ATerm j_12 = NULL;
        t = SSLgetAnnotations(not_null(a_12));
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
        {
          t = not_null(b_12);
          {
            ATerm m_12 = NULL;
            t = f_69(t);
            {
              k_12 = t;
              {
                t = not_null(c_12);
                {
                  ATerm o_12 = NULL;
                  t = g_69(t);
                  {
                    m_12 = t;
                    {
                      t = not_null(d_12);
                      {
                        ATerm q_12 = NULL;
                        t = h_69(t);
                        {
                          o_12 = t;
                          {
                            ATerm r_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(k_12), not_null(m_12), not_null(o_12)), not_null(i_12));
                            {
                              r_12 = t;
                              if(((q_12 != NULL) && (q_12 != r_12)))
                                _fail(r_12);
                              else
                                q_12 = r_12;
                            }
                            t = not_null(q_12);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_DefaultVarDec_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm h_13 = NULL,j_13 = NULL;
        ATerm i_13 = NULL;
        t = SSLgetAnnotations(not_null(d_13));
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        {
          t = not_null(e_13);
          {
            ATerm l_13 = NULL;
            t = p_72(t);
            {
              j_13 = t;
              {
                ATerm m_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(j_13)), not_null(h_13));
                {
                  m_13 = t;
                  if(((l_13 != NULL) && (l_13 != m_13)))
                    _fail(m_13);
                  else
                    l_13 = m_13;
                }
                t = not_null(l_13);
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
ATerm string_to_real_0 (ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = SSL_string_to_real(not_null(s_13));
  return(t);
}
ATerm UnEscape_tab_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  w_13 :
  if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
    {
      b_14 = ATgetFirst((ATermList) a_14);
      c_14 = (ATerm) ATgetNext((ATermList) a_14);
      x_13 :
      if(match_int(b_14, 92))
        {
          y_13 :
          if(((ATgetType(c_14) == AT_LIST) && !(ATisEmpty(c_14))))
            {
              d_14 = ATgetFirst((ATermList) c_14);
              e_14 = (ATerm) ATgetNext((ATermList) c_14);
              z_13 :
              if(match_int(d_14, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_14)), term_t_3);
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
ATerm UnEscape_linefeed_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  m_14 = t;
  i_14 :
  if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
    {
      n_14 = ATgetFirst((ATermList) m_14);
      o_14 = (ATerm) ATgetNext((ATermList) m_14);
      j_14 :
      if(match_int(n_14, 92))
        {
          k_14 :
          if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
            {
              p_14 = ATgetFirst((ATermList) o_14);
              q_14 = (ATerm) ATgetNext((ATermList) o_14);
              l_14 :
              if(match_int(p_14, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), term_v_3);
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
ATerm UnEscape_backslash_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  y_14 = t;
  u_14 :
  if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
    {
      z_14 = ATgetFirst((ATermList) y_14);
      a_15 = (ATerm) ATgetNext((ATermList) y_14);
      v_14 :
      if(match_int(z_14, 92))
        {
          w_14 :
          if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
            {
              b_15 = ATgetFirst((ATermList) a_15);
              c_15 = (ATerm) ATgetNext((ATermList) a_15);
              x_14 :
              if(match_int(b_15, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_15)), term_w_3);
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
ATerm UnEscape_double_quote_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  g_15 :
  if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
    {
      l_15 = ATgetFirst((ATermList) k_15);
      m_15 = (ATerm) ATgetNext((ATermList) k_15);
      h_15 :
      if(match_int(l_15, 92))
        {
          i_15 :
          if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
            {
              n_15 = ATgetFirst((ATermList) m_15);
              o_15 = (ATerm) ATgetNext((ATermList) m_15);
              j_15 :
              if(match_int(n_15, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_15)), term_x_3);
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
ATerm UnEscape_0 (ATerm t)
{
  ATerm y_3 = t;
  int z_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      LocalPopChoice(z_3);
    }
  else
    {
      t = y_3;
      {
        ATerm a_4 = t;
        int b_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            LocalPopChoice(b_4);
          }
        else
          {
            t = a_4;
            {
              ATerm c_4 = t;
              int d_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  LocalPopChoice(d_4);
                }
              else
                {
                  t = c_4;
                  t = UnEscape_tab_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unescape_chars_0 (ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_0(t);
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
      }
    }
  {
    ATerm h_4 = t;
    int i_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        LocalPopChoice(i_4);
      }
    else
      {
        t = h_4;
        t = Nil_0(t);
      }
  }
  return(t);
}
ATerm unescape_0 (ATerm t)
{
  t = string_as_chars_1(t, unescape_chars_0);
  return(t);
}
ATerm DesugarOnce_0 (ATerm t)
{
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
      b_16 = t;
      a_16 :
      if(match_cons(b_16, sym_Str_1))
        {
          c_16 = ATgetArgument(b_16, 0);
          {
            ATerm g_16 = NULL;
            ATerm i_16 = NULL;
            t = not_null(c_16);
            {
              ATerm b_0 (ATerm t)
              {
                ATerm c_0 (ATerm t)
                {
                  ATerm h_16 = NULL;
                  h_16 = t;
                  w_15 :
                  if(!(match_int(h_16, 34)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = unquote_chars_1(t, c_0);
                return(t);
              }
              t = string_as_chars_1(t, b_0);
              {
                t = string_as_chars_1(t, unescape_chars_0);
                {
                  i_16 = t;
                  if(((g_16 != NULL) && (g_16 != i_16)))
                    _fail(i_16);
                  else
                    g_16 = i_16;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(g_16));
          }
        }
      else
        {
          if(match_cons(b_16, sym_Real_1))
            {
              c_16 = ATgetArgument(b_16, 0);
              {
                ATerm k_16 = NULL;
                ATerm l_16 = NULL;
                t = not_null(c_16);
                {
                  t = string_to_real_0(t);
                  {
                    l_16 = t;
                    if(((k_16 != NULL) && (k_16 != l_16)))
                      _fail(l_16);
                    else
                      k_16 = l_16;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(k_16));
              }
            }
          else
            {
              if(match_cons(b_16, sym_Int_1))
                {
                  c_16 = ATgetArgument(b_16, 0);
                  {
                    ATerm n_16 = NULL;
                    ATerm o_16 = NULL;
                    t = not_null(c_16);
                    {
                      t = string_to_int_0(t);
                      {
                        o_16 = t;
                        if(((n_16 != NULL) && (n_16 != o_16)))
                          _fail(o_16);
                        else
                          n_16 = o_16;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_16));
                  }
                }
              else
                {
                  if(match_cons(b_16, sym_Con_3))
                    {
                      c_16 = ATgetArgument(b_16, 0);
                      d_16 = ATgetArgument(b_16, 1);
                      e_16 = ATgetArgument(b_16, 2);
                      {
                        t = not_null(e_16);
                        t = is_string_0(t);
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(c_16), not_null(d_16), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_16)), (ATerm) ATempty));
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
        }
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      {
        ATerm n_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            LocalPopChoice(s_4);
          }
        else
          {
            t = n_4;
            {
              ATerm t_4 = t;
              int u_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                        t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                              t = VarDec_2(t, RemoveLeadingPrime_0, _id);
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
                                    t = Var_1(t, RemoveLeadingPrime_0);
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
                                          t = SVar_1(t, RemoveLeadingPrime_0);
                                          LocalPopChoice(c_5);
                                        }
                                      else
                                        {
                                          t = b_5;
                                          {
                                            ATerm d_5 = t;
                                            int i_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                LocalPopChoice(i_5);
                                              }
                                            else
                                              {
                                                t = d_5;
                                                t = Op_2(t, RemoveLeadingPrime_0, _id);
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
ATerm try_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm j_5 = t;
  int k_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_73(t);
      LocalPopChoice(k_5);
    }
  else
    {
      t = j_5;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm z_16 (ATerm t)
  {
    ATerm o_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_81(t);
        LocalPopChoice(q_5);
      }
    else
      {
        t = o_5;
        t = Cons_2(t, _id, z_16);
      }
    return(t);
  }
  t = z_16(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
    {
      d_17 = ATgetFirst((ATermList) c_17);
      e_17 = (ATerm) ATgetNext((ATermList) c_17);
      t = not_null(e_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  i_17 :
  if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
    {
      l_17 = ATgetFirst((ATermList) k_17);
      m_17 = (ATerm) ATgetNext((ATermList) k_17);
      j_17 :
      if(((ATgetType(m_17) == AT_LIST) && ATisEmpty(m_17)))
        {
          t = not_null(l_17);
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
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
    {
      t_17 = ATgetFirst((ATermList) s_17);
      u_17 = (ATerm) ATgetNext((ATermList) s_17);
      t = not_null(t_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm v_5;
  v_5 = t;
  {
    t = Hd_0(t);
    t = h_90(t);
  }
  t = v_5;
  {
    ATerm w_5;
    w_5 = t;
    {
      t = last_0(t);
      t = h_90(t);
    }
    t = w_5;
    {
      t = Tl_0(t);
      t = at_last_1(t, Tl_0);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm y_17 = NULL;
    y_17 = t;
    x_17 :
    if(!(match_int(y_17, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, e_0);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm s_90 (ATerm))
{
  t = explode_string_0(t);
  {
    t = s_90(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm a_18 = NULL;
      a_18 = t;
      z_17 :
      if(!(match_int(a_18, 34)))
        {
          _fail(t);
        }
      return(t);
    }
    t = unquote_chars_1(t, n_0);
    return(t);
  }
  t = string_as_chars_1(t, f_0);
  return(t);
}
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  i_18 = t;
  c_18 :
  if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
    {
      j_18 = ATgetFirst((ATermList) i_18);
      k_18 = (ATerm) ATgetNext((ATermList) i_18);
      d_18 :
      if(match_int(j_18, 39))
        {
          e_18 :
          if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
            {
              l_18 = ATgetFirst((ATermList) k_18);
              m_18 = (ATerm) ATgetNext((ATermList) k_18);
              f_18 :
              if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
                {
                  n_18 = ATgetFirst((ATermList) m_18);
                  o_18 = (ATerm) ATgetNext((ATermList) m_18);
                  g_18 :
                  if(match_int(n_18, 39))
                    {
                      h_18 :
                      if(((ATgetType(o_18) == AT_LIST) && ATisEmpty(o_18)))
                        {
                          t = not_null(l_18);
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarChar_0 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_string(x_18, "'\\ '"))
    {
      t = term_x_5;
    }
  else
    {
      if(match_string(x_18, "'\\r'"))
        {
          t = term_y_5;
        }
      else
        {
          if(match_string(x_18, "'\\t'"))
            {
              t = term_t_3;
            }
          else
            {
              if(match_string(x_18, "'\\n'"))
                {
                  t = term_v_3;
                }
              else
                {
                  if(match_string(x_18, "'\\''"))
                    {
                      t = term_z_5;
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
ATerm Snd_0 (ATerm t)
{
  ATerm k_19 = NULL;
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  k_19 = t;
  {
    ATerm p_19 = NULL;
    ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
    t = not_null(k_19);
    {
      p_19 = t;
      {
        t = SSL_explode_term(not_null(p_19));
        {
          r_19 = t;
          g_19 :
          if(match_cons(r_19, sym__2))
            {
              s_19 = ATgetArgument(r_19, 0);
              t_19 = ATgetArgument(r_19, 1);
              h_19 :
              if(match_string(s_19, ""))
                {
                  i_19 :
                  if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
                    {
                      u_19 = ATgetFirst((ATermList) t_19);
                      v_19 = (ATerm) ATgetNext((ATermList) t_19);
                      j_19 :
                      if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
                        {
                          w_19 = ATgetFirst((ATermList) v_19);
                          x_19 = (ATerm) ATgetNext((ATermList) v_19);
                          {
                            if(((m_19 != NULL) && (m_19 != u_19)))
                              _fail(u_19);
                            else
                              m_19 = u_19;
                            {
                              if(((o_19 != NULL) && (o_19 != w_19)))
                                _fail(w_19);
                              else
                                o_19 = w_19;
                              if(((n_19 != NULL) && (n_19 != x_19)))
                                _fail(x_19);
                              else
                                n_19 = x_19;
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
    t = not_null(o_19);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_20 = NULL;
  ATerm j_20 = NULL,k_20 = NULL;
  h_20 = t;
  {
    ATerm l_20 = NULL;
    ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
    t = not_null(h_20);
    {
      l_20 = t;
      {
        t = SSL_explode_term(not_null(l_20));
        {
          n_20 = t;
          e_20 :
          if(match_cons(n_20, sym__2))
            {
              o_20 = ATgetArgument(n_20, 0);
              p_20 = ATgetArgument(n_20, 1);
              f_20 :
              if(match_string(o_20, ""))
                {
                  g_20 :
                  if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
                    {
                      q_20 = ATgetFirst((ATermList) p_20);
                      r_20 = (ATerm) ATgetNext((ATermList) p_20);
                      {
                        if(((k_20 != NULL) && (k_20 != q_20)))
                          _fail(q_20);
                        else
                          k_20 = q_20;
                        if(((j_20 != NULL) && (j_20 != r_20)))
                          _fail(r_20);
                        else
                          j_20 = r_20;
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
    t = not_null(k_20);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  ATerm z_29 (ATerm t)
  {
    t = not_null(g_23);
    {
      ATerm a_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_b_6, not_null(g_23));
    return(t);
  }
  ATerm a_30 (ATerm t)
  {
    t = not_null(b_23);
    return(t);
  }
  ATerm b_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(g_23)));
    return(t);
  }
  ATerm c_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(g_23)));
    return(t);
  }
  ATerm d_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_23)));
    return(t);
  }
  ATerm e_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_23)), (ATerm) ATempty);
    return(t);
  }
  ATerm f_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_23)), not_null(h_23));
    return(t);
  }
  ATerm g_30 (ATerm t)
  {
    t = not_null(g_23);
    {
      ATerm o_0 (ATerm t)
      {
        t = not_null(h_23);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
        z_24 = t;
        n_22 :
        if(match_cons(z_24, sym__2))
          {
            a_25 = ATgetArgument(z_24, 0);
            b_25 = ATgetArgument(z_24, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, o_0, p_0);
    }
    return(t);
  }
  ATerm h_30 (ATerm t)
  {
    t = not_null(g_23);
    {
      ATerm q_0 (ATerm t)
      {
        t = term_n_6;
        return(t);
      }
      ATerm r_0 (ATerm t)
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
        f_25 = t;
        p_22 :
        if(match_cons(f_25, sym__2))
          {
            g_25 = ATgetArgument(f_25, 0);
            h_25 = ATgetArgument(f_25, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_25)), not_null(g_25)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, q_0, r_0);
    }
    return(t);
  }
  ATerm i_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATinsert(CheckATermList(not_null(h_23)), not_null(g_23)));
    return(t);
  }
  ATerm j_30 (ATerm t)
  {
    t = not_null(g_23);
    {
      ATerm s_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_p_6, not_null(g_23));
    return(t);
  }
  ATerm k_30 (ATerm t)
  {
    t = not_null(b_23);
    return(t);
  }
  ATerm l_30 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  ATerm m_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_23)), not_null(g_23)));
    return(t);
  }
  ATerm n_30 (ATerm t)
  {
    t = not_null(g_23);
    return(t);
  }
  ATerm o_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(g_23), not_null(h_23), term_w_6);
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_23), not_null(h_23), term_w_6);
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(g_23), (ATerm)ATempty, not_null(h_23));
    return(t);
  }
  ATerm r_30 (ATerm t)
  {
    ATerm z_25 = NULL;
    ATerm b_26 = NULL;
    t = not_null(g_23);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          ATerm a_26 = NULL;
          a_26 = t;
          q_22 :
          if(!(match_int(a_26, 34)))
            {
              _fail(t);
            }
          return(t);
        }
        t = unquote_chars_1(t, t_0);
        return(t);
      }
      t = string_as_chars_1(t, s_0);
      {
        b_26 = t;
        if(((z_25 != NULL) && (z_25 != b_26)))
          _fail(b_26);
        else
          z_25 = b_26;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(z_25), not_null(h_23));
    return(t);
  }
  ATerm s_30 (ATerm t)
  {
    ATerm d_26 = NULL;
    ATerm f_26 = NULL;
    t = not_null(g_23);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm e_26 = NULL;
          e_26 = t;
          s_22 :
          if(!(match_int(e_26, 34)))
            {
              _fail(t);
            }
          return(t);
        }
        t = unquote_chars_1(t, v_0);
        return(t);
      }
      t = string_as_chars_1(t, u_0);
      {
        f_26 = t;
        if(((d_26 != NULL) && (d_26 != f_26)))
          _fail(f_26);
        else
          d_26 = f_26;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(d_26), (ATerm) ATempty);
    return(t);
  }
  ATerm y_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(g_23), (ATerm) ATempty);
    return(t);
  }
  ATerm z_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_23), (ATerm)ATempty, not_null(h_23));
    return(t);
  }
  ATerm a_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(g_23), not_null(h_23), not_null(e_23));
    return(t);
  }
  ATerm b_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(g_23), (ATerm)ATempty, not_null(h_23));
    return(t);
  }
  ATerm c_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(g_23), (ATerm)ATempty, not_null(h_23));
    return(t);
  }
  ATerm d_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(h_23));
    return(t);
  }
  f_23 = t;
  u_22 :
  if(match_cons(f_23, sym_Anno_2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      {
        ATerm k_23 = NULL;
        ATerm p_23 = NULL;
        t = not_null(h_23);
        {
          ATerm w_0 (ATerm t)
          {
            t = term_x_6;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            ATerm l_23 = NULL,n_23 = NULL;
            ATerm y_6;
            y_6 = t;
            {
              ATerm m_23 = NULL;
              t = Fst_0(t);
              {
                m_23 = t;
                if(((l_23 != NULL) && (l_23 != m_23)))
                  _fail(m_23);
                else
                  l_23 = m_23;
              }
            }
            t = y_6;
            {
              ATerm o_23 = NULL;
              t = Snd_0(t);
              {
                o_23 = t;
                if(((n_23 != NULL) && (n_23 != o_23)))
                  _fail(o_23);
                else
                  n_23 = o_23;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), not_null(l_23)));
            }
            return(t);
          }
          t = foldr_2(t, w_0, x_0);
          {
            p_23 = t;
            if(((k_23 != NULL) && (k_23 != p_23)))
              _fail(p_23);
            else
              k_23 = p_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(g_23), not_null(k_23));
      }
    }
  else
    {
      if(match_cons(f_23, sym_SortNoArgs_1))
        {
          g_23 = ATgetArgument(f_23, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(g_23), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(f_23, sym_Char_1))
            {
              g_23 = ATgetArgument(f_23, 0);
              {
                ATerm s_23 = NULL;
                ATerm t_23 = NULL;
                t = not_null(g_23);
                {
                  ATerm z_6 = t;
                  int a_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      LocalPopChoice(a_7);
                    }
                  else
                    {
                      t = z_6;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    t_23 = t;
                    if(((s_23 != NULL) && (s_23 != t_23)))
                      _fail(t_23);
                    else
                      s_23 = t_23;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(s_23));
              }
            }
          else
            {
              if(match_cons(f_23, sym_Con4_4))
                {
                  g_23 = ATgetArgument(f_23, 0);
                  h_23 = ATgetArgument(f_23, 1);
                  e_23 = ATgetArgument(f_23, 2);
                  a_23 = ATgetArgument(f_23, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(g_23), not_null(e_23), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_23)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(f_23, sym_Con3_3))
                    {
                      g_23 = ATgetArgument(f_23, 0);
                      h_23 = ATgetArgument(f_23, 1);
                      e_23 = ATgetArgument(f_23, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(g_23), not_null(e_23), term_j_7);
                    }
                  else
                    {
                      if(match_cons(f_23, sym_Con1_2))
                        {
                          g_23 = ATgetArgument(f_23, 0);
                          h_23 = ATgetArgument(f_23, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(g_23), not_null(h_23), term_j_7);
                        }
                      else
                        {
                          if(match_cons(f_23, sym_ListTail_2))
                            {
                              g_23 = ATgetArgument(f_23, 0);
                              h_23 = ATgetArgument(f_23, 1);
                              {
                                t = not_null(g_23);
                                {
                                  ATerm y_0 (ATerm t)
                                  {
                                    t = not_null(h_23);
                                    return(t);
                                  }
                                  ATerm z_0 (ATerm t)
                                  {
                                    ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                                    e_24 = t;
                                    j_22 :
                                    if(match_cons(e_24, sym__2))
                                      {
                                        f_24 = ATgetArgument(e_24, 0);
                                        g_24 = ATgetArgument(e_24, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_24)), not_null(f_24)));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = foldr_2(t, y_0, z_0);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(f_23, sym_List_1))
                                {
                                  g_23 = ATgetArgument(f_23, 0);
                                  {
                                    t = not_null(g_23);
                                    {
                                      ATerm a_1 (ATerm t)
                                      {
                                        t = term_x_6;
                                        return(t);
                                      }
                                      ATerm b_1 (ATerm t)
                                      {
                                        ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
                                        k_24 = t;
                                        l_22 :
                                        if(match_cons(k_24, sym__2))
                                          {
                                            l_24 = ATgetArgument(k_24, 0);
                                            m_24 = ATgetArgument(k_24, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_24)), not_null(l_24)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, a_1, b_1);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(f_23, sym_Tuple_1))
                                    {
                                      g_23 = ATgetArgument(f_23, 0);
                                      v_22 :
                                      if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
                                        {
                                          b_23 = ATgetFirst((ATermList) g_23);
                                          c_23 = (ATerm) ATgetNext((ATermList) g_23);
                                          w_22 :
                                          if(((ATgetType(c_23) == AT_LIST) && ATisEmpty(c_23)))
                                            {
                                              {
                                                ATerm m_7 = t;
                                                int n_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_29(t);
                                                    LocalPopChoice(n_7);
                                                  }
                                                else
                                                  {
                                                    t = m_7;
                                                    t = a_30(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = z_29(t);
                                            }
                                        }
                                      else
                                        {
                                          t = z_29(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(f_23, sym_RealCong_1))
                                        {
                                          g_23 = ATgetArgument(f_23, 0);
                                          t = b_30(t);
                                        }
                                      else
                                        {
                                          if(match_cons(f_23, sym_IntCong_1))
                                            {
                                              g_23 = ATgetArgument(f_23, 0);
                                              t = c_30(t);
                                            }
                                          else
                                            {
                                              if(match_cons(f_23, sym_StrCong_1))
                                                {
                                                  g_23 = ATgetArgument(f_23, 0);
                                                  t = d_30(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(f_23, sym_ModCongNoArgs_1))
                                                    {
                                                      g_23 = ATgetArgument(f_23, 0);
                                                      t = e_30(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(f_23, sym_ModCong_2))
                                                        {
                                                          g_23 = ATgetArgument(f_23, 0);
                                                          h_23 = ATgetArgument(f_23, 1);
                                                          t = f_30(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(f_23, sym_ListCong_2))
                                                            {
                                                              g_23 = ATgetArgument(f_23, 0);
                                                              h_23 = ATgetArgument(f_23, 1);
                                                              t = g_30(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(f_23, sym_ListCongNoTail_1))
                                                                {
                                                                  g_23 = ATgetArgument(f_23, 0);
                                                                  t = h_30(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(f_23, sym_TupleCong_2))
                                                                    {
                                                                      g_23 = ATgetArgument(f_23, 0);
                                                                      h_23 = ATgetArgument(f_23, 1);
                                                                      t = i_30(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(f_23, sym_TupleCong_1))
                                                                        {
                                                                          g_23 = ATgetArgument(f_23, 0);
                                                                          x_22 :
                                                                          if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
                                                                            {
                                                                              b_23 = ATgetFirst((ATermList) g_23);
                                                                              c_23 = (ATerm) ATgetNext((ATermList) g_23);
                                                                              y_22 :
                                                                              if(((ATgetType(c_23) == AT_LIST) && ATisEmpty(c_23)))
                                                                                {
                                                                                  {
                                                                                    ATerm o_7 = t;
                                                                                    int p_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = j_30(t);
                                                                                        LocalPopChoice(p_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_7;
                                                                                        t = k_30(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_30(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_30(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(f_23, sym_TupleCong_0))
                                                                            {
                                                                              t = l_30(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(f_23, sym_AnnoCong_2))
                                                                                {
                                                                                  g_23 = ATgetArgument(f_23, 0);
                                                                                  h_23 = ATgetArgument(f_23, 1);
                                                                                  z_22 :
                                                                                  if(match_cons(h_23, sym_StrategyCurly_1))
                                                                                    {
                                                                                      d_23 = ATgetArgument(h_23, 0);
                                                                                      t = m_30(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(f_23, sym_ParenStrat_1))
                                                                                    {
                                                                                      g_23 = ATgetArgument(f_23, 0);
                                                                                      t = n_30(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(f_23, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          g_23 = ATgetArgument(f_23, 0);
                                                                                          h_23 = ATgetArgument(f_23, 1);
                                                                                          t = o_30(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(f_23, sym_RuleNoCond_2))
                                                                                            {
                                                                                              g_23 = ATgetArgument(f_23, 0);
                                                                                              h_23 = ATgetArgument(f_23, 1);
                                                                                              t = p_30(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(f_23, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  g_23 = ATgetArgument(f_23, 0);
                                                                                                  h_23 = ATgetArgument(f_23, 1);
                                                                                                  t = q_30(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(f_23, sym_Prim_2))
                                                                                                    {
                                                                                                      g_23 = ATgetArgument(f_23, 0);
                                                                                                      h_23 = ATgetArgument(f_23, 1);
                                                                                                      t = r_30(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(f_23, sym_PrimNoArgs_1))
                                                                                                        {
                                                                                                          g_23 = ATgetArgument(f_23, 0);
                                                                                                          t = s_30(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(f_23, sym_CallNoArgs_1))
                                                                                                            {
                                                                                                              g_23 = ATgetArgument(f_23, 0);
                                                                                                              t = y_30(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(f_23, sym_SDefNoArgs_2))
                                                                                                                {
                                                                                                                  g_23 = ATgetArgument(f_23, 0);
                                                                                                                  h_23 = ATgetArgument(f_23, 1);
                                                                                                                  t = z_30(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(f_23, sym_SRDef_3))
                                                                                                                    {
                                                                                                                      g_23 = ATgetArgument(f_23, 0);
                                                                                                                      h_23 = ATgetArgument(f_23, 1);
                                                                                                                      e_23 = ATgetArgument(f_23, 2);
                                                                                                                      t = a_31(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(f_23, sym_SRDefNoArgs_2))
                                                                                                                        {
                                                                                                                          g_23 = ATgetArgument(f_23, 0);
                                                                                                                          h_23 = ATgetArgument(f_23, 1);
                                                                                                                          t = b_31(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(f_23, sym_RDefNoArgs_2))
                                                                                                                            {
                                                                                                                              g_23 = ATgetArgument(f_23, 0);
                                                                                                                              h_23 = ATgetArgument(f_23, 1);
                                                                                                                              t = c_31(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(f_23, sym_Module_2))
                                                                                                                                {
                                                                                                                                  g_23 = ATgetArgument(f_23, 0);
                                                                                                                                  h_23 = ATgetArgument(f_23, 1);
                                                                                                                                  t = d_31(t);
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
ATerm repeat_2 (ATerm t, ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  ATerm u_31 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        t = u_31(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = q_73(t);
      }
    return(t);
  }
  t = u_31(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm s_73 (ATerm))
{
  t = repeat_2(t, s_73, _id);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_74 (ATerm))
{
  t = p_74(t);
  {
    ATerm c_1 (ATerm t)
    {
      t = topdown_1(t, p_74);
      return(t);
    }
    t = _all(t, c_1);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym__2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      {
        ATerm h_32 = NULL,j_32 = NULL;
        ATerm i_32 = NULL;
        t = SSLgetAnnotations(not_null(b_32));
        {
          i_32 = t;
          if(((h_32 != NULL) && (h_32 != i_32)))
            _fail(i_32);
          else
            h_32 = i_32;
        }
        {
          t = not_null(c_32);
          {
            ATerm l_32 = NULL;
            t = i_59(t);
            {
              j_32 = t;
              {
                t = not_null(d_32);
                {
                  ATerm n_32 = NULL;
                  t = j_59(t);
                  {
                    l_32 = t;
                    {
                      ATerm o_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_32), not_null(l_32)), not_null(h_32));
                      {
                        o_32 = t;
                        if(((n_32 != NULL) && (n_32 != o_32)))
                          _fail(o_32);
                        else
                          n_32 = o_32;
                      }
                      t = not_null(n_32);
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
  ATerm w_32 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm x_32 = NULL,y_32 = NULL;
      x_32 = t;
      v_32 :
      if(match_cons(x_32, sym_Program_1))
        {
          y_32 = ATgetArgument(x_32, 0);
          if(((w_32 != NULL) && (w_32 != y_32)))
            _fail(y_32);
          else
            w_32 = y_32;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, d_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), not_null(w_32)), term_u_7));
      {
        t = printnl_0(t);
        {
          t = term_w_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      {
        ATerm x_7;
        x_7 = t;
        t = SSL_printnl(not_null(d_33), not_null(e_33));
        t = x_7;
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
  ATerm j_33 = NULL;
  j_33 = t;
  t = SSL_implode_string(not_null(j_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
        o_33 = t;
        n_33 :
        if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
          {
            p_33 = ATgetFirst((ATermList) o_33);
            q_33 = (ATerm) ATgetNext((ATermList) o_33);
            {
              t = not_null(p_33);
              {
                ATerm e_1 (ATerm t)
                {
                  t = not_null(q_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_1);
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
  ATerm a_34 = NULL;
  ATerm c_34 = NULL;
  a_34 = t;
  {
    ATerm d_34 = NULL;
    ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
    t = not_null(a_34);
    {
      d_34 = t;
      {
        t = SSL_explode_term(not_null(d_34));
        {
          f_34 = t;
          y_33 :
          if(match_cons(f_34, sym__2))
            {
              g_34 = ATgetArgument(f_34, 0);
              h_34 = ATgetArgument(f_34, 1);
              z_33 :
              if(match_string(g_34, ""))
                {
                  if(((c_34 != NULL) && (c_34 != h_34)))
                    _fail(h_34);
                  else
                    c_34 = h_34;
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
      t = not_null(c_34);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm l_34 (ATerm t)
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_34);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        {
          t = Nil_0(t);
          t = h_81(t);
        }
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym__2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      {
        t = not_null(p_34);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(q_34);
            return(t);
          }
          t = at_end_1(t, f_1);
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
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_explode_string(not_null(v_34));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = k_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  t = SSL_is_string(not_null(z_34));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = o_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              ATerm a_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = a_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, g_1);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
              i_35 = t;
              h_35 :
              if(match_cons(i_35, sym_Path_1))
                {
                  j_35 = ATgetArgument(i_35, 0);
                  t = not_null(j_35);
                }
              else
                {
                  if(match_cons(i_35, sym_Var_1))
                    {
                      j_35 = ATgetArgument(i_35, 0);
                      {
                        t = not_null(j_35);
                        {
                          ATerm e_9 = t;
                          int f_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_9);
                            }
                          else
                            {
                              t = e_9;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = term_g_9;
                                  return(t);
                                }
                                t = debug_1(t, h_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_35, sym_Prefix_2))
                        {
                          j_35 = ATgetArgument(i_35, 0);
                          k_35 = ATgetArgument(i_35, 1);
                          {
                            ATerm p_35 = NULL,r_35 = NULL;
                            ATerm h_9;
                            h_9 = t;
                            {
                              ATerm q_35 = NULL;
                              t = not_null(j_35);
                              {
                                t = eval_config_0(t);
                                {
                                  q_35 = t;
                                  if(((p_35 != NULL) && (p_35 != q_35)))
                                    _fail(q_35);
                                  else
                                    p_35 = q_35;
                                }
                              }
                            }
                            t = h_9;
                            {
                              ATerm s_35 = NULL;
                              t = not_null(k_35);
                              {
                                t = eval_config_0(t);
                                {
                                  s_35 = t;
                                  if(((r_35 != NULL) && (r_35 != s_35)))
                                    _fail(s_35);
                                  else
                                    r_35 = s_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_35), not_null(r_35));
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
  ATerm a_36 = NULL;
  a_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_9, not_null(a_36));
    {
      t = table_get_0(t);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_9;
              l_9 = t;
              {
                ATerm d_36 = NULL;
                ATerm e_36 = NULL;
                e_36 = t;
                if(((d_36 != NULL) && (d_36 != e_36)))
                  _fail(e_36);
                else
                  d_36 = e_36;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_9, not_null(a_36), not_null(d_36));
                  t = table_put_0(t);
                }
              }
              t = l_9;
            }
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_94 (ATerm))
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9;
      o_9 = t;
      {
        ATerm i_36 = NULL;
        ATerm j_36 = NULL;
        t = term_p_9;
        {
          t = get_config_0(t);
          {
            j_36 = t;
            if(((i_36 != NULL) && (i_36 != j_36)))
              _fail(j_36);
            else
              i_36 = j_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), term_q_9);
          t = geq_0(t);
        }
      }
      t = o_9;
      t = n_94(t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      t = SSL_WriteToTextFile(not_null(o_36), not_null(p_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym__2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      t = SSL_WriteToBinaryFile(not_null(w_36), not_null(x_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_37 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm i_37 = NULL,j_37 = NULL;
            i_37 = t;
            e_37 :
            if(match_cons(i_37, sym_Output_1))
              {
                j_37 = ATgetArgument(i_37, 0);
                if(((h_37 != NULL) && (h_37 != j_37)))
                  _fail(j_37);
                else
                  h_37 = j_37;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm k_37 = NULL;
            t = term_y_9;
            {
              k_37 = t;
              if(((h_37 != NULL) && (h_37 != k_37)))
                _fail(k_37);
              else
                h_37 = k_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_1, _id);
  }
  t = r_9;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = not_null(h_37);
        return(t);
      }
      t = split_2(t, l_1, _id);
      return(t);
    }
    t = _2(t, _id, k_1);
    {
      ATerm z_9 = t;
      int a_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm n_1 (ATerm t)
            {
              ATerm l_37 = NULL;
              l_37 = t;
              g_37 :
              if(!(match_cons(l_37, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_1);
            return(t);
          }
          t = _2(t, m_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm u_92 (ATerm))
{
  ATerm r_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  ATerm e_10;
  e_10 = t;
  t = dtime_0(t);
  t = e_10;
  {
    t = u_92(t);
    {
      ATerm g_10;
      g_10 = t;
      {
        ATerm s_37 = NULL;
        t = dtime_0(t);
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
      }
      t = g_10;
      {
        t_37 = t;
        q_37 :
        if(match_cons(t_37, sym__2))
          {
            u_37 = ATgetArgument(t_37, 0);
            v_37 = ATgetArgument(t_37, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_37)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_37))), not_null(v_37));
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
ATerm debug_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm j_10;
  j_10 = t;
  {
    ATerm c_38 = NULL,e_38 = NULL;
    ATerm k_10;
    k_10 = t;
    {
      ATerm d_38 = NULL;
      t = q_91(t);
      {
        d_38 = t;
        if(((c_38 != NULL) && (c_38 != d_38)))
          _fail(d_38);
        else
          c_38 = d_38;
      }
    }
    t = k_10;
    {
      ATerm f_38 = NULL;
      f_38 = t;
      if(((e_38 != NULL) && (e_38 != f_38)))
        _fail(f_38);
      else
        e_38 = f_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_38)), not_null(c_38)));
        t = printnl_0(t);
      }
    }
  }
  t = j_10;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_38 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_38 = NULL;
      k_38 = t;
      {
        if(((j_38 != NULL) && (j_38 != k_38)))
          _fail(k_38);
        else
          j_38 = k_38;
        t = SSL_ReadFromFile(not_null(j_38));
      }
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = debug_1(t, o_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_88 (ATerm), ATerm w_88 (ATerm))
{
  ATerm t_38 = NULL,v_38 = NULL;
  ATerm o_10;
  o_10 = t;
  {
    ATerm u_38 = NULL;
    t = v_88(t);
    {
      u_38 = t;
      if(((t_38 != NULL) && (t_38 != u_38)))
        _fail(u_38);
      else
        t_38 = u_38;
    }
  }
  t = o_10;
  {
    ATerm w_38 = NULL;
    t = w_88(t);
    {
      w_38 = t;
      if(((v_38 != NULL) && (v_38 != w_38)))
        _fail(w_38);
      else
        v_38 = w_38;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), not_null(v_38));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm p_10;
  p_10 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 (ATerm t)
        {
          ATerm d_39 = NULL,e_39 = NULL;
          d_39 = t;
          a_39 :
          if(match_cons(d_39, sym_Input_1))
            {
              e_39 = ATgetArgument(d_39, 0);
              if(((c_39 != NULL) && (c_39 != e_39)))
                _fail(e_39);
              else
                c_39 = e_39;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, p_1);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm f_39 = NULL;
          t = term_s_10;
          {
            f_39 = t;
            if(((c_39 != NULL) && (c_39 != f_39)))
              _fail(f_39);
            else
              c_39 = f_39;
          }
        }
      }
  }
  t = p_10;
  {
    ATerm q_1 (ATerm t)
    {
      t = not_null(c_39);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm j_39 = NULL;
    j_39 = t;
    i_39 :
    if(!(match_string(j_39, "-v")))
      {
        if(!(match_string(j_39, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_a_11;
    t = set_config_0(t);
    t = term_b_11;
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_c_11;
    return(t);
  }
  t = Option_3(t, r_1, s_1, t_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm m_39 = NULL;
    m_39 = t;
    k_39 :
    if(!(match_string(m_39, "-k")))
      {
        if(!(match_string(m_39, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm n_39 = NULL;
      ATerm o_39 = NULL;
      t = string_to_int_0(t);
      {
        o_39 = t;
        if(((n_39 != NULL) && (n_39 != o_39)))
          _fail(o_39);
        else
          n_39 = o_39;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(n_39));
        t = set_config_0(t);
      }
    }
    t = g_11;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = ArgOption_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  t = SSL_string_to_int(not_null(r_39));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm z_39 = NULL;
        z_39 = t;
        u_39 :
        if(!(match_string(z_39, "-S")))
          {
            if(!(match_string(z_39, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_q_11;
        t = set_config_0(t);
        t = term_r_11;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_s_11;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm a_40 = NULL;
              a_40 = t;
              v_39 :
              if(!(match_string(a_40, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm d_40 = NULL;
              ATerm v_11;
              v_11 = t;
              {
                ATerm b_40 = NULL;
                ATerm c_40 = NULL;
                t = string_to_int_0(t);
                {
                  c_40 = t;
                  if(((b_40 != NULL) && (b_40 != c_40)))
                    _fail(c_40);
                  else
                    b_40 = c_40;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(b_40));
                  t = set_config_0(t);
                }
              }
              t = v_11;
              {
                ATerm e_40 = NULL;
                e_40 = t;
                if(((d_40 != NULL) && (d_40 != e_40)))
                  _fail(e_40);
                else
                  d_40 = e_40;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_40));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_w_11;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm d_2 (ATerm t)
              {
                ATerm f_40 = NULL;
                f_40 = t;
                y_39 :
                if(!(match_string(f_40, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_2 (ATerm t)
              {
                t = term_y_11;
                t = set_config_0(t);
                t = term_e_12;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_f_12;
                return(t);
              }
              t = Option_3(t, d_2, e_2, f_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm l_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = l_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm l_40 = NULL;
    l_40 = t;
    i_40 :
    if(!(match_string(l_40, "-o")))
      {
        if(!(match_string(l_40, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm o_40 = NULL;
    ATerm p_12;
    p_12 = t;
    {
      ATerm m_40 = NULL;
      ATerm n_40 = NULL;
      n_40 = t;
      if(((m_40 != NULL) && (m_40 != n_40)))
        _fail(n_40);
      else
        m_40 = n_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(m_40));
        t = set_config_0(t);
      }
    }
    t = p_12;
    {
      ATerm p_40 = NULL;
      p_40 = t;
      if(((o_40 != NULL) && (o_40 != p_40)))
        _fail(p_40);
      else
        o_40 = p_40;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_40));
    }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm j_2 (ATerm t)
        {
          ATerm t_40 = NULL;
          t_40 = t;
          s_40 :
          if(!(match_string(t_40, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_2 (ATerm t)
        {
          t = term_x_12;
          t = set_config_0(t);
          t = term_y_12;
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_z_12;
          return(t);
        }
        t = Option_3(t, j_2, k_2, l_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  z_40 = t;
  x_40 :
  if(match_string(z_40, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
        {
          a_41 = ATgetFirst((ATermList) z_40);
          b_41 = (ATerm) ATgetNext((ATermList) z_40);
          y_40 :
          if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
            {
              c_41 = ATgetFirst((ATermList) b_41);
              d_41 = (ATerm) ATgetNext((ATermList) b_41);
              {
                ATerm h_41 = NULL;
                ATerm a_13;
                a_13 = t;
                {
                  t = not_null(a_41);
                  t = j_0(t);
                }
                t = a_13;
                {
                  ATerm i_41 = NULL;
                  t = not_null(c_41);
                  {
                    t = k_0(t);
                    {
                      i_41 = t;
                      if(((h_41 != NULL) && (h_41 != i_41)))
                        _fail(i_41);
                      else
                        h_41 = i_41;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_41)), not_null(h_41));
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
  ATerm m_2 (ATerm t)
  {
    ATerm p_41 = NULL;
    p_41 = t;
    m_41 :
    if(!(match_string(p_41, "-i")))
      {
        if(!(match_string(p_41, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm s_41 = NULL;
    ATerm b_13;
    b_13 = t;
    {
      ATerm q_41 = NULL;
      ATerm r_41 = NULL;
      r_41 = t;
      if(((q_41 != NULL) && (q_41 != r_41)))
        _fail(r_41);
      else
        q_41 = r_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(q_41));
        t = set_config_0(t);
      }
    }
    t = b_13;
    {
      ATerm t_41 = NULL;
      t_41 = t;
      if(((s_41 != NULL) && (s_41 != t_41)))
        _fail(t_41);
      else
        s_41 = t_41;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_41));
    }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_g_13;
    return(t);
  }
  t = ArgOption_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = k_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, term_q_13));
  {
    t = printnl_0(t);
    {
      t = term_w_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  t = SSL_TicksToSeconds(not_null(x_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  b_42 :
  if(match_cons(c_42, sym__2))
    {
      d_42 = ATgetArgument(c_42, 0);
      e_42 = ATgetArgument(c_42, 1);
      {
        ATerm r_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_42), not_null(e_42));
            LocalPopChoice(t_13);
          }
        else
          {
            t = r_13;
            t = SSL_addr(not_null(d_42), not_null(e_42));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_87(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
        l_42 = t;
        k_42 :
        if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
          {
            m_42 = ATgetFirst((ATermList) l_42);
            n_42 = (ATerm) ATgetNext((ATermList) l_42);
            {
              ATerm q_42 = NULL;
              ATerm r_42 = NULL;
              t = not_null(n_42);
              {
                t = foldr_2(t, g_87, h_87);
                {
                  r_42 = t;
                  if(((q_42 != NULL) && (q_42 != r_42)))
                    _fail(r_42);
                  else
                    q_42 = r_42;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(q_42));
                t = h_87(t);
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
ATerm crush_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm y_42 = NULL;
  ATerm a_43 = NULL;
  y_42 = t;
  {
    ATerm b_43 = NULL;
    ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
    t = not_null(y_42);
    {
      b_43 = t;
      {
        t = SSL_explode_term(not_null(b_43));
        {
          d_43 = t;
          x_42 :
          if(match_cons(d_43, sym__2))
            {
              e_43 = ATgetArgument(d_43, 0);
              f_43 = ATgetArgument(d_43, 1);
              if(((a_43 != NULL) && (a_43 != f_43)))
                _fail(f_43);
              else
                a_43 = f_43;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_43);
      t = foldr_2(t, e_86, f_86);
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
    ATerm p_2 (ATerm t)
    {
      t = term_p_11;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym__2))
    {
      t_43 = ATgetArgument(s_43, 0);
      u_43 = ATgetArgument(s_43, 1);
      {
        ATerm f_14;
        f_14 = t;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_43), not_null(u_43));
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = SSL_gtr(not_null(t_43), not_null(u_43));
            }
        }
        t = f_14;
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
  ATerm a_44 = NULL;
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
      b_44 = t;
      z_43 :
      if(match_cons(b_44, sym__2))
        {
          c_44 = ATgetArgument(b_44, 0);
          d_44 = ATgetArgument(b_44, 1);
          {
            if(((a_44 != NULL) && (a_44 != c_44)))
              _fail(c_44);
            else
              a_44 = c_44;
            if(((a_44 != NULL) && (a_44 != d_44)))
              _fail(d_44);
            else
              a_44 = d_44;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm t_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_15;
      e_15 = t;
      {
        ATerm g_44 = NULL;
        ATerm h_44 = NULL;
        t = term_p_9;
        {
          t = get_config_0(t);
          {
            h_44 = t;
            if(((g_44 != NULL) && (g_44 != h_44)))
              _fail(h_44);
            else
              g_44 = h_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_44), term_w_7);
          t = geq_0(t);
        }
      }
      t = e_15;
      t = m_94(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = t_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm l_44 = NULL,n_44 = NULL;
    ATerm f_15;
    f_15 = t;
    {
      ATerm m_44 = NULL;
      t = run_time_0(t);
      {
        m_44 = t;
        if(((l_44 != NULL) && (l_44 != m_44)))
          _fail(m_44);
        else
          l_44 = m_44;
      }
    }
    t = f_15;
    {
      ATerm o_44 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          o_44 = t;
          if(((n_44 != NULL) && (n_44 != o_44)))
            _fail(o_44);
          else
            n_44 = o_44;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), not_null(l_44)), term_q_15), not_null(n_44)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  {
    t = term_p_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  u_44 :
  if(match_cons(v_44, sym_Version_0))
    {
      ATerm x_44 = NULL,z_44 = NULL;
      ATerm s_15;
      s_15 = t;
      {
        ATerm y_44 = NULL;
        t = SSLgetAnnotations(not_null(v_44));
        {
          y_44 = t;
          if(((x_44 != NULL) && (x_44 != y_44)))
            _fail(y_44);
          else
            x_44 = y_44;
        }
      }
      t = s_15;
      {
        ATerm a_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_44));
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
        t = not_null(z_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_92 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        {
          ATerm v_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_15);
            }
          else
            {
              t = v_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, r_2);
  t = s_92(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  t = SSL_table_create(not_null(f_45));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  {
    ATerm y_15;
    y_15 = t;
    {
      t = term_z_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_15, term_f_16, not_null(k_45));
          t = table_put_0(t);
        }
      }
    }
    t = y_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  t = SSL_table_destroy(not_null(q_45));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  t = SSL_exit(not_null(u_45));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  x_45 :
  if(((ATgetType(y_45) == AT_LIST) && ATisEmpty(y_45)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
        {
          z_45 = ATgetFirst((ATermList) y_45);
          a_46 = (ATerm) ATgetNext((ATermList) y_45);
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
  ATerm j_16;
  j_16 = t;
  {
    ATerm d_46 = NULL;
    ATerm g_46 = NULL;
    ATerm m_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = m_16;
        {
          ATerm e_46 = NULL;
          ATerm f_46 = NULL;
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
          t = (ATerm) ATinsert(ATempty, not_null(e_46));
        }
      }
    {
      g_46 = t;
      if(((d_46 != NULL) && (d_46 != g_46)))
        _fail(g_46);
      else
        d_46 = g_46;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(d_46));
      t = printnl_0(t);
    }
  }
  t = j_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm j_46 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = Cons_2(t, s_80, j_46);
      }
    return(t);
  }
  t = j_46(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  v_46 = t;
  s_46 :
  if(((ATgetType(v_46) == AT_LIST) && !(ATisEmpty(v_46))))
    {
      t_46 = ATgetFirst((ATermList) v_46);
      u_46 = (ATerm) ATgetNext((ATermList) v_46);
      {
        ATerm y_46 = NULL;
        t = not_null(u_46);
        {
          ATerm s_16;
          s_16 = t;
          {
            ATerm z_46 = NULL,b_47 = NULL,d_47 = NULL;
            ATerm t_16;
            t_16 = t;
            {
              ATerm a_47 = NULL;
              t = i_0(t);
              {
                a_47 = t;
                if(((z_46 != NULL) && (z_46 != a_47)))
                  _fail(a_47);
                else
                  z_46 = a_47;
              }
            }
            t = t_16;
            {
              ATerm c_47 = NULL;
              t = not_null(t_46);
              {
                t = h_0(t);
                {
                  c_47 = t;
                  if(((b_47 != NULL) && (b_47 != c_47)))
                    _fail(c_47);
                  else
                    b_47 = c_47;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), not_null(b_47));
                {
                  d_47 = t;
                  if(((y_46 != NULL) && (y_46 != d_47)))
                    _fail(d_47);
                  else
                    y_46 = d_47;
                }
              }
            }
          }
          t = s_16;
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(y_46);
              return(t);
            }
            t = reverse_acc_2(t, h_0, s_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_46) == AT_LIST) && ATisEmpty(v_46)))
        {
          {
            t = term_z_10;
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
  ATerm t_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_66 (ATerm))
{
  ATerm p_47 = NULL,q_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_Program_1))
    {
      q_47 = ATgetArgument(p_47, 0);
      {
        ATerm t_47 = NULL,v_47 = NULL;
        ATerm u_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        {
          t = not_null(q_47);
          {
            ATerm z_47 = NULL;
            t = b_66(t);
            {
              v_47 = t;
              {
                ATerm a_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_47)), not_null(t_47));
                {
                  a_48 = t;
                  if(((z_47 != NULL) && (z_47 != a_48)))
                    _fail(a_48);
                  else
                    z_47 = a_48;
                }
                t = not_null(z_47);
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
  ATerm o_48 = NULL;
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_48 = NULL;
      t = term_p_15;
      {
        t = get_config_0(t);
        {
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
        }
      }
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm v_2 (ATerm t)
          {
            ATerm q_48 = NULL;
            q_48 = t;
            if(((o_48 != NULL) && (o_48 != q_48)))
              _fail(q_48);
            else
              o_48 = q_48;
            return(t);
          }
          t = Program_1(t, v_2);
          return(t);
        }
        t = fetch_1(t, u_2);
      }
    }
  {
    t = term_w_16;
    {
      t = echo_0(t);
      {
        t = term_a_17;
        {
          t = table_get_0(t);
          {
            ATerm w_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, w_2);
            {
              ATerm x_2 (ATerm t)
              {
                ATerm r_48 = NULL;
                ATerm s_48 = NULL;
                s_48 = t;
                if(((r_48 != NULL) && (r_48 != s_48)))
                  _fail(s_48);
                else
                  r_48 = s_48;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_48)), term_f_17);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, x_2);
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
  ATerm g_17;
  g_17 = t;
  {
    ATerm x_48 = NULL;
    ATerm y_48 = NULL;
    y_48 = t;
    if(((x_48 != NULL) && (x_48 != y_48)))
      _fail(y_48);
    else
      x_48 = y_48;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(x_48)));
      t = printnl_0(t);
    }
  }
  t = g_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm h_17;
  h_17 = t;
  {
    t = r_91(t);
    t = debug_0(t);
  }
  t = h_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Undefined_1))
    {
      g_49 = ATgetArgument(f_49, 0);
      {
        ATerm j_49 = NULL,l_49 = NULL;
        ATerm k_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          k_49 = t;
          if(((j_49 != NULL) && (j_49 != k_49)))
            _fail(k_49);
          else
            j_49 = k_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm n_49 = NULL;
            t = c_66(t);
            {
              l_49 = t;
              {
                ATerm o_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_49)), not_null(j_49));
                {
                  o_49 = t;
                  if(((n_49 != NULL) && (n_49 != o_49)))
                    _fail(o_49);
                  else
                    n_49 = o_49;
                }
                t = not_null(n_49);
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
ATerm fetch_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm t_49 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_81, _id);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = Cons_2(t, _id, t_49);
      }
    return(t);
  }
  t = t_49(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_95 (ATerm))
{
  t = fetch_1(t, p_95);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym_Help_0))
    {
      ATerm a_50 = NULL,c_50 = NULL;
      ATerm p_17;
      p_17 = t;
      {
        ATerm b_50 = NULL;
        t = SSLgetAnnotations(not_null(y_49));
        {
          b_50 = t;
          if(((a_50 != NULL) && (a_50 != b_50)))
            _fail(b_50);
          else
            a_50 = b_50;
        }
      }
      t = p_17;
      {
        ATerm d_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_50));
        {
          d_50 = t;
          if(((c_50 != NULL) && (c_50 != d_50)))
            _fail(d_50);
          else
            c_50 = d_50;
        }
        t = not_null(c_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(match_cons(j_50, sym__2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      t = SSL_table_get(not_null(k_50), not_null(l_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym__3))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      v_50 = ATgetArgument(s_50, 2);
      {
        ATerm q_17;
        q_17 = t;
        {
          ATerm z_50 = NULL;
          ATerm a_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_50), not_null(u_50));
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                t = (ATerm) ATempty;
              }
            {
              a_51 = t;
              if(((z_50 != NULL) && (z_50 != a_51)))
                _fail(a_51);
              else
                z_50 = a_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_50), not_null(u_50), (ATerm) ATinsert(CheckATermList(not_null(z_50)), not_null(v_50)));
            t = table_put_0(t);
          }
        }
        t = q_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm e_51 = NULL;
  ATerm f_51 = NULL;
  t = term_z_10;
  {
    t = u_96(t);
    {
      f_51 = t;
      if(((e_51 != NULL) && (e_51 != f_51)))
        _fail(f_51);
      else
        e_51 = f_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_16, term_y_16, not_null(e_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_51 = NULL,t_51 = NULL,w_51 = NULL;
  s_51 = t;
  r_51 :
  if(match_string(s_51, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
        {
          t_51 = ATgetFirst((ATermList) s_51);
          w_51 = (ATerm) ATgetNext((ATermList) s_51);
          {
            ATerm z_51 = NULL;
            ATerm b_18;
            b_18 = t;
            {
              t = not_null(t_51);
              t = a_0(t);
            }
            t = b_18;
            {
              ATerm a_52 = NULL;
              t = term_z_10;
              {
                t = d_0(t);
                {
                  a_52 = t;
                  if(((z_51 != NULL) && (z_51 != a_52)))
                    _fail(a_52);
                  else
                    z_51 = a_52;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_51)), not_null(z_51));
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
  ATerm y_2 (ATerm t)
  {
    ATerm p_52 = NULL;
    p_52 = t;
    o_52 :
    if(!(match_string(p_52, "--help")))
      {
        if(!(match_string(p_52, "-h")))
          {
            if(!(match_string(p_52, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_q_18;
    {
      t = set_config_0(t);
      t = term_r_18;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_s_18;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  r_52 :
  if(((ATgetType(s_52) == AT_LIST) && !(ATisEmpty(s_52))))
    {
      t_52 = ATgetFirst((ATermList) s_52);
      u_52 = (ATerm) ATgetNext((ATermList) s_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_52)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_60 (ATerm), ATerm s_60 (ATerm))
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(((ATgetType(i_53) == AT_LIST) && !(ATisEmpty(i_53))))
    {
      j_53 = ATgetFirst((ATermList) i_53);
      k_53 = (ATerm) ATgetNext((ATermList) i_53);
      {
        ATerm o_53 = NULL,q_53 = NULL;
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(i_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
        {
          t = not_null(j_53);
          {
            ATerm t_53 = NULL;
            t = r_60(t);
            {
              q_53 = t;
              {
                t = not_null(k_53);
                {
                  ATerm v_53 = NULL;
                  t = s_60(t);
                  {
                    t_53 = t;
                    {
                      ATerm w_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_53)), not_null(q_53)), not_null(o_53));
                      {
                        w_53 = t;
                        if(((v_53 != NULL) && (v_53 != w_53)))
                          _fail(w_53);
                        else
                          v_53 = w_53;
                      }
                      t = not_null(v_53);
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
  ATerm g_54 = NULL;
  g_54 = t;
  f_54 :
  if(((ATgetType(g_54) == AT_LIST) && ATisEmpty(g_54)))
    {
      {
        ATerm i_54 = NULL,k_54 = NULL;
        ATerm t_18;
        t_18 = t;
        {
          ATerm j_54 = NULL;
          t = SSLgetAnnotations(not_null(g_54));
          {
            j_54 = t;
            if(((i_54 != NULL) && (i_54 != j_54)))
              _fail(j_54);
            else
              i_54 = j_54;
          }
        }
        t = t_18;
        {
          ATerm l_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_54));
          {
            l_54 = t;
            if(((k_54 != NULL) && (k_54 != l_54)))
              _fail(l_54);
            else
              k_54 = l_54;
          }
          t = not_null(k_54);
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
  ATerm r_54 = NULL,v_54 = NULL,w_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym__2))
    {
      v_54 = ATgetArgument(r_54, 0);
      w_54 = ATgetArgument(r_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_9, not_null(v_54), not_null(w_54));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_96 (ATerm))
{
  ATerm u_18;
  u_18 = t;
  {
    ATerm v_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_18;
        t = s_96(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = v_18;
        {
        }
      }
  }
  t = u_18;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm e_55 = NULL;
      ATerm a_19;
      a_19 = t;
      {
        ATerm c_55 = NULL;
        ATerm d_55 = NULL;
        d_55 = t;
        if(((c_55 != NULL) && (c_55 != d_55)))
          _fail(d_55);
        else
          c_55 = d_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(c_55));
          t = set_config_0(t);
        }
      }
      t = a_19;
      {
        ATerm f_55 = NULL;
        f_55 = t;
        if(((e_55 != NULL) && (e_55 != f_55)))
          _fail(f_55);
        else
          e_55 = f_55;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_55));
      }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                t = s_96(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_3, c_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  ATerm f_19;
  f_19 = t;
  {
    ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
    o_55 = t;
    k_55 :
    if(match_cons(o_55, sym__3))
      {
        p_55 = ATgetArgument(o_55, 0);
        q_55 = ATgetArgument(o_55, 1);
        r_55 = ATgetArgument(o_55, 2);
        {
          if(((l_55 != NULL) && (l_55 != p_55)))
            _fail(p_55);
          else
            l_55 = p_55;
          {
            if(((m_55 != NULL) && (m_55 != q_55)))
              _fail(q_55);
            else
              m_55 = q_55;
            {
              if(((n_55 != NULL) && (n_55 != r_55)))
                _fail(r_55);
              else
                n_55 = r_55;
              t = SSL_table_put(not_null(l_55), not_null(m_55), not_null(n_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_96 (ATerm))
{
  ATerm u_55 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    t = term_q_19;
    t = table_put_0(t);
  }
  t = l_19;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm y_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_96(t);
          LocalPopChoice(z_19);
        }
      else
        {
          t = y_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20;
          c_20 = t;
          {
            ATerm d_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_18;
                t = get_config_0(t);
                LocalPopChoice(i_20);
              }
            else
              {
                t = d_20;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_20;
          {
            t = system_usage_0(t);
            {
              t = term_p_11;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          {
            ATerm m_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm v_55 = NULL;
                    v_55 = t;
                    if(((u_55 != NULL) && (u_55 != v_55)))
                      _fail(v_55);
                    else
                      u_55 = v_55;
                    return(t);
                  }
                  t = Undefined_1(t, f_3);
                  return(t);
                }
                t = fetch_1(t, e_3);
                {
                  ATerm g_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_t_20);
                    return(t);
                  }
                  t = say_1(t, g_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_w_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_20);
              }
            else
              {
                t = m_20;
                {
                }
              }
          }
        }
      {
        ATerm u_20;
        u_20 = t;
        {
          t = term_x_16;
          t = table_destroy_0(t);
        }
        t = u_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm))
{
  t = parse_options_1(t, y_92);
  {
    t = store_options_0(t);
    {
      t = a_93(t);
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_92);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_93(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm s_93 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_93(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_93);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, h_3, r_93, s_93, i_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm l_93 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm b_21;
      b_21 = t;
      {
        ATerm y_55 = NULL;
        ATerm z_55 = NULL;
        t = term_p_15;
        {
          t = get_config_0(t);
          {
            z_55 = t;
            if(((y_55 != NULL) && (y_55 != z_55)))
              _fail(z_55);
            else
              y_55 = z_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(y_55)));
          t = printnl_0(t);
        }
      }
      t = b_21;
      return(t);
    }
    t = if_verbose2_1(t, k_3);
    return(t);
  }
  t = iowrap_4(t, j_93, k_93, l_93, j_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  t = iowrap_3(t, h_93, i_93, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    t = _2(t, _id, e_93);
    return(t);
  }
  t = iowrap_2(t, l_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_56 = NULL;
        ATerm q_56 = NULL;
        o_56 = t;
        {
          ATerm r_56 = NULL;
          ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
          t = not_null(o_56);
          {
            r_56 = t;
            {
              t = SSL_explode_term(not_null(r_56));
              {
                t_56 = t;
                l_56 :
                if(match_cons(t_56, sym__2))
                  {
                    u_56 = ATgetArgument(t_56, 0);
                    v_56 = ATgetArgument(t_56, 1);
                    m_56 :
                    if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
                      {
                        w_56 = ATgetFirst((ATermList) v_56);
                        x_56 = (ATerm) ATgetNext((ATermList) v_56);
                        n_56 :
                        if(((ATgetType(x_56) == AT_LIST) && ATisEmpty(x_56)))
                          {
                            if(((q_56 != NULL) && (q_56 != w_56)))
                              _fail(w_56);
                            else
                              q_56 = w_56;
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
          t = not_null(q_56);
        }
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
        }
      }
    {
      ATerm n_3 (ATerm t)
      {
        t = repeat_2(t, Desugar_0, _id);
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DesugarOnce_0(t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
              }
            }
        }
        return(t);
      }
      t = topdown_1(t, n_3);
    }
    return(t);
  }
  t = iowrap_1(t, m_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
