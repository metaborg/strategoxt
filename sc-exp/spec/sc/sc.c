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
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
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
ATerm term_e_60;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_r_59;
ATerm term_p_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_s_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_c_58;
ATerm term_a_58;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_c_57;
ATerm term_p_56;
ATerm term_i_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_q_53;
ATerm term_j_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_q_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_p_51;
ATerm term_n_51;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_j_50;
ATerm term_e_50;
ATerm term_x_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_b_49;
ATerm term_y_48;
ATerm term_t_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_b_48;
ATerm term_v_47;
ATerm term_s_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_f_47;
ATerm term_c_47;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_z_45;
ATerm term_w_45;
ATerm term_q_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_f_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_g_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_q_43;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_y_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_x_40;
ATerm term_m_40;
ATerm term_k_40;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_f_35;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_i_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_f_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_m_17;
void init_constant_terms (void)
{
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_x_23);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_27, term_y_25, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_27, term_p_17, term_e_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_27, term_c_23, term_h_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_27, term_k_27, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_27, term_o_27, term_p_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_27, term_w_27, term_z_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_28, term_c_28, term_d_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_28, term_p_28, term_q_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_28, term_u_28, term_v_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_28, term_a_29, term_b_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_29, term_g_29, term_h_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_29, term_q_29, term_r_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_29, term_u_29, term_w_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_29, term_c_30, term_d_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_30, term_h_30, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_30, term_r_30, term_s_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_30, term_z_30, term_a_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_31, term_j_31, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_31, term_n_31, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_31, term_v_31, term_w_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_31, term_z_31, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_32, term_r_32, term_s_32);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_32, term_v_32, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_33, term_h_33, term_i_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_33, term_l_33, term_m_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_33, term_x_33, term_y_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_34, term_f_34, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_j_34, term_k_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_h_42);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_w_44);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_d_23);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_d_23);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_d_23);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_d_23);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym__2, term_r_49, term_d_23);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_m_17);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym__2, term_s_50, term_d_23);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym__2, term_b_51, term_d_23);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym__2, term_l_51, term_d_23);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_d_53, term_h_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym__2, term_f_55, term_d_23);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym__3, term_d_53, term_h_53, (ATerm) ATempty);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_v_57);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_y_25);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_m_17);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_91 (ATerm), ATerm f_91 (ATerm));
ATerm crush_2 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_98 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm i_107 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm compile_match_0 (ATerm);
ATerm inline_0 (ATerm);
ATerm fusion_0 (ATerm);
ATerm optimize1_0 (ATerm);
ATerm optimize_0 (ATerm);
ATerm rename_defs_0 (ATerm);
ATerm stratego_nf_0 (ATerm);
ATerm warnings_0 (ATerm);
ATerm extract_0 (ATerm);
ATerm extract_all_0 (ATerm);
ATerm output_frontend_0 (ATerm);
ATerm if_keep2_1 (ATerm, ATerm v_99 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm w_99 (ATerm));
ATerm AddMain_1 (ATerm, ATerm s_77 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm s_107 (ATerm));
ATerm add_main_0 (ATerm);
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm t_77 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm p_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm q_85 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm k_100 (ATerm), ATerm l_100 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm m_100 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_107 (ATerm));
ATerm assert_1 (ATerm, ATerm w_95 (ATerm));
ATerm obsolete_1 (ATerm, ATerm i_97 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm j_70 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm j_107 (ATerm), ATerm k_107 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm u_98 (ATerm));
ATerm basename_1 (ATerm, ATerm a_94 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm t_95 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm s_95 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_106 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm w_106 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_98 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm m_102 (ATerm), ATerm n_102 (ATerm));
ATerm debug_1 (ATerm, ATerm b_97 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_77 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm w_98 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_92 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_97 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm v_98 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm x_98 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_89 (ATerm), ATerm l_89 (ATerm));
ATerm union_1 (ATerm, ATerm g_89 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm v_103 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm access_0 (ATerm);
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm f_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm f_70 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_102 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_103 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_103 (ATerm));
ATerm parse_options_1 (ATerm, ATerm r_103 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm init_sc_config_0 (ATerm);
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_exit(not_null(e_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
  a_1 = t;
  w_0 :
  if(match_cons(a_1, sym__2))
    {
      b_1 = ATgetArgument(a_1, 0);
      c_1 = ATgetArgument(a_1, 1);
      {
        ATerm i_17;
        i_17 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = i_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_91 (ATerm), ATerm f_91 (ATerm))
{
  ATerm j_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_91(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = j_17;
      {
        ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
        v_2 = t;
        d_2 :
        if(((ATgetType(v_2) == AT_LIST) && !(ATisEmpty(v_2))))
          {
            w_2 = ATgetFirst((ATermList) v_2);
            x_2 = (ATerm) ATgetNext((ATermList) v_2);
            {
              ATerm a_3 = NULL;
              ATerm b_3 = NULL;
              t = not_null(x_2);
              {
                t = foldr_2(t, e_91, f_91);
                {
                  b_3 = t;
                  if(((a_3 != NULL) && (a_3 != b_3)))
                    _fail(b_3);
                  else
                    a_3 = b_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_2), not_null(a_3));
                t = f_91(t);
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
ATerm crush_2 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  ATerm i_3 = NULL;
  ATerm k_3 = NULL;
  i_3 = t;
  {
    ATerm l_3 = NULL;
    ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
    t = not_null(i_3);
    {
      l_3 = t;
      {
        t = SSL_explode_term(not_null(l_3));
        {
          n_3 = t;
          h_3 :
          if(match_cons(n_3, sym__2))
            {
              o_3 = ATgetArgument(n_3, 0);
              p_3 = ATgetArgument(n_3, 1);
              if(((k_3 != NULL) && (k_3 != p_3)))
                _fail(p_3);
              else
                k_3 = p_3;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_3);
      t = foldr_2(t, x_94, y_94);
    }
  }
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_m_17;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          v_3 = t;
          if(((u_3 != NULL) && (u_3 != v_3)))
            _fail(v_3);
          else
            u_3 = v_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_p_17);
        t = geq_0(t);
      }
    }
    t = n_17;
    t = t_98(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  a_4 :
  if(match_cons(b_4, sym_FILE_1))
    {
      c_4 = ATgetArgument(b_4, 0);
      {
        ATerm e_4 = NULL;
        ATerm f_4 = NULL;
        ATerm h_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_q_17;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm w_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_18;
              t = get_config_0(t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = w_17;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_b_18;
                  return(t);
                }
                t = get_outfile_1(t, t_0);
              }
            }
          {
            f_4 = t;
            {
              if(((e_4 != NULL) && (e_4 != f_4)))
                _fail(f_4);
              else
                e_4 = f_4;
              {
                ATerm h_4 = NULL;
                t = term_e_18;
                {
                  t = get_config_0(t);
                  {
                    h_4 = t;
                    if(((g_4 != NULL) && (g_4 != h_4)))
                      _fail(h_4);
                    else
                      g_4 = h_4;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_a_18), not_null(c_4)));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_4));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_FILE_1))
    {
      r_4 = ATgetArgument(q_4, 0);
      {
        ATerm t_4 = NULL;
        ATerm u_4 = NULL;
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_g_18;
            return(t);
          }
          t = say_1(t, v_0);
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm v_4 = NULL;
          ATerm x_0 (ATerm t)
          {
            t = term_h_18;
            return(t);
          }
          t = get_outfile_1(t, x_0);
          {
            u_4 = t;
            {
              if(((t_4 != NULL) && (t_4 != u_4)))
                _fail(u_4);
              else
                t_4 = u_4;
              {
                ATerm w_4 = NULL,y_4 = NULL;
                ATerm x_4 = NULL;
                t = term_i_18;
                {
                  t = get_config_0(t);
                  {
                    x_4 = t;
                    if(((w_4 != NULL) && (w_4 != x_4)))
                      _fail(x_4);
                    else
                      w_4 = x_4;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_a_18), not_null(r_4)), term_l_18));
                  {
                    t = conc_0(t);
                    {
                      y_4 = t;
                      if(((v_4 != NULL) && (v_4 != y_4)))
                        _fail(y_4);
                      else
                        v_4 = y_4;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_18, not_null(v_4));
                  {
                    t = if_verbose3_1(t, debug_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_4));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_compile_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_18;
      q_18 = t;
      {
        t = term_l_18;
        t = get_config_0(t);
      }
      t = q_18;
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_5 = NULL;
            ATerm f_5 = NULL;
            f_5 = t;
            if(((e_5 != NULL) && (e_5 != f_5)))
              _fail(f_5);
            else
              e_5 = f_5;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_w_18));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, d_1);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = c_to_object_code_0(t);
          t = link_object_code_0(t);
          return(t);
        }
        t = profile_p__2(t, y_0, z_0);
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      t = SSL_rename(not_null(k_5), not_null(l_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm y_5 = NULL,z_5 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym_FILE_1))
    {
      z_5 = ATgetArgument(y_5, 0);
      {
        ATerm x_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_f_19);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(z_5);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_f_19;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = x_18;
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_6 = NULL;
                  ATerm e_6 = NULL;
                  t = r_0(t);
                  {
                    e_6 = t;
                    {
                      if(((d_6 != NULL) && (d_6 != e_6)))
                        _fail(e_6);
                      else
                        d_6 = e_6;
                      {
                        ATerm l_19 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm n_19 = t;
                            int o_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(o_19);
                              }
                            else
                              {
                                t = n_19;
                                {
                                  ATerm f_6 = NULL;
                                  f_6 = t;
                                  if(((z_5 != NULL) && (z_5 != f_6)))
                                    _fail(f_6);
                                  else
                                    z_5 = f_6;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_19;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(d_6));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_6));
                  ;
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  {
                    ATerm h_6 = NULL;
                    t = r_0(t);
                    {
                      h_6 = t;
                      if(((z_5 != NULL) && (z_5 != h_6)))
                        _fail(h_6);
                      else
                        z_5 = h_6;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_5));
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
ATerm xtc_transform_1 (ATerm t, ATerm i_107 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, i_107, e_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_p_19;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_r_19;
    {
      t = xtc_find_0(t);
      {
        r_6 = t;
        if(((q_6 != NULL) && (q_6 != r_6)))
          _fail(r_6);
        else
          q_6 = r_6;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_u_19);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_w_19;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm y_19;
    y_19 = t;
    {
      ATerm x_6 = NULL;
      t = pass_verbose_0(t);
      {
        x_6 = t;
        if(((w_6 != NULL) && (w_6 != x_6)))
          _fail(x_6);
        else
          w_6 = x_6;
      }
    }
    t = y_19;
    {
      ATerm b_7 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm z_6 = NULL;
            ATerm a_7 = NULL;
            a_7 = t;
            if(((z_6 != NULL) && (z_6 != a_7)))
              _fail(a_7);
            else
              z_6 = a_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_z_19);
            return(t);
          }
          t = map_1(t, k_1);
          {
            b_7 = t;
            if(((y_6 != NULL) && (y_6 != b_7)))
              _fail(b_7);
            else
              y_6 = b_7;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_a_20)), not_null(w_6));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, i_1, j_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm g_7 = NULL;
    ATerm h_7 = NULL;
    t = pass_verbose_0(t);
    {
      h_7 = t;
      if(((g_7 != NULL) && (g_7 != h_7)))
        _fail(h_7);
      else
        g_7 = h_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm k_7 = NULL;
    ATerm l_7 = NULL;
    t = pass_verbose_0(t);
    {
      l_7 = t;
      if(((k_7 != NULL) && (k_7 != l_7)))
        _fail(l_7);
      else
        k_7 = l_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, n_1, o_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    t = debug_1(t, q_1);
    return(t);
  }
  t = if_verbose2_1(t, p_1);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm o_7 = NULL;
        ATerm p_7 = NULL;
        p_7 = t;
        if(((o_7 != NULL) && (o_7 != p_7)))
          _fail(p_7);
        else
          o_7 = p_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(CheckATermList(not_null(o_7)), term_p_20));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, t_1);
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            {
              t = abox2text_0(t);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = term_q_20;
                    return(t);
                  }
                  t = get_outfile_1(t, v_1);
                  return(t);
                }
                t = rename_to_1(t, u_1);
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, r_1, s_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_r_20;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm s_7 = NULL;
    ATerm t_7 = NULL;
    t = pass_verbose_0(t);
    {
      t_7 = t;
      if(((s_7 != NULL) && (s_7 != t_7)))
        _fail(t_7);
      else
        s_7 = t_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, w_1, x_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm w_7 = NULL;
    ATerm x_7 = NULL;
    t = pass_verbose_0(t);
    {
      x_7 = t;
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm a_8 = NULL;
    ATerm b_8 = NULL;
    t = pass_verbose_0(t);
    {
      b_8 = t;
      if(((a_8 != NULL) && (a_8 != b_8)))
        _fail(b_8);
      else
        a_8 = b_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_y_20;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm e_8 = NULL;
    ATerm f_8 = NULL;
    t = pass_verbose_0(t);
    {
      f_8 = t;
      if(((e_8 != NULL) && (e_8 != f_8)))
        _fail(f_8);
      else
        e_8 = f_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, c_2, e_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_z_20;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm i_8 = NULL;
    ATerm j_8 = NULL;
    t = pass_verbose_0(t);
    {
      j_8 = t;
      if(((i_8 != NULL) && (i_8 != j_8)))
        _fail(j_8);
      else
        i_8 = j_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, f_2, g_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      t = term_a_21;
      return(t);
    }
    t = debug_1(t, i_2);
    return(t);
  }
  t = if_verbose2_1(t, h_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_8 = NULL;
        ATerm n_8 = NULL;
        n_8 = t;
        if(((m_8 != NULL) && (m_8 != n_8)))
          _fail(n_8);
        else
          m_8 = n_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_f_21));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, l_2);
      return(t);
    }
    ATerm k_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm m_2 (ATerm t)
        {
          ATerm g_21;
          g_21 = t;
          {
            ATerm h_21 = t;
            if((PushChoice() == 0))
              {
                t = term_i_21;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_21;
              }
          }
          t = g_21;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, m_2);
        {
          t = inline_0(t);
          {
            t = compile_match_0(t);
            t = optimize2_0(t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, j_2, k_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm q_8 = NULL;
    ATerm r_8 = NULL;
    t = pass_verbose_0(t);
    {
      r_8 = t;
      if(((q_8 != NULL) && (q_8 != r_8)))
        _fail(r_8);
      else
        q_8 = r_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_p_21;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm u_8 = NULL;
    ATerm v_8 = NULL;
    t = pass_verbose_0(t);
    {
      v_8 = t;
      if(((u_8 != NULL) && (u_8 != v_8)))
        _fail(v_8);
      else
        u_8 = v_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_q_21;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm a_9 = NULL,c_9 = NULL;
    ATerm y_21;
    y_21 = t;
    {
      ATerm b_9 = NULL;
      t = pass_verbose_0(t);
      {
        b_9 = t;
        if(((a_9 != NULL) && (a_9 != b_9)))
          _fail(b_9);
        else
          a_9 = b_9;
      }
    }
    t = y_21;
    {
      ATerm f_9 = NULL;
      t = term_z_21;
      {
        t = get_config_0(t);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm d_9 = NULL;
            ATerm e_9 = NULL;
            e_9 = t;
            if(((d_9 != NULL) && (d_9 != e_9)))
              _fail(e_9);
            else
              d_9 = e_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_9)), term_z_21);
            return(t);
          }
          t = map_1(t, t_2);
          {
            f_9 = t;
            if(((c_9 != NULL) && (c_9 != f_9)))
              _fail(f_9);
            else
              c_9 = f_9;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_9)), (ATerm) ATinsert(ATempty, term_a_20)), not_null(a_9));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_a_22;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm k_9 = NULL;
    ATerm l_9 = NULL;
    t = pass_verbose_0(t);
    {
      l_9 = t;
      if(((k_9 != NULL) && (k_9 != l_9)))
        _fail(l_9);
      else
        k_9 = l_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, u_2, y_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm o_9 = NULL;
    ATerm p_9 = NULL;
    t = pass_verbose_0(t);
    {
      p_9 = t;
      if(((o_9 != NULL) && (o_9 != p_9)))
        _fail(p_9);
      else
        o_9 = p_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, z_2, c_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm s_9 = NULL;
  ATerm d_3 (ATerm t)
  {
    ATerm c_22;
    c_22 = t;
    {
      t = term_i_22;
      t = get_config_0(t);
    }
    t = c_22;
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            t = (ATerm) ATinsert(ATempty, term_q_22);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm e_3 (ATerm t)
        {
          ATerm t_9 = NULL;
          ATerm f_3 (ATerm t)
          {
            t = term_t_22;
            return(t);
          }
          t = get_outfile_1(t, f_3);
          {
            t_9 = t;
            if(((s_9 != NULL) && (s_9 != t_9)))
              _fail(t_9);
            else
              s_9 = t_9;
          }
          return(t);
        }
        t = copy_to_1(t, e_3);
        {
          ATerm g_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_u_22);
            return(t);
          }
          t = say_1(t, g_3);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, d_3);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm w_9 = NULL;
      ATerm x_9 = NULL;
      t = term_x_22;
      {
        t = get_config_0(t);
        {
          x_9 = t;
          if(((w_9 != NULL) && (w_9 != x_9)))
            _fail(x_9);
          else
            w_9 = x_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), term_p_17);
        t = geq_0(t);
      }
    }
    t = v_22;
    t = v_99(t);
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm d_10 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = term_y_22;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm b_10 = NULL;
    ATerm c_10 = NULL;
    t = pass_verbose_0(t);
    {
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), term_a_20);
    return(t);
  }
  t = xtc_transform_2(t, m_3, q_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        ATerm e_10 = NULL;
        ATerm t_3 (ATerm t)
        {
          t = term_z_22;
          return(t);
        }
        t = get_outfile_1(t, t_3);
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        return(t);
      }
      t = copy_to_1(t, s_3);
      {
        ATerm w_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_a_23);
          return(t);
        }
        t = say_1(t, w_3);
      }
      return(t);
    }
    t = if_keep2_1(t, r_3);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm b_23;
    b_23 = t;
    {
      ATerm i_10 = NULL;
      ATerm j_10 = NULL;
      t = term_x_22;
      {
        t = get_config_0(t);
        {
          j_10 = t;
          if(((i_10 != NULL) && (i_10 != j_10)))
            _fail(j_10);
          else
            i_10 = j_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_c_23);
        t = geq_0(t);
      }
    }
    t = b_23;
    t = w_99(t);
    return(t);
  }
  t = try_1(t, x_3);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_Specification_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        ATerm r_10 = NULL;
        ATerm s_10 = NULL;
        t = term_d_23;
        {
          t = s_77(t);
          {
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(p_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_e_23, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm s_107 (ATerm))
{
  t = read_from_0(t);
  {
    t = s_107(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm m_23;
    m_23 = t;
    {
      ATerm y_10 = NULL;
      t = term_r_23;
      {
        t = get_config_0(t);
        {
          y_10 = t;
          {
            if(((x_10 != NULL) && (x_10 != y_10)))
              _fail(y_10);
            else
              x_10 = y_10;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = term_s_23;
                  return(t);
                }
                t = debug_1(t, d_4);
                return(t);
              }
              t = if_verbose2_1(t, z_3);
            }
          }
        }
      }
    }
    t = m_23;
    {
      ATerm i_4 (ATerm t)
      {
        ATerm j_4 (ATerm t)
        {
          t = not_null(x_10);
          return(t);
        }
        t = AddMain_1(t, j_4);
        return(t);
      }
      t = xtc_io_transform_1(t, i_4);
    }
    return(t);
  }
  t = try_1(t, y_3);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm l_4 (ATerm t)
      {
        ATerm a_11 = NULL;
        ATerm m_4 (ATerm t)
        {
          t = term_t_23;
          return(t);
        }
        t = get_outfile_1(t, m_4);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        return(t);
      }
      t = copy_to_1(t, l_4);
      {
        ATerm n_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_10)), term_u_23);
          return(t);
        }
        t = say_1(t, n_4);
      }
      return(t);
    }
    t = if_keep3_1(t, k_4);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_11 = NULL,j_11 = NULL;
  g_11 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm v_23;
      v_23 = t;
      {
        ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
        t = term_y_23;
        {
          t = table_get_0(t);
          {
            k_11 = t;
            f_11 :
            if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
              {
                l_11 = ATgetFirst((ATermList) k_11);
                m_11 = (ATerm) ATgetNext((ATermList) k_11);
                {
                  if(((j_11 != NULL) && (j_11 != l_11)))
                    _fail(l_11);
                  else
                    j_11 = l_11;
                  {
                    if(((i_11 != NULL) && (i_11 != m_11)))
                      _fail(m_11);
                    else
                      i_11 = m_11;
                    {
                      t = not_null(j_11);
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, s_4);
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
      t = v_23;
      {
        ATerm z_4 (ATerm t)
        {
          t = term_w_23;
          return(t);
        }
        t = end_scope_1(t, z_4);
      }
      return(t);
    }
    t = repeat_1(t, o_4);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm z_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_18;
        t = get_config_0(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = z_23;
        t = term_f_19;
      }
    return(t);
  }
  t = copy_to_1(t, a_5);
  {
    t = term_m_17;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm t_77 (ATerm))
{
  ATerm r_11 = NULL,t_11 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm s_11 = NULL;
    t = t_77(t);
    {
      s_11 = t;
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  }
  t = h_24;
  {
    ATerm u_11 = NULL;
    t = term_i_24;
    {
      t = get_config_0(t);
      {
        u_11 = t;
        if(((t_11 != NULL) && (t_11 != u_11)))
          _fail(u_11);
        else
          t_11 = u_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), not_null(r_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym_stderr_0))
    {
      ATerm d_12 = NULL,f_12 = NULL;
      ATerm j_24;
      j_24 = t;
      {
        ATerm e_12 = NULL;
        t = SSLgetAnnotations(not_null(b_12));
        {
          e_12 = t;
          if(((d_12 != NULL) && (d_12 != e_12)))
            _fail(e_12);
          else
            d_12 = e_12;
        }
      }
      t = j_24;
      {
        ATerm g_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(d_12));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        t = not_null(f_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_stdout_0))
    {
      ATerm q_12 = NULL,s_12 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm r_12 = NULL;
        t = SSLgetAnnotations(not_null(o_12));
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
      t = k_24;
      {
        ATerm t_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(q_12));
        {
          t_12 = t;
          if(((s_12 != NULL) && (s_12 != t_12)))
            _fail(t_12);
          else
            s_12 = t_12;
        }
        t = not_null(s_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_FILE_1))
    {
      g_13 = ATgetArgument(f_13, 0);
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_13 = NULL;
            ATerm j_13 = NULL;
            t = q_0(t);
            {
              j_13 = t;
              {
                if(((i_13 != NULL) && (i_13 != j_13)))
                  _fail(j_13);
                else
                  i_13 = j_13;
                {
                  ATerm n_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = n_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(i_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            {
              ATerm s_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_13 = NULL;
                  ATerm m_13 = NULL;
                  t = q_0(t);
                  {
                    m_13 = t;
                    {
                      if(((l_13 != NULL) && (l_13 != m_13)))
                        _fail(m_13);
                      else
                        l_13 = m_13;
                      {
                        ATerm z_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_25 = t;
                            int b_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(b_25);
                              }
                            else
                              {
                                t = a_25;
                                {
                                  ATerm c_25 = t;
                                  int d_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(d_25);
                                    }
                                  else
                                    {
                                      t = c_25;
                                      {
                                        ATerm n_13 = NULL;
                                        n_13 = t;
                                        if(((g_13 != NULL) && (g_13 != n_13)))
                                          _fail(n_13);
                                        else
                                          g_13 = n_13;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = z_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(l_13));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm p_13 = NULL;
                    t = q_0(t);
                    {
                      p_13 = t;
                      if(((g_13 != NULL) && (g_13 != p_13)))
                        _fail(p_13);
                      else
                        g_13 = p_13;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_13));
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
ATerm output_ast_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm g_25;
    g_25 = t;
    {
      t = term_l_25;
      t = get_config_0(t);
    }
    t = g_25;
    {
      ATerm c_5 (ATerm t)
      {
        ATerm z_13 = NULL;
        ATerm d_5 (ATerm t)
        {
          t = term_m_25;
          return(t);
        }
        t = get_outfile_1(t, d_5);
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        return(t);
      }
      t = copy_to_1(t, c_5);
      {
        ATerm n_25;
        n_25 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_o_25);
          t = echo_0(t);
        }
        t = n_25;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm f_14 = NULL;
  t = term_x_22;
  {
    ATerm s_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = s_25;
        t = term_y_25;
      }
    {
      f_14 = t;
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_y_25);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_14 = t;
          if(((d_14 != NULL) && (d_14 != g_14)))
            _fail(g_14);
          else
            d_14 = g_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_x_22);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm m_14 = NULL,o_14 = NULL;
  ATerm n_14 = NULL;
  t = term_o_17;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = term_y_25;
      }
    {
      n_14 = t;
      if(((m_14 != NULL) && (m_14 != n_14)))
        _fail(n_14);
      else
        m_14 = n_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), term_y_25);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          o_14 = t;
          if(((l_14 != NULL) && (l_14 != o_14)))
            _fail(o_14);
          else
            l_14 = o_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_14)), term_o_17);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm t_14 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_18;
      t = get_config_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        t = term_i_24;
        t = get_config_0(t);
      }
    }
  {
    t_14 = t;
    if(((s_14 != NULL) && (s_14 != t_14)))
      _fail(t_14);
    else
      s_14 = t_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_14)), term_d_26);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_stdin_0))
    {
      ATerm c_15 = NULL;
      ATerm d_15 = NULL;
      t = term_m_26;
      {
        t = ReadFromFile_0(t);
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
      }
      t = not_null(c_15);
    }
  else
    {
      if(match_cons(a_15, sym_FILE_1))
        {
          b_15 = ATgetArgument(a_15, 0);
          {
            ATerm f_15 = NULL;
            ATerm g_15 = NULL;
            t = not_null(b_15);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
            }
            t = not_null(f_15);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  p_15 = t;
  n_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      s_15 = ATgetArgument(p_15, 1);
      o_15 :
      if(match_cons(q_15, sym_Stream_1))
        {
          r_15 = ATgetArgument(q_15, 0);
          {
            ATerm v_15 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(r_15), not_null(s_15));
            {
              ATerm w_15 = NULL;
              w_15 = t;
              if(((v_15 != NULL) && (v_15 != w_15)))
                _fail(w_15);
              else
                v_15 = w_15;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_15));
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
ATerm WriteToFile_1 (ATerm t, ATerm p_97 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym__2))
    {
      e_16 = ATgetArgument(d_16, 0);
      f_16 = ATgetArgument(d_16, 1);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        t = not_null(e_16);
        {
          ATerm j_16 = NULL;
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), term_n_26);
            {
              t = open_stream_0(t);
              {
                ATerm l_16 = NULL;
                l_16 = t;
                if(((k_16 != NULL) && (k_16 != l_16)))
                  _fail(l_16);
                else
                  k_16 = l_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(f_16));
                  {
                    t = p_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(f_16);
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
ATerm write_to_0 (ATerm t)
{
  ATerm r_16 = NULL;
  ATerm t_16 = NULL;
  r_16 = t;
  {
    ATerm u_16 = NULL;
    t = xtc_new_file_0(t);
    {
      u_16 = t;
      {
        if(((t_16 != NULL) && (t_16 != u_16)))
          _fail(u_16);
        else
          t_16 = u_16;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(r_16));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(t_16);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_16));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_107, r_107);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_close_file(not_null(y_16));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      t = SSL_execvp(not_null(e_17), not_null(f_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_int_to_string(not_null(k_17));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym_UnknownSignal_1))
    {
      t_17 = ATgetArgument(s_17, 0);
      {
        ATerm x_17 = NULL;
        ATerm y_17 = NULL;
        t = not_null(t_17);
        {
          t = int_to_string_0(t);
          {
            y_17 = t;
            if(((x_17 != NULL) && (x_17 != y_17)))
              _fail(y_17);
            else
              x_17 = y_17;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), not_null(x_17)), term_o_26);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(s_17, sym_Signal_3))
        {
          t_17 = ATgetArgument(s_17, 0);
          u_17 = ATgetArgument(s_17, 1);
          v_17 = ATgetArgument(s_17, 2);
          {
            ATerm c_18 = NULL;
            ATerm d_18 = NULL;
            t = not_null(u_17);
            {
              t = int_to_string_0(t);
              {
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_17)), term_t_26), not_null(c_18)), term_q_26), not_null(t_17));
              t = concat_strings_0(t);
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
ATerm fetch_elem_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm k_18 = NULL;
    t = q_85(t);
    {
      k_18 = t;
      if(((j_18 != NULL) && (j_18 != k_18)))
        _fail(k_18);
      else
        j_18 = k_18;
    }
    return(t);
  }
  t = fetch_1(t, g_5);
  t = not_null(j_18);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  {
    ATerm u_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_34), term_h_34), term_z_33), term_v_33), term_j_33), term_f_33), term_t_32), term_p_32), term_x_31), term_t_31), term_l_31), term_b_31), term_t_30), term_p_30), term_f_30), term_y_29), term_s_29), term_i_29), term_c_29), term_w_28), term_r_28), term_n_28), term_a_28), term_q_27), term_m_27), term_i_27), term_f_27), term_c_27);
        {
          ATerm h_5 (ATerm t)
          {
            ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
            r_18 = t;
            o_18 :
            if(match_cons(r_18, sym_Signal_3))
              {
                s_18 = ATgetArgument(r_18, 0);
                t_18 = ATgetArgument(r_18, 1);
                u_18 = ATgetArgument(r_18, 2);
                if(((p_18 != NULL) && (p_18 != t_18)))
                  _fail(t_18);
                else
                  p_18 = t_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, h_5);
        }
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(p_18));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm m_34;
  m_34 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
      b_19 = t;
      a_19 :
      if(match_cons(b_19, sym_WaitStatus_3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          {
            ATerm h_19 = NULL;
            t = not_null(d_19);
            {
              ATerm n_34 = t;
              if((PushChoice() == 0))
                {
                  ATerm g_19 = NULL;
                  g_19 = t;
                  y_18 :
                  if(!(match_int(g_19, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_34;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm i_19 = NULL;
                    i_19 = t;
                    if(((h_19 != NULL) && (h_19 != i_19)))
                      _fail(i_19);
                    else
                      h_19 = i_19;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_19)), term_o_34));
                      t = printnl_0(t);
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
    t = try_1(t, m_5);
  }
  t = m_34;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = SSL_waitpid(not_null(m_19));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm k_100 (ATerm), ATerm l_100 (ATerm))
{
  ATerm t_19 = NULL;
  ATerm v_19 = NULL;
  t_19 = t;
  {
    t = fork_0(t);
    {
      v_19 = t;
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_19 = NULL;
            x_19 = t;
            s_19 :
            if(match_int(x_19, 0))
              {
                t = not_null(t_19);
                t = k_100(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(t_19));
              t = l_100(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm g_20 = NULL;
  ATerm n_5 (ATerm t)
  {
    ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
    h_20 = t;
    f_20 :
    if(match_cons(h_20, sym__2))
      {
        i_20 = ATgetArgument(h_20, 0);
        j_20 = ATgetArgument(h_20, 1);
        {
          ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
          if(((g_20 != NULL) && (g_20 != j_20)))
            _fail(j_20);
          else
            g_20 = j_20;
          {
            t = not_null(i_20);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  l_20 = t;
                  d_20 :
                  if(match_cons(l_20, sym_WaitStatus_3))
                    {
                      m_20 = ATgetArgument(l_20, 0);
                      n_20 = ATgetArgument(l_20, 1);
                      o_20 = ATgetArgument(l_20, 2);
                      e_20 :
                      if(match_int(m_20, 0))
                        {
                          t = not_null(g_20);
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
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2(t, m_100, n_5);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), not_null(v_20));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, o_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm b_21 = NULL;
  ATerm v_34;
  v_34 = t;
  {
    ATerm c_21 = NULL;
    t = h_107(t);
    {
      t = xtc_find_warning_0(t);
      {
        c_21 = t;
        if(((b_21 != NULL) && (b_21 != c_21)))
          _fail(c_21);
        else
          b_21 = c_21;
      }
    }
  }
  t = v_34;
  {
    ATerm w_34;
    w_34 = t;
    {
      ATerm d_21 = NULL;
      ATerm e_21 = NULL;
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), not_null(d_21));
        t = call_0(t);
      }
    }
    t = w_34;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm w_95 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym__2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
        ATerm x_34;
        x_34 = t;
        {
          ATerm u_21 = NULL;
          ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
          t = w_95(t);
          {
            u_21 = t;
            {
              if(((r_21 != NULL) && (r_21 != u_21)))
                _fail(u_21);
              else
                r_21 = u_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), not_null(n_21), not_null(o_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_34 = t;
                    int d_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), term_x_23);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_35);
                      }
                    else
                      {
                        t = y_34;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_21 = t;
                      k_21 :
                      if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
                        {
                          w_21 = ATgetFirst((ATermList) v_21);
                          x_21 = (ATerm) ATgetNext((ATermList) v_21);
                          {
                            if(((s_21 != NULL) && (s_21 != w_21)))
                              _fail(w_21);
                            else
                              s_21 = w_21;
                            {
                              if(((t_21 != NULL) && (t_21 != x_21)))
                                _fail(x_21);
                              else
                                t_21 = x_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_21), term_x_23, (ATerm) ATinsert(CheckATermList(not_null(t_21)), (ATerm) ATinsert(CheckATermList(not_null(s_21)), not_null(n_21))));
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
        t = x_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm i_97 (ATerm))
{
  ATerm e_35;
  e_35 = t;
  {
    t = i_97(t);
    {
      ATerm p_5 (ATerm t)
      {
        t = term_f_35;
        return(t);
      }
      t = debug_1(t, p_5);
    }
  }
  t = e_35;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  ATerm o_22 (ATerm t)
  {
    ATerm g_35 = t;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
        j_22 = t;
        d_22 :
        if(match_cons(j_22, sym__2))
          {
            k_22 = ATgetArgument(j_22, 0);
            l_22 = ATgetArgument(j_22, 1);
            {
            }
          }
        else
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_35;
      }
    {
      ATerm q_5 (ATerm t)
      {
        t = term_h_35;
        return(t);
      }
      t = obsolete_1(t, q_5);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_22), term_n_26);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm p_22 (ATerm t)
  {
    t = SSL_open_file(not_null(g_22), not_null(h_22));
    return(t);
  }
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_22(t);
            ;
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            t = p_22(t);
          }
      }
    }
  else
    {
      t = o_22(t);
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm r_22 = NULL;
  ATerm s_22 = NULL;
  t = term_d_23;
  {
    t = new_0(t);
    {
      s_22 = t;
      if(((r_22 != NULL) && (r_22 != s_22)))
        _fail(s_22);
      else
        r_22 = s_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), term_k_35);
    {
      t = conc_strings_0(t);
      {
        ATerm r_5 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_5);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm w_22 = NULL;
  t = new_file_0(t);
  {
    w_22 = t;
    {
      ATerm l_35;
      l_35 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), term_n_26);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), term_d_23);
            {
              ATerm s_5 (ATerm t)
              {
                t = term_w_23;
                return(t);
              }
              t = assert_1(t, s_5);
            }
          }
        }
      }
      t = l_35;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_stdin_0))
    {
      ATerm i_23 = NULL;
      ATerm j_23 = NULL;
      ATerm k_23 = NULL;
      t = xtc_new_file_0(t);
      {
        j_23 = t;
        {
          if(((i_23 != NULL) && (i_23 != j_23)))
            _fail(j_23);
          else
            i_23 = j_23;
          {
            ATerm l_23 = NULL;
            t = p_0(t);
            {
              l_23 = t;
              if(((k_23 != NULL) && (k_23 != l_23)))
                _fail(l_23);
              else
                k_23 = l_23;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), term_a_18));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(i_23);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_23));
    }
  else
    {
      if(match_cons(g_23, sym_FILE_1))
        {
          h_23 = ATgetArgument(g_23, 0);
          {
            ATerm n_23 = NULL;
            ATerm o_23 = NULL;
            t = not_null(h_23);
            {
              ATerm p_23 = NULL;
              t = xtc_new_file_0(t);
              {
                o_23 = t;
                {
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                  {
                    ATerm q_23 = NULL;
                    t = p_0(t);
                    {
                      q_23 = t;
                      if(((p_23 != NULL) && (p_23 != q_23)))
                        _fail(q_23);
                      else
                        p_23 = q_23;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_23)), term_a_18), not_null(h_23)), term_n_35));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(n_23);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_stdin_0))
    {
      ATerm d_24 = NULL,f_24 = NULL;
      ATerm q_35;
      q_35 = t;
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
      t = q_35;
      {
        ATerm g_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(d_24));
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
ATerm FILE_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_FILE_1))
    {
      q_24 = ATgetArgument(p_24, 0);
      {
        ATerm t_24 = NULL,v_24 = NULL;
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm x_24 = NULL;
            t = j_70(t);
            {
              v_24 = t;
              {
                ATerm y_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(v_24)), not_null(t_24));
                {
                  y_24 = t;
                  if(((x_24 != NULL) && (x_24 != y_24)))
                    _fail(y_24);
                  else
                    x_24 = y_24;
                }
                t = not_null(x_24);
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
ATerm xtc_transform_2 (ATerm t, ATerm j_107 (ATerm), ATerm k_107 (ATerm))
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          t = stdin_0(t);
        }
      LocalPopChoice(s_35);
      t = xtc_transform_file_2(t, j_107, k_107);
    }
  else
    {
      t = r_35;
      t = xtc_transform_term_2(t, j_107, k_107);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm d_36;
    d_36 = t;
    {
      ATerm e_25 = NULL;
      ATerm f_25 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_c_23);
        t = geq_0(t);
      }
    }
    t = d_36;
    t = u_98(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm a_94 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm v_5 (ATerm t)
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, v_5);
          ;
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
          {
            ATerm g_36 = t;
            int i_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm j_25 = NULL;
                  j_25 = t;
                  h_25 :
                  if(!(match_int(j_25, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, w_5, _id);
                ;
                LocalPopChoice(i_36);
              }
            else
              {
                t = g_36;
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm k_25 = NULL;
                    k_25 = t;
                    i_25 :
                    if(!(match_int(k_25, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, a_6, a_94);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, v_5);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm get_infile_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_FILE_1))
    {
      r_25 = ATgetArgument(q_25, 0);
      {
        ATerm t_25 = NULL,u_25 = NULL;
        ATerm v_25 = NULL;
        t = not_null(r_25);
        {
          ATerm w_25 = NULL;
          t = basename_0(t);
          {
            v_25 = t;
            {
              if(((t_25 != NULL) && (t_25 != v_25)))
                _fail(v_25);
              else
                t_25 = v_25;
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm g_6 (ATerm t)
                  {
                    t = term_j_36;
                    return(t);
                  }
                  t = debug_1(t, g_6);
                  return(t);
                }
                t = if_verbose3_1(t, c_6);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_36, not_null(t_25));
                  {
                    t = set_config_0(t);
                    {
                      ATerm l_36 = t;
                      int m_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_a_18;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(m_36);
                        }
                      else
                        {
                          t = l_36;
                          t = not_null(t_25);
                        }
                      {
                        w_25 = t;
                        {
                          if(((u_25 != NULL) && (u_25 != w_25)))
                            _fail(w_25);
                          else
                            u_25 = w_25;
                          {
                            ATerm i_6 (ATerm t)
                            {
                              ATerm j_6 (ATerm t)
                              {
                                t = term_o_36;
                                return(t);
                              }
                              t = debug_1(t, j_6);
                              return(t);
                            }
                            t = if_verbose3_1(t, i_6);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_24, not_null(u_25));
                              t = set_config_0(t);
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_25));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  t = get_infile_0(t);
  {
    ATerm k_6 (ATerm t)
    {
      t = term_q_36;
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm e_26 = NULL,g_26 = NULL,i_26 = NULL,k_26 = NULL;
      ATerm t_36;
      t_36 = t;
      {
        ATerm f_26 = NULL;
        t = dep_name_0(t);
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
      }
      t = t_36;
      {
        ATerm u_36;
        u_36 = t;
        {
          ATerm h_26 = NULL;
          t = pass_verbose_0(t);
          {
            h_26 = t;
            if(((g_26 != NULL) && (g_26 != h_26)))
              _fail(h_26);
            else
              g_26 = h_26;
          }
        }
        t = u_36;
        {
          ATerm v_36;
          v_36 = t;
          {
            ATerm j_26 = NULL;
            t = pass_keep_0(t);
            {
              j_26 = t;
              if(((i_26 != NULL) && (i_26 != j_26)))
                _fail(j_26);
              else
                i_26 = j_26;
            }
          }
          t = v_36;
          {
            ATerm l_26 = NULL;
            t = term_w_36;
            {
              t = get_config_0(t);
              {
                l_26 = t;
                if(((k_26 != NULL) && (k_26 != l_26)))
                  _fail(l_26);
                else
                  k_26 = l_26;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(g_26)), not_null(k_26)), not_null(e_26));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, k_6, l_6);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm n_6 (ATerm t)
    {
      t = term_x_36;
      return(t);
    }
    t = debug_1(t, n_6);
    return(t);
  }
  t = if_verbose2_1(t, m_6);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(CheckATermList(not_null(r_26)), term_y_36));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, s_6);
      return(t);
    }
    ATerm p_6 (ATerm t)
    {
      t = parse_0(t);
      {
        t = output_ast_0(t);
        {
          t = add_main_0(t);
          {
            t = frontend_0(t);
            {
              t = output_frontend_0(t);
              {
                t = extract_0(t);
                {
                  t = warnings_0(t);
                  {
                    t = stratego_nf_0(t);
                    t = rename_defs_0(t);
                  }
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, o_6, p_6);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
    {
      x_26 = ATgetFirst((ATermList) w_26);
      y_26 = (ATerm) ATgetNext((ATermList) w_26);
      t = not_null(y_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      {
        ATerm b_37;
        b_37 = t;
        {
          ATerm x_27 = NULL;
          ATerm y_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(u_27));
          {
            ATerm c_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(f_37);
              }
            else
              {
                t = c_37;
                t = (ATerm) ATempty;
              }
            {
              y_27 = t;
              if(((x_27 != NULL) && (x_27 != y_27)))
                _fail(y_27);
              else
                x_27 = y_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_27), not_null(u_27), not_null(x_27));
            t = table_put_0(t);
          }
        }
        t = b_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm t_95 (ATerm))
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  ATerm g_37;
  g_37 = t;
  {
    ATerm i_28 = NULL;
    ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
    t = t_95(t);
    {
      i_28 = t;
      {
        if(((h_28 != NULL) && (h_28 != i_28)))
          _fail(i_28);
        else
          h_28 = i_28;
        {
          ATerm h_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), term_x_23);
              t = table_get_0(t);
              ;
              LocalPopChoice(l_37);
            }
          else
            {
              t = h_37;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_28 = t;
            e_28 :
            if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
              {
                k_28 = ATgetFirst((ATermList) j_28);
                l_28 = (ATerm) ATgetNext((ATermList) j_28);
                {
                  if(((g_28 != NULL) && (g_28 != k_28)))
                    _fail(k_28);
                  else
                    g_28 = k_28;
                  {
                    if(((f_28 != NULL) && (f_28 != l_28)))
                      _fail(l_28);
                    else
                      f_28 = l_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_28), term_x_23, not_null(f_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_28);
                          {
                            ATerm t_6 (ATerm t)
                            {
                              ATerm m_28 = NULL;
                              m_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), not_null(m_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_6);
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
  t = g_37;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_remove(not_null(s_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_78(t);
      t = k_78(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        t = k_78(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm x_28 = NULL;
  ATerm v_37;
  v_37 = t;
  {
    ATerm y_28 = NULL;
    ATerm e_29 = NULL;
    t = s_95(t);
    {
      y_28 = t;
      {
        if(((x_28 != NULL) && (x_28 != y_28)))
          _fail(y_28);
        else
          x_28 = y_28;
        {
          ATerm f_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), term_x_23);
          {
            ATerm w_37 = t;
            int c_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_38);
              }
            else
              {
                t = w_37;
                t = (ATerm) ATempty;
              }
            {
              f_29 = t;
              if(((e_29 != NULL) && (e_29 != f_29)))
                _fail(f_29);
              else
                e_29 = f_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_28), term_x_23, (ATerm) ATinsert(CheckATermList(not_null(e_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_37;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_106 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL;
  ATerm u_6 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = begin_scope_1(t, u_6);
  {
    ATerm v_6 (ATerm t)
    {
      ATerm d_38;
      d_38 = t;
      {
        ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_23;
            t = table_get_0(t);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_29 = t;
          j_29 :
          if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
            {
              o_29 = ATgetFirst((ATermList) n_29);
              p_29 = (ATerm) ATgetNext((ATermList) n_29);
              {
                if(((m_29 != NULL) && (m_29 != o_29)))
                  _fail(o_29);
                else
                  m_29 = o_29;
                {
                  if(((l_29 != NULL) && (l_29 != p_29)))
                    _fail(p_29);
                  else
                    l_29 = p_29;
                  {
                    t = not_null(m_29);
                    {
                      ATerm c_7 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, c_7);
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
      t = d_38;
      {
        ATerm d_7 (ATerm t)
        {
          t = term_w_23;
          return(t);
        }
        t = end_scope_1(t, d_7);
      }
      return(t);
    }
    t = restore_always_2(t, t_106, v_6);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm w_106 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm k_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL;
        ATerm x_29 = NULL;
        t = term_n_35;
        {
          t = get_config_0(t);
          {
            x_29 = t;
            if(((v_29 != NULL) && (v_29 != x_29)))
              _fail(x_29);
            else
              v_29 = x_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_29));
        ;
        LocalPopChoice(p_38);
      }
    else
      {
        t = k_38;
        t = term_m_26;
      }
    t = w_106(t);
    return(t);
  }
  t = xtc_temp_files_1(t, e_7);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    t = front_end_0(t);
    {
      t = optimize_0(t);
      {
        t = back_end_0(t);
        t = c_compile_0(t);
      }
    }
    return(t);
  }
  t = xtc_input_1(t, f_7);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm q_38;
    q_38 = t;
    {
      ATerm a_30 = NULL;
      ATerm b_30 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          b_30 = t;
          if(((a_30 != NULL) && (a_30 != b_30)))
            _fail(b_30);
          else
            a_30 = b_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), term_y_25);
        t = geq_0(t);
      }
    }
    t = q_38;
    t = s_98(t);
    return(t);
  }
  t = try_1(t, i_7);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  t = SSL_TicksToSeconds(not_null(e_30));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__4))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      m_30 = ATgetArgument(j_30, 2);
      n_30 = ATgetArgument(j_30, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(n_30));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  u_30 :
  if(match_cons(v_30, sym__2))
    {
      w_30 = ATgetArgument(v_30, 0);
      x_30 = ATgetArgument(v_30, 1);
      {
        ATerm s_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_30), not_null(x_30));
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = s_38;
            t = SSL_addr(not_null(w_30), not_null(x_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym__4))
    {
      e_31 = ATgetArgument(d_31, 0);
      f_31 = ATgetArgument(d_31, 1);
      g_31 = ATgetArgument(d_31, 2);
      h_31 = ATgetArgument(d_31, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), not_null(g_31));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      {
        ATerm w_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_31), not_null(r_31));
            ;
            LocalPopChoice(z_38);
          }
        else
          {
            t = w_38;
            t = SSL_subtr(not_null(q_31), not_null(r_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  d_32 = t;
  a_32 :
  if(match_cons(d_32, sym__2))
    {
      e_32 = ATgetArgument(d_32, 0);
      j_32 = ATgetArgument(d_32, 1);
      b_32 :
      if(match_cons(e_32, sym__4))
        {
          f_32 = ATgetArgument(e_32, 0);
          g_32 = ATgetArgument(e_32, 1);
          h_32 = ATgetArgument(e_32, 2);
          i_32 = ATgetArgument(e_32, 3);
          c_32 :
          if(match_cons(j_32, sym__4))
            {
              k_32 = ATgetArgument(j_32, 0);
              l_32 = ATgetArgument(j_32, 1);
              m_32 = ATgetArgument(j_32, 2);
              n_32 = ATgetArgument(j_32, 3);
              {
                ATerm w_32 = NULL,y_32 = NULL,a_33 = NULL,c_33 = NULL;
                ATerm a_39;
                a_39 = t;
                {
                  ATerm x_32 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_32), not_null(k_32));
                  {
                    t = subt_0(t);
                    {
                      x_32 = t;
                      if(((w_32 != NULL) && (w_32 != x_32)))
                        _fail(x_32);
                      else
                        w_32 = x_32;
                    }
                  }
                }
                t = a_39;
                {
                  ATerm f_39;
                  f_39 = t;
                  {
                    ATerm z_32 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), not_null(l_32));
                    {
                      t = subt_0(t);
                      {
                        z_32 = t;
                        if(((y_32 != NULL) && (y_32 != z_32)))
                          _fail(z_32);
                        else
                          y_32 = z_32;
                      }
                    }
                  }
                  t = f_39;
                  {
                    ATerm g_39;
                    g_39 = t;
                    {
                      ATerm b_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_32), not_null(m_32));
                      {
                        t = subt_0(t);
                        {
                          b_33 = t;
                          if(((a_33 != NULL) && (a_33 != b_33)))
                            _fail(b_33);
                          else
                            a_33 = b_33;
                        }
                      }
                    }
                    t = g_39;
                    {
                      ATerm d_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_32), not_null(n_32));
                      {
                        t = subt_0(t);
                        {
                          d_33 = t;
                          if(((c_33 != NULL) && (c_33 != d_33)))
                            _fail(d_33);
                          else
                            c_33 = d_33;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(w_32), not_null(y_32), not_null(a_33), not_null(c_33));
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
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2 (ATerm t, ATerm m_102 (ATerm), ATerm n_102 (ATerm))
{
  ATerm n_33 = NULL;
  ATerm h_39;
  h_39 = t;
  {
    ATerm o_33 = NULL;
    t = times_0(t);
    {
      o_33 = t;
      if(((n_33 != NULL) && (n_33 != o_33)))
        _fail(o_33);
      else
        n_33 = o_33;
    }
  }
  t = h_39;
  {
    t = n_102(t);
    {
      ATerm i_39;
      i_39 = t;
      {
        ATerm p_33 = NULL,r_33 = NULL,t_33 = NULL;
        ATerm q_33 = NULL;
        t = times_0(t);
        {
          q_33 = t;
          if(((p_33 != NULL) && (p_33 != q_33)))
            _fail(q_33);
          else
            p_33 = q_33;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_33), not_null(n_33));
          {
            t = diff_times_0(t);
            {
              ATerm o_39;
              o_39 = t;
              {
                ATerm s_33 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    s_33 = t;
                    if(((r_33 != NULL) && (r_33 != s_33)))
                      _fail(s_33);
                    else
                      r_33 = s_33;
                  }
                }
              }
              t = o_39;
              {
                ATerm u_33 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    u_33 = t;
                    if(((t_33 != NULL) && (t_33 != u_33)))
                      _fail(u_33);
                    else
                      t_33 = u_33;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_33)), term_s_39), not_null(r_33)), term_p_39);
                  t = m_102(t);
                }
              }
            }
          }
        }
      }
      t = i_39;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_97 (ATerm))
{
  ATerm t_39;
  t_39 = t;
  {
    ATerm b_34 = NULL,d_34 = NULL;
    ATerm y_39;
    y_39 = t;
    {
      ATerm c_34 = NULL;
      t = b_97(t);
      {
        c_34 = t;
        if(((b_34 != NULL) && (b_34 != c_34)))
          _fail(c_34);
        else
          b_34 = c_34;
      }
    }
    t = y_39;
    {
      ATerm e_34 = NULL;
      e_34 = t;
      if(((d_34 != NULL) && (d_34 != e_34)))
        _fail(e_34);
      else
        d_34 = e_34;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_34)), not_null(b_34)));
        t = printnl_0(t);
      }
    }
  }
  t = t_39;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm b_40 = t;
        int g_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_7);
            ;
            LocalPopChoice(g_40);
          }
        else
          {
            t = b_40;
            {
              ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
              s_34 = t;
              r_34 :
              if(match_cons(s_34, sym_Path_1))
                {
                  t_34 = ATgetArgument(s_34, 0);
                  t = not_null(t_34);
                }
              else
                {
                  if(match_cons(s_34, sym_Var_1))
                    {
                      t_34 = ATgetArgument(s_34, 0);
                      {
                        t = not_null(t_34);
                        {
                          ATerm h_40 = t;
                          int j_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_40);
                            }
                          else
                            {
                              t = h_40;
                              {
                                ATerm m_7 (ATerm t)
                                {
                                  t = term_k_40;
                                  return(t);
                                }
                                t = debug_1(t, m_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_34, sym_Prefix_2))
                        {
                          t_34 = ATgetArgument(s_34, 0);
                          u_34 = ATgetArgument(s_34, 1);
                          {
                            ATerm z_34 = NULL,b_35 = NULL;
                            ATerm l_40;
                            l_40 = t;
                            {
                              ATerm a_35 = NULL;
                              t = not_null(t_34);
                              {
                                t = eval_config_0(t);
                                {
                                  a_35 = t;
                                  if(((z_34 != NULL) && (z_34 != a_35)))
                                    _fail(a_35);
                                  else
                                    z_34 = a_35;
                                }
                              }
                            }
                            t = l_40;
                            {
                              ATerm c_35 = NULL;
                              t = not_null(u_34);
                              {
                                t = eval_config_0(t);
                                {
                                  c_35 = t;
                                  if(((b_35 != NULL) && (b_35 != c_35)))
                                    _fail(c_35);
                                  else
                                    b_35 = c_35;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(b_35));
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
  ATerm m_35 = NULL;
  m_35 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_40, not_null(m_35));
    {
      t = table_get_0(t);
      {
        ATerm n_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_40;
            r_40 = t;
            {
              ATerm o_35 = NULL;
              ATerm p_35 = NULL;
              p_35 = t;
              if(((o_35 != NULL) && (o_35 != p_35)))
                _fail(p_35);
              else
                o_35 = p_35;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_40, not_null(m_35), not_null(o_35));
                t = table_put_0(t);
              }
            }
            t = r_40;
          }
          return(t);
        }
        t = try_1(t, n_7);
      }
    }
  }
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  t = if_verbose2_1(t, sc_version_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_40;
  s_40 = t;
  {
    t = error_0(t);
    {
      t = term_y_25;
      t = exit_0(t);
    }
  }
  t = s_40;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm t_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_40;
      w_40 = t;
      {
        ATerm u_35 = NULL;
        ATerm v_35 = NULL;
        t = term_x_40;
        {
          t = get_config_0(t);
          {
            v_35 = t;
            if(((u_35 != NULL) && (u_35 != v_35)))
              _fail(v_35);
            else
              u_35 = v_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_41), term_n_41), term_m_41), term_l_41), term_k_41), term_f_41), term_e_41), not_null(u_35)), term_d_41));
          t = printnl_0(t);
        }
      }
      t = w_40;
      ;
      LocalPopChoice(v_40);
    }
  else
    {
      t = t_40;
      {
        ATerm w_35 = NULL;
        w_35 = t;
        t_35 :
        if(!(match_string(w_35, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_77(t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = u_41;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      t = SSL_copy(not_null(b_36), not_null(c_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_table_keys(not_null(h_36));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_7 (ATerm t)
      {
        ATerm p_36 = NULL;
        ATerm r_36 = NULL;
        p_36 = t;
        {
          ATerm s_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), not_null(p_36));
          {
            t = table_get_0(t);
            {
              s_36 = t;
              if(((r_36 != NULL) && (r_36 != s_36)))
                _fail(s_36);
              else
                r_36 = s_36;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(r_36));
        }
        return(t);
      }
      t = map_1(t, q_7);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm w_41;
    w_41 = t;
    {
      ATerm z_36 = NULL;
      ATerm a_37 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_36), term_l_33);
        t = geq_0(t);
      }
    }
    t = w_41;
    t = w_98(t);
    return(t);
  }
  t = try_1(t, r_7);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_41;
  x_41 = t;
  {
    ATerm d_37 = NULL;
    ATerm e_37 = NULL;
    e_37 = t;
    if(((d_37 != NULL) && (d_37 != e_37)))
      _fail(e_37);
    else
      d_37 = e_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(d_37));
      t = printnl_0(t);
    }
  }
  t = x_41;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_37 = NULL;
  ATerm m_37 = NULL,n_37 = NULL;
  k_37 = t;
  {
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_41, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_37)));
    {
      t = table_get_0(t);
      {
        o_37 = t;
        i_37 :
        if(((ATgetType(o_37) == AT_LIST) && !(ATisEmpty(o_37))))
          {
            p_37 = ATgetFirst((ATermList) o_37);
            s_37 = (ATerm) ATgetNext((ATermList) o_37);
            j_37 :
            if(match_cons(p_37, sym__2))
              {
                q_37 = ATgetArgument(p_37, 0);
                r_37 = ATgetArgument(p_37, 1);
                {
                  if(((m_37 != NULL) && (m_37 != q_37)))
                    _fail(q_37);
                  else
                    m_37 = q_37;
                  if(((n_37 != NULL) && (n_37 != r_37)))
                    _fail(r_37);
                  else
                    n_37 = r_37;
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
    t = not_null(n_37);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm e_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_41, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_38)));
        {
          t = table_get_0(t);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
              f_38 = t;
              x_37 :
              if(match_cons(f_38, sym__2))
                {
                  g_38 = ATgetArgument(f_38, 0);
                  h_38 = ATgetArgument(f_38, 1);
                  {
                    if(((b_38 != NULL) && (b_38 != g_38)))
                      _fail(g_38);
                    else
                      b_38 = g_38;
                    if(((e_38 != NULL) && (e_38 != h_38)))
                      _fail(h_38);
                    else
                      e_38 = h_38;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_7);
          }
        }
        t = not_null(e_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm z_41 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_42);
    }
  else
    {
      t = z_41;
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              t = filter_1(t, h_92);
              return(t);
            }
            t = Cons_2(t, h_92, v_7);
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            {
              ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
              m_38 = t;
              l_38 :
              if(((ATgetType(m_38) == AT_LIST) && !(ATisEmpty(m_38))))
                {
                  n_38 = ATgetFirst((ATermList) m_38);
                  o_38 = (ATerm) ATgetNext((ATermList) m_38);
                  {
                    t = not_null(o_38);
                    t = filter_1(t, h_92);
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
ATerm repeat_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm r_38 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      t = q_78(t);
      t = r_38(t);
      return(t);
    }
    t = try_1(t, y_7);
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm g_42;
  g_42 = t;
  {
    ATerm z_7 (ATerm t)
    {
      t = term_k_42;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm l_42 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_42;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, z_7);
  }
  t = g_42;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm m_42;
  m_42 = t;
  {
    ATerm t_38 = NULL;
    ATerm u_38 = NULL;
    u_38 = t;
    if(((t_38 != NULL) && (t_38 != u_38)))
      _fail(u_38);
    else
      t_38 = u_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATempty, not_null(t_38)));
      t = printnl_0(t);
    }
  }
  t = m_42;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_97 (ATerm))
{
  ATerm q_42;
  q_42 = t;
  {
    t = f_97(t);
    t = debug_0(t);
  }
  t = q_42;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm v_98 (ATerm))
{
  ATerm c_8 (ATerm t)
  {
    ATerm r_42;
    r_42 = t;
    {
      ATerm x_38 = NULL;
      ATerm y_38 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          y_38 = t;
          if(((x_38 != NULL) && (x_38 != y_38)))
            _fail(y_38);
          else
            x_38 = y_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), term_q_29);
        t = geq_0(t);
      }
    }
    t = r_42;
    t = v_98(t);
    return(t);
  }
  t = try_1(t, c_8);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      {
        ATerm s_42;
        s_42 = t;
        {
          ATerm t_42 = t;
          int u_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_39), not_null(e_39));
              ;
              LocalPopChoice(u_42);
            }
          else
            {
              t = t_42;
              t = SSL_gtr(not_null(d_39), not_null(e_39));
            }
        }
        t = s_42;
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
  ATerm k_39 = NULL;
  ATerm w_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
      l_39 = t;
      j_39 :
      if(match_cons(l_39, sym__2))
        {
          m_39 = ATgetArgument(l_39, 0);
          n_39 = ATgetArgument(l_39, 1);
          {
            if(((k_39 != NULL) && (k_39 != m_39)))
              _fail(m_39);
            else
              k_39 = m_39;
            if(((k_39 != NULL) && (k_39 != n_39)))
              _fail(n_39);
            else
              k_39 = n_39;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = w_42;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm b_43;
    b_43 = t;
    {
      ATerm q_39 = NULL;
      ATerm r_39 = NULL;
      t = term_o_17;
      {
        t = get_config_0(t);
        {
          r_39 = t;
          if(((q_39 != NULL) && (q_39 != r_39)))
            _fail(r_39);
          else
            q_39 = r_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_39), term_k_27);
        t = geq_0(t);
      }
    }
    t = b_43;
    t = x_98(t);
    return(t);
  }
  t = try_1(t, d_8);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym__2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      if(((w_39 != NULL) && (w_39 != x_39)))
        _fail(x_39);
      else
        w_39 = x_39;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_89 (ATerm), ATerm l_89 (ATerm))
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  c_40 :
  if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
    {
      e_40 = ATgetFirst((ATermList) d_40);
      f_40 = (ATerm) ATgetNext((ATermList) d_40);
      {
        t = l_89(t);
        {
          ATerm g_8 (ATerm t)
          {
            ATerm i_40 = NULL;
            i_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_40), not_null(i_40));
              t = k_89(t);
            }
            return(t);
          }
          t = fetch_1(t, g_8);
        }
        t = not_null(f_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym__2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      {
        t = not_null(p_40);
        {
          ATerm u_40 (ATerm t)
          {
            ATerm c_43 = t;
            int d_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_40);
                ;
                LocalPopChoice(d_43);
              }
            else
              {
                t = c_43;
                {
                  ATerm i_43 = t;
                  int j_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = not_null(q_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_89, h_8);
                      t = u_40(t);
                      ;
                      LocalPopChoice(j_43);
                    }
                  else
                    {
                      t = i_43;
                      t = Cons_2(t, _id, u_40);
                    }
                }
              }
            return(t);
          }
          t = u_40(t);
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
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym__3))
    {
      a_41 = ATgetArgument(z_40, 0);
      b_41 = ATgetArgument(z_40, 1);
      c_41 = ATgetArgument(z_40, 2);
      {
        ATerm m_43;
        m_43 = t;
        {
          ATerm g_41 = NULL;
          ATerm h_41 = NULL,j_41 = NULL;
          ATerm i_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), not_null(b_41));
          {
            ATerm n_43 = t;
            int o_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(o_43);
              }
            else
              {
                t = n_43;
                t = (ATerm) ATempty;
              }
            {
              i_41 = t;
              if(((h_41 != NULL) && (h_41 != i_41)))
                _fail(i_41);
              else
                h_41 = i_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_41), not_null(c_41));
            {
              t = union_0(t);
              {
                j_41 = t;
                if(((g_41 != NULL) && (g_41 != j_41)))
                  _fail(j_41);
                else
                  g_41 = j_41;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_41), not_null(b_41), not_null(g_41));
            t = set_0(t);
          }
        }
        t = m_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym__2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        t = not_null(t_41);
        {
          ATerm k_8 (ATerm t)
          {
            ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
            a_42 = t;
            p_41 :
            if(match_cons(a_42, sym__2))
              {
                b_42 = ATgetArgument(a_42, 0);
                c_42 = ATgetArgument(a_42, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_41), not_null(b_42), not_null(c_42));
                  t = v_103(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_8);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm i_42 = NULL;
  ATerm j_42 = NULL;
  j_42 = t;
  if(((i_42 != NULL) && (i_42 != j_42)))
    _fail(j_42);
  else
    i_42 = j_42;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_42), (ATerm) ATinsert(ATempty, term_q_43));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  ATerm v_42 (ATerm t)
  {
    t = SSL_fclose(not_null(p_42));
    return(t);
  }
  p_42 = t;
  n_42 :
  if(match_cons(p_42, sym_Stream_1))
    {
      o_42 = ATgetArgument(p_42, 0);
      {
        ATerm r_43 = t;
        int s_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(o_42));
            ;
            LocalPopChoice(s_43);
          }
        else
          {
            t = r_43;
            t = v_42(t);
          }
      }
    }
  else
    {
      t = v_42(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym_Stream_1))
    {
      z_42 = ATgetArgument(y_42, 0);
      t = SSL_read_term_from_stream(not_null(z_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym__2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      {
        ATerm k_43 = NULL;
        t = SSL_fopen(not_null(g_43), not_null(h_43));
        {
          ATerm l_43 = NULL;
          l_43 = t;
          if(((k_43 != NULL) && (k_43 != l_43)))
            _fail(l_43);
          else
            k_43 = l_43;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_43));
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
  ATerm p_43 = NULL;
  p_43 = t;
  t = SSL_is_string(not_null(p_43));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm y_43 = NULL;
    y_43 = t;
    if(((v_43 != NULL) && (v_43 != y_43)))
      _fail(y_43);
    else
      v_43 = y_43;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_43));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm b_44 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm e_44 = NULL;
    e_44 = t;
    if(((b_44 != NULL) && (b_44 != e_44)))
      _fail(e_44);
    else
      b_44 = e_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_44));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm h_44 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm i_44 = NULL;
    i_44 = t;
    if(((h_44 != NULL) && (h_44 != i_44)))
      _fail(i_44);
    else
      h_44 = i_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_44));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm o_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(o_44, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(o_44, sym_stdin_0))
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
  ATerm a_45 = NULL;
  ATerm n_45 = NULL,o_45 = NULL;
  a_45 = t;
  {
    ATerm p_45 = NULL;
    ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
    t = not_null(a_45);
    {
      p_45 = t;
      {
        t = SSL_explode_term(not_null(p_45));
        {
          r_45 = t;
          v_44 :
          if(match_cons(r_45, sym__2))
            {
              s_45 = ATgetArgument(r_45, 0);
              t_45 = ATgetArgument(r_45, 1);
              y_44 :
              if(match_string(s_45, ""))
                {
                  z_44 :
                  if(((ATgetType(t_45) == AT_LIST) && !(ATisEmpty(t_45))))
                    {
                      u_45 = ATgetFirst((ATermList) t_45);
                      v_45 = (ATerm) ATgetNext((ATermList) t_45);
                      {
                        if(((o_45 != NULL) && (o_45 != u_45)))
                          _fail(u_45);
                        else
                          o_45 = u_45;
                        if(((n_45 != NULL) && (n_45 != v_45)))
                          _fail(v_45);
                        else
                          n_45 = v_45;
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
    t = not_null(o_45);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym__2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            {
              ATerm w_43 = t;
              int x_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_8 (ATerm t)
                  {
                    ATerm k_46 = NULL,l_46 = NULL;
                    k_46 = t;
                    b_46 :
                    if(match_cons(k_46, sym_Path_1))
                      {
                        l_46 = ATgetArgument(k_46, 0);
                        t = not_null(l_46);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_8, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(x_43);
                }
              else
                {
                  t = w_43;
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
  ATerm t_46 = NULL;
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_46 = NULL;
      ATerm s_46 = NULL;
      s_46 = t;
      if(((r_46 != NULL) && (r_46 != s_46)))
        _fail(s_46);
      else
        r_46 = s_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_46), term_c_44);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(a_44);
    }
  else
    {
      t = z_43;
      {
        ATerm o_8 (ATerm t)
        {
          t = term_d_44;
          return(t);
        }
        t = debug_1(t, o_8);
        _fail(t);
      }
    }
  {
    ATerm f_44;
    f_44 = t;
    {
      ATerm w_46 = NULL;
      t = read_from_stream_0(t);
      {
        w_46 = t;
        if(((t_46 != NULL) && (t_46 != w_46)))
          _fail(w_46);
        else
          t_46 = w_46;
      }
    }
    t = f_44;
    {
      t = fclose_0(t);
      t = not_null(t_46);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm b_47 = NULL,g_47 = NULL,h_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym__2))
    {
      g_47 = ATgetArgument(b_47, 0);
      h_47 = ATgetArgument(b_47, 1);
      t = SSL_access(not_null(g_47), not_null(h_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm q_47 = NULL;
  ATerm r_47 = NULL;
  r_47 = t;
  if(((q_47 != NULL) && (q_47 != r_47)))
    _fail(r_47);
  else
    q_47 = r_47;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), (ATerm) ATinsert(ATempty, term_g_44));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(k_44);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = j_44;
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_44 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_44;
              }
            {
              ATerm p_8 (ATerm t)
              {
                t = term_q_44;
                return(t);
              }
              t = debug_1(t, p_8);
            }
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
            {
              ATerm s_8 (ATerm t)
              {
                t = term_r_44;
                return(t);
              }
              t = debug_1(t, s_8);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm x_47 = NULL;
  ATerm z_47 = NULL;
  x_47 = t;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        t = term_s_44;
        return(t);
      }
      t = debug_1(t, w_8);
      return(t);
    }
    t = if_verbose5_1(t, t_8);
    {
      ATerm t_44 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_41, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_47)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_44;
        }
      {
        ATerm u_44;
        u_44 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_41, term_w_44, (ATerm) ATinsert(ATempty, not_null(x_47)));
          t = table_put_0(t);
        }
        t = u_44;
        {
          ATerm x_8 (ATerm t)
          {
            ATerm y_8 (ATerm t)
            {
              t = term_x_44;
              return(t);
            }
            t = debug_1(t, y_8);
            return(t);
          }
          t = if_verbose4_1(t, x_8);
          {
            t = read_repository_file_0(t);
            {
              ATerm z_8 (ATerm t)
              {
                ATerm g_9 (ATerm t)
                {
                  t = term_b_45;
                  return(t);
                }
                t = say_1(t, g_9);
                return(t);
              }
              t = if_verbose6_1(t, z_8);
              {
                ATerm a_48 = NULL;
                a_48 = t;
                if(((z_47 != NULL) && (z_47 != a_48)))
                  _fail(a_48);
                else
                  z_47 = a_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_41, not_null(z_47));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm h_9 (ATerm t)
                      {
                        ATerm i_9 (ATerm t)
                        {
                          t = term_c_45;
                          return(t);
                        }
                        t = say_1(t, i_9);
                        return(t);
                      }
                      t = if_verbose6_1(t, h_9);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_y_41, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_47)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm j_9 (ATerm t)
                            {
                              ATerm m_9 (ATerm t)
                              {
                                t = term_b_45;
                                return(t);
                              }
                              t = say_1(t, m_9);
                              return(t);
                            }
                            t = if_verbose4_1(t, j_9);
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
ATerm getenv_0 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  t = SSL_getenv(not_null(e_48));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_45;
      t = get_config_0(t);
      ;
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_45;
            t = getenv_0(t);
            ;
            LocalPopChoice(h_45);
          }
        else
          {
            t = g_45;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    ATerm q_9 (ATerm t)
    {
      t = term_j_45;
      return(t);
    }
    t = debug_1(t, q_9);
    return(t);
  }
  t = if_verbose5_1(t, n_9);
  {
    ATerm k_45;
    k_45 = t;
    {
      ATerm l_45 = t;
      int m_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_45;
          t = table_get_0(t);
          ;
          LocalPopChoice(m_45);
        }
      else
        {
          t = l_45;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = k_45;
    {
      ATerm r_9 (ATerm t)
      {
        ATerm u_9 (ATerm t)
        {
          t = term_w_45;
          return(t);
        }
        t = debug_1(t, u_9);
        return(t);
      }
      t = if_verbose5_1(t, r_9);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 (ATerm t)
      {
        ATerm y_9 (ATerm t)
        {
          t = term_z_45;
          return(t);
        }
        t = debug_1(t, y_9);
        return(t);
      }
      t = if_verbose5_1(t, v_9);
      {
        t = xtc_load_0(t);
        {
          ATerm a_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(c_46);
            }
          else
            {
              t = a_46;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_9 (ATerm t)
            {
              ATerm a_10 (ATerm t)
              {
                t = term_z_45;
                return(t);
              }
              t = debug_1(t, a_10);
              return(t);
            }
            t = if_verbose5_1(t, z_9);
          }
        }
      }
      ;
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      {
        ATerm i_48 = NULL;
        ATerm j_48 = NULL;
        j_48 = t;
        if(((i_48 != NULL) && (i_48 != j_48)))
          _fail(j_48);
        else
          i_48 = j_48;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_46), not_null(i_48)), term_d_46);
          {
            t = error_0(t);
            {
              ATerm f_10 (ATerm t)
              {
                t = term_y_41;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm g_10 (ATerm t)
                    {
                      t = term_f_46;
                      return(t);
                    }
                    t = debug_1(t, g_10);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, f_10);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym__2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      {
        ATerm u_48 = NULL;
        ATerm v_48 = NULL,x_48 = NULL;
        ATerm w_48 = NULL;
        t = not_null(q_48);
        {
          ATerm m_46 = t;
          int n_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(n_46);
            }
          else
            {
              t = m_46;
              t = (ATerm) ATempty;
            }
          {
            w_48 = t;
            if(((v_48 != NULL) && (v_48 != w_48)))
              _fail(w_48);
            else
              v_48 = w_48;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), not_null(v_48));
          {
            t = conc_0(t);
            {
              x_48 = t;
              if(((u_48 != NULL) && (u_48 != x_48)))
                _fail(x_48);
              else
                u_48 = x_48;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_40, not_null(q_48), not_null(u_48));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  g_49 = t;
  e_49 :
  if(match_string(g_49, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
        {
          h_49 = ATgetFirst((ATermList) g_49);
          i_49 = (ATerm) ATgetNext((ATermList) g_49);
          f_49 :
          if(((ATgetType(i_49) == AT_LIST) && !(ATisEmpty(i_49))))
            {
              j_49 = ATgetFirst((ATermList) i_49);
              k_49 = (ATerm) ATgetNext((ATermList) i_49);
              {
                ATerm o_49 = NULL;
                ATerm o_46;
                o_46 = t;
                {
                  t = not_null(h_49);
                  t = l_0(t);
                }
                t = o_46;
                {
                  ATerm p_49 = NULL;
                  t = not_null(j_49);
                  {
                    t = m_0(t);
                    {
                      p_49 = t;
                      if(((o_49 != NULL) && (o_49 != p_49)))
                        _fail(p_49);
                      else
                        o_49 = p_49;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_49)), not_null(o_49));
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
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t = SSL_string_to_int(not_null(u_49));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  ATerm p_46;
  p_46 = t;
  {
    ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
    b_50 = t;
    y_49 :
    if(match_cons(b_50, sym__2))
      {
        c_50 = ATgetArgument(b_50, 0);
        d_50 = ATgetArgument(b_50, 1);
        {
          if(((z_49 != NULL) && (z_49 != c_50)))
            _fail(c_50);
          else
            z_49 = c_50;
          {
            if(((a_50 != NULL) && (a_50 != d_50)))
              _fail(d_50);
            else
              a_50 = d_50;
            t = SSL_table_remove(not_null(z_49), not_null(a_50));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_46;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm h_50 = NULL,m_50 = NULL,n_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym__2))
    {
      m_50 = ATgetArgument(h_50, 0);
      n_50 = ATgetArgument(h_50, 1);
      {
        ATerm q_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(m_50);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_m_40, not_null(m_50));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(u_46);
          }
        else
          {
            t = q_46;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), not_null(n_50));
              t = set_config_0(t);
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
ATerm post_extend_config_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  x_50 :
  if(match_cons(y_50, sym__2))
    {
      z_50 = ATgetArgument(y_50, 0);
      a_51 = ATgetArgument(y_50, 1);
      {
        ATerm d_51 = NULL;
        ATerm e_51 = NULL,g_51 = NULL;
        ATerm f_51 = NULL;
        t = not_null(z_50);
        {
          ATerm v_46 = t;
          int x_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(x_46);
            }
          else
            {
              t = v_46;
              t = (ATerm) ATempty;
            }
          {
            f_51 = t;
            if(((e_51 != NULL) && (e_51 != f_51)))
              _fail(f_51);
            else
              e_51 = f_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_51), not_null(a_51));
          {
            t = conc_0(t);
            {
              g_51 = t;
              if(((d_51 != NULL) && (d_51 != g_51)))
                _fail(g_51);
              else
                d_51 = g_51;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_40, not_null(z_50), not_null(d_51));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sc_options_0 (ATerm t)
{
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 (ATerm t)
      {
        ATerm b_54 = NULL;
        b_54 = t;
        k_51 :
        if(!(match_string(b_54, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_10 (ATerm t)
      {
        ATerm c_54 = NULL;
        ATerm d_54 = NULL;
        d_54 = t;
        if(((c_54 != NULL) && (c_54 != d_54)))
          _fail(d_54);
        else
          c_54 = d_54;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_35, not_null(c_54));
          t = set_config_0(t);
        }
        t = term_d_23;
        return(t);
      }
      ATerm l_10 (ATerm t)
      {
        t = term_c_47;
        return(t);
      }
      t = ArgOption_3(t, h_10, k_10, l_10);
      ;
      LocalPopChoice(z_46);
    }
  else
    {
      t = y_46;
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 (ATerm t)
            {
              ATerm e_54 = NULL;
              e_54 = t;
              m_51 :
              if(!(match_string(e_54, "-o")))
                {
                  if(!(match_string(e_54, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_10 (ATerm t)
            {
              ATerm f_54 = NULL;
              ATerm g_54 = NULL;
              g_54 = t;
              if(((f_54 != NULL) && (f_54 != g_54)))
                _fail(g_54);
              else
                f_54 = g_54;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(f_54));
                t = set_config_0(t);
              }
              t = term_d_23;
              return(t);
            }
            ATerm t_10 (ATerm t)
            {
              t = term_f_47;
              return(t);
            }
            t = ArgOption_3(t, m_10, q_10, t_10);
            ;
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            {
              ATerm i_47 = t;
              int j_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_10 (ATerm t)
                  {
                    ATerm h_54 = NULL;
                    h_54 = t;
                    o_51 :
                    if(!(match_string(h_54, "-I")))
                      {
                        if(!(match_string(h_54, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_10 (ATerm t)
                  {
                    ATerm i_54 = NULL;
                    ATerm j_54 = NULL;
                    j_54 = t;
                    if(((i_54 != NULL) && (i_54 != j_54)))
                      _fail(j_54);
                    else
                      i_54 = j_54;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_54)), term_w_36));
                      t = extend_config_0(t);
                    }
                    t = term_d_23;
                    return(t);
                  }
                  ATerm w_10 (ATerm t)
                  {
                    t = term_k_47;
                    return(t);
                  }
                  t = ArgOption_3(t, u_10, v_10, w_10);
                  ;
                  LocalPopChoice(j_47);
                }
              else
                {
                  t = i_47;
                  {
                    ATerm l_47 = t;
                    int m_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_11 (ATerm t)
                        {
                          ATerm k_54 = NULL;
                          k_54 = t;
                          q_51 :
                          if(!(match_string(k_54, "--main")))
                            {
                              if(!(match_string(k_54, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm c_11 (ATerm t)
                        {
                          ATerm l_54 = NULL;
                          ATerm m_54 = NULL;
                          m_54 = t;
                          if(((l_54 != NULL) && (l_54 != m_54)))
                            _fail(m_54);
                          else
                            l_54 = m_54;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(l_54));
                            t = set_config_0(t);
                          }
                          t = term_d_23;
                          return(t);
                        }
                        ATerm d_11 (ATerm t)
                        {
                          t = term_n_47;
                          return(t);
                        }
                        t = ArgOption_3(t, b_11, c_11, d_11);
                        ;
                        LocalPopChoice(m_47);
                      }
                    else
                      {
                        t = l_47;
                        {
                          ATerm o_47 = t;
                          int p_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_11 (ATerm t)
                              {
                                ATerm n_54 = NULL;
                                n_54 = t;
                                f_52 :
                                if(!(match_string(n_54, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_11 (ATerm t)
                              {
                                ATerm o_54 = NULL;
                                ATerm p_54 = NULL;
                                p_54 = t;
                                if(((o_54 != NULL) && (o_54 != p_54)))
                                  _fail(p_54);
                                else
                                  o_54 = p_54;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATempty, not_null(o_54)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_d_23;
                                return(t);
                              }
                              ATerm n_11 (ATerm t)
                              {
                                t = term_s_47;
                                return(t);
                              }
                              t = ArgOption_3(t, e_11, h_11, n_11);
                              ;
                              LocalPopChoice(p_47);
                            }
                          else
                            {
                              t = o_47;
                              {
                                ATerm t_47 = t;
                                int u_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_11 (ATerm t)
                                    {
                                      ATerm q_54 = NULL;
                                      q_54 = t;
                                      h_52 :
                                      if(!(match_string(q_54, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_11 (ATerm t)
                                    {
                                      ATerm r_54 = NULL;
                                      ATerm s_54 = NULL;
                                      s_54 = t;
                                      if(((r_54 != NULL) && (r_54 != s_54)))
                                        _fail(s_54);
                                      else
                                        r_54 = s_54;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATempty, not_null(r_54)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_d_23;
                                      return(t);
                                    }
                                    ATerm q_11 (ATerm t)
                                    {
                                      t = term_v_47;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_11, p_11, q_11);
                                    ;
                                    LocalPopChoice(u_47);
                                  }
                                else
                                  {
                                    t = t_47;
                                    {
                                      ATerm w_47 = t;
                                      int y_47 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_11 (ATerm t)
                                          {
                                            ATerm t_54 = NULL;
                                            t_54 = t;
                                            l_52 :
                                            if(!(match_string(t_54, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_11 (ATerm t)
                                          {
                                            ATerm u_54 = NULL;
                                            ATerm v_54 = NULL;
                                            v_54 = t;
                                            if(((u_54 != NULL) && (u_54 != v_54)))
                                              _fail(v_54);
                                            else
                                              u_54 = v_54;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATinsert(ATempty, not_null(u_54)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_d_23;
                                            return(t);
                                          }
                                          ATerm x_11 (ATerm t)
                                          {
                                            t = term_b_48;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, v_11, w_11, x_11);
                                          ;
                                          LocalPopChoice(y_47);
                                        }
                                      else
                                        {
                                          t = w_47;
                                          {
                                            ATerm c_48 = t;
                                            int d_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm y_11 (ATerm t)
                                                {
                                                  ATerm w_54 = NULL;
                                                  w_54 = t;
                                                  n_52 :
                                                  if(!(match_string(w_54, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm z_11 (ATerm t)
                                                {
                                                  t = term_f_48;
                                                  t = set_config_0(t);
                                                  t = term_d_23;
                                                  return(t);
                                                }
                                                ATerm c_12 (ATerm t)
                                                {
                                                  t = term_g_48;
                                                  return(t);
                                                }
                                                t = Option_3(t, y_11, z_11, c_12);
                                                ;
                                                LocalPopChoice(d_48);
                                              }
                                            else
                                              {
                                                t = c_48;
                                                {
                                                  ATerm h_48 = t;
                                                  int k_48 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_12 (ATerm t)
                                                      {
                                                        ATerm x_54 = NULL;
                                                        x_54 = t;
                                                        r_52 :
                                                        if(!(match_string(x_54, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm i_12 (ATerm t)
                                                      {
                                                        t = term_l_48;
                                                        t = set_config_0(t);
                                                        t = term_d_23;
                                                        return(t);
                                                      }
                                                      ATerm j_12 (ATerm t)
                                                      {
                                                        t = term_m_48;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, h_12, i_12, j_12);
                                                      ;
                                                      LocalPopChoice(k_48);
                                                    }
                                                  else
                                                    {
                                                      t = h_48;
                                                      {
                                                        ATerm n_48 = t;
                                                        int s_48 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_12 (ATerm t)
                                                            {
                                                              ATerm y_54 = NULL;
                                                              y_54 = t;
                                                              s_52 :
                                                              if(!(match_string(y_54, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm l_12 (ATerm t)
                                                            {
                                                              t = term_t_48;
                                                              t = set_config_0(t);
                                                              t = term_d_23;
                                                              return(t);
                                                            }
                                                            ATerm m_12 (ATerm t)
                                                            {
                                                              t = term_y_48;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, k_12, l_12, m_12);
                                                            ;
                                                            LocalPopChoice(s_48);
                                                          }
                                                        else
                                                          {
                                                            t = n_48;
                                                            {
                                                              ATerm z_48 = t;
                                                              int a_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_12 (ATerm t)
                                                                  {
                                                                    ATerm z_54 = NULL;
                                                                    z_54 = t;
                                                                    y_52 :
                                                                    if(!(match_string(z_54, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm u_12 (ATerm t)
                                                                  {
                                                                    ATerm a_55 = NULL;
                                                                    ATerm b_55 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      b_55 = t;
                                                                      if(((a_55 != NULL) && (a_55 != b_55)))
                                                                        _fail(b_55);
                                                                      else
                                                                        a_55 = b_55;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_x_22, not_null(a_55));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_d_23;
                                                                    return(t);
                                                                  }
                                                                  ATerm v_12 (ATerm t)
                                                                  {
                                                                    t = term_b_49;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, p_12, u_12, v_12);
                                                                  ;
                                                                  LocalPopChoice(a_49);
                                                                }
                                                              else
                                                                {
                                                                  t = z_48;
                                                                  {
                                                                    ATerm c_49 = t;
                                                                    int d_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm w_12 (ATerm t)
                                                                        {
                                                                          ATerm c_55 = NULL;
                                                                          c_55 = t;
                                                                          e_53 :
                                                                          if(!(match_string(c_55, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm x_12 (ATerm t)
                                                                        {
                                                                          t = term_l_49;
                                                                          t = toggle_config_0(t);
                                                                          t = term_d_23;
                                                                          return(t);
                                                                        }
                                                                        ATerm y_12 (ATerm t)
                                                                        {
                                                                          t = term_m_49;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, w_12, x_12, y_12);
                                                                        ;
                                                                        LocalPopChoice(d_49);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_49;
                                                                        {
                                                                          ATerm n_49 = t;
                                                                          int q_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm z_12 (ATerm t)
                                                                              {
                                                                                ATerm l_55 = NULL;
                                                                                l_55 = t;
                                                                                f_53 :
                                                                                if(!(match_string(l_55, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm a_13 (ATerm t)
                                                                              {
                                                                                t = term_s_49;
                                                                                t = set_config_0(t);
                                                                                t = term_d_23;
                                                                                return(t);
                                                                              }
                                                                              ATerm b_13 (ATerm t)
                                                                              {
                                                                                t = term_t_49;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, z_12, a_13, b_13);
                                                                              ;
                                                                              LocalPopChoice(q_49);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_49;
                                                                              {
                                                                                ATerm v_49 = t;
                                                                                int w_49 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm c_13 (ATerm t)
                                                                                    {
                                                                                      ATerm m_55 = NULL;
                                                                                      m_55 = t;
                                                                                      g_53 :
                                                                                      if(!(match_string(m_55, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm d_13 (ATerm t)
                                                                                    {
                                                                                      ATerm o_55 = NULL;
                                                                                      ATerm p_55 = NULL;
                                                                                      p_55 = t;
                                                                                      if(((o_55 != NULL) && (o_55 != p_55)))
                                                                                        _fail(p_55);
                                                                                      else
                                                                                        o_55 = p_55;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_x_49, (ATerm) ATinsert(ATempty, not_null(o_55)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_d_23;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_13 (ATerm t)
                                                                                    {
                                                                                      t = term_e_50;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, c_13, d_13, h_13);
                                                                                    ;
                                                                                    LocalPopChoice(w_49);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_49;
                                                                                    {
                                                                                      ATerm f_50 = t;
                                                                                      int i_50 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm k_13 (ATerm t)
                                                                                          {
                                                                                            ATerm q_55 = NULL;
                                                                                            q_55 = t;
                                                                                            i_53 :
                                                                                            if(!(match_string(q_55, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm o_13 (ATerm t)
                                                                                          {
                                                                                            ATerm r_55 = NULL;
                                                                                            ATerm s_55 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              s_55 = t;
                                                                                              if(((r_55 != NULL) && (r_55 != s_55)))
                                                                                                _fail(s_55);
                                                                                              else
                                                                                                r_55 = s_55;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(r_55));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_d_23;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm q_13 (ATerm t)
                                                                                          {
                                                                                            t = term_j_50;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, k_13, o_13, q_13);
                                                                                          ;
                                                                                          LocalPopChoice(i_50);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_50;
                                                                                          {
                                                                                            ATerm k_50 = t;
                                                                                            int l_50 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_13 (ATerm t)
                                                                                                {
                                                                                                  ATerm t_55 = NULL;
                                                                                                  t_55 = t;
                                                                                                  k_53 :
                                                                                                  if(!(match_string(t_55, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(t_55, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_13 (ATerm t)
                                                                                                {
                                                                                                  t = term_o_50;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_d_23;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm t_13 (ATerm t)
                                                                                                {
                                                                                                  t = term_p_50;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, r_13, s_13, t_13);
                                                                                                ;
                                                                                                LocalPopChoice(l_50);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_50;
                                                                                                {
                                                                                                  ATerm q_50 = t;
                                                                                                  int r_50 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm u_13 (ATerm t)
                                                                                                      {
                                                                                                        ATerm u_55 = NULL;
                                                                                                        u_55 = t;
                                                                                                        l_53 :
                                                                                                        if(!(match_string(u_55, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(u_55, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_t_50;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_d_23;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm w_13 (ATerm t)
                                                                                                      {
                                                                                                        t = term_u_50;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, u_13, v_13, w_13);
                                                                                                      ;
                                                                                                      LocalPopChoice(r_50);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_50;
                                                                                                      {
                                                                                                        ATerm v_50 = t;
                                                                                                        int w_50 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm x_13 (ATerm t)
                                                                                                            {
                                                                                                              ATerm v_55 = NULL;
                                                                                                              v_55 = t;
                                                                                                              m_53 :
                                                                                                              if(!(match_string(v_55, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm a_14 (ATerm t)
                                                                                                            {
                                                                                                              t = term_c_51;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_d_23;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm b_14 (ATerm t)
                                                                                                            {
                                                                                                              t = term_h_51;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, x_13, a_14, b_14);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_50);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_50;
                                                                                                            {
                                                                                                              ATerm i_51 = t;
                                                                                                              int j_51 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm c_14 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm w_55 = NULL;
                                                                                                                    w_55 = t;
                                                                                                                    n_53 :
                                                                                                                    if(!(match_string(w_55, "-v")))
                                                                                                                      {
                                                                                                                        if(!(match_string(w_55, "--version")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm h_14 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_n_51;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_d_23;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm i_14 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_p_51;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, c_14, h_14, i_14);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(j_51);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_51;
                                                                                                                  {
                                                                                                                    ATerm j_14 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm x_55 = NULL;
                                                                                                                      x_55 = t;
                                                                                                                      o_53 :
                                                                                                                      if(!(match_string(x_55, "--warning")))
                                                                                                                        {
                                                                                                                          if(!(match_string(x_55, "-W")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm k_14 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm r_51 = t;
                                                                                                                      int s_51 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          ATerm e_56 = NULL;
                                                                                                                          ATerm t_51;
                                                                                                                          t_51 = t;
                                                                                                                          {
                                                                                                                            t = term_z_21;
                                                                                                                            {
                                                                                                                              t = get_config_0(t);
                                                                                                                              {
                                                                                                                                ATerm q_14 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm y_55 = NULL;
                                                                                                                                  y_55 = t;
                                                                                                                                  p_53 :
                                                                                                                                  if(!(match_string(y_55, "all")))
                                                                                                                                    {
                                                                                                                                      _fail(t);
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = Cons_2(t, q_14, Nil_0);
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                          t = t_51;
                                                                                                                          {
                                                                                                                            ATerm f_56 = NULL;
                                                                                                                            f_56 = t;
                                                                                                                            if(((e_56 != NULL) && (e_56 != f_56)))
                                                                                                                              _fail(f_56);
                                                                                                                            else
                                                                                                                              e_56 = f_56;
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATempty, not_null(e_56)));
                                                                                                                              t = set_config_0(t);
                                                                                                                            }
                                                                                                                          }
                                                                                                                          ;
                                                                                                                          LocalPopChoice(s_51);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_51;
                                                                                                                          {
                                                                                                                            ATerm g_56 = NULL;
                                                                                                                            ATerm h_56 = NULL;
                                                                                                                            h_56 = t;
                                                                                                                            if(((g_56 != NULL) && (g_56 != h_56)))
                                                                                                                              _fail(h_56);
                                                                                                                            else
                                                                                                                              g_56 = h_56;
                                                                                                                            {
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATinsert(ATempty, not_null(g_56)));
                                                                                                                              t = extend_config_0(t);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      t = term_d_23;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm p_14 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_u_51;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = ArgOption_3(t, j_14, k_14, p_14);
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
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  t = SSL_table_destroy(not_null(e_57));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_52), term_k_41), term_i_52), term_g_52), term_e_52), term_k_41), term_d_52), term_c_52), term_b_52), term_a_52), term_z_51), term_y_51), term_x_51), term_w_51), term_v_51);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm h_57 (ATerm t)
  {
    ATerm k_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_52);
      }
    else
      {
        t = k_52;
        t = Cons_2(t, f_85, h_57);
      }
    return(t);
  }
  t = h_57(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm t_57 = NULL,y_57 = NULL,z_57 = NULL;
  z_57 = t;
  s_57 :
  if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
    {
      t_57 = ATgetFirst((ATermList) z_57);
      y_57 = (ATerm) ATgetNext((ATermList) z_57);
      {
        ATerm l_58 = NULL;
        t = not_null(y_57);
        {
          ATerm o_52;
          o_52 = t;
          {
            ATerm m_58 = NULL,o_58 = NULL,q_58 = NULL;
            ATerm p_52;
            p_52 = t;
            {
              ATerm n_58 = NULL;
              t = j_0(t);
              {
                n_58 = t;
                if(((m_58 != NULL) && (m_58 != n_58)))
                  _fail(n_58);
                else
                  m_58 = n_58;
              }
            }
            t = p_52;
            {
              ATerm p_58 = NULL;
              t = not_null(t_57);
              {
                t = i_0(t);
                {
                  p_58 = t;
                  if(((o_58 != NULL) && (o_58 != p_58)))
                    _fail(p_58);
                  else
                    o_58 = p_58;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_58)), not_null(o_58));
                {
                  q_58 = t;
                  if(((l_58 != NULL) && (l_58 != q_58)))
                    _fail(q_58);
                  else
                    l_58 = q_58;
                }
              }
            }
          }
          t = o_52;
          {
            ATerm r_14 (ATerm t)
            {
              t = not_null(l_58);
              return(t);
            }
            t = reverse_acc_2(t, i_0, r_14);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_57) == AT_LIST) && ATisEmpty(z_57)))
        {
          {
            t = term_d_23;
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
  ATerm u_14 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_14);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm x_58 = NULL;
  ATerm y_58 = NULL;
  t = term_d_23;
  {
    t = g_0(t);
    {
      y_58 = t;
      if(((x_58 != NULL) && (x_58 != y_58)))
        _fail(y_58);
      else
        x_58 = y_58;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_52), not_null(x_58)), term_w_52), term_k_41), term_v_52), term_k_41), term_u_52), term_t_52), term_k_41), term_q_52);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm f_59 = NULL,g_59 = NULL;
  f_59 = t;
  e_59 :
  if(match_cons(f_59, sym_Program_1))
    {
      g_59 = ATgetArgument(f_59, 0);
      {
        ATerm j_59 = NULL,l_59 = NULL;
        ATerm k_59 = NULL;
        t = SSLgetAnnotations(not_null(f_59));
        {
          k_59 = t;
          if(((j_59 != NULL) && (j_59 != k_59)))
            _fail(k_59);
          else
            j_59 = k_59;
        }
        {
          t = not_null(g_59);
          {
            ATerm n_59 = NULL;
            t = f_70(t);
            {
              l_59 = t;
              {
                ATerm o_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_59)), not_null(j_59));
                {
                  o_59 = t;
                  if(((n_59 != NULL) && (n_59 != o_59)))
                    _fail(o_59);
                  else
                    n_59 = o_59;
                }
                t = not_null(n_59);
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
  ATerm x_59 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_59 = NULL;
      t = term_b_53;
      {
        t = get_config_0(t);
        {
          y_59 = t;
          if(((x_59 != NULL) && (x_59 != y_59)))
            _fail(y_59);
          else
            x_59 = y_59;
        }
      }
      ;
      LocalPopChoice(a_53);
    }
  else
    {
      t = z_52;
      {
        ATerm v_14 (ATerm t)
        {
          ATerm w_14 (ATerm t)
          {
            ATerm z_59 = NULL;
            z_59 = t;
            if(((x_59 != NULL) && (x_59 != z_59)))
              _fail(z_59);
            else
              x_59 = z_59;
            return(t);
          }
          t = Program_1(t, w_14);
          return(t);
        }
        t = option_defined_1(t, v_14);
      }
    }
  {
    ATerm x_14 (ATerm t)
    {
      ATerm y_14 (ATerm t)
      {
        t = not_null(x_59);
        return(t);
      }
      t = short_description_1(t, y_14);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_14);
    {
      t = term_c_53;
      {
        t = echo_0(t);
        {
          t = term_j_53;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_15 (ATerm t)
                {
                  ATerm a_60 = NULL;
                  ATerm b_60 = NULL;
                  b_60 = t;
                  if(((a_60 != NULL) && (a_60 != b_60)))
                    _fail(b_60);
                  else
                    a_60 = b_60;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_60)), term_q_53);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_15);
                {
                  ATerm h_15 (ATerm t)
                  {
                    ATerm c_60 = NULL;
                    ATerm d_60 = NULL;
                    ATerm i_15 (ATerm t)
                    {
                      t = not_null(x_59);
                      return(t);
                    }
                    t = long_description_1(t, i_15);
                    {
                      d_60 = t;
                      if(((c_60 != NULL) && (c_60 != d_60)))
                        _fail(d_60);
                      else
                        c_60 = d_60;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_60)), term_k_41);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_15);
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
  ATerm r_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(s_53);
    }
  else
    {
      t = r_53;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm n_60 = NULL,o_60 = NULL;
  n_60 = t;
  m_60 :
  if(match_cons(n_60, sym_Undefined_1))
    {
      o_60 = ATgetArgument(n_60, 0);
      {
        ATerm r_60 = NULL,t_60 = NULL;
        ATerm s_60 = NULL;
        t = SSLgetAnnotations(not_null(n_60));
        {
          s_60 = t;
          if(((r_60 != NULL) && (r_60 != s_60)))
            _fail(s_60);
          else
            r_60 = s_60;
        }
        {
          t = not_null(o_60);
          {
            ATerm v_60 = NULL;
            t = g_70(t);
            {
              t_60 = t;
              {
                ATerm w_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_60)), not_null(r_60));
                {
                  w_60 = t;
                  if(((v_60 != NULL) && (v_60 != w_60)))
                    _fail(w_60);
                  else
                    v_60 = w_60;
                }
                t = not_null(v_60);
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
  ATerm b_61 (ATerm t)
  {
    ATerm t_53 = t;
    int u_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_85, _id);
        ;
        LocalPopChoice(u_53);
      }
    else
      {
        t = t_53;
        t = Cons_2(t, _id, b_61);
      }
    return(t);
  }
  t = b_61(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_102 (ATerm))
{
  t = fetch_1(t, p_102);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,g_61 = NULL;
  d_61 = t;
  c_61 :
  if(((ATgetType(d_61) == AT_LIST) && ATisEmpty(d_61)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_61) == AT_LIST) && !(ATisEmpty(d_61))))
        {
          e_61 = ATgetFirst((ATermList) d_61);
          g_61 = (ATerm) ATgetNext((ATermList) d_61);
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
  ATerm v_53;
  v_53 = t;
  {
    ATerm j_61 = NULL;
    ATerm a_62 = NULL;
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
        {
          ATerm k_61 = NULL;
          ATerm l_61 = NULL;
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
          t = (ATerm) ATinsert(ATempty, not_null(k_61));
        }
      }
    {
      a_62 = t;
      if(((j_61 != NULL) && (j_61 != a_62)))
        _fail(a_62);
      else
        j_61 = a_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_19, not_null(j_61));
      t = printnl_0(t);
    }
  }
  t = v_53;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_b_53;
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
  ATerm y_53 = t;
  int z_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(z_53);
    }
  else
    {
      t = y_53;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_62 = NULL;
  o_62 = t;
  n_62 :
  if(match_cons(o_62, sym_Help_0))
    {
      ATerm z_62 = NULL,b_63 = NULL;
      ATerm a_54;
      a_54 = t;
      {
        ATerm a_63 = NULL;
        t = SSLgetAnnotations(not_null(o_62));
        {
          a_63 = t;
          if(((z_62 != NULL) && (z_62 != a_63)))
            _fail(a_63);
          else
            z_62 = a_63;
        }
      }
      t = a_54;
      {
        ATerm c_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_62));
        {
          c_63 = t;
          if(((b_63 != NULL) && (b_63 != c_63)))
            _fail(c_63);
          else
            b_63 = c_63;
        }
        t = not_null(b_63);
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
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 (ATerm t)
      {
        ATerm k_63 = NULL;
        k_63 = t;
        i_63 :
        if(!(match_string(k_63, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_15 (ATerm t)
      {
        t = term_g_55;
        t = set_config_0(t);
        return(t);
      }
      ATerm l_15 (ATerm t)
      {
        t = term_h_55;
        return(t);
      }
      t = Option_3(t, j_15, k_15, l_15);
      ;
      LocalPopChoice(e_55);
    }
  else
    {
      t = d_55;
      {
        ATerm m_15 (ATerm t)
        {
          ATerm l_63 = NULL;
          l_63 = t;
          j_63 :
          if(!(match_string(l_63, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_15 (ATerm t)
        {
          t = term_g_55;
          {
            t = set_config_0(t);
            {
              t = term_n_51;
              t = set_config_0(t);
            }
          }
          t = term_i_55;
          return(t);
        }
        ATerm u_15 (ATerm t)
        {
          t = term_j_55;
          return(t);
        }
        t = Option_3(t, m_15, t_15, u_15);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym__2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      t = SSL_table_get(not_null(p_63), not_null(q_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  x_63 = t;
  w_63 :
  if(match_cons(x_63, sym__3))
    {
      y_63 = ATgetArgument(x_63, 0);
      z_63 = ATgetArgument(x_63, 1);
      a_64 = ATgetArgument(x_63, 2);
      {
        ATerm k_55;
        k_55 = t;
        {
          ATerm e_64 = NULL;
          ATerm f_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), not_null(z_63));
          {
            ATerm n_55 = t;
            int z_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_55);
              }
            else
              {
                t = n_55;
                t = (ATerm) ATempty;
              }
            {
              f_64 = t;
              if(((e_64 != NULL) && (e_64 != f_64)))
                _fail(f_64);
              else
                e_64 = f_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_63), not_null(z_63), (ATerm) ATinsert(CheckATermList(not_null(e_64)), not_null(a_64)));
            t = table_put_0(t);
          }
        }
        t = k_55;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_103 (ATerm))
{
  ATerm j_64 = NULL;
  ATerm k_64 = NULL;
  t = term_d_23;
  {
    t = u_103(t);
    {
      k_64 = t;
      if(((j_64 != NULL) && (j_64 != k_64)))
        _fail(k_64);
      else
        j_64 = k_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_53, term_h_53, not_null(j_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_string(s_64, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_64) == AT_LIST) && !(ATisEmpty(s_64))))
        {
          t_64 = ATgetFirst((ATermList) s_64);
          u_64 = (ATerm) ATgetNext((ATermList) s_64);
          {
            ATerm x_64 = NULL;
            ATerm a_56;
            a_56 = t;
            {
              t = not_null(t_64);
              t = a_0(t);
            }
            t = a_56;
            {
              ATerm y_64 = NULL;
              t = term_d_23;
              {
                t = b_0(t);
                {
                  y_64 = t;
                  if(((x_64 != NULL) && (x_64 != y_64)))
                    _fail(y_64);
                  else
                    x_64 = y_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_64)), not_null(x_64));
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
  ATerm x_15 (ATerm t)
  {
    ATerm d_65 = NULL;
    d_65 = t;
    c_65 :
    if(!(match_string(d_65, "--help")))
      {
        if(!(match_string(d_65, "-h")))
          {
            if(!(match_string(d_65, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_15 (ATerm t)
  {
    t = term_t_50;
    {
      t = set_config_0(t);
      t = term_b_56;
    }
    return(t);
  }
  ATerm z_15 (ATerm t)
  {
    t = term_c_56;
    return(t);
  }
  t = Option_3(t, x_15, y_15, z_15);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  f_65 :
  if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
    {
      h_65 = ATgetFirst((ATermList) g_65);
      i_65 = (ATerm) ATgetNext((ATermList) g_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm d_56;
  d_56 = t;
  {
    ATerm a_16 (ATerm t)
    {
      t = term_i_56;
      t = s_103(t);
      return(t);
    }
    t = try_1(t, a_16);
  }
  t = d_56;
  {
    ATerm b_16 (ATerm t)
    {
      ATerm q_65 = NULL;
      ATerm j_56;
      j_56 = t;
      {
        ATerm o_65 = NULL;
        ATerm p_65 = NULL;
        p_65 = t;
        if(((o_65 != NULL) && (o_65 != p_65)))
          _fail(p_65);
        else
          o_65 = p_65;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_53, not_null(o_65));
          t = set_config_0(t);
        }
      }
      t = j_56;
      {
        ATerm r_65 = NULL;
        r_65 = t;
        if(((q_65 != NULL) && (q_65 != r_65)))
          _fail(r_65);
        else
          q_65 = r_65;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_65));
      }
      return(t);
    }
    ATerm g_16 (ATerm t)
    {
      ATerm k_56 = t;
      int l_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_56 = t;
          int n_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_56);
            }
          else
            {
              t = m_56;
              {
                t = s_103(t);
                t = Cons_2(t, _id, g_16);
              }
            }
          ;
          LocalPopChoice(l_56);
        }
      else
        {
          t = k_56;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_16, g_16);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm w_65 = NULL;
  ATerm o_56;
  o_56 = t;
  {
    t = term_p_56;
    t = table_put_0(t);
  }
  t = o_56;
  {
    ATerm h_16 (ATerm t)
    {
      ATerm q_56 = t;
      int r_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_103(t);
          ;
          LocalPopChoice(r_56);
        }
      else
        {
          t = q_56;
          {
            ATerm s_56 = t;
            int t_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(t_56);
              }
            else
              {
                t = s_56;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, h_16);
    {
      ATerm m_16 (ATerm t)
      {
        ATerm u_56 = t;
        int v_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_56;
            w_56 = t;
            {
              ATerm x_56 = t;
              int y_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_s_50;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_56);
                }
              else
                {
                  t = x_56;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = w_56;
            {
              t = system_usage_0(t);
              {
                t = term_m_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(v_56);
          }
        else
          {
            t = u_56;
            {
              ATerm z_56 = t;
              int a_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_57;
                  b_57 = t;
                  {
                    t = term_f_55;
                    t = get_config_0(t);
                  }
                  t = b_57;
                  {
                    t = system_about_0(t);
                    {
                      t = term_m_17;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(a_57);
                }
              else
                {
                  t = z_56;
                  {
                    ATerm n_16 (ATerm t)
                    {
                      ATerm o_16 (ATerm t)
                      {
                        ATerm x_65 = NULL;
                        x_65 = t;
                        if(((w_65 != NULL) && (w_65 != x_65)))
                          _fail(x_65);
                        else
                          w_65 = x_65;
                        return(t);
                      }
                      t = Undefined_1(t, o_16);
                      return(t);
                    }
                    t = option_defined_1(t, n_16);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_65)), term_c_57));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_y_25;
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
      t = try_1(t, m_16);
      {
        ATerm d_57;
        d_57 = t;
        {
          t = term_d_53;
          t = table_destroy_0(t);
        }
        t = d_57;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  ATerm f_57;
  f_57 = t;
  {
    ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL;
    e_66 = t;
    a_66 :
    if(match_cons(e_66, sym__3))
      {
        f_66 = ATgetArgument(e_66, 0);
        g_66 = ATgetArgument(e_66, 1);
        h_66 = ATgetArgument(e_66, 2);
        {
          if(((b_66 != NULL) && (b_66 != f_66)))
            _fail(f_66);
          else
            b_66 = f_66;
          {
            if(((c_66 != NULL) && (c_66 != g_66)))
              _fail(g_66);
            else
              c_66 = g_66;
            {
              if(((d_66 != NULL) && (d_66 != h_66)))
                _fail(h_66);
              else
                d_66 = h_66;
              t = SSL_table_put(not_null(b_66), not_null(c_66), not_null(d_66));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_57;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  l_66 = t;
  k_66 :
  if(match_cons(l_66, sym__2))
    {
      m_66 = ATgetArgument(l_66, 0);
      n_66 = ATgetArgument(l_66, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_40, not_null(m_66), not_null(n_66));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(i_57);
    }
  else
    {
      t = g_57;
      {
        ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
        t_66 = t;
        s_66 :
        if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
          {
            u_66 = ATgetFirst((ATermList) t_66);
            v_66 = (ATerm) ATgetNext((ATermList) t_66);
            {
              t = not_null(u_66);
              {
                ATerm p_16 (ATerm t)
                {
                  t = not_null(v_66);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_16);
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
  ATerm f_67 = NULL;
  ATerm h_67 = NULL;
  f_67 = t;
  {
    ATerm i_67 = NULL;
    ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
    t = not_null(f_67);
    {
      i_67 = t;
      {
        t = SSL_explode_term(not_null(i_67));
        {
          k_67 = t;
          d_67 :
          if(match_cons(k_67, sym__2))
            {
              l_67 = ATgetArgument(k_67, 0);
              m_67 = ATgetArgument(k_67, 1);
              e_67 :
              if(match_string(l_67, ""))
                {
                  if(((h_67 != NULL) && (h_67 != m_67)))
                    _fail(m_67);
                  else
                    h_67 = m_67;
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
      t = not_null(h_67);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_67 = NULL;
  u_67 = t;
  t_67 :
  if(((ATgetType(u_67) == AT_LIST) && ATisEmpty(u_67)))
    {
      {
        ATerm w_67 = NULL,y_67 = NULL;
        ATerm j_57;
        j_57 = t;
        {
          ATerm x_67 = NULL;
          t = SSLgetAnnotations(not_null(u_67));
          {
            x_67 = t;
            if(((w_67 != NULL) && (w_67 != x_67)))
              _fail(x_67);
            else
              w_67 = x_67;
          }
        }
        t = j_57;
        {
          ATerm z_67 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_67));
          {
            z_67 = t;
            if(((y_67 != NULL) && (y_67 != z_67)))
              _fail(z_67);
            else
              y_67 = z_67;
          }
          t = not_null(y_67);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm d_68 (ATerm t)
  {
    ATerm k_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_68);
        ;
        LocalPopChoice(l_57);
      }
    else
      {
        t = k_57;
        {
          t = Nil_0(t);
          t = u_85(t);
        }
      }
    return(t);
  }
  t = d_68(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym__2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      {
        t = not_null(h_68);
        {
          ATerm q_16 (ATerm t)
          {
            t = not_null(i_68);
            return(t);
          }
          t = at_end_1(t, q_16);
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
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
  s_68 = t;
  r_68 :
  if(match_cons(s_68, sym__2))
    {
      t_68 = ATgetArgument(s_68, 0);
      u_68 = ATgetArgument(s_68, 1);
      {
        ATerm y_68 = NULL,a_69 = NULL;
        ATerm z_68 = NULL;
        t = SSLgetAnnotations(not_null(s_68));
        {
          z_68 = t;
          if(((y_68 != NULL) && (y_68 != z_68)))
            _fail(z_68);
          else
            y_68 = z_68;
        }
        {
          t = not_null(t_68);
          {
            ATerm c_69 = NULL;
            t = f_63(t);
            {
              a_69 = t;
              {
                t = not_null(u_68);
                {
                  ATerm e_69 = NULL;
                  t = g_63(t);
                  {
                    c_69 = t;
                    {
                      ATerm f_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_69), not_null(c_69)), not_null(y_68));
                      {
                        f_69 = t;
                        if(((e_69 != NULL) && (e_69 != f_69)))
                          _fail(f_69);
                        else
                          e_69 = f_69;
                      }
                      t = not_null(e_69);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_69 = NULL;
  m_69 = t;
  t = SSL_implode_string(not_null(m_69));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  u_69 :
  if(((ATgetType(v_69) == AT_LIST) && !(ATisEmpty(v_69))))
    {
      w_69 = ATgetFirst((ATermList) v_69);
      x_69 = (ATerm) ATgetNext((ATermList) v_69);
      {
        ATerm b_70 = NULL,d_70 = NULL;
        ATerm c_70 = NULL;
        t = SSLgetAnnotations(not_null(v_69));
        {
          c_70 = t;
          if(((b_70 != NULL) && (b_70 != c_70)))
            _fail(c_70);
          else
            b_70 = c_70;
        }
        {
          t = not_null(w_69);
          {
            ATerm h_70 = NULL;
            t = o_64(t);
            {
              d_70 = t;
              {
                t = not_null(x_69);
                {
                  ATerm k_70 = NULL;
                  t = p_64(t);
                  {
                    h_70 = t;
                    {
                      ATerm l_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_70)), not_null(d_70)), not_null(b_70));
                      {
                        l_70 = t;
                        if(((k_70 != NULL) && (k_70 != l_70)))
                          _fail(l_70);
                        else
                          k_70 = l_70;
                      }
                      t = not_null(k_70);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm s_70 = NULL;
  s_70 = t;
  t = SSL_explode_string(not_null(s_70));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_70 (ATerm t)
        {
          ATerm q_57 = t;
          int r_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_70);
              ;
              LocalPopChoice(r_57);
            }
          else
            {
              t = q_57;
              {
                ATerm s_16 (ATerm t)
                {
                  ATerm w_70 = NULL;
                  w_70 = t;
                  v_70 :
                  if(!(match_int(w_70, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm v_16 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, s_16, v_16);
              }
            }
          return(t);
        }
        t = x_70(t);
        ;
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm init_sc_config_0 (ATerm t)
{
  ATerm u_57;
  u_57 = t;
  {
    ATerm l_71 = NULL,n_71 = NULL,p_71 = NULL,r_71 = NULL,v_71 = NULL,z_71 = NULL,d_72 = NULL,h_72 = NULL;
    t = term_w_57;
    {
      t = set_config_0(t);
      {
        t = term_x_57;
        {
          t = set_config_0(t);
          {
            t = term_a_58;
            {
              t = set_config_0(t);
              {
                ATerm b_58;
                b_58 = t;
                {
                  ATerm m_71 = NULL;
                  t = term_c_58;
                  {
                    t = xtc_find_path_0(t);
                    {
                      m_71 = t;
                      if(((l_71 != NULL) && (l_71 != m_71)))
                        _fail(m_71);
                      else
                        l_71 = m_71;
                    }
                  }
                }
                t = b_58;
                {
                  ATerm d_58;
                  d_58 = t;
                  {
                    ATerm o_71 = NULL;
                    t = term_e_58;
                    {
                      t = xtc_find_path_0(t);
                      {
                        o_71 = t;
                        if(((n_71 != NULL) && (n_71 != o_71)))
                          _fail(o_71);
                        else
                          n_71 = o_71;
                      }
                    }
                  }
                  t = d_58;
                  {
                    ATerm q_71 = NULL;
                    t = term_f_58;
                    {
                      t = xtc_find_path_0(t);
                      {
                        q_71 = t;
                        if(((p_71 != NULL) && (p_71 != q_71)))
                          _fail(q_71);
                        else
                          p_71 = q_71;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_71)), term_w_36), not_null(n_71)), term_w_36), not_null(l_71)), term_w_36));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATempty, term_h_58), term_g_58));
                          {
                            t = set_config_0(t);
                            {
                              ATerm i_58;
                              i_58 = t;
                              {
                                ATerm s_71 = NULL,u_71 = NULL;
                                ATerm t_71 = NULL;
                                t = term_j_58;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    t_71 = t;
                                    if(((s_71 != NULL) && (s_71 != t_71)))
                                      _fail(t_71);
                                    else
                                      s_71 = t_71;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), term_k_58);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      u_71 = t;
                                      if(((r_71 != NULL) && (r_71 != u_71)))
                                        _fail(u_71);
                                      else
                                        r_71 = u_71;
                                    }
                                  }
                                }
                              }
                              t = i_58;
                              {
                                ATerm r_58;
                                r_58 = t;
                                {
                                  ATerm w_71 = NULL,y_71 = NULL;
                                  ATerm x_71 = NULL;
                                  t = term_j_58;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      x_71 = t;
                                      if(((w_71 != NULL) && (w_71 != x_71)))
                                        _fail(x_71);
                                      else
                                        w_71 = x_71;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_71), term_k_58);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        y_71 = t;
                                        if(((v_71 != NULL) && (v_71 != y_71)))
                                          _fail(y_71);
                                        else
                                          v_71 = y_71;
                                      }
                                    }
                                  }
                                }
                                t = r_58;
                                {
                                  ATerm a_72 = NULL,c_72 = NULL;
                                  ATerm b_72 = NULL;
                                  t = term_s_58;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      b_72 = t;
                                      if(((a_72 != NULL) && (a_72 != b_72)))
                                        _fail(b_72);
                                      else
                                        a_72 = b_72;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), term_k_58);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        c_72 = t;
                                        if(((z_71 != NULL) && (z_71 != c_72)))
                                          _fail(c_72);
                                        else
                                          z_71 = c_72;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_71)), term_w_36), not_null(v_71)), term_w_36), not_null(r_71)), term_w_36));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm t_58;
                                        t_58 = t;
                                        {
                                          ATerm e_72 = NULL,g_72 = NULL;
                                          ATerm f_72 = NULL;
                                          t = term_j_58;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              f_72 = t;
                                              if(((e_72 != NULL) && (e_72 != f_72)))
                                                _fail(f_72);
                                              else
                                                e_72 = f_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_u_58);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                g_72 = t;
                                                if(((d_72 != NULL) && (d_72 != g_72)))
                                                  _fail(g_72);
                                                else
                                                  d_72 = g_72;
                                              }
                                            }
                                          }
                                        }
                                        t = t_58;
                                        {
                                          ATerm i_72 = NULL,k_72 = NULL;
                                          ATerm j_72 = NULL;
                                          t = term_s_58;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              j_72 = t;
                                              if(((i_72 != NULL) && (i_72 != j_72)))
                                                _fail(j_72);
                                              else
                                                i_72 = j_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_72), term_u_58);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                k_72 = t;
                                                if(((h_72 != NULL) && (h_72 != k_72)))
                                                  _fail(k_72);
                                                else
                                                  h_72 = k_72;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_59), term_a_59), not_null(h_72)), term_v_58), term_z_58), term_w_58), not_null(d_72)), term_v_58));
                                            {
                                              t = set_config_0(t);
                                              {
                                                t = term_c_59;
                                                t = set_config_0(t);
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
  t = u_57;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm w_16 (ATerm t)
      {
        ATerm z_72 = NULL;
        t = term_b_51;
        {
          t = get_config_0(t);
          {
            ATerm a_73 = NULL;
            t = term_d_59;
            {
              t = xtc_find_0(t);
              {
                a_73 = t;
                if(((z_72 != NULL) && (z_72 != a_73)))
                  _fail(a_73);
                else
                  z_72 = a_73;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), term_f_19);
              {
                t = copy_file_0(t);
                {
                  t = term_m_17;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, w_16);
      {
        ATerm x_16 (ATerm t)
        {
          t = term_l_51;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_m_17;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, x_16);
        {
          ATerm h_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_59;
              m_59 = t;
              {
                t = term_n_35;
                t = get_config_0(t);
              }
              t = m_59;
              ;
              LocalPopChoice(i_59);
            }
          else
            {
              t = h_59;
              {
                t = (ATerm) ATinsert(ATempty, term_p_59);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm z_16 (ATerm t)
              {
                ATerm q_59;
                q_59 = t;
                {
                  t = term_n_35;
                  {
                    t = get_config_0(t);
                    {
                      ATerm a_17 (ATerm t)
                      {
                        t = term_r_59;
                        return(t);
                      }
                      t = debug_1(t, a_17);
                    }
                  }
                }
                t = q_59;
                return(t);
              }
              t = if_verbose1_1(t, z_16);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm b_17 (ATerm t)
        {
          ATerm g_17 (ATerm t)
          {
            ATerm f_73 = NULL;
            ATerm g_73 = NULL;
            g_73 = t;
            if(((f_73 != NULL) && (f_73 != g_73)))
              _fail(g_73);
            else
              f_73 = g_73;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(CheckATermList(not_null(f_73)), term_u_59));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, g_17);
          return(t);
        }
        t = profile_p__2(t, b_17, compile_0);
        {
          ATerm h_17 (ATerm t)
          {
            ATerm h_73 = NULL;
            ATerm i_73 = NULL;
            t = run_time_0(t);
            {
              i_73 = t;
              if(((h_73 != NULL) && (h_73 != i_73)))
                _fail(i_73);
              else
                h_73 = i_73;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_59), not_null(h_73)), term_v_59));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, h_17);
          {
            t = term_m_17;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(t_59);
    }
  else
    {
      t = s_59;
      {
        ATerm j_73 = NULL;
        ATerm k_73 = NULL;
        t = run_time_0(t);
        {
          k_73 = t;
          if(((j_73 != NULL) && (j_73 != k_73)))
            _fail(k_73);
          else
            j_73 = k_73;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_59), not_null(j_73)), term_e_60));
          {
            t = printnl_0(t);
            {
              t = term_y_25;
              t = exit_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
