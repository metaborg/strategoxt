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
ATerm term_y_61;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_s_61;
ATerm term_q_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_t_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_k_60;
ATerm term_g_60;
ATerm term_b_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_u_59;
ATerm term_t_58;
ATerm term_g_58;
ATerm term_z_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_p_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_f_55;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_p_54;
ATerm term_n_54;
ATerm term_j_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_s_53;
ATerm term_q_53;
ATerm term_o_53;
ATerm term_m_53;
ATerm term_k_53;
ATerm term_i_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_s_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_a_51;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_x_49;
ATerm term_u_49;
ATerm term_j_49;
ATerm term_g_49;
ATerm term_b_49;
ATerm term_x_48;
ATerm term_r_48;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_p_47;
ATerm term_m_47;
ATerm term_h_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_y_46;
ATerm term_q_46;
ATerm term_m_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_t_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_f_45;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_s_43;
ATerm term_m_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_l_42;
ATerm term_f_42;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_h_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
void init_constant_terms (void)
{
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_w_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_28, term_m_27, term_m_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_28, term_y_18, term_v_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_28, term_e_25, term_y_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_29, term_c_29, term_d_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_29, term_m_29, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_29, term_s_29, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_29, term_w_29, term_y_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_30, term_b_30, term_c_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_30, term_j_30, term_q_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_30, term_v_30, term_y_30);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_31, term_c_31, term_d_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_31, term_m_31, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_31, term_u_31, term_v_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_31, term_e_32, term_f_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_32, term_i_32, term_j_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_32, term_q_32, term_r_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_32, term_u_32, term_v_32);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_33, term_m_33, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_33, term_q_33, term_r_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_34, term_c_34, term_d_34);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_34, term_g_34, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_34, term_k_34, term_l_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_34, term_w_34, term_x_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_34, term_a_35, term_b_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_35, term_i_35, term_j_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_35, term_m_35, term_n_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_35, term_u_35, term_v_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_36, term_c_36, term_d_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_b_44);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_g_46);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_f_25);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_f_25);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_f_25);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_f_25);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_f_25);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym__2, term_r_51, term_f_25);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_t_18);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym__2, term_l_52, term_f_25);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym__2, term_s_52, term_f_25);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym__2, term_z_52, term_f_25);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_l_55);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_f_25);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(sym__3, term_k_55, term_l_55, (ATerm) ATempty);
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_u_59);
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_m_27);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_t_18);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATempty);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_91 (ATerm), ATerm h_91 (ATerm));
ATerm crush_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_98 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm k_107 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm output_optimized_0 (ATerm);
ATerm stratego_of_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm desugar_case_0 (ATerm);
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
ATerm if_keep2_1 (ATerm, ATerm x_99 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm y_99 (ATerm));
ATerm AddMain_1 (ATerm, ATerm u_77 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm u_107 (ATerm));
ATerm add_main_0 (ATerm);
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm v_77 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm r_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm s_85 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm m_100 (ATerm), ATerm n_100 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm o_100 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm j_107 (ATerm));
ATerm assert_1 (ATerm, ATerm y_95 (ATerm));
ATerm obsolete_1 (ATerm, ATerm k_97 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_70 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm l_107 (ATerm), ATerm m_107 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm w_98 (ATerm));
ATerm basename_1 (ATerm, ATerm c_94 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_95 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_95 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm v_106 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm y_106 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_98 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm o_102 (ATerm), ATerm p_102 (ATerm));
ATerm debug_1 (ATerm, ATerm d_97 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_77 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm y_98 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm j_92 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_97 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm x_98 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm z_98 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm m_89 (ATerm), ATerm n_89 (ATerm));
ATerm union_1 (ATerm, ATerm i_89 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm x_103 (ATerm));
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
ATerm map_1 (ATerm, ATerm h_85 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm h_70 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_102 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_103 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_103 (ATerm));
ATerm parse_options_1 (ATerm, ATerm t_103 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_64 (ATerm), ATerm r_64 (ATerm));
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
        ATerm j_18;
        j_18 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = j_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_91 (ATerm), ATerm h_91 (ATerm))
{
  ATerm k_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_91(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = k_18;
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
                t = foldr_2(t, g_91, h_91);
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
                t = h_91(t);
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
ATerm crush_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
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
      t = foldr_2(t, z_94, a_95);
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
      t = term_t_18;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_98 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm u_18;
    u_18 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_v_18;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_y_18);
        t = geq_0(t);
      }
    }
    t = u_18;
    t = v_98(t);
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
            t = term_z_18;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_c_19;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_f_19;
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
                t = term_g_19;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_c_19), not_null(c_4)));
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
            t = term_k_19;
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
            t = term_p_19;
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
                t = term_q_19;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_c_19), not_null(r_4)), term_r_19));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(v_4));
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
  ATerm t_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_20;
      d_20 = t;
      {
        t = term_r_19;
        t = get_config_0(t);
      }
      t = d_20;
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = t_19;
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
              t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_f_20));
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
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_j_20);
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
            t = term_j_20;
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            {
              ATerm k_20 = t;
              int l_20 = stack_ptr;
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
                        ATerm o_20 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_20 = t;
                            int s_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(s_20);
                              }
                            else
                              {
                                t = q_20;
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
                            t = o_20;
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
                  LocalPopChoice(l_20);
                }
              else
                {
                  t = k_20;
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
ATerm xtc_transform_1 (ATerm t, ATerm k_107 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, k_107, e_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_u_20;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_v_20;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_w_20);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm j_21;
    j_21 = t;
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
    t = j_21;
    {
      ATerm b_7 = NULL;
      t = term_k_21;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_k_21);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_l_21)), not_null(w_6));
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
    t = term_q_21;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_7)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_r_21;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_l_21);
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
      t = term_s_21;
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
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(CheckATermList(not_null(o_7)), term_t_21));
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
                    t = term_u_21;
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
ATerm output_optimized_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm z_21;
    z_21 = t;
    {
      ATerm x_1 (ATerm t)
      {
        t = term_a_22;
        return(t);
      }
      t = debug_1(t, x_1);
      {
        ATerm b_22;
        b_22 = t;
        {
          t = term_c_22;
          t = get_config_0(t);
        }
        t = b_22;
        {
          ATerm y_1 (ATerm t)
          {
            ATerm w_7 = NULL;
            ATerm z_1 (ATerm t)
            {
              t = term_d_22;
              return(t);
            }
            t = get_outfile_1(t, z_1);
            {
              w_7 = t;
              if(((u_7 != NULL) && (u_7 != w_7)))
                _fail(w_7);
              else
                u_7 = w_7;
            }
            return(t);
          }
          t = copy_to_1(t, y_1);
          {
            ATerm a_2 (ATerm t)
            {
              t = term_j_22;
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm x_7 = NULL;
              ATerm y_7 = NULL;
              t = pass_verbose_0(t);
              {
                y_7 = t;
                if(((x_7 != NULL) && (x_7 != y_7)))
                  _fail(y_7);
                else
                  x_7 = y_7;
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_7)), term_k_22);
              return(t);
            }
            t = xtc_transform_2(t, a_2, b_2);
            {
              ATerm c_2 (ATerm t)
              {
                ATerm z_7 = NULL;
                ATerm e_2 (ATerm t)
                {
                  t = term_s_22;
                  return(t);
                }
                t = get_outfile_1(t, e_2);
                {
                  z_7 = t;
                  if(((v_7 != NULL) && (v_7 != z_7)))
                    _fail(z_7);
                  else
                    v_7 = z_7;
                }
                return(t);
              }
              t = copy_to_1(t, c_2);
              {
                ATerm f_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_t_22);
                  return(t);
                }
                t = say_1(t, f_2);
              }
            }
          }
        }
      }
    }
    t = z_21;
    return(t);
  }
  t = try_1(t, w_1);
  return(t);
}
ATerm stratego_of_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_u_22;
    return(t);
  }
  ATerm h_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, g_2, h_2);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = term_v_22;
    return(t);
  }
  ATerm j_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, i_2, j_2);
  return(t);
}
ATerm desugar_case_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_w_22;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm m_8 = NULL;
    ATerm n_8 = NULL;
    t = pass_verbose_0(t);
    {
      n_8 = t;
      if(((m_8 != NULL) && (m_8 != n_8)))
        _fail(n_8);
      else
        m_8 = n_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, k_2, l_2);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_c_23;
    return(t);
  }
  ATerm n_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, m_2, n_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = term_g_23;
    return(t);
  }
  ATerm p_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, o_2, p_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_h_23;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm y_8 = NULL;
    ATerm z_8 = NULL;
    t = pass_verbose_0(t);
    {
      z_8 = t;
      if(((y_8 != NULL) && (y_8 != z_8)))
        _fail(z_8);
      else
        y_8 = z_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, q_2, r_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_k_23;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm c_9 = NULL;
    ATerm d_9 = NULL;
    t = pass_verbose_0(t);
    {
      d_9 = t;
      if(((c_9 != NULL) && (c_9 != d_9)))
        _fail(d_9);
      else
        c_9 = d_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, s_2, t_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = term_n_23;
      return(t);
    }
    t = debug_1(t, y_2);
    return(t);
  }
  t = if_verbose2_1(t, u_2);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm d_3 (ATerm t)
      {
        ATerm g_9 = NULL;
        ATerm h_9 = NULL;
        h_9 = t;
        if(((g_9 != NULL) && (g_9 != h_9)))
          _fail(h_9);
        else
          g_9 = h_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_o_23));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, d_3);
      return(t);
    }
    ATerm c_3 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm e_3 (ATerm t)
        {
          ATerm p_23;
          p_23 = t;
          {
            ATerm r_23 = t;
            if((PushChoice() == 0))
              {
                t = term_s_23;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_23;
              }
          }
          t = p_23;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, e_3);
        {
          t = inline_0(t);
          {
            t = compile_match_0(t);
            {
              t = desugar_case_0(t);
              {
                t = optimize2_0(t);
                {
                  t = stratego_of_0(t);
                  t = output_optimized_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, z_2, c_3);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_t_23;
    return(t);
  }
  ATerm g_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, f_3, g_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_u_23;
    return(t);
  }
  ATerm m_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, j_3, m_3);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = term_v_23;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm u_9 = NULL,w_9 = NULL;
    ATerm w_23;
    w_23 = t;
    {
      ATerm v_9 = NULL;
      t = pass_verbose_0(t);
      {
        v_9 = t;
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
      }
    }
    t = w_23;
    {
      ATerm z_9 = NULL;
      t = term_x_23;
      {
        t = get_config_0(t);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm x_9 = NULL;
            ATerm y_9 = NULL;
            y_9 = t;
            if(((x_9 != NULL) && (x_9 != y_9)))
              _fail(y_9);
            else
              x_9 = y_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_9)), term_x_23);
            return(t);
          }
          t = map_1(t, s_3);
          {
            z_9 = t;
            if(((w_9 != NULL) && (w_9 != z_9)))
              _fail(z_9);
            else
              w_9 = z_9;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_9)), (ATerm) ATinsert(ATempty, term_l_21)), not_null(u_9));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, q_3, r_3);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    t = term_y_23;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    t = pass_verbose_0(t);
    {
      f_10 = t;
      if(((e_10 != NULL) && (e_10 != f_10)))
        _fail(f_10);
      else
        e_10 = f_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, t_3, w_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm i_10 = NULL;
    ATerm j_10 = NULL;
    t = pass_verbose_0(t);
    {
      j_10 = t;
      if(((i_10 != NULL) && (i_10 != j_10)))
        _fail(j_10);
      else
        i_10 = j_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, x_3, y_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm l_24;
    l_24 = t;
    {
      t = term_m_24;
      t = get_config_0(t);
    }
    t = l_24;
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          {
            t = (ATerm) ATinsert(ATempty, term_p_24);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm d_4 (ATerm t)
        {
          ATerm n_10 = NULL;
          ATerm i_4 (ATerm t)
          {
            t = term_q_24;
            return(t);
          }
          t = get_outfile_1(t, i_4);
          {
            n_10 = t;
            if(((m_10 != NULL) && (m_10 != n_10)))
              _fail(n_10);
            else
              m_10 = n_10;
          }
          return(t);
        }
        t = copy_to_1(t, d_4);
        {
          ATerm j_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_r_24);
            return(t);
          }
          t = say_1(t, j_4);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, z_3);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm s_24;
    s_24 = t;
    {
      ATerm q_10 = NULL;
      ATerm r_10 = NULL;
      t = term_t_24;
      {
        t = get_config_0(t);
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), term_y_18);
        t = geq_0(t);
      }
    }
    t = s_24;
    t = x_99(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm x_10 = NULL;
  ATerm l_4 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm v_10 = NULL;
    ATerm w_10 = NULL;
    t = pass_verbose_0(t);
    {
      w_10 = t;
      if(((v_10 != NULL) && (v_10 != w_10)))
        _fail(w_10);
      else
        v_10 = w_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(v_10)), term_l_21);
    return(t);
  }
  t = xtc_transform_2(t, l_4, m_4);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm y_10 = NULL;
        ATerm s_4 (ATerm t)
        {
          t = term_b_25;
          return(t);
        }
        t = get_outfile_1(t, s_4);
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        return(t);
      }
      t = copy_to_1(t, o_4);
      {
        ATerm z_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_10)), term_c_25);
          return(t);
        }
        t = say_1(t, z_4);
      }
      return(t);
    }
    t = if_keep2_1(t, n_4);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm d_25;
    d_25 = t;
    {
      ATerm c_11 = NULL;
      ATerm d_11 = NULL;
      t = term_t_24;
      {
        t = get_config_0(t);
        {
          d_11 = t;
          if(((c_11 != NULL) && (c_11 != d_11)))
            _fail(d_11);
          else
            c_11 = d_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_e_25);
        t = geq_0(t);
      }
    }
    t = d_25;
    t = y_99(t);
    return(t);
  }
  t = try_1(t, a_5);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Specification_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm l_11 = NULL;
        ATerm m_11 = NULL;
        t = term_f_25;
        {
          t = u_77(t);
          {
            m_11 = t;
            if(((l_11 != NULL) && (l_11 != m_11)))
              _fail(m_11);
            else
              l_11 = m_11;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(j_11)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_25, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_11)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm u_107 (ATerm))
{
  t = read_from_0(t);
  {
    t = u_107(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm h_25;
    h_25 = t;
    {
      ATerm s_11 = NULL;
      t = term_l_25;
      {
        t = get_config_0(t);
        {
          s_11 = t;
          {
            if(((r_11 != NULL) && (r_11 != s_11)))
              _fail(s_11);
            else
              r_11 = s_11;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  t = term_m_25;
                  return(t);
                }
                t = debug_1(t, d_5);
                return(t);
              }
              t = if_verbose2_1(t, c_5);
            }
          }
        }
      }
    }
    t = h_25;
    {
      ATerm g_5 (ATerm t)
      {
        ATerm h_5 (ATerm t)
        {
          t = not_null(r_11);
          return(t);
        }
        t = AddMain_1(t, h_5);
        return(t);
      }
      t = xtc_io_transform_1(t, g_5);
    }
    return(t);
  }
  t = try_1(t, b_5);
  {
    ATerm m_5 (ATerm t)
    {
      ATerm n_5 (ATerm t)
      {
        ATerm u_11 = NULL;
        ATerm o_5 (ATerm t)
        {
          t = term_q_25;
          return(t);
        }
        t = get_outfile_1(t, o_5);
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
        return(t);
      }
      t = copy_to_1(t, n_5);
      {
        ATerm p_5 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), term_t_25);
          return(t);
        }
        t = say_1(t, p_5);
      }
      return(t);
    }
    t = if_keep3_1(t, m_5);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm c_12 = NULL,d_12 = NULL;
  a_12 = t;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm u_25;
      u_25 = t;
      {
        ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
        t = term_x_25;
        {
          t = table_get_0(t);
          {
            e_12 = t;
            z_11 :
            if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
              {
                f_12 = ATgetFirst((ATermList) e_12);
                g_12 = (ATerm) ATgetNext((ATermList) e_12);
                {
                  if(((d_12 != NULL) && (d_12 != f_12)))
                    _fail(f_12);
                  else
                    d_12 = f_12;
                  {
                    if(((c_12 != NULL) && (c_12 != g_12)))
                      _fail(g_12);
                    else
                      c_12 = g_12;
                    {
                      t = not_null(d_12);
                      {
                        ATerm r_5 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, r_5);
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
      t = u_25;
      {
        ATerm s_5 (ATerm t)
        {
          t = term_v_25;
          return(t);
        }
        t = end_scope_1(t, s_5);
      }
      return(t);
    }
    t = repeat_1(t, q_5);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm a_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_19;
        t = get_config_0(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = a_26;
        t = term_j_20;
      }
    return(t);
  }
  t = copy_to_1(t, u_5);
  {
    t = term_t_18;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm l_12 = NULL,n_12 = NULL;
  ATerm g_26;
  g_26 = t;
  {
    ATerm m_12 = NULL;
    t = v_77(t);
    {
      m_12 = t;
      if(((l_12 != NULL) && (l_12 != m_12)))
        _fail(m_12);
      else
        l_12 = m_12;
    }
  }
  t = g_26;
  {
    ATerm o_12 = NULL;
    t = term_h_26;
    {
      t = get_config_0(t);
      {
        o_12 = t;
        if(((n_12 != NULL) && (n_12 != o_12)))
          _fail(o_12);
        else
          n_12 = o_12;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), not_null(l_12));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm v_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_stderr_0))
    {
      ATerm x_12 = NULL,z_12 = NULL;
      ATerm i_26;
      i_26 = t;
      {
        ATerm y_12 = NULL;
        t = SSLgetAnnotations(not_null(v_12));
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
      }
      t = i_26;
      {
        ATerm a_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(x_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        t = not_null(z_12);
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
  ATerm i_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_stdout_0))
    {
      ATerm k_13 = NULL,m_13 = NULL;
      ATerm m_26;
      m_26 = t;
      {
        ATerm l_13 = NULL;
        t = SSLgetAnnotations(not_null(i_13));
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
      }
      t = m_26;
      {
        ATerm n_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(k_13));
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
        t = not_null(m_13);
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
  ATerm z_13 = NULL,a_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym_FILE_1))
    {
      a_14 = ATgetArgument(z_13, 0);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_14 = NULL;
            ATerm d_14 = NULL;
            t = q_0(t);
            {
              d_14 = t;
              {
                if(((c_14 != NULL) && (c_14 != d_14)))
                  _fail(d_14);
                else
                  c_14 = d_14;
                {
                  ATerm t_26 = t;
                  int u_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(u_26);
                    }
                  else
                    {
                      t = t_26;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(c_14));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_14));
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm v_26 = t;
              int w_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_14 = NULL;
                  ATerm g_14 = NULL;
                  t = q_0(t);
                  {
                    g_14 = t;
                    {
                      if(((f_14 != NULL) && (f_14 != g_14)))
                        _fail(g_14);
                      else
                        f_14 = g_14;
                      {
                        ATerm x_26 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_27 = t;
                            int b_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(b_27);
                              }
                            else
                              {
                                t = a_27;
                                {
                                  ATerm c_27 = t;
                                  int d_27 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(d_27);
                                    }
                                  else
                                    {
                                      t = c_27;
                                      {
                                        ATerm h_14 = NULL;
                                        h_14 = t;
                                        if(((a_14 != NULL) && (a_14 != h_14)))
                                          _fail(h_14);
                                        else
                                          a_14 = h_14;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = x_26;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(f_14));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_14));
                  ;
                  LocalPopChoice(w_26);
                }
              else
                {
                  t = v_26;
                  {
                    ATerm j_14 = NULL;
                    t = q_0(t);
                    {
                      j_14 = t;
                      if(((a_14 != NULL) && (a_14 != j_14)))
                        _fail(j_14);
                      else
                        a_14 = j_14;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_14));
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
  ATerm s_14 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm f_27;
    f_27 = t;
    {
      t = term_g_27;
      t = get_config_0(t);
    }
    t = f_27;
    {
      ATerm w_5 (ATerm t)
      {
        ATerm t_14 = NULL;
        ATerm a_6 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = get_outfile_1(t, a_6);
        {
          t_14 = t;
          if(((s_14 != NULL) && (s_14 != t_14)))
            _fail(t_14);
          else
            s_14 = t_14;
        }
        return(t);
      }
      t = copy_to_1(t, w_5);
      {
        ATerm i_27;
        i_27 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_j_27);
          t = echo_0(t);
        }
        t = i_27;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, v_5);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm y_14 = NULL,a_15 = NULL;
  ATerm z_14 = NULL;
  t = term_t_24;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = term_m_27;
      }
    {
      z_14 = t;
      if(((y_14 != NULL) && (y_14 != z_14)))
        _fail(z_14);
      else
        y_14 = z_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), term_m_27);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          a_15 = t;
          if(((x_14 != NULL) && (x_14 != a_15)))
            _fail(a_15);
          else
            x_14 = a_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_t_24);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm g_15 = NULL,i_15 = NULL;
  ATerm h_15 = NULL;
  t = term_v_18;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = term_m_27;
      }
    {
      h_15 = t;
      if(((g_15 != NULL) && (g_15 != h_15)))
        _fail(h_15);
      else
        g_15 = h_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), term_m_27);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_15 = t;
          if(((f_15 != NULL) && (f_15 != i_15)))
            _fail(i_15);
          else
            f_15 = i_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_15)), term_v_18);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm m_15 = NULL;
  ATerm n_15 = NULL;
  ATerm p_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_19;
      t = get_config_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = p_27;
      {
        t = term_h_26;
        t = get_config_0(t);
      }
    }
  {
    n_15 = t;
    if(((m_15 != NULL) && (m_15 != n_15)))
      _fail(n_15);
    else
      m_15 = n_15;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), term_w_27);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_stdin_0))
    {
      ATerm w_15 = NULL;
      ATerm x_15 = NULL;
      t = term_x_27;
      {
        t = ReadFromFile_0(t);
        {
          x_15 = t;
          if(((w_15 != NULL) && (w_15 != x_15)))
            _fail(x_15);
          else
            w_15 = x_15;
        }
      }
      t = not_null(w_15);
    }
  else
    {
      if(match_cons(u_15, sym_FILE_1))
        {
          v_15 = ATgetArgument(u_15, 0);
          {
            ATerm z_15 = NULL;
            ATerm a_16 = NULL;
            t = not_null(v_15);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  a_16 = t;
                  if(((z_15 != NULL) && (z_15 != a_16)))
                    _fail(a_16);
                  else
                    z_15 = a_16;
                }
              }
            }
            t = not_null(z_15);
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
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  j_16 = t;
  h_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      m_16 = ATgetArgument(j_16, 1);
      i_16 :
      if(match_cons(k_16, sym_Stream_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          {
            ATerm p_16 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(l_16), not_null(m_16));
            {
              ATerm q_16 = NULL;
              q_16 = t;
              if(((p_16 != NULL) && (p_16 != q_16)))
                _fail(q_16);
              else
                p_16 = q_16;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_16));
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
ATerm WriteToFile_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(match_cons(x_16, sym__2))
    {
      y_16 = ATgetArgument(x_16, 0);
      z_16 = ATgetArgument(x_16, 1);
      {
        ATerm c_17 = NULL,e_17 = NULL;
        t = not_null(y_16);
        {
          ATerm d_17 = NULL;
          d_17 = t;
          if(((c_17 != NULL) && (c_17 != d_17)))
            _fail(d_17);
          else
            c_17 = d_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_y_27);
            {
              t = open_stream_0(t);
              {
                ATerm f_17 = NULL;
                f_17 = t;
                if(((e_17 != NULL) && (e_17 != f_17)))
                  _fail(f_17);
                else
                  e_17 = f_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), not_null(z_16));
                  {
                    t = r_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(z_16);
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
  ATerm l_17 = NULL;
  ATerm n_17 = NULL;
  l_17 = t;
  {
    ATerm o_17 = NULL;
    t = xtc_new_file_0(t);
    {
      o_17 = t;
      {
        if(((n_17 != NULL) && (n_17 != o_17)))
          _fail(o_17);
        else
          n_17 = o_17;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(l_17));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(n_17);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_17));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, s_107, t_107);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_close_file(not_null(s_17));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      t = SSL_execvp(not_null(y_17), not_null(z_17));
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
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_int_to_string(not_null(e_18));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_UnknownSignal_1))
    {
      n_18 = ATgetArgument(m_18, 0);
      {
        ATerm r_18 = NULL;
        ATerm s_18 = NULL;
        t = not_null(n_18);
        {
          t = int_to_string_0(t);
          {
            s_18 = t;
            if(((r_18 != NULL) && (r_18 != s_18)))
              _fail(s_18);
            else
              r_18 = s_18;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_28), not_null(r_18)), term_z_27);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(m_18, sym_Signal_3))
        {
          n_18 = ATgetArgument(m_18, 0);
          o_18 = ATgetArgument(m_18, 1);
          p_18 = ATgetArgument(m_18, 2);
          {
            ATerm w_18 = NULL;
            ATerm x_18 = NULL;
            t = not_null(o_18);
            {
              t = int_to_string_0(t);
              {
                x_18 = t;
                if(((w_18 != NULL) && (w_18 != x_18)))
                  _fail(x_18);
                else
                  w_18 = x_18;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_18)), term_e_28), not_null(w_18)), term_d_28), not_null(n_18));
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
ATerm fetch_elem_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm d_19 = NULL;
  ATerm c_6 (ATerm t)
  {
    ATerm e_19 = NULL;
    t = s_85(t);
    {
      e_19 = t;
      if(((d_19 != NULL) && (d_19 != e_19)))
        _fail(e_19);
      else
        d_19 = e_19;
    }
    return(t);
  }
  t = fetch_1(t, c_6);
  t = not_null(d_19);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_36), term_w_35), term_o_35), term_k_35), term_g_35), term_y_34), term_m_34), term_i_34), term_e_34), term_a_34), term_o_33), term_k_33), term_s_32), term_o_32), term_g_32), term_w_31), term_o_31), term_k_31), term_z_30), term_r_30), term_h_30), term_z_29), term_u_29), term_q_29), term_e_29), term_z_28), term_w_28), term_r_28);
        {
          ATerm g_6 (ATerm t)
          {
            ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
            l_19 = t;
            i_19 :
            if(match_cons(l_19, sym_Signal_3))
              {
                m_19 = ATgetArgument(l_19, 0);
                n_19 = ATgetArgument(l_19, 1);
                o_19 = ATgetArgument(l_19, 2);
                if(((j_19 != NULL) && (j_19 != n_19)))
                  _fail(n_19);
                else
                  j_19 = n_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, g_6);
        }
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(j_19));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm f_36;
  f_36 = t;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
      v_19 = t;
      u_19 :
      if(match_cons(v_19, sym_WaitStatus_3))
        {
          w_19 = ATgetArgument(v_19, 0);
          x_19 = ATgetArgument(v_19, 1);
          y_19 = ATgetArgument(v_19, 2);
          {
            ATerm b_20 = NULL;
            t = not_null(x_19);
            {
              ATerm g_36 = t;
              if((PushChoice() == 0))
                {
                  ATerm a_20 = NULL;
                  a_20 = t;
                  s_19 :
                  if(!(match_int(a_20, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_36;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm c_20 = NULL;
                    c_20 = t;
                    if(((b_20 != NULL) && (b_20 != c_20)))
                      _fail(c_20);
                    else
                      b_20 = c_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_20)), term_h_36));
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
    t = try_1(t, i_6);
  }
  t = f_36;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  t = SSL_waitpid(not_null(g_20));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm m_100 (ATerm), ATerm n_100 (ATerm))
{
  ATerm n_20 = NULL;
  ATerm p_20 = NULL;
  n_20 = t;
  {
    t = fork_0(t);
    {
      p_20 = t;
      {
        ATerm j_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = NULL;
            r_20 = t;
            m_20 :
            if(match_int(r_20, 0))
              {
                t = not_null(n_20);
                t = m_100(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(m_36);
          }
        else
          {
            t = j_36;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), not_null(n_20));
              t = n_100(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm a_21 = NULL;
  ATerm j_6 (ATerm t)
  {
    ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
    b_21 = t;
    z_20 :
    if(match_cons(b_21, sym__2))
      {
        c_21 = ATgetArgument(b_21, 0);
        d_21 = ATgetArgument(b_21, 1);
        {
          ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
          if(((a_21 != NULL) && (a_21 != d_21)))
            _fail(d_21);
          else
            a_21 = d_21;
          {
            t = not_null(c_21);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  f_21 = t;
                  x_20 :
                  if(match_cons(f_21, sym_WaitStatus_3))
                    {
                      g_21 = ATgetArgument(f_21, 0);
                      h_21 = ATgetArgument(f_21, 1);
                      i_21 = ATgetArgument(f_21, 2);
                      y_20 :
                      if(match_int(g_21, 0))
                        {
                          t = not_null(a_21);
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
  t = fork_2(t, o_100, j_6);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), not_null(p_21));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, k_6);
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
ATerm xtc_command_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm v_21 = NULL;
  ATerm n_36;
  n_36 = t;
  {
    ATerm w_21 = NULL;
    t = j_107(t);
    {
      t = xtc_find_warning_0(t);
      {
        w_21 = t;
        if(((v_21 != NULL) && (v_21 != w_21)))
          _fail(w_21);
        else
          v_21 = w_21;
      }
    }
  }
  t = n_36;
  {
    ATerm o_36;
    o_36 = t;
    {
      ATerm x_21 = NULL;
      ATerm y_21 = NULL;
      y_21 = t;
      if(((x_21 != NULL) && (x_21 != y_21)))
        _fail(y_21);
      else
        x_21 = y_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), not_null(x_21));
        t = call_0(t);
      }
    }
    t = o_36;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym__2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      {
        ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
        ATerm t_36;
        t_36 = t;
        {
          ATerm o_22 = NULL;
          ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
          t = y_95(t);
          {
            o_22 = t;
            {
              if(((l_22 != NULL) && (l_22 != o_22)))
                _fail(o_22);
              else
                l_22 = o_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_22), not_null(h_22), not_null(i_22));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_36 = t;
                    int x_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), term_w_25);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(x_36);
                      }
                    else
                      {
                        t = u_36;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_22 = t;
                      e_22 :
                      if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                        {
                          q_22 = ATgetFirst((ATermList) p_22);
                          r_22 = (ATerm) ATgetNext((ATermList) p_22);
                          {
                            if(((m_22 != NULL) && (m_22 != q_22)))
                              _fail(q_22);
                            else
                              m_22 = q_22;
                            {
                              if(((n_22 != NULL) && (n_22 != r_22)))
                                _fail(r_22);
                              else
                                n_22 = r_22;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_22), term_w_25, (ATerm) ATinsert(CheckATermList(not_null(n_22)), (ATerm) ATinsert(CheckATermList(not_null(m_22)), not_null(h_22))));
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
        t = t_36;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm y_36;
  y_36 = t;
  {
    t = k_97(t);
    {
      ATerm l_6 (ATerm t)
      {
        t = term_b_37;
        return(t);
      }
      t = debug_1(t, l_6);
    }
  }
  t = y_36;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  ATerm i_23 (ATerm t)
  {
    ATerm c_37 = t;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
        d_23 = t;
        x_22 :
        if(match_cons(d_23, sym__2))
          {
            e_23 = ATgetArgument(d_23, 0);
            f_23 = ATgetArgument(d_23, 1);
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
        t = c_37;
      }
    {
      ATerm m_6 (ATerm t)
      {
        t = term_d_37;
        return(t);
      }
      t = obsolete_1(t, m_6);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_22), term_y_27);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm j_23 (ATerm t)
  {
    t = SSL_open_file(not_null(a_23), not_null(b_23));
    return(t);
  }
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      {
        ATerm e_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_23(t);
            ;
            LocalPopChoice(g_37);
          }
        else
          {
            t = e_37;
            t = j_23(t);
          }
      }
    }
  else
    {
      t = i_23(t);
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
  ATerm l_23 = NULL;
  ATerm m_23 = NULL;
  t = term_f_25;
  {
    t = new_0(t);
    {
      m_23 = t;
      if(((l_23 != NULL) && (l_23 != m_23)))
        _fail(m_23);
      else
        l_23 = m_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), term_h_37);
    {
      t = conc_strings_0(t);
      {
        ATerm n_6 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, n_6);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm q_23 = NULL;
  t = new_file_0(t);
  {
    q_23 = t;
    {
      ATerm i_37;
      i_37 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_y_27);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_f_25);
            {
              ATerm o_6 (ATerm t)
              {
                t = term_v_25;
                return(t);
              }
              t = assert_1(t, o_6);
            }
          }
        }
      }
      t = i_37;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_stdin_0))
    {
      ATerm c_24 = NULL;
      ATerm d_24 = NULL;
      ATerm e_24 = NULL;
      t = xtc_new_file_0(t);
      {
        d_24 = t;
        {
          if(((c_24 != NULL) && (c_24 != d_24)))
            _fail(d_24);
          else
            c_24 = d_24;
          {
            ATerm f_24 = NULL;
            t = p_0(t);
            {
              f_24 = t;
              if(((e_24 != NULL) && (e_24 != f_24)))
                _fail(f_24);
              else
                e_24 = f_24;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_24)), term_c_19));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(c_24);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_24));
    }
  else
    {
      if(match_cons(a_24, sym_FILE_1))
        {
          b_24 = ATgetArgument(a_24, 0);
          {
            ATerm h_24 = NULL;
            ATerm i_24 = NULL;
            t = not_null(b_24);
            {
              ATerm j_24 = NULL;
              t = xtc_new_file_0(t);
              {
                i_24 = t;
                {
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                  {
                    ATerm k_24 = NULL;
                    t = p_0(t);
                    {
                      k_24 = t;
                      if(((j_24 != NULL) && (j_24 != k_24)))
                        _fail(k_24);
                      else
                        j_24 = k_24;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_24)), term_c_19), not_null(b_24)), term_j_37));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(h_24);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_24));
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
  ATerm v_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_stdin_0))
    {
      ATerm x_24 = NULL,z_24 = NULL;
      ATerm k_37;
      k_37 = t;
      {
        ATerm y_24 = NULL;
        t = SSLgetAnnotations(not_null(v_24));
        {
          y_24 = t;
          if(((x_24 != NULL) && (x_24 != y_24)))
            _fail(y_24);
          else
            x_24 = y_24;
        }
      }
      t = k_37;
      {
        ATerm a_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(x_24));
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
        t = not_null(z_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm j_25 = NULL,k_25 = NULL;
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_FILE_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm n_25 = NULL,p_25 = NULL;
        ATerm o_25 = NULL;
        t = SSLgetAnnotations(not_null(j_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
        {
          t = not_null(k_25);
          {
            ATerm r_25 = NULL;
            t = l_70(t);
            {
              p_25 = t;
              {
                ATerm s_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(p_25)), not_null(n_25));
                {
                  s_25 = t;
                  if(((r_25 != NULL) && (r_25 != s_25)))
                    _fail(s_25);
                  else
                    r_25 = s_25;
                }
                t = not_null(r_25);
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
ATerm xtc_transform_2 (ATerm t, ATerm l_107 (ATerm), ATerm m_107 (ATerm))
{
  ATerm m_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_37 = t;
      int s_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(s_37);
        }
      else
        {
          t = r_37;
          t = stdin_0(t);
        }
      LocalPopChoice(o_37);
      t = xtc_transform_file_2(t, l_107, m_107);
    }
  else
    {
      t = m_37;
      t = xtc_transform_term_2(t, l_107, m_107);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    ATerm t_37;
    t_37 = t;
    {
      ATerm y_25 = NULL;
      ATerm z_25 = NULL;
      t = term_v_18;
      {
        t = get_config_0(t);
        {
          z_25 = t;
          if(((y_25 != NULL) && (y_25 != z_25)))
            _fail(z_25);
          else
            y_25 = z_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), term_e_25);
        t = geq_0(t);
      }
    }
    t = t_37;
    t = w_98(t);
    return(t);
  }
  t = try_1(t, p_6);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm c_94 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm s_6 (ATerm t)
    {
      ATerm u_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, s_6);
          ;
          LocalPopChoice(x_37);
        }
      else
        {
          t = u_37;
          {
            ATerm y_37 = t;
            int b_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_6 (ATerm t)
                {
                  ATerm d_26 = NULL;
                  d_26 = t;
                  b_26 :
                  if(!(match_int(d_26, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, t_6, _id);
                ;
                LocalPopChoice(b_38);
              }
            else
              {
                t = y_37;
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm e_26 = NULL;
                    e_26 = t;
                    c_26 :
                    if(!(match_int(e_26, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, u_6, c_94);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, s_6);
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
  ATerm k_26 = NULL,l_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_FILE_1))
    {
      l_26 = ATgetArgument(k_26, 0);
      {
        ATerm n_26 = NULL,o_26 = NULL;
        ATerm p_26 = NULL;
        t = not_null(l_26);
        {
          ATerm q_26 = NULL;
          t = basename_0(t);
          {
            p_26 = t;
            {
              if(((n_26 != NULL) && (n_26 != p_26)))
                _fail(p_26);
              else
                n_26 = p_26;
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm c_7 (ATerm t)
                  {
                    t = term_c_38;
                    return(t);
                  }
                  t = debug_1(t, c_7);
                  return(t);
                }
                t = if_verbose3_1(t, v_6);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_38, not_null(n_26));
                  {
                    t = set_config_0(t);
                    {
                      ATerm h_38 = t;
                      int p_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_c_19;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(p_38);
                        }
                      else
                        {
                          t = h_38;
                          t = not_null(n_26);
                        }
                      {
                        q_26 = t;
                        {
                          if(((o_26 != NULL) && (o_26 != q_26)))
                            _fail(q_26);
                          else
                            o_26 = q_26;
                          {
                            ATerm d_7 (ATerm t)
                            {
                              ATerm e_7 (ATerm t)
                              {
                                t = term_q_38;
                                return(t);
                              }
                              t = debug_1(t, e_7);
                              return(t);
                            }
                            t = if_verbose3_1(t, d_7);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(o_26));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_26));
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
    ATerm f_7 (ATerm t)
    {
      t = term_r_38;
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm y_26 = NULL,e_27 = NULL,s_27 = NULL,u_27 = NULL;
      ATerm s_38;
      s_38 = t;
      {
        ATerm z_26 = NULL;
        t = dep_name_0(t);
        {
          z_26 = t;
          if(((y_26 != NULL) && (y_26 != z_26)))
            _fail(z_26);
          else
            y_26 = z_26;
        }
      }
      t = s_38;
      {
        ATerm y_38;
        y_38 = t;
        {
          ATerm q_27 = NULL;
          t = pass_verbose_0(t);
          {
            q_27 = t;
            if(((e_27 != NULL) && (e_27 != q_27)))
              _fail(q_27);
            else
              e_27 = q_27;
          }
        }
        t = y_38;
        {
          ATerm z_38;
          z_38 = t;
          {
            ATerm t_27 = NULL;
            t = pass_keep_0(t);
            {
              t_27 = t;
              if(((s_27 != NULL) && (s_27 != t_27)))
                _fail(t_27);
              else
                s_27 = t_27;
            }
          }
          t = z_38;
          {
            ATerm v_27 = NULL;
            t = term_e_39;
            {
              t = get_config_0(t);
              {
                v_27 = t;
                if(((u_27 != NULL) && (u_27 != v_27)))
                  _fail(v_27);
                else
                  u_27 = v_27;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_27)), not_null(e_27)), not_null(u_27)), not_null(y_26));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, f_7, i_7);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      t = term_f_39;
      return(t);
    }
    t = debug_1(t, m_7);
    return(t);
  }
  t = if_verbose2_1(t, j_7);
  {
    ATerm n_7 (ATerm t)
    {
      ATerm r_7 (ATerm t)
      {
        ATerm b_28 = NULL;
        ATerm c_28 = NULL;
        c_28 = t;
        if(((b_28 != NULL) && (b_28 != c_28)))
          _fail(c_28);
        else
          b_28 = c_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(CheckATermList(not_null(b_28)), term_g_39));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, r_7);
      return(t);
    }
    ATerm q_7 (ATerm t)
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
    t = profile_p__2(t, n_7, q_7);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
    {
      h_28 = ATgetFirst((ATermList) g_28);
      i_28 = (ATerm) ATgetNext((ATermList) g_28);
      t = not_null(i_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym__2))
    {
      p_28 = ATgetArgument(o_28, 0);
      q_28 = ATgetArgument(o_28, 1);
      {
        ATerm l_39;
        l_39 = t;
        {
          ATerm t_28 = NULL;
          ATerm u_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(q_28));
          {
            ATerm m_39 = t;
            int o_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(o_39);
              }
            else
              {
                t = m_39;
                t = (ATerm) ATempty;
              }
            {
              u_28 = t;
              if(((t_28 != NULL) && (t_28 != u_28)))
                _fail(u_28);
              else
                t_28 = u_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_28), not_null(q_28), not_null(t_28));
            t = table_put_0(t);
          }
        }
        t = l_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  ATerm r_39;
  r_39 = t;
  {
    ATerm j_29 = NULL;
    ATerm k_29 = NULL,l_29 = NULL,n_29 = NULL;
    t = v_95(t);
    {
      j_29 = t;
      {
        if(((i_29 != NULL) && (i_29 != j_29)))
          _fail(j_29);
        else
          i_29 = j_29;
        {
          ATerm s_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), term_w_25);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_39);
            }
          else
            {
              t = s_39;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_29 = t;
            a_29 :
            if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
              {
                l_29 = ATgetFirst((ATermList) k_29);
                n_29 = (ATerm) ATgetNext((ATermList) k_29);
                {
                  if(((h_29 != NULL) && (h_29 != l_29)))
                    _fail(l_29);
                  else
                    h_29 = l_29;
                  {
                    if(((g_29 != NULL) && (g_29 != n_29)))
                      _fail(n_29);
                    else
                      g_29 = n_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_29), term_w_25, not_null(g_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_29);
                          {
                            ATerm s_7 (ATerm t)
                            {
                              ATerm o_29 = NULL;
                              o_29 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(o_29));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_7);
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
  t = r_39;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  t = SSL_remove(not_null(x_29));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm w_39 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_78(t);
      t = m_78(t);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = w_39;
      {
        t = m_78(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm d_30 = NULL;
  ATerm c_40;
  c_40 = t;
  {
    ATerm e_30 = NULL;
    ATerm f_30 = NULL;
    t = u_95(t);
    {
      e_30 = t;
      {
        if(((d_30 != NULL) && (d_30 != e_30)))
          _fail(e_30);
        else
          d_30 = e_30;
        {
          ATerm g_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), term_w_25);
          {
            ATerm d_40 = t;
            int e_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_40);
              }
            else
              {
                t = d_40;
                t = (ATerm) ATempty;
              }
            {
              g_30 = t;
              if(((f_30 != NULL) && (f_30 != g_30)))
                _fail(g_30);
              else
                f_30 = g_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_30), term_w_25, (ATerm) ATinsert(CheckATermList(not_null(f_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = c_40;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm v_106 (ATerm))
{
  ATerm l_30 = NULL,m_30 = NULL;
  ATerm t_7 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  t = begin_scope_1(t, t_7);
  {
    ATerm a_8 (ATerm t)
    {
      ATerm k_40;
      k_40 = t;
      {
        ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
        ATerm l_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_25;
            t = table_get_0(t);
            ;
            LocalPopChoice(o_40);
          }
        else
          {
            t = l_40;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_30 = t;
          k_30 :
          if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
            {
              o_30 = ATgetFirst((ATermList) n_30);
              p_30 = (ATerm) ATgetNext((ATermList) n_30);
              {
                if(((m_30 != NULL) && (m_30 != o_30)))
                  _fail(o_30);
                else
                  m_30 = o_30;
                {
                  if(((l_30 != NULL) && (l_30 != p_30)))
                    _fail(p_30);
                  else
                    l_30 = p_30;
                  {
                    t = not_null(m_30);
                    {
                      ATerm b_8 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, b_8);
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
      t = k_40;
      {
        ATerm c_8 (ATerm t)
        {
          t = term_v_25;
          return(t);
        }
        t = end_scope_1(t, c_8);
      }
      return(t);
    }
    t = restore_always_2(t, v_106, a_8);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm y_106 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm p_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_30 = NULL;
        ATerm t_30 = NULL;
        t = term_j_37;
        {
          t = get_config_0(t);
          {
            t_30 = t;
            if(((s_30 != NULL) && (s_30 != t_30)))
              _fail(t_30);
            else
              s_30 = t_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_30));
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = p_40;
        t = term_x_27;
      }
    t = y_106(t);
    return(t);
  }
  t = xtc_temp_files_1(t, d_8);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
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
  t = xtc_input_1(t, g_8);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm h_8 (ATerm t)
  {
    ATerm v_40;
    v_40 = t;
    {
      ATerm w_30 = NULL;
      ATerm x_30 = NULL;
      t = term_v_18;
      {
        t = get_config_0(t);
        {
          x_30 = t;
          if(((w_30 != NULL) && (w_30 != x_30)))
            _fail(x_30);
          else
            w_30 = x_30;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), term_m_27);
        t = geq_0(t);
      }
    }
    t = v_40;
    t = u_98(t);
    return(t);
  }
  t = try_1(t, h_8);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  t = SSL_TicksToSeconds(not_null(a_31));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym__4))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      i_31 = ATgetArgument(f_31, 2);
      j_31 = ATgetArgument(f_31, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), not_null(j_31));
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_31), not_null(t_31));
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            t = SSL_addr(not_null(s_31), not_null(t_31));
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
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym__4))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      c_32 = ATgetArgument(z_31, 2);
      d_32 = ATgetArgument(z_31, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), not_null(c_32));
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
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym__2))
    {
      m_32 = ATgetArgument(l_32, 0);
      n_32 = ATgetArgument(l_32, 1);
      {
        ATerm c_41 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_32), not_null(n_32));
            ;
            LocalPopChoice(d_41);
          }
        else
          {
            t = c_41;
            t = SSL_subtr(not_null(m_32), not_null(n_32));
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
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  z_32 = t;
  w_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      f_33 = ATgetArgument(z_32, 1);
      x_32 :
      if(match_cons(a_33, sym__4))
        {
          b_33 = ATgetArgument(a_33, 0);
          c_33 = ATgetArgument(a_33, 1);
          d_33 = ATgetArgument(a_33, 2);
          e_33 = ATgetArgument(a_33, 3);
          y_32 :
          if(match_cons(f_33, sym__4))
            {
              g_33 = ATgetArgument(f_33, 0);
              h_33 = ATgetArgument(f_33, 1);
              i_33 = ATgetArgument(f_33, 2);
              j_33 = ATgetArgument(f_33, 3);
              {
                ATerm s_33 = NULL,u_33 = NULL,w_33 = NULL,y_33 = NULL;
                ATerm f_41;
                f_41 = t;
                {
                  ATerm t_33 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_33), not_null(g_33));
                  {
                    t = subt_0(t);
                    {
                      t_33 = t;
                      if(((s_33 != NULL) && (s_33 != t_33)))
                        _fail(t_33);
                      else
                        s_33 = t_33;
                    }
                  }
                }
                t = f_41;
                {
                  ATerm g_41;
                  g_41 = t;
                  {
                    ATerm v_33 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(h_33));
                    {
                      t = subt_0(t);
                      {
                        v_33 = t;
                        if(((u_33 != NULL) && (u_33 != v_33)))
                          _fail(v_33);
                        else
                          u_33 = v_33;
                      }
                    }
                  }
                  t = g_41;
                  {
                    ATerm h_41;
                    h_41 = t;
                    {
                      ATerm x_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_33), not_null(i_33));
                      {
                        t = subt_0(t);
                        {
                          x_33 = t;
                          if(((w_33 != NULL) && (w_33 != x_33)))
                            _fail(x_33);
                          else
                            w_33 = x_33;
                        }
                      }
                    }
                    t = h_41;
                    {
                      ATerm z_33 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(j_33));
                      {
                        t = subt_0(t);
                        {
                          z_33 = t;
                          if(((y_33 != NULL) && (y_33 != z_33)))
                            _fail(z_33);
                          else
                            y_33 = z_33;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(s_33), not_null(u_33), not_null(w_33), not_null(y_33));
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
ATerm profile_p__2 (ATerm t, ATerm o_102 (ATerm), ATerm p_102 (ATerm))
{
  ATerm o_34 = NULL;
  ATerm i_41;
  i_41 = t;
  {
    ATerm p_34 = NULL;
    t = times_0(t);
    {
      p_34 = t;
      if(((o_34 != NULL) && (o_34 != p_34)))
        _fail(p_34);
      else
        o_34 = p_34;
    }
  }
  t = i_41;
  {
    t = p_102(t);
    {
      ATerm n_41;
      n_41 = t;
      {
        ATerm q_34 = NULL,s_34 = NULL,u_34 = NULL;
        ATerm r_34 = NULL;
        t = times_0(t);
        {
          r_34 = t;
          if(((q_34 != NULL) && (q_34 != r_34)))
            _fail(r_34);
          else
            q_34 = r_34;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), not_null(o_34));
          {
            t = diff_times_0(t);
            {
              ATerm o_41;
              o_41 = t;
              {
                ATerm t_34 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    t_34 = t;
                    if(((s_34 != NULL) && (s_34 != t_34)))
                      _fail(t_34);
                    else
                      s_34 = t_34;
                  }
                }
              }
              t = o_41;
              {
                ATerm v_34 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    v_34 = t;
                    if(((u_34 != NULL) && (u_34 != v_34)))
                      _fail(v_34);
                    else
                      u_34 = v_34;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_34)), term_r_41), not_null(s_34)), term_p_41);
                  t = o_102(t);
                }
              }
            }
          }
        }
      }
      t = n_41;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_97 (ATerm))
{
  ATerm s_41;
  s_41 = t;
  {
    ATerm c_35 = NULL,e_35 = NULL;
    ATerm t_41;
    t_41 = t;
    {
      ATerm d_35 = NULL;
      t = d_97(t);
      {
        d_35 = t;
        if(((c_35 != NULL) && (c_35 != d_35)))
          _fail(d_35);
        else
          c_35 = d_35;
      }
    }
    t = t_41;
    {
      ATerm f_35 = NULL;
      f_35 = t;
      if(((e_35 != NULL) && (e_35 != f_35)))
        _fail(f_35);
      else
        e_35 = f_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_35)), not_null(c_35)));
        t = printnl_0(t);
      }
    }
  }
  t = s_41;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm z_41 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_8);
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = z_41;
            {
              ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
              q_35 = t;
              p_35 :
              if(match_cons(q_35, sym_Path_1))
                {
                  r_35 = ATgetArgument(q_35, 0);
                  t = not_null(r_35);
                }
              else
                {
                  if(match_cons(q_35, sym_Var_1))
                    {
                      r_35 = ATgetArgument(q_35, 0);
                      {
                        t = not_null(r_35);
                        {
                          ATerm d_42 = t;
                          int e_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(e_42);
                            }
                          else
                            {
                              t = d_42;
                              {
                                ATerm l_8 (ATerm t)
                                {
                                  t = term_f_42;
                                  return(t);
                                }
                                t = debug_1(t, l_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_35, sym_Prefix_2))
                        {
                          r_35 = ATgetArgument(q_35, 0);
                          s_35 = ATgetArgument(q_35, 1);
                          {
                            ATerm x_35 = NULL,z_35 = NULL;
                            ATerm k_42;
                            k_42 = t;
                            {
                              ATerm y_35 = NULL;
                              t = not_null(r_35);
                              {
                                t = eval_config_0(t);
                                {
                                  y_35 = t;
                                  if(((x_35 != NULL) && (x_35 != y_35)))
                                    _fail(y_35);
                                  else
                                    x_35 = y_35;
                                }
                              }
                            }
                            t = k_42;
                            {
                              ATerm a_36 = NULL;
                              t = not_null(s_35);
                              {
                                t = eval_config_0(t);
                                {
                                  a_36 = t;
                                  if(((z_35 != NULL) && (z_35 != a_36)))
                                    _fail(a_36);
                                  else
                                    z_35 = a_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), not_null(z_35));
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
  ATerm i_36 = NULL;
  i_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_42, not_null(i_36));
    {
      t = table_get_0(t);
      {
        ATerm o_8 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_42;
            m_42 = t;
            {
              ATerm k_36 = NULL;
              ATerm l_36 = NULL;
              l_36 = t;
              if(((k_36 != NULL) && (k_36 != l_36)))
                _fail(l_36);
              else
                k_36 = l_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_42, not_null(i_36), not_null(k_36));
                t = table_put_0(t);
              }
            }
            t = m_42;
          }
          return(t);
        }
        t = try_1(t, o_8);
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
  ATerm n_42;
  n_42 = t;
  {
    t = error_0(t);
    {
      t = term_m_27;
      t = exit_0(t);
    }
  }
  t = n_42;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm o_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_42;
      v_42 = t;
      {
        ATerm q_36 = NULL;
        ATerm r_36 = NULL;
        t = term_z_42;
        {
          t = get_config_0(t);
          {
            r_36 = t;
            if(((q_36 != NULL) && (q_36 != r_36)))
              _fail(r_36);
            else
              q_36 = r_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_43), term_i_43), term_h_43), term_g_43), term_d_43), term_c_43), term_b_43), not_null(q_36)), term_a_43));
          t = printnl_0(t);
        }
      }
      t = v_42;
      ;
      LocalPopChoice(u_42);
    }
  else
    {
      t = o_42;
      {
        ATerm s_36 = NULL;
        s_36 = t;
        p_36 :
        if(!(match_string(s_36, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_77(t);
      ;
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm w_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym__2))
    {
      z_36 = ATgetArgument(w_36, 0);
      a_37 = ATgetArgument(w_36, 1);
      t = SSL_copy(not_null(z_36), not_null(a_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  t = SSL_table_keys(not_null(f_37));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  {
    t = table_keys_0(t);
    {
      ATerm p_8 (ATerm t)
      {
        ATerm n_37 = NULL;
        ATerm p_37 = NULL;
        n_37 = t;
        {
          ATerm q_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), not_null(n_37));
          {
            t = table_get_0(t);
            {
              q_37 = t;
              if(((p_37 != NULL) && (p_37 != q_37)))
                _fail(q_37);
              else
                p_37 = q_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), not_null(p_37));
        }
        return(t);
      }
      t = map_1(t, p_8);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm p_43;
    p_43 = t;
    {
      ATerm v_37 = NULL;
      ATerm w_37 = NULL;
      t = term_v_18;
      {
        t = get_config_0(t);
        {
          w_37 = t;
          if(((v_37 != NULL) && (v_37 != w_37)))
            _fail(w_37);
          else
            v_37 = w_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), term_i_35);
        t = geq_0(t);
      }
    }
    t = p_43;
    t = y_98(t);
    return(t);
  }
  t = try_1(t, s_8);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_43;
  q_43 = t;
  {
    ATerm z_37 = NULL;
    ATerm a_38 = NULL;
    a_38 = t;
    if(((z_37 != NULL) && (z_37 != a_38)))
      _fail(a_38);
    else
      z_37 = a_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(z_37));
      t = printnl_0(t);
    }
  }
  t = q_43;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm g_38 = NULL;
  ATerm i_38 = NULL,j_38 = NULL;
  g_38 = t;
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_s_43, (ATerm) ATmakeAppl(sym_Tool_1, not_null(g_38)));
    {
      t = table_get_0(t);
      {
        k_38 = t;
        e_38 :
        if(((ATgetType(k_38) == AT_LIST) && !(ATisEmpty(k_38))))
          {
            l_38 = ATgetFirst((ATermList) k_38);
            o_38 = (ATerm) ATgetNext((ATermList) k_38);
            f_38 :
            if(match_cons(l_38, sym__2))
              {
                m_38 = ATgetArgument(l_38, 0);
                n_38 = ATgetArgument(l_38, 1);
                {
                  if(((i_38 != NULL) && (i_38 != m_38)))
                    _fail(m_38);
                  else
                    i_38 = m_38;
                  if(((j_38 != NULL) && (j_38 != n_38)))
                    _fail(n_38);
                  else
                    j_38 = n_38;
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
    t = not_null(j_38);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym__2))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      {
        ATerm a_39 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_43, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_38)));
        {
          t = table_get_0(t);
          {
            ATerm t_8 (ATerm t)
            {
              ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
              b_39 = t;
              t_38 :
              if(match_cons(b_39, sym__2))
                {
                  c_39 = ATgetArgument(b_39, 0);
                  d_39 = ATgetArgument(b_39, 1);
                  {
                    if(((x_38 != NULL) && (x_38 != c_39)))
                      _fail(c_39);
                    else
                      x_38 = c_39;
                    if(((a_39 != NULL) && (a_39 != d_39)))
                      _fail(d_39);
                    else
                      a_39 = d_39;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, t_8);
          }
        }
        t = not_null(a_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_43);
    }
  else
    {
      t = t_43;
      {
        ATerm y_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 (ATerm t)
            {
              t = filter_1(t, j_92);
              return(t);
            }
            t = Cons_2(t, j_92, w_8);
            ;
            LocalPopChoice(z_43);
          }
        else
          {
            t = y_43;
            {
              ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
              i_39 = t;
              h_39 :
              if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
                {
                  j_39 = ATgetFirst((ATermList) i_39);
                  k_39 = (ATerm) ATgetNext((ATermList) i_39);
                  {
                    t = not_null(k_39);
                    t = filter_1(t, j_92);
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
ATerm repeat_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm n_39 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      t = s_78(t);
      t = n_39(t);
      return(t);
    }
    t = try_1(t, x_8);
    return(t);
  }
  t = n_39(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm a_44;
  a_44 = t;
  {
    ATerm a_9 (ATerm t)
    {
      t = term_c_44;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm d_44 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_44;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, a_9);
  }
  t = a_44;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm e_44;
  e_44 = t;
  {
    ATerm p_39 = NULL;
    ATerm q_39 = NULL;
    q_39 = t;
    if(((p_39 != NULL) && (p_39 != q_39)))
      _fail(q_39);
    else
      p_39 = q_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATempty, not_null(p_39)));
      t = printnl_0(t);
    }
  }
  t = e_44;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_97 (ATerm))
{
  ATerm f_44;
  f_44 = t;
  {
    t = h_97(t);
    t = debug_0(t);
  }
  t = f_44;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm b_9 (ATerm t)
  {
    ATerm k_44;
    k_44 = t;
    {
      ATerm t_39 = NULL;
      ATerm u_39 = NULL;
      t = term_v_18;
      {
        t = get_config_0(t);
        {
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), term_m_31);
        t = geq_0(t);
      }
    }
    t = k_44;
    t = x_98(t);
    return(t);
  }
  t = try_1(t, b_9);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym__2))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      {
        ATerm l_44;
        l_44 = t;
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_39), not_null(a_40));
              ;
              LocalPopChoice(p_44);
            }
          else
            {
              t = o_44;
              t = SSL_gtr(not_null(z_39), not_null(a_40));
            }
        }
        t = l_44;
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
  ATerm g_40 = NULL;
  ATerm q_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
      h_40 = t;
      f_40 :
      if(match_cons(h_40, sym__2))
        {
          i_40 = ATgetArgument(h_40, 0);
          j_40 = ATgetArgument(h_40, 1);
          {
            if(((g_40 != NULL) && (g_40 != i_40)))
              _fail(i_40);
            else
              g_40 = i_40;
            if(((g_40 != NULL) && (g_40 != j_40)))
              _fail(j_40);
            else
              g_40 = j_40;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(s_44);
    }
  else
    {
      t = q_44;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm t_44;
    t_44 = t;
    {
      ATerm m_40 = NULL;
      ATerm n_40 = NULL;
      t = term_v_18;
      {
        t = get_config_0(t);
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_40), term_c_29);
        t = geq_0(t);
      }
    }
    t = t_44;
    t = z_98(t);
    return(t);
  }
  t = try_1(t, e_9);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym__2))
    {
      s_40 = ATgetArgument(r_40, 0);
      t_40 = ATgetArgument(r_40, 1);
      if(((s_40 != NULL) && (s_40 != t_40)))
        _fail(t_40);
      else
        s_40 = t_40;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_89 (ATerm), ATerm n_89 (ATerm))
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
    {
      a_41 = ATgetFirst((ATermList) z_40);
      b_41 = (ATerm) ATgetNext((ATermList) z_40);
      {
        t = n_89(t);
        {
          ATerm f_9 (ATerm t)
          {
            ATerm e_41 = NULL;
            e_41 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), not_null(e_41));
              t = m_89(t);
            }
            return(t);
          }
          t = fetch_1(t, f_9);
        }
        t = not_null(b_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      {
        t = not_null(l_41);
        {
          ATerm q_41 (ATerm t)
          {
            ATerm u_44 = t;
            int x_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_41);
                ;
                LocalPopChoice(x_44);
              }
            else
              {
                t = u_44;
                {
                  ATerm y_44 = t;
                  int z_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_9 (ATerm t)
                      {
                        t = not_null(m_41);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_89, i_9);
                      t = q_41(t);
                      ;
                      LocalPopChoice(z_44);
                    }
                  else
                    {
                      t = y_44;
                      t = Cons_2(t, _id, q_41);
                    }
                }
              }
            return(t);
          }
          t = q_41(t);
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
  ATerm v_41 = NULL,w_41 = NULL,a_42 = NULL,c_42 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__3))
    {
      w_41 = ATgetArgument(v_41, 0);
      a_42 = ATgetArgument(v_41, 1);
      c_42 = ATgetArgument(v_41, 2);
      {
        ATerm a_45;
        a_45 = t;
        {
          ATerm g_42 = NULL;
          ATerm h_42 = NULL,j_42 = NULL;
          ATerm i_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), not_null(a_42));
          {
            ATerm d_45 = t;
            int e_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_45);
              }
            else
              {
                t = d_45;
                t = (ATerm) ATempty;
              }
            {
              i_42 = t;
              if(((h_42 != NULL) && (h_42 != i_42)))
                _fail(i_42);
              else
                h_42 = i_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_42), not_null(c_42));
            {
              t = union_0(t);
              {
                j_42 = t;
                if(((g_42 != NULL) && (g_42 != j_42)))
                  _fail(j_42);
                else
                  g_42 = j_42;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_41), not_null(a_42), not_null(g_42));
            t = set_0(t);
          }
        }
        t = a_45;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm x_103 (ATerm))
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  q_42 :
  if(match_cons(r_42, sym__2))
    {
      s_42 = ATgetArgument(r_42, 0);
      t_42 = ATgetArgument(r_42, 1);
      {
        t = not_null(t_42);
        {
          ATerm j_9 (ATerm t)
          {
            ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
            w_42 = t;
            p_42 :
            if(match_cons(w_42, sym__2))
              {
                x_42 = ATgetArgument(w_42, 0);
                y_42 = ATgetArgument(w_42, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_42), not_null(x_42), not_null(y_42));
                  t = x_103(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_9);
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
  ATerm e_43 = NULL;
  ATerm f_43 = NULL;
  f_43 = t;
  if(((e_43 != NULL) && (e_43 != f_43)))
    _fail(f_43);
  else
    e_43 = f_43;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), (ATerm) ATinsert(ATempty, term_f_45));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  ATerm r_43 (ATerm t)
  {
    t = SSL_fclose(not_null(l_43));
    return(t);
  }
  l_43 = t;
  j_43 :
  if(match_cons(l_43, sym_Stream_1))
    {
      k_43 = ATgetArgument(l_43, 0);
      {
        ATerm g_45 = t;
        int h_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_43));
            ;
            LocalPopChoice(h_45);
          }
        else
          {
            t = g_45;
            t = r_43(t);
          }
      }
    }
  else
    {
      t = r_43(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym_Stream_1))
    {
      x_43 = ATgetArgument(w_43, 0);
      t = SSL_read_term_from_stream(not_null(x_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm m_44 = NULL;
        t = SSL_fopen(not_null(i_44), not_null(j_44));
        {
          ATerm n_44 = NULL;
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_44));
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
  ATerm r_44 = NULL;
  r_44 = t;
  t = SSL_is_string(not_null(r_44));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm v_44 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm w_44 = NULL;
    w_44 = t;
    if(((v_44 != NULL) && (v_44 != w_44)))
      _fail(w_44);
    else
      v_44 = w_44;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_44));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm c_45 = NULL;
    c_45 = t;
    if(((b_45 != NULL) && (b_45 != c_45)))
      _fail(c_45);
    else
      b_45 = c_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_45));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm q_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_45 = NULL;
    r_45 = t;
    if(((q_45 != NULL) && (q_45 != r_45)))
      _fail(r_45);
    else
      q_45 = r_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_45));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(x_45, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(x_45, sym_stdin_0))
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
  ATerm l_46 = NULL;
  ATerm n_46 = NULL,o_46 = NULL;
  l_46 = t;
  {
    ATerm p_46 = NULL;
    ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
    t = not_null(l_46);
    {
      p_46 = t;
      {
        t = SSL_explode_term(not_null(p_46));
        {
          r_46 = t;
          i_46 :
          if(match_cons(r_46, sym__2))
            {
              s_46 = ATgetArgument(r_46, 0);
              t_46 = ATgetArgument(r_46, 1);
              j_46 :
              if(match_string(s_46, ""))
                {
                  k_46 :
                  if(((ATgetType(t_46) == AT_LIST) && !(ATisEmpty(t_46))))
                    {
                      u_46 = ATgetFirst((ATermList) t_46);
                      v_46 = (ATerm) ATgetNext((ATermList) t_46);
                      {
                        if(((o_46 != NULL) && (o_46 != u_46)))
                          _fail(u_46);
                        else
                          o_46 = u_46;
                        if(((n_46 != NULL) && (n_46 != v_46)))
                          _fail(v_46);
                        else
                          n_46 = v_46;
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
    t = not_null(o_46);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym__2))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      {
        ATerm i_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_45);
          }
        else
          {
            t = i_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_9 (ATerm t)
                  {
                    ATerm q_47 = NULL,r_47 = NULL;
                    q_47 = t;
                    d_47 :
                    if(match_cons(q_47, sym_Path_1))
                      {
                        r_47 = ATgetArgument(q_47, 0);
                        t = not_null(r_47);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, m_9, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
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
  ATerm b_48 = NULL;
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_47 = NULL;
      ATerm a_48 = NULL;
      a_48 = t;
      if(((z_47 != NULL) && (z_47 != a_48)))
        _fail(a_48);
      else
        z_47 = a_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_47), term_o_45);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
      {
        ATerm n_9 (ATerm t)
        {
          t = term_p_45;
          return(t);
        }
        t = debug_1(t, n_9);
        _fail(t);
      }
    }
  {
    ATerm s_45;
    s_45 = t;
    {
      ATerm c_48 = NULL;
      t = read_from_stream_0(t);
      {
        c_48 = t;
        if(((b_48 != NULL) && (b_48 != c_48)))
          _fail(c_48);
        else
          b_48 = c_48;
      }
    }
    t = s_45;
    {
      t = fclose_0(t);
      t = not_null(b_48);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym__2))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      t = SSL_access(not_null(i_48), not_null(j_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm o_48 = NULL;
  ATerm p_48 = NULL;
  p_48 = t;
  if(((o_48 != NULL) && (o_48 != p_48)))
    _fail(p_48);
  else
    o_48 = p_48;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_48), (ATerm) ATinsert(ATempty, term_t_45));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(v_45);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = u_45;
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_46 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_46;
              }
            {
              ATerm q_9 (ATerm t)
              {
                t = term_b_46;
                return(t);
              }
              t = debug_1(t, q_9);
            }
            ;
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
              ATerm r_9 (ATerm t)
              {
                t = term_c_46;
                return(t);
              }
              t = debug_1(t, r_9);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm t_48 = NULL;
  ATerm v_48 = NULL;
  t_48 = t;
  {
    ATerm s_9 (ATerm t)
    {
      ATerm t_9 (ATerm t)
      {
        t = term_d_46;
        return(t);
      }
      t = debug_1(t, t_9);
      return(t);
    }
    t = if_verbose5_1(t, s_9);
    {
      ATerm e_46 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_43, (ATerm) ATmakeAppl(sym_Imported_1, not_null(t_48)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_46;
        }
      {
        ATerm f_46;
        f_46 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_43, term_g_46, (ATerm) ATinsert(ATempty, not_null(t_48)));
          t = table_put_0(t);
        }
        t = f_46;
        {
          ATerm a_10 (ATerm t)
          {
            ATerm b_10 (ATerm t)
            {
              t = term_h_46;
              return(t);
            }
            t = debug_1(t, b_10);
            return(t);
          }
          t = if_verbose4_1(t, a_10);
          {
            t = read_repository_file_0(t);
            {
              ATerm c_10 (ATerm t)
              {
                ATerm d_10 (ATerm t)
                {
                  t = term_m_46;
                  return(t);
                }
                t = say_1(t, d_10);
                return(t);
              }
              t = if_verbose6_1(t, c_10);
              {
                ATerm w_48 = NULL;
                w_48 = t;
                if(((v_48 != NULL) && (v_48 != w_48)))
                  _fail(w_48);
                else
                  v_48 = w_48;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_43, not_null(v_48));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm g_10 (ATerm t)
                      {
                        ATerm h_10 (ATerm t)
                        {
                          t = term_q_46;
                          return(t);
                        }
                        t = say_1(t, h_10);
                        return(t);
                      }
                      t = if_verbose6_1(t, g_10);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_s_43, (ATerm)ATmakeAppl(sym_Imported_1, not_null(t_48)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm k_10 (ATerm t)
                            {
                              ATerm l_10 (ATerm t)
                              {
                                t = term_m_46;
                                return(t);
                              }
                              t = say_1(t, l_10);
                              return(t);
                            }
                            t = if_verbose4_1(t, k_10);
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
  ATerm a_49 = NULL;
  a_49 = t;
  t = SSL_getenv(not_null(a_49));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_46;
      t = get_config_0(t);
      ;
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        ATerm z_46 = t;
        int a_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_47;
            t = getenv_0(t);
            ;
            LocalPopChoice(a_47);
          }
        else
          {
            t = z_46;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm p_10 (ATerm t)
    {
      t = term_c_47;
      return(t);
    }
    t = debug_1(t, p_10);
    return(t);
  }
  t = if_verbose5_1(t, o_10);
  {
    ATerm e_47;
    e_47 = t;
    {
      ATerm f_47 = t;
      int g_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_47;
          t = table_get_0(t);
          ;
          LocalPopChoice(g_47);
        }
      else
        {
          t = f_47;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_47;
    {
      ATerm s_10 (ATerm t)
      {
        ATerm t_10 (ATerm t)
        {
          t = term_m_47;
          return(t);
        }
        t = debug_1(t, t_10);
        return(t);
      }
      t = if_verbose5_1(t, s_10);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10 (ATerm t)
      {
        ATerm z_10 (ATerm t)
        {
          t = term_p_47;
          return(t);
        }
        t = debug_1(t, z_10);
        return(t);
      }
      t = if_verbose5_1(t, u_10);
      {
        t = xtc_load_0(t);
        {
          ATerm s_47 = t;
          int t_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(t_47);
            }
          else
            {
              t = s_47;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm a_11 (ATerm t)
            {
              ATerm b_11 (ATerm t)
              {
                t = term_p_47;
                return(t);
              }
              t = debug_1(t, b_11);
              return(t);
            }
            t = if_verbose5_1(t, a_11);
          }
        }
      }
      ;
      LocalPopChoice(o_47);
    }
  else
    {
      t = n_47;
      {
        ATerm e_49 = NULL;
        ATerm f_49 = NULL;
        f_49 = t;
        if(((e_49 != NULL) && (e_49 != f_49)))
          _fail(f_49);
        else
          e_49 = f_49;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_47), not_null(e_49)), term_u_47);
          {
            t = error_0(t);
            {
              ATerm e_11 (ATerm t)
              {
                t = term_s_43;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm f_11 (ATerm t)
                    {
                      t = term_w_47;
                      return(t);
                    }
                    t = debug_1(t, f_11);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_11);
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
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(match_cons(l_49, sym__2))
    {
      m_49 = ATgetArgument(l_49, 0);
      n_49 = ATgetArgument(l_49, 1);
      {
        ATerm q_49 = NULL;
        ATerm r_49 = NULL,t_49 = NULL;
        ATerm s_49 = NULL;
        t = not_null(m_49);
        {
          ATerm x_47 = t;
          int y_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(y_47);
            }
          else
            {
              t = x_47;
              t = (ATerm) ATempty;
            }
          {
            s_49 = t;
            if(((r_49 != NULL) && (r_49 != s_49)))
              _fail(s_49);
            else
              r_49 = s_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_49), not_null(r_49));
          {
            t = conc_0(t);
            {
              t_49 = t;
              if(((q_49 != NULL) && (q_49 != t_49)))
                _fail(t_49);
              else
                q_49 = t_49;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_42, not_null(m_49), not_null(q_49));
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
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  c_50 = t;
  a_50 :
  if(match_string(c_50, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(c_50) == AT_LIST) && !(ATisEmpty(c_50))))
        {
          d_50 = ATgetFirst((ATermList) c_50);
          e_50 = (ATerm) ATgetNext((ATermList) c_50);
          b_50 :
          if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
            {
              f_50 = ATgetFirst((ATermList) e_50);
              g_50 = (ATerm) ATgetNext((ATermList) e_50);
              {
                ATerm o_50 = NULL;
                ATerm d_48;
                d_48 = t;
                {
                  t = not_null(d_50);
                  t = l_0(t);
                }
                t = d_48;
                {
                  ATerm p_50 = NULL;
                  t = not_null(f_50);
                  {
                    t = m_0(t);
                    {
                      p_50 = t;
                      if(((o_50 != NULL) && (o_50 != p_50)))
                        _fail(p_50);
                      else
                        o_50 = p_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_50)), not_null(o_50));
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
  ATerm x_50 = NULL;
  x_50 = t;
  t = SSL_string_to_int(not_null(x_50));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  ATerm e_48;
  e_48 = t;
  {
    ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
    e_51 = t;
    b_51 :
    if(match_cons(e_51, sym__2))
      {
        f_51 = ATgetArgument(e_51, 0);
        g_51 = ATgetArgument(e_51, 1);
        {
          if(((c_51 != NULL) && (c_51 != f_51)))
            _fail(f_51);
          else
            c_51 = f_51;
          {
            if(((d_51 != NULL) && (d_51 != g_51)))
              _fail(g_51);
            else
              d_51 = g_51;
            t = SSL_table_remove(not_null(c_51), not_null(d_51));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_48;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym__2))
    {
      l_51 = ATgetArgument(k_51, 0);
      m_51 = ATgetArgument(k_51, 1);
      {
        ATerm f_48 = t;
        int k_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(l_51);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_42, not_null(l_51));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(k_48);
          }
        else
          {
            t = f_48;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), not_null(m_51));
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
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  v_51 :
  if(match_cons(h_52, sym__2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      {
        ATerm o_52 = NULL;
        ATerm p_52 = NULL,u_52 = NULL;
        ATerm t_52 = NULL;
        t = not_null(i_52);
        {
          ATerm l_48 = t;
          int m_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(m_48);
            }
          else
            {
              t = l_48;
              t = (ATerm) ATempty;
            }
          {
            t_52 = t;
            if(((p_52 != NULL) && (p_52 != t_52)))
              _fail(t_52);
            else
              p_52 = t_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_52), not_null(j_52));
          {
            t = conc_0(t);
            {
              u_52 = t;
              if(((o_52 != NULL) && (o_52 != u_52)))
                _fail(u_52);
              else
                o_52 = u_52;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_42, not_null(i_52), not_null(o_52));
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
  ATerm n_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 (ATerm t)
      {
        ATerm y_54 = NULL;
        y_54 = t;
        h_53 :
        if(!(match_string(y_54, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_11 (ATerm t)
      {
        ATerm z_54 = NULL;
        ATerm a_55 = NULL;
        a_55 = t;
        if(((z_54 != NULL) && (z_54 != a_55)))
          _fail(a_55);
        else
          z_54 = a_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_37, not_null(z_54));
          t = set_config_0(t);
        }
        t = term_f_25;
        return(t);
      }
      ATerm n_11 (ATerm t)
      {
        t = term_r_48;
        return(t);
      }
      t = ArgOption_3(t, g_11, k_11, n_11);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = n_48;
      {
        ATerm s_48 = t;
        int u_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_11 (ATerm t)
            {
              ATerm b_55 = NULL;
              b_55 = t;
              j_53 :
              if(!(match_string(b_55, "-o")))
                {
                  if(!(match_string(b_55, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm p_11 (ATerm t)
            {
              ATerm c_55 = NULL;
              ATerm d_55 = NULL;
              d_55 = t;
              if(((c_55 != NULL) && (c_55 != d_55)))
                _fail(d_55);
              else
                c_55 = d_55;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(c_55));
                t = set_config_0(t);
              }
              t = term_f_25;
              return(t);
            }
            ATerm q_11 (ATerm t)
            {
              t = term_x_48;
              return(t);
            }
            t = ArgOption_3(t, o_11, p_11, q_11);
            ;
            LocalPopChoice(u_48);
          }
        else
          {
            t = s_48;
            {
              ATerm y_48 = t;
              int z_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_11 (ATerm t)
                  {
                    ATerm e_55 = NULL;
                    e_55 = t;
                    l_53 :
                    if(!(match_string(e_55, "-I")))
                      {
                        if(!(match_string(e_55, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_11 (ATerm t)
                  {
                    ATerm n_55 = NULL;
                    ATerm o_55 = NULL;
                    o_55 = t;
                    if(((n_55 != NULL) && (n_55 != o_55)))
                      _fail(o_55);
                    else
                      n_55 = o_55;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_55)), term_e_39));
                      t = extend_config_0(t);
                    }
                    t = term_f_25;
                    return(t);
                  }
                  ATerm x_11 (ATerm t)
                  {
                    t = term_b_49;
                    return(t);
                  }
                  t = ArgOption_3(t, v_11, w_11, x_11);
                  ;
                  LocalPopChoice(z_48);
                }
              else
                {
                  t = y_48;
                  {
                    ATerm c_49 = t;
                    int d_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_11 (ATerm t)
                        {
                          ATerm q_55 = NULL;
                          q_55 = t;
                          n_53 :
                          if(!(match_string(q_55, "--main")))
                            {
                              if(!(match_string(q_55, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm b_12 (ATerm t)
                        {
                          ATerm r_55 = NULL;
                          ATerm s_55 = NULL;
                          s_55 = t;
                          if(((r_55 != NULL) && (r_55 != s_55)))
                            _fail(s_55);
                          else
                            r_55 = s_55;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_l_25, not_null(r_55));
                            t = set_config_0(t);
                          }
                          t = term_f_25;
                          return(t);
                        }
                        ATerm h_12 (ATerm t)
                        {
                          t = term_g_49;
                          return(t);
                        }
                        t = ArgOption_3(t, y_11, b_12, h_12);
                        ;
                        LocalPopChoice(d_49);
                      }
                    else
                      {
                        t = c_49;
                        {
                          ATerm h_49 = t;
                          int i_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_12 (ATerm t)
                              {
                                ATerm t_55 = NULL;
                                t_55 = t;
                                p_53 :
                                if(!(match_string(t_55, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm j_12 (ATerm t)
                              {
                                ATerm u_55 = NULL;
                                ATerm v_55 = NULL;
                                v_55 = t;
                                if(((u_55 != NULL) && (u_55 != v_55)))
                                  _fail(v_55);
                                else
                                  u_55 = v_55;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATinsert(ATempty, not_null(u_55)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_f_25;
                                return(t);
                              }
                              ATerm k_12 (ATerm t)
                              {
                                t = term_j_49;
                                return(t);
                              }
                              t = ArgOption_3(t, i_12, j_12, k_12);
                              ;
                              LocalPopChoice(i_49);
                            }
                          else
                            {
                              t = h_49;
                              {
                                ATerm o_49 = t;
                                int p_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_12 (ATerm t)
                                    {
                                      ATerm w_55 = NULL;
                                      w_55 = t;
                                      r_53 :
                                      if(!(match_string(w_55, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_12 (ATerm t)
                                    {
                                      ATerm x_55 = NULL;
                                      ATerm y_55 = NULL;
                                      y_55 = t;
                                      if(((x_55 != NULL) && (x_55 != y_55)))
                                        _fail(y_55);
                                      else
                                        x_55 = y_55;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATinsert(ATempty, not_null(x_55)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_f_25;
                                      return(t);
                                    }
                                    ATerm r_12 (ATerm t)
                                    {
                                      t = term_u_49;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_12, q_12, r_12);
                                    ;
                                    LocalPopChoice(p_49);
                                  }
                                else
                                  {
                                    t = o_49;
                                    {
                                      ATerm v_49 = t;
                                      int w_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_12 (ATerm t)
                                          {
                                            ATerm z_55 = NULL;
                                            z_55 = t;
                                            t_53 :
                                            if(!(match_string(z_55, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_12 (ATerm t)
                                          {
                                            ATerm a_56 = NULL;
                                            ATerm g_56 = NULL;
                                            g_56 = t;
                                            if(((a_56 != NULL) && (a_56 != g_56)))
                                              _fail(g_56);
                                            else
                                              a_56 = g_56;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATempty, not_null(a_56)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_f_25;
                                            return(t);
                                          }
                                          ATerm w_12 (ATerm t)
                                          {
                                            t = term_x_49;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, s_12, t_12, w_12);
                                          ;
                                          LocalPopChoice(w_49);
                                        }
                                      else
                                        {
                                          t = v_49;
                                          {
                                            ATerm y_49 = t;
                                            int z_49 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_13 (ATerm t)
                                                {
                                                  ATerm h_56 = NULL;
                                                  h_56 = t;
                                                  e_54 :
                                                  if(!(match_string(h_56, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm c_13 (ATerm t)
                                                {
                                                  t = term_h_50;
                                                  t = set_config_0(t);
                                                  t = term_f_25;
                                                  return(t);
                                                }
                                                ATerm d_13 (ATerm t)
                                                {
                                                  t = term_i_50;
                                                  return(t);
                                                }
                                                t = Option_3(t, b_13, c_13, d_13);
                                                ;
                                                LocalPopChoice(z_49);
                                              }
                                            else
                                              {
                                                t = y_49;
                                                {
                                                  ATerm j_50 = t;
                                                  int k_50 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_13 (ATerm t)
                                                      {
                                                        ATerm i_56 = NULL;
                                                        i_56 = t;
                                                        f_54 :
                                                        if(!(match_string(i_56, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm f_13 (ATerm t)
                                                      {
                                                        t = term_l_50;
                                                        t = set_config_0(t);
                                                        t = term_f_25;
                                                        return(t);
                                                      }
                                                      ATerm g_13 (ATerm t)
                                                      {
                                                        t = term_m_50;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, e_13, f_13, g_13);
                                                      ;
                                                      LocalPopChoice(k_50);
                                                    }
                                                  else
                                                    {
                                                      t = j_50;
                                                      {
                                                        ATerm n_50 = t;
                                                        int q_50 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_13 (ATerm t)
                                                            {
                                                              ATerm j_56 = NULL;
                                                              j_56 = t;
                                                              g_54 :
                                                              if(!(match_string(j_56, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm o_13 (ATerm t)
                                                            {
                                                              t = term_r_50;
                                                              t = set_config_0(t);
                                                              t = term_f_25;
                                                              return(t);
                                                            }
                                                            ATerm p_13 (ATerm t)
                                                            {
                                                              t = term_s_50;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, j_13, o_13, p_13);
                                                            ;
                                                            LocalPopChoice(q_50);
                                                          }
                                                        else
                                                          {
                                                            t = n_50;
                                                            {
                                                              ATerm t_50 = t;
                                                              int u_50 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_13 (ATerm t)
                                                                  {
                                                                    ATerm k_56 = NULL;
                                                                    k_56 = t;
                                                                    h_54 :
                                                                    if(!(match_string(k_56, "--output-optimized")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm r_13 (ATerm t)
                                                                  {
                                                                    t = term_v_50;
                                                                    t = set_config_0(t);
                                                                    t = term_f_25;
                                                                    return(t);
                                                                  }
                                                                  ATerm s_13 (ATerm t)
                                                                  {
                                                                    t = term_w_50;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, q_13, r_13, s_13);
                                                                  ;
                                                                  LocalPopChoice(u_50);
                                                                }
                                                              else
                                                                {
                                                                  t = t_50;
                                                                  {
                                                                    ATerm y_50 = t;
                                                                    int z_50 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_13 (ATerm t)
                                                                        {
                                                                          ATerm l_56 = NULL;
                                                                          l_56 = t;
                                                                          i_54 :
                                                                          if(!(match_string(l_56, "--keep")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm u_13 (ATerm t)
                                                                        {
                                                                          ATerm m_56 = NULL;
                                                                          ATerm n_56 = NULL;
                                                                          t = string_to_int_0(t);
                                                                          {
                                                                            n_56 = t;
                                                                            if(((m_56 != NULL) && (m_56 != n_56)))
                                                                              _fail(n_56);
                                                                            else
                                                                              m_56 = n_56;
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(m_56));
                                                                            t = set_config_0(t);
                                                                          }
                                                                          t = term_f_25;
                                                                          return(t);
                                                                        }
                                                                        ATerm v_13 (ATerm t)
                                                                        {
                                                                          t = term_a_51;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3(t, t_13, u_13, v_13);
                                                                        ;
                                                                        LocalPopChoice(z_50);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_50;
                                                                        {
                                                                          ATerm h_51 = t;
                                                                          int i_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm w_13 (ATerm t)
                                                                              {
                                                                                ATerm x_56 = NULL;
                                                                                x_56 = t;
                                                                                k_54 :
                                                                                if(!(match_string(x_56, "--fusion")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm x_13 (ATerm t)
                                                                              {
                                                                                t = term_n_51;
                                                                                t = toggle_config_0(t);
                                                                                t = term_f_25;
                                                                                return(t);
                                                                              }
                                                                              ATerm b_14 (ATerm t)
                                                                              {
                                                                                t = term_o_51;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, w_13, x_13, b_14);
                                                                              ;
                                                                              LocalPopChoice(i_51);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_51;
                                                                              {
                                                                                ATerm p_51 = t;
                                                                                int q_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_14 (ATerm t)
                                                                                    {
                                                                                      ATerm y_56 = NULL;
                                                                                      y_56 = t;
                                                                                      l_54 :
                                                                                      if(!(match_string(y_56, "--trace-all")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm i_14 (ATerm t)
                                                                                    {
                                                                                      t = term_s_51;
                                                                                      t = set_config_0(t);
                                                                                      t = term_f_25;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm k_14 (ATerm t)
                                                                                    {
                                                                                      t = term_t_51;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3(t, e_14, i_14, k_14);
                                                                                    ;
                                                                                    LocalPopChoice(q_51);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_51;
                                                                                    {
                                                                                      ATerm u_51 = t;
                                                                                      int w_51 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm l_14 (ATerm t)
                                                                                          {
                                                                                            ATerm z_56 = NULL;
                                                                                            z_56 = t;
                                                                                            m_54 :
                                                                                            if(!(match_string(z_56, "-t")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_14 (ATerm t)
                                                                                          {
                                                                                            ATerm a_57 = NULL;
                                                                                            ATerm b_57 = NULL;
                                                                                            b_57 = t;
                                                                                            if(((a_57 != NULL) && (a_57 != b_57)))
                                                                                              _fail(b_57);
                                                                                            else
                                                                                              a_57 = b_57;
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_x_51, (ATerm) ATinsert(ATempty, not_null(a_57)));
                                                                                              t = extend_config_0(t);
                                                                                            }
                                                                                            t = term_f_25;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm n_14 (ATerm t)
                                                                                          {
                                                                                            t = term_y_51;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, l_14, m_14, n_14);
                                                                                          ;
                                                                                          LocalPopChoice(w_51);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_51;
                                                                                          {
                                                                                            ATerm z_51 = t;
                                                                                            int a_52 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm o_14 (ATerm t)
                                                                                                {
                                                                                                  ATerm c_57 = NULL;
                                                                                                  c_57 = t;
                                                                                                  o_54 :
                                                                                                  if(!(match_string(c_57, "--verbose")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm p_14 (ATerm t)
                                                                                                {
                                                                                                  ATerm d_57 = NULL;
                                                                                                  ATerm e_57 = NULL;
                                                                                                  t = string_to_int_0(t);
                                                                                                  {
                                                                                                    e_57 = t;
                                                                                                    if(((d_57 != NULL) && (d_57 != e_57)))
                                                                                                      _fail(e_57);
                                                                                                    else
                                                                                                      d_57 = e_57;
                                                                                                  }
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(d_57));
                                                                                                    t = set_config_0(t);
                                                                                                  }
                                                                                                  t = term_f_25;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_14 (ATerm t)
                                                                                                {
                                                                                                  t = term_b_52;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3(t, o_14, p_14, q_14);
                                                                                                ;
                                                                                                LocalPopChoice(a_52);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_51;
                                                                                                {
                                                                                                  ATerm c_52 = t;
                                                                                                  int d_52 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm r_14 (ATerm t)
                                                                                                      {
                                                                                                        ATerm f_57 = NULL;
                                                                                                        f_57 = t;
                                                                                                        q_54 :
                                                                                                        if(!(match_string(f_57, "-S")))
                                                                                                          {
                                                                                                            if(!(match_string(f_57, "--silent")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm u_14 (ATerm t)
                                                                                                      {
                                                                                                        t = term_e_52;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_f_25;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_14 (ATerm t)
                                                                                                      {
                                                                                                        t = term_f_52;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, r_14, u_14, v_14);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_52);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_52;
                                                                                                      {
                                                                                                        ATerm g_52 = t;
                                                                                                        int k_52 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm w_14 (ATerm t)
                                                                                                            {
                                                                                                              ATerm g_57 = NULL;
                                                                                                              g_57 = t;
                                                                                                              r_54 :
                                                                                                              if(!(match_string(g_57, "-h")))
                                                                                                                {
                                                                                                                  if(!(match_string(g_57, "--help")))
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm b_15 (ATerm t)
                                                                                                            {
                                                                                                              t = term_m_52;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_f_25;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_15 (ATerm t)
                                                                                                            {
                                                                                                              t = term_n_52;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, w_14, b_15, c_15);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_52);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = g_52;
                                                                                                            {
                                                                                                              ATerm q_52 = t;
                                                                                                              int r_52 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm d_15 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm h_57 = NULL;
                                                                                                                    h_57 = t;
                                                                                                                    s_54 :
                                                                                                                    if(!(match_string(h_57, "--man")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm e_15 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_v_52;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_f_25;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm j_15 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_w_52;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, d_15, e_15, j_15);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(r_52);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_52;
                                                                                                                  {
                                                                                                                    ATerm x_52 = t;
                                                                                                                    int y_52 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm k_15 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm i_57 = NULL;
                                                                                                                          i_57 = t;
                                                                                                                          t_54 :
                                                                                                                          if(!(match_string(i_57, "-v")))
                                                                                                                            {
                                                                                                                              if(!(match_string(i_57, "--version")))
                                                                                                                                {
                                                                                                                                  _fail(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm l_15 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_a_53;
                                                                                                                          t = set_config_0(t);
                                                                                                                          t = term_f_25;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm o_15 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_b_53;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3(t, k_15, l_15, o_15);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(y_52);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_52;
                                                                                                                        {
                                                                                                                          ATerm p_15 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm j_57 = NULL;
                                                                                                                            j_57 = t;
                                                                                                                            u_54 :
                                                                                                                            if(!(match_string(j_57, "--warning")))
                                                                                                                              {
                                                                                                                                if(!(match_string(j_57, "-W")))
                                                                                                                                  {
                                                                                                                                    _fail(t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm q_15 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm c_53 = t;
                                                                                                                            int d_53 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                ATerm l_57 = NULL;
                                                                                                                                ATerm e_53;
                                                                                                                                e_53 = t;
                                                                                                                                {
                                                                                                                                  t = term_x_23;
                                                                                                                                  {
                                                                                                                                    t = get_config_0(t);
                                                                                                                                    {
                                                                                                                                      ATerm s_15 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm k_57 = NULL;
                                                                                                                                        k_57 = t;
                                                                                                                                        v_54 :
                                                                                                                                        if(!(match_string(k_57, "all")))
                                                                                                                                          {
                                                                                                                                            _fail(t);
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = Cons_2(t, s_15, Nil_0);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                t = e_53;
                                                                                                                                {
                                                                                                                                  ATerm m_57 = NULL;
                                                                                                                                  m_57 = t;
                                                                                                                                  if(((l_57 != NULL) && (l_57 != m_57)))
                                                                                                                                    _fail(m_57);
                                                                                                                                  else
                                                                                                                                    l_57 = m_57;
                                                                                                                                  {
                                                                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATinsert(ATempty, not_null(l_57)));
                                                                                                                                    t = set_config_0(t);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                ;
                                                                                                                                LocalPopChoice(d_53);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = c_53;
                                                                                                                                {
                                                                                                                                  ATerm s_57 = NULL;
                                                                                                                                  ATerm t_57 = NULL;
                                                                                                                                  t_57 = t;
                                                                                                                                  if(((s_57 != NULL) && (s_57 != t_57)))
                                                                                                                                    _fail(t_57);
                                                                                                                                  else
                                                                                                                                    s_57 = t_57;
                                                                                                                                  {
                                                                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATinsert(ATempty, not_null(s_57)));
                                                                                                                                    t = extend_config_0(t);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            t = term_f_25;
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm r_15 (ATerm t)
                                                                                                                          {
                                                                                                                            t = term_f_53;
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = ArgOption_3(t, p_15, q_15, r_15);
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
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  t = SSL_table_destroy(not_null(u_58));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_53), term_d_43), term_y_53), term_x_53), term_w_53), term_d_43), term_v_53), term_u_53), term_s_53), term_q_53), term_o_53), term_m_53), term_k_53), term_i_53), term_g_53);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm x_58 (ATerm t)
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = Cons_2(t, h_85, x_58);
      }
    return(t);
  }
  t = x_58(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
  g_59 = t;
  d_59 :
  if(((ATgetType(g_59) == AT_LIST) && !(ATisEmpty(g_59))))
    {
      e_59 = ATgetFirst((ATermList) g_59);
      f_59 = (ATerm) ATgetNext((ATermList) g_59);
      {
        ATerm j_59 = NULL;
        t = not_null(f_59);
        {
          ATerm c_54;
          c_54 = t;
          {
            ATerm k_59 = NULL,m_59 = NULL,o_59 = NULL;
            ATerm d_54;
            d_54 = t;
            {
              ATerm l_59 = NULL;
              t = j_0(t);
              {
                l_59 = t;
                if(((k_59 != NULL) && (k_59 != l_59)))
                  _fail(l_59);
                else
                  k_59 = l_59;
              }
            }
            t = d_54;
            {
              ATerm n_59 = NULL;
              t = not_null(e_59);
              {
                t = i_0(t);
                {
                  n_59 = t;
                  if(((m_59 != NULL) && (m_59 != n_59)))
                    _fail(n_59);
                  else
                    m_59 = n_59;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_59)), not_null(m_59));
                {
                  o_59 = t;
                  if(((j_59 != NULL) && (j_59 != o_59)))
                    _fail(o_59);
                  else
                    j_59 = o_59;
                }
              }
            }
          }
          t = c_54;
          {
            ATerm y_15 (ATerm t)
            {
              t = not_null(j_59);
              return(t);
            }
            t = reverse_acc_2(t, i_0, y_15);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_59) == AT_LIST) && ATisEmpty(g_59)))
        {
          {
            t = term_f_25;
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
  ATerm b_16 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_16);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm v_59 = NULL;
  ATerm w_59 = NULL;
  t = term_f_25;
  {
    t = g_0(t);
    {
      w_59 = t;
      if(((v_59 != NULL) && (v_59 != w_59)))
        _fail(w_59);
      else
        v_59 = w_59;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_55), not_null(v_59)), term_x_54), term_d_43), term_w_54), term_d_43), term_p_54), term_n_54), term_d_43), term_j_54);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm d_60 = NULL,e_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym_Program_1))
    {
      e_60 = ATgetArgument(d_60, 0);
      {
        ATerm h_60 = NULL,j_60 = NULL;
        ATerm i_60 = NULL;
        t = SSLgetAnnotations(not_null(d_60));
        {
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
        }
        {
          t = not_null(e_60);
          {
            ATerm l_60 = NULL;
            t = h_70(t);
            {
              j_60 = t;
              {
                ATerm m_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_60)), not_null(h_60));
                {
                  m_60 = t;
                  if(((l_60 != NULL) && (l_60 != m_60)))
                    _fail(m_60);
                  else
                    l_60 = m_60;
                }
                t = not_null(l_60);
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
  ATerm v_60 = NULL;
  ATerm g_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_60 = NULL;
      t = term_i_55;
      {
        t = get_config_0(t);
        {
          w_60 = t;
          if(((v_60 != NULL) && (v_60 != w_60)))
            _fail(w_60);
          else
            v_60 = w_60;
        }
      }
      ;
      LocalPopChoice(h_55);
    }
  else
    {
      t = g_55;
      {
        ATerm c_16 (ATerm t)
        {
          ATerm d_16 (ATerm t)
          {
            ATerm x_60 = NULL;
            x_60 = t;
            if(((v_60 != NULL) && (v_60 != x_60)))
              _fail(x_60);
            else
              v_60 = x_60;
            return(t);
          }
          t = Program_1(t, d_16);
          return(t);
        }
        t = option_defined_1(t, c_16);
      }
    }
  {
    ATerm e_16 (ATerm t)
    {
      ATerm f_16 (ATerm t)
      {
        t = not_null(v_60);
        return(t);
      }
      t = short_description_1(t, f_16);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_16);
    {
      t = term_j_55;
      {
        t = echo_0(t);
        {
          t = term_m_55;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_16 (ATerm t)
                {
                  ATerm y_60 = NULL;
                  ATerm z_60 = NULL;
                  z_60 = t;
                  if(((y_60 != NULL) && (y_60 != z_60)))
                    _fail(z_60);
                  else
                    y_60 = z_60;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), term_p_55);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_16);
                {
                  ATerm n_16 (ATerm t)
                  {
                    ATerm a_61 = NULL;
                    ATerm b_61 = NULL;
                    ATerm o_16 (ATerm t)
                    {
                      t = not_null(v_60);
                      return(t);
                    }
                    t = long_description_1(t, o_16);
                    {
                      b_61 = t;
                      if(((a_61 != NULL) && (a_61 != b_61)))
                        _fail(b_61);
                      else
                        a_61 = b_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_61)), term_d_43);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_16);
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
  ATerm b_56 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(c_56);
    }
  else
    {
      t = b_56;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm m_61 = NULL,n_61 = NULL;
  m_61 = t;
  l_61 :
  if(match_cons(m_61, sym_Undefined_1))
    {
      n_61 = ATgetArgument(m_61, 0);
      {
        ATerm e_62 = NULL,h_62 = NULL;
        ATerm f_62 = NULL;
        t = SSLgetAnnotations(not_null(m_61));
        {
          f_62 = t;
          if(((e_62 != NULL) && (e_62 != f_62)))
            _fail(f_62);
          else
            e_62 = f_62;
        }
        {
          t = not_null(n_61);
          {
            ATerm p_62 = NULL;
            t = i_70(t);
            {
              h_62 = t;
              {
                ATerm q_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_62)), not_null(e_62));
                {
                  q_62 = t;
                  if(((p_62 != NULL) && (p_62 != q_62)))
                    _fail(q_62);
                  else
                    p_62 = q_62;
                }
                t = not_null(p_62);
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
ATerm fetch_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm e_63 (ATerm t)
  {
    ATerm d_56 = t;
    int e_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_85, _id);
        ;
        LocalPopChoice(e_56);
      }
    else
      {
        t = d_56;
        t = Cons_2(t, _id, e_63);
      }
    return(t);
  }
  t = e_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_102 (ATerm))
{
  t = fetch_1(t, r_102);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_63 = NULL,j_63 = NULL,k_63 = NULL;
  g_63 = t;
  f_63 :
  if(((ATgetType(g_63) == AT_LIST) && ATisEmpty(g_63)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_63) == AT_LIST) && !(ATisEmpty(g_63))))
        {
          j_63 = ATgetFirst((ATermList) g_63);
          k_63 = (ATerm) ATgetNext((ATermList) g_63);
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
  ATerm f_56;
  f_56 = t;
  {
    ATerm n_63 = NULL;
    ATerm q_63 = NULL;
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(p_56);
      }
    else
      {
        t = o_56;
        {
          ATerm o_63 = NULL;
          ATerm p_63 = NULL;
          p_63 = t;
          if(((o_63 != NULL) && (o_63 != p_63)))
            _fail(p_63);
          else
            o_63 = p_63;
          t = (ATerm) ATinsert(ATempty, not_null(o_63));
        }
      }
    {
      q_63 = t;
      if(((n_63 != NULL) && (n_63 != q_63)))
        _fail(q_63);
      else
        n_63 = q_63;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_20, not_null(n_63));
      t = printnl_0(t);
    }
  }
  t = f_56;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_i_55;
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
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(r_56);
    }
  else
    {
      t = q_56;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  w_63 :
  if(match_cons(x_63, sym_Help_0))
    {
      ATerm z_63 = NULL,b_64 = NULL;
      ATerm s_56;
      s_56 = t;
      {
        ATerm a_64 = NULL;
        t = SSLgetAnnotations(not_null(x_63));
        {
          a_64 = t;
          if(((z_63 != NULL) && (z_63 != a_64)))
            _fail(a_64);
          else
            z_63 = a_64;
        }
      }
      t = s_56;
      {
        ATerm c_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_63));
        {
          c_64 = t;
          if(((b_64 != NULL) && (b_64 != c_64)))
            _fail(c_64);
          else
            b_64 = c_64;
        }
        t = not_null(b_64);
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
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 (ATerm t)
      {
        ATerm i_64 = NULL;
        i_64 = t;
        g_64 :
        if(!(match_string(i_64, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_16 (ATerm t)
      {
        t = term_w_56;
        t = set_config_0(t);
        return(t);
      }
      ATerm t_16 (ATerm t)
      {
        t = term_n_57;
        return(t);
      }
      t = Option_3(t, r_16, s_16, t_16);
      ;
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      {
        ATerm u_16 (ATerm t)
        {
          ATerm j_64 = NULL;
          j_64 = t;
          h_64 :
          if(!(match_string(j_64, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_16 (ATerm t)
        {
          t = term_w_56;
          {
            t = set_config_0(t);
            {
              t = term_a_53;
              t = set_config_0(t);
            }
          }
          t = term_o_57;
          return(t);
        }
        ATerm a_17 (ATerm t)
        {
          t = term_p_57;
          return(t);
        }
        t = Option_3(t, u_16, v_16, a_17);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  l_64 :
  if(match_cons(m_64, sym__2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      t = SSL_table_get(not_null(n_64), not_null(o_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym__3))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      a_65 = ATgetArgument(x_64, 2);
      {
        ATerm q_57;
        q_57 = t;
        {
          ATerm e_65 = NULL;
          ATerm f_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_64), not_null(z_64));
          {
            ATerm r_57 = t;
            int u_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(u_57);
              }
            else
              {
                t = r_57;
                t = (ATerm) ATempty;
              }
            {
              f_65 = t;
              if(((e_65 != NULL) && (e_65 != f_65)))
                _fail(f_65);
              else
                e_65 = f_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_64), not_null(z_64), (ATerm) ATinsert(CheckATermList(not_null(e_65)), not_null(a_65)));
            t = table_put_0(t);
          }
        }
        t = q_57;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_103 (ATerm))
{
  ATerm j_65 = NULL;
  ATerm k_65 = NULL;
  t = term_f_25;
  {
    t = w_103(t);
    {
      k_65 = t;
      if(((j_65 != NULL) && (j_65 != k_65)))
        _fail(k_65);
      else
        j_65 = k_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_55, term_l_55, not_null(j_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  p_65 :
  if(match_string(q_65, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(q_65) == AT_LIST) && !(ATisEmpty(q_65))))
        {
          r_65 = ATgetFirst((ATermList) q_65);
          s_65 = (ATerm) ATgetNext((ATermList) q_65);
          {
            ATerm v_65 = NULL;
            ATerm v_57;
            v_57 = t;
            {
              t = not_null(r_65);
              t = a_0(t);
            }
            t = v_57;
            {
              ATerm w_65 = NULL;
              t = term_f_25;
              {
                t = b_0(t);
                {
                  w_65 = t;
                  if(((v_65 != NULL) && (v_65 != w_65)))
                    _fail(w_65);
                  else
                    v_65 = w_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_65)), not_null(v_65));
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
  ATerm b_17 (ATerm t)
  {
    ATerm b_66 = NULL;
    b_66 = t;
    a_66 :
    if(!(match_string(b_66, "--help")))
      {
        if(!(match_string(b_66, "-h")))
          {
            if(!(match_string(b_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_17 (ATerm t)
  {
    t = term_m_52;
    {
      t = set_config_0(t);
      t = term_w_57;
    }
    return(t);
  }
  ATerm h_17 (ATerm t)
  {
    t = term_x_57;
    return(t);
  }
  t = Option_3(t, b_17, g_17, h_17);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
  e_66 = t;
  d_66 :
  if(((ATgetType(e_66) == AT_LIST) && !(ATisEmpty(e_66))))
    {
      f_66 = ATgetFirst((ATermList) e_66);
      g_66 = (ATerm) ATgetNext((ATermList) e_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_103 (ATerm))
{
  ATerm y_57;
  y_57 = t;
  {
    ATerm i_17 (ATerm t)
    {
      t = term_z_57;
      t = u_103(t);
      return(t);
    }
    t = try_1(t, i_17);
  }
  t = y_57;
  {
    ATerm j_17 (ATerm t)
    {
      ATerm o_66 = NULL;
      ATerm a_58;
      a_58 = t;
      {
        ATerm m_66 = NULL;
        ATerm n_66 = NULL;
        n_66 = t;
        if(((m_66 != NULL) && (m_66 != n_66)))
          _fail(n_66);
        else
          m_66 = n_66;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_55, not_null(m_66));
          t = set_config_0(t);
        }
      }
      t = a_58;
      {
        ATerm p_66 = NULL;
        p_66 = t;
        if(((o_66 != NULL) && (o_66 != p_66)))
          _fail(p_66);
        else
          o_66 = p_66;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_66));
      }
      return(t);
    }
    ATerm k_17 (ATerm t)
    {
      ATerm b_58 = t;
      int c_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_58 = t;
          int e_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(e_58);
            }
          else
            {
              t = d_58;
              {
                t = u_103(t);
                t = Cons_2(t, _id, k_17);
              }
            }
          ;
          LocalPopChoice(c_58);
        }
      else
        {
          t = b_58;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_17, k_17);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_103 (ATerm))
{
  ATerm u_66 = NULL;
  ATerm f_58;
  f_58 = t;
  {
    t = term_g_58;
    t = table_put_0(t);
  }
  t = f_58;
  {
    ATerm m_17 (ATerm t)
    {
      ATerm h_58 = t;
      int i_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_103(t);
          ;
          LocalPopChoice(i_58);
        }
      else
        {
          t = h_58;
          {
            ATerm j_58 = t;
            int k_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(k_58);
              }
            else
              {
                t = j_58;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, m_17);
    {
      ATerm p_17 (ATerm t)
      {
        ATerm l_58 = t;
        int m_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_58;
            n_58 = t;
            {
              ATerm o_58 = t;
              int p_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_52;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_58);
                }
              else
                {
                  t = o_58;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_58;
            {
              t = system_usage_0(t);
              {
                t = term_t_18;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_58);
          }
        else
          {
            t = l_58;
            {
              ATerm q_58 = t;
              int r_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_58;
                  s_58 = t;
                  {
                    t = term_v_56;
                    t = get_config_0(t);
                  }
                  t = s_58;
                  {
                    t = system_about_0(t);
                    {
                      t = term_t_18;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(r_58);
                }
              else
                {
                  t = q_58;
                  {
                    ATerm q_17 (ATerm t)
                    {
                      ATerm r_17 (ATerm t)
                      {
                        ATerm v_66 = NULL;
                        v_66 = t;
                        if(((u_66 != NULL) && (u_66 != v_66)))
                          _fail(v_66);
                        else
                          u_66 = v_66;
                        return(t);
                      }
                      t = Undefined_1(t, r_17);
                      return(t);
                    }
                    t = option_defined_1(t, q_17);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_66)), term_t_58));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_m_27;
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
      t = try_1(t, p_17);
      {
        ATerm v_58;
        v_58 = t;
        {
          t = term_k_55;
          t = table_destroy_0(t);
        }
        t = v_58;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  ATerm w_58;
  w_58 = t;
  {
    ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
    c_67 = t;
    y_66 :
    if(match_cons(c_67, sym__3))
      {
        d_67 = ATgetArgument(c_67, 0);
        e_67 = ATgetArgument(c_67, 1);
        f_67 = ATgetArgument(c_67, 2);
        {
          if(((z_66 != NULL) && (z_66 != d_67)))
            _fail(d_67);
          else
            z_66 = d_67;
          {
            if(((a_67 != NULL) && (a_67 != e_67)))
              _fail(e_67);
            else
              a_67 = e_67;
            {
              if(((b_67 != NULL) && (b_67 != f_67)))
                _fail(f_67);
              else
                b_67 = f_67;
              t = SSL_table_put(not_null(z_66), not_null(a_67), not_null(b_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_58;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
  j_67 = t;
  i_67 :
  if(match_cons(j_67, sym__2))
    {
      k_67 = ATgetArgument(j_67, 0);
      l_67 = ATgetArgument(j_67, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_42, not_null(k_67), not_null(l_67));
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
  ATerm y_58 = t;
  int z_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_58);
    }
  else
    {
      t = y_58;
      {
        ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
        r_67 = t;
        q_67 :
        if(((ATgetType(r_67) == AT_LIST) && !(ATisEmpty(r_67))))
          {
            s_67 = ATgetFirst((ATermList) r_67);
            t_67 = (ATerm) ATgetNext((ATermList) r_67);
            {
              t = not_null(s_67);
              {
                ATerm t_17 (ATerm t)
                {
                  t = not_null(t_67);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_17);
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
  ATerm d_68 = NULL;
  ATerm f_68 = NULL;
  d_68 = t;
  {
    ATerm g_68 = NULL;
    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
    t = not_null(d_68);
    {
      g_68 = t;
      {
        t = SSL_explode_term(not_null(g_68));
        {
          i_68 = t;
          b_68 :
          if(match_cons(i_68, sym__2))
            {
              j_68 = ATgetArgument(i_68, 0);
              k_68 = ATgetArgument(i_68, 1);
              c_68 :
              if(match_string(j_68, ""))
                {
                  if(((f_68 != NULL) && (f_68 != k_68)))
                    _fail(k_68);
                  else
                    f_68 = k_68;
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
      t = not_null(f_68);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm s_68 = NULL;
  s_68 = t;
  r_68 :
  if(((ATgetType(s_68) == AT_LIST) && ATisEmpty(s_68)))
    {
      {
        ATerm u_68 = NULL,w_68 = NULL;
        ATerm a_59;
        a_59 = t;
        {
          ATerm v_68 = NULL;
          t = SSLgetAnnotations(not_null(s_68));
          {
            v_68 = t;
            if(((u_68 != NULL) && (u_68 != v_68)))
              _fail(v_68);
            else
              u_68 = v_68;
          }
        }
        t = a_59;
        {
          ATerm x_68 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_68));
          {
            x_68 = t;
            if(((w_68 != NULL) && (w_68 != x_68)))
              _fail(x_68);
            else
              w_68 = x_68;
          }
          t = not_null(w_68);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm b_69 (ATerm t)
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_69);
        ;
        LocalPopChoice(c_59);
      }
    else
      {
        t = b_59;
        {
          t = Nil_0(t);
          t = w_85(t);
        }
      }
    return(t);
  }
  t = b_69(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      {
        t = not_null(f_69);
        {
          ATerm u_17 (ATerm t)
          {
            t = not_null(g_69);
            return(t);
          }
          t = at_end_1(t, u_17);
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
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
  q_69 = t;
  p_69 :
  if(match_cons(q_69, sym__2))
    {
      r_69 = ATgetArgument(q_69, 0);
      s_69 = ATgetArgument(q_69, 1);
      {
        ATerm w_69 = NULL,y_69 = NULL;
        ATerm x_69 = NULL;
        t = SSLgetAnnotations(not_null(q_69));
        {
          x_69 = t;
          if(((w_69 != NULL) && (w_69 != x_69)))
            _fail(x_69);
          else
            w_69 = x_69;
        }
        {
          t = not_null(r_69);
          {
            ATerm a_70 = NULL;
            t = h_63(t);
            {
              y_69 = t;
              {
                t = not_null(s_69);
                {
                  ATerm c_70 = NULL;
                  t = i_63(t);
                  {
                    a_70 = t;
                    {
                      ATerm d_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_69), not_null(a_70)), not_null(w_69));
                      {
                        d_70 = t;
                        if(((c_70 != NULL) && (c_70 != d_70)))
                          _fail(d_70);
                        else
                          c_70 = d_70;
                      }
                      t = not_null(c_70);
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
  ATerm n_70 = NULL;
  n_70 = t;
  t = SSL_implode_string(not_null(n_70));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_64 (ATerm), ATerm r_64 (ATerm))
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  w_70 = t;
  v_70 :
  if(((ATgetType(w_70) == AT_LIST) && !(ATisEmpty(w_70))))
    {
      x_70 = ATgetFirst((ATermList) w_70);
      y_70 = (ATerm) ATgetNext((ATermList) w_70);
      {
        ATerm c_71 = NULL,e_71 = NULL;
        ATerm d_71 = NULL;
        t = SSLgetAnnotations(not_null(w_70));
        {
          d_71 = t;
          if(((c_71 != NULL) && (c_71 != d_71)))
            _fail(d_71);
          else
            c_71 = d_71;
        }
        {
          t = not_null(x_70);
          {
            ATerm g_71 = NULL;
            t = q_64(t);
            {
              e_71 = t;
              {
                t = not_null(y_70);
                {
                  ATerm i_71 = NULL;
                  t = r_64(t);
                  {
                    g_71 = t;
                    {
                      ATerm j_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_71)), not_null(e_71)), not_null(c_71));
                      {
                        j_71 = t;
                        if(((i_71 != NULL) && (i_71 != j_71)))
                          _fail(j_71);
                        else
                          i_71 = j_71;
                      }
                      t = not_null(i_71);
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
  ATerm q_71 = NULL;
  q_71 = t;
  t = SSL_explode_string(not_null(q_71));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_71 (ATerm t)
        {
          ATerm r_59 = t;
          int s_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, v_71);
              ;
              LocalPopChoice(s_59);
            }
          else
            {
              t = r_59;
              {
                ATerm v_17 (ATerm t)
                {
                  ATerm u_71 = NULL;
                  u_71 = t;
                  t_71 :
                  if(!(match_int(u_71, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm a_18 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, v_17, a_18);
              }
            }
          return(t);
        }
        t = v_71(t);
        ;
        LocalPopChoice(q_59);
      }
    else
      {
        t = p_59;
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
  ATerm t_59;
  t_59 = t;
  {
    ATerm j_72 = NULL,l_72 = NULL,n_72 = NULL,p_72 = NULL,t_72 = NULL,x_72 = NULL,b_73 = NULL,f_73 = NULL;
    t = term_x_59;
    {
      t = set_config_0(t);
      {
        t = term_y_59;
        {
          t = set_config_0(t);
          {
            t = term_z_59;
            {
              t = set_config_0(t);
              {
                ATerm a_60;
                a_60 = t;
                {
                  ATerm k_72 = NULL;
                  t = term_b_60;
                  {
                    t = xtc_find_path_0(t);
                    {
                      k_72 = t;
                      if(((j_72 != NULL) && (j_72 != k_72)))
                        _fail(k_72);
                      else
                        j_72 = k_72;
                    }
                  }
                }
                t = a_60;
                {
                  ATerm f_60;
                  f_60 = t;
                  {
                    ATerm m_72 = NULL;
                    t = term_g_60;
                    {
                      t = xtc_find_path_0(t);
                      {
                        m_72 = t;
                        if(((l_72 != NULL) && (l_72 != m_72)))
                          _fail(m_72);
                        else
                          l_72 = m_72;
                      }
                    }
                  }
                  t = f_60;
                  {
                    ATerm o_72 = NULL;
                    t = term_k_60;
                    {
                      t = xtc_find_path_0(t);
                      {
                        o_72 = t;
                        if(((n_72 != NULL) && (n_72 != o_72)))
                          _fail(o_72);
                        else
                          n_72 = o_72;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_72)), term_e_39), not_null(l_72)), term_e_39), not_null(j_72)), term_e_39));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, term_o_60), term_n_60));
                          {
                            t = set_config_0(t);
                            {
                              ATerm p_60;
                              p_60 = t;
                              {
                                ATerm q_72 = NULL,s_72 = NULL;
                                ATerm r_72 = NULL;
                                t = term_q_60;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    r_72 = t;
                                    if(((q_72 != NULL) && (q_72 != r_72)))
                                      _fail(r_72);
                                    else
                                      q_72 = r_72;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), term_r_60);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      s_72 = t;
                                      if(((p_72 != NULL) && (p_72 != s_72)))
                                        _fail(s_72);
                                      else
                                        p_72 = s_72;
                                    }
                                  }
                                }
                              }
                              t = p_60;
                              {
                                ATerm s_60;
                                s_60 = t;
                                {
                                  ATerm u_72 = NULL,w_72 = NULL;
                                  ATerm v_72 = NULL;
                                  t = term_q_60;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      v_72 = t;
                                      if(((u_72 != NULL) && (u_72 != v_72)))
                                        _fail(v_72);
                                      else
                                        u_72 = v_72;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_72), term_r_60);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        w_72 = t;
                                        if(((t_72 != NULL) && (t_72 != w_72)))
                                          _fail(w_72);
                                        else
                                          t_72 = w_72;
                                      }
                                    }
                                  }
                                }
                                t = s_60;
                                {
                                  ATerm y_72 = NULL,a_73 = NULL;
                                  ATerm z_72 = NULL;
                                  t = term_t_60;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      z_72 = t;
                                      if(((y_72 != NULL) && (y_72 != z_72)))
                                        _fail(z_72);
                                      else
                                        y_72 = z_72;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_72), term_r_60);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        a_73 = t;
                                        if(((x_72 != NULL) && (x_72 != a_73)))
                                          _fail(a_73);
                                        else
                                          x_72 = a_73;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_q_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_72)), term_e_39), not_null(t_72)), term_e_39), not_null(p_72)), term_e_39));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm u_60;
                                        u_60 = t;
                                        {
                                          ATerm c_73 = NULL,e_73 = NULL;
                                          ATerm d_73 = NULL;
                                          t = term_q_60;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              d_73 = t;
                                              if(((c_73 != NULL) && (c_73 != d_73)))
                                                _fail(d_73);
                                              else
                                                c_73 = d_73;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_73), term_c_61);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                e_73 = t;
                                                if(((b_73 != NULL) && (b_73 != e_73)))
                                                  _fail(e_73);
                                                else
                                                  b_73 = e_73;
                                              }
                                            }
                                          }
                                        }
                                        t = u_60;
                                        {
                                          ATerm g_73 = NULL,i_73 = NULL;
                                          ATerm h_73 = NULL;
                                          t = term_t_60;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              h_73 = t;
                                              if(((g_73 != NULL) && (g_73 != h_73)))
                                                _fail(h_73);
                                              else
                                                g_73 = h_73;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), term_c_61);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                i_73 = t;
                                                if(((f_73 != NULL) && (f_73 != i_73)))
                                                  _fail(i_73);
                                                else
                                                  f_73 = i_73;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_61), term_g_61), not_null(f_73)), term_d_61), term_f_61), term_e_61), not_null(b_73)), term_d_61));
                                            {
                                              t = set_config_0(t);
                                              {
                                                t = term_i_61;
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
  t = t_59;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm b_18 (ATerm t)
      {
        ATerm x_73 = NULL;
        t = term_s_52;
        {
          t = get_config_0(t);
          {
            ATerm y_73 = NULL;
            t = term_j_61;
            {
              t = xtc_find_0(t);
              {
                y_73 = t;
                if(((x_73 != NULL) && (x_73 != y_73)))
                  _fail(y_73);
                else
                  x_73 = y_73;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_73), term_j_20);
              {
                t = copy_file_0(t);
                {
                  t = term_t_18;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, b_18);
      {
        ATerm c_18 (ATerm t)
        {
          t = term_z_52;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_t_18;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, c_18);
        {
          ATerm k_61 = t;
          int o_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_61;
              p_61 = t;
              {
                t = term_j_37;
                t = get_config_0(t);
              }
              t = p_61;
              ;
              LocalPopChoice(o_61);
            }
          else
            {
              t = k_61;
              {
                t = (ATerm) ATinsert(ATempty, term_q_61);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm d_18 (ATerm t)
              {
                ATerm r_61;
                r_61 = t;
                {
                  t = term_j_37;
                  {
                    t = get_config_0(t);
                    {
                      ATerm f_18 (ATerm t)
                      {
                        t = term_s_61;
                        return(t);
                      }
                      t = debug_1(t, f_18);
                    }
                  }
                }
                t = r_61;
                return(t);
              }
              t = if_verbose1_1(t, d_18);
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
  ATerm t_61 = t;
  int u_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm g_18 (ATerm t)
        {
          ATerm h_18 (ATerm t)
          {
            ATerm d_74 = NULL;
            ATerm e_74 = NULL;
            e_74 = t;
            if(((d_74 != NULL) && (d_74 != e_74)))
              _fail(e_74);
            else
              d_74 = e_74;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(CheckATermList(not_null(d_74)), term_v_61));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, h_18);
          return(t);
        }
        t = profile_p__2(t, g_18, compile_0);
        {
          ATerm i_18 (ATerm t)
          {
            ATerm f_74 = NULL;
            ATerm g_74 = NULL;
            t = run_time_0(t);
            {
              g_74 = t;
              if(((f_74 != NULL) && (f_74 != g_74)))
                _fail(g_74);
              else
                f_74 = g_74;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_61), not_null(f_74)), term_w_61));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, i_18);
          {
            t = term_t_18;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(u_61);
    }
  else
    {
      t = t_61;
      {
        ATerm h_74 = NULL;
        ATerm i_74 = NULL;
        t = run_time_0(t);
        {
          i_74 = t;
          if(((h_74 != NULL) && (h_74 != i_74)))
            _fail(i_74);
          else
            h_74 = i_74;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_61), not_null(h_74)), term_y_61));
          {
            t = printnl_0(t);
            {
              t = term_m_27;
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
