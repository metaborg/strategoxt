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
  init_constant_terms();
}
ATerm term_x_19;
ATerm term_p_19;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_x_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_y_7;
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
  term_r_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_r_7);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_r_7);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_r_7);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_g_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_r_7);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, (ATerm) ATempty);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm SVar_1 (ATerm, ATerm y_74 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm));
ATerm RDef_3 (ATerm, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm i_77 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_77 (ATerm));
ATerm at_last_1 (ATerm, ATerm f_86 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm d_94 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm o_94 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm q_78 (ATerm));
ATerm topdown_1 (ATerm, ATerm o_79 (ATerm));
ATerm _2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_98 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm m_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_100 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_96 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_92 (ATerm), ATerm s_92 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_91 (ATerm), ATerm d_91 (ATerm));
ATerm crush_2 (ATerm, ATerm v_94 (ATerm), ATerm w_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_98 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_101 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_103 (ATerm));
ATerm map_1 (ATerm, ATerm f_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_103 (ATerm));
ATerm Program_1 (ATerm, ATerm z_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_102 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_103 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_103 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_103 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_100 (ATerm), ATerm w_100 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_100 (ATerm));
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
ATerm Op_2 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm))
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
            t = f_72(t);
            {
              g_5 = t;
              {
                t = not_null(a_5);
                {
                  ATerm k_5 = NULL;
                  t = g_72(t);
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
ATerm OpDecl_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
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
            t = r_71(t);
            {
              f_6 = t;
              {
                t = not_null(z_5);
                {
                  ATerm j_6 = NULL;
                  t = s_71(t);
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
ATerm SVar_1 (ATerm t, ATerm y_74 (ATerm))
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
            t = y_74(t);
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
ATerm VarDec_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
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
            t = j_77(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = k_77(t);
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
ATerm SDef_3 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm p_77 (ATerm))
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
            t = n_77(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = o_77(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = p_77(t);
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
ATerm RDef_3 (ATerm t, ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm a_74 (ATerm))
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
            t = y_73(t);
            {
              d_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm h_12 = NULL;
                  t = z_73(t);
                  {
                    f_12 = t;
                    {
                      t = not_null(w_11);
                      {
                        ATerm j_12 = NULL;
                        t = a_74(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm i_77 (ATerm))
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
            t = i_77(t);
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
ATerm try_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_77(t);
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
ATerm at_last_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm r_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = f_86(t);
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
ATerm unquote_chars_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm v_5;
  v_5 = t;
  {
    t = Hd_0(t);
    t = d_94(t);
  }
  t = v_5;
  {
    ATerm a_6;
    a_6 = t;
    {
      t = last_0(t);
      t = d_94(t);
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
  ATerm c_0 (ATerm t)
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
  t = unquote_chars_1(t, c_0);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm o_94 (ATerm))
{
  t = explode_string_0(t);
  {
    t = o_94(t);
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
ATerm Desugar_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  ATerm v_25 (ATerm t)
  {
    t = not_null(a_22);
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
    t = (ATerm) ATmakeAppl(sym_Op_2, term_l_6, not_null(a_22));
    return(t);
  }
  ATerm w_25 (ATerm t)
  {
    t = not_null(v_21);
    return(t);
  }
  ATerm x_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(a_22)));
    return(t);
  }
  ATerm y_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(a_22)));
    return(t);
  }
  ATerm z_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(a_22)));
    return(t);
  }
  ATerm a_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_22)), (ATerm) ATempty);
    return(t);
  }
  ATerm b_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_22)), not_null(b_22));
    return(t);
  }
  ATerm c_26 (ATerm t)
  {
    t = not_null(a_22);
    {
      ATerm e_0 (ATerm t)
      {
        t = not_null(b_22);
        return(t);
      }
      ATerm f_0 (ATerm t)
      {
        ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
        t_23 = t;
        j_21 :
        if(match_cons(t_23, sym__2))
          {
            u_23 = ATgetArgument(t_23, 0);
            v_23 = ATgetArgument(t_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_23)), not_null(u_23)));
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
  ATerm d_26 (ATerm t)
  {
    t = not_null(a_22);
    {
      ATerm h_0 (ATerm t)
      {
        t = term_q_6;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
        z_23 = t;
        l_21 :
        if(match_cons(z_23, sym__2))
          {
            a_24 = ATgetArgument(z_23, 0);
            b_24 = ATgetArgument(z_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_24)), not_null(a_24)));
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
  ATerm e_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(CheckATermList(not_null(b_22)), not_null(a_22)));
    return(t);
  }
  ATerm f_26 (ATerm t)
  {
    t = not_null(a_22);
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
    t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, not_null(a_22));
    return(t);
  }
  ATerm g_26 (ATerm t)
  {
    t = not_null(v_21);
    return(t);
  }
  ATerm h_26 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  ATerm i_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_21)), not_null(a_22)));
    return(t);
  }
  ATerm j_26 (ATerm t)
  {
    t = not_null(a_22);
    return(t);
  }
  ATerm k_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(a_22), not_null(b_22), term_c_7);
    return(t);
  }
  ATerm l_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_22), not_null(b_22), term_c_7);
    return(t);
  }
  ATerm m_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(a_22), (ATerm)ATempty, not_null(b_22));
    return(t);
  }
  ATerm n_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(b_22), not_null(a_22));
    return(t);
  }
  ATerm o_26 (ATerm t)
  {
    ATerm v_24 = NULL;
    ATerm w_24 = NULL;
    t = not_null(a_22);
    {
      t = un_double_quote_0(t);
      {
        w_24 = t;
        if(((v_24 != NULL) && (v_24 != w_24)))
          _fail(w_24);
        else
          v_24 = w_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_24), not_null(b_22));
    return(t);
  }
  ATerm p_26 (ATerm t)
  {
    ATerm y_24 = NULL;
    ATerm z_24 = NULL;
    t = not_null(a_22);
    {
      t = un_double_quote_0(t);
      {
        z_24 = t;
        if(((y_24 != NULL) && (y_24 != z_24)))
          _fail(z_24);
        else
          y_24 = z_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_24), (ATerm) ATempty);
    return(t);
  }
  ATerm q_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(a_22), (ATerm) ATempty);
    return(t);
  }
  ATerm r_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_22), (ATerm)ATempty, not_null(b_22));
    return(t);
  }
  ATerm s_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(a_22), not_null(b_22), not_null(y_21));
    return(t);
  }
  ATerm t_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(a_22), (ATerm)ATempty, not_null(b_22));
    return(t);
  }
  ATerm u_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(a_22), (ATerm)ATempty, not_null(b_22));
    return(t);
  }
  ATerm v_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(b_22));
    return(t);
  }
  z_21 = t;
  o_21 :
  if(match_cons(z_21, sym_Anno_2))
    {
      a_22 = ATgetArgument(z_21, 0);
      b_22 = ATgetArgument(z_21, 1);
      {
        ATerm e_22 = NULL;
        ATerm j_22 = NULL;
        t = not_null(b_22);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_f_7;
            return(t);
          }
          ATerm p_0 (ATerm t)
          {
            ATerm f_22 = NULL,h_22 = NULL;
            ATerm g_7;
            g_7 = t;
            {
              ATerm g_22 = NULL;
              t = Fst_0(t);
              {
                g_22 = t;
                if(((f_22 != NULL) && (f_22 != g_22)))
                  _fail(g_22);
                else
                  f_22 = g_22;
              }
            }
            t = g_7;
            {
              ATerm i_22 = NULL;
              t = Snd_0(t);
              {
                i_22 = t;
                if(((h_22 != NULL) && (h_22 != i_22)))
                  _fail(i_22);
                else
                  h_22 = i_22;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_22)), not_null(f_22)));
            }
            return(t);
          }
          t = foldr_2(t, o_0, p_0);
          {
            j_22 = t;
            if(((e_22 != NULL) && (e_22 != j_22)))
              _fail(j_22);
            else
              e_22 = j_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(a_22), not_null(e_22));
      }
    }
  else
    {
      if(match_cons(z_21, sym_SortNoArgs_1))
        {
          a_22 = ATgetArgument(z_21, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(a_22), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(z_21, sym_Char_1))
            {
              a_22 = ATgetArgument(z_21, 0);
              {
                ATerm m_22 = NULL;
                ATerm n_22 = NULL;
                t = not_null(a_22);
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
                    n_22 = t;
                    if(((m_22 != NULL) && (m_22 != n_22)))
                      _fail(n_22);
                    else
                      m_22 = n_22;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(m_22));
              }
            }
          else
            {
              if(match_cons(z_21, sym_Con4_4))
                {
                  a_22 = ATgetArgument(z_21, 0);
                  b_22 = ATgetArgument(z_21, 1);
                  y_21 = ATgetArgument(z_21, 2);
                  u_21 = ATgetArgument(z_21, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(a_22), not_null(y_21), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_21)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(z_21, sym_Con3_3))
                    {
                      a_22 = ATgetArgument(z_21, 0);
                      b_22 = ATgetArgument(z_21, 1);
                      y_21 = ATgetArgument(z_21, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(a_22), not_null(y_21), term_l_7);
                    }
                  else
                    {
                      if(match_cons(z_21, sym_Con1_2))
                        {
                          a_22 = ATgetArgument(z_21, 0);
                          b_22 = ATgetArgument(z_21, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(a_22), not_null(b_22), term_l_7);
                        }
                      else
                        {
                          if(match_cons(z_21, sym_ListTail_2))
                            {
                              a_22 = ATgetArgument(z_21, 0);
                              b_22 = ATgetArgument(z_21, 1);
                              {
                                t = not_null(a_22);
                                {
                                  ATerm q_0 (ATerm t)
                                  {
                                    t = not_null(b_22);
                                    return(t);
                                  }
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                                    y_22 = t;
                                    f_21 :
                                    if(match_cons(y_22, sym__2))
                                      {
                                        z_22 = ATgetArgument(y_22, 0);
                                        a_23 = ATgetArgument(y_22, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), not_null(z_22)));
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
                              if(match_cons(z_21, sym_List_1))
                                {
                                  a_22 = ATgetArgument(z_21, 0);
                                  {
                                    t = not_null(a_22);
                                    {
                                      ATerm s_0 (ATerm t)
                                      {
                                        t = term_f_7;
                                        return(t);
                                      }
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
                                        e_23 = t;
                                        h_21 :
                                        if(match_cons(e_23, sym__2))
                                          {
                                            f_23 = ATgetArgument(e_23, 0);
                                            g_23 = ATgetArgument(e_23, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_23)), not_null(f_23)));
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
                                  if(match_cons(z_21, sym_Tuple_1))
                                    {
                                      a_22 = ATgetArgument(z_21, 0);
                                      p_21 :
                                      if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
                                        {
                                          v_21 = ATgetFirst((ATermList) a_22);
                                          w_21 = (ATerm) ATgetNext((ATermList) a_22);
                                          q_21 :
                                          if(((ATgetType(w_21) == AT_LIST) && ATisEmpty(w_21)))
                                            {
                                              {
                                                ATerm m_7 = t;
                                                int n_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = v_25(t);
                                                    ;
                                                    LocalPopChoice(n_7);
                                                  }
                                                else
                                                  {
                                                    t = m_7;
                                                    t = w_25(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = v_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = v_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(z_21, sym_RealCong_1))
                                        {
                                          a_22 = ATgetArgument(z_21, 0);
                                          t = x_25(t);
                                        }
                                      else
                                        {
                                          if(match_cons(z_21, sym_IntCong_1))
                                            {
                                              a_22 = ATgetArgument(z_21, 0);
                                              t = y_25(t);
                                            }
                                          else
                                            {
                                              if(match_cons(z_21, sym_StrCong_1))
                                                {
                                                  a_22 = ATgetArgument(z_21, 0);
                                                  t = z_25(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(z_21, sym_ModCongNoArgs_1))
                                                    {
                                                      a_22 = ATgetArgument(z_21, 0);
                                                      t = a_26(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(z_21, sym_ModCong_2))
                                                        {
                                                          a_22 = ATgetArgument(z_21, 0);
                                                          b_22 = ATgetArgument(z_21, 1);
                                                          t = b_26(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(z_21, sym_ListCong_2))
                                                            {
                                                              a_22 = ATgetArgument(z_21, 0);
                                                              b_22 = ATgetArgument(z_21, 1);
                                                              t = c_26(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(z_21, sym_ListCongNoTail_1))
                                                                {
                                                                  a_22 = ATgetArgument(z_21, 0);
                                                                  t = d_26(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(z_21, sym_TupleCong_2))
                                                                    {
                                                                      a_22 = ATgetArgument(z_21, 0);
                                                                      b_22 = ATgetArgument(z_21, 1);
                                                                      t = e_26(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(z_21, sym_TupleCong_1))
                                                                        {
                                                                          a_22 = ATgetArgument(z_21, 0);
                                                                          r_21 :
                                                                          if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
                                                                            {
                                                                              v_21 = ATgetFirst((ATermList) a_22);
                                                                              w_21 = (ATerm) ATgetNext((ATermList) a_22);
                                                                              s_21 :
                                                                              if(((ATgetType(w_21) == AT_LIST) && ATisEmpty(w_21)))
                                                                                {
                                                                                  {
                                                                                    ATerm o_7 = t;
                                                                                    int p_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = f_26(t);
                                                                                        ;
                                                                                        LocalPopChoice(p_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_7;
                                                                                        t = g_26(t);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_26(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_26(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(z_21, sym_EmptyTupleCong_0))
                                                                            {
                                                                              t = h_26(t);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(z_21, sym_AnnoCong_2))
                                                                                {
                                                                                  a_22 = ATgetArgument(z_21, 0);
                                                                                  b_22 = ATgetArgument(z_21, 1);
                                                                                  t_21 :
                                                                                  if(match_cons(b_22, sym_StrategyCurly_1))
                                                                                    {
                                                                                      x_21 = ATgetArgument(b_22, 0);
                                                                                      t = i_26(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      _fail(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(z_21, sym_ParenStrat_1))
                                                                                    {
                                                                                      a_22 = ATgetArgument(z_21, 0);
                                                                                      t = j_26(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(z_21, sym_StratRuleNoCond_2))
                                                                                        {
                                                                                          a_22 = ATgetArgument(z_21, 0);
                                                                                          b_22 = ATgetArgument(z_21, 1);
                                                                                          t = k_26(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(z_21, sym_RuleNoCond_2))
                                                                                            {
                                                                                              a_22 = ATgetArgument(z_21, 0);
                                                                                              b_22 = ATgetArgument(z_21, 1);
                                                                                              t = l_26(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(z_21, sym_OverlayNoArgs_2))
                                                                                                {
                                                                                                  a_22 = ATgetArgument(z_21, 0);
                                                                                                  b_22 = ATgetArgument(z_21, 1);
                                                                                                  t = m_26(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(z_21, sym_RChoice_2))
                                                                                                    {
                                                                                                      a_22 = ATgetArgument(z_21, 0);
                                                                                                      b_22 = ATgetArgument(z_21, 1);
                                                                                                      t = n_26(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(z_21, sym_Prim_2))
                                                                                                        {
                                                                                                          a_22 = ATgetArgument(z_21, 0);
                                                                                                          b_22 = ATgetArgument(z_21, 1);
                                                                                                          t = o_26(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(z_21, sym_PrimNoArgs_1))
                                                                                                            {
                                                                                                              a_22 = ATgetArgument(z_21, 0);
                                                                                                              t = p_26(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(z_21, sym_CallNoArgs_1))
                                                                                                                {
                                                                                                                  a_22 = ATgetArgument(z_21, 0);
                                                                                                                  t = q_26(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(z_21, sym_SDefNoArgs_2))
                                                                                                                    {
                                                                                                                      a_22 = ATgetArgument(z_21, 0);
                                                                                                                      b_22 = ATgetArgument(z_21, 1);
                                                                                                                      t = r_26(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(z_21, sym_SRDef_3))
                                                                                                                        {
                                                                                                                          a_22 = ATgetArgument(z_21, 0);
                                                                                                                          b_22 = ATgetArgument(z_21, 1);
                                                                                                                          y_21 = ATgetArgument(z_21, 2);
                                                                                                                          t = s_26(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(z_21, sym_SRDefNoArgs_2))
                                                                                                                            {
                                                                                                                              a_22 = ATgetArgument(z_21, 0);
                                                                                                                              b_22 = ATgetArgument(z_21, 1);
                                                                                                                              t = t_26(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(z_21, sym_RDefNoArgs_2))
                                                                                                                                {
                                                                                                                                  a_22 = ATgetArgument(z_21, 0);
                                                                                                                                  b_22 = ATgetArgument(z_21, 1);
                                                                                                                                  t = u_26(t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(z_21, sym_Module_2))
                                                                                                                                    {
                                                                                                                                      a_22 = ATgetArgument(z_21, 0);
                                                                                                                                      b_22 = ATgetArgument(z_21, 1);
                                                                                                                                      t = v_26(t);
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
ATerm repeat_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm g_27 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = q_78(t);
      t = g_27(t);
      return(t);
    }
    t = try_1(t, u_0);
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_79 (ATerm))
{
  t = o_79(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = topdown_1(t, o_79);
      return(t);
    }
    t = _all(t, v_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym__2))
    {
      p_30 = ATgetArgument(o_30, 0);
      q_30 = ATgetArgument(o_30, 1);
      {
        ATerm u_30 = NULL,w_30 = NULL;
        ATerm v_30 = NULL;
        t = SSLgetAnnotations(not_null(o_30));
        {
          v_30 = t;
          if(((u_30 != NULL) && (u_30 != v_30)))
            _fail(v_30);
          else
            u_30 = v_30;
        }
        {
          t = not_null(p_30);
          {
            ATerm y_30 = NULL;
            t = v_63(t);
            {
              w_30 = t;
              {
                t = not_null(q_30);
                {
                  ATerm a_31 = NULL;
                  t = w_63(t);
                  {
                    y_30 = t;
                    {
                      ATerm b_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_30), not_null(y_30)), not_null(u_30));
                      {
                        b_31 = t;
                        if(((a_31 != NULL) && (a_31 != b_31)))
                          _fail(b_31);
                        else
                          a_31 = b_31;
                      }
                      t = not_null(a_31);
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
  ATerm q_7;
  q_7 = t;
  {
    ATerm i_31 = NULL;
    ATerm j_31 = NULL;
    t = term_r_7;
    {
      t = whoami_0(t);
      {
        j_31 = t;
        if(((i_31 != NULL) && (i_31 != j_31)))
          _fail(j_31);
        else
          i_31 = j_31;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(i_31)), term_t_7));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym__2))
    {
      o_31 = ATgetArgument(n_31, 0);
      p_31 = ATgetArgument(n_31, 1);
      {
        ATerm z_7;
        z_7 = t;
        t = SSL_printnl(not_null(o_31), not_null(p_31));
        t = z_7;
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
  ATerm u_31 = NULL;
  u_31 = t;
  t = SSL_implode_string(not_null(u_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = d_8;
      {
        ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
        e_32 = t;
        d_32 :
        if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
          {
            f_32 = ATgetFirst((ATermList) e_32);
            g_32 = (ATerm) ATgetNext((ATermList) e_32);
            {
              t = not_null(f_32);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(g_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_0);
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
  ATerm w_32 = NULL;
  ATerm y_32 = NULL;
  w_32 = t;
  {
    ATerm z_32 = NULL;
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    t = not_null(w_32);
    {
      z_32 = t;
      {
        t = SSL_explode_term(not_null(z_32));
        {
          b_33 = t;
          u_32 :
          if(match_cons(b_33, sym__2))
            {
              c_33 = ATgetArgument(b_33, 0);
              d_33 = ATgetArgument(b_33, 1);
              v_32 :
              if(match_string(c_33, ""))
                {
                  if(((y_32 != NULL) && (y_32 != d_33)))
                    _fail(d_33);
                  else
                    y_32 = d_33;
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
      t = not_null(y_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm h_33 (ATerm t)
  {
    ATerm h_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_33);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = h_8;
        {
          t = Nil_0(t);
          t = u_85(t);
        }
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      {
        t = not_null(l_33);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(m_33);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = SSL_explode_string(not_null(r_33));
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
  ATerm t_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = t_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
              a_34 = t;
              z_33 :
              if(match_cons(a_34, sym_Path_1))
                {
                  b_34 = ATgetArgument(a_34, 0);
                  t = not_null(b_34);
                }
              else
                {
                  if(match_cons(a_34, sym_Var_1))
                    {
                      b_34 = ATgetArgument(a_34, 0);
                      {
                        t = not_null(b_34);
                        {
                          ATerm z_8 = t;
                          int a_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(a_9);
                            }
                          else
                            {
                              t = z_8;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_b_9;
                                  return(t);
                                }
                                t = debug_1(t, z_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_34, sym_Prefix_2))
                        {
                          b_34 = ATgetArgument(a_34, 0);
                          c_34 = ATgetArgument(a_34, 1);
                          {
                            ATerm h_34 = NULL,j_34 = NULL;
                            ATerm c_9;
                            c_9 = t;
                            {
                              ATerm i_34 = NULL;
                              t = not_null(b_34);
                              {
                                t = eval_config_0(t);
                                {
                                  i_34 = t;
                                  if(((h_34 != NULL) && (h_34 != i_34)))
                                    _fail(i_34);
                                  else
                                    h_34 = i_34;
                                }
                              }
                            }
                            t = c_9;
                            {
                              ATerm k_34 = NULL;
                              t = not_null(c_34);
                              {
                                t = eval_config_0(t);
                                {
                                  k_34 = t;
                                  if(((j_34 != NULL) && (j_34 != k_34)))
                                    _fail(k_34);
                                  else
                                    j_34 = k_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), not_null(j_34));
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
  ATerm s_34 = NULL;
  s_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(s_34));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_9;
            e_9 = t;
            {
              ATerm u_34 = NULL;
              ATerm v_34 = NULL;
              v_34 = t;
              if(((u_34 != NULL) && (u_34 != v_34)))
                _fail(v_34);
              else
                u_34 = v_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(s_34), not_null(u_34));
                t = table_put_0(t);
              }
            }
            t = e_9;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm f_9;
    f_9 = t;
    {
      ATerm z_34 = NULL;
      ATerm a_35 = NULL;
      t = term_g_9;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), term_h_9);
        t = geq_0(t);
      }
    }
    t = f_9;
    t = q_98(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  g_35 = t;
  e_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      f_35 :
      if(match_cons(i_35, sym_Stream_1))
        {
          j_35 = ATgetArgument(i_35, 0);
          {
            ATerm m_35 = NULL;
            t = SSL_fputc(not_null(h_35), not_null(j_35));
            {
              ATerm n_35 = NULL;
              n_35 = t;
              if(((m_35 != NULL) && (m_35 != n_35)))
                _fail(n_35);
              else
                m_35 = n_35;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_35));
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
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  u_35 = t;
  s_35 :
  if(match_cons(u_35, sym__2))
    {
      v_35 = ATgetArgument(u_35, 0);
      x_35 = ATgetArgument(u_35, 1);
      t_35 :
      if(match_cons(v_35, sym_Stream_1))
        {
          w_35 = ATgetArgument(v_35, 0);
          {
            ATerm a_36 = NULL;
            t = SSL_write_term_to_stream_text(not_null(w_35), not_null(x_35));
            {
              ATerm b_36 = NULL;
              b_36 = t;
              if(((a_36 != NULL) && (a_36 != b_36)))
                _fail(b_36);
              else
                a_36 = b_36;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_36));
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
  ATerm c_1 (ATerm t)
  {
    ATerm f_36 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm g_36 = NULL;
      g_36 = t;
      if(((f_36 != NULL) && (f_36 != g_36)))
        _fail(g_36);
      else
        f_36 = g_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_3, not_null(f_36));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_1);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  m_36 = t;
  k_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      p_36 = ATgetArgument(m_36, 1);
      l_36 :
      if(match_cons(n_36, sym_Stream_1))
        {
          o_36 = ATgetArgument(n_36, 0);
          {
            ATerm s_36 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(o_36), not_null(p_36));
            {
              ATerm t_36 = NULL;
              t_36 = t;
              if(((s_36 != NULL) && (s_36 != t_36)))
                _fail(t_36);
              else
                s_36 = t_36;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_36));
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
ATerm WriteToFile_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym__2))
    {
      b_37 = ATgetArgument(a_37, 0);
      c_37 = ATgetArgument(a_37, 1);
      {
        ATerm f_37 = NULL,h_37 = NULL;
        t = not_null(b_37);
        {
          ATerm g_37 = NULL;
          g_37 = t;
          if(((f_37 != NULL) && (f_37 != g_37)))
            _fail(g_37);
          else
            f_37 = g_37;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), term_i_9);
            {
              t = open_stream_0(t);
              {
                ATerm i_37 = NULL;
                i_37 = t;
                if(((h_37 != NULL) && (h_37 != i_37)))
                  _fail(i_37);
                else
                  h_37 = i_37;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(c_37));
                  {
                    t = m_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(c_37);
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
  ATerm q_37 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm k_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm r_37 = NULL,s_37 = NULL;
            r_37 = t;
            n_37 :
            if(match_cons(r_37, sym_Output_1))
              {
                s_37 = ATgetArgument(r_37, 0);
                if(((q_37 != NULL) && (q_37 != s_37)))
                  _fail(s_37);
                else
                  q_37 = s_37;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          ;
          LocalPopChoice(l_9);
        }
      else
        {
          t = k_9;
          {
            ATerm t_37 = NULL;
            t = term_m_9;
            {
              t_37 = t;
              if(((q_37 != NULL) && (q_37 != t_37)))
                _fail(t_37);
              else
                q_37 = t_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = j_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(q_37);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm u_37 = NULL;
              u_37 = t;
              p_37 :
              if(!(match_cons(u_37, sym_Binary_0)))
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
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm c_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  ATerm t_9;
  t_9 = t;
  t = dtime_0(t);
  t = t_9;
  {
    t = o_100(t);
    {
      ATerm x_9;
      x_9 = t;
      {
        ATerm d_38 = NULL;
        t = dtime_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
      t = x_9;
      {
        e_38 = t;
        b_38 :
        if(match_cons(e_38, sym__2))
          {
            f_38 = ATgetArgument(e_38, 0);
            g_38 = ATgetArgument(e_38, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_38)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_38))), not_null(g_38));
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
  ATerm o_38 = NULL,p_38 = NULL;
  ATerm v_38 (ATerm t)
  {
    t = SSL_fclose(not_null(p_38));
    return(t);
  }
  p_38 = t;
  n_38 :
  if(match_cons(p_38, sym_Stream_1))
    {
      o_38 = ATgetArgument(p_38, 0);
      {
        ATerm z_9 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(o_38));
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = z_9;
            t = v_38(t);
          }
      }
    }
  else
    {
      t = v_38(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Stream_1))
    {
      z_38 = ATgetArgument(y_38, 0);
      t = SSL_read_term_from_stream(not_null(z_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_96 (ATerm))
{
  ATerm d_10;
  d_10 = t;
  {
    ATerm e_39 = NULL,g_39 = NULL;
    ATerm e_10;
    e_10 = t;
    {
      ATerm f_39 = NULL;
      t = y_96(t);
      {
        f_39 = t;
        if(((e_39 != NULL) && (e_39 != f_39)))
          _fail(f_39);
        else
          e_39 = f_39;
      }
    }
    t = e_10;
    {
      ATerm h_39 = NULL;
      h_39 = t;
      if(((g_39 != NULL) && (g_39 != h_39)))
        _fail(h_39);
      else
        g_39 = h_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), not_null(e_39)));
        t = printnl_0(t);
      }
    }
  }
  t = d_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  m_39 :
  if(match_cons(s_39, sym__2))
    {
      t_39 = ATgetArgument(s_39, 0);
      u_39 = ATgetArgument(s_39, 1);
      {
        ATerm x_39 = NULL;
        t = SSL_fopen(not_null(t_39), not_null(u_39));
        {
          ATerm y_39 = NULL;
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_39));
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
  ATerm c_40 = NULL;
  c_40 = t;
  t = SSL_is_string(not_null(c_40));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_40 = NULL;
    h_40 = t;
    if(((g_40 != NULL) && (g_40 != h_40)))
      _fail(h_40);
    else
      g_40 = h_40;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_40));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_40 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_40 = NULL;
    l_40 = t;
    if(((k_40 != NULL) && (k_40 != l_40)))
      _fail(l_40);
    else
      k_40 = l_40;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_40));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm p_40 = NULL;
    p_40 = t;
    if(((o_40 != NULL) && (o_40 != p_40)))
      _fail(p_40);
    else
      o_40 = p_40;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_40));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  u_40 :
  if(match_cons(v_40, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(v_40, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(v_40, sym_stdin_0))
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
  ATerm f_41 = NULL;
  ATerm h_41 = NULL,i_41 = NULL;
  f_41 = t;
  {
    ATerm j_41 = NULL;
    ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
    t = not_null(f_41);
    {
      j_41 = t;
      {
        t = SSL_explode_term(not_null(j_41));
        {
          l_41 = t;
          c_41 :
          if(match_cons(l_41, sym__2))
            {
              m_41 = ATgetArgument(l_41, 0);
              n_41 = ATgetArgument(l_41, 1);
              d_41 :
              if(match_string(m_41, ""))
                {
                  e_41 :
                  if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
                    {
                      o_41 = ATgetFirst((ATermList) n_41);
                      p_41 = (ATerm) ATgetNext((ATermList) n_41);
                      {
                        if(((i_41 != NULL) && (i_41 != o_41)))
                          _fail(o_41);
                        else
                          i_41 = o_41;
                        if(((h_41 != NULL) && (h_41 != p_41)))
                          _fail(p_41);
                        else
                          h_41 = p_41;
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
    t = not_null(i_41);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym__2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm a_42 = NULL,b_42 = NULL;
                    a_42 = t;
                    v_41 :
                    if(match_cons(a_42, sym_Path_1))
                      {
                        b_42 = ATgetArgument(a_42, 0);
                        t = not_null(b_42);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, j_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
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
  ATerm j_42 = NULL;
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_42 = NULL;
      ATerm i_42 = NULL;
      i_42 = t;
      if(((h_42 != NULL) && (h_42 != i_42)))
        _fail(i_42);
      else
        h_42 = i_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_42), term_l_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_m_10;
          return(t);
        }
        t = debug_1(t, k_1);
        _fail(t);
      }
    }
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm k_42 = NULL;
      t = read_from_stream_0(t);
      {
        k_42 = t;
        if(((j_42 != NULL) && (j_42 != k_42)))
          _fail(k_42);
        else
          j_42 = k_42;
      }
    }
    t = s_10;
    {
      t = fclose_0(t);
      t = not_null(j_42);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_92 (ATerm), ATerm s_92 (ATerm))
{
  ATerm p_42 = NULL,r_42 = NULL;
  ATerm t_10;
  t_10 = t;
  {
    ATerm q_42 = NULL;
    t = r_92(t);
    {
      q_42 = t;
      if(((p_42 != NULL) && (p_42 != q_42)))
        _fail(q_42);
      else
        p_42 = q_42;
    }
  }
  t = t_10;
  {
    ATerm s_42 = NULL;
    t = s_92(t);
    {
      s_42 = t;
      if(((r_42 != NULL) && (r_42 != s_42)))
        _fail(s_42);
      else
        r_42 = s_42;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_42), not_null(r_42));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_42 = NULL;
  ATerm u_10;
  u_10 = t;
  {
    ATerm v_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm z_42 = NULL,a_43 = NULL;
          z_42 = t;
          w_42 :
          if(match_cons(z_42, sym_Input_1))
            {
              a_43 = ATgetArgument(z_42, 0);
              if(((y_42 != NULL) && (y_42 != a_43)))
                _fail(a_43);
              else
                y_42 = a_43;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = v_10;
        {
          ATerm b_43 = NULL;
          t = term_b_11;
          {
            b_43 = t;
            if(((y_42 != NULL) && (y_42 != b_43)))
              _fail(b_43);
            else
              y_42 = b_43;
          }
        }
      }
  }
  t = u_10;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(y_42);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm f_43 = NULL;
    f_43 = t;
    e_43 :
    if(!(match_string(f_43, "-v")))
      {
        if(!(match_string(f_43, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_g_11;
    t = set_config_0(t);
    t = term_h_11;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_i_11;
    return(t);
  }
  t = Option_3(t, n_1, o_1, p_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm i_43 = NULL;
    i_43 = t;
    g_43 :
    if(!(match_string(i_43, "-k")))
      {
        if(!(match_string(i_43, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm j_11;
    j_11 = t;
    {
      ATerm j_43 = NULL;
      ATerm k_43 = NULL;
      t = string_to_int_0(t);
      {
        k_43 = t;
        if(((j_43 != NULL) && (j_43 != k_43)))
          _fail(k_43);
        else
          j_43 = k_43;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(j_43));
        t = set_config_0(t);
      }
    }
    t = j_11;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  t = ArgOption_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_43 = NULL;
  n_43 = t;
  t = SSL_string_to_int(not_null(n_43));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm v_43 = NULL;
        v_43 = t;
        q_43 :
        if(!(match_string(v_43, "-S")))
          {
            if(!(match_string(v_43, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_p_11;
        t = set_config_0(t);
        t = term_q_11;
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_r_11;
        return(t);
      }
      t = Option_3(t, t_1, u_1, v_1);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm w_43 = NULL;
              w_43 = t;
              r_43 :
              if(!(match_string(w_43, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              ATerm z_43 = NULL;
              ATerm z_11;
              z_11 = t;
              {
                ATerm x_43 = NULL;
                ATerm y_43 = NULL;
                t = string_to_int_0(t);
                {
                  y_43 = t;
                  if(((x_43 != NULL) && (x_43 != y_43)))
                    _fail(y_43);
                  else
                    x_43 = y_43;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(x_43));
                  t = set_config_0(t);
                }
              }
              t = z_11;
              {
                ATerm a_44 = NULL;
                a_44 = t;
                if(((z_43 != NULL) && (z_43 != a_44)))
                  _fail(a_44);
                else
                  z_43 = a_44;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_43));
              }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = ArgOption_3(t, w_1, x_1, y_1);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm z_1 (ATerm t)
              {
                ATerm b_44 = NULL;
                b_44 = t;
                u_43 :
                if(!(match_string(b_44, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_2 (ATerm t)
              {
                t = term_g_12;
                t = set_config_0(t);
                t = term_i_12;
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                t = term_l_12;
                return(t);
              }
              t = Option_3(t, z_1, a_2, b_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm i_44 = NULL;
    i_44 = t;
    e_44 :
    if(!(match_string(i_44, "-o")))
      {
        if(!(match_string(i_44, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm s_44 = NULL;
    ATerm q_12;
    q_12 = t;
    {
      ATerm k_44 = NULL;
      ATerm q_44 = NULL;
      q_44 = t;
      if(((k_44 != NULL) && (k_44 != q_44)))
        _fail(q_44);
      else
        k_44 = q_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_12, not_null(k_44));
        t = set_config_0(t);
      }
    }
    t = q_12;
    {
      ATerm t_44 = NULL;
      t_44 = t;
      if(((s_44 != NULL) && (s_44 != t_44)))
        _fail(t_44);
      else
        s_44 = t_44;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_44));
    }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    t = term_s_12;
    return(t);
  }
  t = ArgOption_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm f_2 (ATerm t)
        {
          ATerm x_44 = NULL;
          x_44 = t;
          w_44 :
          if(!(match_string(x_44, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm g_2 (ATerm t)
        {
          t = term_z_12;
          t = set_config_0(t);
          t = term_d_13;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = term_g_13;
          return(t);
        }
        t = Option_3(t, f_2, g_2, h_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  d_45 = t;
  b_45 :
  if(match_string(d_45, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
        {
          e_45 = ATgetFirst((ATermList) d_45);
          f_45 = (ATerm) ATgetNext((ATermList) d_45);
          c_45 :
          if(((ATgetType(f_45) == AT_LIST) && !(ATisEmpty(f_45))))
            {
              g_45 = ATgetFirst((ATermList) f_45);
              h_45 = (ATerm) ATgetNext((ATermList) f_45);
              {
                ATerm l_45 = NULL;
                ATerm h_13;
                h_13 = t;
                {
                  t = not_null(e_45);
                  t = j_0(t);
                }
                t = h_13;
                {
                  ATerm m_45 = NULL;
                  t = not_null(g_45);
                  {
                    t = k_0(t);
                    {
                      m_45 = t;
                      if(((l_45 != NULL) && (l_45 != m_45)))
                        _fail(m_45);
                      else
                        l_45 = m_45;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_45)), not_null(l_45));
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
  ATerm i_2 (ATerm t)
  {
    ATerm t_45 = NULL;
    t_45 = t;
    q_45 :
    if(!(match_string(t_45, "-i")))
      {
        if(!(match_string(t_45, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm w_45 = NULL;
    ATerm i_13;
    i_13 = t;
    {
      ATerm u_45 = NULL;
      ATerm v_45 = NULL;
      v_45 = t;
      if(((u_45 != NULL) && (u_45 != v_45)))
        _fail(v_45);
      else
        u_45 = v_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_13, not_null(u_45));
        t = set_config_0(t);
      }
    }
    t = i_13;
    {
      ATerm x_45 = NULL;
      x_45 = t;
      if(((w_45 != NULL) && (w_45 != x_45)))
        _fail(x_45);
      else
        w_45 = x_45;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_45));
    }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_k_13;
    return(t);
  }
  t = ArgOption_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(y_13);
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
  ATerm b_46 = NULL;
  t = report_run_time_0(t);
  {
    ATerm c_46 = NULL;
    t = term_r_7;
    {
      t = whoami_0(t);
      {
        c_46 = t;
        if(((b_46 != NULL) && (b_46 != c_46)))
          _fail(c_46);
        else
          b_46 = c_46;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, term_z_13), not_null(b_46)));
      {
        t = printnl_0(t);
        {
          t = term_y_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_a_14;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_46 = NULL;
  f_46 = t;
  t = SSL_TicksToSeconds(not_null(f_46));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym__2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_46), not_null(n_46));
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = SSL_addr(not_null(m_46), not_null(n_46));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_91 (ATerm), ATerm d_91 (ATerm))
{
  ATerm m_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_91(t);
      ;
      LocalPopChoice(w_14);
    }
  else
    {
      t = m_14;
      {
        ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
        w_46 = t;
        v_46 :
        if(((ATgetType(w_46) == AT_LIST) && !(ATisEmpty(w_46))))
          {
            x_46 = ATgetFirst((ATermList) w_46);
            y_46 = (ATerm) ATgetNext((ATermList) w_46);
            {
              ATerm b_47 = NULL;
              ATerm c_47 = NULL;
              t = not_null(y_46);
              {
                t = foldr_2(t, c_91, d_91);
                {
                  c_47 = t;
                  if(((b_47 != NULL) && (b_47 != c_47)))
                    _fail(c_47);
                  else
                    b_47 = c_47;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_46), not_null(b_47));
                t = d_91(t);
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
ATerm crush_2 (ATerm t, ATerm v_94 (ATerm), ATerm w_94 (ATerm))
{
  ATerm j_47 = NULL;
  ATerm l_47 = NULL;
  j_47 = t;
  {
    ATerm m_47 = NULL;
    ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
    t = not_null(j_47);
    {
      m_47 = t;
      {
        t = SSL_explode_term(not_null(m_47));
        {
          q_47 = t;
          i_47 :
          if(match_cons(q_47, sym__2))
            {
              r_47 = ATgetArgument(q_47, 0);
              s_47 = ATgetArgument(q_47, 1);
              if(((l_47 != NULL) && (l_47 != s_47)))
                _fail(s_47);
              else
                l_47 = s_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_47);
      t = foldr_2(t, v_94, w_94);
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
    ATerm l_2 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    t = crush_2(t, l_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym__2))
    {
      a_48 = ATgetArgument(z_47, 0);
      b_48 = ATgetArgument(z_47, 1);
      {
        ATerm x_14;
        x_14 = t;
        {
          ATerm y_14 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_48), not_null(b_48));
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = y_14;
              t = SSL_gtr(not_null(a_48), not_null(b_48));
            }
        }
        t = x_14;
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
  ATerm h_48 = NULL;
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
      i_48 = t;
      g_48 :
      if(match_cons(i_48, sym__2))
        {
          j_48 = ATgetArgument(i_48, 0);
          k_48 = ATgetArgument(i_48, 1);
          {
            if(((h_48 != NULL) && (h_48 != j_48)))
              _fail(j_48);
            else
              h_48 = j_48;
            if(((h_48 != NULL) && (h_48 != k_48)))
              _fail(k_48);
            else
              h_48 = k_48;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm m_2 (ATerm t)
  {
    ATerm l_15;
    l_15 = t;
    {
      ATerm n_48 = NULL;
      ATerm o_48 = NULL;
      t = term_g_9;
      {
        t = get_config_0(t);
        {
          o_48 = t;
          if(((n_48 != NULL) && (n_48 != o_48)))
            _fail(o_48);
          else
            n_48 = o_48;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_48), term_y_7);
        t = geq_0(t);
      }
    }
    t = l_15;
    t = p_98(t);
    return(t);
  }
  t = try_1(t, m_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm t_48 = NULL,v_48 = NULL;
    ATerm m_15;
    m_15 = t;
    {
      ATerm u_48 = NULL;
      t = run_time_0(t);
      {
        u_48 = t;
        if(((t_48 != NULL) && (t_48 != u_48)))
          _fail(u_48);
        else
          t_48 = u_48;
      }
    }
    t = m_15;
    {
      ATerm w_48 = NULL;
      t = term_r_7;
      {
        t = whoami_0(t);
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_15), not_null(t_48)), term_n_15), not_null(v_48)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_o_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_Version_0))
    {
      ATerm f_49 = NULL,h_49 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm g_49 = NULL;
        t = SSLgetAnnotations(not_null(d_49));
        {
          g_49 = t;
          if(((f_49 != NULL) && (f_49 != g_49)))
            _fail(g_49);
          else
            f_49 = g_49;
        }
      }
      t = p_15;
      {
        ATerm i_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_49));
        {
          i_49 = t;
          if(((h_49 != NULL) && (h_49 != i_49)))
            _fail(i_49);
          else
            h_49 = i_49;
        }
        t = not_null(h_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_101 (ATerm))
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm a_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(d_16);
            }
          else
            {
              t = a_16;
              {
                ATerm g_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = g_16;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
      }
    }
  t = m_101(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  t = SSL_table_create(not_null(n_49));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_49 = NULL;
  r_49 = t;
  {
    ATerm i_16;
    i_16 = t;
    {
      t = term_j_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(r_49));
          t = table_put_0(t);
        }
      }
    }
    t = i_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  t = SSL_table_destroy(not_null(b_50));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = SSL_exit(not_null(f_50));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(((ATgetType(j_50) == AT_LIST) && ATisEmpty(j_50)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_50) == AT_LIST) && !(ATisEmpty(j_50))))
        {
          k_50 = ATgetFirst((ATermList) j_50);
          l_50 = (ATerm) ATgetNext((ATermList) j_50);
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
  ATerm l_16;
  l_16 = t;
  {
    ATerm o_50 = NULL;
    ATerm r_50 = NULL;
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm p_50 = NULL;
          ATerm q_50 = NULL;
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
          t = (ATerm) ATinsert(ATempty, not_null(p_50));
        }
      }
    {
      r_50 = t;
      if(((o_50 != NULL) && (o_50 != r_50)))
        _fail(r_50);
      else
        o_50 = r_50;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(o_50));
      t = printnl_0(t);
    }
  }
  t = l_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_103 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm u_50 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = Cons_2(t, f_85, u_50);
      }
    return(t);
  }
  t = u_50(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  d_51 = t;
  a_51 :
  if(((ATgetType(d_51) == AT_LIST) && !(ATisEmpty(d_51))))
    {
      b_51 = ATgetFirst((ATermList) d_51);
      c_51 = (ATerm) ATgetNext((ATermList) d_51);
      {
        ATerm g_51 = NULL;
        t = not_null(c_51);
        {
          ATerm r_16;
          r_16 = t;
          {
            ATerm h_51 = NULL,j_51 = NULL,l_51 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              ATerm i_51 = NULL;
              t = i_0(t);
              {
                i_51 = t;
                if(((h_51 != NULL) && (h_51 != i_51)))
                  _fail(i_51);
                else
                  h_51 = i_51;
              }
            }
            t = w_16;
            {
              ATerm k_51 = NULL;
              t = not_null(b_51);
              {
                t = g_0(t);
                {
                  k_51 = t;
                  if(((j_51 != NULL) && (j_51 != k_51)))
                    _fail(k_51);
                  else
                    j_51 = k_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_51)), not_null(j_51));
                {
                  l_51 = t;
                  if(((g_51 != NULL) && (g_51 != l_51)))
                    _fail(l_51);
                  else
                    g_51 = l_51;
                }
              }
            }
          }
          t = r_16;
          {
            ATerm p_2 (ATerm t)
            {
              t = not_null(g_51);
              return(t);
            }
            t = reverse_acc_2(t, g_0, p_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(d_51) == AT_LIST) && ATisEmpty(d_51)))
        {
          {
            t = term_r_7;
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
  ATerm q_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_103 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm w_51 = NULL,x_51 = NULL;
  w_51 = t;
  v_51 :
  if(match_cons(w_51, sym_Program_1))
    {
      x_51 = ATgetArgument(w_51, 0);
      {
        ATerm a_52 = NULL,c_52 = NULL;
        ATerm b_52 = NULL;
        t = SSLgetAnnotations(not_null(w_51));
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
        {
          t = not_null(x_51);
          {
            ATerm e_52 = NULL;
            t = z_70(t);
            {
              c_52 = t;
              {
                ATerm f_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_52)), not_null(a_52));
                {
                  f_52 = t;
                  if(((e_52 != NULL) && (e_52 != f_52)))
                    _fail(f_52);
                  else
                    e_52 = f_52;
                }
                t = not_null(e_52);
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
  ATerm o_52 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL;
      t = term_a_14;
      {
        t = get_config_0(t);
        {
          p_52 = t;
          if(((o_52 != NULL) && (o_52 != p_52)))
            _fail(p_52);
          else
            o_52 = p_52;
        }
      }
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            ATerm q_52 = NULL;
            q_52 = t;
            if(((o_52 != NULL) && (o_52 != q_52)))
              _fail(q_52);
            else
              o_52 = q_52;
            return(t);
          }
          t = Program_1(t, s_2);
          return(t);
        }
        t = option_defined_1(t, r_2);
      }
    }
  {
    ATerm t_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        t = not_null(o_52);
        return(t);
      }
      t = short_description_1(t, u_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, t_2);
    {
      t = term_e_17;
      {
        t = echo_0(t);
        {
          t = term_h_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm r_52 = NULL;
                  ATerm s_52 = NULL;
                  s_52 = t;
                  if(((r_52 != NULL) && (r_52 != s_52)))
                    _fail(s_52);
                  else
                    r_52 = s_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_52)), term_m_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, v_2);
                {
                  ATerm w_2 (ATerm t)
                  {
                    ATerm t_52 = NULL;
                    ATerm u_52 = NULL;
                    ATerm x_2 (ATerm t)
                    {
                      t = not_null(o_52);
                      return(t);
                    }
                    t = long_description_1(t, x_2);
                    {
                      u_52 = t;
                      if(((t_52 != NULL) && (t_52 != u_52)))
                        _fail(u_52);
                      else
                        t_52 = u_52;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_52)), term_n_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_2);
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
ATerm Undefined_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym_Undefined_1))
    {
      o_53 = ATgetArgument(n_53, 0);
      {
        ATerm r_53 = NULL,t_53 = NULL;
        ATerm s_53 = NULL;
        t = SSLgetAnnotations(not_null(n_53));
        {
          s_53 = t;
          if(((r_53 != NULL) && (r_53 != s_53)))
            _fail(s_53);
          else
            r_53 = s_53;
        }
        {
          t = not_null(o_53);
          {
            ATerm v_53 = NULL;
            t = a_71(t);
            {
              t_53 = t;
              {
                ATerm w_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_53)), not_null(r_53));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm b_54 (ATerm t)
  {
    ATerm q_17 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_85, _id);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = q_17;
        t = Cons_2(t, _id, b_54);
      }
    return(t);
  }
  t = b_54(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_102 (ATerm))
{
  t = fetch_1(t, m_102);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  f_54 :
  if(match_cons(i_54, sym_Help_0))
    {
      ATerm k_54 = NULL,m_54 = NULL;
      ATerm f_18;
      f_18 = t;
      {
        ATerm l_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          l_54 = t;
          if(((k_54 != NULL) && (k_54 != l_54)))
            _fail(l_54);
          else
            k_54 = l_54;
        }
      }
      t = f_18;
      {
        ATerm n_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_54));
        {
          n_54 = t;
          if(((m_54 != NULL) && (m_54 != n_54)))
            _fail(n_54);
          else
            m_54 = n_54;
        }
        t = not_null(m_54);
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
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym__2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      t = SSL_table_get(not_null(z_54), not_null(a_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym__3))
    {
      j_55 = ATgetArgument(h_55, 0);
      k_55 = ATgetArgument(h_55, 1);
      l_55 = ATgetArgument(h_55, 2);
      {
        ATerm g_18;
        g_18 = t;
        {
          ATerm p_55 = NULL;
          ATerm q_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_55), not_null(k_55));
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
                t = (ATerm) ATempty;
              }
            {
              q_55 = t;
              if(((p_55 != NULL) && (p_55 != q_55)))
                _fail(q_55);
              else
                p_55 = q_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_55), not_null(k_55), (ATerm) ATinsert(CheckATermList(not_null(p_55)), not_null(l_55)));
            t = table_put_0(t);
          }
        }
        t = g_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm u_55 = NULL;
  ATerm v_55 = NULL;
  t = term_r_7;
  {
    t = r_103(t);
    {
      v_55 = t;
      if(((u_55 != NULL) && (u_55 != v_55)))
        _fail(v_55);
      else
        u_55 = v_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, not_null(u_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  i_56 = t;
  g_56 :
  if(match_string(i_56, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(i_56) == AT_LIST) && !(ATisEmpty(i_56))))
        {
          j_56 = ATgetFirst((ATermList) i_56);
          k_56 = (ATerm) ATgetNext((ATermList) i_56);
          {
            ATerm n_56 = NULL;
            ATerm j_18;
            j_18 = t;
            {
              t = not_null(j_56);
              t = a_0(t);
            }
            t = j_18;
            {
              ATerm o_56 = NULL;
              t = term_r_7;
              {
                t = b_0(t);
                {
                  o_56 = t;
                  if(((n_56 != NULL) && (n_56 != o_56)))
                    _fail(o_56);
                  else
                    n_56 = o_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_56)), not_null(n_56));
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
    ATerm t_56 = NULL;
    t_56 = t;
    s_56 :
    if(!(match_string(t_56, "--help")))
      {
        if(!(match_string(t_56, "-h")))
          {
            if(!(match_string(t_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_k_18;
    {
      t = set_config_0(t);
      t = term_n_18;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
    {
      x_56 = ATgetFirst((ATermList) w_56);
      y_56 = (ATerm) ATgetNext((ATermList) w_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  i_57 = t;
  h_57 :
  if(((ATgetType(i_57) == AT_LIST) && !(ATisEmpty(i_57))))
    {
      j_57 = ATgetFirst((ATermList) i_57);
      k_57 = (ATerm) ATgetNext((ATermList) i_57);
      {
        ATerm o_57 = NULL,q_57 = NULL;
        ATerm p_57 = NULL;
        t = SSLgetAnnotations(not_null(i_57));
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
        {
          t = not_null(j_57);
          {
            ATerm s_57 = NULL;
            t = e_65(t);
            {
              q_57 = t;
              {
                t = not_null(k_57);
                {
                  ATerm u_57 = NULL;
                  t = f_65(t);
                  {
                    s_57 = t;
                    {
                      ATerm v_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_57)), not_null(q_57)), not_null(o_57));
                      {
                        v_57 = t;
                        if(((u_57 != NULL) && (u_57 != v_57)))
                          _fail(v_57);
                        else
                          u_57 = v_57;
                      }
                      t = not_null(u_57);
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
  ATerm f_58 = NULL;
  f_58 = t;
  e_58 :
  if(((ATgetType(f_58) == AT_LIST) && ATisEmpty(f_58)))
    {
      {
        ATerm h_58 = NULL,j_58 = NULL;
        ATerm p_18;
        p_18 = t;
        {
          ATerm i_58 = NULL;
          t = SSLgetAnnotations(not_null(f_58));
          {
            i_58 = t;
            if(((h_58 != NULL) && (h_58 != i_58)))
              _fail(i_58);
            else
              h_58 = i_58;
          }
        }
        t = p_18;
        {
          ATerm k_58 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_58));
          {
            k_58 = t;
            if(((j_58 != NULL) && (j_58 != k_58)))
              _fail(k_58);
            else
              j_58 = k_58;
          }
          t = not_null(j_58);
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
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  u_58 :
  if(match_cons(v_58, sym__2))
    {
      w_58 = ATgetArgument(v_58, 0);
      x_58 = ATgetArgument(v_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_9, not_null(w_58), not_null(x_58));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm q_18;
  q_18 = t;
  {
    ATerm b_3 (ATerm t)
    {
      t = term_r_18;
      t = p_103(t);
      return(t);
    }
    t = try_1(t, b_3);
  }
  t = q_18;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm m_59 = NULL;
      ATerm s_18;
      s_18 = t;
      {
        ATerm k_59 = NULL;
        ATerm l_59 = NULL;
        l_59 = t;
        if(((k_59 != NULL) && (k_59 != l_59)))
          _fail(l_59);
        else
          k_59 = l_59;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(k_59));
          t = set_config_0(t);
        }
      }
      t = s_18;
      {
        ATerm n_59 = NULL;
        n_59 = t;
        if(((m_59 != NULL) && (m_59 != n_59)))
          _fail(n_59);
        else
          m_59 = n_59;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_59));
      }
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = a_19;
              {
                t = p_103(t);
                t = Cons_2(t, _id, d_3);
              }
            }
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_3, d_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  ATerm n_19;
  n_19 = t;
  {
    ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
    w_59 = t;
    s_59 :
    if(match_cons(w_59, sym__3))
      {
        x_59 = ATgetArgument(w_59, 0);
        y_59 = ATgetArgument(w_59, 1);
        z_59 = ATgetArgument(w_59, 2);
        {
          if(((t_59 != NULL) && (t_59 != x_59)))
            _fail(x_59);
          else
            t_59 = x_59;
          {
            if(((u_59 != NULL) && (u_59 != y_59)))
              _fail(y_59);
            else
              u_59 = y_59;
            {
              if(((v_59 != NULL) && (v_59 != z_59)))
                _fail(z_59);
              else
                v_59 = z_59;
              t = SSL_table_put(not_null(t_59), not_null(u_59), not_null(v_59));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm c_60 = NULL;
  ATerm o_19;
  o_19 = t;
  {
    t = term_p_19;
    t = table_put_0(t);
  }
  t = o_19;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_103(t);
          ;
          LocalPopChoice(r_19);
        }
      else
        {
          t = q_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_3);
    {
      ATerm f_3 (ATerm t)
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_19;
            u_19 = t;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = u_19;
            {
              t = system_usage_0(t);
              {
                t = term_o_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm g_3 (ATerm t)
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm d_60 = NULL;
                  d_60 = t;
                  if(((c_60 != NULL) && (c_60 != d_60)))
                    _fail(d_60);
                  else
                    c_60 = d_60;
                  return(t);
                }
                t = Undefined_1(t, h_3);
                return(t);
              }
              t = option_defined_1(t, g_3);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_60)), term_x_19));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_3);
      {
        ATerm y_19;
        y_19 = t;
        {
          t = term_f_17;
          t = table_destroy_0(t);
        }
        t = y_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm))
{
  t = parse_options_1(t, o_101);
  {
    t = store_options_0(t);
    {
      t = q_101(t);
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_101);
            ;
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm b_20 = t;
              int c_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_101(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_20);
                }
              else
                {
                  t = b_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_101(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_101);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_3, f_101, g_101, j_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm f_20;
      f_20 = t;
      {
        ATerm g_60 = NULL;
        ATerm h_60 = NULL;
        t = term_a_14;
        {
          t = get_config_0(t);
          {
            h_60 = t;
            if(((g_60 != NULL) && (g_60 != h_60)))
              _fail(h_60);
            else
              g_60 = h_60;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATinsert(ATempty, not_null(g_60)));
          t = printnl_0(t);
        }
      }
      t = f_20;
      return(t);
    }
    t = if_verbose2_1(t, l_3);
    return(t);
  }
  t = iowrap_4(t, x_100, y_100, z_100, k_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_100 (ATerm), ATerm w_100 (ATerm))
{
  t = iowrap_3(t, v_100, w_100, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = _2(t, _id, s_100);
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
      ATerm w_60 = NULL;
      ATerm y_60 = NULL;
      w_60 = t;
      {
        ATerm z_60 = NULL;
        ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
        t = not_null(w_60);
        {
          z_60 = t;
          {
            t = SSL_explode_term(not_null(z_60));
            {
              b_61 = t;
              m_60 :
              if(match_cons(b_61, sym__2))
                {
                  c_61 = ATgetArgument(b_61, 0);
                  d_61 = ATgetArgument(b_61, 1);
                  n_60 :
                  if(((ATgetType(d_61) == AT_LIST) && !(ATisEmpty(d_61))))
                    {
                      e_61 = ATgetFirst((ATermList) d_61);
                      f_61 = (ATerm) ATgetNext((ATermList) d_61);
                      o_60 :
                      if(((ATgetType(f_61) == AT_LIST) && ATisEmpty(f_61)))
                        {
                          if(((y_60 != NULL) && (y_60 != e_61)))
                            _fail(e_61);
                          else
                            y_60 = e_61;
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
        t = not_null(y_60);
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
