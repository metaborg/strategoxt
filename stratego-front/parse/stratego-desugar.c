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
Symbol sym_Cong_2;
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
Symbol sym_CharCong_1;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
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
ATerm term_m_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_f_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
void init_constant_terms (void)
{
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Call_2, term_s_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATempty);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Call_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_u_7);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_u_7);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_r_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_u_7);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_u_7);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_p_15, term_u_7);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__3, term_p_16, term_r_16, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RemoveLeadingPrime_0 (ATerm);
ATerm Op_2 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm));
ATerm OpDecl_2 (ATerm, ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm SVar_1 (ATerm, ATerm i_75 (ATerm));
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm VarDec_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm RDef_3 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm DefaultVarDec_1 (ATerm, ATerm t_77 (ATerm));
ATerm string_to_real_0 (ATerm);
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm DesugarOnce_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_78 (ATerm));
ATerm at_last_1 (ATerm, ATerm q_86 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm q_94 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm b_95 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm DesugarCharGeneric_0 (ATerm);
ATerm DesugarChar_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Desugar_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm b_79 (ATerm));
ATerm topdown_1 (ATerm, ATerm z_79 (ATerm));
ATerm _2 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_86 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_99 (ATerm));
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm a_98 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_101 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_97 (ATerm));
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm));
ATerm crush_2 (ATerm, ATerm i_95 (ATerm), ATerm j_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_99 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_102 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_104 (ATerm));
ATerm map_1 (ATerm, ATerm q_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_104 (ATerm));
ATerm Program_1 (ATerm, ATerm h_71 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_103 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_104 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_104 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_104 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_101 (ATerm), ATerm k_101 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_101 (ATerm));
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
ATerm Op_2 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm))
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
            t = p_72(t);
            {
              g_5 = t;
              {
                t = not_null(a_5);
                {
                  ATerm k_5 = NULL;
                  t = q_72(t);
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
ATerm OpDecl_2 (ATerm t, ATerm b_72 (ATerm), ATerm c_72 (ATerm))
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
            t = b_72(t);
            {
              f_6 = t;
              {
                t = not_null(z_5);
                {
                  ATerm j_6 = NULL;
                  t = c_72(t);
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
ATerm SVar_1 (ATerm t, ATerm i_75 (ATerm))
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
            t = i_75(t);
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
        ATerm w_3 = t;
        int x_3 = stack_ptr;
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
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm y_3 = t;
              int z_3 = stack_ptr;
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
                  LocalPopChoice(z_3);
                }
              else
                {
                  t = y_3;
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
ATerm VarDec_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
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
            t = u_77(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = v_77(t);
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
ATerm SDef_3 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm a_78 (ATerm))
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
            t = y_77(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = z_77(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = a_78(t);
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
ATerm RDef_3 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm))
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
            t = i_74(t);
            {
              d_12 = t;
              {
                t = not_null(v_11);
                {
                  ATerm h_12 = NULL;
                  t = j_74(t);
                  {
                    f_12 = t;
                    {
                      t = not_null(w_11);
                      {
                        ATerm j_12 = NULL;
                        t = k_74(t);
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
ATerm DefaultVarDec_1 (ATerm t, ATerm t_77 (ATerm))
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
            t = t_77(t);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_13)), term_a_4);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_14)), term_b_4);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_14)), term_c_4);
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_15)), term_d_4);
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
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm k_4 = t;
              int p_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(p_4);
                }
              else
                {
                  t = k_4;
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
    ATerm q_4 = t;
    int r_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(r_4);
      }
    else
      {
        t = q_4;
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
  ATerm s_4 = t;
  int t_4 = stack_ptr;
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
      LocalPopChoice(t_4);
    }
  else
    {
      t = s_4;
      {
        ATerm u_4 = t;
        int v_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1(t, RemoveLeadingPrime_0);
            ;
            LocalPopChoice(v_4);
          }
        else
          {
            t = u_4;
            {
              ATerm w_4 = t;
              int b_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3(t, RemoveLeadingPrime_0, _id, _id);
                  ;
                  LocalPopChoice(b_5);
                }
              else
                {
                  t = w_4;
                  {
                    ATerm c_5 = t;
                    int d_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3(t, RemoveLeadingPrime_0, _id, _id);
                        ;
                        LocalPopChoice(d_5);
                      }
                    else
                      {
                        t = c_5;
                        {
                          ATerm h_5 = t;
                          int j_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2(t, RemoveLeadingPrime_0, _id);
                              ;
                              LocalPopChoice(j_5);
                            }
                          else
                            {
                              t = h_5;
                              {
                                ATerm m_5 = t;
                                int n_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1(t, RemoveLeadingPrime_0);
                                    ;
                                    LocalPopChoice(n_5);
                                  }
                                else
                                  {
                                    t = m_5;
                                    {
                                      ATerm o_5 = t;
                                      int p_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1(t, RemoveLeadingPrime_0);
                                          ;
                                          LocalPopChoice(p_5);
                                        }
                                      else
                                        {
                                          t = o_5;
                                          {
                                            ATerm q_5 = t;
                                            int r_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2(t, RemoveLeadingPrime_0, _id);
                                                ;
                                                LocalPopChoice(r_5);
                                              }
                                            else
                                              {
                                                t = q_5;
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
ATerm try_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_78(t);
      ;
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm q_16 (ATerm t)
  {
    ATerm u_5 = t;
    int v_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = q_86(t);
        ;
        LocalPopChoice(v_5);
      }
    else
      {
        t = u_5;
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
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
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
ATerm unquote_chars_1 (ATerm t, ATerm q_94 (ATerm))
{
  ATerm c_6;
  c_6 = t;
  {
    t = Hd_0(t);
    t = q_94(t);
  }
  t = c_6;
  {
    ATerm g_6;
    g_6 = t;
    {
      t = last_0(t);
      t = q_94(t);
    }
    t = g_6;
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
ATerm string_as_chars_1 (ATerm t, ATerm b_95 (ATerm))
{
  t = explode_string_0(t);
  {
    t = b_95(t);
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
      t = term_i_6;
    }
  else
    {
      if(match_string(m_18, "'\\r'"))
        {
          t = term_l_6;
        }
      else
        {
          if(match_string(m_18, "'\\t'"))
            {
              t = term_a_4;
            }
          else
            {
              if(match_string(m_18, "'\\n'"))
                {
                  t = term_b_4;
                }
              else
                {
                  if(match_string(m_18, "'\\''"))
                    {
                      t = term_m_6;
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
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  ATerm n_25 (ATerm t)
  {
    t = not_null(y_21);
    {
      ATerm n_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, not_null(y_21));
    return(t);
  }
  ATerm o_25 (ATerm t)
  {
    t = not_null(u_21);
    return(t);
  }
  ATerm p_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, not_null(y_21)));
    return(t);
  }
  ATerm q_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(y_21)));
    return(t);
  }
  ATerm r_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(y_21)));
    return(t);
  }
  ATerm s_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(y_21)));
    return(t);
  }
  ATerm t_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_21)), (ATerm) ATempty);
    return(t);
  }
  ATerm u_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_21)), not_null(z_21));
    return(t);
  }
  ATerm v_25 (ATerm t)
  {
    t = not_null(y_21);
    {
      ATerm e_0 (ATerm t)
      {
        t = not_null(z_21);
        return(t);
      }
      ATerm f_0 (ATerm t)
      {
        ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
        s_23 = t;
        i_21 :
        if(match_cons(s_23, sym__2))
          {
            t_23 = ATgetArgument(s_23, 0);
            u_23 = ATgetArgument(s_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_23)), not_null(t_23)));
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
  ATerm w_25 (ATerm t)
  {
    t = not_null(y_21);
    {
      ATerm h_0 (ATerm t)
      {
        t = term_t_6;
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
        y_23 = t;
        k_21 :
        if(match_cons(y_23, sym__2))
          {
            z_23 = ATgetArgument(y_23, 0);
            a_24 = ATgetArgument(y_23, 1);
            t = (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_24)), not_null(z_23)));
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
  ATerm x_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(y_21)));
    return(t);
  }
  ATerm y_25 (ATerm t)
  {
    t = not_null(y_21);
    {
      ATerm y_6 = t;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, Nil_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_6;
        }
    }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, not_null(y_21));
    return(t);
  }
  ATerm z_25 (ATerm t)
  {
    t = not_null(u_21);
    return(t);
  }
  ATerm a_26 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  ATerm b_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_21)), not_null(y_21)));
    return(t);
  }
  ATerm c_26 (ATerm t)
  {
    t = not_null(y_21);
    return(t);
  }
  ATerm d_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_StratRule_3, not_null(y_21), not_null(z_21), term_h_7);
    return(t);
  }
  ATerm e_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_21), not_null(z_21), term_h_7);
    return(t);
  }
  ATerm f_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(y_21), (ATerm)ATempty, not_null(z_21));
    return(t);
  }
  ATerm g_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_21), not_null(y_21));
    return(t);
  }
  ATerm h_26 (ATerm t)
  {
    ATerm t_24 = NULL;
    ATerm u_24 = NULL;
    t = not_null(y_21);
    {
      t = un_double_quote_0(t);
      {
        u_24 = t;
        if(((t_24 != NULL) && (t_24 != u_24)))
          _fail(u_24);
        else
          t_24 = u_24;
      }
    }
    t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_24), (ATerm) ATempty);
    return(t);
  }
  ATerm i_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Call_2, not_null(y_21), (ATerm) ATempty);
    return(t);
  }
  ATerm j_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_21), (ATerm)ATempty, not_null(z_21));
    return(t);
  }
  ATerm k_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SRDef_3, not_null(y_21), (ATerm)ATempty, not_null(z_21));
    return(t);
  }
  ATerm l_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(y_21), (ATerm)ATempty, not_null(z_21));
    return(t);
  }
  ATerm m_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(z_21));
    return(t);
  }
  x_21 = t;
  m_21 :
  if(match_cons(x_21, sym_Anno_2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      {
        ATerm c_22 = NULL;
        ATerm h_22 = NULL;
        t = not_null(z_21);
        {
          ATerm o_0 (ATerm t)
          {
            t = term_i_7;
            return(t);
          }
          ATerm p_0 (ATerm t)
          {
            ATerm d_22 = NULL,f_22 = NULL;
            ATerm j_7;
            j_7 = t;
            {
              ATerm e_22 = NULL;
              t = Fst_0(t);
              {
                e_22 = t;
                if(((d_22 != NULL) && (d_22 != e_22)))
                  _fail(e_22);
                else
                  d_22 = e_22;
              }
            }
            t = j_7;
            {
              ATerm g_22 = NULL;
              t = Snd_0(t);
              {
                g_22 = t;
                if(((f_22 != NULL) && (f_22 != g_22)))
                  _fail(g_22);
                else
                  f_22 = g_22;
              }
              t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_22)), not_null(d_22)));
            }
            return(t);
          }
          t = foldr_2(t, o_0, p_0);
          {
            h_22 = t;
            if(((c_22 != NULL) && (c_22 != h_22)))
              _fail(h_22);
            else
              c_22 = h_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Anno_2, not_null(y_21), not_null(c_22));
      }
    }
  else
    {
      if(match_cons(x_21, sym_SortNoArgs_1))
        {
          y_21 = ATgetArgument(x_21, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, not_null(y_21), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(x_21, sym_Char_1))
            {
              y_21 = ATgetArgument(x_21, 0);
              {
                ATerm k_22 = NULL;
                ATerm l_22 = NULL;
                t = not_null(y_21);
                {
                  ATerm k_7 = t;
                  int l_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = DesugarChar_0(t);
                      ;
                      LocalPopChoice(l_7);
                    }
                  else
                    {
                      t = k_7;
                      {
                        t = explode_string_0(t);
                        t = DesugarCharGeneric_0(t);
                      }
                    }
                  {
                    l_22 = t;
                    if(((k_22 != NULL) && (k_22 != l_22)))
                      _fail(l_22);
                    else
                      k_22 = l_22;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_22));
              }
            }
          else
            {
              if(match_cons(x_21, sym_Con4_4))
                {
                  y_21 = ATgetArgument(x_21, 0);
                  z_21 = ATgetArgument(x_21, 1);
                  t_21 = ATgetArgument(x_21, 2);
                  s_21 = ATgetArgument(x_21, 3);
                  t = (ATerm) ATmakeAppl(sym_Con_3, not_null(y_21), not_null(t_21), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_21)), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(x_21, sym_Con3_3))
                    {
                      y_21 = ATgetArgument(x_21, 0);
                      z_21 = ATgetArgument(x_21, 1);
                      t_21 = ATgetArgument(x_21, 2);
                      t = (ATerm) ATmakeAppl(sym_Con_3, not_null(y_21), not_null(t_21), term_o_7);
                    }
                  else
                    {
                      if(match_cons(x_21, sym_Con1_2))
                        {
                          y_21 = ATgetArgument(x_21, 0);
                          z_21 = ATgetArgument(x_21, 1);
                          t = (ATerm) ATmakeAppl(sym_Con_3, not_null(y_21), not_null(z_21), term_o_7);
                        }
                      else
                        {
                          if(match_cons(x_21, sym_ListTail_2))
                            {
                              y_21 = ATgetArgument(x_21, 0);
                              z_21 = ATgetArgument(x_21, 1);
                              {
                                t = not_null(y_21);
                                {
                                  ATerm q_0 (ATerm t)
                                  {
                                    t = not_null(z_21);
                                    return(t);
                                  }
                                  ATerm r_0 (ATerm t)
                                  {
                                    ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
                                    w_22 = t;
                                    e_21 :
                                    if(match_cons(w_22, sym__2))
                                      {
                                        x_22 = ATgetArgument(w_22, 0);
                                        y_22 = ATgetArgument(w_22, 1);
                                        t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_22)), not_null(x_22)));
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
                              if(match_cons(x_21, sym_List_1))
                                {
                                  y_21 = ATgetArgument(x_21, 0);
                                  {
                                    t = not_null(y_21);
                                    {
                                      ATerm s_0 (ATerm t)
                                      {
                                        t = term_i_7;
                                        return(t);
                                      }
                                      ATerm t_0 (ATerm t)
                                      {
                                        ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
                                        c_23 = t;
                                        g_21 :
                                        if(match_cons(c_23, sym__2))
                                          {
                                            d_23 = ATgetArgument(c_23, 0);
                                            e_23 = ATgetArgument(c_23, 1);
                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), not_null(d_23)));
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
                                  if(match_cons(x_21, sym_Tuple_1))
                                    {
                                      y_21 = ATgetArgument(x_21, 0);
                                      n_21 :
                                      if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
                                        {
                                          u_21 = ATgetFirst((ATermList) y_21);
                                          v_21 = (ATerm) ATgetNext((ATermList) y_21);
                                          o_21 :
                                          if(((ATgetType(v_21) == AT_LIST) && ATisEmpty(v_21)))
                                            {
                                              {
                                                ATerm p_7 = t;
                                                int q_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_25(t);
                                                    ;
                                                    LocalPopChoice(q_7);
                                                  }
                                                else
                                                  {
                                                    t = p_7;
                                                    t = o_25(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              t = n_25(t);
                                            }
                                        }
                                      else
                                        {
                                          t = n_25(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(x_21, sym_CharCong_1))
                                        {
                                          y_21 = ATgetArgument(x_21, 0);
                                          t = p_25(t);
                                        }
                                      else
                                        {
                                          if(match_cons(x_21, sym_RealCong_1))
                                            {
                                              y_21 = ATgetArgument(x_21, 0);
                                              t = q_25(t);
                                            }
                                          else
                                            {
                                              if(match_cons(x_21, sym_IntCong_1))
                                                {
                                                  y_21 = ATgetArgument(x_21, 0);
                                                  t = r_25(t);
                                                }
                                              else
                                                {
                                                  if(match_cons(x_21, sym_StrCong_1))
                                                    {
                                                      y_21 = ATgetArgument(x_21, 0);
                                                      t = s_25(t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(x_21, sym_ModCongNoArgs_1))
                                                        {
                                                          y_21 = ATgetArgument(x_21, 0);
                                                          t = t_25(t);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(x_21, sym_ModCong_2))
                                                            {
                                                              y_21 = ATgetArgument(x_21, 0);
                                                              z_21 = ATgetArgument(x_21, 1);
                                                              t = u_25(t);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(x_21, sym_ListCong_2))
                                                                {
                                                                  y_21 = ATgetArgument(x_21, 0);
                                                                  z_21 = ATgetArgument(x_21, 1);
                                                                  t = v_25(t);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(x_21, sym_ListCongNoTail_1))
                                                                    {
                                                                      y_21 = ATgetArgument(x_21, 0);
                                                                      t = w_25(t);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(x_21, sym_TupleCong_2))
                                                                        {
                                                                          y_21 = ATgetArgument(x_21, 0);
                                                                          z_21 = ATgetArgument(x_21, 1);
                                                                          t = x_25(t);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(x_21, sym_TupleCong_1))
                                                                            {
                                                                              y_21 = ATgetArgument(x_21, 0);
                                                                              p_21 :
                                                                              if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
                                                                                {
                                                                                  u_21 = ATgetFirst((ATermList) y_21);
                                                                                  v_21 = (ATerm) ATgetNext((ATermList) y_21);
                                                                                  q_21 :
                                                                                  if(((ATgetType(v_21) == AT_LIST) && ATisEmpty(v_21)))
                                                                                    {
                                                                                      {
                                                                                        ATerm r_7 = t;
                                                                                        int s_7 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = y_25(t);
                                                                                            ;
                                                                                            LocalPopChoice(s_7);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = r_7;
                                                                                            t = z_25(t);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_25(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_25(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(x_21, sym_EmptyTupleCong_0))
                                                                                {
                                                                                  t = a_26(t);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(x_21, sym_AnnoCong_2))
                                                                                    {
                                                                                      y_21 = ATgetArgument(x_21, 0);
                                                                                      z_21 = ATgetArgument(x_21, 1);
                                                                                      r_21 :
                                                                                      if(match_cons(z_21, sym_StrategyCurly_1))
                                                                                        {
                                                                                          w_21 = ATgetArgument(z_21, 0);
                                                                                          t = b_26(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(x_21, sym_ParenStrat_1))
                                                                                        {
                                                                                          y_21 = ATgetArgument(x_21, 0);
                                                                                          t = c_26(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(x_21, sym_StratRuleNoCond_2))
                                                                                            {
                                                                                              y_21 = ATgetArgument(x_21, 0);
                                                                                              z_21 = ATgetArgument(x_21, 1);
                                                                                              t = d_26(t);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(x_21, sym_RuleNoCond_2))
                                                                                                {
                                                                                                  y_21 = ATgetArgument(x_21, 0);
                                                                                                  z_21 = ATgetArgument(x_21, 1);
                                                                                                  t = e_26(t);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(x_21, sym_OverlayNoArgs_2))
                                                                                                    {
                                                                                                      y_21 = ATgetArgument(x_21, 0);
                                                                                                      z_21 = ATgetArgument(x_21, 1);
                                                                                                      t = f_26(t);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(x_21, sym_RChoice_2))
                                                                                                        {
                                                                                                          y_21 = ATgetArgument(x_21, 0);
                                                                                                          z_21 = ATgetArgument(x_21, 1);
                                                                                                          t = g_26(t);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(x_21, sym_PrimNoArgs_1))
                                                                                                            {
                                                                                                              y_21 = ATgetArgument(x_21, 0);
                                                                                                              t = h_26(t);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(x_21, sym_CallNoArgs_1))
                                                                                                                {
                                                                                                                  y_21 = ATgetArgument(x_21, 0);
                                                                                                                  t = i_26(t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(x_21, sym_SDefNoArgs_2))
                                                                                                                    {
                                                                                                                      y_21 = ATgetArgument(x_21, 0);
                                                                                                                      z_21 = ATgetArgument(x_21, 1);
                                                                                                                      t = j_26(t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(x_21, sym_SRDefNoArgs_2))
                                                                                                                        {
                                                                                                                          y_21 = ATgetArgument(x_21, 0);
                                                                                                                          z_21 = ATgetArgument(x_21, 1);
                                                                                                                          t = k_26(t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(x_21, sym_RDefNoArgs_2))
                                                                                                                            {
                                                                                                                              y_21 = ATgetArgument(x_21, 0);
                                                                                                                              z_21 = ATgetArgument(x_21, 1);
                                                                                                                              t = l_26(t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(x_21, sym_Module_2))
                                                                                                                                {
                                                                                                                                  y_21 = ATgetArgument(x_21, 0);
                                                                                                                                  z_21 = ATgetArgument(x_21, 1);
                                                                                                                                  t = m_26(t);
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
ATerm repeat_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = b_79(t);
      t = w_26(t);
      return(t);
    }
    t = try_1(t, u_0);
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm z_79 (ATerm))
{
  t = z_79(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = topdown_1(t, z_79);
      return(t);
    }
    t = _all(t, v_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym__2))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      {
        ATerm j_27 = NULL,l_27 = NULL;
        ATerm k_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          k_27 = t;
          if(((j_27 != NULL) && (j_27 != k_27)))
            _fail(k_27);
          else
            j_27 = k_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm n_27 = NULL;
            t = d_64(t);
            {
              l_27 = t;
              {
                t = not_null(f_27);
                {
                  ATerm m_30 = NULL;
                  t = e_64(t);
                  {
                    n_27 = t;
                    {
                      ATerm n_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_27), not_null(n_27)), not_null(j_27));
                      {
                        n_30 = t;
                        if(((m_30 != NULL) && (m_30 != n_30)))
                          _fail(n_30);
                        else
                          m_30 = n_30;
                      }
                      t = not_null(m_30);
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
  ATerm t_7;
  t_7 = t;
  {
    ATerm u_30 = NULL;
    ATerm v_30 = NULL;
    t = term_u_7;
    {
      t = whoami_0(t);
      {
        v_30 = t;
        if(((u_30 != NULL) && (u_30 != v_30)))
          _fail(v_30);
        else
          u_30 = v_30;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(u_30)), term_z_7));
      {
        t = printnl_0(t);
        {
          t = term_g_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm h_8;
        h_8 = t;
        t = SSL_printnl(not_null(a_31), not_null(b_31));
        t = h_8;
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
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_implode_string(not_null(g_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = l_8;
      {
        ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
        l_31 = t;
        k_31 :
        if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
          {
            m_31 = ATgetFirst((ATermList) l_31);
            n_31 = (ATerm) ATgetNext((ATermList) l_31);
            {
              t = not_null(m_31);
              {
                ATerm w_0 (ATerm t)
                {
                  t = not_null(n_31);
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
  ATerm c_32 = NULL;
  ATerm e_32 = NULL;
  c_32 = t;
  {
    ATerm f_32 = NULL;
    ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
    t = not_null(c_32);
    {
      f_32 = t;
      {
        t = SSL_explode_term(not_null(f_32));
        {
          h_32 = t;
          v_31 :
          if(match_cons(h_32, sym__2))
            {
              i_32 = ATgetArgument(h_32, 0);
              j_32 = ATgetArgument(h_32, 1);
              b_32 :
              if(match_string(i_32, ""))
                {
                  if(((e_32 != NULL) && (e_32 != j_32)))
                    _fail(j_32);
                  else
                    e_32 = j_32;
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
      t = not_null(e_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm n_32 (ATerm t)
  {
    ATerm p_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_32);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = p_8;
        {
          t = Nil_0(t);
          t = f_86(t);
        }
      }
    return(t);
  }
  t = n_32(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym__2))
    {
      x_32 = ATgetArgument(w_32, 0);
      y_32 = ATgetArgument(w_32, 1);
      {
        t = not_null(x_32);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(y_32);
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
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  t = SSL_explode_string(not_null(d_33));
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
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
              m_33 = t;
              l_33 :
              if(match_cons(m_33, sym_Path_1))
                {
                  n_33 = ATgetArgument(m_33, 0);
                  t = not_null(n_33);
                }
              else
                {
                  if(match_cons(m_33, sym_Var_1))
                    {
                      n_33 = ATgetArgument(m_33, 0);
                      {
                        t = not_null(n_33);
                        {
                          ATerm c_9 = t;
                          int d_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_9);
                            }
                          else
                            {
                              t = c_9;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_e_9;
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
                      if(match_cons(m_33, sym_Prefix_2))
                        {
                          n_33 = ATgetArgument(m_33, 0);
                          o_33 = ATgetArgument(m_33, 1);
                          {
                            ATerm t_33 = NULL,v_33 = NULL;
                            ATerm f_9;
                            f_9 = t;
                            {
                              ATerm u_33 = NULL;
                              t = not_null(n_33);
                              {
                                t = eval_config_0(t);
                                {
                                  u_33 = t;
                                  if(((t_33 != NULL) && (t_33 != u_33)))
                                    _fail(u_33);
                                  else
                                    t_33 = u_33;
                                }
                              }
                            }
                            t = f_9;
                            {
                              ATerm w_33 = NULL;
                              t = not_null(o_33);
                              {
                                t = eval_config_0(t);
                                {
                                  w_33 = t;
                                  if(((v_33 != NULL) && (v_33 != w_33)))
                                    _fail(w_33);
                                  else
                                    v_33 = w_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_33), not_null(v_33));
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
  ATerm e_34 = NULL;
  e_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(e_34));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_9;
            h_9 = t;
            {
              ATerm g_34 = NULL;
              ATerm h_34 = NULL;
              h_34 = t;
              if(((g_34 != NULL) && (g_34 != h_34)))
                _fail(h_34);
              else
                g_34 = h_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(e_34), not_null(g_34));
                t = table_put_0(t);
              }
            }
            t = h_9;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm i_9;
    i_9 = t;
    {
      ATerm l_34 = NULL;
      ATerm m_34 = NULL;
      t = term_j_9;
      {
        t = get_config_0(t);
        {
          m_34 = t;
          if(((l_34 != NULL) && (l_34 != m_34)))
            _fail(m_34);
          else
            l_34 = m_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), term_k_9);
        t = geq_0(t);
      }
    }
    t = i_9;
    t = e_99(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm fputc_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  s_34 = t;
  q_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      r_34 :
      if(match_cons(u_34, sym_Stream_1))
        {
          v_34 = ATgetArgument(u_34, 0);
          {
            ATerm y_34 = NULL;
            t = SSL_fputc(not_null(t_34), not_null(v_34));
            {
              ATerm z_34 = NULL;
              z_34 = t;
              if(((y_34 != NULL) && (y_34 != z_34)))
                _fail(z_34);
              else
                y_34 = z_34;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_34));
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
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  g_35 = t;
  e_35 :
  if(match_cons(g_35, sym__2))
    {
      h_35 = ATgetArgument(g_35, 0);
      j_35 = ATgetArgument(g_35, 1);
      f_35 :
      if(match_cons(h_35, sym_Stream_1))
        {
          i_35 = ATgetArgument(h_35, 0);
          {
            ATerm m_35 = NULL;
            t = SSL_write_term_to_stream_text(not_null(i_35), not_null(j_35));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm r_35 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm s_35 = NULL;
      s_35 = t;
      if(((r_35 != NULL) && (r_35 != s_35)))
        _fail(s_35);
      else
        r_35 = s_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_4, not_null(r_35));
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
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  y_35 = t;
  w_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      b_36 = ATgetArgument(y_35, 1);
      x_35 :
      if(match_cons(z_35, sym_Stream_1))
        {
          a_36 = ATgetArgument(z_35, 0);
          {
            ATerm e_36 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(a_36), not_null(b_36));
            {
              ATerm f_36 = NULL;
              f_36 = t;
              if(((e_36 != NULL) && (e_36 != f_36)))
                _fail(f_36);
              else
                e_36 = f_36;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_36));
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
ATerm WriteToFile_1 (ATerm t, ATerm a_98 (ATerm))
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm r_36 = NULL,t_36 = NULL;
        t = not_null(n_36);
        {
          ATerm s_36 = NULL;
          s_36 = t;
          if(((r_36 != NULL) && (r_36 != s_36)))
            _fail(s_36);
          else
            r_36 = s_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), term_l_9);
            {
              t = open_stream_0(t);
              {
                ATerm u_36 = NULL;
                u_36 = t;
                if(((t_36 != NULL) && (t_36 != u_36)))
                  _fail(u_36);
                else
                  t_36 = u_36;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(o_36));
                  {
                    t = a_98(t);
                    {
                      t = fclose_0(t);
                      t = not_null(o_36);
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
  ATerm c_37 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm d_37 = NULL,e_37 = NULL;
            d_37 = t;
            z_36 :
            if(match_cons(d_37, sym_Output_1))
              {
                e_37 = ATgetArgument(d_37, 0);
                if(((c_37 != NULL) && (c_37 != e_37)))
                  _fail(e_37);
                else
                  c_37 = e_37;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          ;
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm f_37 = NULL;
            t = term_t_9;
            {
              f_37 = t;
              if(((c_37 != NULL) && (c_37 != f_37)))
                _fail(f_37);
              else
                c_37 = f_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = m_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(c_37);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm x_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm g_37 = NULL;
              g_37 = t;
              b_37 :
              if(!(match_cons(g_37, sym_Binary_0)))
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
          LocalPopChoice(z_9);
        }
      else
        {
          t = x_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_101 (ATerm))
{
  ATerm m_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  ATerm c_10;
  c_10 = t;
  t = dtime_0(t);
  t = c_10;
  {
    t = c_101(t);
    {
      ATerm d_10;
      d_10 = t;
      {
        ATerm n_37 = NULL;
        t = dtime_0(t);
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
      }
      t = d_10;
      {
        o_37 = t;
        l_37 :
        if(match_cons(o_37, sym__2))
          {
            p_37 = ATgetArgument(o_37, 0);
            q_37 = ATgetArgument(o_37, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_37)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_37))), not_null(q_37));
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
  ATerm y_37 = NULL,z_37 = NULL;
  ATerm h_38 (ATerm t)
  {
    t = SSL_fclose(not_null(z_37));
    return(t);
  }
  z_37 = t;
  x_37 :
  if(match_cons(z_37, sym_Stream_1))
    {
      y_37 = ATgetArgument(z_37, 0);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_37));
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = h_38(t);
          }
      }
    }
  else
    {
      t = h_38(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Stream_1))
    {
      l_38 = ATgetArgument(k_38, 0);
      t = SSL_read_term_from_stream(not_null(l_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm g_10;
  g_10 = t;
  {
    ATerm q_38 = NULL,s_38 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm r_38 = NULL;
      t = m_97(t);
      {
        r_38 = t;
        if(((q_38 != NULL) && (q_38 != r_38)))
          _fail(r_38);
        else
          q_38 = r_38;
      }
    }
    t = h_10;
    {
      ATerm t_38 = NULL;
      t_38 = t;
      if(((s_38 != NULL) && (s_38 != t_38)))
        _fail(t_38);
      else
        s_38 = t_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_38)), not_null(q_38)));
        t = printnl_0(t);
      }
    }
  }
  t = g_10;
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym__2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      {
        ATerm e_39 = NULL;
        t = SSL_fopen(not_null(a_39), not_null(b_39));
        {
          ATerm f_39 = NULL;
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_39));
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
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_is_string(not_null(j_39));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm o_39 = NULL;
    o_39 = t;
    if(((n_39 != NULL) && (n_39 != o_39)))
      _fail(o_39);
    else
      n_39 = o_39;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_39));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm x_39 = NULL;
    x_39 = t;
    if(((r_39 != NULL) && (r_39 != x_39)))
      _fail(x_39);
    else
      r_39 = x_39;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_39));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm b_40 = NULL;
    b_40 = t;
    if(((a_40 != NULL) && (a_40 != b_40)))
      _fail(b_40);
    else
      a_40 = b_40;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_40));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(h_40, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(h_40, sym_stdin_0))
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
  ATerm r_40 = NULL;
  ATerm t_40 = NULL,u_40 = NULL;
  r_40 = t;
  {
    ATerm v_40 = NULL;
    ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
    t = not_null(r_40);
    {
      v_40 = t;
      {
        t = SSL_explode_term(not_null(v_40));
        {
          x_40 = t;
          o_40 :
          if(match_cons(x_40, sym__2))
            {
              y_40 = ATgetArgument(x_40, 0);
              z_40 = ATgetArgument(x_40, 1);
              p_40 :
              if(match_string(y_40, ""))
                {
                  q_40 :
                  if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
                    {
                      a_41 = ATgetFirst((ATermList) z_40);
                      b_41 = (ATerm) ATgetNext((ATermList) z_40);
                      {
                        if(((u_40 != NULL) && (u_40 != a_41)))
                          _fail(a_41);
                        else
                          u_40 = a_41;
                        if(((t_40 != NULL) && (t_40 != b_41)))
                          _fail(b_41);
                        else
                          t_40 = b_41;
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
    t = not_null(u_40);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym__2))
    {
      k_41 = ATgetArgument(j_41, 0);
      l_41 = ATgetArgument(j_41, 1);
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm m_41 = NULL,n_41 = NULL;
                    m_41 = t;
                    h_41 :
                    if(match_cons(m_41, sym_Path_1))
                      {
                        n_41 = ATgetArgument(m_41, 0);
                        t = not_null(n_41);
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
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
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
  ATerm v_41 = NULL;
  ATerm m_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_41 = NULL;
      ATerm u_41 = NULL;
      u_41 = t;
      if(((t_41 != NULL) && (t_41 != u_41)))
        _fail(u_41);
      else
        t_41 = u_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), term_t_10);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = m_10;
      {
        ATerm k_1 (ATerm t)
        {
          t = term_u_10;
          return(t);
        }
        t = debug_1(t, k_1);
        _fail(t);
      }
    }
  {
    ATerm v_10;
    v_10 = t;
    {
      ATerm w_41 = NULL;
      t = read_from_stream_0(t);
      {
        w_41 = t;
        if(((v_41 != NULL) && (v_41 != w_41)))
          _fail(w_41);
        else
          v_41 = w_41;
      }
    }
    t = v_10;
    {
      t = fclose_0(t);
      t = not_null(v_41);
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm b_42 = NULL,d_42 = NULL;
  ATerm z_10;
  z_10 = t;
  {
    ATerm c_42 = NULL;
    t = e_93(t);
    {
      c_42 = t;
      if(((b_42 != NULL) && (b_42 != c_42)))
        _fail(c_42);
      else
        b_42 = c_42;
    }
  }
  t = z_10;
  {
    ATerm e_42 = NULL;
    t = f_93(t);
    {
      e_42 = t;
      if(((d_42 != NULL) && (d_42 != e_42)))
        _fail(e_42);
      else
        d_42 = e_42;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), not_null(d_42));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm d_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm l_42 = NULL,m_42 = NULL;
          l_42 = t;
          i_42 :
          if(match_cons(l_42, sym_Input_1))
            {
              m_42 = ATgetArgument(l_42, 0);
              if(((k_42 != NULL) && (k_42 != m_42)))
                _fail(m_42);
              else
                k_42 = m_42;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = d_11;
        {
          ATerm n_42 = NULL;
          t = term_h_11;
          {
            n_42 = t;
            if(((k_42 != NULL) && (k_42 != n_42)))
              _fail(n_42);
            else
              k_42 = n_42;
          }
        }
      }
  }
  t = b_11;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(k_42);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm s_42 = NULL;
    s_42 = t;
    q_42 :
    if(!(match_string(s_42, "-k")))
      {
        if(!(match_string(s_42, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm t_42 = NULL;
      ATerm u_42 = NULL;
      t = string_to_int_0(t);
      {
        u_42 = t;
        if(((t_42 != NULL) && (t_42 != u_42)))
          _fail(u_42);
        else
          t_42 = u_42;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(t_42));
        t = set_config_0(t);
      }
    }
    t = i_11;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = ArgOption_3(t, n_1, o_1, p_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  t = SSL_string_to_int(not_null(x_42));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm f_43 = NULL;
        f_43 = t;
        a_43 :
        if(!(match_string(f_43, "-S")))
          {
            if(!(match_string(f_43, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_o_11;
        t = set_config_0(t);
        t = term_p_11;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      t = Option_3(t, q_1, r_1, s_1);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm r_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm g_43 = NULL;
              g_43 = t;
              b_43 :
              if(!(match_string(g_43, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm j_43 = NULL;
              ATerm y_11;
              y_11 = t;
              {
                ATerm h_43 = NULL;
                ATerm i_43 = NULL;
                t = string_to_int_0(t);
                {
                  i_43 = t;
                  if(((h_43 != NULL) && (h_43 != i_43)))
                    _fail(i_43);
                  else
                    h_43 = i_43;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(h_43));
                  t = set_config_0(t);
                }
              }
              t = y_11;
              {
                ATerm k_43 = NULL;
                k_43 = t;
                if(((j_43 != NULL) && (j_43 != k_43)))
                  _fail(k_43);
                else
                  j_43 = k_43;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_43));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_z_11;
              return(t);
            }
            t = ArgOption_3(t, t_1, u_1, v_1);
            ;
            LocalPopChoice(x_11);
          }
        else
          {
            t = r_11;
            {
              ATerm w_1 (ATerm t)
              {
                ATerm l_43 = NULL;
                l_43 = t;
                e_43 :
                if(!(match_string(l_43, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_1 (ATerm t)
              {
                t = term_e_12;
                t = set_config_0(t);
                t = term_g_12;
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_i_12;
                return(t);
              }
              t = Option_3(t, w_1, x_1, y_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = keep_option_0(t);
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm r_43 = NULL;
    r_43 = t;
    o_43 :
    if(!(match_string(r_43, "-o")))
      {
        if(!(match_string(r_43, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm u_43 = NULL;
    ATerm n_12;
    n_12 = t;
    {
      ATerm s_43 = NULL;
      ATerm t_43 = NULL;
      t_43 = t;
      if(((s_43 != NULL) && (s_43 != t_43)))
        _fail(t_43);
      else
        s_43 = t_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_12, not_null(s_43));
        t = set_config_0(t);
      }
    }
    t = n_12;
    {
      ATerm v_43 = NULL;
      v_43 = t;
      if(((u_43 != NULL) && (u_43 != v_43)))
        _fail(v_43);
      else
        u_43 = v_43;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_43));
    }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_p_12;
    return(t);
  }
  t = ArgOption_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm z_43 = NULL;
          z_43 = t;
          y_43 :
          if(!(match_string(z_43, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_2 (ATerm t)
        {
          t = term_t_12;
          t = set_config_0(t);
          t = term_u_12;
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_y_12;
          return(t);
        }
        t = Option_3(t, c_2, d_2, e_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  f_44 = t;
  d_44 :
  if(match_string(f_44, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_44) == AT_LIST) && !(ATisEmpty(f_44))))
        {
          g_44 = ATgetFirst((ATermList) f_44);
          h_44 = (ATerm) ATgetNext((ATermList) f_44);
          e_44 :
          if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
            {
              i_44 = ATgetFirst((ATermList) h_44);
              j_44 = (ATerm) ATgetNext((ATermList) h_44);
              {
                ATerm p_44 = NULL;
                ATerm z_12;
                z_12 = t;
                {
                  t = not_null(g_44);
                  t = j_0(t);
                }
                t = z_12;
                {
                  ATerm v_44 = NULL;
                  t = not_null(i_44);
                  {
                    t = k_0(t);
                    {
                      v_44 = t;
                      if(((p_44 != NULL) && (p_44 != v_44)))
                        _fail(v_44);
                      else
                        p_44 = v_44;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_44)), not_null(p_44));
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
  ATerm f_2 (ATerm t)
  {
    ATerm d_45 = NULL;
    d_45 = t;
    a_45 :
    if(!(match_string(d_45, "-i")))
      {
        if(!(match_string(d_45, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm g_45 = NULL;
    ATerm d_13;
    d_13 = t;
    {
      ATerm e_45 = NULL;
      ATerm f_45 = NULL;
      f_45 = t;
      if(((e_45 != NULL) && (e_45 != f_45)))
        _fail(f_45);
      else
        e_45 = f_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_13, not_null(e_45));
        t = set_config_0(t);
      }
    }
    t = d_13;
    {
      ATerm h_45 = NULL;
      h_45 = t;
      if(((g_45 != NULL) && (g_45 != h_45)))
        _fail(h_45);
      else
        g_45 = h_45;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_45));
    }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = ArgOption_3(t, f_2, g_2, h_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm k_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = k_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = report_run_time_0(t);
  {
    ATerm m_45 = NULL;
    t = term_u_7;
    {
      t = whoami_0(t);
      {
        m_45 = t;
        if(((l_45 != NULL) && (l_45 != m_45)))
          _fail(m_45);
        else
          l_45 = m_45;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, term_n_13), not_null(l_45)));
      {
        t = printnl_0(t);
        {
          t = term_g_8;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_13;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  t = SSL_TicksToSeconds(not_null(p_45));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  t_45 :
  if(match_cons(u_45, sym__2))
    {
      v_45 = ATgetArgument(u_45, 0);
      w_45 = ATgetArgument(u_45, 1);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_45), not_null(w_45));
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = SSL_addr(not_null(v_45), not_null(w_45));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm))
{
  ATerm a_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_91(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = a_14;
      {
        ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
        d_46 = t;
        c_46 :
        if(((ATgetType(d_46) == AT_LIST) && !(ATisEmpty(d_46))))
          {
            e_46 = ATgetFirst((ATermList) d_46);
            f_46 = (ATerm) ATgetNext((ATermList) d_46);
            {
              ATerm i_46 = NULL;
              ATerm j_46 = NULL;
              t = not_null(f_46);
              {
                t = foldr_2(t, p_91, q_91);
                {
                  j_46 = t;
                  if(((i_46 != NULL) && (i_46 != j_46)))
                    _fail(j_46);
                  else
                    i_46 = j_46;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_46), not_null(i_46));
                t = q_91(t);
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
ATerm crush_2 (ATerm t, ATerm i_95 (ATerm), ATerm j_95 (ATerm))
{
  ATerm r_46 = NULL;
  ATerm v_46 = NULL;
  r_46 = t;
  {
    ATerm w_46 = NULL;
    ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
    t = not_null(r_46);
    {
      w_46 = t;
      {
        t = SSL_explode_term(not_null(w_46));
        {
          y_46 = t;
          q_46 :
          if(match_cons(y_46, sym__2))
            {
              z_46 = ATgetArgument(y_46, 0);
              a_47 = ATgetArgument(y_46, 1);
              if(((v_46 != NULL) && (v_46 != a_47)))
                _fail(a_47);
              else
                v_46 = a_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_46);
      t = foldr_2(t, i_95, j_95);
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
    ATerm i_2 (ATerm t)
    {
      t = term_n_11;
      return(t);
    }
    t = crush_2(t, i_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym__2))
    {
      h_47 = ATgetArgument(g_47, 0);
      i_47 = ATgetArgument(g_47, 1);
      {
        ATerm l_14;
        l_14 = t;
        {
          ATerm m_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_47), not_null(i_47));
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = m_14;
              t = SSL_gtr(not_null(h_47), not_null(i_47));
            }
        }
        t = l_14;
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
  ATerm o_47 = NULL;
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
      p_47 = t;
      n_47 :
      if(match_cons(p_47, sym__2))
        {
          q_47 = ATgetArgument(p_47, 0);
          r_47 = ATgetArgument(p_47, 1);
          {
            if(((o_47 != NULL) && (o_47 != q_47)))
              _fail(q_47);
            else
              o_47 = q_47;
            if(((o_47 != NULL) && (o_47 != r_47)))
              _fail(r_47);
            else
              o_47 = r_47;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm i_15;
    i_15 = t;
    {
      ATerm w_47 = NULL;
      ATerm x_47 = NULL;
      t = term_j_9;
      {
        t = get_config_0(t);
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), term_g_8);
        t = geq_0(t);
      }
    }
    t = i_15;
    t = d_99(t);
    return(t);
  }
  t = try_1(t, j_2);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm c_48 = NULL,e_48 = NULL;
    ATerm j_15;
    j_15 = t;
    {
      ATerm d_48 = NULL;
      t = run_time_0(t);
      {
        d_48 = t;
        if(((c_48 != NULL) && (c_48 != d_48)))
          _fail(d_48);
        else
          c_48 = d_48;
      }
    }
    t = j_15;
    {
      ATerm f_48 = NULL;
      t = term_u_7;
      {
        t = whoami_0(t);
        {
          f_48 = t;
          if(((e_48 != NULL) && (e_48 != f_48)))
            _fail(f_48);
          else
            e_48 = f_48;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_15), not_null(c_48)), term_k_15), not_null(e_48)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_n_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  l_48 :
  if(match_cons(m_48, sym_Version_0))
    {
      ATerm o_48 = NULL,q_48 = NULL;
      ATerm m_15;
      m_15 = t;
      {
        ATerm p_48 = NULL;
        t = SSLgetAnnotations(not_null(m_48));
        {
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
        }
      }
      t = m_15;
      {
        ATerm r_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        t = not_null(q_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_15;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              {
                ATerm x_15 = t;
                int a_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(a_16);
                  }
                else
                  {
                    t = x_15;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, l_2);
      }
    }
  t = a_102(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_48 = NULL;
  x_48 = t;
  t = SSL_table_create(not_null(x_48));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  {
    ATerm d_16;
    d_16 = t;
    {
      t = term_g_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_16, term_h_16, not_null(b_49));
          t = table_put_0(t);
        }
      }
    }
    t = d_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  t = SSL_table_destroy(not_null(f_49));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  t = SSL_exit(not_null(j_49));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm m_49 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = Cons_2(t, q_85, m_49);
      }
    return(t);
  }
  t = m_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  v_49 = t;
  s_49 :
  if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
    {
      t_49 = ATgetFirst((ATermList) v_49);
      u_49 = (ATerm) ATgetNext((ATermList) v_49);
      {
        ATerm e_50 = NULL;
        t = not_null(u_49);
        {
          ATerm k_16;
          k_16 = t;
          {
            ATerm f_50 = NULL,h_50 = NULL,j_50 = NULL;
            ATerm l_16;
            l_16 = t;
            {
              ATerm g_50 = NULL;
              t = i_0(t);
              {
                g_50 = t;
                if(((f_50 != NULL) && (f_50 != g_50)))
                  _fail(g_50);
                else
                  f_50 = g_50;
              }
            }
            t = l_16;
            {
              ATerm i_50 = NULL;
              t = not_null(t_49);
              {
                t = g_0(t);
                {
                  i_50 = t;
                  if(((h_50 != NULL) && (h_50 != i_50)))
                    _fail(i_50);
                  else
                    h_50 = i_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_50)), not_null(h_50));
                {
                  j_50 = t;
                  if(((e_50 != NULL) && (e_50 != j_50)))
                    _fail(j_50);
                  else
                    e_50 = j_50;
                }
              }
            }
          }
          t = k_16;
          {
            ATerm m_2 (ATerm t)
            {
              t = not_null(e_50);
              return(t);
            }
            t = reverse_acc_2(t, g_0, m_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_49) == AT_LIST) && ATisEmpty(v_49)))
        {
          {
            t = term_u_7;
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
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym_Program_1))
    {
      v_50 = ATgetArgument(u_50, 0);
      {
        ATerm y_50 = NULL,a_51 = NULL;
        ATerm z_50 = NULL;
        t = SSLgetAnnotations(not_null(u_50));
        {
          z_50 = t;
          if(((y_50 != NULL) && (y_50 != z_50)))
            _fail(z_50);
          else
            y_50 = z_50;
        }
        {
          t = not_null(v_50);
          {
            ATerm c_51 = NULL;
            t = h_71(t);
            {
              a_51 = t;
              {
                ATerm d_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_51)), not_null(y_50));
                {
                  d_51 = t;
                  if(((c_51 != NULL) && (c_51 != d_51)))
                    _fail(d_51);
                  else
                    c_51 = d_51;
                }
                t = not_null(c_51);
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
  ATerm m_51 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_51 = NULL;
      t = term_o_13;
      {
        t = get_config_0(t);
        {
          n_51 = t;
          if(((m_51 != NULL) && (m_51 != n_51)))
            _fail(n_51);
          else
            m_51 = n_51;
        }
      }
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm p_2 (ATerm t)
          {
            ATerm o_51 = NULL;
            o_51 = t;
            if(((m_51 != NULL) && (m_51 != o_51)))
              _fail(o_51);
            else
              m_51 = o_51;
            return(t);
          }
          t = Program_1(t, p_2);
          return(t);
        }
        t = option_defined_1(t, o_2);
      }
    }
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        t = not_null(m_51);
        return(t);
      }
      t = short_description_1(t, r_2);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = term_o_16;
      {
        t = echo_0(t);
        {
          t = term_w_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm p_51 = NULL;
                  ATerm q_51 = NULL;
                  q_51 = t;
                  if(((p_51 != NULL) && (p_51 != q_51)))
                    _fail(q_51);
                  else
                    p_51 = q_51;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_51)), term_x_16);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm r_51 = NULL;
                    ATerm s_51 = NULL;
                    ATerm u_2 (ATerm t)
                    {
                      t = not_null(m_51);
                      return(t);
                    }
                    t = long_description_1(t, u_2);
                    {
                      s_51 = t;
                      if(((r_51 != NULL) && (r_51 != s_51)))
                        _fail(s_51);
                      else
                        r_51 = s_51;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_51)), term_y_16);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_2);
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
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Undefined_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      {
        ATerm g_52 = NULL,i_52 = NULL;
        ATerm h_52 = NULL;
        t = SSLgetAnnotations(not_null(c_52));
        {
          h_52 = t;
          if(((g_52 != NULL) && (g_52 != h_52)))
            _fail(h_52);
          else
            g_52 = h_52;
        }
        {
          t = not_null(d_52);
          {
            ATerm k_52 = NULL;
            t = i_71(t);
            {
              i_52 = t;
              {
                ATerm l_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_52)), not_null(g_52));
                {
                  l_52 = t;
                  if(((k_52 != NULL) && (k_52 != l_52)))
                    _fail(l_52);
                  else
                    k_52 = l_52;
                }
                t = not_null(k_52);
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
ATerm fetch_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm q_52 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_85, _id);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = Cons_2(t, _id, q_52);
      }
    return(t);
  }
  t = q_52(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_103 (ATerm))
{
  t = fetch_1(t, a_103);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  r_52 :
  if(((ATgetType(s_52) == AT_LIST) && ATisEmpty(s_52)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_52) == AT_LIST) && !(ATisEmpty(s_52))))
        {
          t_52 = ATgetFirst((ATermList) s_52);
          u_52 = (ATerm) ATgetNext((ATermList) s_52);
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
  ATerm m_17;
  m_17 = t;
  {
    ATerm x_52 = NULL;
    ATerm a_53 = NULL;
    ATerm n_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
        {
          ATerm y_52 = NULL;
          ATerm z_52 = NULL;
          z_52 = t;
          if(((y_52 != NULL) && (y_52 != z_52)))
            _fail(z_52);
          else
            y_52 = z_52;
          t = (ATerm) ATinsert(ATempty, not_null(y_52));
        }
      }
    {
      a_53 = t;
      if(((x_52 != NULL) && (x_52 != a_53)))
        _fail(a_53);
      else
        x_52 = a_53;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(x_52));
      t = printnl_0(t);
    }
  }
  t = m_17;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_o_13;
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
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  k_53 :
  if(match_cons(q_53, sym_Help_0))
    {
      ATerm s_53 = NULL,u_53 = NULL;
      ATerm g_18;
      g_18 = t;
      {
        ATerm t_53 = NULL;
        t = SSLgetAnnotations(not_null(q_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
      }
      t = g_18;
      {
        ATerm v_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_53));
        {
          v_53 = t;
          if(((u_53 != NULL) && (u_53 != v_53)))
            _fail(v_53);
          else
            u_53 = v_53;
        }
        t = not_null(u_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_about_switch_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 (ATerm t)
      {
        ATerm b_54 = NULL;
        b_54 = t;
        z_53 :
        if(!(match_string(b_54, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_k_18;
        t = set_config_0(t);
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_n_18;
        return(t);
      }
      t = Option_3(t, v_2, w_2, x_2);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm c_54 = NULL;
          c_54 = t;
          a_54 :
          if(!(match_string(c_54, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = term_k_18;
          {
            t = set_config_0(t);
            {
              t = term_p_18;
              t = set_config_0(t);
            }
          }
          t = term_q_18;
          return(t);
        }
        ATerm a_3 (ATerm t)
        {
          t = term_r_18;
          return(t);
        }
        t = Option_3(t, y_2, z_2, a_3);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      t = SSL_table_get(not_null(g_54), not_null(h_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  q_54 = t;
  n_54 :
  if(match_cons(q_54, sym__3))
    {
      r_54 = ATgetArgument(q_54, 0);
      s_54 = ATgetArgument(q_54, 1);
      t_54 = ATgetArgument(q_54, 2);
      {
        ATerm s_18;
        s_18 = t;
        {
          ATerm c_55 = NULL;
          ATerm d_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), not_null(s_54));
          {
            ATerm t_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_18);
              }
            else
              {
                t = t_18;
                t = (ATerm) ATempty;
              }
            {
              d_55 = t;
              if(((c_55 != NULL) && (c_55 != d_55)))
                _fail(d_55);
              else
                c_55 = d_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_54), not_null(s_54), (ATerm) ATinsert(CheckATermList(not_null(c_55)), not_null(t_54)));
            t = table_put_0(t);
          }
        }
        t = s_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm h_55 = NULL;
  ATerm i_55 = NULL;
  t = term_u_7;
  {
    t = f_104(t);
    {
      i_55 = t;
      if(((h_55 != NULL) && (h_55 != i_55)))
        _fail(i_55);
      else
        h_55 = i_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_16, term_r_16, not_null(h_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_55 = NULL,p_55 = NULL,r_55 = NULL;
  o_55 = t;
  n_55 :
  if(match_string(o_55, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_55) == AT_LIST) && !(ATisEmpty(o_55))))
        {
          p_55 = ATgetFirst((ATermList) o_55);
          r_55 = (ATerm) ATgetNext((ATermList) o_55);
          {
            ATerm u_55 = NULL;
            ATerm a_19;
            a_19 = t;
            {
              t = not_null(p_55);
              t = a_0(t);
            }
            t = a_19;
            {
              ATerm v_55 = NULL;
              t = term_u_7;
              {
                t = b_0(t);
                {
                  v_55 = t;
                  if(((u_55 != NULL) && (u_55 != v_55)))
                    _fail(v_55);
                  else
                    u_55 = v_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_55)), not_null(u_55));
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
  ATerm b_3 (ATerm t)
  {
    ATerm a_56 = NULL;
    a_56 = t;
    z_55 :
    if(!(match_string(a_56, "--help")))
      {
        if(!(match_string(a_56, "-h")))
          {
            if(!(match_string(a_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_f_19;
    {
      t = set_config_0(t);
      t = term_n_19;
    }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_o_19;
    return(t);
  }
  t = Option_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
  d_56 = t;
  c_56 :
  if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
    {
      e_56 = ATgetFirst((ATermList) d_56);
      f_56 = (ATerm) ATgetNext((ATermList) d_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
    {
      x_56 = ATgetFirst((ATermList) w_56);
      y_56 = (ATerm) ATgetNext((ATermList) w_56);
      {
        ATerm c_57 = NULL,e_57 = NULL;
        ATerm d_57 = NULL;
        t = SSLgetAnnotations(not_null(w_56));
        {
          d_57 = t;
          if(((c_57 != NULL) && (c_57 != d_57)))
            _fail(d_57);
          else
            c_57 = d_57;
        }
        {
          t = not_null(x_56);
          {
            ATerm g_57 = NULL;
            t = m_65(t);
            {
              e_57 = t;
              {
                t = not_null(y_56);
                {
                  ATerm i_57 = NULL;
                  t = n_65(t);
                  {
                    g_57 = t;
                    {
                      ATerm j_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_57)), not_null(e_57)), not_null(c_57));
                      {
                        j_57 = t;
                        if(((i_57 != NULL) && (i_57 != j_57)))
                          _fail(j_57);
                        else
                          i_57 = j_57;
                      }
                      t = not_null(i_57);
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
  ATerm t_57 = NULL;
  t_57 = t;
  s_57 :
  if(((ATgetType(t_57) == AT_LIST) && ATisEmpty(t_57)))
    {
      {
        ATerm v_57 = NULL,x_57 = NULL;
        ATerm p_19;
        p_19 = t;
        {
          ATerm w_57 = NULL;
          t = SSLgetAnnotations(not_null(t_57));
          {
            w_57 = t;
            if(((v_57 != NULL) && (v_57 != w_57)))
              _fail(w_57);
            else
              v_57 = w_57;
          }
        }
        t = p_19;
        {
          ATerm y_57 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_57));
          {
            y_57 = t;
            if(((x_57 != NULL) && (x_57 != y_57)))
              _fail(y_57);
            else
              x_57 = y_57;
          }
          t = not_null(x_57);
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
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  d_58 :
  if(match_cons(e_58, sym__2))
    {
      f_58 = ATgetArgument(e_58, 0);
      g_58 = ATgetArgument(e_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_9, not_null(f_58), not_null(g_58));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_104 (ATerm))
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = term_r_19;
      t = d_104(t);
      return(t);
    }
    t = try_1(t, e_3);
  }
  t = q_19;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm o_58 = NULL;
      ATerm s_19;
      s_19 = t;
      {
        ATerm m_58 = NULL;
        ATerm n_58 = NULL;
        n_58 = t;
        if(((m_58 != NULL) && (m_58 != n_58)))
          _fail(n_58);
        else
          m_58 = n_58;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_13, not_null(m_58));
          t = set_config_0(t);
        }
      }
      t = s_19;
      {
        ATerm p_58 = NULL;
        p_58 = t;
        if(((o_58 != NULL) && (o_58 != p_58)))
          _fail(p_58);
        else
          o_58 = p_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_58));
      }
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                t = d_104(t);
                t = Cons_2(t, _id, g_3);
              }
            }
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_3, g_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_58 = NULL,b_59 = NULL,c_59 = NULL;
  ATerm x_19;
  x_19 = t;
  {
    ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
    d_59 = t;
    u_58 :
    if(match_cons(d_59, sym__3))
      {
        e_59 = ATgetArgument(d_59, 0);
        f_59 = ATgetArgument(d_59, 1);
        g_59 = ATgetArgument(d_59, 2);
        {
          if(((v_58 != NULL) && (v_58 != e_59)))
            _fail(e_59);
          else
            v_58 = e_59;
          {
            if(((b_59 != NULL) && (b_59 != f_59)))
              _fail(f_59);
            else
              b_59 = f_59;
            {
              if(((c_59 != NULL) && (c_59 != g_59)))
                _fail(g_59);
              else
                c_59 = g_59;
              t = SSL_table_put(not_null(v_58), not_null(b_59), not_null(c_59));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_104 (ATerm))
{
  ATerm q_59 = NULL;
  ATerm y_19;
  y_19 = t;
  {
    t = term_z_19;
    t = table_put_0(t);
  }
  t = y_19;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_104(t);
          ;
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          {
            ATerm c_20 = t;
            int d_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(d_20);
              }
            else
              {
                t = c_20;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, h_3);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20;
            g_20 = t;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_15;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_20;
            {
              t = system_usage_0(t);
              {
                t = term_n_11;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_20;
                  l_20 = t;
                  {
                    t = term_j_18;
                    t = get_config_0(t);
                  }
                  t = l_20;
                  {
                    t = system_about_0(t);
                    {
                      t = term_n_11;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  {
                    ATerm j_3 (ATerm t)
                    {
                      ATerm k_3 (ATerm t)
                      {
                        ATerm r_59 = NULL;
                        r_59 = t;
                        if(((q_59 != NULL) && (q_59 != r_59)))
                          _fail(r_59);
                        else
                          q_59 = r_59;
                        return(t);
                      }
                      t = Undefined_1(t, k_3);
                      return(t);
                    }
                    t = option_defined_1(t, j_3);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_59)), term_m_20));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_g_8;
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
      t = try_1(t, i_3);
      {
        ATerm n_20;
        n_20 = t;
        {
          t = term_p_16;
          t = table_destroy_0(t);
        }
        t = n_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm))
{
  t = parse_options_1(t, c_102);
  {
    t = store_options_0(t);
    {
      t = e_102(t);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_102);
            ;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_102(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_20);
                }
              else
                {
                  t = q_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_101);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, l_3, t_101, u_101, m_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm u_20;
      u_20 = t;
      {
        ATerm u_59 = NULL;
        ATerm v_59 = NULL;
        t = term_o_13;
        {
          t = get_config_0(t);
          {
            v_59 = t;
            if(((u_59 != NULL) && (u_59 != v_59)))
              _fail(v_59);
            else
              u_59 = v_59;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATempty, not_null(u_59)));
          t = printnl_0(t);
        }
      }
      t = u_20;
      return(t);
    }
    t = if_verbose2_1(t, o_3);
    return(t);
  }
  t = iowrap_4(t, l_101, m_101, n_101, n_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_101 (ATerm), ATerm k_101 (ATerm))
{
  t = iowrap_3(t, j_101, k_101, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_101 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    t = _2(t, _id, g_101);
    return(t);
  }
  t = iowrap_2(t, p_3, _fail);
  return(t);
}
ATerm stratego_desugar_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm d_60 = NULL;
      ATerm f_60 = NULL;
      d_60 = t;
      {
        ATerm g_60 = NULL;
        ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
        t = not_null(d_60);
        {
          g_60 = t;
          {
            t = SSL_explode_term(not_null(g_60));
            {
              i_60 = t;
              a_60 :
              if(match_cons(i_60, sym__2))
                {
                  j_60 = ATgetArgument(i_60, 0);
                  k_60 = ATgetArgument(i_60, 1);
                  b_60 :
                  if(((ATgetType(k_60) == AT_LIST) && !(ATisEmpty(k_60))))
                    {
                      l_60 = ATgetFirst((ATermList) k_60);
                      m_60 = (ATerm) ATgetNext((ATermList) k_60);
                      c_60 :
                      if(((ATgetType(m_60) == AT_LIST) && ATisEmpty(m_60)))
                        {
                          if(((f_60 != NULL) && (f_60 != l_60)))
                            _fail(l_60);
                          else
                            f_60 = l_60;
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
        t = not_null(f_60);
      }
      return(t);
    }
    t = try_1(t, r_3);
    {
      ATerm v_3 (ATerm t)
      {
        t = repeat_1(t, Desugar_0);
        t = try_1(t, DesugarOnce_0);
        return(t);
      }
      t = topdown_1(t, v_3);
    }
    return(t);
  }
  t = iowrap_1(t, q_3);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = stratego_desugar_0(t);
  return(t);
}
