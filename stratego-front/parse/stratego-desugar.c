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
ATerm term_o_19;
ATerm term_q_18;
ATerm term_g_18;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_w_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_x_3;
void init_constant_terms (void)
{
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATempty);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATempty);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_d_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_k_10);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_k_10);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_k_10);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, (ATerm) ATempty);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm x_67 (ATerm), ATerm y_67 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm));
ATerm SVar_1 (ATerm, ATerm q_70 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm RDef_3 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm a_73 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_73 (ATerm));
ATerm at_last_1 (ATerm, ATerm y_81 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm j_90 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm u_90 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm i_74 (ATerm));
ATerm topdown_1 (ATerm, ATerm g_75 (ATerm));
ATerm _2 (ATerm, ATerm t_59 (ATerm), ATerm u_59 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_94 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_92 (ATerm));
ATerm debug_1 (ATerm, ATerm s_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_88 (ATerm), ATerm y_88 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm i_87 (ATerm), ATerm j_87 (ATerm));
ATerm crush_2 (ATerm, ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_94 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_92 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_96 (ATerm));
ATerm map_1 (ATerm, ATerm y_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_96 (ATerm));
ATerm Program_1 (ATerm, ATerm m_66 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_91 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_66 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_95 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_61 (ATerm), ATerm d_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_96 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_93 (ATerm), ATerm l_93 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_93 (ATerm));
ATerm stratego_desugar_0 (ATerm);
ATerm main_0 (ATerm);
ATerm RemoveLeadingPrime_0 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm g_4 = NULL,h_4 = NULL;
  u_3 = t;
  {
    ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
    t = not_null(u_3);
    {
      t = explode_string_0(t);
      {
        l_4 = t;
        s_3 :
        if(((ATgetType(l_4) == AT_LIST) && !(ATisEmpty(l_4))))
          {
            m_4 = ATgetFirst((ATermList) l_4);
            n_4 = (ATerm) ATgetNext((ATermList) l_4);
            t_3 :
            if(match_int(m_4, 39))
              {
                ATerm o_4 = NULL;
                if(((g_4 != NULL) && (g_4 != n_4)))
                  _fail(n_4);
                else
                  g_4 = n_4;
                {
                  t = not_null(g_4);
                  {
                    t = implode_string_0(t);
                    {
                      o_4 = t;
                      if(((h_4 != NULL) && (h_4 != o_4)))
                        _fail(o_4);
                      else
                        h_4 = o_4;
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
    t = not_null(h_4);
  }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_67 (ATerm), ATerm y_67 (ATerm))
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym_Op_2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm e_5 = NULL,g_5 = NULL;
        ATerm f_5 = NULL;
        t = SSLgetAnnotations(not_null(y_4));
        {
          f_5 = t;
          if(((e_5 != NULL) && (e_5 != f_5)))
            _fail(f_5);
          else
            e_5 = f_5;
        }
        {
          t = not_null(z_4);
          {
            ATerm i_5 = NULL;
            t = x_67(t);
            {
              g_5 = t;
              {
                t = not_null(a_5);
                {
                  ATerm k_5 = NULL;
                  t = y_67(t);
                  {
                    i_5 = t;
                    {
                      ATerm l_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_5), not_null(i_5)), not_null(e_5));
                      {
                        l_5 = t;
                        if(((k_5 != NULL) && (k_5 != l_5)))
                          _fail(l_5);
                        else
                          k_5 = l_5;
                      }
                      t = not_null(k_5);
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
ATerm OpDecl_2 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm))
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym_OpDecl_2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      {
        ATerm d_6 = NULL,f_6 = NULL;
        ATerm e_6 = NULL;
        t = SSLgetAnnotations(not_null(x_5));
        {
          e_6 = t;
          if(((d_6 != NULL) && (d_6 != e_6)))
            _fail(e_6);
          else
            d_6 = e_6;
        }
        {
          t = not_null(y_5);
          {
            ATerm h_6 = NULL;
            t = j_67(t);
            {
              f_6 = t;
              {
                t = not_null(z_5);
                {
                  ATerm j_6 = NULL;
                  t = k_67(t);
                  {
                    h_6 = t;
                    {
                      ATerm k_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_OpDecl_2, not_null(f_6), not_null(h_6)), not_null(d_6));
                      {
                        k_6 = t;
                        if(((j_6 != NULL) && (j_6 != k_6)))
                          _fail(k_6);
                        else
                          j_6 = k_6;
                      }
                      t = not_null(j_6);
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
ATerm SVar_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL;
  v_6 = t;
  u_6 :
  if(match_cons(v_6, sym_SVar_1))
    {
      w_6 = ATgetArgument(v_6, 0);
      {
        ATerm z_6 = NULL,b_7 = NULL;
        ATerm a_7 = NULL;
        t = SSLgetAnnotations(not_null(v_6));
        {
          a_7 = t;
          if(((z_6 != NULL) && (z_6 != a_7)))
            _fail(a_7);
          else
            z_6 = a_7;
        }
        {
          t = not_null(w_6);
          {
            ATerm d_7 = NULL;
            t = q_70(t);
            {
              b_7 = t;
              {
                ATerm e_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_7)), not_null(z_6));
                {
                  e_7 = t;
                  if(((d_7 != NULL) && (d_7 != e_7)))
                    _fail(e_7);
                  else
                    d_7 = e_7;
                }
                t = not_null(d_7);
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
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Var_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm q_3 = t;
        int r_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL,c_8 = NULL;
            ATerm b_8 = NULL;
            t = SSLgetAnnotations(not_null(w_7));
            {
              b_8 = t;
              if(((a_8 != NULL) && (a_8 != b_8)))
                _fail(b_8);
              else
                a_8 = b_8;
            }
            {
              t = not_null(x_7);
              {
                ATerm e_8 = NULL;
                t = m_0(t);
                {
                  c_8 = t;
                  {
                    ATerm f_8 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_8)), not_null(a_8));
                    {
                      f_8 = t;
                      if(((e_8 != NULL) && (e_8 != f_8)))
                        _fail(f_8);
                      else
                        e_8 = f_8;
                    }
                    t = not_null(e_8);
                  }
                }
              }
            }
            ;
            LocalPopChoice(r_3);
          }
        else
          {
            t = q_3;
            {
              ATerm v_3 = t;
              int w_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_8 = NULL,k_8 = NULL;
                  ATerm j_8 = NULL;
                  t = SSLgetAnnotations(not_null(w_7));
                  {
                    j_8 = t;
                    if(((i_8 != NULL) && (i_8 != j_8)))
                      _fail(j_8);
                    else
                      i_8 = j_8;
                  }
                  {
                    t = not_null(x_7);
                    {
                      ATerm m_8 = NULL;
                      t = m_0(t);
                      {
                        k_8 = t;
                        {
                          ATerm n_8 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_8)), not_null(i_8));
                          {
                            n_8 = t;
                            if(((m_8 != NULL) && (m_8 != n_8)))
                              _fail(n_8);
                            else
                              m_8 = n_8;
                          }
                          t = not_null(m_8);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = v_3;
                  {
                    ATerm q_8 = NULL,s_8 = NULL;
                    ATerm r_8 = NULL;
                    t = SSLgetAnnotations(not_null(w_7));
                    {
                      r_8 = t;
                      if(((q_8 != NULL) && (q_8 != r_8)))
                        _fail(r_8);
                      else
                        q_8 = r_8;
                    }
                    {
                      t = not_null(x_7);
                      {
                        ATerm u_8 = NULL;
                        t = m_0(t);
                        {
                          s_8 = t;
                          {
                            ATerm v_8 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_8)), not_null(q_8));
                            {
                              v_8 = t;
                              if(((u_8 != NULL) && (u_8 != v_8)))
                                _fail(v_8);
                              else
                                u_8 = v_8;
                            }
                            t = not_null(u_8);
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
ATerm VarDec_2 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_VarDec_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm y_9 = NULL;
            t = b_73(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = c_73(t);
                  {
                    y_9 = t;
                    {
                      ATerm b_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_9), not_null(y_9)), not_null(u_9));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_SDef_3))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm a_11 = NULL;
            t = f_73(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = g_73(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = h_73(t);
                        {
                          c_11 = t;
                          {
                            ATerm f_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_10), not_null(a_11), not_null(c_11)), not_null(w_10));
                            {
                              f_11 = t;
                              if(((e_11 != NULL) && (e_11 != f_11)))
                                _fail(f_11);
                              else
                                e_11 = f_11;
                            }
                            t = not_null(e_11);
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
ATerm RDef_3 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm s_69 (ATerm))
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_RDef_3))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      w_11 = ATgetArgument(t_11, 2);
      {
        ATerm b_12 = NULL,d_12 = NULL;
        ATerm c_12 = NULL;
        t = SSLgetAnnotations(not_null(t_11));
        {
          c_12 = t;
          if(((b_12 != NULL) && (b_12 != c_12)))
            _fail(c_12);
          else
            b_12 = c_12;
        }
        {
          t = not_null(u_11);
          {
            ATerm f_12 = NULL;
            t = q_69(t);
            {
              d_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm h_12 = NULL;
                  t = r_69(t);
                  {
                    f_12 = t;
                    {
                      t = not_null(w_11);
                      {
                        ATerm j_12 = NULL;
                        t = s_69(t);
                        {
                          h_12 = t;
                          {
                            ATerm k_12 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(d_12), not_null(f_12), not_null(h_12)), not_null(b_12));
                            {
                              k_12 = t;
                              if(((j_12 != NULL) && (j_12 != k_12)))
                                _fail(k_12);
                              else
                                j_12 = k_12;
                            }
                            t = not_null(j_12);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_DefaultVarDec_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      {
        ATerm a_13 = NULL,c_13 = NULL;
        ATerm b_13 = NULL;
        t = SSLgetAnnotations(not_null(w_12));
        {
          b_13 = t;
          if(((a_13 != NULL) && (a_13 != b_13)))
            _fail(b_13);
          else
            a_13 = b_13;
        }
        {
          t = not_null(x_12);
          {
            ATerm e_13 = NULL;
            t = a_73(t);
            {
              c_13 = t;
              {
                ATerm f_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DefaultVarDec_1, not_null(c_13)), not_null(a_13));
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
                t = not_null(e_13);
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
  ATerm l_13 = NULL;
  l_13 = t;
  t = SSL_string_to_real(not_null(l_13));
  return(t);
}
ATerm UnEscape_tab_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  t_13 = t;
  p_13 :
  if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
    {
      u_13 = ATgetFirst((ATermList) t_13);
      v_13 = (ATerm) ATgetNext((ATermList) t_13);
      q_13 :
      if(match_int(u_13, 92))
        {
          r_13 :
          if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
            {
              w_13 = ATgetFirst((ATermList) v_13);
              x_13 = (ATerm) ATgetNext((ATermList) v_13);
              s_13 :
              if(match_int(w_13, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_13)), term_x_3);
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
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  b_14 :
  if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
    {
      g_14 = ATgetFirst((ATermList) f_14);
      h_14 = (ATerm) ATgetNext((ATermList) f_14);
      c_14 :
      if(match_int(g_14, 92))
        {
          d_14 :
          if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
            {
              i_14 = ATgetFirst((ATermList) h_14);
              j_14 = (ATerm) ATgetNext((ATermList) h_14);
              e_14 :
              if(match_int(i_14, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_14)), term_y_3);
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
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  r_14 = t;
  n_14 :
  if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
    {
      s_14 = ATgetFirst((ATermList) r_14);
      t_14 = (ATerm) ATgetNext((ATermList) r_14);
      o_14 :
      if(match_int(s_14, 92))
        {
          p_14 :
          if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
            {
              u_14 = ATgetFirst((ATermList) t_14);
              v_14 = (ATerm) ATgetNext((ATermList) t_14);
              q_14 :
              if(match_int(u_14, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_14)), term_z_3);
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
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  d_15 = t;
  z_14 :
  if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
    {
      e_15 = ATgetFirst((ATermList) d_15);
      f_15 = (ATerm) ATgetNext((ATermList) d_15);
      a_15 :
      if(match_int(e_15, 92))
        {
          b_15 :
          if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
            {
              g_15 = ATgetFirst((ATermList) f_15);
              h_15 = (ATerm) ATgetNext((ATermList) f_15);
              c_15 :
              if(match_int(g_15, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_15)), term_a_4);
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
  ATerm b_4 = t;
  int c_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      ;
      LocalPopChoice(c_4);
    }
  else
    {
      t = b_4;
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
            {
              ATerm f_4 = t;
              int i_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(i_4);
                }
              else
                {
                  t = f_4;
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
  t = try_1(t, UnEscape_0);
  {
    ATerm j_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(k_4);
      }
    else
      {
        t = j_4;
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
  ATerm p_4 = t;
  int q_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
      t_15 = t;
      s_15 :
      if(match_cons(t_15, sym_Str_1))
        {
          u_15 = ATgetArgument(t_15, 0);
          {
            ATerm y_15 = NULL;
            ATerm z_15 = NULL;
            t = not_null(u_15);
            {
              t = un_double_quote_0(t);
              {
                t = unescape_0(t);
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_15));
          }
        }
      else
        {
          if(match_cons(t_15, sym_Real_1))
            {
              u_15 = ATgetArgument(t_15, 0);
              {
                ATerm b_16 = NULL;
                ATerm c_16 = NULL;
                t = not_null(u_15);
                {
                  t = string_to_real_0(t);
                  {
                    c_16 = t;
                    if(((b_16 != NULL) && (b_16 != c_16)))
                      _fail(c_16);
                    else
                      b_16 = c_16;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_16));
              }
            }
          else
            {
              if(match_cons(t_15, sym_Int_1))
                {
                  u_15 = ATgetArgument(t_15, 0);
                  {
                    ATerm e_16 = NULL;
                    ATerm f_16 = NULL;
                    t = not_null(u_15);
                    {
                      t = string_to_int_0(t);
                      {
                        f_16 = t;
                        if(((e_16 != NULL) && (e_16 != f_16)))
                          _fail(f_16);
                        else
                          e_16 = f_16;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Int_1, not_null(e_16));
                  }
                }
              else
                {
                  if(match_cons(t_15, sym_Con_3))
                    {
                      u_15 = ATgetArgument(t_15, 0);
                      v_15 = ATgetArgument(t_15, 1);
                      w_15 = ATgetArgument(t_15, 2);
                      {
                        t = not_null(w_15);
                        t = is_string_0(t);
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(u_15), not_null(v_15), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_15)), (ATerm) ATempty));
                      }
                    }
                  else
                    {
                      _fail(t);
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
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            ;
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm t_4 = t;
              int u_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
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
                        t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(w_4);
                      }
                    else
                      {
                        t = v_4;
                        {
                          ATerm b_5 = t;
                          int c_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                              ;
                              LocalPopChoice(c_5);
                            }
                          else
                            {
                              t = b_5;
                              {
                                ATerm d_5 = t;
                                int h_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, RemoveLeadingPrime_0);
                                    ;
                                    LocalPopChoice(h_5);
                                  }
                                else
                                  {
                                    t = d_5;
                                    {
                                      ATerm j_5 = t;
                                      int m_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, RemoveLeadingPrime_0);
                                          ;
                                          LocalPopChoice(m_5);
                                        }
                                      else
                                        {
                                          t = j_5;
                                          {
                                            ATerm n_5 = t;
                                            int o_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(o_5);
                                              }
                                            else
                                              {
                                                t = n_5;
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
ATerm try_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_73(t);
      ;
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm r_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_81(t);
        ;
        LocalPopChoice(s_5);
      }
    else
      {
        t = r_5;
        t = Cons_2(t, _id, q_16);
      }
    return(t);
  }
  t = q_16(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(((ATgetType(t_16) == AT_LIST) && !(ATisEmpty(t_16))))
    {
      u_16 = ATgetFirst((ATermList) t_16);
      v_16 = (ATerm) ATgetNext((ATermList) t_16);
      t = not_null(v_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  z_16 :
  if(((ATgetType(b_17) == AT_LIST) && !(ATisEmpty(b_17))))
    {
      c_17 = ATgetFirst((ATermList) b_17);
      d_17 = (ATerm) ATgetNext((ATermList) b_17);
      a_17 :
      if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
        {
          t = not_null(c_17);
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
      ;
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
    {
      k_17 = ATgetFirst((ATermList) j_17);
      l_17 = (ATerm) ATgetNext((ATermList) j_17);
      t = not_null(k_17);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm v_5;
  v_5 = t;
  {
    t = Hd_0(t);
    t = j_90(t);
  }
  t = v_5;
  {
    ATerm a_6;
    a_6 = t;
    {
      t = last_0(t);
      t = j_90(t);
    }
    t = a_6;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm p_17 = NULL;
    p_17 = t;
    o_17 :
    if(!(match_int(p_17, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, b_0);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm u_90 (ATerm))
{
  t = explode_string_0(t);
  {
    t = u_90(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm DesugarCharGeneric_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  x_17 = t;
  r_17 :
  if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
    {
      y_17 = ATgetFirst((ATermList) x_17);
      z_17 = (ATerm) ATgetNext((ATermList) x_17);
      s_17 :
      if(match_int(y_17, 39))
        {
          t_17 :
          if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
            {
              a_18 = ATgetFirst((ATermList) z_17);
              b_18 = (ATerm) ATgetNext((ATermList) z_17);
              u_17 :
              if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
                {
                  c_18 = ATgetFirst((ATermList) b_18);
                  d_18 = (ATerm) ATgetNext((ATermList) b_18);
                  v_17 :
                  if(match_int(c_18, 39))
                    {
                      w_17 :
                      if(((ATgetType(d_18) == AT_LIST) && ATisEmpty(d_18)))
                        {
                          t = not_null(a_18);
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
  ATerm m_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_string(m_18, "'\\ '"))
    {
      t = term_b_6;
    }
  else
    {
      if(match_string(m_18, "'\\r'"))
        {
          t = term_c_6;
        }
      else
        {
          if(match_string(m_18, "'\\t'"))
            {
              t = term_x_3;
            }
          else
            {
              if(match_string(m_18, "'\\n'"))
                {
                  t = term_y_3;
                }
              else
                {
                  if(match_string(m_18, "'\\''"))
                    {
                      t = term_g_6;
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
  ATerm z_18 = NULL;
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  z_18 = t;
  {
    ATerm e_19 = NULL;
    ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
    t = not_null(z_18);
    {
      e_19 = t;
      {
        t = SSL_explode_term(not_null(e_19));
        {
          g_19 = t;
          v_18 :
          if(match_cons(g_19, sym__2))
            {
              h_19 = ATgetArgument(g_19, 0);
              i_19 = ATgetArgument(g_19, 1);
              w_18 :
              if(match_string(h_19, ""))
                {
                  x_18 :
                  if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
                    {
                      j_19 = ATgetFirst((ATermList) i_19);
                      k_19 = (ATerm) ATgetNext((ATermList) i_19);
                      y_18 :
                      if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
                        {
                          l_19 = ATgetFirst((ATermList) k_19);
                          m_19 = (ATerm) ATgetNext((ATermList) k_19);
                          {
                            if(((b_19 != NULL) && (b_19 != j_19)))
                              _fail(j_19);
                            else
                              b_19 = j_19;
                            {
                              if(((d_19 != NULL) && (d_19 != l_19)))
                                _fail(l_19);
                              else
                                d_19 = l_19;
                              if(((c_19 != NULL) && (c_19 != m_19)))
                                _fail(m_19);
                              else
                                c_19 = m_19;
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
    t = not_null(d_19);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm y_19 = NULL,z_19 = NULL;
  w_19 = t;
  {
    ATerm a_20 = NULL;
    ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
    t = not_null(w_19);
    {
      a_20 = t;
      {
        t = SSL_explode_term(not_null(a_20));
        {
          c_20 = t;
          t_19 :
          if(match_cons(c_20, sym__2))
            {
              d_20 = ATgetArgument(c_20, 0);
              e_20 = ATgetArgument(c_20, 1);
              u_19 :
              if(match_string(d_20, ""))
                {
                  v_19 :
                  if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
                    {
                      f_20 = ATgetFirst((ATermList) e_20);
                      g_20 = (ATerm) ATgetNext((ATermList) e_20);
                      {
                        if(((z_19 != NULL) && (z_19 != f_20)))
                          _fail(f_20);
                        else
                          z_19 = f_20;
                        if(((y_19 != NULL) && (y_19 != g_20)))
                          _fail(g_20);
                        else
                          y_19 = g_20;
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
    t = not_null(z_19);
  }
  return(t);
}
ATerm Desugar_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  ATerm p_26 (ATerm t)
  {
    t = not_null(u_22);
    {
      ATerm i_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_l_6, not_null(u_22));
    return(t);
  }
  ATerm r_29 (ATerm t)
  {
    t = not_null(p_22);
    return(t);
  }
  ATerm s_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(u_22)));
    return(t);
  }
  ATerm t_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(u_22)));
    return(t);
  }
  ATerm u_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_22)));
    return(t);
  }
  ATerm v_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_22)), (ATerm) ATempty);
    return(t);
  }
  ATerm w_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_22)), not_null(v_22));
    return(t);
  }
  ATerm x_29 (ATerm t)
  {
    t = not_null(u_22);
    {
      ATerm e_0 (ATerm t)
      {
        t = not_null(v_22);
        return(t);
      }
      ATerm f_0 (ATerm t)
      {
        ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
        n_24 = t;
        d_22 :
        if(match_cons(n_24, sym__2))
          {
            o_24 = ATgetArgument(n_24, 0);
            p_24 = ATgetArgument(n_24, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), not_null(o_24)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, e_0, f_0);
    }
    return(t);
  }
  ATerm y_29 (ATerm t)
  {
    t = not_null(u_22);
    {
      ATerm h_0 (ATerm t)
      {
        t = term_q_6;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
        t_24 = t;
        f_22 :
        if(match_cons(t_24, sym__2))
          {
            u_24 = ATgetArgument(t_24, 0);
            v_24 = ATgetArgument(t_24, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), not_null(u_24)));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = foldr_2(t, h_0, n_0);
    }
    return(t);
  }
  ATerm z_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(CheckATermList(not_null(v_22)), not_null(u_22)));
    return(t);
  }
  ATerm a_30 (ATerm t)
  {
    t = not_null(u_22);
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
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, not_null(u_22));
    return(t);
  }
  ATerm b_30 (ATerm t)
  {
    t = not_null(p_22);
    return(t);
  }
  ATerm c_30 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  ATerm d_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), not_null(u_22)));
    return(t);
  }
  ATerm e_30 (ATerm t)
  {
    t = not_null(u_22);
    return(t);
  }
  ATerm f_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(u_22), not_null(v_22), term_c_7);
    return(t);
  }
  ATerm g_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_22), not_null(v_22), term_c_7);
    return(t);
  }
  ATerm h_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(u_22), (ATerm)ATempty, not_null(v_22));
    return(t);
  }
  ATerm i_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_22), not_null(u_22));
    return(t);
  }
  ATerm j_30 (ATerm t)
  {
    ATerm p_25 = NULL;
    ATerm q_25 = NULL;
    t = not_null(u_22);
    {
      t = un_double_quote_0(t);
      {
        q_25 = t;
        if(((p_25 != NULL) && (p_25 != q_25)))
          _fail(q_25);
        else
          p_25 = q_25;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_25), not_null(v_22));
    return(t);
  }
  ATerm k_30 (ATerm t)
  {
    ATerm s_25 = NULL;
    ATerm t_25 = NULL;
    t = not_null(u_22);
    {
      t = un_double_quote_0(t);
      {
        t_25 = t;
        if(((s_25 != NULL) && (s_25 != t_25)))
          _fail(t_25);
        else
          s_25 = t_25;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(s_25), (ATerm) ATempty);
    return(t);
  }
  ATerm l_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(u_22), (ATerm) ATempty);
    return(t);
  }
  ATerm m_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_22), (ATerm)ATempty, not_null(v_22));
    return(t);
  }
  ATerm n_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(u_22), not_null(v_22), not_null(s_22));
    return(t);
  }
  ATerm o_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(u_22), (ATerm)ATempty, not_null(v_22));
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(u_22), (ATerm)ATempty, not_null(v_22));
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(v_22));
    return(t);
  }
  t_22 = t;
  i_22 :
  if(match_cons(t_22, sym_Anno_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      {
        ATerm y_22 = NULL;
        ATerm d_23 = NULL;
        t = not_null(v_22);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_f_7;
            return(t);
          }
          ATerm p_0 (ATerm t)
          {
            ATerm z_22 = NULL,b_23 = NULL;
            ATerm g_7;
            g_7 = t;
            {
              ATerm a_23 = NULL;
              t = Fst_0(t);
              {
                a_23 = t;
                if(((z_22 != NULL) && (z_22 != a_23)))
                  _fail(a_23);
                else
                  z_22 = a_23;
              }
            }
            t = g_7;
            {
              ATerm c_23 = NULL;
              t = Snd_0(t);
              {
                c_23 = t;
                if(((b_23 != NULL) && (b_23 != c_23)))
                  _fail(c_23);
                else
                  b_23 = c_23;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_23)), not_null(z_22)));
            }
            return(t);
          }
          t = foldr_2(t, o_0, p_0);
          {
            d_23 = t;
            if(((y_22 != NULL) && (y_22 != d_23)))
              _fail(d_23);
            else
              y_22 = d_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(u_22), not_null(y_22));
      }
    }
  else
    {
      if(match_cons(t_22, sym_SortNoArgs_1))
        {
          u_22 = ATgetArgument(t_22, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(u_22), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t_22, sym_Char_1))
            {
              u_22 = ATgetArgument(t_22, 0);
              {
                ATerm g_23 = NULL;
                ATerm h_23 = NULL;
                t = not_null(u_22);
                {
                  ATerm h_7 = t;
                  int i_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      ;
                      LocalPopChoice(i_7);
                    }
                  else
                    {
                      t = h_7;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    h_23 = t;
                    if(((g_23 != NULL) && (g_23 != h_23)))
                      _fail(h_23);
                    else
                      g_23 = h_23;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(g_23));
              }
            }
          else
            {
              if(match_cons(t_22, sym_Con4_4))
                {
                  u_22 = ATgetArgument(t_22, 0);
                  v_22 = ATgetArgument(t_22, 1);
                  s_22 = ATgetArgument(t_22, 2);
                  o_22 = ATgetArgument(t_22, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(u_22), not_null(s_22), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_22)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t_22, sym_Con3_3))
                    {
                      u_22 = ATgetArgument(t_22, 0);
                      v_22 = ATgetArgument(t_22, 1);
                      s_22 = ATgetArgument(t_22, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(u_22), not_null(s_22), term_l_7);
                    }
                  else
                    {
                      if(match_cons(t_22, sym_Con1_2))
                        {
                          u_22 = ATgetArgument(t_22, 0);
                          v_22 = ATgetArgument(t_22, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(u_22), not_null(v_22), term_l_7);
                        }
                      else
                        {
                          if(match_cons(t_22, sym_ListTail_2))
                            {
                              u_22 = ATgetArgument(t_22, 0);
                              v_22 = ATgetArgument(t_22, 1);
                              {
                                t = not_null(u_22);
                                {
                                  ATerm q_0 (ATerm t)
                                  {
                                    t = not_null(v_22);
                                    return(t);
                                  }
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
                                    s_23 = t;
                                    z_21 :
                                    if(match_cons(s_23, sym__2))
                                      {
                                        t_23 = ATgetArgument(s_23, 0);
                                        u_23 = ATgetArgument(s_23, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_23)), not_null(t_23)));
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = foldr_2(t, q_0, r_0);
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t_22, sym_List_1))
                                {
                                  u_22 = ATgetArgument(t_22, 0);
                                  {
                                    t = not_null(u_22);
                                    {
                                      ATerm s_0 (ATerm t)
                                      {
                                        t = term_f_7;
                                        return(t);
                                      }
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
                                        y_23 = t;
                                        b_22 :
                                        if(match_cons(y_23, sym__2))
                                          {
                                            z_23 = ATgetArgument(y_23, 0);
                                            a_24 = ATgetArgument(y_23, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), not_null(z_23)));
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = foldr_2(t, s_0, t_0);
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t_22, sym_Tuple_1))
                                    {
                                      u_22 = ATgetArgument(t_22, 0);
                                      j_22 :
                                      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                                        {
                                          p_22 = ATgetFirst((ATermList) u_22);
                                          q_22 = (ATerm) ATgetNext((ATermList) u_22);
                                          k_22 :
                                          if(((ATgetType(q_22) == AT_LIST) && ATisEmpty(q_22)))
                                            {
                                              {
                                                ATerm m_7 = t;
                                                int n_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_26(t);
                                                    ;
                                                    LocalPopChoice(n_7);
                                                  }
                                                else
                                                  {
                                                    t = m_7;
                                                    t = r_29(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = p_26(t);
                                            }
                                        }
                                      else
                                        {
                                          t = p_26(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t_22, sym_RealCong_1))
                                        {
                                          u_22 = ATgetArgument(t_22, 0);
                                          t = s_29(t);
                                        }
                                      else
                                        {
                                          if(match_cons(t_22, sym_IntCong_1))
                                            {
                                              u_22 = ATgetArgument(t_22, 0);
                                              t = t_29(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t_22, sym_StrCong_1))
                                                {
                                                  u_22 = ATgetArgument(t_22, 0);
                                                  t = u_29(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t_22, sym_ModCongNoArgs_1))
                                                    {
                                                      u_22 = ATgetArgument(t_22, 0);
                                                      t = v_29(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t_22, sym_ModCong_2))
                                                        {
                                                          u_22 = ATgetArgument(t_22, 0);
                                                          v_22 = ATgetArgument(t_22, 1);
                                                          t = w_29(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t_22, sym_ListCong_2))
                                                            {
                                                              u_22 = ATgetArgument(t_22, 0);
                                                              v_22 = ATgetArgument(t_22, 1);
                                                              t = x_29(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t_22, sym_ListCongNoTail_1))
                                                                {
                                                                  u_22 = ATgetArgument(t_22, 0);
                                                                  t = y_29(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t_22, sym_TupleCong_2))
                                                                    {
                                                                      u_22 = ATgetArgument(t_22, 0);
                                                                      v_22 = ATgetArgument(t_22, 1);
                                                                      t = z_29(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t_22, sym_TupleCong_1))
                                                                        {
                                                                          u_22 = ATgetArgument(t_22, 0);
                                                                          l_22 :
                                                                          if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                                                                            {
                                                                              p_22 = ATgetFirst((ATermList) u_22);
                                                                              q_22 = (ATerm) ATgetNext((ATermList) u_22);
                                                                              m_22 :
                                                                              if(((ATgetType(q_22) == AT_LIST) && ATisEmpty(q_22)))
                                                                                {
                                                                                  {
                                                                                    ATerm o_7 = t;
                                                                                    int p_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = a_30(t);
                                                                                        ;
                                                                                        LocalPopChoice(p_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_7;
                                                                                        t = b_30(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_30(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_30(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t_22, sym_TupleCong_0))
                                                                            {
                                                                              t = c_30(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t_22, sym_AnnoCong_2))
                                                                                {
                                                                                  u_22 = ATgetArgument(t_22, 0);
                                                                                  v_22 = ATgetArgument(t_22, 1);
                                                                                  n_22 :
                                                                                  if(match_cons(v_22, sym_StrategyCurly_1))
                                                                                    {
                                                                                      r_22 = ATgetArgument(v_22, 0);
                                                                                      t = d_30(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t_22, sym_ParenStrat_1))
                                                                                    {
                                                                                      u_22 = ATgetArgument(t_22, 0);
                                                                                      t = e_30(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t_22, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          u_22 = ATgetArgument(t_22, 0);
                                                                                          v_22 = ATgetArgument(t_22, 1);
                                                                                          t = f_30(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t_22, sym_RuleNoCond_2))
                                                                                            {
                                                                                              u_22 = ATgetArgument(t_22, 0);
                                                                                              v_22 = ATgetArgument(t_22, 1);
                                                                                              t = g_30(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t_22, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  u_22 = ATgetArgument(t_22, 0);
                                                                                                  v_22 = ATgetArgument(t_22, 1);
                                                                                                  t = h_30(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t_22, sym_RChoice_2))
                                                                                                    {
                                                                                                      u_22 = ATgetArgument(t_22, 0);
                                                                                                      v_22 = ATgetArgument(t_22, 1);
                                                                                                      t = i_30(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t_22, sym_Prim_2))
                                                                                                        {
                                                                                                          u_22 = ATgetArgument(t_22, 0);
                                                                                                          v_22 = ATgetArgument(t_22, 1);
                                                                                                          t = j_30(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t_22, sym_PrimNoArgs_1))
                                                                                                            {
                                                                                                              u_22 = ATgetArgument(t_22, 0);
                                                                                                              t = k_30(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t_22, sym_CallNoArgs_1))
                                                                                                                {
                                                                                                                  u_22 = ATgetArgument(t_22, 0);
                                                                                                                  t = l_30(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t_22, sym_SDefNoArgs_2))
                                                                                                                    {
                                                                                                                      u_22 = ATgetArgument(t_22, 0);
                                                                                                                      v_22 = ATgetArgument(t_22, 1);
                                                                                                                      t = m_30(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t_22, sym_SRDef_3))
                                                                                                                        {
                                                                                                                          u_22 = ATgetArgument(t_22, 0);
                                                                                                                          v_22 = ATgetArgument(t_22, 1);
                                                                                                                          s_22 = ATgetArgument(t_22, 2);
                                                                                                                          t = n_30(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t_22, sym_SRDefNoArgs_2))
                                                                                                                            {
                                                                                                                              u_22 = ATgetArgument(t_22, 0);
                                                                                                                              v_22 = ATgetArgument(t_22, 1);
                                                                                                                              t = o_30(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t_22, sym_RDefNoArgs_2))
                                                                                                                                {
                                                                                                                                  u_22 = ATgetArgument(t_22, 0);
                                                                                                                                  v_22 = ATgetArgument(t_22, 1);
                                                                                                                                  t = p_30(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t_22, sym_Module_2))
                                                                                                                                    {
                                                                                                                                      u_22 = ATgetArgument(t_22, 0);
                                                                                                                                      v_22 = ATgetArgument(t_22, 1);
                                                                                                                                      t = q_30(t);
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
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm b_31 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = i_74(t);
      t = b_31(t);
      return(t);
    }
    t = try_1(t, u_0);
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_75 (ATerm))
{
  t = g_75(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = topdown_1(t, g_75);
      return(t);
    }
    t = _all(t, v_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_59 (ATerm), ATerm u_59 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym__2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      {
        ATerm t_31 = NULL,b_32 = NULL;
        ATerm u_31 = NULL;
        t = SSLgetAnnotations(not_null(n_31));
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
        {
          t = not_null(o_31);
          {
            ATerm d_32 = NULL;
            t = t_59(t);
            {
              b_32 = t;
              {
                t = not_null(p_31);
                {
                  ATerm f_32 = NULL;
                  t = u_59(t);
                  {
                    d_32 = t;
                    {
                      ATerm g_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_32), not_null(d_32)), not_null(t_31));
                      {
                        g_32 = t;
                        if(((f_32 != NULL) && (f_32 != g_32)))
                          _fail(g_32);
                        else
                          f_32 = g_32;
                      }
                      t = not_null(f_32);
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
  ATerm o_32 = NULL;
  ATerm q_7;
  q_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm p_32 = NULL,q_32 = NULL;
      p_32 = t;
      n_32 :
      if(match_cons(p_32, sym_Program_1))
        {
          q_32 = ATgetArgument(p_32, 0);
          if(((o_32 != NULL) && (o_32 != q_32)))
            _fail(q_32);
          else
            o_32 = q_32;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(o_32)), term_s_7));
      {
        t = printnl_0(t);
        {
          t = term_u_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym__2))
    {
      v_32 = ATgetArgument(u_32, 0);
      w_32 = ATgetArgument(u_32, 1);
      {
        ATerm y_7;
        y_7 = t;
        t = SSL_printnl(not_null(v_32), not_null(w_32));
        t = y_7;
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
  ATerm b_33 = NULL;
  b_33 = t;
  t = SSL_implode_string(not_null(b_33));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_7 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = z_7;
      {
        ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
        g_33 = t;
        f_33 :
        if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
          {
            h_33 = ATgetFirst((ATermList) g_33);
            i_33 = (ATerm) ATgetNext((ATermList) g_33);
            {
              t = not_null(h_33);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(i_33);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_0);
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
  ATerm s_33 = NULL;
  ATerm u_33 = NULL;
  s_33 = t;
  {
    ATerm v_33 = NULL;
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
    t = not_null(s_33);
    {
      v_33 = t;
      {
        t = SSL_explode_term(not_null(v_33));
        {
          x_33 = t;
          q_33 :
          if(match_cons(x_33, sym__2))
            {
              y_33 = ATgetArgument(x_33, 0);
              z_33 = ATgetArgument(x_33, 1);
              r_33 :
              if(match_string(y_33, ""))
                {
                  if(((u_33 != NULL) && (u_33 != z_33)))
                    _fail(z_33);
                  else
                    u_33 = z_33;
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
      t = not_null(u_33);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm d_34 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_34);
        ;
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        {
          t = Nil_0(t);
          t = n_81(t);
        }
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym__2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        t = not_null(h_34);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(i_34);
            return(t);
          }
          t = at_end_1(t, y_0);
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
  ATerm l_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = l_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_explode_string(not_null(n_34));
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
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_is_string(not_null(r_34));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = p_8;
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
              a_35 = t;
              z_34 :
              if(match_cons(a_35, sym_Path_1))
                {
                  b_35 = ATgetArgument(a_35, 0);
                  t = not_null(b_35);
                }
              else
                {
                  if(match_cons(a_35, sym_Var_1))
                    {
                      b_35 = ATgetArgument(a_35, 0);
                      {
                        t = not_null(b_35);
                        {
                          ATerm y_8 = t;
                          int z_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_8);
                            }
                          else
                            {
                              t = y_8;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_a_9;
                                  return(t);
                                }
                                t = debug_1(t, a_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_35, sym_Prefix_2))
                        {
                          b_35 = ATgetArgument(a_35, 0);
                          c_35 = ATgetArgument(a_35, 1);
                          {
                            ATerm h_35 = NULL,j_35 = NULL;
                            ATerm b_9;
                            b_9 = t;
                            {
                              ATerm i_35 = NULL;
                              t = not_null(b_35);
                              {
                                t = eval_config_0(t);
                                {
                                  i_35 = t;
                                  if(((h_35 != NULL) && (h_35 != i_35)))
                                    _fail(i_35);
                                  else
                                    h_35 = i_35;
                                }
                              }
                            }
                            t = b_9;
                            {
                              ATerm k_35 = NULL;
                              t = not_null(c_35);
                              {
                                t = eval_config_0(t);
                                {
                                  k_35 = t;
                                  if(((j_35 != NULL) && (j_35 != k_35)))
                                    _fail(k_35);
                                  else
                                    j_35 = k_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_35), not_null(j_35));
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
  ATerm s_35 = NULL;
  s_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(s_35));
    {
      t = table_get_0(t);
      {
        ATerm b_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm d_9;
            d_9 = t;
            {
              ATerm u_35 = NULL;
              ATerm v_35 = NULL;
              v_35 = t;
              if(((u_35 != NULL) && (u_35 != v_35)))
                _fail(v_35);
              else
                u_35 = v_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_c_9, not_null(s_35), not_null(u_35));
                t = table_put_0(t);
              }
            }
            t = d_9;
          }
          return(t);
        }
        t = try_1(t, b_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_94 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm e_9;
    e_9 = t;
    {
      ATerm z_35 = NULL;
      ATerm a_36 = NULL;
      t = term_f_9;
      {
        t = get_config_0(t);
        {
          a_36 = t;
          if(((z_35 != NULL) && (z_35 != a_36)))
            _fail(a_36);
          else
            z_35 = a_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), term_g_9);
        t = geq_0(t);
      }
    }
    t = e_9;
    t = q_94(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      t = SSL_WriteToTextFile(not_null(f_36), not_null(g_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      t = SSL_WriteToBinaryFile(not_null(o_36), not_null(p_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm y_36 = NULL,z_36 = NULL;
            y_36 = t;
            u_36 :
            if(match_cons(y_36, sym_Output_1))
              {
                z_36 = ATgetArgument(y_36, 0);
                if(((x_36 != NULL) && (x_36 != z_36)))
                  _fail(z_36);
                else
                  x_36 = z_36;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          ;
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          {
            ATerm a_37 = NULL;
            t = term_k_9;
            {
              a_37 = t;
              if(((x_36 != NULL) && (x_36 != a_37)))
                _fail(a_37);
              else
                x_36 = a_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = h_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(x_36);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm l_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm b_37 = NULL;
              b_37 = t;
              w_36 :
              if(!(match_cons(b_37, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_9);
        }
      else
        {
          t = l_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_92 (ATerm))
{
  ATerm j_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  ATerm r_9;
  r_9 = t;
  t = dtime_0(t);
  t = r_9;
  {
    t = x_92(t);
    {
      ATerm s_9;
      s_9 = t;
      {
        ATerm k_37 = NULL;
        t = dtime_0(t);
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
      }
      t = s_9;
      {
        l_37 = t;
        g_37 :
        if(match_cons(l_37, sym__2))
          {
            m_37 = ATgetArgument(l_37, 0);
            n_37 = ATgetArgument(l_37, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_37)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_37))), not_null(n_37));
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
ATerm debug_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm u_37 = NULL,w_37 = NULL;
    ATerm x_9;
    x_9 = t;
    {
      ATerm v_37 = NULL;
      t = s_91(t);
      {
        v_37 = t;
        if(((u_37 != NULL) && (u_37 != v_37)))
          _fail(v_37);
        else
          u_37 = v_37;
      }
    }
    t = x_9;
    {
      ATerm x_37 = NULL;
      x_37 = t;
      if(((w_37 != NULL) && (w_37 != x_37)))
        _fail(x_37);
      else
        w_37 = x_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_37)), not_null(u_37)));
        t = printnl_0(t);
      }
    }
  }
  t = t_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_38 = NULL;
  ATerm z_9 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL;
      c_38 = t;
      {
        if(((b_38 != NULL) && (b_38 != c_38)))
          _fail(c_38);
        else
          b_38 = c_38;
        t = SSL_ReadFromFile(not_null(b_38));
      }
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = z_9;
      {
        ATerm j_1 (ATerm t)
        {
          t = term_d_10;
          return(t);
        }
        t = debug_1(t, j_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm g_38 = NULL,i_38 = NULL;
  ATerm e_10;
  e_10 = t;
  {
    ATerm h_38 = NULL;
    t = x_88(t);
    {
      h_38 = t;
      if(((g_38 != NULL) && (g_38 != h_38)))
        _fail(h_38);
      else
        g_38 = h_38;
    }
  }
  t = e_10;
  {
    ATerm j_38 = NULL;
    t = y_88(t);
    {
      j_38 = t;
      if(((i_38 != NULL) && (i_38 != j_38)))
        _fail(j_38);
      else
        i_38 = j_38;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_38), not_null(i_38));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_38 = NULL;
  ATerm f_10;
  f_10 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm q_38 = NULL,r_38 = NULL;
          q_38 = t;
          n_38 :
          if(match_cons(q_38, sym_Input_1))
            {
              r_38 = ATgetArgument(q_38, 0);
              if(((p_38 != NULL) && (p_38 != r_38)))
                _fail(r_38);
              else
                p_38 = r_38;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_1);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          ATerm s_38 = NULL;
          t = term_i_10;
          {
            s_38 = t;
            if(((p_38 != NULL) && (p_38 != s_38)))
              _fail(s_38);
            else
              p_38 = s_38;
          }
        }
      }
  }
  t = f_10;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(p_38);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm b_39 = NULL;
    b_39 = t;
    v_38 :
    if(!(match_string(b_39, "-v")))
      {
        if(!(match_string(b_39, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_l_10;
    t = set_config_0(t);
    t = term_m_10;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_s_10;
    return(t);
  }
  t = Option_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm e_39 = NULL;
    e_39 = t;
    c_39 :
    if(!(match_string(e_39, "-k")))
      {
        if(!(match_string(e_39, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm t_10;
    t_10 = t;
    {
      ATerm f_39 = NULL;
      ATerm g_39 = NULL;
      t = string_to_int_0(t);
      {
        g_39 = t;
        if(((f_39 != NULL) && (f_39 != g_39)))
          _fail(g_39);
        else
          f_39 = g_39;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(f_39));
        t = set_config_0(t);
      }
    }
    t = t_10;
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_v_10;
    return(t);
  }
  t = ArgOption_3(t, p_1, q_1, r_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_string_to_int(not_null(j_39));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm r_39 = NULL;
        r_39 = t;
        m_39 :
        if(!(match_string(r_39, "-S")))
          {
            if(!(match_string(r_39, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_g_11;
        t = set_config_0(t);
        t = term_h_11;
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_i_11;
        return(t);
      }
      t = Option_3(t, s_1, t_1, u_1);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm s_39 = NULL;
              s_39 = t;
              n_39 :
              if(!(match_string(s_39, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              ATerm v_39 = NULL;
              ATerm l_11;
              l_11 = t;
              {
                ATerm t_39 = NULL;
                ATerm u_39 = NULL;
                t = string_to_int_0(t);
                {
                  u_39 = t;
                  if(((t_39 != NULL) && (t_39 != u_39)))
                    _fail(u_39);
                  else
                    t_39 = u_39;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_9, not_null(t_39));
                  t = set_config_0(t);
                }
              }
              t = l_11;
              {
                ATerm w_39 = NULL;
                w_39 = t;
                if(((v_39 != NULL) && (v_39 != w_39)))
                  _fail(w_39);
                else
                  v_39 = w_39;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_39));
              }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = ArgOption_3(t, v_1, w_1, x_1);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm y_1 (ATerm t)
              {
                ATerm x_39 = NULL;
                x_39 = t;
                q_39 :
                if(!(match_string(x_39, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_o_11;
                t = set_config_0(t);
                t = term_p_11;
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_q_11;
                return(t);
              }
              t = Option_3(t, y_1, z_1, a_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = r_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm d_40 = NULL;
    d_40 = t;
    a_40 :
    if(!(match_string(d_40, "-o")))
      {
        if(!(match_string(d_40, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm g_40 = NULL;
    ATerm a_12;
    a_12 = t;
    {
      ATerm e_40 = NULL;
      ATerm f_40 = NULL;
      f_40 = t;
      if(((e_40 != NULL) && (e_40 != f_40)))
        _fail(f_40);
      else
        e_40 = f_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(e_40));
        t = set_config_0(t);
      }
    }
    t = a_12;
    {
      ATerm h_40 = NULL;
      h_40 = t;
      if(((g_40 != NULL) && (g_40 != h_40)))
        _fail(h_40);
      else
        g_40 = h_40;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_40));
    }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  t = ArgOption_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      {
        ATerm e_2 (ATerm t)
        {
          ATerm l_40 = NULL;
          l_40 = t;
          k_40 :
          if(!(match_string(l_40, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_n_12;
          t = set_config_0(t);
          t = term_o_12;
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = Option_3(t, e_2, f_2, g_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  r_40 = t;
  p_40 :
  if(match_string(r_40, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_40) == AT_LIST) && !(ATisEmpty(r_40))))
        {
          s_40 = ATgetFirst((ATermList) r_40);
          t_40 = (ATerm) ATgetNext((ATermList) r_40);
          q_40 :
          if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
            {
              u_40 = ATgetFirst((ATermList) t_40);
              v_40 = (ATerm) ATgetNext((ATermList) t_40);
              {
                ATerm z_40 = NULL;
                ATerm q_12;
                q_12 = t;
                {
                  t = not_null(s_40);
                  t = j_0(t);
                }
                t = q_12;
                {
                  ATerm a_41 = NULL;
                  t = not_null(u_40);
                  {
                    t = k_0(t);
                    {
                      a_41 = t;
                      if(((z_40 != NULL) && (z_40 != a_41)))
                        _fail(a_41);
                      else
                        z_40 = a_41;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_40)), not_null(z_40));
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
  ATerm h_2 (ATerm t)
  {
    ATerm h_41 = NULL;
    h_41 = t;
    e_41 :
    if(!(match_string(h_41, "-i")))
      {
        if(!(match_string(h_41, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm k_41 = NULL;
    ATerm r_12;
    r_12 = t;
    {
      ATerm i_41 = NULL;
      ATerm j_41 = NULL;
      j_41 = t;
      if(((i_41 != NULL) && (i_41 != j_41)))
        _fail(j_41);
      else
        i_41 = j_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_12, not_null(i_41));
        t = set_config_0(t);
      }
    }
    t = r_12;
    {
      ATerm l_41 = NULL;
      l_41 = t;
      if(((k_41 != NULL) && (k_41 != l_41)))
        _fail(l_41);
      else
        k_41 = l_41;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_41));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = u_12;
      {
        ATerm z_12 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = z_12;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, term_g_13));
  {
    t = printnl_0(t);
    {
      t = term_u_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  t = SSL_TicksToSeconds(not_null(p_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym__2))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_41), not_null(w_41));
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = SSL_addr(not_null(v_41), not_null(w_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_87 (ATerm), ATerm j_87 (ATerm))
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_87(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
        d_42 = t;
        c_42 :
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            e_42 = ATgetFirst((ATermList) d_42);
            f_42 = (ATerm) ATgetNext((ATermList) d_42);
            {
              ATerm i_42 = NULL;
              ATerm j_42 = NULL;
              t = not_null(f_42);
              {
                t = foldr_2(t, i_87, j_87);
                {
                  j_42 = t;
                  if(((i_42 != NULL) && (i_42 != j_42)))
                    _fail(j_42);
                  else
                    i_42 = j_42;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), not_null(i_42));
                t = j_87(t);
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
ATerm crush_2 (ATerm t, ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm q_42 = NULL;
  ATerm s_42 = NULL;
  q_42 = t;
  {
    ATerm t_42 = NULL;
    ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
    t = not_null(q_42);
    {
      t_42 = t;
      {
        t = SSL_explode_term(not_null(t_42));
        {
          v_42 = t;
          p_42 :
          if(match_cons(v_42, sym__2))
            {
              w_42 = ATgetArgument(v_42, 0);
              x_42 = ATgetArgument(v_42, 1);
              if(((s_42 != NULL) && (s_42 != x_42)))
                _fail(x_42);
              else
                s_42 = x_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_42);
      t = foldr_2(t, g_86, h_86);
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
    ATerm k_2 (ATerm t)
    {
      t = term_d_11;
      return(t);
    }
    t = crush_2(t, k_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym__2))
    {
      e_43 = ATgetArgument(d_43, 0);
      f_43 = ATgetArgument(d_43, 1);
      {
        ATerm m_13;
        m_13 = t;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_43), not_null(f_43));
              ;
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = SSL_gtr(not_null(e_43), not_null(f_43));
            }
        }
        t = m_13;
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
  ATerm l_43 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
      m_43 = t;
      k_43 :
      if(match_cons(m_43, sym__2))
        {
          n_43 = ATgetArgument(m_43, 0);
          o_43 = ATgetArgument(m_43, 1);
          {
            if(((l_43 != NULL) && (l_43 != n_43)))
              _fail(n_43);
            else
              l_43 = n_43;
            if(((l_43 != NULL) && (l_43 != o_43)))
              _fail(o_43);
            else
              l_43 = o_43;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_94 (ATerm))
{
  ATerm l_2 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm t_43 = NULL;
      ATerm z_43 = NULL;
      t = term_f_9;
      {
        t = get_config_0(t);
        {
          z_43 = t;
          if(((t_43 != NULL) && (t_43 != z_43)))
            _fail(z_43);
          else
            t_43 = z_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_43), term_u_7);
        t = geq_0(t);
      }
    }
    t = a_14;
    t = p_94(t);
    return(t);
  }
  t = try_1(t, l_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm d_44 = NULL,f_44 = NULL;
    ATerm k_14;
    k_14 = t;
    {
      ATerm e_44 = NULL;
      t = run_time_0(t);
      {
        e_44 = t;
        if(((d_44 != NULL) && (d_44 != e_44)))
          _fail(e_44);
        else
          d_44 = e_44;
      }
    }
    t = k_14;
    {
      ATerm g_44 = NULL;
      t = term_l_14;
      {
        t = get_config_0(t);
        {
          g_44 = t;
          if(((f_44 != NULL) && (f_44 != g_44)))
            _fail(g_44);
          else
            f_44 = g_44;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_14), not_null(d_44)), term_m_14), not_null(f_44)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_2);
  {
    t = term_d_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Version_0))
    {
      ATerm p_44 = NULL,r_44 = NULL;
      ATerm x_14;
      x_14 = t;
      {
        ATerm q_44 = NULL;
        t = SSLgetAnnotations(not_null(n_44));
        {
          q_44 = t;
          if(((p_44 != NULL) && (p_44 != q_44)))
            _fail(q_44);
          else
            p_44 = q_44;
        }
      }
      t = x_14;
      {
        ATerm s_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_44));
        {
          s_44 = t;
          if(((r_44 != NULL) && (r_44 != s_44)))
            _fail(s_44);
          else
            r_44 = s_44;
        }
        t = not_null(r_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_92 (ATerm))
{
  ATerm n_2 (ATerm t)
  {
    ATerm y_14 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = y_14;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_2);
  t = v_92(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  t = SSL_table_create(not_null(x_44));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  {
    ATerm l_15;
    l_15 = t;
    {
      t = term_m_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_n_15, not_null(b_45));
          t = table_put_0(t);
        }
      }
    }
    t = l_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  t = SSL_table_destroy(not_null(f_45));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_45 = NULL;
  j_45 = t;
  t = SSL_exit(not_null(j_45));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,q_45 = NULL;
  n_45 = t;
  m_45 :
  if(((ATgetType(n_45) == AT_LIST) && ATisEmpty(n_45)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
        {
          o_45 = ATgetFirst((ATermList) n_45);
          q_45 = (ATerm) ATgetNext((ATermList) n_45);
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
  ATerm o_15;
  o_15 = t;
  {
    ATerm t_45 = NULL;
    ATerm y_45 = NULL;
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        {
          ATerm w_45 = NULL;
          ATerm x_45 = NULL;
          x_45 = t;
          if(((w_45 != NULL) && (w_45 != x_45)))
            _fail(x_45);
          else
            w_45 = x_45;
          t = (ATerm) ATinsert(ATempty, not_null(w_45));
        }
      }
    {
      y_45 = t;
      if(((t_45 != NULL) && (t_45 != y_45)))
        _fail(y_45);
      else
        t_45 = y_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(t_45));
      t = printnl_0(t);
    }
  }
  t = o_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm b_46 (ATerm t)
  {
    ATerm r_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = r_15;
        t = Cons_2(t, y_80, b_46);
      }
    return(t);
  }
  t = b_46(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  k_46 = t;
  h_46 :
  if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
    {
      i_46 = ATgetFirst((ATermList) k_46);
      j_46 = (ATerm) ATgetNext((ATermList) k_46);
      {
        ATerm n_46 = NULL;
        t = not_null(j_46);
        {
          ATerm a_16;
          a_16 = t;
          {
            ATerm o_46 = NULL,q_46 = NULL,s_46 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              ATerm p_46 = NULL;
              t = i_0(t);
              {
                p_46 = t;
                if(((o_46 != NULL) && (o_46 != p_46)))
                  _fail(p_46);
                else
                  o_46 = p_46;
              }
            }
            t = d_16;
            {
              ATerm r_46 = NULL;
              t = not_null(i_46);
              {
                t = g_0(t);
                {
                  r_46 = t;
                  if(((q_46 != NULL) && (q_46 != r_46)))
                    _fail(r_46);
                  else
                    q_46 = r_46;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_46)), not_null(q_46));
                {
                  s_46 = t;
                  if(((n_46 != NULL) && (n_46 != s_46)))
                    _fail(s_46);
                  else
                    n_46 = s_46;
                }
              }
            }
          }
          t = a_16;
          {
            ATerm o_2 (ATerm t)
            {
              t = not_null(n_46);
              return(t);
            }
            t = reverse_acc_2(t, g_0, o_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_46) == AT_LIST) && ATisEmpty(k_46)))
        {
          {
            t = term_k_10;
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
  ATerm p_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm g_47 = NULL,h_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_Program_1))
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
            t = m_66(t);
            {
              m_47 = t;
              {
                ATerm p_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_47)), not_null(k_47));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm z_47 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_48 = NULL;
      t = term_l_14;
      {
        t = get_config_0(t);
        {
          a_48 = t;
          if(((z_47 != NULL) && (z_47 != a_48)))
            _fail(a_48);
          else
            z_47 = a_48;
        }
      }
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm q_2 (ATerm t)
        {
          ATerm r_2 (ATerm t)
          {
            ATerm b_48 = NULL;
            b_48 = t;
            if(((z_47 != NULL) && (z_47 != b_48)))
              _fail(b_48);
            else
              z_47 = b_48;
            return(t);
          }
          t = Program_1(t, r_2);
          return(t);
        }
        t = option_defined_1(t, q_2);
      }
    }
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(z_47);
        return(t);
      }
      t = short_description_1(t, t_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_2);
    {
      t = term_i_16;
      {
        t = echo_0(t);
        {
          t = term_l_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_2 (ATerm t)
                {
                  ATerm c_48 = NULL;
                  ATerm d_48 = NULL;
                  d_48 = t;
                  if(((c_48 != NULL) && (c_48 != d_48)))
                    _fail(d_48);
                  else
                    c_48 = d_48;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_48)), term_m_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_2);
                {
                  ATerm v_2 (ATerm t)
                  {
                    ATerm e_48 = NULL;
                    ATerm f_48 = NULL;
                    ATerm w_2 (ATerm t)
                    {
                      t = not_null(z_47);
                      return(t);
                    }
                    t = long_description_1(t, w_2);
                    {
                      f_48 = t;
                      if(((e_48 != NULL) && (e_48 != f_48)))
                        _fail(f_48);
                      else
                        e_48 = f_48;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_48)), term_n_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_2);
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
  ATerm o_16;
  o_16 = t;
  {
    ATerm t_48 = NULL;
    ATerm u_48 = NULL;
    u_48 = t;
    if(((t_48 != NULL) && (t_48 != u_48)))
      _fail(u_48);
    else
      t_48 = u_48;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, not_null(t_48)));
      t = printnl_0(t);
    }
  }
  t = o_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm p_16;
  p_16 = t;
  {
    t = t_91(t);
    t = debug_0(t);
  }
  t = p_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm b_49 = NULL,c_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym_Undefined_1))
    {
      c_49 = ATgetArgument(b_49, 0);
      {
        ATerm f_49 = NULL,h_49 = NULL;
        ATerm g_49 = NULL;
        t = SSLgetAnnotations(not_null(b_49));
        {
          g_49 = t;
          if(((f_49 != NULL) && (f_49 != g_49)))
            _fail(g_49);
          else
            f_49 = g_49;
        }
        {
          t = not_null(c_49);
          {
            ATerm j_49 = NULL;
            t = n_66(t);
            {
              h_49 = t;
              {
                ATerm k_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_49)), not_null(f_49));
                {
                  k_49 = t;
                  if(((j_49 != NULL) && (j_49 != k_49)))
                    _fail(k_49);
                  else
                    j_49 = k_49;
                }
                t = not_null(j_49);
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
ATerm fetch_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm p_49 (ATerm t)
  {
    ATerm r_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_81, _id);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = r_16;
        t = Cons_2(t, _id, p_49);
      }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_95 (ATerm))
{
  t = fetch_1(t, s_95);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_cons(u_49, sym_Help_0))
    {
      ATerm w_49 = NULL,y_49 = NULL;
      ATerm x_16;
      x_16 = t;
      {
        ATerm x_49 = NULL;
        t = SSLgetAnnotations(not_null(u_49));
        {
          x_49 = t;
          if(((w_49 != NULL) && (w_49 != x_49)))
            _fail(x_49);
          else
            w_49 = x_49;
        }
      }
      t = x_16;
      {
        ATerm z_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_49));
        {
          z_49 = t;
          if(((y_49 != NULL) && (y_49 != z_49)))
            _fail(z_49);
          else
            y_49 = z_49;
        }
        t = not_null(y_49);
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
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym__2))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      t = SSL_table_get(not_null(g_50), not_null(h_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym__3))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      r_50 = ATgetArgument(o_50, 2);
      {
        ATerm y_16;
        y_16 = t;
        {
          ATerm v_50 = NULL;
          ATerm w_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), not_null(q_50));
          {
            ATerm e_17 = t;
            int f_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(f_17);
              }
            else
              {
                t = e_17;
                t = (ATerm) ATempty;
              }
            {
              w_50 = t;
              if(((v_50 != NULL) && (v_50 != w_50)))
                _fail(w_50);
              else
                v_50 = w_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_50), not_null(q_50), (ATerm) ATinsert(CheckATermList(not_null(v_50)), not_null(r_50)));
            t = table_put_0(t);
          }
        }
        t = y_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_96 (ATerm))
{
  ATerm a_51 = NULL;
  ATerm b_51 = NULL;
  t = term_k_10;
  {
    t = x_96(t);
    {
      b_51 = t;
      if(((a_51 != NULL) && (a_51 != b_51)))
        _fail(b_51);
      else
        a_51 = b_51;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(a_51));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_string(h_51, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(h_51) == AT_LIST) && !(ATisEmpty(h_51))))
        {
          i_51 = ATgetFirst((ATermList) h_51);
          j_51 = (ATerm) ATgetNext((ATermList) h_51);
          {
            ATerm m_51 = NULL;
            ATerm g_17;
            g_17 = t;
            {
              t = not_null(i_51);
              t = a_0(t);
            }
            t = g_17;
            {
              ATerm n_51 = NULL;
              t = term_k_10;
              {
                t = c_0(t);
                {
                  n_51 = t;
                  if(((m_51 != NULL) && (m_51 != n_51)))
                    _fail(n_51);
                  else
                    m_51 = n_51;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_51)), not_null(m_51));
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
    ATerm s_51 = NULL;
    s_51 = t;
    r_51 :
    if(!(match_string(s_51, "--help")))
      {
        if(!(match_string(s_51, "-h")))
          {
            if(!(match_string(s_51, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_m_17;
    {
      t = set_config_0(t);
      t = term_n_17;
    }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_q_17;
    return(t);
  }
  t = Option_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  b_52 :
  if(((ATgetType(c_52) == AT_LIST) && !(ATisEmpty(c_52))))
    {
      d_52 = ATgetFirst((ATermList) c_52);
      e_52 = (ATerm) ATgetNext((ATermList) c_52);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_52)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_52)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_61 (ATerm), ATerm d_61 (ATerm))
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL;
  a_53 = t;
  z_52 :
  if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
    {
      b_53 = ATgetFirst((ATermList) a_53);
      c_53 = (ATerm) ATgetNext((ATermList) a_53);
      {
        ATerm k_53 = NULL,m_53 = NULL;
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(a_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        {
          t = not_null(b_53);
          {
            ATerm o_53 = NULL;
            t = c_61(t);
            {
              m_53 = t;
              {
                t = not_null(c_53);
                {
                  ATerm q_53 = NULL;
                  t = d_61(t);
                  {
                    o_53 = t;
                    {
                      ATerm r_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_53)), not_null(m_53)), not_null(k_53));
                      {
                        r_53 = t;
                        if(((q_53 != NULL) && (q_53 != r_53)))
                          _fail(r_53);
                        else
                          q_53 = r_53;
                      }
                      t = not_null(q_53);
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
  ATerm b_54 = NULL;
  b_54 = t;
  a_54 :
  if(((ATgetType(b_54) == AT_LIST) && ATisEmpty(b_54)))
    {
      {
        ATerm e_54 = NULL,g_54 = NULL;
        ATerm e_18;
        e_18 = t;
        {
          ATerm f_54 = NULL;
          t = SSLgetAnnotations(not_null(b_54));
          {
            f_54 = t;
            if(((e_54 != NULL) && (e_54 != f_54)))
              _fail(f_54);
            else
              e_54 = f_54;
          }
        }
        t = e_18;
        {
          ATerm h_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_54));
          {
            h_54 = t;
            if(((g_54 != NULL) && (g_54 != h_54)))
              _fail(h_54);
            else
              g_54 = h_54;
          }
          t = not_null(g_54);
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
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym__2))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_9, not_null(o_54), not_null(p_54));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm f_18;
  f_18 = t;
  {
    ATerm a_3 (ATerm t)
    {
      t = term_g_18;
      t = v_96(t);
      return(t);
    }
    t = try_1(t, a_3);
  }
  t = f_18;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm x_54 = NULL;
      ATerm h_18;
      h_18 = t;
      {
        ATerm v_54 = NULL;
        ATerm w_54 = NULL;
        w_54 = t;
        if(((v_54 != NULL) && (v_54 != w_54)))
          _fail(w_54);
        else
          v_54 = w_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(v_54));
          t = set_config_0(t);
        }
      }
      t = h_18;
      {
        ATerm y_54 = NULL;
        y_54 = t;
        if(((x_54 != NULL) && (x_54 != y_54)))
          _fail(y_54);
        else
          x_54 = y_54;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_54));
      }
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = k_18;
              {
                t = v_96(t);
                t = Cons_2(t, _id, c_3);
              }
            }
          ;
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
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
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
    k_55 = t;
    g_55 :
    if(match_cons(k_55, sym__3))
      {
        l_55 = ATgetArgument(k_55, 0);
        m_55 = ATgetArgument(k_55, 1);
        n_55 = ATgetArgument(k_55, 2);
        {
          if(((h_55 != NULL) && (h_55 != l_55)))
            _fail(l_55);
          else
            h_55 = l_55;
          {
            if(((i_55 != NULL) && (i_55 != m_55)))
              _fail(m_55);
            else
              i_55 = m_55;
            {
              if(((j_55 != NULL) && (j_55 != n_55)))
                _fail(n_55);
              else
                j_55 = n_55;
              t = SSL_table_put(not_null(h_55), not_null(i_55), not_null(j_55));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_18;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm q_55 = NULL;
  ATerm p_18;
  p_18 = t;
  {
    t = term_q_18;
    t = table_put_0(t);
  }
  t = p_18;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_96(t);
          ;
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm t_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19;
            a_19 = t;
            {
              ATerm f_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_17;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = f_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_19;
            {
              t = system_usage_0(t);
              {
                t = term_d_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = t_18;
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm r_55 = NULL;
                  r_55 = t;
                  if(((q_55 != NULL) && (q_55 != r_55)))
                    _fail(r_55);
                  else
                    q_55 = r_55;
                  return(t);
                }
                t = Undefined_1(t, g_3);
                return(t);
              }
              t = option_defined_1(t, f_3);
              {
                ATerm h_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), term_o_19);
                  return(t);
                }
                t = say_1(t, h_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_3);
      {
        ATerm p_19;
        p_19 = t;
        {
          t = term_j_16;
          t = table_destroy_0(t);
        }
        t = p_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  t = parse_options_1(t, b_93);
  {
    t = store_options_0(t);
    {
      t = d_93(t);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_93);
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_93(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = s_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm b_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_93(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = b_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_93);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_3, u_93, v_93, j_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm i_20;
      i_20 = t;
      {
        ATerm u_55 = NULL;
        ATerm v_55 = NULL;
        t = term_l_14;
        {
          t = get_config_0(t);
          {
            v_55 = t;
            if(((u_55 != NULL) && (u_55 != v_55)))
              _fail(v_55);
            else
              u_55 = v_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, not_null(u_55)));
          t = printnl_0(t);
        }
      }
      t = i_20;
      return(t);
    }
    t = if_verbose2_1(t, l_3);
    return(t);
  }
  t = iowrap_4(t, m_93, n_93, o_93, k_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_93 (ATerm), ATerm l_93 (ATerm))
{
  t = iowrap_3(t, k_93, l_93, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = _2(t, _id, h_93);
    return(t);
  }
  t = iowrap_2(t, m_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm d_56 = NULL;
      ATerm f_56 = NULL;
      d_56 = t;
      {
        ATerm g_56 = NULL;
        ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
        t = not_null(d_56);
        {
          g_56 = t;
          {
            t = SSL_explode_term(not_null(g_56));
            {
              i_56 = t;
              a_56 :
              if(match_cons(i_56, sym__2))
                {
                  j_56 = ATgetArgument(i_56, 0);
                  k_56 = ATgetArgument(i_56, 1);
                  b_56 :
                  if(((ATgetType(k_56) == AT_LIST) && !(ATisEmpty(k_56))))
                    {
                      l_56 = ATgetFirst((ATermList) k_56);
                      m_56 = (ATerm) ATgetNext((ATermList) k_56);
                      c_56 :
                      if(((ATgetType(m_56) == AT_LIST) && ATisEmpty(m_56)))
                        {
                          if(((f_56 != NULL) && (f_56 != l_56)))
                            _fail(l_56);
                          else
                            f_56 = l_56;
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
        t = not_null(f_56);
      }
      return(t);
    }
    t = try_1(t, o_3);
    {
      ATerm p_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, p_3);
    }
    return(t);
  }
  t = iowrap_1(t, n_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
