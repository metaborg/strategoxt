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
Symbol sym_OpDeclQ_2;
Symbol sym_OpDeclInj_1;
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
Symbol sym_OpQ_2;
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
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_CongQ_2;
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
Symbol sym_SDefT_4;
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
  sym_OpDeclQ_2 = ATmakeSymbol("OpDeclQ", 2, ATfalse);
  ATprotectSymbol(sym_OpDeclQ_2);
  sym_OpDeclInj_1 = ATmakeSymbol("OpDeclInj", 1, ATfalse);
  ATprotectSymbol(sym_OpDeclInj_1);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  init_constant_terms();
}
ATerm term_v_83;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_p_83;
ATerm term_n_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_h_83;
ATerm term_g_83;
ATerm term_f_83;
ATerm term_e_83;
ATerm term_d_83;
ATerm term_c_83;
ATerm term_a_83;
ATerm term_y_82;
ATerm term_x_82;
ATerm term_v_82;
ATerm term_u_82;
ATerm term_t_82;
ATerm term_s_82;
ATerm term_q_82;
ATerm term_o_82;
ATerm term_n_82;
ATerm term_m_82;
ATerm term_l_82;
ATerm term_w_81;
ATerm term_j_81;
ATerm term_c_81;
ATerm term_a_81;
ATerm term_z_80;
ATerm term_u_80;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_q_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_z_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_s_79;
ATerm term_r_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_o_78;
ATerm term_n_78;
ATerm term_m_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_c_78;
ATerm term_z_77;
ATerm term_y_77;
ATerm term_v_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_m_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_f_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_y_76;
ATerm term_x_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_m_76;
ATerm term_l_76;
ATerm term_i_76;
ATerm term_f_76;
ATerm term_c_76;
ATerm term_z_75;
ATerm term_w_75;
ATerm term_t_75;
ATerm term_q_75;
ATerm term_f_75;
ATerm term_e_75;
ATerm term_d_75;
ATerm term_r_74;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_p_72;
ATerm term_m_72;
ATerm term_j_72;
ATerm term_f_72;
ATerm term_l_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_f_71;
ATerm term_b_70;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_o_68;
ATerm term_c_66;
ATerm term_y_65;
ATerm term_x_64;
ATerm term_j_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_h_63;
ATerm term_f_63;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_j_59;
ATerm term_d_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_q_57;
ATerm term_o_57;
ATerm term_l_57;
ATerm term_j_57;
ATerm term_f_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_d_51;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_r_49;
ATerm term_n_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_b_49;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_k_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_o_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_u_46;
ATerm term_b_46;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_q_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_e_45;
ATerm term_z_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_g_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_v_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_w_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_z_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_k_40;
ATerm term_c_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_m_38;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_g_33;
void init_constant_terms (void)
{
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym__2, term_u_45, term_w_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_o_47, term_p_48);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_48, term_j_33, term_u_48);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_49, term_t_44, term_g_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_v_49, term_w_49);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_49, term_l_50, term_m_50);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_50, term_p_50, term_d_51);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_51, term_h_51, term_i_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_n_51, term_o_51);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_51, term_x_51, term_e_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_52, term_h_52, term_o_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_52, term_s_52, term_t_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_w_52, term_x_52);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_52, term_a_53, term_b_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_53, term_j_53, term_k_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_v_53, term_w_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_54, term_d_54, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_54, term_h_54, term_i_54);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_54, term_l_54, term_m_54);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_54, term_p_54, term_q_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_t_54, term_u_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_54, term_x_54, term_y_54);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_55, term_b_55, term_c_55);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_55, term_f_55, term_g_55);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_55, term_j_55, term_k_55);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_55, term_a_56, term_b_56);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(sym__2, term_x_64, term_y_65);
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(sym__2, term_x_64, term_l_71);
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_u_44);
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(sym__2, term_u_46, term_u_44);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_u_44);
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(sym__2, term_s_40, term_u_44);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym__2, term_m_38, term_u_44);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_u_44);
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym__2, term_m_77, term_u_44);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_g_33);
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(sym__2, term_c_78, term_u_44);
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(sym__2, term_h_78, term_u_44);
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_m_78));
  term_m_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(sym__2, term_m_78, term_u_44);
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(sym__2, term_z_79, term_a_80);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(sym__2, term_q_80, term_u_44);
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym__3, term_z_79, term_a_80, (ATerm) ATempty);
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(sym__2, term_q_63, term_l_82);
  ATprotect(&(term_n_82));
  term_n_82 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_o_47);
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(sym__2, term_m_44, term_g_33);
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(sym__2, term_c_43, (ATerm) ATempty);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm foldr_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm);
ATerm crush_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_file_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm abox2text_0_0 (ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm output_canonical_0_0 (ATerm);
ATerm stratego_cf_0_0 (ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm output_optimized_0_0 (ATerm);
ATerm stratego_of_0_0 (ATerm);
ATerm optimize2_0_0 (ATerm);
ATerm desugar_case_0_0 (ATerm);
ATerm compile_match_0_0 (ATerm);
ATerm inline_0_0 (ATerm);
ATerm fusion_0_0 (ATerm);
ATerm optimize1_0_0 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm stratego_nf_0_0 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm extract_all_0_0 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm xtc_io_transform_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm add_main_0_0 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm h_79 (ATerm), ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm dep_name_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm f_99 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm assert_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm y_98 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm g_71 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm basename_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm basename_0_0 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm xtc_input_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm compile_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm self_children_sys_time_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm self_children_user_time_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm debug_1_0 (ATerm r_98 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm sc_announce_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm sc_version_0_0 (ATerm);
ATerm try_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm);
ATerm union_1_0 (ATerm w_90 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm table_remove_0_0 (ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm Nil_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm sc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm e_0 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm j_0 = NULL;
    t = not_null(e_0);
    if(((j_0 != NULL) && (j_0 != t)))
      _fail(t);
    else
      j_0 = t;
    t = not_null(e_0);
    t = SSL_exit(not_null(j_0));
    return(t);
  }
  if(((e_0 != NULL) && (e_0 != t)))
    _fail(t);
  else
    e_0 = t;
  t = u_0(t);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm v_1 = NULL,w_1 = NULL;
    t = not_null(b_1);
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    t = not_null(c_1);
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    t = not_null(a_1);
    {
      ATerm z_23;
      z_23 = t;
      t = SSL_printnl(not_null(v_1), not_null(w_1));
      t = z_23;
    }
    return(t);
  }
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = x_1(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm r_26 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = u_92(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = r_26;
      {
        ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
        ATerm c_3 (ATerm t)
        {
          ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
          t = not_null(w_2);
          if(((y_2 != NULL) && (y_2 != t)))
            _fail(t);
          else
            y_2 = t;
          t = not_null(x_2);
          if(((z_2 != NULL) && (z_2 != t)))
            _fail(t);
          else
            z_2 = t;
          t = not_null(v_2);
          {
            ATerm b_3 = NULL;
            ATerm d_3 (ATerm t)
            {
              t = not_null(b_3);
              if(((a_3 != NULL) && (a_3 != t)))
                _fail(t);
              else
                a_3 = t;
              t = not_null(b_3);
              return(t);
            }
            t = not_null(z_2);
            t = foldr_2_0(u_92, v_92, t);
            if(((b_3 != NULL) && (b_3 != t)))
              _fail(t);
            else
              b_3 = t;
            t = d_3(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_2), not_null(a_3));
            t = v_92(t);
          }
          return(t);
        }
        if(((v_2 != NULL) && (v_2 != t)))
          _fail(t);
        else
          v_2 = t;
        t = not_null(v_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_2 = ATgetFirst((ATermList) t);
            x_2 = (ATerm) ATgetNext((ATermList) t);
            t = c_3(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm j_3 = NULL,k_3 = NULL;
    t = not_null(i_3);
    if(((j_3 != NULL) && (j_3 != t)))
      _fail(t);
    else
      j_3 = t;
    t = not_null(i_3);
    {
      ATerm l_3 = NULL;
      ATerm r_3 (ATerm t)
      {
        ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
        ATerm s_3 (ATerm t)
        {
          t = not_null(p_3);
          if(((k_3 != NULL) && (k_3 != t)))
            _fail(t);
          else
            k_3 = t;
          t = not_null(n_3);
          return(t);
        }
        t = not_null(l_3);
        if(((m_3 != NULL) && (m_3 != t)))
          _fail(t);
        else
          m_3 = t;
        t = not_null(l_3);
        t = SSL_explode_term(not_null(m_3));
        if(((n_3 != NULL) && (n_3 != t)))
          _fail(t);
        else
          n_3 = t;
        t = not_null(n_3);
        if(match_cons(t, sym__2))
          {
            o_3 = ATgetArgument(t, 0);
            p_3 = ATgetArgument(t, 1);
            t = s_3(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = not_null(j_3);
      if(((l_3 != NULL) && (l_3 != t)))
        _fail(t);
      else
        l_3 = t;
      t = r_3(t);
      t = not_null(k_3);
      t = foldr_2_0(n_96, o_96, t);
    }
    return(t);
  }
  if(((i_3 != NULL) && (i_3 != t)))
    _fail(t);
  else
    i_3 = t;
  t = q_3(t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_g_33;
      return(t);
    }
    t = crush_2_0(c_0, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm h_33;
    h_33 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      ATerm w_3 (ATerm t)
      {
        t = not_null(v_3);
        if(((u_3 != NULL) && (u_3 != t)))
          _fail(t);
        else
          u_3 = t;
        t = not_null(v_3);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      t = w_3(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_j_33);
      t = geq_0_0(t);
    }
    t = h_33;
    t = j_100(t);
    return(t);
  }
  t = try_1_0(m_0, t);
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm d_4 = NULL,e_4 = NULL;
    t = not_null(c_4);
    if(((d_4 != NULL) && (d_4 != t)))
      _fail(t);
    else
      d_4 = t;
    t = not_null(b_4);
    {
      ATerm f_4 = NULL;
      ATerm j_4 (ATerm t)
      {
        ATerm g_4 = NULL;
        t = not_null(f_4);
        if(((e_4 != NULL) && (e_4 != t)))
          _fail(t);
        else
          e_4 = t;
        t = not_null(f_4);
        {
          ATerm h_4 = NULL;
          ATerm k_4 (ATerm t)
          {
            t = not_null(h_4);
            if(((g_4 != NULL) && (g_4 != t)))
              _fail(t);
            else
              g_4 = t;
            t = not_null(h_4);
            return(t);
          }
          t = term_k_33;
          t = get_config_0_0(t);
          if(((h_4 != NULL) && (h_4 != t)))
            _fail(t);
          else
            h_4 = t;
          t = k_4(t);
          t = (ATerm) ATmakeAppl(sym__2, term_l_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_m_33), not_null(d_4)));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = term_t_34;
          return(t);
        }
        t = say_1_0(t_0, t);
        return(t);
      }
      t = if_verbose2_1_0(s_0, t);
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_33;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            {
              ATerm v_0 (ATerm t)
              {
                t = term_w_34;
                return(t);
              }
              t = get_outfile_1_0(v_0, t);
            }
          }
        if(((f_4 != NULL) && (f_4 != t)))
          _fail(t);
        else
          f_4 = t;
        t = j_4(t);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_4));
    }
    return(t);
  }
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  t = not_null(b_4);
  if(match_cons(t, sym_FILE_1))
    {
      c_4 = ATgetArgument(t, 0);
      t = i_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm s_4 = NULL,t_4 = NULL;
    t = not_null(r_4);
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = not_null(q_4);
    {
      ATerm u_4 = NULL;
      ATerm a_5 (ATerm t)
      {
        ATerm v_4 = NULL;
        t = not_null(u_4);
        if(((t_4 != NULL) && (t_4 != t)))
          _fail(t);
        else
          t_4 = t;
        t = not_null(u_4);
        {
          ATerm w_4 = NULL,y_4 = NULL;
          ATerm c_5 (ATerm t)
          {
            t = not_null(y_4);
            if(((v_4 != NULL) && (v_4 != t)))
              _fail(t);
            else
              v_4 = t;
            t = not_null(y_4);
            return(t);
          }
          ATerm x_4 = NULL;
          ATerm b_5 (ATerm t)
          {
            t = not_null(x_4);
            if(((w_4 != NULL) && (w_4 != t)))
              _fail(t);
            else
              w_4 = t;
            t = not_null(x_4);
            return(t);
          }
          t = term_c_35;
          t = get_config_0_0(t);
          if(((x_4 != NULL) && (x_4 != t)))
            _fail(t);
          else
            x_4 = t;
          t = b_5(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_m_33), not_null(s_4)), term_d_35));
          t = conc_0_0(t);
          if(((y_4 != NULL) && (y_4 != t)))
            _fail(t);
          else
            y_4 = t;
          t = c_5(t);
          t = (ATerm) ATmakeAppl(sym__2, term_l_33, not_null(v_4));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = term_g_35;
          return(t);
        }
        t = say_1_0(x_0, t);
        return(t);
      }
      t = if_verbose2_1_0(w_0, t);
      {
        ATerm y_0 (ATerm t)
        {
          t = term_h_35;
          return(t);
        }
        t = get_outfile_1_0(y_0, t);
        if(((u_4 != NULL) && (u_4 != t)))
          _fail(t);
        else
          u_4 = t;
        t = a_5(t);
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_4));
    }
    return(t);
  }
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = not_null(q_4);
  if(match_cons(t, sym_FILE_1))
    {
      r_4 = ATgetArgument(t, 0);
      t = z_4(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35;
      p_35 = t;
      t = term_d_35;
      t = get_config_0_0(t);
      t = p_35;
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = i_35;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm e_5 = NULL;
            ATerm f_5 = NULL;
            ATerm g_5 (ATerm t)
            {
              t = not_null(f_5);
              if(((e_5 != NULL) && (e_5 != t)))
                _fail(t);
              else
                e_5 = t;
              t = not_null(f_5);
              return(t);
            }
            if(((f_5 != NULL) && (f_5 != t)))
              _fail(t);
            else
              f_5 = t;
            t = g_5(t);
            t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_x_35));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose1_1_0(e_1, t);
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = c_to_object_code_0_0(t);
          t = link_object_code_0_0(t);
          return(t);
        }
        t = profile_p__2_0(z_0, d_1, t);
      }
    }
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  ATerm o_5 (ATerm t)
  {
    ATerm m_5 = NULL,n_5 = NULL;
    t = not_null(k_5);
    if(((m_5 != NULL) && (m_5 != t)))
      _fail(t);
    else
      m_5 = t;
    t = not_null(l_5);
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    t = not_null(j_5);
    t = SSL_rename(not_null(m_5), not_null(n_5));
    return(t);
  }
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = not_null(j_5);
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
      t = o_5(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  ATerm i_6 (ATerm t)
  {
    ATerm a_6 = NULL;
    t = not_null(z_5);
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    t = not_null(y_5);
    {
      ATerm b_6 = NULL;
      ATerm l_6 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_y_35);
        t = copy_file_0_0(t);
        t = not_null(a_6);
        t = remove_file_0_0(t);
        return(t);
      }
      t = r_0(t);
      if(((b_6 != NULL) && (b_6 != t)))
        _fail(t);
      else
        b_6 = t;
      t = not_null(b_6);
      if(match_cons(t, sym_stdout_0))
        {
          t = l_6(t);
        }
      else
        {
          _fail(t);
        }
      t = term_y_35;
    }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    ATerm c_6 = NULL,d_6 = NULL;
    t = not_null(z_5);
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    t = not_null(y_5);
    {
      ATerm e_6 = NULL;
      ATerm m_6 (ATerm t)
      {
        t = not_null(e_6);
        if(((d_6 != NULL) && (d_6 != t)))
          _fail(t);
        else
          d_6 = t;
        t = not_null(e_6);
        {
          ATerm z_35 = t;
          if((PushChoice() == 0))
            {
              ATerm a_36 = t;
              int b_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(b_36);
                }
              else
                {
                  t = a_36;
                  {
                    ATerm f_6 = NULL;
                    ATerm n_6 (ATerm t)
                    {
                      t = not_null(f_6);
                      if(((c_6 != NULL) && (c_6 != t)))
                        _fail(t);
                      else
                        c_6 = t;
                      t = not_null(f_6);
                      return(t);
                    }
                    if(((f_6 != NULL) && (f_6 != t)))
                      _fail(t);
                    else
                      f_6 = t;
                    t = n_6(t);
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_35;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_6), not_null(d_6));
          t = rename_file_0_0(t);
        }
        return(t);
      }
      t = r_0(t);
      if(((e_6 != NULL) && (e_6 != t)))
        _fail(t);
      else
        e_6 = t;
      t = m_6(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_6));
    }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm g_6 = NULL;
    t = not_null(z_5);
    if(((g_6 != NULL) && (g_6 != t)))
      _fail(t);
    else
      g_6 = t;
    t = not_null(y_5);
    {
      ATerm h_6 = NULL;
      ATerm o_6 (ATerm t)
      {
        t = not_null(h_6);
        if(((g_6 != NULL) && (g_6 != t)))
          _fail(t);
        else
          g_6 = t;
        t = not_null(h_6);
        return(t);
      }
      t = r_0(t);
      if(((h_6 != NULL) && (h_6 != t)))
        _fail(t);
      else
        h_6 = t;
      t = o_6(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_6));
    }
    return(t);
  }
  if(((y_5 != NULL) && (y_5 != t)))
    _fail(t);
  else
    y_5 = t;
  t = not_null(y_5);
  if(match_cons(t, sym_FILE_1))
    {
      z_5 = ATgetArgument(t, 0);
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_6(t);
            ;
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            {
              ATerm u_36 = t;
              int v_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_6(t);
                  ;
                  LocalPopChoice(v_36);
                }
              else
                {
                  t = u_36;
                  t = k_6(t);
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
ATerm xtc_transform_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(y_108, f_1, t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_c_37;
    return(t);
  }
  t = xtc_transform_1_0(g_1, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_d_37;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    ATerm s_6 (ATerm t)
    {
      t = not_null(r_6);
      if(((q_6 != NULL) && (q_6 != t)))
        _fail(t);
      else
        q_6 = t;
      t = not_null(r_6);
      return(t);
    }
    t = term_i_37;
    t = xtc_find_0_0(t);
    if(((r_6 != NULL) && (r_6 != t)))
      _fail(t);
    else
      r_6 = t;
    t = s_6(t);
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_j_37);
    return(t);
  }
  t = xtc_transform_2_0(h_1, i_1, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_q_37;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm s_37;
    s_37 = t;
    {
      ATerm x_6 = NULL;
      ATerm c_7 (ATerm t)
      {
        t = not_null(x_6);
        if(((w_6 != NULL) && (w_6 != t)))
          _fail(t);
        else
          w_6 = t;
        t = not_null(x_6);
        return(t);
      }
      t = pass_verbose_0_0(t);
      if(((x_6 != NULL) && (x_6 != t)))
        _fail(t);
      else
        x_6 = t;
      t = c_7(t);
    }
    t = s_37;
    {
      ATerm b_7 = NULL;
      ATerm e_7 (ATerm t)
      {
        t = not_null(b_7);
        if(((y_6 != NULL) && (y_6 != t)))
          _fail(t);
        else
          y_6 = t;
        t = not_null(b_7);
        return(t);
      }
      t = term_t_37;
      t = get_config_0_0(t);
      {
        ATerm l_1 (ATerm t)
        {
          ATerm z_6 = NULL;
          ATerm a_7 = NULL;
          ATerm d_7 (ATerm t)
          {
            t = not_null(a_7);
            if(((z_6 != NULL) && (z_6 != t)))
              _fail(t);
            else
              z_6 = t;
            t = not_null(a_7);
            return(t);
          }
          if(((a_7 != NULL) && (a_7 != t)))
            _fail(t);
          else
            a_7 = t;
          t = d_7(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_t_37);
          return(t);
        }
        t = map_1_0(l_1, t);
        if(((b_7 != NULL) && (b_7 != t)))
          _fail(t);
        else
          b_7 = t;
        t = e_7(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_w_37)), not_null(w_6));
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(j_1, k_1, t);
  return(t);
}
ATerm output_canonical_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm x_37;
    x_37 = t;
    {
      ATerm n_1 (ATerm t)
      {
        t = term_y_37;
        return(t);
      }
      t = debug_1_0(n_1, t);
      {
        ATerm i_38;
        i_38 = t;
        t = term_m_38;
        t = get_config_0_0(t);
        t = i_38;
        {
          ATerm o_1 (ATerm t)
          {
            ATerm k_7 = NULL;
            ATerm o_7 (ATerm t)
            {
              t = not_null(k_7);
              if(((i_7 != NULL) && (i_7 != t)))
                _fail(t);
              else
                i_7 = t;
              t = not_null(k_7);
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_q_38;
              return(t);
            }
            t = get_outfile_1_0(p_1, t);
            if(((k_7 != NULL) && (k_7 != t)))
              _fail(t);
            else
              k_7 = t;
            t = o_7(t);
            return(t);
          }
          t = copy_to_1_0(o_1, t);
          {
            ATerm q_1 (ATerm t)
            {
              t = term_r_38;
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm l_7 = NULL;
              ATerm m_7 = NULL;
              ATerm p_7 (ATerm t)
              {
                t = not_null(m_7);
                if(((l_7 != NULL) && (l_7 != t)))
                  _fail(t);
                else
                  l_7 = t;
                t = not_null(m_7);
                return(t);
              }
              t = pass_verbose_0_0(t);
              if(((m_7 != NULL) && (m_7 != t)))
                _fail(t);
              else
                m_7 = t;
              t = p_7(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_t_38), term_s_38);
              return(t);
            }
            t = xtc_transform_2_0(q_1, r_1, t);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm n_7 = NULL;
                ATerm q_7 (ATerm t)
                {
                  t = not_null(n_7);
                  if(((j_7 != NULL) && (j_7 != t)))
                    _fail(t);
                  else
                    j_7 = t;
                  t = not_null(n_7);
                  return(t);
                }
                ATerm t_1 (ATerm t)
                {
                  t = term_f_39;
                  return(t);
                }
                t = get_outfile_1_0(t_1, t);
                if(((n_7 != NULL) && (n_7 != t)))
                  _fail(t);
                else
                  n_7 = t;
                t = q_7(t);
                return(t);
              }
              t = copy_to_1_0(s_1, t);
              {
                ATerm u_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_g_39);
                  return(t);
                }
                t = say_1_0(u_1, t);
              }
            }
          }
        }
      }
    }
    t = x_37;
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_h_39;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm s_7 = NULL;
    ATerm t_7 = NULL;
    ATerm u_7 (ATerm t)
    {
      t = not_null(t_7);
      if(((s_7 != NULL) && (s_7 != t)))
        _fail(t);
      else
        s_7 = t;
      t = not_null(t_7);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = u_7(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(y_1, z_1, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_i_39;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm w_7 = NULL;
    ATerm x_7 = NULL;
    ATerm y_7 (ATerm t)
    {
      t = not_null(x_7);
      if(((w_7 != NULL) && (w_7 != t)))
        _fail(t);
      else
        w_7 = t;
      t = not_null(x_7);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = y_7(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(a_2, b_2, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      t = term_u_39;
      return(t);
    }
    t = debug_1_0(d_2, t);
    return(t);
  }
  t = if_verbose2_1_0(c_2, t);
  {
    ATerm e_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm a_8 = NULL;
        ATerm b_8 = NULL;
        ATerm c_8 (ATerm t)
        {
          t = not_null(b_8);
          if(((a_8 != NULL) && (a_8 != t)))
            _fail(t);
          else
            a_8 = t;
          t = not_null(b_8);
          return(t);
        }
        if(((b_8 != NULL) && (b_8 != t)))
          _fail(t);
        else
          b_8 = t;
        t = c_8(t);
        t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_v_39));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(g_2, t);
      return(t);
    }
    ATerm f_2 (ATerm t)
    {
      t = canonicalize_0_0(t);
      t = stratego_cf_0_0(t);
      t = output_canonical_0_0(t);
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      t = abox2text_0_0(t);
      {
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            t = term_c_40;
            return(t);
          }
          t = get_outfile_1_0(i_2, t);
          return(t);
        }
        t = rename_to_1_0(h_2, t);
      }
      return(t);
    }
    t = profile_p__2_0(e_2, f_2, t);
  }
  return(t);
}
ATerm output_optimized_0_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm g_40;
    g_40 = t;
    {
      ATerm k_2 (ATerm t)
      {
        t = term_k_40;
        return(t);
      }
      t = debug_1_0(k_2, t);
      {
        ATerm l_40;
        l_40 = t;
        t = term_s_40;
        t = get_config_0_0(t);
        t = l_40;
        {
          ATerm l_2 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm m_8 (ATerm t)
            {
              t = not_null(i_8);
              if(((g_8 != NULL) && (g_8 != t)))
                _fail(t);
              else
                g_8 = t;
              t = not_null(i_8);
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_t_40;
              return(t);
            }
            t = get_outfile_1_0(m_2, t);
            if(((i_8 != NULL) && (i_8 != t)))
              _fail(t);
            else
              i_8 = t;
            t = m_8(t);
            return(t);
          }
          t = copy_to_1_0(l_2, t);
          {
            ATerm n_2 (ATerm t)
            {
              t = term_r_38;
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm j_8 = NULL;
              ATerm k_8 = NULL;
              ATerm n_8 (ATerm t)
              {
                t = not_null(k_8);
                if(((j_8 != NULL) && (j_8 != t)))
                  _fail(t);
                else
                  j_8 = t;
                t = not_null(k_8);
                return(t);
              }
              t = pass_verbose_0_0(t);
              if(((k_8 != NULL) && (k_8 != t)))
                _fail(t);
              else
                k_8 = t;
              t = n_8(t);
              t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), term_s_38);
              return(t);
            }
            t = xtc_transform_2_0(n_2, o_2, t);
            {
              ATerm p_2 (ATerm t)
              {
                ATerm l_8 = NULL;
                ATerm o_8 (ATerm t)
                {
                  t = not_null(l_8);
                  if(((h_8 != NULL) && (h_8 != t)))
                    _fail(t);
                  else
                    h_8 = t;
                  t = not_null(l_8);
                  return(t);
                }
                ATerm q_2 (ATerm t)
                {
                  t = term_z_40;
                  return(t);
                }
                t = get_outfile_1_0(q_2, t);
                if(((l_8 != NULL) && (l_8 != t)))
                  _fail(t);
                else
                  l_8 = t;
                t = o_8(t);
                return(t);
              }
              t = copy_to_1_0(p_2, t);
              {
                ATerm r_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_g_39);
                  return(t);
                }
                t = say_1_0(r_2, t);
              }
            }
          }
        }
      }
    }
    t = g_40;
    return(t);
  }
  t = try_1_0(j_2, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_d_41;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm q_8 = NULL;
    ATerm r_8 = NULL;
    ATerm s_8 (ATerm t)
    {
      t = not_null(r_8);
      if(((q_8 != NULL) && (q_8 != t)))
        _fail(t);
      else
        q_8 = t;
      t = not_null(r_8);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    t = s_8(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(s_2, t_2, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_e_41;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm u_8 = NULL;
    ATerm v_8 = NULL;
    ATerm w_8 (ATerm t)
    {
      t = not_null(v_8);
      if(((u_8 != NULL) && (u_8 != t)))
        _fail(t);
      else
        u_8 = t;
      t = not_null(v_8);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((v_8 != NULL) && (v_8 != t)))
      _fail(t);
    else
      v_8 = t;
    t = w_8(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(u_2, e_3, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_k_41;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm y_8 = NULL;
    ATerm z_8 = NULL;
    ATerm a_9 (ATerm t)
    {
      t = not_null(z_8);
      if(((y_8 != NULL) && (y_8 != t)))
        _fail(t);
      else
        y_8 = t;
      t = not_null(z_8);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = a_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(f_3, g_3, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = term_l_41;
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm c_9 = NULL;
    ATerm d_9 = NULL;
    ATerm e_9 (ATerm t)
    {
      t = not_null(d_9);
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      t = not_null(d_9);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = e_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(h_3, t_3, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_m_41;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm g_9 = NULL;
    ATerm h_9 = NULL;
    ATerm i_9 (ATerm t)
    {
      t = not_null(h_9);
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
      t = not_null(h_9);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((h_9 != NULL) && (h_9 != t)))
      _fail(t);
    else
      h_9 = t;
    t = i_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(x_3, y_3, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_w_41;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm k_9 = NULL;
    ATerm l_9 = NULL;
    ATerm m_9 (ATerm t)
    {
      t = not_null(l_9);
      if(((k_9 != NULL) && (k_9 != t)))
        _fail(t);
      else
        k_9 = t;
      t = not_null(l_9);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = m_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(z_3, a_4, t);
  return(t);
}
ATerm optimize1_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_x_41;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm o_9 = NULL;
    ATerm p_9 = NULL;
    ATerm q_9 (ATerm t)
    {
      t = not_null(p_9);
      if(((o_9 != NULL) && (o_9 != t)))
        _fail(t);
      else
        o_9 = t;
      t = not_null(p_9);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    t = q_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(l_4, m_4, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      t = term_f_42;
      return(t);
    }
    t = debug_1_0(o_4, t);
    return(t);
  }
  t = if_verbose2_1_0(n_4, t);
  {
    ATerm p_4 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        ATerm s_9 = NULL;
        ATerm t_9 = NULL;
        ATerm u_9 (ATerm t)
        {
          t = not_null(t_9);
          if(((s_9 != NULL) && (s_9 != t)))
            _fail(t);
          else
            s_9 = t;
          t = not_null(t_9);
          return(t);
        }
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        t = u_9(t);
        t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_g_42));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(h_5, t);
      return(t);
    }
    ATerm d_5 (ATerm t)
    {
      t = optimize1_0_0(t);
      {
        ATerm i_5 (ATerm t)
        {
          ATerm h_42;
          h_42 = t;
          {
            ATerm i_42 = t;
            if((PushChoice() == 0))
              {
                t = term_s_42;
                t = get_config_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_42;
              }
          }
          t = h_42;
          t = fusion_0_0(t);
          return(t);
        }
        t = try_1_0(i_5, t);
        t = inline_0_0(t);
        t = compile_match_0_0(t);
        t = desugar_case_0_0(t);
        t = optimize2_0_0(t);
        t = stratego_of_0_0(t);
        t = output_optimized_0_0(t);
      }
      return(t);
    }
    t = profile_p__2_0(p_4, d_5, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = term_t_42;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm w_9 = NULL;
    ATerm x_9 = NULL;
    ATerm y_9 (ATerm t)
    {
      t = not_null(x_9);
      if(((w_9 != NULL) && (w_9 != t)))
        _fail(t);
      else
        w_9 = t;
      t = not_null(x_9);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = y_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(p_5, q_5, t);
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    t = term_u_42;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm a_10 = NULL;
    ATerm b_10 = NULL;
    ATerm c_10 (ATerm t)
    {
      t = not_null(b_10);
      if(((a_10 != NULL) && (a_10 != t)))
        _fail(t);
      else
        a_10 = t;
      t = not_null(b_10);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = c_10(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(r_5, s_5, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    t = term_w_42;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm g_10 = NULL,i_10 = NULL;
    ATerm b_43;
    b_43 = t;
    {
      ATerm h_10 = NULL;
      ATerm m_10 (ATerm t)
      {
        t = not_null(h_10);
        if(((g_10 != NULL) && (g_10 != t)))
          _fail(t);
        else
          g_10 = t;
        t = not_null(h_10);
        return(t);
      }
      t = pass_verbose_0_0(t);
      if(((h_10 != NULL) && (h_10 != t)))
        _fail(t);
      else
        h_10 = t;
      t = m_10(t);
    }
    t = b_43;
    {
      ATerm l_10 = NULL;
      ATerm o_10 (ATerm t)
      {
        t = not_null(l_10);
        if(((i_10 != NULL) && (i_10 != t)))
          _fail(t);
        else
          i_10 = t;
        t = not_null(l_10);
        return(t);
      }
      t = term_c_43;
      t = get_config_0_0(t);
      {
        ATerm v_5 (ATerm t)
        {
          ATerm j_10 = NULL;
          ATerm k_10 = NULL;
          ATerm n_10 (ATerm t)
          {
            t = not_null(k_10);
            if(((j_10 != NULL) && (j_10 != t)))
              _fail(t);
            else
              j_10 = t;
            t = not_null(k_10);
            return(t);
          }
          if(((k_10 != NULL) && (k_10 != t)))
            _fail(t);
          else
            k_10 = t;
          t = n_10(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_10)), term_c_43);
          return(t);
        }
        t = map_1_0(v_5, t);
        if(((l_10 != NULL) && (l_10 != t)))
          _fail(t);
        else
          l_10 = t;
        t = o_10(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_10)), (ATerm) ATinsert(ATempty, term_w_37)), not_null(g_10));
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(t_5, u_5, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    t = term_d_43;
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm q_10 = NULL;
    ATerm r_10 = NULL;
    ATerm s_10 (ATerm t)
    {
      t = not_null(r_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = not_null(r_10);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = s_10(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(w_5, x_5, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    t = term_e_43;
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm u_10 = NULL;
    ATerm v_10 = NULL;
    ATerm w_10 (ATerm t)
    {
      t = not_null(v_10);
      if(((u_10 != NULL) && (u_10 != t)))
        _fail(t);
      else
        u_10 = t;
      t = not_null(v_10);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = w_10(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(p_6, t_6, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm u_6 (ATerm t)
  {
    ATerm r_43;
    r_43 = t;
    t = term_v_43;
    t = get_config_0_0(t);
    t = r_43;
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0_0(t);
          ;
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          t = (ATerm) ATinsert(ATempty, term_b_44);
          t = fatal_error_0_0(t);
        }
      {
        ATerm v_6 (ATerm t)
        {
          ATerm z_10 = NULL;
          ATerm a_11 (ATerm t)
          {
            t = not_null(z_10);
            if(((y_10 != NULL) && (y_10 != t)))
              _fail(t);
            else
              y_10 = t;
            t = not_null(z_10);
            return(t);
          }
          ATerm f_7 (ATerm t)
          {
            t = term_c_44;
            return(t);
          }
          t = get_outfile_1_0(f_7, t);
          if(((z_10 != NULL) && (z_10 != t)))
            _fail(t);
          else
            z_10 = t;
          t = a_11(t);
          return(t);
        }
        t = copy_to_1_0(v_6, t);
        {
          ATerm g_7 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_g_44);
            return(t);
          }
          t = say_1_0(g_7, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(u_6, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm h_44;
    h_44 = t;
    {
      ATerm c_11 = NULL;
      ATerm d_11 = NULL;
      ATerm e_11 (ATerm t)
      {
        t = not_null(d_11);
        if(((c_11 != NULL) && (c_11 != t)))
          _fail(t);
        else
          c_11 = t;
        t = not_null(d_11);
        return(t);
      }
      t = term_m_44;
      t = get_config_0_0(t);
      if(((d_11 != NULL) && (d_11 != t)))
        _fail(t);
      else
        d_11 = t;
      t = e_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_j_33);
      t = geq_0_0(t);
    }
    t = h_44;
    t = l_101(t);
    return(t);
  }
  t = try_1_0(h_7, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm r_7 (ATerm t)
  {
    t = term_n_44;
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    ATerm h_11 = NULL;
    ATerm i_11 = NULL;
    ATerm l_11 (ATerm t)
    {
      t = not_null(i_11);
      if(((h_11 != NULL) && (h_11 != t)))
        _fail(t);
      else
        h_11 = t;
      t = not_null(i_11);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = l_11(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(h_11)), term_w_37);
    return(t);
  }
  t = xtc_transform_2_0(r_7, v_7, t);
  {
    ATerm z_7 (ATerm t)
    {
      ATerm d_8 (ATerm t)
      {
        ATerm k_11 = NULL;
        ATerm m_11 (ATerm t)
        {
          t = not_null(k_11);
          if(((j_11 != NULL) && (j_11 != t)))
            _fail(t);
          else
            j_11 = t;
          t = not_null(k_11);
          return(t);
        }
        ATerm e_8 (ATerm t)
        {
          t = term_o_44;
          return(t);
        }
        t = get_outfile_1_0(e_8, t);
        if(((k_11 != NULL) && (k_11 != t)))
          _fail(t);
        else
          k_11 = t;
        t = m_11(t);
        return(t);
      }
      t = copy_to_1_0(d_8, t);
      {
        ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_p_44);
          return(t);
        }
        t = say_1_0(f_8, t);
      }
      return(t);
    }
    t = if_keep2_1_0(z_7, t);
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm q_44;
    q_44 = t;
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      ATerm q_11 (ATerm t)
      {
        t = not_null(p_11);
        if(((o_11 != NULL) && (o_11 != t)))
          _fail(t);
        else
          o_11 = t;
        t = not_null(p_11);
        return(t);
      }
      t = term_m_44;
      t = get_config_0_0(t);
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = q_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_t_44);
      t = geq_0_0(t);
    }
    t = q_44;
    t = m_101(t);
    return(t);
  }
  t = try_1_0(p_8, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  ATerm z_11 (ATerm t)
  {
    ATerm w_11 = NULL,x_11 = NULL;
    t = not_null(v_11);
    if(((w_11 != NULL) && (w_11 != t)))
      _fail(t);
    else
      w_11 = t;
    t = not_null(u_11);
    {
      ATerm y_11 = NULL;
      ATerm a_12 (ATerm t)
      {
        t = not_null(y_11);
        if(((x_11 != NULL) && (x_11 != t)))
          _fail(t);
        else
          x_11 = t;
        t = not_null(y_11);
        return(t);
      }
      t = term_u_44;
      t = g_79(t);
      if(((y_11 != NULL) && (y_11 != t)))
        _fail(t);
      else
        y_11 = t;
      t = a_12(t);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(w_11)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_z_44, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_11)), (ATerm) ATempty))))));
    }
    return(t);
  }
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  t = not_null(u_11);
  if(match_cons(t, sym_Specification_1))
    {
      v_11 = ATgetArgument(t, 0);
      t = z_11(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = i_109(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL;
  ATerm t_8 (ATerm t)
  {
    ATerm a_45;
    a_45 = t;
    {
      ATerm e_12 = NULL;
      ATerm h_12 (ATerm t)
      {
        t = not_null(e_12);
        if(((d_12 != NULL) && (d_12 != t)))
          _fail(t);
        else
          d_12 = t;
        t = not_null(e_12);
        {
          ATerm x_8 (ATerm t)
          {
            ATerm b_9 (ATerm t)
            {
              t = term_e_45;
              return(t);
            }
            t = debug_1_0(b_9, t);
            return(t);
          }
          t = if_verbose2_1_0(x_8, t);
        }
        return(t);
      }
      t = term_i_45;
      t = get_config_0_0(t);
      if(((e_12 != NULL) && (e_12 != t)))
        _fail(t);
      else
        e_12 = t;
      t = h_12(t);
    }
    t = a_45;
    {
      ATerm f_9 (ATerm t)
      {
        ATerm j_9 (ATerm t)
        {
          t = not_null(d_12);
          return(t);
        }
        t = AddMain_1_0(j_9, t);
        return(t);
      }
      t = xtc_io_transform_1_0(f_9, t);
    }
    return(t);
  }
  t = try_1_0(t_8, t);
  {
    ATerm n_9 (ATerm t)
    {
      ATerm r_9 (ATerm t)
      {
        ATerm g_12 = NULL;
        ATerm i_12 (ATerm t)
        {
          t = not_null(g_12);
          if(((f_12 != NULL) && (f_12 != t)))
            _fail(t);
          else
            f_12 = t;
          t = not_null(g_12);
          return(t);
        }
        ATerm v_9 (ATerm t)
        {
          t = term_m_45;
          return(t);
        }
        t = get_outfile_1_0(v_9, t);
        if(((g_12 != NULL) && (g_12 != t)))
          _fail(t);
        else
          g_12 = t;
        t = i_12(t);
        return(t);
      }
      t = copy_to_1_0(r_9, t);
      {
        ATerm z_9 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_12)), term_q_45);
          return(t);
        }
        t = say_1_0(z_9, t);
      }
      return(t);
    }
    t = if_keep3_1_0(n_9, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm t_12 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
    t = not_null(m_12);
    if(((n_12 != NULL) && (n_12 != t)))
      _fail(t);
    else
      n_12 = t;
    t = not_null(m_12);
    {
      ATerm d_10 (ATerm t)
      {
        ATerm t_45;
        t_45 = t;
        {
          ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
          ATerm u_12 (ATerm t)
          {
            t = not_null(r_12);
            if(((p_12 != NULL) && (p_12 != t)))
              _fail(t);
            else
              p_12 = t;
            t = not_null(s_12);
            if(((o_12 != NULL) && (o_12 != t)))
              _fail(t);
            else
              o_12 = t;
            t = not_null(p_12);
            {
              ATerm e_10 (ATerm t)
              {
                t = try_1_0(remove_file_0_0, t);
                return(t);
              }
              t = map_1_0(e_10, t);
            }
            return(t);
          }
          t = term_x_45;
          t = table_get_0_0(t);
          if(((q_12 != NULL) && (q_12 != t)))
            _fail(t);
          else
            q_12 = t;
          t = not_null(q_12);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_12 = ATgetFirst((ATermList) t);
              s_12 = (ATerm) ATgetNext((ATermList) t);
              t = u_12(t);
            }
          else
            {
              _fail(t);
            }
        }
        t = t_45;
        {
          ATerm f_10 (ATerm t)
          {
            t = term_u_45;
            return(t);
          }
          t = end_scope_1_0(f_10, t);
        }
        return(t);
      }
      t = repeat_1_0(d_10, t);
      t = exit_0_0(t);
    }
    return(t);
  }
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = t_12(t);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm p_10 (ATerm t)
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
        t = term_y_35;
      }
    return(t);
  }
  t = copy_to_1_0(p_10, t);
  t = term_g_33;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL;
  ATerm a_46;
  a_46 = t;
  {
    ATerm y_12 = NULL;
    ATerm b_13 (ATerm t)
    {
      t = not_null(y_12);
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = not_null(y_12);
      return(t);
    }
    t = h_79(t);
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = b_13(t);
  }
  t = a_46;
  {
    ATerm a_13 = NULL;
    ATerm c_13 (ATerm t)
    {
      t = not_null(a_13);
      if(((z_12 != NULL) && (z_12 != t)))
        _fail(t);
      else
        z_12 = t;
      t = not_null(a_13);
      return(t);
    }
    t = term_b_46;
    t = get_config_0_0(t);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = c_13(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), not_null(x_12));
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  ATerm n_13 (ATerm t)
  {
    ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL;
    t = not_null(h_13);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = not_null(h_13);
    {
      ATerm c_46;
      c_46 = t;
      {
        ATerm k_13 = NULL;
        ATerm o_13 (ATerm t)
        {
          t = not_null(k_13);
          if(((j_13 != NULL) && (j_13 != t)))
            _fail(t);
          else
            j_13 = t;
          t = not_null(k_13);
          return(t);
        }
        t = SSLgetAnnotations(not_null(i_13));
        if(((k_13 != NULL) && (k_13 != t)))
          _fail(t);
        else
          k_13 = t;
        t = o_13(t);
      }
      t = c_46;
      {
        ATerm m_13 = NULL;
        ATerm p_13 (ATerm t)
        {
          t = not_null(m_13);
          if(((l_13 != NULL) && (l_13 != t)))
            _fail(t);
          else
            l_13 = t;
          t = not_null(m_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_13));
        if(((m_13 != NULL) && (m_13 != t)))
          _fail(t);
        else
          m_13 = t;
        t = p_13(t);
        t = not_null(l_13);
      }
    }
    return(t);
  }
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = not_null(h_13);
  if(match_cons(t, sym_stderr_0))
    {
      t = n_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm a_14 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL,y_13 = NULL;
    t = not_null(u_13);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = not_null(u_13);
    {
      ATerm d_46;
      d_46 = t;
      {
        ATerm x_13 = NULL;
        ATerm b_14 (ATerm t)
        {
          t = not_null(x_13);
          if(((w_13 != NULL) && (w_13 != t)))
            _fail(t);
          else
            w_13 = t;
          t = not_null(x_13);
          return(t);
        }
        t = SSLgetAnnotations(not_null(v_13));
        if(((x_13 != NULL) && (x_13 != t)))
          _fail(t);
        else
          x_13 = t;
        t = b_14(t);
      }
      t = d_46;
      {
        ATerm z_13 = NULL;
        ATerm c_14 (ATerm t)
        {
          t = not_null(z_13);
          if(((y_13 != NULL) && (y_13 != t)))
            _fail(t);
          else
            y_13 = t;
          t = not_null(z_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(w_13));
        if(((z_13 != NULL) && (z_13 != t)))
          _fail(t);
        else
          z_13 = t;
        t = c_14(t);
        t = not_null(y_13);
      }
    }
    return(t);
  }
  if(((u_13 != NULL) && (u_13 != t)))
    _fail(t);
  else
    u_13 = t;
  t = not_null(u_13);
  if(match_cons(t, sym_stdout_0))
    {
      t = a_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  ATerm w_14 (ATerm t)
  {
    ATerm n_14 = NULL,o_14 = NULL;
    t = not_null(m_14);
    if(((n_14 != NULL) && (n_14 != t)))
      _fail(t);
    else
      n_14 = t;
    t = not_null(l_14);
    {
      ATerm p_14 = NULL;
      ATerm z_14 (ATerm t)
      {
        t = not_null(p_14);
        if(((o_14 != NULL) && (o_14 != t)))
          _fail(t);
        else
          o_14 = t;
        t = not_null(p_14);
        {
          ATerm e_46 = t;
          int f_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(f_46);
            }
          else
            {
              t = e_46;
              t = stderr_0_0(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(o_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = z_14(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_14));
    }
    return(t);
  }
  ATerm x_14 (ATerm t)
  {
    ATerm q_14 = NULL,r_14 = NULL;
    t = not_null(m_14);
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    t = not_null(l_14);
    {
      ATerm s_14 = NULL;
      ATerm a_15 (ATerm t)
      {
        t = not_null(s_14);
        if(((r_14 != NULL) && (r_14 != t)))
          _fail(t);
        else
          r_14 = t;
        t = not_null(s_14);
        {
          ATerm g_46 = t;
          if((PushChoice() == 0))
            {
              ATerm h_46 = t;
              int i_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(i_46);
                }
              else
                {
                  t = h_46;
                  {
                    ATerm j_46 = t;
                    int k_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stderr_0_0(t);
                        ;
                        LocalPopChoice(k_46);
                      }
                    else
                      {
                        t = j_46;
                        {
                          ATerm t_14 = NULL;
                          ATerm b_15 (ATerm t)
                          {
                            t = not_null(t_14);
                            if(((q_14 != NULL) && (q_14 != t)))
                              _fail(t);
                            else
                              q_14 = t;
                            t = not_null(t_14);
                            return(t);
                          }
                          if(((t_14 != NULL) && (t_14 != t)))
                            _fail(t);
                          else
                            t_14 = t;
                          t = b_15(t);
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_46;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(r_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((s_14 != NULL) && (s_14 != t)))
        _fail(t);
      else
        s_14 = t;
      t = a_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_14));
    }
    return(t);
  }
  ATerm y_14 (ATerm t)
  {
    ATerm u_14 = NULL;
    t = not_null(m_14);
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = not_null(l_14);
    {
      ATerm v_14 = NULL;
      ATerm c_15 (ATerm t)
      {
        t = not_null(v_14);
        if(((u_14 != NULL) && (u_14 != t)))
          _fail(t);
        else
          u_14 = t;
        t = not_null(v_14);
        return(t);
      }
      t = q_0(t);
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = c_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
    }
    return(t);
  }
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = not_null(l_14);
  if(match_cons(t, sym_FILE_1))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_14(t);
            ;
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            {
              ATerm r_46 = t;
              int s_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_14(t);
                  ;
                  LocalPopChoice(s_46);
                }
              else
                {
                  t = r_46;
                  t = y_14(t);
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
ATerm output_ast_0_0 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm t_10 (ATerm t)
  {
    ATerm t_46;
    t_46 = t;
    t = term_u_46;
    t = get_config_0_0(t);
    t = t_46;
    {
      ATerm x_10 (ATerm t)
      {
        ATerm f_15 = NULL;
        ATerm g_15 (ATerm t)
        {
          t = not_null(f_15);
          if(((e_15 != NULL) && (e_15 != t)))
            _fail(t);
          else
            e_15 = t;
          t = not_null(f_15);
          return(t);
        }
        ATerm b_11 (ATerm t)
        {
          t = term_z_46;
          return(t);
        }
        t = get_outfile_1_0(b_11, t);
        if(((f_15 != NULL) && (f_15 != t)))
          _fail(t);
        else
          f_15 = t;
        t = g_15(t);
        return(t);
      }
      t = copy_to_1_0(x_10, t);
      {
        ATerm a_47;
        a_47 = t;
        t = (ATerm) ATinsert(ATempty, term_b_47);
        t = echo_0_0(t);
        t = a_47;
        t = xtc_io_exit_0_0(t);
      }
    }
    return(t);
  }
  t = try_1_0(t_10, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm k_15 = NULL,m_15 = NULL;
  ATerm o_15 (ATerm t)
  {
    t = not_null(m_15);
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = not_null(m_15);
    return(t);
  }
  ATerm l_15 = NULL;
  ATerm n_15 (ATerm t)
  {
    t = not_null(l_15);
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = not_null(l_15);
    return(t);
  }
  t = term_m_44;
  {
    ATerm c_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = c_47;
        t = term_o_47;
      }
    if(((l_15 != NULL) && (l_15 != t)))
      _fail(t);
    else
      l_15 = t;
    t = n_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_o_47);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  t = o_15(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_15)), term_m_44);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm s_15 = NULL,u_15 = NULL;
  ATerm w_15 (ATerm t)
  {
    t = not_null(u_15);
    if(((r_15 != NULL) && (r_15 != t)))
      _fail(t);
    else
      r_15 = t;
    t = not_null(u_15);
    return(t);
  }
  ATerm t_15 = NULL;
  ATerm v_15 (ATerm t)
  {
    t = not_null(t_15);
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = not_null(t_15);
    return(t);
  }
  t = term_i_33;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_47);
      }
    else
      {
        t = p_47;
        t = term_o_47;
      }
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = v_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), term_o_47);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = w_15(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_i_33);
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm z_15 = NULL;
  ATerm a_16 (ATerm t)
  {
    t = not_null(z_15);
    if(((y_15 != NULL) && (y_15 != t)))
      _fail(t);
    else
      y_15 = t;
    t = not_null(z_15);
    return(t);
  }
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      t = term_b_46;
      t = get_config_0_0(t);
    }
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = a_16(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), term_z_47);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  ATerm n_16 (ATerm t)
  {
    ATerm i_16 = NULL;
    t = not_null(g_16);
    {
      ATerm j_16 = NULL;
      ATerm p_16 (ATerm t)
      {
        t = not_null(j_16);
        if(((i_16 != NULL) && (i_16 != t)))
          _fail(t);
        else
          i_16 = t;
        t = not_null(j_16);
        return(t);
      }
      t = term_a_48;
      t = ReadFromFile_0_0(t);
      if(((j_16 != NULL) && (j_16 != t)))
        _fail(t);
      else
        j_16 = t;
      t = p_16(t);
      t = not_null(i_16);
    }
    return(t);
  }
  ATerm o_16 (ATerm t)
  {
    ATerm k_16 = NULL,l_16 = NULL;
    t = not_null(h_16);
    if(((k_16 != NULL) && (k_16 != t)))
      _fail(t);
    else
      k_16 = t;
    t = not_null(g_16);
    {
      ATerm m_16 = NULL;
      ATerm q_16 (ATerm t)
      {
        t = not_null(m_16);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = not_null(m_16);
        return(t);
      }
      t = not_null(k_16);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      t = q_16(t);
      t = not_null(l_16);
    }
    return(t);
  }
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  t = not_null(g_16);
  if(match_cons(t, sym_stdin_0))
    {
      t = n_16(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          h_16 = ATgetArgument(t, 0);
          t = o_16(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  ATerm d_17 (ATerm t)
  {
    ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
    t = not_null(x_16);
    if(((z_16 != NULL) && (z_16 != t)))
      _fail(t);
    else
      z_16 = t;
    t = not_null(y_16);
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = not_null(v_16);
    t = SSL_write_term_to_stream_baf(not_null(z_16), not_null(a_17));
    {
      ATerm c_17 = NULL;
      ATerm e_17 (ATerm t)
      {
        t = not_null(c_17);
        if(((b_17 != NULL) && (b_17 != t)))
          _fail(t);
        else
          b_17 = t;
        t = not_null(c_17);
        return(t);
      }
      if(((c_17 != NULL) && (c_17 != t)))
        _fail(t);
      else
        c_17 = t;
      t = e_17(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_17));
    }
    return(t);
  }
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = not_null(v_16);
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      t = not_null(w_16);
      if(match_cons(t, sym_Stream_1))
        {
          x_16 = ATgetArgument(t, 0);
          t = d_17(t);
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
ATerm WriteToFile_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  ATerm s_17 (ATerm t)
  {
    ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL;
    t = not_null(k_17);
    if(((m_17 != NULL) && (m_17 != t)))
      _fail(t);
    else
      m_17 = t;
    t = not_null(l_17);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = not_null(m_17);
    {
      ATerm p_17 = NULL;
      ATerm t_17 (ATerm t)
      {
        t = not_null(p_17);
        if(((o_17 != NULL) && (o_17 != t)))
          _fail(t);
        else
          o_17 = t;
        t = not_null(p_17);
        return(t);
      }
      if(((p_17 != NULL) && (p_17 != t)))
        _fail(t);
      else
        p_17 = t;
      t = t_17(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), term_b_48);
      t = open_stream_0_0(t);
      {
        ATerm r_17 = NULL;
        ATerm u_17 (ATerm t)
        {
          t = not_null(r_17);
          if(((q_17 != NULL) && (q_17 != t)))
            _fail(t);
          else
            q_17 = t;
          t = not_null(r_17);
          return(t);
        }
        if(((r_17 != NULL) && (r_17 != t)))
          _fail(t);
        else
          r_17 = t;
        t = u_17(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(n_17));
        t = f_99(t);
        t = fclose_0_0(t);
        t = not_null(n_17);
      }
    }
    return(t);
  }
  if(((j_17 != NULL) && (j_17 != t)))
    _fail(t);
  else
    j_17 = t;
  t = not_null(j_17);
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      t = s_17(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm b_18 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL;
    t = not_null(x_17);
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    t = not_null(x_17);
    {
      ATerm a_18 = NULL;
      ATerm c_18 (ATerm t)
      {
        t = not_null(a_18);
        if(((z_17 != NULL) && (z_17 != t)))
          _fail(t);
        else
          z_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(y_17));
        t = WriteToBinaryFile_0_0(t);
        t = not_null(z_17);
        t = close_file_0_0(t);
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((a_18 != NULL) && (a_18 != t)))
        _fail(t);
      else
        a_18 = t;
      t = c_18(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_17));
    }
    return(t);
  }
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = b_18(t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(g_109, h_109, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm g_18 (ATerm t)
  {
    ATerm f_18 = NULL;
    t = not_null(e_18);
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    t = not_null(e_18);
    t = SSL_close_file(not_null(f_18));
    return(t);
  }
  if(((e_18 != NULL) && (e_18 != t)))
    _fail(t);
  else
    e_18 = t;
  t = g_18(t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  ATerm o_18 (ATerm t)
  {
    ATerm m_18 = NULL,n_18 = NULL;
    t = not_null(k_18);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(l_18);
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    t = not_null(j_18);
    t = SSL_execvp(not_null(m_18), not_null(n_18));
    return(t);
  }
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  t = not_null(j_18);
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
      t = o_18(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm s_18 (ATerm t)
  {
    ATerm r_18 = NULL;
    t = not_null(q_18);
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = not_null(q_18);
    t = SSL_int_to_string(not_null(r_18));
    return(t);
  }
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = s_18(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  ATerm k_19 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL;
    t = not_null(z_18);
    if(((c_19 != NULL) && (c_19 != t)))
      _fail(t);
    else
      c_19 = t;
    t = not_null(y_18);
    {
      ATerm e_19 = NULL;
      ATerm m_19 (ATerm t)
      {
        t = not_null(e_19);
        if(((d_19 != NULL) && (d_19 != t)))
          _fail(t);
        else
          d_19 = t;
        t = not_null(e_19);
        return(t);
      }
      t = not_null(c_19);
      t = int_to_string_0_0(t);
      if(((e_19 != NULL) && (e_19 != t)))
        _fail(t);
      else
        e_19 = t;
      t = m_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_48), not_null(d_19)), term_c_48);
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  ATerm l_19 (ATerm t)
  {
    ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
    t = not_null(z_18);
    if(((f_19 != NULL) && (f_19 != t)))
      _fail(t);
    else
      f_19 = t;
    t = not_null(a_19);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    t = not_null(b_19);
    if(((h_19 != NULL) && (h_19 != t)))
      _fail(t);
    else
      h_19 = t;
    t = not_null(y_18);
    {
      ATerm j_19 = NULL;
      ATerm n_19 (ATerm t)
      {
        t = not_null(j_19);
        if(((i_19 != NULL) && (i_19 != t)))
          _fail(t);
        else
          i_19 = t;
        t = not_null(j_19);
        return(t);
      }
      t = not_null(g_19);
      t = int_to_string_0_0(t);
      if(((j_19 != NULL) && (j_19 != t)))
        _fail(t);
      else
        j_19 = t;
      t = n_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_19)), term_h_48), not_null(i_19)), term_g_48), not_null(f_19));
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = not_null(y_18);
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_18 = ATgetArgument(t, 0);
      t = k_19(t);
    }
  else
    {
      if(match_cons(t, sym_Signal_3))
        {
          z_18 = ATgetArgument(t, 0);
          a_19 = ATgetArgument(t, 1);
          b_19 = ATgetArgument(t, 2);
          t = l_19(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm p_19 = NULL;
  ATerm f_11 (ATerm t)
  {
    ATerm q_19 = NULL;
    ATerm r_19 (ATerm t)
    {
      t = not_null(q_19);
      if(((p_19 != NULL) && (p_19 != t)))
        _fail(t);
      else
        p_19 = t;
      t = not_null(q_19);
      return(t);
    }
    t = f_87(t);
    if(((q_19 != NULL) && (q_19 != t)))
      _fail(t);
    else
      q_19 = t;
    t = r_19(t);
    return(t);
  }
  t = fetch_1_0(f_11, t);
  t = not_null(p_19);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  ATerm b_20 (ATerm t)
  {
    ATerm w_19 = NULL;
    t = not_null(v_19);
    if(((w_19 != NULL) && (w_19 != t)))
      _fail(t);
    else
      w_19 = t;
    t = not_null(v_19);
    {
      ATerm i_48 = t;
      int j_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_56), term_l_55), term_h_55), term_d_55), term_z_54), term_v_54), term_r_54), term_n_54), term_j_54), term_f_54), term_b_54), term_x_53), term_t_53), term_p_53), term_l_53), term_f_53), term_y_52), term_u_52), term_p_52), term_f_52), term_p_51), term_l_51), term_f_51), term_n_50), term_x_49), term_n_49), term_b_49), term_q_48);
          {
            ATerm g_11 (ATerm t)
            {
              ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
              ATerm c_20 (ATerm t)
              {
                t = not_null(z_19);
                if(((w_19 != NULL) && (w_19 != t)))
                  _fail(t);
                else
                  w_19 = t;
                t = not_null(x_19);
                return(t);
              }
              if(((x_19 != NULL) && (x_19 != t)))
                _fail(t);
              else
                x_19 = t;
              t = not_null(x_19);
              if(match_cons(t, sym_Signal_3))
                {
                  y_19 = ATgetArgument(t, 0);
                  z_19 = ATgetArgument(t, 1);
                  a_20 = ATgetArgument(t, 2);
                  t = c_20(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_elem_1_0(g_11, t);
          }
          ;
          LocalPopChoice(j_48);
        }
      else
        {
          t = i_48;
          t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(w_19));
        }
    }
    return(t);
  }
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = b_20(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_56;
  d_56 = t;
  {
    ATerm n_11 (ATerm t)
    {
      ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
      ATerm p_20 (ATerm t)
      {
        ATerm l_20 = NULL,n_20 = NULL;
        t = not_null(j_20);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = not_null(l_20);
        {
          ATerm e_56 = t;
          if((PushChoice() == 0))
            {
              ATerm m_20 = NULL;
              if(((m_20 != NULL) && (m_20 != t)))
                _fail(t);
              else
                m_20 = t;
              t = not_null(m_20);
              if(match_int(t, -1))
                {
                  t = not_null(m_20);
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
              t = e_56;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          {
            ATerm o_20 = NULL;
            ATerm q_20 (ATerm t)
            {
              t = not_null(o_20);
              if(((n_20 != NULL) && (n_20 != t)))
                _fail(t);
              else
                n_20 = t;
              t = not_null(o_20);
              return(t);
            }
            if(((o_20 != NULL) && (o_20 != t)))
              _fail(t);
            else
              o_20 = t;
            t = q_20(t);
            t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_f_56));
            t = printnl_0_0(t);
          }
        }
        return(t);
      }
      if(((h_20 != NULL) && (h_20 != t)))
        _fail(t);
      else
        h_20 = t;
      t = not_null(h_20);
      if(match_cons(t, sym_WaitStatus_3))
        {
          i_20 = ATgetArgument(t, 0);
          j_20 = ATgetArgument(t, 1);
          k_20 = ATgetArgument(t, 2);
          t = p_20(t);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1_0(n_11, t);
  }
  t = d_56;
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  ATerm u_20 (ATerm t)
  {
    ATerm t_20 = NULL;
    t = not_null(s_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    t = not_null(s_20);
    t = SSL_waitpid(not_null(t_20));
    return(t);
  }
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = u_20(t);
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm z_20 = NULL;
  ATerm e_21 (ATerm t)
  {
    ATerm a_21 = NULL,b_21 = NULL;
    ATerm f_21 (ATerm t)
    {
      ATerm c_21 = NULL;
      t = not_null(b_21);
      if(((c_21 != NULL) && (c_21 != t)))
        _fail(t);
      else
        c_21 = t;
      t = not_null(b_21);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL;
            ATerm g_21 (ATerm t)
            {
              t = not_null(a_21);
              t = a_102(t);
              return(t);
            }
            if(((d_21 != NULL) && (d_21 != t)))
              _fail(t);
            else
              d_21 = t;
            t = not_null(d_21);
            if(match_int(t, 0))
              {
                t = g_21(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_21), not_null(a_21));
            t = b_102(t);
          }
      }
      return(t);
    }
    t = not_null(z_20);
    if(((a_21 != NULL) && (a_21 != t)))
      _fail(t);
    else
      a_21 = t;
    t = not_null(z_20);
    t = fork_0_0(t);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = f_21(t);
    return(t);
  }
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = e_21(t);
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm m_21 = NULL;
  ATerm r_11 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
    ATerm v_21 (ATerm t)
    {
      ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
      ATerm w_21 (ATerm t)
      {
        t = not_null(m_21);
        return(t);
      }
      t = not_null(o_21);
      if(((q_21 != NULL) && (q_21 != t)))
        _fail(t);
      else
        q_21 = t;
      t = not_null(p_21);
      if(((m_21 != NULL) && (m_21 != t)))
        _fail(t);
      else
        m_21 = t;
      t = not_null(q_21);
      t = waitpid_0_0(t);
      t = warn_ifsignaled_0_0(t);
      if(((r_21 != NULL) && (r_21 != t)))
        _fail(t);
      else
        r_21 = t;
      t = not_null(r_21);
      if(match_cons(t, sym_WaitStatus_3))
        {
          s_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          u_21 = ATgetArgument(t, 2);
          t = not_null(s_21);
          if(match_int(t, 0))
            {
              t = w_21(t);
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
    if(((n_21 != NULL) && (n_21 != t)))
      _fail(t);
    else
      n_21 = t;
    t = not_null(n_21);
    if(match_cons(t, sym__2))
      {
        o_21 = ATgetArgument(t, 0);
        p_21 = ATgetArgument(t, 1);
        t = v_21(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2_0(c_102, r_11, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  ATerm e_22 (ATerm t)
  {
    ATerm c_22 = NULL,d_22 = NULL;
    t = not_null(a_22);
    if(((c_22 != NULL) && (c_22 != t)))
      _fail(t);
    else
      c_22 = t;
    t = not_null(b_22);
    if(((d_22 != NULL) && (d_22 != t)))
      _fail(t);
    else
      d_22 = t;
    t = not_null(z_21);
    {
      ATerm s_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
        t = execvp_0_0(t);
        return(t);
      }
      t = fork_and_wait_1_0(s_11, t);
    }
    return(t);
  }
  if(((z_21 != NULL) && (z_21 != t)))
    _fail(t);
  else
    z_21 = t;
  t = not_null(z_21);
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
      t = e_22(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm h_22 = NULL;
  ATerm k_56;
  k_56 = t;
  {
    ATerm i_22 = NULL;
    ATerm l_22 (ATerm t)
    {
      t = not_null(i_22);
      if(((h_22 != NULL) && (h_22 != t)))
        _fail(t);
      else
        h_22 = t;
      t = not_null(i_22);
      return(t);
    }
    t = x_108(t);
    t = xtc_find_warning_0_0(t);
    if(((i_22 != NULL) && (i_22 != t)))
      _fail(t);
    else
      i_22 = t;
    t = l_22(t);
  }
  t = k_56;
  {
    ATerm w_56;
    w_56 = t;
    {
      ATerm j_22 = NULL;
      ATerm k_22 = NULL;
      ATerm m_22 (ATerm t)
      {
        t = not_null(k_22);
        if(((j_22 != NULL) && (j_22 != t)))
          _fail(t);
        else
          j_22 = t;
        t = not_null(k_22);
        return(t);
      }
      if(((k_22 != NULL) && (k_22 != t)))
        _fail(t);
      else
        k_22 = t;
      t = m_22(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(j_22));
      t = call_0_0(t);
    }
    t = w_56;
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  ATerm e_23 (ATerm t)
  {
    ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
    t = not_null(t_22);
    if(((v_22 != NULL) && (v_22 != t)))
      _fail(t);
    else
      v_22 = t;
    t = not_null(u_22);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = not_null(s_22);
    {
      ATerm x_56;
      x_56 = t;
      {
        ATerm a_23 = NULL;
        ATerm f_23 (ATerm t)
        {
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          ATerm g_23 (ATerm t)
          {
            t = not_null(c_23);
            if(((y_22 != NULL) && (y_22 != t)))
              _fail(t);
            else
              y_22 = t;
            t = not_null(d_23);
            if(((z_22 != NULL) && (z_22 != t)))
              _fail(t);
            else
              z_22 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), term_w_45, (ATerm) ATinsert(CheckATermList(not_null(z_22)), (ATerm) ATinsert(CheckATermList(not_null(y_22)), not_null(v_22))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(a_23);
          if(((x_22 != NULL) && (x_22 != t)))
            _fail(t);
          else
            x_22 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), not_null(v_22), not_null(w_22));
          t = table_push_0_0(t);
          {
            ATerm y_56 = t;
            int z_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), term_w_45);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(z_56);
              }
            else
              {
                t = y_56;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((b_23 != NULL) && (b_23 != t)))
              _fail(t);
            else
              b_23 = t;
            t = not_null(b_23);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_23 = ATgetFirst((ATermList) t);
                d_23 = (ATerm) ATgetNext((ATermList) t);
                t = g_23(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = m_97(t);
        if(((a_23 != NULL) && (a_23 != t)))
          _fail(t);
        else
          a_23 = t;
        t = f_23(t);
      }
      t = x_56;
    }
    return(t);
  }
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(s_22);
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      t = e_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm a_57;
  a_57 = t;
  t = y_98(t);
  {
    ATerm t_11 (ATerm t)
    {
      t = term_j_57;
      return(t);
    }
    t = debug_1_0(t_11, t);
  }
  t = a_57;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  ATerm u_23 (ATerm t)
  {
    ATerm o_23 = NULL;
    t = not_null(l_23);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = not_null(l_23);
    {
      ATerm k_57 = t;
      if((PushChoice() == 0))
        {
          ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
          if(((p_23 != NULL) && (p_23 != t)))
            _fail(t);
          else
            p_23 = t;
          t = not_null(p_23);
          if(match_cons(t, sym__2))
            {
              q_23 = ATgetArgument(t, 0);
              r_23 = ATgetArgument(t, 1);
              t = not_null(p_23);
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
          t = k_57;
        }
      {
        ATerm b_12 (ATerm t)
        {
          t = term_l_57;
          return(t);
        }
        t = obsolete_1_0(b_12, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), term_b_48);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm v_23 (ATerm t)
  {
    ATerm s_23 = NULL,t_23 = NULL;
    t = not_null(m_23);
    if(((s_23 != NULL) && (s_23 != t)))
      _fail(t);
    else
      s_23 = t;
    t = not_null(n_23);
    if(((t_23 != NULL) && (t_23 != t)))
      _fail(t);
    else
      t_23 = t;
    t = not_null(l_23);
    t = SSL_open_file(not_null(s_23), not_null(t_23));
    return(t);
  }
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(l_23);
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      {
        ATerm m_57 = t;
        int n_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_23(t);
            ;
            LocalPopChoice(n_57);
          }
        else
          {
            t = m_57;
            t = v_23(t);
          }
      }
    }
  else
    {
      t = u_23(t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  ATerm y_23 = NULL;
  ATerm a_24 (ATerm t)
  {
    t = not_null(y_23);
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    t = not_null(y_23);
    return(t);
  }
  t = term_u_44;
  t = new_0_0(t);
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = a_24(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), term_o_57);
  t = conc_strings_0_0(t);
  {
    ATerm c_12 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(c_12, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm e_24 (ATerm t)
  {
    ATerm d_24 = NULL;
    t = not_null(c_24);
    if(((d_24 != NULL) && (d_24 != t)))
      _fail(t);
    else
      d_24 = t;
    t = not_null(c_24);
    {
      ATerm p_57;
      p_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), term_b_48);
      t = open_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), term_u_44);
      {
        ATerm j_12 (ATerm t)
        {
          t = term_u_45;
          return(t);
        }
        t = assert_1_0(j_12, t);
      }
      t = p_57;
    }
    return(t);
  }
  t = new_file_0_0(t);
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = e_24(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  ATerm x_24 (ATerm t)
  {
    ATerm o_24 = NULL;
    t = not_null(m_24);
    {
      ATerm p_24 = NULL;
      ATerm z_24 (ATerm t)
      {
        ATerm q_24 = NULL;
        t = not_null(p_24);
        if(((o_24 != NULL) && (o_24 != t)))
          _fail(t);
        else
          o_24 = t;
        t = not_null(p_24);
        {
          ATerm r_24 = NULL;
          ATerm a_25 (ATerm t)
          {
            t = not_null(r_24);
            if(((q_24 != NULL) && (q_24 != t)))
              _fail(t);
            else
              q_24 = t;
            t = not_null(r_24);
            return(t);
          }
          t = p_0(t);
          if(((r_24 != NULL) && (r_24 != t)))
            _fail(t);
          else
            r_24 = t;
          t = a_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_24)), term_m_33));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(o_24);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((p_24 != NULL) && (p_24 != t)))
        _fail(t);
      else
        p_24 = t;
      t = z_24(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_24));
    }
    return(t);
  }
  ATerm y_24 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL;
    t = not_null(n_24);
    if(((s_24 != NULL) && (s_24 != t)))
      _fail(t);
    else
      s_24 = t;
    t = not_null(m_24);
    {
      ATerm u_24 = NULL;
      ATerm b_25 (ATerm t)
      {
        ATerm v_24 = NULL;
        t = not_null(u_24);
        if(((t_24 != NULL) && (t_24 != t)))
          _fail(t);
        else
          t_24 = t;
        t = not_null(u_24);
        {
          ATerm w_24 = NULL;
          ATerm c_25 (ATerm t)
          {
            t = not_null(w_24);
            if(((v_24 != NULL) && (v_24 != t)))
              _fail(t);
            else
              v_24 = t;
            t = not_null(w_24);
            return(t);
          }
          t = p_0(t);
          if(((w_24 != NULL) && (w_24 != t)))
            _fail(t);
          else
            w_24 = t;
          t = c_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_24)), term_m_33), not_null(s_24)), term_q_57));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(t_24);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = not_null(s_24);
      t = xtc_new_file_0_0(t);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      t = b_25(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_24));
    }
    return(t);
  }
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = not_null(m_24);
  if(match_cons(t, sym_stdin_0))
    {
      t = x_24(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          n_24 = ATgetArgument(t, 0);
          t = y_24(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  ATerm h_25 = NULL;
  ATerm n_25 (ATerm t)
  {
    ATerm i_25 = NULL,j_25 = NULL,l_25 = NULL;
    t = not_null(h_25);
    if(((i_25 != NULL) && (i_25 != t)))
      _fail(t);
    else
      i_25 = t;
    t = not_null(h_25);
    {
      ATerm r_57;
      r_57 = t;
      {
        ATerm k_25 = NULL;
        ATerm o_25 (ATerm t)
        {
          t = not_null(k_25);
          if(((j_25 != NULL) && (j_25 != t)))
            _fail(t);
          else
            j_25 = t;
          t = not_null(k_25);
          return(t);
        }
        t = SSLgetAnnotations(not_null(i_25));
        if(((k_25 != NULL) && (k_25 != t)))
          _fail(t);
        else
          k_25 = t;
        t = o_25(t);
      }
      t = r_57;
      {
        ATerm m_25 = NULL;
        ATerm p_25 (ATerm t)
        {
          t = not_null(m_25);
          if(((l_25 != NULL) && (l_25 != t)))
            _fail(t);
          else
            l_25 = t;
          t = not_null(m_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(j_25));
        if(((m_25 != NULL) && (m_25 != t)))
          _fail(t);
        else
          m_25 = t;
        t = p_25(t);
        t = not_null(l_25);
      }
    }
    return(t);
  }
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  t = not_null(h_25);
  if(match_cons(t, sym_stdin_0))
    {
      t = n_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  ATerm f_26 (ATerm t)
  {
    ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL;
    ATerm h_26 (ATerm t)
    {
      ATerm c_26 = NULL,d_26 = NULL;
      t = not_null(b_26);
      if(((c_26 != NULL) && (c_26 != t)))
        _fail(t);
      else
        c_26 = t;
      t = not_null(b_26);
      {
        ATerm e_26 = NULL;
        ATerm i_26 (ATerm t)
        {
          t = not_null(e_26);
          if(((d_26 != NULL) && (d_26 != t)))
            _fail(t);
          else
            d_26 = t;
          t = not_null(e_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(c_26)), not_null(z_25));
        if(((e_26 != NULL) && (e_26 != t)))
          _fail(t);
        else
          e_26 = t;
        t = i_26(t);
        t = not_null(d_26);
      }
      return(t);
    }
    t = not_null(v_25);
    if(((x_25 != NULL) && (x_25 != t)))
      _fail(t);
    else
      x_25 = t;
    t = not_null(w_25);
    if(((y_25 != NULL) && (y_25 != t)))
      _fail(t);
    else
      y_25 = t;
    t = not_null(v_25);
    {
      ATerm a_26 = NULL;
      ATerm g_26 (ATerm t)
      {
        t = not_null(a_26);
        if(((z_25 != NULL) && (z_25 != t)))
          _fail(t);
        else
          z_25 = t;
        t = not_null(a_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_25));
      if(((a_26 != NULL) && (a_26 != t)))
        _fail(t);
      else
        a_26 = t;
      t = g_26(t);
      t = not_null(y_25);
      t = g_71(t);
      if(((b_26 != NULL) && (b_26 != t)))
        _fail(t);
      else
        b_26 = t;
      t = h_26(t);
    }
    return(t);
  }
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = not_null(v_25);
  if(match_cons(t, sym_FILE_1))
    {
      w_25 = ATgetArgument(t, 0);
      t = f_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm i_58 = t;
  int j_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_58 = t;
      int l_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_58);
        }
      else
        {
          t = k_58;
          t = stdin_0_0(t);
        }
      LocalPopChoice(j_58);
      t = xtc_transform_file_2_0(z_108, a_109, t);
    }
  else
    {
      t = i_58;
      t = xtc_transform_term_2_0(z_108, a_109, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm m_58;
    m_58 = t;
    {
      ATerm k_26 = NULL;
      ATerm l_26 = NULL;
      ATerm m_26 (ATerm t)
      {
        t = not_null(l_26);
        if(((k_26 != NULL) && (k_26 != t)))
          _fail(t);
        else
          k_26 = t;
        t = not_null(l_26);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((l_26 != NULL) && (l_26 != t)))
        _fail(t);
      else
        l_26 = t;
      t = m_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), term_t_44);
      t = geq_0_0(t);
    }
    t = m_58;
    t = k_100(t);
    return(t);
  }
  t = try_1_0(k_12, t);
  return(t);
}
ATerm basename_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm l_12 (ATerm t)
    {
      ATerm r_58 = t;
      int s_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, l_12, t);
          ;
          LocalPopChoice(s_58);
        }
      else
        {
          t = r_58;
          {
            ATerm t_58 = t;
            int u_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_12 (ATerm t)
                {
                  ATerm p_26 = NULL;
                  if(((p_26 != NULL) && (p_26 != t)))
                    _fail(t);
                  else
                    p_26 = t;
                  t = not_null(p_26);
                  if(match_int(t, 47))
                    {
                      t = not_null(p_26);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2_0(v_12, _id, t);
                ;
                LocalPopChoice(u_58);
              }
            else
              {
                t = t_58;
                {
                  ATerm w_12 (ATerm t)
                  {
                    ATerm q_26 = NULL;
                    if(((q_26 != NULL) && (q_26 != t)))
                      _fail(t);
                    else
                      q_26 = t;
                    t = not_null(q_26);
                    if(match_int(t, 46))
                      {
                        t = not_null(q_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2_0(w_12, q_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(l_12, t);
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm basename_0_0 (ATerm t)
{
  t = basename_1_0(_id, t);
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL;
  ATerm d_27 (ATerm t)
  {
    ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
    t = not_null(x_26);
    if(((y_26 != NULL) && (y_26 != t)))
      _fail(t);
    else
      y_26 = t;
    t = not_null(w_26);
    {
      ATerm b_27 = NULL;
      ATerm e_27 (ATerm t)
      {
        ATerm c_27 = NULL;
        ATerm f_27 (ATerm t)
        {
          t = not_null(c_27);
          if(((a_27 != NULL) && (a_27 != t)))
            _fail(t);
          else
            a_27 = t;
          t = not_null(c_27);
          {
            ATerm d_13 (ATerm t)
            {
              ATerm e_13 (ATerm t)
              {
                t = term_y_58;
                return(t);
              }
              t = debug_1_0(e_13, t);
              return(t);
            }
            t = if_verbose3_1_0(d_13, t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_46, not_null(a_27));
            t = set_config_0_0(t);
          }
          return(t);
        }
        t = not_null(b_27);
        if(((z_26 != NULL) && (z_26 != t)))
          _fail(t);
        else
          z_26 = t;
        t = not_null(b_27);
        {
          ATerm f_13 (ATerm t)
          {
            ATerm g_13 (ATerm t)
            {
              t = term_z_58;
              return(t);
            }
            t = debug_1_0(g_13, t);
            return(t);
          }
          t = if_verbose3_1_0(f_13, t);
          t = (ATerm) ATmakeAppl(sym__2, term_a_59, not_null(z_26));
          t = set_config_0_0(t);
          {
            ATerm b_59 = t;
            int c_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_33;
                t = get_config_0_0(t);
                t = basename_0_0(t);
                ;
                LocalPopChoice(c_59);
              }
            else
              {
                t = b_59;
                t = not_null(z_26);
              }
            if(((c_27 != NULL) && (c_27 != t)))
              _fail(t);
            else
              c_27 = t;
            t = f_27(t);
          }
        }
        return(t);
      }
      t = not_null(y_26);
      t = basename_0_0(t);
      if(((b_27 != NULL) && (b_27 != t)))
        _fail(t);
      else
        b_27 = t;
      t = e_27(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_26));
    }
    return(t);
  }
  if(((w_26 != NULL) && (w_26 != t)))
    _fail(t);
  else
    w_26 = t;
  t = not_null(w_26);
  if(match_cons(t, sym_FILE_1))
    {
      x_26 = ATgetArgument(t, 0);
      t = d_27(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm q_13 (ATerm t)
    {
      t = term_d_59;
      return(t);
    }
    ATerm r_13 (ATerm t)
    {
      ATerm k_27 = NULL,m_27 = NULL,o_27 = NULL,q_27 = NULL;
      ATerm e_59;
      e_59 = t;
      {
        ATerm l_27 = NULL;
        ATerm s_27 (ATerm t)
        {
          t = not_null(l_27);
          if(((k_27 != NULL) && (k_27 != t)))
            _fail(t);
          else
            k_27 = t;
          t = not_null(l_27);
          return(t);
        }
        t = dep_name_0_0(t);
        if(((l_27 != NULL) && (l_27 != t)))
          _fail(t);
        else
          l_27 = t;
        t = s_27(t);
      }
      t = e_59;
      {
        ATerm f_59;
        f_59 = t;
        {
          ATerm n_27 = NULL;
          ATerm x_27 (ATerm t)
          {
            t = not_null(n_27);
            if(((m_27 != NULL) && (m_27 != t)))
              _fail(t);
            else
              m_27 = t;
            t = not_null(n_27);
            return(t);
          }
          t = pass_verbose_0_0(t);
          if(((n_27 != NULL) && (n_27 != t)))
            _fail(t);
          else
            n_27 = t;
          t = x_27(t);
        }
        t = f_59;
        {
          ATerm g_59;
          g_59 = t;
          {
            ATerm p_27 = NULL;
            ATerm l_28 (ATerm t)
            {
              t = not_null(p_27);
              if(((o_27 != NULL) && (o_27 != t)))
                _fail(t);
              else
                o_27 = t;
              t = not_null(p_27);
              return(t);
            }
            t = pass_keep_0_0(t);
            if(((p_27 != NULL) && (p_27 != t)))
              _fail(t);
            else
              p_27 = t;
            t = l_28(t);
          }
          t = g_59;
          {
            ATerm r_27 = NULL;
            ATerm n_28 (ATerm t)
            {
              t = not_null(r_27);
              if(((q_27 != NULL) && (q_27 != t)))
                _fail(t);
              else
                q_27 = t;
              t = not_null(r_27);
              return(t);
            }
            t = term_j_59;
            t = get_config_0_0(t);
            if(((r_27 != NULL) && (r_27 != t)))
              _fail(t);
            else
              r_27 = t;
            t = n_28(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_27)), not_null(m_27)), not_null(q_27)), not_null(k_27));
            t = concat_0_0(t);
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2_0(q_13, r_13, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm t_13 (ATerm t)
    {
      t = term_o_59;
      return(t);
    }
    t = debug_1_0(t_13, t);
    return(t);
  }
  t = if_verbose2_1_0(s_13, t);
  {
    ATerm d_14 (ATerm t)
    {
      ATerm f_14 (ATerm t)
      {
        ATerm p_28 = NULL;
        ATerm q_28 = NULL;
        ATerm r_28 (ATerm t)
        {
          t = not_null(q_28);
          if(((p_28 != NULL) && (p_28 != t)))
            _fail(t);
          else
            p_28 = t;
          t = not_null(q_28);
          return(t);
        }
        if(((q_28 != NULL) && (q_28 != t)))
          _fail(t);
        else
          q_28 = t;
        t = r_28(t);
        t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(CheckATermList(not_null(p_28)), term_p_59));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(f_14, t);
      return(t);
    }
    ATerm e_14 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      t = frontend_0_0(t);
      t = output_frontend_0_0(t);
      t = extract_0_0(t);
      t = warnings_0_0(t);
      t = stratego_nf_0_0(t);
      t = rename_defs_0_0(t);
      return(t);
    }
    t = profile_p__2_0(d_14, e_14, t);
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  ATerm y_28 (ATerm t)
  {
    ATerm x_28 = NULL;
    t = not_null(w_28);
    if(((x_28 != NULL) && (x_28 != t)))
      _fail(t);
    else
      x_28 = t;
    t = not_null(x_28);
    return(t);
  }
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  t = not_null(u_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_28 = ATgetFirst((ATermList) t);
      w_28 = (ATerm) ATgetNext((ATermList) t);
      t = y_28(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  ATerm j_29 (ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL;
    t = not_null(d_29);
    if(((f_29 != NULL) && (f_29 != t)))
      _fail(t);
    else
      f_29 = t;
    t = not_null(e_29);
    if(((g_29 != NULL) && (g_29 != t)))
      _fail(t);
    else
      g_29 = t;
    t = not_null(c_29);
    {
      ATerm q_59;
      q_59 = t;
      {
        ATerm h_29 = NULL;
        ATerm i_29 = NULL;
        ATerm k_29 (ATerm t)
        {
          t = not_null(i_29);
          if(((h_29 != NULL) && (h_29 != t)))
            _fail(t);
          else
            h_29 = t;
          t = not_null(i_29);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), not_null(g_29));
        {
          ATerm r_59 = t;
          int s_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(s_59);
            }
          else
            {
              t = r_59;
              t = (ATerm) ATempty;
            }
          if(((i_29 != NULL) && (i_29 != t)))
            _fail(t);
          else
            i_29 = t;
          t = k_29(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_29), not_null(g_29), not_null(h_29));
        t = table_put_0_0(t);
      }
      t = q_59;
    }
    return(t);
  }
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  t = not_null(c_29);
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
      t = j_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  ATerm t_59;
  t_59 = t;
  {
    ATerm s_29 = NULL;
    ATerm d_30 (ATerm t)
    {
      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
      ATerm e_30 (ATerm t)
      {
        t = not_null(u_29);
        if(((q_29 != NULL) && (q_29 != t)))
          _fail(t);
        else
          q_29 = t;
        t = not_null(v_29);
        if(((p_29 != NULL) && (p_29 != t)))
          _fail(t);
        else
          p_29 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_29), term_w_45, not_null(p_29));
        t = table_put_0_0(t);
        t = not_null(q_29);
        {
          ATerm g_14 (ATerm t)
          {
            ATerm b_30 = NULL;
            ATerm f_30 (ATerm t)
            {
              ATerm c_30 = NULL;
              t = not_null(b_30);
              if(((c_30 != NULL) && (c_30 != t)))
                _fail(t);
              else
                c_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(c_30));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((b_30 != NULL) && (b_30 != t)))
              _fail(t);
            else
              b_30 = t;
            t = f_30(t);
            return(t);
          }
          t = map_1_0(g_14, t);
        }
        return(t);
      }
      t = not_null(s_29);
      if(((r_29 != NULL) && (r_29 != t)))
        _fail(t);
      else
        r_29 = t;
      t = not_null(s_29);
      {
        ATerm k_60 = t;
        int o_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), term_w_45);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(o_60);
          }
        else
          {
            t = k_60;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((t_29 != NULL) && (t_29 != t)))
          _fail(t);
        else
          t_29 = t;
        t = not_null(t_29);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_29 = ATgetFirst((ATermList) t);
            v_29 = (ATerm) ATgetNext((ATermList) t);
            t = e_30(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = j_97(t);
    if(((s_29 != NULL) && (s_29 != t)))
      _fail(t);
    else
      s_29 = t;
    t = d_30(t);
  }
  t = t_59;
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  ATerm k_30 (ATerm t)
  {
    ATerm j_30 = NULL;
    t = not_null(i_30);
    if(((j_30 != NULL) && (j_30 != t)))
      _fail(t);
    else
      j_30 = t;
    t = not_null(i_30);
    t = SSL_remove(not_null(j_30));
    return(t);
  }
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  t = k_30(t);
  return(t);
}
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      t = y_79(t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      t = y_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm n_30 = NULL;
  ATerm r_60;
  r_60 = t;
  {
    ATerm o_30 = NULL;
    ATerm v_30 (ATerm t)
    {
      ATerm s_30 = NULL;
      t = not_null(o_30);
      if(((n_30 != NULL) && (n_30 != t)))
        _fail(t);
      else
        n_30 = t;
      t = not_null(o_30);
      {
        ATerm u_30 = NULL;
        ATerm w_30 (ATerm t)
        {
          t = not_null(u_30);
          if(((s_30 != NULL) && (s_30 != t)))
            _fail(t);
          else
            s_30 = t;
          t = not_null(u_30);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), term_w_45);
        {
          ATerm s_60 = t;
          int h_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(h_61);
            }
          else
            {
              t = s_60;
              t = (ATerm) ATempty;
            }
          if(((u_30 != NULL) && (u_30 != t)))
            _fail(t);
          else
            u_30 = t;
          t = w_30(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_30), term_w_45, (ATerm) ATinsert(CheckATermList(not_null(s_30)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = i_97(t);
    if(((o_30 != NULL) && (o_30 != t)))
      _fail(t);
    else
      o_30 = t;
    t = v_30(t);
  }
  t = r_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm h_14 (ATerm t)
  {
    t = term_u_45;
    return(t);
  }
  t = begin_scope_1_0(h_14, t);
  {
    ATerm i_14 (ATerm t)
    {
      ATerm i_61;
      i_61 = t;
      {
        ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
        ATerm e_31 (ATerm t)
        {
          t = not_null(c_31);
          if(((a_31 != NULL) && (a_31 != t)))
            _fail(t);
          else
            a_31 = t;
          t = not_null(d_31);
          if(((z_30 != NULL) && (z_30 != t)))
            _fail(t);
          else
            z_30 = t;
          t = not_null(a_31);
          {
            ATerm j_14 (ATerm t)
            {
              t = try_1_0(remove_file_0_0, t);
              return(t);
            }
            t = map_1_0(j_14, t);
          }
          return(t);
        }
        ATerm j_61 = t;
        int k_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_45;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(k_61);
          }
        else
          {
            t = j_61;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = not_null(b_31);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_31 = ATgetFirst((ATermList) t);
            d_31 = (ATerm) ATgetNext((ATermList) t);
            t = e_31(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = i_61;
      {
        ATerm k_14 (ATerm t)
        {
          t = term_u_45;
          return(t);
        }
        t = end_scope_1_0(k_14, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_108, i_14, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm d_15 (ATerm t)
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        ATerm h_31 = NULL;
        ATerm i_31 (ATerm t)
        {
          t = not_null(h_31);
          if(((g_31 != NULL) && (g_31 != t)))
            _fail(t);
          else
            g_31 = t;
          t = not_null(h_31);
          return(t);
        }
        t = term_q_57;
        t = get_config_0_0(t);
        if(((h_31 != NULL) && (h_31 != t)))
          _fail(t);
        else
          h_31 = t;
        t = i_31(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_31));
        ;
        LocalPopChoice(x_61);
      }
    else
      {
        t = w_61;
        t = term_a_48;
      }
    t = m_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_15, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm h_15 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(h_15, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm i_15 (ATerm t)
  {
    ATerm y_61;
    y_61 = t;
    {
      ATerm k_31 = NULL;
      ATerm l_31 = NULL;
      ATerm m_31 (ATerm t)
      {
        t = not_null(l_31);
        if(((k_31 != NULL) && (k_31 != t)))
          _fail(t);
        else
          k_31 = t;
        t = not_null(l_31);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((l_31 != NULL) && (l_31 != t)))
        _fail(t);
      else
        l_31 = t;
      t = m_31(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), term_o_47);
      t = geq_0_0(t);
    }
    t = y_61;
    t = i_100(t);
    return(t);
  }
  t = try_1_0(i_15, t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  ATerm q_31 (ATerm t)
  {
    ATerm p_31 = NULL;
    t = not_null(o_31);
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = not_null(o_31);
    t = SSL_TicksToSeconds(not_null(p_31));
    return(t);
  }
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  t = q_31(t);
  return(t);
}
ATerm self_children_sys_time_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  ATerm c_32 (ATerm t)
  {
    ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
    t = not_null(u_31);
    if(((y_31 != NULL) && (y_31 != t)))
      _fail(t);
    else
      y_31 = t;
    t = not_null(v_31);
    if(((a_32 != NULL) && (a_32 != t)))
      _fail(t);
    else
      a_32 = t;
    t = not_null(w_31);
    if(((z_31 != NULL) && (z_31 != t)))
      _fail(t);
    else
      z_31 = t;
    t = not_null(x_31);
    if(((b_32 != NULL) && (b_32 != t)))
      _fail(t);
    else
      b_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), not_null(b_32));
    t = add_0_0(t);
    return(t);
  }
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = not_null(t_31);
  if(match_cons(t, sym__4))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      w_31 = ATgetArgument(t, 2);
      x_31 = ATgetArgument(t, 3);
      t = c_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  ATerm k_32 (ATerm t)
  {
    ATerm i_32 = NULL,j_32 = NULL;
    t = not_null(g_32);
    if(((i_32 != NULL) && (i_32 != t)))
      _fail(t);
    else
      i_32 = t;
    t = not_null(h_32);
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    t = not_null(f_32);
    {
      ATerm z_61 = t;
      int a_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(i_32), not_null(j_32));
          ;
          LocalPopChoice(a_62);
        }
      else
        {
          t = z_61;
          t = SSL_addr(not_null(i_32), not_null(j_32));
        }
    }
    return(t);
  }
  if(((f_32 != NULL) && (f_32 != t)))
    _fail(t);
  else
    f_32 = t;
  t = not_null(f_32);
  if(match_cons(t, sym__2))
    {
      g_32 = ATgetArgument(t, 0);
      h_32 = ATgetArgument(t, 1);
      t = k_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  ATerm w_32 (ATerm t)
  {
    ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
    t = not_null(o_32);
    if(((u_32 != NULL) && (u_32 != t)))
      _fail(t);
    else
      u_32 = t;
    t = not_null(p_32);
    if(((s_32 != NULL) && (s_32 != t)))
      _fail(t);
    else
      s_32 = t;
    t = not_null(q_32);
    if(((v_32 != NULL) && (v_32 != t)))
      _fail(t);
    else
      v_32 = t;
    t = not_null(r_32);
    if(((t_32 != NULL) && (t_32 != t)))
      _fail(t);
    else
      t_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), not_null(v_32));
    t = add_0_0(t);
    return(t);
  }
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = not_null(n_32);
  if(match_cons(t, sym__4))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
      q_32 = ATgetArgument(t, 2);
      r_32 = ATgetArgument(t, 3);
      t = w_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  ATerm e_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL;
    t = not_null(a_33);
    if(((c_33 != NULL) && (c_33 != t)))
      _fail(t);
    else
      c_33 = t;
    t = not_null(b_33);
    if(((d_33 != NULL) && (d_33 != t)))
      _fail(t);
    else
      d_33 = t;
    t = not_null(z_32);
    {
      ATerm c_62 = t;
      int j_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(c_33), not_null(d_33));
          ;
          LocalPopChoice(j_62);
        }
      else
        {
          t = c_62;
          t = SSL_subtr(not_null(c_33), not_null(d_33));
        }
    }
    return(t);
  }
  if(((z_32 != NULL) && (z_32 != t)))
    _fail(t);
  else
    z_32 = t;
  t = not_null(z_32);
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
      t = e_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  ATerm o_34 (ATerm t)
  {
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL,k_34 = NULL,m_34 = NULL;
    t = not_null(p_33);
    if(((y_33 != NULL) && (y_33 != t)))
      _fail(t);
    else
      y_33 = t;
    t = not_null(q_33);
    if(((z_33 != NULL) && (z_33 != t)))
      _fail(t);
    else
      z_33 = t;
    t = not_null(r_33);
    if(((a_34 != NULL) && (a_34 != t)))
      _fail(t);
    else
      a_34 = t;
    t = not_null(s_33);
    if(((b_34 != NULL) && (b_34 != t)))
      _fail(t);
    else
      b_34 = t;
    t = not_null(u_33);
    if(((c_34 != NULL) && (c_34 != t)))
      _fail(t);
    else
      c_34 = t;
    t = not_null(v_33);
    if(((d_34 != NULL) && (d_34 != t)))
      _fail(t);
    else
      d_34 = t;
    t = not_null(w_33);
    if(((e_34 != NULL) && (e_34 != t)))
      _fail(t);
    else
      e_34 = t;
    t = not_null(x_33);
    if(((f_34 != NULL) && (f_34 != t)))
      _fail(t);
    else
      f_34 = t;
    t = not_null(n_33);
    {
      ATerm k_62;
      k_62 = t;
      {
        ATerm h_34 = NULL;
        ATerm p_34 (ATerm t)
        {
          t = not_null(h_34);
          if(((g_34 != NULL) && (g_34 != t)))
            _fail(t);
          else
            g_34 = t;
          t = not_null(h_34);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(c_34));
        t = subt_0_0(t);
        if(((h_34 != NULL) && (h_34 != t)))
          _fail(t);
        else
          h_34 = t;
        t = p_34(t);
      }
      t = k_62;
      {
        ATerm l_62;
        l_62 = t;
        {
          ATerm j_34 = NULL;
          ATerm q_34 (ATerm t)
          {
            t = not_null(j_34);
            if(((i_34 != NULL) && (i_34 != t)))
              _fail(t);
            else
              i_34 = t;
            t = not_null(j_34);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), not_null(d_34));
          t = subt_0_0(t);
          if(((j_34 != NULL) && (j_34 != t)))
            _fail(t);
          else
            j_34 = t;
          t = q_34(t);
        }
        t = l_62;
        {
          ATerm m_62;
          m_62 = t;
          {
            ATerm l_34 = NULL;
            ATerm r_34 (ATerm t)
            {
              t = not_null(l_34);
              if(((k_34 != NULL) && (k_34 != t)))
                _fail(t);
              else
                k_34 = t;
              t = not_null(l_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(e_34));
            t = subt_0_0(t);
            if(((l_34 != NULL) && (l_34 != t)))
              _fail(t);
            else
              l_34 = t;
            t = r_34(t);
          }
          t = m_62;
          {
            ATerm n_34 = NULL;
            ATerm s_34 (ATerm t)
            {
              t = not_null(n_34);
              if(((m_34 != NULL) && (m_34 != t)))
                _fail(t);
              else
                m_34 = t;
              t = not_null(n_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_34), not_null(f_34));
            t = subt_0_0(t);
            if(((n_34 != NULL) && (n_34 != t)))
              _fail(t);
            else
              n_34 = t;
            t = s_34(t);
            t = (ATerm) ATmakeAppl(sym__4, not_null(g_34), not_null(i_34), not_null(k_34), not_null(m_34));
          }
        }
      }
    }
    return(t);
  }
  if(((n_33 != NULL) && (n_33 != t)))
    _fail(t);
  else
    n_33 = t;
  t = not_null(n_33);
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
      t = not_null(o_33);
      if(match_cons(t, sym__4))
        {
          p_33 = ATgetArgument(t, 0);
          q_33 = ATgetArgument(t, 1);
          r_33 = ATgetArgument(t, 2);
          s_33 = ATgetArgument(t, 3);
          t = not_null(t_33);
          if(match_cons(t, sym__4))
            {
              u_33 = ATgetArgument(t, 0);
              v_33 = ATgetArgument(t, 1);
              w_33 = ATgetArgument(t, 2);
              x_33 = ATgetArgument(t, 3);
              t = o_34(t);
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
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  ATerm n_62;
  n_62 = t;
  {
    ATerm y_34 = NULL;
    ATerm k_35 (ATerm t)
    {
      t = not_null(y_34);
      if(((x_34 != NULL) && (x_34 != t)))
        _fail(t);
      else
        x_34 = t;
      t = not_null(y_34);
      return(t);
    }
    t = times_0_0(t);
    if(((y_34 != NULL) && (y_34 != t)))
      _fail(t);
    else
      y_34 = t;
    t = k_35(t);
  }
  t = n_62;
  t = d_104(t);
  {
    ATerm o_62;
    o_62 = t;
    {
      ATerm z_34 = NULL,b_35 = NULL,f_35 = NULL;
      ATerm a_35 = NULL;
      ATerm l_35 (ATerm t)
      {
        t = not_null(a_35);
        if(((z_34 != NULL) && (z_34 != t)))
          _fail(t);
        else
          z_34 = t;
        t = not_null(a_35);
        return(t);
      }
      t = times_0_0(t);
      if(((a_35 != NULL) && (a_35 != t)))
        _fail(t);
      else
        a_35 = t;
      t = l_35(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(x_34));
      t = diff_times_0_0(t);
      {
        ATerm p_62;
        p_62 = t;
        {
          ATerm e_35 = NULL;
          ATerm m_35 (ATerm t)
          {
            t = not_null(e_35);
            if(((b_35 != NULL) && (b_35 != t)))
              _fail(t);
            else
              b_35 = t;
            t = not_null(e_35);
            return(t);
          }
          t = self_children_user_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((e_35 != NULL) && (e_35 != t)))
            _fail(t);
          else
            e_35 = t;
          t = m_35(t);
        }
        t = p_62;
        {
          ATerm j_35 = NULL;
          ATerm n_35 (ATerm t)
          {
            t = not_null(j_35);
            if(((f_35 != NULL) && (f_35 != t)))
              _fail(t);
            else
              f_35 = t;
            t = not_null(j_35);
            return(t);
          }
          t = self_children_sys_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((j_35 != NULL) && (j_35 != t)))
            _fail(t);
          else
            j_35 = t;
          t = n_35(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_35)), term_r_62), not_null(b_35)), term_q_62);
          t = c_104(t);
        }
      }
    }
    t = o_62;
  }
  return(t);
}
ATerm debug_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm s_62;
  s_62 = t;
  {
    ATerm q_35 = NULL,s_35 = NULL;
    ATerm t_62;
    t_62 = t;
    {
      ATerm r_35 = NULL;
      ATerm u_35 (ATerm t)
      {
        t = not_null(r_35);
        if(((q_35 != NULL) && (q_35 != t)))
          _fail(t);
        else
          q_35 = t;
        t = not_null(r_35);
        return(t);
      }
      t = r_98(t);
      if(((r_35 != NULL) && (r_35 != t)))
        _fail(t);
      else
        r_35 = t;
      t = u_35(t);
    }
    t = t_62;
    {
      ATerm t_35 = NULL;
      ATerm v_35 (ATerm t)
      {
        t = not_null(t_35);
        if(((s_35 != NULL) && (s_35 != t)))
          _fail(t);
        else
          s_35 = t;
        t = not_null(t_35);
        return(t);
      }
      if(((t_35 != NULL) && (t_35 != t)))
        _fail(t);
      else
        t_35 = t;
      t = v_35(t);
      t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_35)), not_null(q_35)));
      t = printnl_0_0(t);
    }
  }
  t = s_62;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(v_62);
    }
  else
    {
      t = u_62;
      {
        ATerm w_62 = t;
        int b_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(p_15, t);
            ;
            LocalPopChoice(b_63);
          }
        else
          {
            t = w_62;
            {
              ATerm c_36 = NULL,f_36 = NULL,g_36 = NULL;
              ATerm p_36 (ATerm t)
              {
                ATerm h_36 = NULL;
                t = not_null(f_36);
                if(((h_36 != NULL) && (h_36 != t)))
                  _fail(t);
                else
                  h_36 = t;
                t = not_null(h_36);
                return(t);
              }
              ATerm q_36 (ATerm t)
              {
                ATerm i_36 = NULL;
                t = not_null(f_36);
                if(((i_36 != NULL) && (i_36 != t)))
                  _fail(t);
                else
                  i_36 = t;
                t = not_null(i_36);
                {
                  ATerm d_63 = t;
                  int e_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_63);
                    }
                  else
                    {
                      t = d_63;
                      {
                        ATerm q_15 (ATerm t)
                        {
                          t = term_f_63;
                          return(t);
                        }
                        t = debug_1_0(q_15, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm r_36 (ATerm t)
              {
                ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,n_36 = NULL;
                t = not_null(f_36);
                if(((j_36 != NULL) && (j_36 != t)))
                  _fail(t);
                else
                  j_36 = t;
                t = not_null(g_36);
                if(((k_36 != NULL) && (k_36 != t)))
                  _fail(t);
                else
                  k_36 = t;
                t = not_null(c_36);
                {
                  ATerm g_63;
                  g_63 = t;
                  {
                    ATerm m_36 = NULL;
                    ATerm s_36 (ATerm t)
                    {
                      t = not_null(m_36);
                      if(((l_36 != NULL) && (l_36 != t)))
                        _fail(t);
                      else
                        l_36 = t;
                      t = not_null(m_36);
                      return(t);
                    }
                    t = not_null(j_36);
                    t = eval_config_0_0(t);
                    if(((m_36 != NULL) && (m_36 != t)))
                      _fail(t);
                    else
                      m_36 = t;
                    t = s_36(t);
                  }
                  t = g_63;
                  {
                    ATerm o_36 = NULL;
                    ATerm t_36 (ATerm t)
                    {
                      t = not_null(o_36);
                      if(((n_36 != NULL) && (n_36 != t)))
                        _fail(t);
                      else
                        n_36 = t;
                      t = not_null(o_36);
                      return(t);
                    }
                    t = not_null(k_36);
                    t = eval_config_0_0(t);
                    if(((o_36 != NULL) && (o_36 != t)))
                      _fail(t);
                    else
                      o_36 = t;
                    t = t_36(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_36), not_null(n_36));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((c_36 != NULL) && (c_36 != t)))
                _fail(t);
              else
                c_36 = t;
              t = not_null(c_36);
              if(match_cons(t, sym_Path_1))
                {
                  f_36 = ATgetArgument(t, 0);
                  t = p_36(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_36 = ATgetArgument(t, 0);
                      t = q_36(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_36 = ATgetArgument(t, 0);
                          g_36 = ATgetArgument(t, 1);
                          t = r_36(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_36 = NULL;
  ATerm a_37 (ATerm t)
  {
    ATerm x_36 = NULL;
    t = not_null(w_36);
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_63, not_null(x_36));
    t = table_get_0_0(t);
    {
      ATerm x_15 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm i_63;
          i_63 = t;
          {
            ATerm y_36 = NULL;
            ATerm z_36 = NULL;
            ATerm b_37 (ATerm t)
            {
              t = not_null(z_36);
              if(((y_36 != NULL) && (y_36 != t)))
                _fail(t);
              else
                y_36 = t;
              t = not_null(z_36);
              return(t);
            }
            if(((z_36 != NULL) && (z_36 != t)))
              _fail(t);
            else
              z_36 = t;
            t = b_37(t);
            t = (ATerm) ATmakeAppl(sym__3, term_h_63, not_null(x_36), not_null(y_36));
            t = table_put_0_0(t);
          }
          t = i_63;
        }
        return(t);
      }
      t = try_1_0(x_15, t);
    }
    return(t);
  }
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  t = a_37(t);
  return(t);
}
ATerm sc_announce_0_0 (ATerm t)
{
  t = if_verbose2_1_0(sc_version_0_0, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm m_63;
  m_63 = t;
  t = error_0_0(t);
  t = term_o_47;
  t = exit_0_0(t);
  t = m_63;
  return(t);
}
ATerm sc_version_0_0 (ATerm t)
{
  ATerm n_63 = t;
  int o_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_63;
      p_63 = t;
      {
        ATerm e_37 = NULL;
        ATerm f_37 = NULL;
        ATerm h_37 (ATerm t)
        {
          t = not_null(f_37);
          if(((e_37 != NULL) && (e_37 != t)))
            _fail(t);
          else
            e_37 = t;
          t = not_null(f_37);
          return(t);
        }
        t = term_q_63;
        t = get_config_0_0(t);
        if(((f_37 != NULL) && (f_37 != t)))
          _fail(t);
        else
          f_37 = t;
        t = h_37(t);
        t = (ATerm) ATmakeAppl(sym__2, term_y_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_64), term_a_64), term_z_63), term_v_63), term_u_63), term_t_63), term_s_63), not_null(e_37)), term_r_63));
        t = printnl_0_0(t);
      }
      t = p_63;
      ;
      LocalPopChoice(o_63);
    }
  else
    {
      t = n_63;
      {
        ATerm g_37 = NULL;
        if(((g_37 != NULL) && (g_37 != t)))
          _fail(t);
        else
          g_37 = t;
        t = not_null(g_37);
        if(match_string(t, "0.9.3"))
          {
            t = not_null(g_37);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm k_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_79(t);
      ;
      LocalPopChoice(l_64);
    }
  else
    {
      t = k_64;
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  ATerm p_37 (ATerm t)
  {
    ATerm n_37 = NULL,o_37 = NULL;
    t = not_null(l_37);
    if(((n_37 != NULL) && (n_37 != t)))
      _fail(t);
    else
      n_37 = t;
    t = not_null(m_37);
    if(((o_37 != NULL) && (o_37 != t)))
      _fail(t);
    else
      o_37 = t;
    t = not_null(k_37);
    t = SSL_copy(not_null(n_37), not_null(o_37));
    return(t);
  }
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = not_null(k_37);
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
      t = p_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm r_37 = NULL;
  ATerm v_37 (ATerm t)
  {
    ATerm u_37 = NULL;
    t = not_null(r_37);
    if(((u_37 != NULL) && (u_37 != t)))
      _fail(t);
    else
      u_37 = t;
    t = not_null(r_37);
    t = SSL_table_keys(not_null(u_37));
    return(t);
  }
  if(((r_37 != NULL) && (r_37 != t)))
    _fail(t);
  else
    r_37 = t;
  t = v_37(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_37 = NULL;
  ATerm f_38 (ATerm t)
  {
    ATerm a_38 = NULL;
    t = not_null(z_37);
    if(((a_38 != NULL) && (a_38 != t)))
      _fail(t);
    else
      a_38 = t;
    t = not_null(z_37);
    t = table_keys_0_0(t);
    {
      ATerm b_16 (ATerm t)
      {
        ATerm b_38 = NULL;
        ATerm g_38 (ATerm t)
        {
          ATerm c_38 = NULL,d_38 = NULL;
          t = not_null(b_38);
          if(((c_38 != NULL) && (c_38 != t)))
            _fail(t);
          else
            c_38 = t;
          t = not_null(b_38);
          {
            ATerm e_38 = NULL;
            ATerm h_38 (ATerm t)
            {
              t = not_null(e_38);
              if(((d_38 != NULL) && (d_38 != t)))
                _fail(t);
              else
                d_38 = t;
              t = not_null(e_38);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_38), not_null(c_38));
            t = table_get_0_0(t);
            if(((e_38 != NULL) && (e_38 != t)))
              _fail(t);
            else
              e_38 = t;
            t = h_38(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(d_38));
          }
          return(t);
        }
        if(((b_38 != NULL) && (b_38 != t)))
          _fail(t);
        else
          b_38 = t;
        t = g_38(t);
        return(t);
      }
      t = map_1_0(b_16, t);
    }
    return(t);
  }
  if(((z_37 != NULL) && (z_37 != t)))
    _fail(t);
  else
    z_37 = t;
  t = f_38(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm c_16 (ATerm t)
  {
    ATerm m_64;
    m_64 = t;
    {
      ATerm j_38 = NULL;
      ATerm k_38 = NULL;
      ATerm l_38 (ATerm t)
      {
        t = not_null(k_38);
        if(((j_38 != NULL) && (j_38 != t)))
          _fail(t);
        else
          j_38 = t;
        t = not_null(k_38);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((k_38 != NULL) && (k_38 != t)))
        _fail(t);
      else
        k_38 = t;
      t = l_38(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), term_b_55);
      t = geq_0_0(t);
    }
    t = m_64;
    t = m_100(t);
    return(t);
  }
  t = try_1_0(c_16, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm w_64;
  w_64 = t;
  {
    ATerm n_38 = NULL;
    ATerm o_38 = NULL;
    ATerm p_38 (ATerm t)
    {
      t = not_null(o_38);
      if(((n_38 != NULL) && (n_38 != t)))
        _fail(t);
      else
        n_38 = t;
      t = not_null(o_38);
      return(t);
    }
    if(((o_38 != NULL) && (o_38 != t)))
      _fail(t);
    else
      o_38 = t;
    t = p_38(t);
    t = (ATerm) ATmakeAppl(sym__2, term_w_35, not_null(n_38));
    t = printnl_0_0(t);
  }
  t = w_64;
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm d_39 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    t = not_null(u_38);
    if(((v_38 != NULL) && (v_38 != t)))
      _fail(t);
    else
      v_38 = t;
    t = not_null(u_38);
    {
      ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
      ATerm e_39 (ATerm t)
      {
        t = not_null(a_39);
        if(((w_38 != NULL) && (w_38 != t)))
          _fail(t);
        else
          w_38 = t;
        t = not_null(b_39);
        if(((x_38 != NULL) && (x_38 != t)))
          _fail(t);
        else
          x_38 = t;
        t = not_null(y_38);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, term_x_64, (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_38)));
      t = table_get_0_0(t);
      if(((y_38 != NULL) && (y_38 != t)))
        _fail(t);
      else
        y_38 = t;
      t = not_null(y_38);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_38 = ATgetFirst((ATermList) t);
          c_39 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(z_38);
          if(match_cons(t, sym__2))
            {
              a_39 = ATgetArgument(t, 0);
              b_39 = ATgetArgument(t, 1);
              t = e_39(t);
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
      t = not_null(x_38);
    }
    return(t);
  }
  if(((u_38 != NULL) && (u_38 != t)))
    _fail(t);
  else
    u_38 = t;
  t = d_39(t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  ATerm s_39 (ATerm t)
  {
    ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
    t = not_null(k_39);
    if(((m_39 != NULL) && (m_39 != t)))
      _fail(t);
    else
      m_39 = t;
    t = not_null(l_39);
    if(((n_39 != NULL) && (n_39 != t)))
      _fail(t);
    else
      n_39 = t;
    t = not_null(j_39);
    t = (ATerm) ATmakeAppl(sym__2, term_x_64, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_39)));
    t = table_get_0_0(t);
    {
      ATerm d_16 (ATerm t)
      {
        ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
        ATerm t_39 (ATerm t)
        {
          t = not_null(q_39);
          if(((n_39 != NULL) && (n_39 != t)))
            _fail(t);
          else
            n_39 = t;
          t = not_null(r_39);
          if(((o_39 != NULL) && (o_39 != t)))
            _fail(t);
          else
            o_39 = t;
          t = not_null(p_39);
          return(t);
        }
        if(((p_39 != NULL) && (p_39 != t)))
          _fail(t);
        else
          p_39 = t;
        t = not_null(p_39);
        if(match_cons(t, sym__2))
          {
            q_39 = ATgetArgument(t, 0);
            r_39 = ATgetArgument(t, 1);
            t = t_39(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(d_16, t);
    }
    t = not_null(o_39);
    return(t);
  }
  if(((j_39 != NULL) && (j_39 != t)))
    _fail(t);
  else
    j_39 = t;
  t = not_null(j_39);
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
      t = s_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm a_65 = t;
  int b_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(b_65);
    }
  else
    {
      t = a_65;
      {
        ATerm i_65 = t;
        int j_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_16 (ATerm t)
            {
              t = filter_1_0(x_93, t);
              return(t);
            }
            t = Cons_2_0(x_93, e_16, t);
            ;
            LocalPopChoice(j_65);
          }
        else
          {
            t = i_65;
            {
              ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
              ATerm a_40 (ATerm t)
              {
                ATerm z_39 = NULL;
                t = not_null(y_39);
                if(((z_39 != NULL) && (z_39 != t)))
                  _fail(t);
                else
                  z_39 = t;
                t = not_null(z_39);
                t = filter_1_0(x_93, t);
                return(t);
              }
              if(((w_39 != NULL) && (w_39 != t)))
                _fail(t);
              else
                w_39 = t;
              t = not_null(w_39);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_39 = ATgetFirst((ATermList) t);
                  y_39 = (ATerm) ATgetNext((ATermList) t);
                  t = a_40(t);
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
ATerm repeat_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm b_40 (ATerm t)
  {
    ATerm f_16 (ATerm t)
    {
      t = e_80(t);
      t = b_40(t);
      return(t);
    }
    t = try_1_0(f_16, t);
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm k_65;
  k_65 = t;
  {
    ATerm r_16 (ATerm t)
    {
      t = term_c_66;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm d_66 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_66;
          }
      }
      return(t);
    }
    t = repeat_1_0(r_16, t);
  }
  t = k_65;
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm e_66;
  e_66 = t;
  {
    ATerm d_40 = NULL;
    ATerm e_40 = NULL;
    ATerm f_40 (ATerm t)
    {
      t = not_null(e_40);
      if(((d_40 != NULL) && (d_40 != t)))
        _fail(t);
      else
        d_40 = t;
      t = not_null(e_40);
      return(t);
    }
    if(((e_40 != NULL) && (e_40 != t)))
      _fail(t);
    else
      e_40 = t;
    t = f_40(t);
    t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATempty, not_null(d_40)));
    t = printnl_0_0(t);
  }
  t = e_66;
  return(t);
}
ATerm say_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm f_66;
  f_66 = t;
  t = v_98(t);
  t = debug_0_0(t);
  t = f_66;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm s_16 (ATerm t)
  {
    ATerm q_66;
    q_66 = t;
    {
      ATerm h_40 = NULL;
      ATerm i_40 = NULL;
      ATerm j_40 (ATerm t)
      {
        t = not_null(i_40);
        if(((h_40 != NULL) && (h_40 != t)))
          _fail(t);
        else
          h_40 = t;
        t = not_null(i_40);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((i_40 != NULL) && (i_40 != t)))
        _fail(t);
      else
        i_40 = t;
      t = j_40(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), term_w_52);
      t = geq_0_0(t);
    }
    t = q_66;
    t = l_100(t);
    return(t);
  }
  t = try_1_0(s_16, t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  ATerm r_40 (ATerm t)
  {
    ATerm p_40 = NULL,q_40 = NULL;
    t = not_null(n_40);
    if(((p_40 != NULL) && (p_40 != t)))
      _fail(t);
    else
      p_40 = t;
    t = not_null(o_40);
    if(((q_40 != NULL) && (q_40 != t)))
      _fail(t);
    else
      q_40 = t;
    t = not_null(m_40);
    {
      ATerm s_66;
      s_66 = t;
      {
        ATerm t_66 = t;
        int a_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(p_40), not_null(q_40));
            ;
            LocalPopChoice(a_67);
          }
        else
          {
            t = t_66;
            t = SSL_gtr(not_null(p_40), not_null(q_40));
          }
      }
      t = s_66;
    }
    return(t);
  }
  if(((m_40 != NULL) && (m_40 != t)))
    _fail(t);
  else
    m_40 = t;
  t = not_null(m_40);
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
      t = r_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm b_67 = t;
  int i_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
      ATerm y_40 (ATerm t)
      {
        t = not_null(w_40);
        if(((u_40 != NULL) && (u_40 != t)))
          _fail(t);
        else
          u_40 = t;
        t = not_null(x_40);
        if(((u_40 != NULL) && (u_40 != t)))
          _fail(t);
        else
          u_40 = t;
        t = not_null(v_40);
        return(t);
      }
      if(((v_40 != NULL) && (v_40 != t)))
        _fail(t);
      else
        v_40 = t;
      t = not_null(v_40);
      if(match_cons(t, sym__2))
        {
          w_40 = ATgetArgument(t, 0);
          x_40 = ATgetArgument(t, 1);
          t = y_40(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(i_67);
    }
  else
    {
      t = b_67;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm j_67;
    j_67 = t;
    {
      ATerm a_41 = NULL;
      ATerm b_41 = NULL;
      ATerm c_41 (ATerm t)
      {
        t = not_null(b_41);
        if(((a_41 != NULL) && (a_41 != t)))
          _fail(t);
        else
          a_41 = t;
        t = not_null(b_41);
        return(t);
      }
      t = term_i_33;
      t = get_config_0_0(t);
      if(((b_41 != NULL) && (b_41 != t)))
        _fail(t);
      else
        b_41 = t;
      t = c_41(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), term_v_49);
      t = geq_0_0(t);
    }
    t = j_67;
    t = n_100(t);
    return(t);
  }
  t = try_1_0(t_16, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  ATerm j_41 (ATerm t)
  {
    ATerm i_41 = NULL;
    t = not_null(g_41);
    if(((i_41 != NULL) && (i_41 != t)))
      _fail(t);
    else
      i_41 = t;
    t = not_null(h_41);
    if(((i_41 != NULL) && (i_41 != t)))
      _fail(t);
    else
      i_41 = t;
    t = not_null(f_41);
    return(t);
  }
  if(((f_41 != NULL) && (f_41 != t)))
    _fail(t);
  else
    f_41 = t;
  t = not_null(f_41);
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
      t = j_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  ATerm u_41 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL;
    t = not_null(o_41);
    if(((r_41 != NULL) && (r_41 != t)))
      _fail(t);
    else
      r_41 = t;
    t = not_null(p_41);
    if(((q_41 != NULL) && (q_41 != t)))
      _fail(t);
    else
      q_41 = t;
    t = not_null(n_41);
    t = b_91(t);
    {
      ATerm u_16 (ATerm t)
      {
        ATerm s_41 = NULL;
        ATerm v_41 (ATerm t)
        {
          ATerm t_41 = NULL;
          t = not_null(s_41);
          if(((t_41 != NULL) && (t_41 != t)))
            _fail(t);
          else
            t_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_41), not_null(t_41));
          t = a_91(t);
          return(t);
        }
        if(((s_41 != NULL) && (s_41 != t)))
          _fail(t);
        else
          s_41 = t;
        t = v_41(t);
        return(t);
      }
      t = fetch_1_0(u_16, t);
    }
    t = not_null(q_41);
    return(t);
  }
  if(((n_41 != NULL) && (n_41 != t)))
    _fail(t);
  else
    n_41 = t;
  t = not_null(n_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_41 = ATgetFirst((ATermList) t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
      t = u_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  ATerm d_42 (ATerm t)
  {
    ATerm b_42 = NULL,c_42 = NULL;
    t = not_null(z_41);
    if(((c_42 != NULL) && (c_42 != t)))
      _fail(t);
    else
      c_42 = t;
    t = not_null(a_42);
    if(((b_42 != NULL) && (b_42 != t)))
      _fail(t);
    else
      b_42 = t;
    t = not_null(c_42);
    {
      ATerm e_42 (ATerm t)
      {
        ATerm n_67 = t;
        int o_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(b_42);
            ;
            LocalPopChoice(o_67);
          }
        else
          {
            t = n_67;
            {
              ATerm x_67 = t;
              int y_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_17 (ATerm t)
                  {
                    t = not_null(b_42);
                    return(t);
                  }
                  t = HdMember_p__2_0(w_90, f_17, t);
                  t = e_42(t);
                  ;
                  LocalPopChoice(y_67);
                }
              else
                {
                  t = x_67;
                  t = Cons_2_0(_id, e_42, t);
                }
            }
          }
        return(t);
      }
      t = e_42(t);
    }
    return(t);
  }
  if(((y_41 != NULL) && (y_41 != t)))
    _fail(t);
  else
    y_41 = t;
  t = not_null(y_41);
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      t = d_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
  ATerm y_42 (ATerm t)
  {
    ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
    t = not_null(k_42);
    if(((n_42 != NULL) && (n_42 != t)))
      _fail(t);
    else
      n_42 = t;
    t = not_null(l_42);
    if(((o_42 != NULL) && (o_42 != t)))
      _fail(t);
    else
      o_42 = t;
    t = not_null(m_42);
    if(((p_42 != NULL) && (p_42 != t)))
      _fail(t);
    else
      p_42 = t;
    t = not_null(j_42);
    {
      ATerm f_68;
      f_68 = t;
      {
        ATerm q_42 = NULL;
        ATerm r_42 = NULL,x_42 = NULL;
        ATerm a_43 (ATerm t)
        {
          t = not_null(x_42);
          if(((q_42 != NULL) && (q_42 != t)))
            _fail(t);
          else
            q_42 = t;
          t = not_null(x_42);
          return(t);
        }
        ATerm v_42 = NULL;
        ATerm z_42 (ATerm t)
        {
          t = not_null(v_42);
          if(((r_42 != NULL) && (r_42 != t)))
            _fail(t);
          else
            r_42 = t;
          t = not_null(v_42);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_42), not_null(o_42));
        {
          ATerm g_68 = t;
          int m_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_0_0(t);
              ;
              LocalPopChoice(m_68);
            }
          else
            {
              t = g_68;
              t = (ATerm) ATempty;
            }
          if(((v_42 != NULL) && (v_42 != t)))
            _fail(t);
          else
            v_42 = t;
          t = z_42(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_42), not_null(p_42));
        t = union_0_0(t);
        if(((x_42 != NULL) && (x_42 != t)))
          _fail(t);
        else
          x_42 = t;
        t = a_43(t);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_42), not_null(o_42), not_null(q_42));
        t = set_0_0(t);
      }
      t = f_68;
    }
    return(t);
  }
  if(((j_42 != NULL) && (j_42 != t)))
    _fail(t);
  else
    j_42 = t;
  t = not_null(j_42);
  if(match_cons(t, sym__3))
    {
      k_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
      m_42 = ATgetArgument(t, 2);
      t = y_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  ATerm p_43 (ATerm t)
  {
    ATerm i_43 = NULL,j_43 = NULL;
    t = not_null(g_43);
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    t = not_null(h_43);
    if(((i_43 != NULL) && (i_43 != t)))
      _fail(t);
    else
      i_43 = t;
    t = not_null(i_43);
    {
      ATerm g_17 (ATerm t)
      {
        ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
        ATerm q_43 (ATerm t)
        {
          ATerm n_43 = NULL,o_43 = NULL;
          t = not_null(l_43);
          if(((n_43 != NULL) && (n_43 != t)))
            _fail(t);
          else
            n_43 = t;
          t = not_null(m_43);
          if(((o_43 != NULL) && (o_43 != t)))
            _fail(t);
          else
            o_43 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_43), not_null(n_43), not_null(o_43));
          t = l_105(t);
          return(t);
        }
        if(((k_43 != NULL) && (k_43 != t)))
          _fail(t);
        else
          k_43 = t;
        t = not_null(k_43);
        if(match_cons(t, sym__2))
          {
            l_43 = ATgetArgument(t, 0);
            m_43 = ATgetArgument(t, 1);
            t = q_43(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(g_17, t);
    }
    return(t);
  }
  if(((f_43 != NULL) && (f_43 != t)))
    _fail(t);
  else
    f_43 = t;
  t = not_null(f_43);
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
      t = p_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm s_43 = NULL;
  ATerm t_43 = NULL;
  ATerm u_43 (ATerm t)
  {
    t = not_null(t_43);
    if(((s_43 != NULL) && (s_43 != t)))
      _fail(t);
    else
      s_43 = t;
    t = not_null(t_43);
    return(t);
  }
  if(((t_43 != NULL) && (t_43 != t)))
    _fail(t);
  else
    t_43 = t;
  t = u_43(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_43), (ATerm) ATinsert(ATempty, term_o_68));
  t = access_0_0(t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  ATerm e_44 (ATerm t)
  {
    ATerm a_44 = NULL;
    t = not_null(y_43);
    if(((a_44 != NULL) && (a_44 != t)))
      _fail(t);
    else
      a_44 = t;
    t = not_null(z_43);
    t = SSL_fclose(not_null(a_44));
    return(t);
  }
  ATerm f_44 (ATerm t)
  {
    ATerm d_44 = NULL;
    t = not_null(z_43);
    if(((d_44 != NULL) && (d_44 != t)))
      _fail(t);
    else
      d_44 = t;
    t = not_null(z_43);
    t = SSL_fclose(not_null(d_44));
    return(t);
  }
  if(((z_43 != NULL) && (z_43 != t)))
    _fail(t);
  else
    z_43 = t;
  t = not_null(z_43);
  if(match_cons(t, sym_Stream_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm p_68 = t;
        int q_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_44(t);
            ;
            LocalPopChoice(q_68);
          }
        else
          {
            t = p_68;
            t = f_44(t);
          }
      }
    }
  else
    {
      t = f_44(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  ATerm l_44 (ATerm t)
  {
    ATerm k_44 = NULL;
    t = not_null(j_44);
    if(((k_44 != NULL) && (k_44 != t)))
      _fail(t);
    else
      k_44 = t;
    t = not_null(i_44);
    t = SSL_read_term_from_stream(not_null(k_44));
    return(t);
  }
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  t = not_null(i_44);
  if(match_cons(t, sym_Stream_1))
    {
      j_44 = ATgetArgument(t, 0);
      t = l_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,v_44 = NULL;
  ATerm c_45 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
    t = not_null(s_44);
    if(((w_44 != NULL) && (w_44 != t)))
      _fail(t);
    else
      w_44 = t;
    t = not_null(v_44);
    if(((x_44 != NULL) && (x_44 != t)))
      _fail(t);
    else
      x_44 = t;
    t = not_null(r_44);
    t = SSL_fopen(not_null(w_44), not_null(x_44));
    {
      ATerm b_45 = NULL;
      ATerm d_45 (ATerm t)
      {
        t = not_null(b_45);
        if(((y_44 != NULL) && (y_44 != t)))
          _fail(t);
        else
          y_44 = t;
        t = not_null(b_45);
        return(t);
      }
      if(((b_45 != NULL) && (b_45 != t)))
        _fail(t);
      else
        b_45 = t;
      t = d_45(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_44));
    }
    return(t);
  }
  if(((r_44 != NULL) && (r_44 != t)))
    _fail(t);
  else
    r_44 = t;
  t = not_null(r_44);
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
      t = c_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm h_45 (ATerm t)
  {
    ATerm g_45 = NULL;
    t = not_null(f_45);
    if(((g_45 != NULL) && (g_45 != t)))
      _fail(t);
    else
      g_45 = t;
    t = not_null(f_45);
    t = SSL_is_string(not_null(g_45));
    return(t);
  }
  if(((f_45 != NULL) && (f_45 != t)))
    _fail(t);
  else
    f_45 = t;
  t = h_45(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm k_45 = NULL;
    ATerm l_45 (ATerm t)
    {
      t = not_null(k_45);
      if(((j_45 != NULL) && (j_45 != t)))
        _fail(t);
      else
        j_45 = t;
      t = not_null(k_45);
      return(t);
    }
    if(((k_45 != NULL) && (k_45 != t)))
      _fail(t);
    else
      k_45 = t;
    t = l_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_45));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm o_45 = NULL;
    ATerm p_45 (ATerm t)
    {
      t = not_null(o_45);
      if(((n_45 != NULL) && (n_45 != t)))
        _fail(t);
      else
        n_45 = t;
      t = not_null(o_45);
      return(t);
    }
    if(((o_45 != NULL) && (o_45 != t)))
      _fail(t);
    else
      o_45 = t;
    t = p_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_45));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm s_45 = NULL;
    ATerm v_45 (ATerm t)
    {
      t = not_null(s_45);
      if(((r_45 != NULL) && (r_45 != t)))
        _fail(t);
      else
        r_45 = t;
      t = not_null(s_45);
      return(t);
    }
    if(((s_45 != NULL) && (s_45 != t)))
      _fail(t);
    else
      s_45 = t;
    t = v_45(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_45));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_46 = NULL;
  ATerm m_46 (ATerm t)
  {
    t = not_null(l_46);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm n_46 (ATerm t)
  {
    t = not_null(l_46);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm o_46 (ATerm t)
  {
    t = not_null(l_46);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  t = not_null(l_46);
  if(match_cons(t, sym_stderr_0))
    {
      t = m_46(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_46(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = o_46(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  ATerm k_47 (ATerm t)
  {
    ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
    t = not_null(v_46);
    if(((w_46 != NULL) && (w_46 != t)))
      _fail(t);
    else
      w_46 = t;
    t = not_null(v_46);
    {
      ATerm d_47 = NULL;
      ATerm l_47 (ATerm t)
      {
        ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
        ATerm m_47 (ATerm t)
        {
          t = not_null(i_47);
          if(((y_46 != NULL) && (y_46 != t)))
            _fail(t);
          else
            y_46 = t;
          t = not_null(j_47);
          if(((x_46 != NULL) && (x_46 != t)))
            _fail(t);
          else
            x_46 = t;
          t = not_null(f_47);
          return(t);
        }
        t = not_null(d_47);
        if(((e_47 != NULL) && (e_47 != t)))
          _fail(t);
        else
          e_47 = t;
        t = not_null(d_47);
        t = SSL_explode_term(not_null(e_47));
        if(((f_47 != NULL) && (f_47 != t)))
          _fail(t);
        else
          f_47 = t;
        t = not_null(f_47);
        if(match_cons(t, sym__2))
          {
            g_47 = ATgetArgument(t, 0);
            h_47 = ATgetArgument(t, 1);
            t = not_null(g_47);
            if(match_string(t, ""))
              {
                t = not_null(h_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_47 = ATgetFirst((ATermList) t);
                    j_47 = (ATerm) ATgetNext((ATermList) t);
                    t = m_47(t);
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
      t = not_null(w_46);
      if(((d_47 != NULL) && (d_47 != t)))
        _fail(t);
      else
        d_47 = t;
      t = l_47(t);
      t = not_null(y_46);
    }
    return(t);
  }
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = k_47(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  ATerm d_48 (ATerm t)
  {
    t = not_null(t_47);
    {
      ATerm r_68 = t;
      int s_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(s_68);
        }
      else
        {
          t = r_68;
          {
            ATerm e_69 = t;
            int f_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_17 (ATerm t)
                {
                  ATerm w_47 = NULL,x_47 = NULL;
                  ATerm e_48 (ATerm t)
                  {
                    ATerm y_47 = NULL;
                    t = not_null(x_47);
                    if(((y_47 != NULL) && (y_47 != t)))
                      _fail(t);
                    else
                      y_47 = t;
                    t = not_null(y_47);
                    return(t);
                  }
                  if(((w_47 != NULL) && (w_47 != t)))
                    _fail(t);
                  else
                    w_47 = t;
                  t = not_null(w_47);
                  if(match_cons(t, sym_Path_1))
                    {
                      x_47 = ATgetArgument(t, 0);
                      t = e_48(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(h_17, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(f_69);
              }
            else
              {
                t = e_69;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((t_47 != NULL) && (t_47 != t)))
    _fail(t);
  else
    t_47 = t;
  t = not_null(t_47);
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
      t = d_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_48 = NULL;
  ATerm g_69 = t;
  int h_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_48 = NULL;
      ATerm m_48 = NULL;
      ATerm r_48 (ATerm t)
      {
        t = not_null(m_48);
        if(((l_48 != NULL) && (l_48 != t)))
          _fail(t);
        else
          l_48 = t;
        t = not_null(m_48);
        return(t);
      }
      if(((m_48 != NULL) && (m_48 != t)))
        _fail(t);
      else
        m_48 = t;
      t = r_48(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_48), term_s_69);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_69);
    }
  else
    {
      t = g_69;
      {
        ATerm i_17 (ATerm t)
        {
          t = term_t_69;
          return(t);
        }
        t = debug_1_0(i_17, t);
        _fail(t);
      }
    }
  {
    ATerm a_70;
    a_70 = t;
    {
      ATerm o_48 = NULL;
      ATerm s_48 (ATerm t)
      {
        t = not_null(o_48);
        if(((n_48 != NULL) && (n_48 != t)))
          _fail(t);
        else
          n_48 = t;
        t = not_null(o_48);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((o_48 != NULL) && (o_48 != t)))
        _fail(t);
      else
        o_48 = t;
      t = s_48(t);
    }
    t = a_70;
    t = fclose_0_0(t);
    t = not_null(n_48);
  }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  ATerm a_49 (ATerm t)
  {
    ATerm y_48 = NULL,z_48 = NULL;
    t = not_null(w_48);
    if(((y_48 != NULL) && (y_48 != t)))
      _fail(t);
    else
      y_48 = t;
    t = not_null(x_48);
    if(((z_48 != NULL) && (z_48 != t)))
      _fail(t);
    else
      z_48 = t;
    t = not_null(v_48);
    t = SSL_access(not_null(y_48), not_null(z_48));
    return(t);
  }
  if(((v_48 != NULL) && (v_48 != t)))
    _fail(t);
  else
    v_48 = t;
  t = not_null(v_48);
  if(match_cons(t, sym__2))
    {
      w_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
      t = a_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm c_49 = NULL;
  ATerm d_49 = NULL;
  ATerm e_49 (ATerm t)
  {
    t = not_null(d_49);
    if(((c_49 != NULL) && (c_49 != t)))
      _fail(t);
    else
      c_49 = t;
    t = not_null(d_49);
    return(t);
  }
  if(((d_49 != NULL) && (d_49 != t)))
    _fail(t);
  else
    d_49 = t;
  t = e_49(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), (ATerm) ATinsert(ATempty, term_b_70));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_70 = t;
  int d_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(d_70);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_70;
      {
        ATerm e_70 = t;
        int f_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_70 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_70;
              }
            {
              ATerm v_17 (ATerm t)
              {
                t = term_f_71;
                return(t);
              }
              t = debug_1_0(v_17, t);
            }
            ;
            LocalPopChoice(f_70);
          }
        else
          {
            t = e_70;
            {
              ATerm w_17 (ATerm t)
              {
                t = term_h_71;
                return(t);
              }
              t = debug_1_0(w_17, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_49 = NULL;
  ATerm l_49 (ATerm t)
  {
    ATerm i_49 = NULL,j_49 = NULL;
    t = not_null(h_49);
    if(((i_49 != NULL) && (i_49 != t)))
      _fail(t);
    else
      i_49 = t;
    t = not_null(h_49);
    {
      ATerm d_18 (ATerm t)
      {
        ATerm h_18 (ATerm t)
        {
          t = term_i_71;
          return(t);
        }
        t = debug_1_0(h_18, t);
        return(t);
      }
      t = if_verbose5_1_0(d_18, t);
      {
        ATerm j_71 = t;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_64, (ATerm) ATmakeAppl(sym_Imported_1, not_null(i_49)));
            t = table_get_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_71;
          }
        {
          ATerm k_71;
          k_71 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_x_64, term_l_71, (ATerm) ATinsert(ATempty, not_null(i_49)));
          t = table_put_0_0(t);
          t = k_71;
          {
            ATerm i_18 (ATerm t)
            {
              ATerm p_18 (ATerm t)
              {
                t = term_f_72;
                return(t);
              }
              t = debug_1_0(p_18, t);
              return(t);
            }
            t = if_verbose4_1_0(i_18, t);
            t = read_repository_file_0_0(t);
            {
              ATerm t_18 (ATerm t)
              {
                ATerm u_18 (ATerm t)
                {
                  t = term_j_72;
                  return(t);
                }
                t = say_1_0(u_18, t);
                return(t);
              }
              t = if_verbose6_1_0(t_18, t);
              {
                ATerm k_49 = NULL;
                ATerm m_49 (ATerm t)
                {
                  t = not_null(k_49);
                  if(((j_49 != NULL) && (j_49 != t)))
                    _fail(t);
                  else
                    j_49 = t;
                  t = not_null(k_49);
                  return(t);
                }
                if(((k_49 != NULL) && (k_49 != t)))
                  _fail(t);
                else
                  k_49 = t;
                t = m_49(t);
                t = (ATerm) ATmakeAppl(sym__2, term_x_64, not_null(j_49));
                t = table_putlist_1_0(table_append_0_0, t);
                {
                  ATerm v_18 (ATerm t)
                  {
                    ATerm w_18 (ATerm t)
                    {
                      t = term_m_72;
                      return(t);
                    }
                    t = say_1_0(w_18, t);
                    return(t);
                  }
                  t = if_verbose6_1_0(v_18, t);
                  t = (ATerm) ATmakeAppl(sym__3, term_x_64, (ATerm)ATmakeAppl(sym_Imported_1, not_null(i_49)), (ATerm) ATempty);
                  t = table_put_0_0(t);
                  {
                    ATerm x_18 (ATerm t)
                    {
                      ATerm o_19 (ATerm t)
                      {
                        t = term_j_72;
                        return(t);
                      }
                      t = say_1_0(o_19, t);
                      return(t);
                    }
                    t = if_verbose4_1_0(x_18, t);
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
  if(((h_49 != NULL) && (h_49 != t)))
    _fail(t);
  else
    h_49 = t;
  t = l_49(t);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm o_49 = NULL;
  ATerm q_49 (ATerm t)
  {
    ATerm p_49 = NULL;
    t = not_null(o_49);
    if(((p_49 != NULL) && (p_49 != t)))
      _fail(t);
    else
      p_49 = t;
    t = not_null(o_49);
    t = SSL_getenv(not_null(p_49));
    return(t);
  }
  if(((o_49 != NULL) && (o_49 != t)))
    _fail(t);
  else
    o_49 = t;
  t = q_49(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_72 = t;
  int o_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_72;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_72);
    }
  else
    {
      t = n_72;
      {
        ATerm q_72 = t;
        int r_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_72;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(r_72);
          }
        else
          {
            t = q_72;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm t_19 (ATerm t)
    {
      t = term_t_72;
      return(t);
    }
    t = debug_1_0(t_19, t);
    return(t);
  }
  t = if_verbose5_1_0(s_19, t);
  {
    ATerm u_72;
    u_72 = t;
    {
      ATerm v_72 = t;
      int w_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_72;
          t = table_get_0_0(t);
          ;
          LocalPopChoice(w_72);
        }
      else
        {
          t = v_72;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t = xtc_import_0_0(t);
        }
    }
    t = u_72;
    {
      ATerm u_19 (ATerm t)
      {
        ATerm d_20 (ATerm t)
        {
          t = term_y_72;
          return(t);
        }
        t = debug_1_0(d_20, t);
        return(t);
      }
      t = if_verbose5_1_0(u_19, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_74 = t;
  int q_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_20 (ATerm t)
      {
        ATerm f_20 (ATerm t)
        {
          t = term_r_74;
          return(t);
        }
        t = debug_1_0(f_20, t);
        return(t);
      }
      t = if_verbose5_1_0(e_20, t);
      t = xtc_load_0_0(t);
      {
        ATerm s_74 = t;
        int c_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(c_75);
          }
        else
          {
            t = s_74;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm g_20 (ATerm t)
          {
            ATerm r_20 (ATerm t)
            {
              t = term_r_74;
              return(t);
            }
            t = debug_1_0(r_20, t);
            return(t);
          }
          t = if_verbose5_1_0(g_20, t);
        }
      }
      ;
      LocalPopChoice(q_74);
    }
  else
    {
      t = m_74;
      {
        ATerm s_49 = NULL;
        ATerm t_49 = NULL;
        ATerm u_49 (ATerm t)
        {
          t = not_null(t_49);
          if(((s_49 != NULL) && (s_49 != t)))
            _fail(t);
          else
            s_49 = t;
          t = not_null(t_49);
          return(t);
        }
        if(((t_49 != NULL) && (t_49 != t)))
          _fail(t);
        else
          t_49 = t;
        t = u_49(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_75), not_null(s_49)), term_d_75);
        t = error_0_0(t);
        {
          ATerm v_20 (ATerm t)
          {
            t = term_x_64;
            t = table_getlist_0_0(t);
            {
              ATerm w_20 (ATerm t)
              {
                t = term_f_75;
                return(t);
              }
              t = debug_1_0(w_20, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(v_20, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  ATerm i_50 (ATerm t)
  {
    ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
    t = not_null(a_50);
    if(((c_50 != NULL) && (c_50 != t)))
      _fail(t);
    else
      c_50 = t;
    t = not_null(b_50);
    if(((d_50 != NULL) && (d_50 != t)))
      _fail(t);
    else
      d_50 = t;
    t = not_null(z_49);
    {
      ATerm f_50 = NULL,h_50 = NULL;
      ATerm k_50 (ATerm t)
      {
        t = not_null(h_50);
        if(((e_50 != NULL) && (e_50 != t)))
          _fail(t);
        else
          e_50 = t;
        t = not_null(h_50);
        return(t);
      }
      ATerm g_50 = NULL;
      ATerm j_50 (ATerm t)
      {
        t = not_null(g_50);
        if(((f_50 != NULL) && (f_50 != t)))
          _fail(t);
        else
          f_50 = t;
        t = not_null(g_50);
        return(t);
      }
      t = not_null(c_50);
      {
        ATerm g_75 = t;
        int h_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(h_75);
          }
        else
          {
            t = g_75;
            t = (ATerm) ATempty;
          }
        if(((g_50 != NULL) && (g_50 != t)))
          _fail(t);
        else
          g_50 = t;
        t = j_50(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), not_null(f_50));
      t = conc_0_0(t);
      if(((h_50 != NULL) && (h_50 != t)))
        _fail(t);
      else
        h_50 = t;
      t = k_50(t);
      t = (ATerm) ATmakeAppl(sym__3, term_h_63, not_null(c_50), not_null(e_50));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((z_49 != NULL) && (z_49 != t)))
    _fail(t);
  else
    z_49 = t;
  t = not_null(z_49);
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
      t = i_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  ATerm a_51 (ATerm t)
  {
    t = not_null(q_50);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm b_51 (ATerm t)
  {
    ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
    t = not_null(r_50);
    if(((v_50 != NULL) && (v_50 != t)))
      _fail(t);
    else
      v_50 = t;
    t = not_null(t_50);
    if(((w_50 != NULL) && (w_50 != t)))
      _fail(t);
    else
      w_50 = t;
    t = not_null(u_50);
    if(((x_50 != NULL) && (x_50 != t)))
      _fail(t);
    else
      x_50 = t;
    t = not_null(q_50);
    {
      ATerm i_75;
      i_75 = t;
      t = not_null(v_50);
      t = k_0(t);
      t = i_75;
      {
        ATerm z_50 = NULL;
        ATerm c_51 (ATerm t)
        {
          t = not_null(z_50);
          if(((y_50 != NULL) && (y_50 != t)))
            _fail(t);
          else
            y_50 = t;
          t = not_null(z_50);
          return(t);
        }
        t = not_null(w_50);
        t = l_0(t);
        if(((z_50 != NULL) && (z_50 != t)))
          _fail(t);
        else
          z_50 = t;
        t = c_51(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(x_50)), not_null(y_50));
      }
    }
    return(t);
  }
  if(((q_50 != NULL) && (q_50 != t)))
    _fail(t);
  else
    q_50 = t;
  t = not_null(q_50);
  if(match_string(t, "register-usage-info"))
    {
      t = a_51(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_50 = ATgetFirst((ATermList) t);
          s_50 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(s_50);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_50 = ATgetFirst((ATermList) t);
              u_50 = (ATerm) ATgetNext((ATermList) t);
              t = b_51(t);
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
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  ATerm k_51 (ATerm t)
  {
    ATerm j_51 = NULL;
    t = not_null(e_51);
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = not_null(e_51);
    t = SSL_string_to_int(not_null(j_51));
    return(t);
  }
  if(((e_51 != NULL) && (e_51 != t)))
    _fail(t);
  else
    e_51 = t;
  t = k_51(t);
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  ATerm j_75;
  j_75 = t;
  {
    ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
    ATerm v_51 (ATerm t)
    {
      t = not_null(t_51);
      if(((q_51 != NULL) && (q_51 != t)))
        _fail(t);
      else
        q_51 = t;
      t = not_null(u_51);
      if(((r_51 != NULL) && (r_51 != t)))
        _fail(t);
      else
        r_51 = t;
      t = not_null(s_51);
      t = SSL_table_remove(not_null(q_51), not_null(r_51));
      return(t);
    }
    if(((s_51 != NULL) && (s_51 != t)))
      _fail(t);
    else
      s_51 = t;
    t = not_null(s_51);
    if(match_cons(t, sym__2))
      {
        t_51 = ATgetArgument(t, 0);
        u_51 = ATgetArgument(t, 1);
        t = v_51(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = j_75;
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  ATerm d_52 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL;
    t = not_null(z_51);
    if(((b_52 != NULL) && (b_52 != t)))
      _fail(t);
    else
      b_52 = t;
    t = not_null(a_52);
    if(((c_52 != NULL) && (c_52 != t)))
      _fail(t);
    else
      c_52 = t;
    t = not_null(y_51);
    {
      ATerm k_75 = t;
      int l_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(b_52);
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_h_63, not_null(b_52));
          t = table_remove_0_0(t);
          ;
          LocalPopChoice(l_75);
        }
      else
        {
          t = k_75;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_52), not_null(c_52));
          t = set_config_0_0(t);
        }
    }
    return(t);
  }
  if(((y_51 != NULL) && (y_51 != t)))
    _fail(t);
  else
    y_51 = t;
  t = not_null(y_51);
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
      t = d_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  ATerm e_53 (ATerm t)
  {
    ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
    t = not_null(j_52);
    if(((l_52 != NULL) && (l_52 != t)))
      _fail(t);
    else
      l_52 = t;
    t = not_null(k_52);
    if(((m_52 != NULL) && (m_52 != t)))
      _fail(t);
    else
      m_52 = t;
    t = not_null(i_52);
    {
      ATerm q_52 = NULL,d_53 = NULL;
      ATerm i_53 (ATerm t)
      {
        t = not_null(d_53);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = not_null(d_53);
        return(t);
      }
      ATerm c_53 = NULL;
      ATerm h_53 (ATerm t)
      {
        t = not_null(c_53);
        if(((q_52 != NULL) && (q_52 != t)))
          _fail(t);
        else
          q_52 = t;
        t = not_null(c_53);
        return(t);
      }
      t = not_null(l_52);
      {
        ATerm m_75 = t;
        int n_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(n_75);
          }
        else
          {
            t = m_75;
            t = (ATerm) ATempty;
          }
        if(((c_53 != NULL) && (c_53 != t)))
          _fail(t);
        else
          c_53 = t;
        t = h_53(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_52), not_null(m_52));
      t = conc_0_0(t);
      if(((d_53 != NULL) && (d_53 != t)))
        _fail(t);
      else
        d_53 = t;
      t = i_53(t);
      t = (ATerm) ATmakeAppl(sym__3, term_h_63, not_null(l_52), not_null(n_52));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((i_52 != NULL) && (i_52 != t)))
    _fail(t);
  else
    i_52 = t;
  t = not_null(i_52);
  if(match_cons(t, sym__2))
    {
      j_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
      t = e_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm o_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_20 (ATerm t)
      {
        ATerm n_55 = NULL;
        if(((n_55 != NULL) && (n_55 != t)))
          _fail(t);
        else
          n_55 = t;
        t = not_null(n_55);
        if(match_string(t, "-i"))
          {
            t = not_null(n_55);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm y_20 (ATerm t)
      {
        ATerm o_55 = NULL;
        ATerm p_55 = NULL;
        ATerm f_58 (ATerm t)
        {
          t = not_null(p_55);
          if(((o_55 != NULL) && (o_55 != t)))
            _fail(t);
          else
            o_55 = t;
          t = not_null(p_55);
          return(t);
        }
        if(((p_55 != NULL) && (p_55 != t)))
          _fail(t);
        else
          p_55 = t;
        t = f_58(t);
        t = (ATerm) ATmakeAppl(sym__2, term_q_57, not_null(o_55));
        t = set_config_0_0(t);
        t = term_u_44;
        return(t);
      }
      ATerm h_21 (ATerm t)
      {
        t = term_q_75;
        return(t);
      }
      t = ArgOption_3_0(x_20, y_20, h_21, t);
      ;
      LocalPopChoice(p_75);
    }
  else
    {
      t = o_75;
      {
        ATerm r_75 = t;
        int s_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_21 (ATerm t)
            {
              ATerm q_55 = NULL;
              if(((q_55 != NULL) && (q_55 != t)))
                _fail(t);
              else
                q_55 = t;
              t = not_null(q_55);
              if(match_string(t, "-o"))
                {
                  t = not_null(q_55);
                }
              else
                {
                  if(match_string(t, "--output"))
                    {
                      t = not_null(q_55);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_21 (ATerm t)
            {
              ATerm r_55 = NULL;
              ATerm s_55 = NULL;
              ATerm g_58 (ATerm t)
              {
                t = not_null(s_55);
                if(((r_55 != NULL) && (r_55 != t)))
                  _fail(t);
                else
                  r_55 = t;
                t = not_null(s_55);
                return(t);
              }
              if(((s_55 != NULL) && (s_55 != t)))
                _fail(t);
              else
                s_55 = t;
              t = g_58(t);
              t = (ATerm) ATmakeAppl(sym__2, term_m_33, not_null(r_55));
              t = set_config_0_0(t);
              t = term_u_44;
              return(t);
            }
            ATerm k_21 (ATerm t)
            {
              t = term_t_75;
              return(t);
            }
            t = ArgOption_3_0(i_21, j_21, k_21, t);
            ;
            LocalPopChoice(s_75);
          }
        else
          {
            t = r_75;
            {
              ATerm u_75 = t;
              int v_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_21 (ATerm t)
                  {
                    ATerm t_55 = NULL;
                    if(((t_55 != NULL) && (t_55 != t)))
                      _fail(t);
                    else
                      t_55 = t;
                    t = not_null(t_55);
                    if(match_string(t, "-I"))
                      {
                        t = not_null(t_55);
                      }
                    else
                      {
                        if(match_string(t, "--Include"))
                          {
                            t = not_null(t_55);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_21 (ATerm t)
                  {
                    ATerm u_55 = NULL;
                    ATerm v_55 = NULL;
                    ATerm h_58 (ATerm t)
                    {
                      t = not_null(v_55);
                      if(((u_55 != NULL) && (u_55 != t)))
                        _fail(t);
                      else
                        u_55 = t;
                      t = not_null(v_55);
                      return(t);
                    }
                    if(((v_55 != NULL) && (v_55 != t)))
                      _fail(t);
                    else
                      v_55 = t;
                    t = h_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_j_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_j_59));
                    t = extend_config_0_0(t);
                    t = term_u_44;
                    return(t);
                  }
                  ATerm y_21 (ATerm t)
                  {
                    t = term_w_75;
                    return(t);
                  }
                  t = ArgOption_3_0(l_21, x_21, y_21, t);
                  ;
                  LocalPopChoice(v_75);
                }
              else
                {
                  t = u_75;
                  {
                    ATerm x_75 = t;
                    int y_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_22 (ATerm t)
                        {
                          ATerm w_55 = NULL;
                          if(((w_55 != NULL) && (w_55 != t)))
                            _fail(t);
                          else
                            w_55 = t;
                          t = not_null(w_55);
                          if(match_string(t, "--main"))
                            {
                              t = not_null(w_55);
                            }
                          else
                            {
                              if(match_string(t, "-m"))
                                {
                                  t = not_null(w_55);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm g_22 (ATerm t)
                        {
                          ATerm x_55 = NULL;
                          ATerm y_55 = NULL;
                          ATerm n_58 (ATerm t)
                          {
                            t = not_null(y_55);
                            if(((x_55 != NULL) && (x_55 != t)))
                              _fail(t);
                            else
                              x_55 = t;
                            t = not_null(y_55);
                            return(t);
                          }
                          if(((y_55 != NULL) && (y_55 != t)))
                            _fail(t);
                          else
                            y_55 = t;
                          t = n_58(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_i_45, not_null(x_55));
                          t = set_config_0_0(t);
                          t = term_u_44;
                          return(t);
                        }
                        ATerm n_22 (ATerm t)
                        {
                          t = term_z_75;
                          return(t);
                        }
                        t = ArgOption_3_0(f_22, g_22, n_22, t);
                        ;
                        LocalPopChoice(y_75);
                      }
                    else
                      {
                        t = x_75;
                        {
                          ATerm a_76 = t;
                          int b_76 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_22 (ATerm t)
                              {
                                ATerm z_55 = NULL;
                                if(((z_55 != NULL) && (z_55 != t)))
                                  _fail(t);
                                else
                                  z_55 = t;
                                t = not_null(z_55);
                                if(match_string(t, "--C-include"))
                                  {
                                    t = not_null(z_55);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_22 (ATerm t)
                              {
                                ATerm i_56 = NULL;
                                ATerm j_56 = NULL;
                                ATerm o_58 (ATerm t)
                                {
                                  t = not_null(j_56);
                                  if(((i_56 != NULL) && (i_56 != t)))
                                    _fail(t);
                                  else
                                    i_56 = t;
                                  t = not_null(j_56);
                                  return(t);
                                }
                                if(((j_56 != NULL) && (j_56 != t)))
                                  _fail(t);
                                else
                                  j_56 = t;
                                t = o_58(t);
                                t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATempty, not_null(i_56)));
                                t = post_extend_config_0_0(t);
                                t = term_u_44;
                                return(t);
                              }
                              ATerm q_22 (ATerm t)
                              {
                                t = term_c_76;
                                return(t);
                              }
                              t = ArgOption_3_0(o_22, p_22, q_22, t);
                              ;
                              LocalPopChoice(b_76);
                            }
                          else
                            {
                              t = a_76;
                              {
                                ATerm d_76 = t;
                                int e_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_22 (ATerm t)
                                    {
                                      ATerm l_56 = NULL;
                                      if(((l_56 != NULL) && (l_56 != t)))
                                        _fail(t);
                                      else
                                        l_56 = t;
                                      t = not_null(l_56);
                                      if(match_string(t, "-CI"))
                                        {
                                          t = not_null(l_56);
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_23 (ATerm t)
                                    {
                                      ATerm m_56 = NULL;
                                      ATerm n_56 = NULL;
                                      ATerm p_58 (ATerm t)
                                      {
                                        t = not_null(n_56);
                                        if(((m_56 != NULL) && (m_56 != t)))
                                          _fail(t);
                                        else
                                          m_56 = t;
                                        t = not_null(n_56);
                                        return(t);
                                      }
                                      if(((n_56 != NULL) && (n_56 != t)))
                                        _fail(t);
                                      else
                                        n_56 = t;
                                      t = p_58(t);
                                      t = (ATerm) ATmakeAppl(sym__2, term_c_35, (ATerm) ATinsert(ATempty, not_null(m_56)));
                                      t = extend_config_0_0(t);
                                      t = term_u_44;
                                      return(t);
                                    }
                                    ATerm i_23 (ATerm t)
                                    {
                                      t = term_f_76;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(r_22, h_23, i_23, t);
                                    ;
                                    LocalPopChoice(e_76);
                                  }
                                else
                                  {
                                    t = d_76;
                                    {
                                      ATerm g_76 = t;
                                      int h_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_23 (ATerm t)
                                          {
                                            ATerm o_56 = NULL;
                                            if(((o_56 != NULL) && (o_56 != t)))
                                              _fail(t);
                                            else
                                              o_56 = t;
                                            t = not_null(o_56);
                                            if(match_string(t, "-CL"))
                                              {
                                                t = not_null(o_56);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_23 (ATerm t)
                                          {
                                            ATerm p_56 = NULL;
                                            ATerm q_56 = NULL;
                                            ATerm q_58 (ATerm t)
                                            {
                                              t = not_null(q_56);
                                              if(((p_56 != NULL) && (p_56 != t)))
                                                _fail(t);
                                              else
                                                p_56 = t;
                                              t = not_null(q_56);
                                              return(t);
                                            }
                                            if(((q_56 != NULL) && (q_56 != t)))
                                              _fail(t);
                                            else
                                              q_56 = t;
                                            t = q_58(t);
                                            t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATempty, not_null(p_56)));
                                            t = extend_config_0_0(t);
                                            t = term_u_44;
                                            return(t);
                                          }
                                          ATerm w_23 (ATerm t)
                                          {
                                            t = term_i_76;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(j_23, k_23, w_23, t);
                                          ;
                                          LocalPopChoice(h_76);
                                        }
                                      else
                                        {
                                          t = g_76;
                                          {
                                            ATerm j_76 = t;
                                            int k_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_24 (ATerm t)
                                                {
                                                  ATerm r_56 = NULL;
                                                  if(((r_56 != NULL) && (r_56 != t)))
                                                    _fail(t);
                                                  else
                                                    r_56 = t;
                                                  t = not_null(r_56);
                                                  if(match_string(t, "-c"))
                                                    {
                                                      t = not_null(r_56);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm f_24 (ATerm t)
                                                {
                                                  t = term_l_76;
                                                  t = set_config_0_0(t);
                                                  t = term_u_44;
                                                  return(t);
                                                }
                                                ATerm g_24 (ATerm t)
                                                {
                                                  t = term_m_76;
                                                  return(t);
                                                }
                                                t = Option_3_0(b_24, f_24, g_24, t);
                                                ;
                                                LocalPopChoice(k_76);
                                              }
                                            else
                                              {
                                                t = j_76;
                                                {
                                                  ATerm n_76 = t;
                                                  int o_76 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_24 (ATerm t)
                                                      {
                                                        ATerm s_56 = NULL;
                                                        if(((s_56 != NULL) && (s_56 != t)))
                                                          _fail(t);
                                                        else
                                                          s_56 = t;
                                                        t = not_null(s_56);
                                                        if(match_string(t, "--ast"))
                                                          {
                                                            t = not_null(s_56);
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm i_24 (ATerm t)
                                                      {
                                                        t = term_p_76;
                                                        t = set_config_0_0(t);
                                                        t = term_u_44;
                                                        return(t);
                                                      }
                                                      ATerm j_24 (ATerm t)
                                                      {
                                                        t = term_q_76;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(h_24, i_24, j_24, t);
                                                      ;
                                                      LocalPopChoice(o_76);
                                                    }
                                                  else
                                                    {
                                                      t = n_76;
                                                      {
                                                        ATerm r_76 = t;
                                                        int s_76 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_24 (ATerm t)
                                                            {
                                                              ATerm t_56 = NULL;
                                                              if(((t_56 != NULL) && (t_56 != t)))
                                                                _fail(t);
                                                              else
                                                                t_56 = t;
                                                              t = not_null(t_56);
                                                              if(match_string(t, "-F"))
                                                                {
                                                                  t = not_null(t_56);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm l_24 (ATerm t)
                                                            {
                                                              t = term_t_76;
                                                              t = set_config_0_0(t);
                                                              t = term_u_44;
                                                              return(t);
                                                            }
                                                            ATerm d_25 (ATerm t)
                                                            {
                                                              t = term_u_76;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(k_24, l_24, d_25, t);
                                                            ;
                                                            LocalPopChoice(s_76);
                                                          }
                                                        else
                                                          {
                                                            t = r_76;
                                                            {
                                                              ATerm v_76 = t;
                                                              int w_76 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_25 (ATerm t)
                                                                  {
                                                                    ATerm u_56 = NULL;
                                                                    if(((u_56 != NULL) && (u_56 != t)))
                                                                      _fail(t);
                                                                    else
                                                                      u_56 = t;
                                                                    t = not_null(u_56);
                                                                    if(match_string(t, "--output-optimized"))
                                                                      {
                                                                        t = not_null(u_56);
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm f_25 (ATerm t)
                                                                  {
                                                                    t = term_x_76;
                                                                    t = set_config_0_0(t);
                                                                    t = term_u_44;
                                                                    return(t);
                                                                  }
                                                                  ATerm g_25 (ATerm t)
                                                                  {
                                                                    t = term_y_76;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3_0(e_25, f_25, g_25, t);
                                                                  ;
                                                                  LocalPopChoice(w_76);
                                                                }
                                                              else
                                                                {
                                                                  t = v_76;
                                                                  {
                                                                    ATerm z_76 = t;
                                                                    int a_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_25 (ATerm t)
                                                                        {
                                                                          ATerm v_56 = NULL;
                                                                          if(((v_56 != NULL) && (v_56 != t)))
                                                                            _fail(t);
                                                                          else
                                                                            v_56 = t;
                                                                          t = not_null(v_56);
                                                                          if(match_string(t, "--output-canonical"))
                                                                            {
                                                                              t = not_null(v_56);
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm r_25 (ATerm t)
                                                                        {
                                                                          t = term_b_77;
                                                                          t = set_config_0_0(t);
                                                                          t = term_u_44;
                                                                          return(t);
                                                                        }
                                                                        ATerm s_25 (ATerm t)
                                                                        {
                                                                          t = term_c_77;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3_0(q_25, r_25, s_25, t);
                                                                        ;
                                                                        LocalPopChoice(a_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_76;
                                                                        {
                                                                          ATerm d_77 = t;
                                                                          int e_77 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm t_25 (ATerm t)
                                                                              {
                                                                                ATerm b_57 = NULL;
                                                                                if(((b_57 != NULL) && (b_57 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  b_57 = t;
                                                                                t = not_null(b_57);
                                                                                if(match_string(t, "--keep"))
                                                                                  {
                                                                                    t = not_null(b_57);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm u_25 (ATerm t)
                                                                              {
                                                                                ATerm c_57 = NULL;
                                                                                ATerm d_57 = NULL;
                                                                                ATerm v_58 (ATerm t)
                                                                                {
                                                                                  t = not_null(d_57);
                                                                                  if(((c_57 != NULL) && (c_57 != t)))
                                                                                    _fail(t);
                                                                                  else
                                                                                    c_57 = t;
                                                                                  t = not_null(d_57);
                                                                                  return(t);
                                                                                }
                                                                                t = string_to_int_0_0(t);
                                                                                if(((d_57 != NULL) && (d_57 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  d_57 = t;
                                                                                t = v_58(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, term_m_44, not_null(c_57));
                                                                                t = set_config_0_0(t);
                                                                                t = term_u_44;
                                                                                return(t);
                                                                              }
                                                                              ATerm j_26 (ATerm t)
                                                                              {
                                                                                t = term_f_77;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3_0(t_25, u_25, j_26, t);
                                                                              ;
                                                                              LocalPopChoice(e_77);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_77;
                                                                              {
                                                                                ATerm g_77 = t;
                                                                                int h_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm n_26 (ATerm t)
                                                                                    {
                                                                                      ATerm e_57 = NULL;
                                                                                      if(((e_57 != NULL) && (e_57 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        e_57 = t;
                                                                                      t = not_null(e_57);
                                                                                      if(match_string(t, "--fusion"))
                                                                                        {
                                                                                          t = not_null(e_57);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm o_26 (ATerm t)
                                                                                    {
                                                                                      t = term_i_77;
                                                                                      t = toggle_config_0_0(t);
                                                                                      t = term_u_44;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm s_26 (ATerm t)
                                                                                    {
                                                                                      t = term_j_77;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(n_26, o_26, s_26, t);
                                                                                    ;
                                                                                    LocalPopChoice(h_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_77;
                                                                                    {
                                                                                      ATerm k_77 = t;
                                                                                      int l_77 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm t_26 (ATerm t)
                                                                                          {
                                                                                            ATerm f_57 = NULL;
                                                                                            if(((f_57 != NULL) && (f_57 != t)))
                                                                                              _fail(t);
                                                                                            else
                                                                                              f_57 = t;
                                                                                            t = not_null(f_57);
                                                                                            if(match_string(t, "--trace-all"))
                                                                                              {
                                                                                                t = not_null(f_57);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm u_26 (ATerm t)
                                                                                          {
                                                                                            t = term_n_77;
                                                                                            t = set_config_0_0(t);
                                                                                            t = term_u_44;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm v_26 (ATerm t)
                                                                                          {
                                                                                            t = term_o_77;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3_0(t_26, u_26, v_26, t);
                                                                                          ;
                                                                                          LocalPopChoice(l_77);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_77;
                                                                                          {
                                                                                            ATerm p_77 = t;
                                                                                            int q_77 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm g_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm g_57 = NULL;
                                                                                                  if(((g_57 != NULL) && (g_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    g_57 = t;
                                                                                                  t = not_null(g_57);
                                                                                                  if(match_string(t, "-t"))
                                                                                                    {
                                                                                                      t = not_null(g_57);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm h_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm h_57 = NULL;
                                                                                                  ATerm i_57 = NULL;
                                                                                                  ATerm w_58 (ATerm t)
                                                                                                  {
                                                                                                    t = not_null(i_57);
                                                                                                    if(((h_57 != NULL) && (h_57 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      h_57 = t;
                                                                                                    t = not_null(i_57);
                                                                                                    return(t);
                                                                                                  }
                                                                                                  if(((i_57 != NULL) && (i_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    i_57 = t;
                                                                                                  t = w_58(t);
                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_r_77, (ATerm) ATinsert(ATempty, not_null(h_57)));
                                                                                                  t = extend_config_0_0(t);
                                                                                                  t = term_u_44;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm i_27 (ATerm t)
                                                                                                {
                                                                                                  t = term_s_77;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(g_27, h_27, i_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(q_77);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_77;
                                                                                                {
                                                                                                  ATerm t_77 = t;
                                                                                                  int u_77 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm j_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm s_57 = NULL;
                                                                                                        if(((s_57 != NULL) && (s_57 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          s_57 = t;
                                                                                                        t = not_null(s_57);
                                                                                                        if(match_string(t, "--verbose"))
                                                                                                          {
                                                                                                            t = not_null(s_57);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm t_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm t_57 = NULL;
                                                                                                        ATerm u_57 = NULL;
                                                                                                        ATerm x_58 (ATerm t)
                                                                                                        {
                                                                                                          t = not_null(u_57);
                                                                                                          if(((t_57 != NULL) && (t_57 != t)))
                                                                                                            _fail(t);
                                                                                                          else
                                                                                                            t_57 = t;
                                                                                                          t = not_null(u_57);
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = string_to_int_0_0(t);
                                                                                                        if(((u_57 != NULL) && (u_57 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          u_57 = t;
                                                                                                        t = x_58(t);
                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_i_33, not_null(t_57));
                                                                                                        t = set_config_0_0(t);
                                                                                                        t = term_u_44;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm u_27 (ATerm t)
                                                                                                      {
                                                                                                        t = term_v_77;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3_0(j_27, t_27, u_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_77);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_77;
                                                                                                      {
                                                                                                        ATerm w_77 = t;
                                                                                                        int x_77 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm v_27 (ATerm t)
                                                                                                            {
                                                                                                              ATerm v_57 = NULL;
                                                                                                              if(((v_57 != NULL) && (v_57 != t)))
                                                                                                                _fail(t);
                                                                                                              else
                                                                                                                v_57 = t;
                                                                                                              t = not_null(v_57);
                                                                                                              if(match_string(t, "-S"))
                                                                                                                {
                                                                                                                  t = not_null(v_57);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "--silent"))
                                                                                                                    {
                                                                                                                      t = not_null(v_57);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm w_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_77;
                                                                                                              t = set_config_0_0(t);
                                                                                                              t = term_u_44;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm y_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_z_77;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(v_27, w_27, y_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(x_77);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = w_77;
                                                                                                            {
                                                                                                              ATerm a_78 = t;
                                                                                                              int b_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm z_27 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm w_57 = NULL;
                                                                                                                    if(((w_57 != NULL) && (w_57 != t)))
                                                                                                                      _fail(t);
                                                                                                                    else
                                                                                                                      w_57 = t;
                                                                                                                    t = not_null(w_57);
                                                                                                                    if(match_string(t, "-h"))
                                                                                                                      {
                                                                                                                        t = not_null(w_57);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_string(t, "--help"))
                                                                                                                          {
                                                                                                                            t = not_null(w_57);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm a_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_d_78;
                                                                                                                    t = set_config_0_0(t);
                                                                                                                    t = term_u_44;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm b_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_e_78;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(z_27, a_28, b_28, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(b_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_78;
                                                                                                                  {
                                                                                                                    ATerm f_78 = t;
                                                                                                                    int g_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm c_28 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm x_57 = NULL;
                                                                                                                          if(((x_57 != NULL) && (x_57 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            x_57 = t;
                                                                                                                          t = not_null(x_57);
                                                                                                                          if(match_string(t, "--man"))
                                                                                                                            {
                                                                                                                              t = not_null(x_57);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm d_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_i_78;
                                                                                                                          t = set_config_0_0(t);
                                                                                                                          t = term_u_44;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm e_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_j_78;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(c_28, d_28, e_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(g_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = f_78;
                                                                                                                        {
                                                                                                                          ATerm k_78 = t;
                                                                                                                          int l_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm f_28 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm y_57 = NULL;
                                                                                                                                if(((y_57 != NULL) && (y_57 != t)))
                                                                                                                                  _fail(t);
                                                                                                                                else
                                                                                                                                  y_57 = t;
                                                                                                                                t = not_null(y_57);
                                                                                                                                if(match_string(t, "-v"))
                                                                                                                                  {
                                                                                                                                    t = not_null(y_57);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_string(t, "--version"))
                                                                                                                                      {
                                                                                                                                        t = not_null(y_57);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        _fail(t);
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm g_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_n_78;
                                                                                                                                t = set_config_0_0(t);
                                                                                                                                t = term_u_44;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm h_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_o_78;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3_0(f_28, g_28, h_28, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_78;
                                                                                                                              {
                                                                                                                                ATerm i_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm z_57 = NULL;
                                                                                                                                  if(((z_57 != NULL) && (z_57 != t)))
                                                                                                                                    _fail(t);
                                                                                                                                  else
                                                                                                                                    z_57 = t;
                                                                                                                                  t = not_null(z_57);
                                                                                                                                  if(match_string(t, "--warning"))
                                                                                                                                    {
                                                                                                                                      t = not_null(z_57);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "-W"))
                                                                                                                                        {
                                                                                                                                          t = not_null(z_57);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          _fail(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm j_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm p_78 = t;
                                                                                                                                  int q_78 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      ATerm b_58 = NULL;
                                                                                                                                      ATerm r_78;
                                                                                                                                      r_78 = t;
                                                                                                                                      t = term_c_43;
                                                                                                                                      t = get_config_0_0(t);
                                                                                                                                      {
                                                                                                                                        ATerm m_28 (ATerm t)
                                                                                                                                        {
                                                                                                                                          ATerm a_58 = NULL;
                                                                                                                                          if(((a_58 != NULL) && (a_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            a_58 = t;
                                                                                                                                          t = not_null(a_58);
                                                                                                                                          if(match_string(t, "all"))
                                                                                                                                            {
                                                                                                                                              t = not_null(a_58);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              _fail(t);
                                                                                                                                            }
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        t = Cons_2_0(m_28, Nil_0_0, t);
                                                                                                                                      }
                                                                                                                                      t = r_78;
                                                                                                                                      {
                                                                                                                                        ATerm c_58 = NULL;
                                                                                                                                        ATerm h_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(c_58);
                                                                                                                                          if(((b_58 != NULL) && (b_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            b_58 = t;
                                                                                                                                          t = not_null(c_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((c_58 != NULL) && (c_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          c_58 = t;
                                                                                                                                        t = h_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_c_43, (ATerm) ATinsert(ATempty, not_null(b_58)));
                                                                                                                                        t = set_config_0_0(t);
                                                                                                                                      }
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(q_78);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = p_78;
                                                                                                                                      {
                                                                                                                                        ATerm d_58 = NULL;
                                                                                                                                        ATerm e_58 = NULL;
                                                                                                                                        ATerm i_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(e_58);
                                                                                                                                          if(((d_58 != NULL) && (d_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            d_58 = t;
                                                                                                                                          t = not_null(e_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((e_58 != NULL) && (e_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          e_58 = t;
                                                                                                                                        t = i_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_c_43, (ATerm) ATinsert(ATempty, not_null(d_58)));
                                                                                                                                        t = extend_config_0_0(t);
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  t = term_u_44;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm k_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_s_78;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = ArgOption_3_0(i_28, j_28, k_28, t);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_59 = NULL;
  ATerm m_59 (ATerm t)
  {
    ATerm l_59 = NULL;
    t = not_null(k_59);
    if(((l_59 != NULL) && (l_59 != t)))
      _fail(t);
    else
      l_59 = t;
    t = not_null(k_59);
    t = SSL_table_destroy(not_null(l_59));
    return(t);
  }
  if(((k_59 != NULL) && (k_59 != t)))
    _fail(t);
  else
    k_59 = t;
  t = m_59(t);
  return(t);
}
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_79), term_u_63), term_e_79), term_d_79), term_c_79), term_u_63), term_b_79), term_a_79), term_z_78), term_y_78), term_x_78), term_w_78), term_v_78), term_u_78), term_t_78);
  return(t);
}
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm n_59 (ATerm t)
  {
    ATerm j_79 = t;
    int k_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(k_79);
      }
    else
      {
        t = j_79;
        t = Cons_2_0(t_86, n_59, t);
      }
    return(t);
  }
  t = n_59(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
  ATerm f_60 (ATerm t)
  {
    ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
    t = not_null(u_59);
    if(((x_59 != NULL) && (x_59 != t)))
      _fail(t);
    else
      x_59 = t;
    t = not_null(v_59);
    if(((y_59 != NULL) && (y_59 != t)))
      _fail(t);
    else
      y_59 = t;
    t = not_null(y_59);
    {
      ATerm l_79;
      l_79 = t;
      {
        ATerm a_60 = NULL,c_60 = NULL,e_60 = NULL;
        ATerm j_60 (ATerm t)
        {
          t = not_null(e_60);
          if(((z_59 != NULL) && (z_59 != t)))
            _fail(t);
          else
            z_59 = t;
          t = not_null(e_60);
          return(t);
        }
        ATerm m_79;
        m_79 = t;
        {
          ATerm b_60 = NULL;
          ATerm h_60 (ATerm t)
          {
            t = not_null(b_60);
            if(((a_60 != NULL) && (a_60 != t)))
              _fail(t);
            else
              a_60 = t;
            t = not_null(b_60);
            return(t);
          }
          t = h_0(t);
          if(((b_60 != NULL) && (b_60 != t)))
            _fail(t);
          else
            b_60 = t;
          t = h_60(t);
        }
        t = m_79;
        {
          ATerm d_60 = NULL;
          ATerm i_60 (ATerm t)
          {
            t = not_null(d_60);
            if(((c_60 != NULL) && (c_60 != t)))
              _fail(t);
            else
              c_60 = t;
            t = not_null(d_60);
            return(t);
          }
          t = not_null(x_59);
          t = g_0(t);
          if(((d_60 != NULL) && (d_60 != t)))
            _fail(t);
          else
            d_60 = t;
          t = i_60(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(a_60)), not_null(c_60));
          if(((e_60 != NULL) && (e_60 != t)))
            _fail(t);
          else
            e_60 = t;
          t = j_60(t);
        }
      }
      t = l_79;
      {
        ATerm o_28 (ATerm t)
        {
          t = not_null(z_59);
          return(t);
        }
        t = reverse_acc_2_0(g_0, o_28, t);
      }
    }
    return(t);
  }
  ATerm g_60 (ATerm t)
  {
    t = term_u_44;
    t = h_0(t);
    return(t);
  }
  if(((w_59 != NULL) && (w_59 != t)))
    _fail(t);
  else
    w_59 = t;
  t = not_null(w_59);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_59 = ATgetFirst((ATermList) t);
      v_59 = (ATerm) ATgetNext((ATermList) t);
      t = f_60(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = g_60(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm s_28 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, s_28, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm l_60 = NULL;
  ATerm m_60 = NULL;
  ATerm n_60 (ATerm t)
  {
    t = not_null(m_60);
    if(((l_60 != NULL) && (l_60 != t)))
      _fail(t);
    else
      l_60 = t;
    t = not_null(m_60);
    return(t);
  }
  t = term_u_44;
  t = f_0(t);
  if(((m_60 != NULL) && (m_60 != t)))
    _fail(t);
  else
    m_60 = t;
  t = n_60(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_79), not_null(l_60)), term_r_79), term_u_63), term_q_79), term_u_63), term_p_79), term_o_79), term_u_63), term_n_79);
  return(t);
}
ATerm Program_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  ATerm d_61 (ATerm t)
  {
    ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,z_60 = NULL;
    ATerm f_61 (ATerm t)
    {
      ATerm a_61 = NULL,b_61 = NULL;
      t = not_null(z_60);
      if(((a_61 != NULL) && (a_61 != t)))
        _fail(t);
      else
        a_61 = t;
      t = not_null(z_60);
      {
        ATerm c_61 = NULL;
        ATerm g_61 (ATerm t)
        {
          t = not_null(c_61);
          if(((b_61 != NULL) && (b_61 != t)))
            _fail(t);
          else
            b_61 = t;
          t = not_null(c_61);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_61)), not_null(x_60));
        if(((c_61 != NULL) && (c_61 != t)))
          _fail(t);
        else
          c_61 = t;
        t = g_61(t);
        t = not_null(b_61);
      }
      return(t);
    }
    t = not_null(t_60);
    if(((v_60 != NULL) && (v_60 != t)))
      _fail(t);
    else
      v_60 = t;
    t = not_null(u_60);
    if(((w_60 != NULL) && (w_60 != t)))
      _fail(t);
    else
      w_60 = t;
    t = not_null(t_60);
    {
      ATerm y_60 = NULL;
      ATerm e_61 (ATerm t)
      {
        t = not_null(y_60);
        if(((x_60 != NULL) && (x_60 != t)))
          _fail(t);
        else
          x_60 = t;
        t = not_null(y_60);
        return(t);
      }
      t = SSLgetAnnotations(not_null(v_60));
      if(((y_60 != NULL) && (y_60 != t)))
        _fail(t);
      else
        y_60 = t;
      t = e_61(t);
      t = not_null(w_60);
      t = c_71(t);
      if(((z_60 != NULL) && (z_60 != t)))
        _fail(t);
      else
        z_60 = t;
      t = f_61(t);
    }
    return(t);
  }
  if(((t_60 != NULL) && (t_60 != t)))
    _fail(t);
  else
    t_60 = t;
  t = not_null(t_60);
  if(match_cons(t, sym_Program_1))
    {
      u_60 = ATgetArgument(t, 0);
      t = d_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_61 = NULL;
  ATerm t_79 = t;
  int u_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL;
      ATerm s_61 (ATerm t)
      {
        t = not_null(m_61);
        if(((l_61 != NULL) && (l_61 != t)))
          _fail(t);
        else
          l_61 = t;
        t = not_null(m_61);
        return(t);
      }
      t = term_v_79;
      t = get_config_0_0(t);
      if(((m_61 != NULL) && (m_61 != t)))
        _fail(t);
      else
        m_61 = t;
      t = s_61(t);
      ;
      LocalPopChoice(u_79);
    }
  else
    {
      t = t_79;
      {
        ATerm t_28 (ATerm t)
        {
          ATerm z_28 (ATerm t)
          {
            ATerm n_61 = NULL;
            ATerm t_61 (ATerm t)
            {
              t = not_null(n_61);
              if(((l_61 != NULL) && (l_61 != t)))
                _fail(t);
              else
                l_61 = t;
              t = not_null(n_61);
              return(t);
            }
            if(((n_61 != NULL) && (n_61 != t)))
              _fail(t);
            else
              n_61 = t;
            t = t_61(t);
            return(t);
          }
          t = Program_1_0(z_28, t);
          return(t);
        }
        t = option_defined_1_0(t_28, t);
      }
    }
  {
    ATerm a_29 (ATerm t)
    {
      ATerm b_29 (ATerm t)
      {
        t = not_null(l_61);
        return(t);
      }
      t = short_description_1_0(b_29, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(a_29, t);
    t = term_w_79;
    t = echo_0_0(t);
    t = term_b_80;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm l_29 (ATerm t)
      {
        ATerm o_61 = NULL;
        ATerm p_61 = NULL;
        ATerm u_61 (ATerm t)
        {
          t = not_null(p_61);
          if(((o_61 != NULL) && (o_61 != t)))
            _fail(t);
          else
            o_61 = t;
          t = not_null(p_61);
          return(t);
        }
        if(((p_61 != NULL) && (p_61 != t)))
          _fail(t);
        else
          p_61 = t;
        t = u_61(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_c_80);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(l_29, t);
      {
        ATerm m_29 (ATerm t)
        {
          ATerm q_61 = NULL;
          ATerm r_61 = NULL;
          ATerm v_61 (ATerm t)
          {
            t = not_null(r_61);
            if(((q_61 != NULL) && (q_61 != t)))
              _fail(t);
            else
              q_61 = t;
            t = not_null(r_61);
            return(t);
          }
          ATerm n_29 (ATerm t)
          {
            t = not_null(l_61);
            return(t);
          }
          t = long_description_1_0(n_29, t);
          if(((r_61 != NULL) && (r_61 != t)))
            _fail(t);
          else
            r_61 = t;
          t = v_61(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(q_61)), term_u_63);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(m_29, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm d_80 = t;
  int f_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(f_80);
    }
  else
    {
      t = d_80;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,d_62 = NULL;
  ATerm a_63 (ATerm t)
  {
    ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,i_62 = NULL;
    ATerm j_63 (ATerm t)
    {
      ATerm x_62 = NULL,y_62 = NULL;
      t = not_null(i_62);
      if(((x_62 != NULL) && (x_62 != t)))
        _fail(t);
      else
        x_62 = t;
      t = not_null(i_62);
      {
        ATerm z_62 = NULL;
        ATerm k_63 (ATerm t)
        {
          t = not_null(z_62);
          if(((y_62 != NULL) && (y_62 != t)))
            _fail(t);
          else
            y_62 = t;
          t = not_null(z_62);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_62)), not_null(g_62));
        if(((z_62 != NULL) && (z_62 != t)))
          _fail(t);
        else
          z_62 = t;
        t = k_63(t);
        t = not_null(y_62);
      }
      return(t);
    }
    t = not_null(b_62);
    if(((e_62 != NULL) && (e_62 != t)))
      _fail(t);
    else
      e_62 = t;
    t = not_null(d_62);
    if(((f_62 != NULL) && (f_62 != t)))
      _fail(t);
    else
      f_62 = t;
    t = not_null(b_62);
    {
      ATerm h_62 = NULL;
      ATerm c_63 (ATerm t)
      {
        t = not_null(h_62);
        if(((g_62 != NULL) && (g_62 != t)))
          _fail(t);
        else
          g_62 = t;
        t = not_null(h_62);
        return(t);
      }
      t = SSLgetAnnotations(not_null(e_62));
      if(((h_62 != NULL) && (h_62 != t)))
        _fail(t);
      else
        h_62 = t;
      t = c_63(t);
      t = not_null(f_62);
      t = d_71(t);
      if(((i_62 != NULL) && (i_62 != t)))
        _fail(t);
      else
        i_62 = t;
      t = j_63(t);
    }
    return(t);
  }
  if(((b_62 != NULL) && (b_62 != t)))
    _fail(t);
  else
    b_62 = t;
  t = not_null(b_62);
  if(match_cons(t, sym_Undefined_1))
    {
      d_62 = ATgetArgument(t, 0);
      t = a_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm l_63 (ATerm t)
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_87, _id, t);
        ;
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        t = Cons_2_0(_id, l_63, t);
      }
    return(t);
  }
  t = l_63(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  t = fetch_1_0(f_104, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  if(((w_63 != NULL) && (w_63 != t)))
    _fail(t);
  else
    w_63 = t;
  t = not_null(w_63);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(w_63);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_63 = ATgetFirst((ATermList) t);
          y_63 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(w_63);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_80;
  i_80 = t;
  {
    ATerm b_64 = NULL;
    ATerm g_64 = NULL;
    ATerm i_64 (ATerm t)
    {
      t = not_null(g_64);
      if(((b_64 != NULL) && (b_64 != t)))
        _fail(t);
      else
        b_64 = t;
      t = not_null(g_64);
      return(t);
    }
    ATerm j_80 = t;
    int k_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(k_80);
      }
    else
      {
        t = j_80;
        {
          ATerm e_64 = NULL;
          ATerm f_64 = NULL;
          ATerm h_64 (ATerm t)
          {
            t = not_null(f_64);
            if(((e_64 != NULL) && (e_64 != t)))
              _fail(t);
            else
              e_64 = t;
            t = not_null(f_64);
            return(t);
          }
          if(((f_64 != NULL) && (f_64 != t)))
            _fail(t);
          else
            f_64 = t;
          t = h_64(t);
          t = (ATerm) ATinsert(ATempty, not_null(e_64));
        }
      }
    if(((g_64 != NULL) && (g_64 != t)))
      _fail(t);
    else
      g_64 = t;
    t = i_64(t);
    t = (ATerm) ATmakeAppl(sym__2, term_y_35, not_null(b_64));
    t = printnl_0_0(t);
  }
  t = i_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_79;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm l_80 = t;
  int m_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(m_80);
    }
  else
    {
      t = l_80;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm n_64 = NULL;
  ATerm t_64 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL,r_64 = NULL;
    t = not_null(n_64);
    if(((o_64 != NULL) && (o_64 != t)))
      _fail(t);
    else
      o_64 = t;
    t = not_null(n_64);
    {
      ATerm n_80;
      n_80 = t;
      {
        ATerm q_64 = NULL;
        ATerm u_64 (ATerm t)
        {
          t = not_null(q_64);
          if(((p_64 != NULL) && (p_64 != t)))
            _fail(t);
          else
            p_64 = t;
          t = not_null(q_64);
          return(t);
        }
        t = SSLgetAnnotations(not_null(o_64));
        if(((q_64 != NULL) && (q_64 != t)))
          _fail(t);
        else
          q_64 = t;
        t = u_64(t);
      }
      t = n_80;
      {
        ATerm s_64 = NULL;
        ATerm v_64 (ATerm t)
        {
          t = not_null(s_64);
          if(((r_64 != NULL) && (r_64 != t)))
            _fail(t);
          else
            r_64 = t;
          t = not_null(s_64);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_64));
        if(((s_64 != NULL) && (s_64 != t)))
          _fail(t);
        else
          s_64 = t;
        t = v_64(t);
        t = not_null(r_64);
      }
    }
    return(t);
  }
  if(((n_64 != NULL) && (n_64 != t)))
    _fail(t);
  else
    n_64 = t;
  t = not_null(n_64);
  if(match_cons(t, sym_Help_0))
    {
      t = t_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_80 = t;
  int p_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 (ATerm t)
      {
        ATerm y_64 = NULL;
        if(((y_64 != NULL) && (y_64 != t)))
          _fail(t);
        else
          y_64 = t;
        t = not_null(y_64);
        if(match_string(t, "--about"))
          {
            t = not_null(y_64);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm w_29 (ATerm t)
      {
        t = term_r_80;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm x_29 (ATerm t)
      {
        t = term_s_80;
        return(t);
      }
      t = Option_3_0(o_29, w_29, x_29, t);
      ;
      LocalPopChoice(p_80);
    }
  else
    {
      t = o_80;
      {
        ATerm y_29 (ATerm t)
        {
          ATerm z_64 = NULL;
          if(((z_64 != NULL) && (z_64 != t)))
            _fail(t);
          else
            z_64 = t;
          t = not_null(z_64);
          if(match_string(t, "--version"))
            {
              t = not_null(z_64);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_29 (ATerm t)
        {
          t = term_r_80;
          t = set_config_0_0(t);
          t = term_n_78;
          t = set_config_0_0(t);
          t = term_t_80;
          return(t);
        }
        ATerm a_30 (ATerm t)
        {
          t = term_u_80;
          return(t);
        }
        t = Option_3_0(y_29, z_29, a_30, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  ATerm h_65 (ATerm t)
  {
    ATerm f_65 = NULL,g_65 = NULL;
    t = not_null(d_65);
    if(((f_65 != NULL) && (f_65 != t)))
      _fail(t);
    else
      f_65 = t;
    t = not_null(e_65);
    if(((g_65 != NULL) && (g_65 != t)))
      _fail(t);
    else
      g_65 = t;
    t = not_null(c_65);
    t = SSL_table_get(not_null(f_65), not_null(g_65));
    return(t);
  }
  if(((c_65 != NULL) && (c_65 != t)))
    _fail(t);
  else
    c_65 = t;
  t = not_null(c_65);
  if(match_cons(t, sym__2))
    {
      d_65 = ATgetArgument(t, 0);
      e_65 = ATgetArgument(t, 1);
      t = h_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
  ATerm w_65 (ATerm t)
  {
    ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
    t = not_null(o_65);
    if(((s_65 != NULL) && (s_65 != t)))
      _fail(t);
    else
      s_65 = t;
    t = not_null(p_65);
    if(((t_65 != NULL) && (t_65 != t)))
      _fail(t);
    else
      t_65 = t;
    t = not_null(q_65);
    if(((r_65 != NULL) && (r_65 != t)))
      _fail(t);
    else
      r_65 = t;
    t = not_null(n_65);
    {
      ATerm v_80;
      v_80 = t;
      {
        ATerm u_65 = NULL;
        ATerm v_65 = NULL;
        ATerm x_65 (ATerm t)
        {
          t = not_null(v_65);
          if(((u_65 != NULL) && (u_65 != t)))
            _fail(t);
          else
            u_65 = t;
          t = not_null(v_65);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_65), not_null(t_65));
        {
          ATerm w_80 = t;
          int x_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(x_80);
            }
          else
            {
              t = w_80;
              t = (ATerm) ATempty;
            }
          if(((v_65 != NULL) && (v_65 != t)))
            _fail(t);
          else
            v_65 = t;
          t = x_65(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_65), not_null(t_65), (ATerm) ATinsert(CheckATermList(not_null(u_65)), not_null(r_65)));
        t = table_put_0_0(t);
      }
      t = v_80;
    }
    return(t);
  }
  if(((n_65 != NULL) && (n_65 != t)))
    _fail(t);
  else
    n_65 = t;
  t = not_null(n_65);
  if(match_cons(t, sym__3))
    {
      o_65 = ATgetArgument(t, 0);
      p_65 = ATgetArgument(t, 1);
      q_65 = ATgetArgument(t, 2);
      t = w_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm z_65 = NULL;
  ATerm a_66 = NULL;
  ATerm b_66 (ATerm t)
  {
    t = not_null(a_66);
    if(((z_65 != NULL) && (z_65 != t)))
      _fail(t);
    else
      z_65 = t;
    t = not_null(a_66);
    return(t);
  }
  t = term_u_44;
  t = k_105(t);
  if(((a_66 != NULL) && (a_66 != t)))
    _fail(t);
  else
    a_66 = t;
  t = b_66(t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_79, term_a_80, not_null(z_65));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
  ATerm n_66 (ATerm t)
  {
    t = not_null(g_66);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm o_66 (ATerm t)
  {
    ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
    t = not_null(h_66);
    if(((j_66 != NULL) && (j_66 != t)))
      _fail(t);
    else
      j_66 = t;
    t = not_null(i_66);
    if(((k_66 != NULL) && (k_66 != t)))
      _fail(t);
    else
      k_66 = t;
    t = not_null(g_66);
    {
      ATerm y_80;
      y_80 = t;
      t = not_null(j_66);
      t = a_0(t);
      t = y_80;
      {
        ATerm m_66 = NULL;
        ATerm p_66 (ATerm t)
        {
          t = not_null(m_66);
          if(((l_66 != NULL) && (l_66 != t)))
            _fail(t);
          else
            l_66 = t;
          t = not_null(m_66);
          return(t);
        }
        t = term_u_44;
        t = b_0(t);
        if(((m_66 != NULL) && (m_66 != t)))
          _fail(t);
        else
          m_66 = t;
        t = p_66(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(k_66)), not_null(l_66));
      }
    }
    return(t);
  }
  if(((g_66 != NULL) && (g_66 != t)))
    _fail(t);
  else
    g_66 = t;
  t = not_null(g_66);
  if(match_string(t, "register-usage-info"))
    {
      t = n_66(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_66 = ATgetFirst((ATermList) t);
          i_66 = (ATerm) ATgetNext((ATermList) t);
          t = o_66(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_30 (ATerm t)
  {
    ATerm r_66 = NULL;
    if(((r_66 != NULL) && (r_66 != t)))
      _fail(t);
    else
      r_66 = t;
    t = not_null(r_66);
    if(match_string(t, "--help"))
      {
        t = not_null(r_66);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(r_66);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(r_66);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_30 (ATerm t)
  {
    t = term_d_78;
    t = set_config_0_0(t);
    t = term_z_80;
    return(t);
  }
  ATerm l_30 (ATerm t)
  {
    t = term_a_81;
    return(t);
  }
  t = Option_3_0(g_30, h_30, l_30, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  ATerm z_66 (ATerm t)
  {
    ATerm x_66 = NULL,y_66 = NULL;
    t = not_null(v_66);
    if(((x_66 != NULL) && (x_66 != t)))
      _fail(t);
    else
      x_66 = t;
    t = not_null(w_66);
    if(((y_66 != NULL) && (y_66 != t)))
      _fail(t);
    else
      y_66 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_66)));
    return(t);
  }
  if(((u_66 != NULL) && (u_66 != t)))
    _fail(t);
  else
    u_66 = t;
  t = not_null(u_66);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_66 = ATgetFirst((ATermList) t);
      w_66 = (ATerm) ATgetNext((ATermList) t);
      t = z_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm b_81;
  b_81 = t;
  {
    ATerm m_30 (ATerm t)
    {
      t = term_c_81;
      t = i_105(t);
      return(t);
    }
    t = try_1_0(m_30, t);
  }
  t = b_81;
  {
    ATerm p_30 (ATerm t)
    {
      ATerm e_67 = NULL;
      ATerm d_81;
      d_81 = t;
      {
        ATerm c_67 = NULL;
        ATerm d_67 = NULL;
        ATerm g_67 (ATerm t)
        {
          t = not_null(d_67);
          if(((c_67 != NULL) && (c_67 != t)))
            _fail(t);
          else
            c_67 = t;
          t = not_null(d_67);
          return(t);
        }
        if(((d_67 != NULL) && (d_67 != t)))
          _fail(t);
        else
          d_67 = t;
        t = g_67(t);
        t = (ATerm) ATmakeAppl(sym__2, term_v_79, not_null(c_67));
        t = set_config_0_0(t);
      }
      t = d_81;
      {
        ATerm f_67 = NULL;
        ATerm h_67 (ATerm t)
        {
          t = not_null(f_67);
          if(((e_67 != NULL) && (e_67 != t)))
            _fail(t);
          else
            e_67 = t;
          t = not_null(f_67);
          return(t);
        }
        if(((f_67 != NULL) && (f_67 != t)))
          _fail(t);
        else
          f_67 = t;
        t = h_67(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_67));
      }
      return(t);
    }
    ATerm q_30 (ATerm t)
    {
      ATerm e_81 = t;
      int f_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_81 = t;
          int h_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(h_81);
            }
          else
            {
              t = g_81;
              t = i_105(t);
              t = Cons_2_0(_id, q_30, t);
            }
          ;
          LocalPopChoice(f_81);
        }
      else
        {
          t = e_81;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(p_30, q_30, t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm k_67 = NULL;
  ATerm i_81;
  i_81 = t;
  t = term_j_81;
  t = table_put_0_0(t);
  t = i_81;
  {
    ATerm r_30 (ATerm t)
    {
      ATerm k_81 = t;
      int l_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          ;
          LocalPopChoice(l_81);
        }
      else
        {
          t = k_81;
          {
            ATerm m_81 = t;
            int n_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_81);
              }
            else
              {
                t = m_81;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_30, t);
    {
      ATerm t_30 (ATerm t)
      {
        ATerm o_81 = t;
        int p_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_81;
            q_81 = t;
            {
              ATerm r_81 = t;
              int s_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_78;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(s_81);
                }
              else
                {
                  t = r_81;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = q_81;
            t = system_usage_0_0(t);
            t = term_g_33;
            t = exit_0_0(t);
            ;
            LocalPopChoice(p_81);
          }
        else
          {
            t = o_81;
            {
              ATerm t_81 = t;
              int u_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_81;
                  v_81 = t;
                  t = term_q_80;
                  t = get_config_0_0(t);
                  t = v_81;
                  t = system_about_0_0(t);
                  t = term_g_33;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(u_81);
                }
              else
                {
                  t = t_81;
                  {
                    ATerm x_30 (ATerm t)
                    {
                      ATerm y_30 (ATerm t)
                      {
                        ATerm l_67 = NULL;
                        ATerm m_67 (ATerm t)
                        {
                          t = not_null(l_67);
                          if(((k_67 != NULL) && (k_67 != t)))
                            _fail(t);
                          else
                            k_67 = t;
                          t = not_null(l_67);
                          return(t);
                        }
                        if(((l_67 != NULL) && (l_67 != t)))
                          _fail(t);
                        else
                          l_67 = t;
                        t = m_67(t);
                        return(t);
                      }
                      t = Undefined_1_0(y_30, t);
                      return(t);
                    }
                    t = option_defined_1_0(x_30, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_67)), term_w_81));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_o_47;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(t_30, t);
      {
        ATerm x_81;
        x_81 = t;
        t = term_z_79;
        t = table_destroy_0_0(t);
        t = x_81;
      }
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  ATerm y_81;
  y_81 = t;
  {
    ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
    ATerm w_67 (ATerm t)
    {
      t = not_null(t_67);
      if(((p_67 != NULL) && (p_67 != t)))
        _fail(t);
      else
        p_67 = t;
      t = not_null(u_67);
      if(((q_67 != NULL) && (q_67 != t)))
        _fail(t);
      else
        q_67 = t;
      t = not_null(v_67);
      if(((r_67 != NULL) && (r_67 != t)))
        _fail(t);
      else
        r_67 = t;
      t = not_null(s_67);
      t = SSL_table_put(not_null(p_67), not_null(q_67), not_null(r_67));
      return(t);
    }
    if(((s_67 != NULL) && (s_67 != t)))
      _fail(t);
    else
      s_67 = t;
    t = not_null(s_67);
    if(match_cons(t, sym__3))
      {
        t_67 = ATgetArgument(t, 0);
        u_67 = ATgetArgument(t, 1);
        v_67 = ATgetArgument(t, 2);
        t = w_67(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = y_81;
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  ATerm e_68 (ATerm t)
  {
    ATerm c_68 = NULL,d_68 = NULL;
    t = not_null(a_68);
    if(((c_68 != NULL) && (c_68 != t)))
      _fail(t);
    else
      c_68 = t;
    t = not_null(b_68);
    if(((d_68 != NULL) && (d_68 != t)))
      _fail(t);
    else
      d_68 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_h_63, not_null(c_68), not_null(d_68));
    t = table_put_0_0(t);
    return(t);
  }
  if(((z_67 != NULL) && (z_67 != t)))
    _fail(t);
  else
    z_67 = t;
  t = not_null(z_67);
  if(match_cons(t, sym__2))
    {
      a_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
      t = e_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_81 = t;
  int a_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_82);
    }
  else
    {
      t = z_81;
      {
        ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
        ATerm n_68 (ATerm t)
        {
          ATerm k_68 = NULL,l_68 = NULL;
          t = not_null(i_68);
          if(((k_68 != NULL) && (k_68 != t)))
            _fail(t);
          else
            k_68 = t;
          t = not_null(j_68);
          if(((l_68 != NULL) && (l_68 != t)))
            _fail(t);
          else
            l_68 = t;
          t = not_null(k_68);
          {
            ATerm f_31 (ATerm t)
            {
              t = not_null(l_68);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(f_31, t);
          }
          return(t);
        }
        if(((h_68 != NULL) && (h_68 != t)))
          _fail(t);
        else
          h_68 = t;
        t = not_null(h_68);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_68 = ATgetFirst((ATermList) t);
            j_68 = (ATerm) ATgetNext((ATermList) t);
            t = n_68(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm t_68 = NULL;
  ATerm b_69 (ATerm t)
  {
    ATerm u_68 = NULL,v_68 = NULL;
    t = not_null(t_68);
    if(((u_68 != NULL) && (u_68 != t)))
      _fail(t);
    else
      u_68 = t;
    t = not_null(t_68);
    {
      ATerm w_68 = NULL;
      ATerm c_69 (ATerm t)
      {
        ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
        ATerm d_69 (ATerm t)
        {
          t = not_null(a_69);
          if(((v_68 != NULL) && (v_68 != t)))
            _fail(t);
          else
            v_68 = t;
          t = not_null(y_68);
          return(t);
        }
        t = not_null(w_68);
        if(((x_68 != NULL) && (x_68 != t)))
          _fail(t);
        else
          x_68 = t;
        t = not_null(w_68);
        t = SSL_explode_term(not_null(x_68));
        if(((y_68 != NULL) && (y_68 != t)))
          _fail(t);
        else
          y_68 = t;
        t = not_null(y_68);
        if(match_cons(t, sym__2))
          {
            z_68 = ATgetArgument(t, 0);
            a_69 = ATgetArgument(t, 1);
            t = not_null(z_68);
            if(match_string(t, ""))
              {
                t = d_69(t);
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
      t = not_null(u_68);
      if(((w_68 != NULL) && (w_68 != t)))
        _fail(t);
      else
        w_68 = t;
      t = c_69(t);
      t = not_null(v_68);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((t_68 != NULL) && (t_68 != t)))
    _fail(t);
  else
    t_68 = t;
  t = b_69(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm i_69 = NULL;
  ATerm o_69 (ATerm t)
  {
    ATerm j_69 = NULL,k_69 = NULL,m_69 = NULL;
    t = not_null(i_69);
    if(((j_69 != NULL) && (j_69 != t)))
      _fail(t);
    else
      j_69 = t;
    t = not_null(i_69);
    {
      ATerm b_82;
      b_82 = t;
      {
        ATerm l_69 = NULL;
        ATerm p_69 (ATerm t)
        {
          t = not_null(l_69);
          if(((k_69 != NULL) && (k_69 != t)))
            _fail(t);
          else
            k_69 = t;
          t = not_null(l_69);
          return(t);
        }
        t = SSLgetAnnotations(not_null(j_69));
        if(((l_69 != NULL) && (l_69 != t)))
          _fail(t);
        else
          l_69 = t;
        t = p_69(t);
      }
      t = b_82;
      {
        ATerm n_69 = NULL;
        ATerm q_69 (ATerm t)
        {
          t = not_null(n_69);
          if(((m_69 != NULL) && (m_69 != t)))
            _fail(t);
          else
            m_69 = t;
          t = not_null(n_69);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(k_69));
        if(((n_69 != NULL) && (n_69 != t)))
          _fail(t);
        else
          n_69 = t;
        t = q_69(t);
        t = not_null(m_69);
      }
    }
    return(t);
  }
  if(((i_69 != NULL) && (i_69 != t)))
    _fail(t);
  else
    i_69 = t;
  t = not_null(i_69);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm r_69 (ATerm t)
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_69, t);
        ;
        LocalPopChoice(d_82);
      }
    else
      {
        t = c_82;
        t = Nil_0_0(t);
        t = j_87(t);
      }
    return(t);
  }
  t = r_69(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  ATerm z_69 (ATerm t)
  {
    ATerm x_69 = NULL,y_69 = NULL;
    t = not_null(v_69);
    if(((y_69 != NULL) && (y_69 != t)))
      _fail(t);
    else
      y_69 = t;
    t = not_null(w_69);
    if(((x_69 != NULL) && (x_69 != t)))
      _fail(t);
    else
      x_69 = t;
    t = not_null(y_69);
    {
      ATerm j_31 (ATerm t)
      {
        t = not_null(x_69);
        return(t);
      }
      t = at_end_1_0(j_31, t);
    }
    return(t);
  }
  if(((u_69 != NULL) && (u_69 != t)))
    _fail(t);
  else
    u_69 = t;
  t = not_null(u_69);
  if(match_cons(t, sym__2))
    {
      v_69 = ATgetArgument(t, 0);
      w_69 = ATgetArgument(t, 1);
      t = z_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_82 = t;
  int f_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_82);
    }
  else
    {
      t = e_82;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  ATerm u_70 (ATerm t)
  {
    ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,o_70 = NULL;
    ATerm w_70 (ATerm t)
    {
      ATerm p_70 = NULL,q_70 = NULL;
      ATerm x_70 (ATerm t)
      {
        ATerm r_70 = NULL,s_70 = NULL;
        t = not_null(q_70);
        if(((r_70 != NULL) && (r_70 != t)))
          _fail(t);
        else
          r_70 = t;
        t = not_null(q_70);
        {
          ATerm t_70 = NULL;
          ATerm y_70 (ATerm t)
          {
            t = not_null(t_70);
            if(((s_70 != NULL) && (s_70 != t)))
              _fail(t);
            else
              s_70 = t;
            t = not_null(t_70);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_70), not_null(r_70)), not_null(m_70));
          if(((t_70 != NULL) && (t_70 != t)))
            _fail(t);
          else
            t_70 = t;
          t = y_70(t);
          t = not_null(s_70);
        }
        return(t);
      }
      t = not_null(o_70);
      if(((p_70 != NULL) && (p_70 != t)))
        _fail(t);
      else
        p_70 = t;
      t = not_null(l_70);
      t = d_64(t);
      if(((q_70 != NULL) && (q_70 != t)))
        _fail(t);
      else
        q_70 = t;
      t = x_70(t);
      return(t);
    }
    t = not_null(g_70);
    if(((j_70 != NULL) && (j_70 != t)))
      _fail(t);
    else
      j_70 = t;
    t = not_null(h_70);
    if(((k_70 != NULL) && (k_70 != t)))
      _fail(t);
    else
      k_70 = t;
    t = not_null(i_70);
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = not_null(g_70);
    {
      ATerm n_70 = NULL;
      ATerm v_70 (ATerm t)
      {
        t = not_null(n_70);
        if(((m_70 != NULL) && (m_70 != t)))
          _fail(t);
        else
          m_70 = t;
        t = not_null(n_70);
        return(t);
      }
      t = SSLgetAnnotations(not_null(j_70));
      if(((n_70 != NULL) && (n_70 != t)))
        _fail(t);
      else
        n_70 = t;
      t = v_70(t);
      t = not_null(k_70);
      t = c_64(t);
      if(((o_70 != NULL) && (o_70 != t)))
        _fail(t);
      else
        o_70 = t;
      t = w_70(t);
    }
    return(t);
  }
  if(((g_70 != NULL) && (g_70 != t)))
    _fail(t);
  else
    g_70 = t;
  t = not_null(g_70);
  if(match_cons(t, sym__2))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
      t = u_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm a_71 = NULL;
  ATerm e_71 (ATerm t)
  {
    ATerm b_71 = NULL;
    t = not_null(a_71);
    if(((b_71 != NULL) && (b_71 != t)))
      _fail(t);
    else
      b_71 = t;
    t = not_null(a_71);
    t = SSL_implode_string(not_null(b_71));
    return(t);
  }
  if(((a_71 != NULL) && (a_71 != t)))
    _fail(t);
  else
    a_71 = t;
  t = e_71(t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  ATerm a_72 (ATerm t)
  {
    ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,u_71 = NULL;
    ATerm c_72 (ATerm t)
    {
      ATerm v_71 = NULL,w_71 = NULL;
      ATerm d_72 (ATerm t)
      {
        ATerm x_71 = NULL,y_71 = NULL;
        t = not_null(w_71);
        if(((x_71 != NULL) && (x_71 != t)))
          _fail(t);
        else
          x_71 = t;
        t = not_null(w_71);
        {
          ATerm z_71 = NULL;
          ATerm e_72 (ATerm t)
          {
            t = not_null(z_71);
            if(((y_71 != NULL) && (y_71 != t)))
              _fail(t);
            else
              y_71 = t;
            t = not_null(z_71);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_71)), not_null(v_71)), not_null(s_71));
          if(((z_71 != NULL) && (z_71 != t)))
            _fail(t);
          else
            z_71 = t;
          t = e_72(t);
          t = not_null(y_71);
        }
        return(t);
      }
      t = not_null(u_71);
      if(((v_71 != NULL) && (v_71 != t)))
        _fail(t);
      else
        v_71 = t;
      t = not_null(r_71);
      t = m_65(t);
      if(((w_71 != NULL) && (w_71 != t)))
        _fail(t);
      else
        w_71 = t;
      t = d_72(t);
      return(t);
    }
    t = not_null(m_71);
    if(((p_71 != NULL) && (p_71 != t)))
      _fail(t);
    else
      p_71 = t;
    t = not_null(n_71);
    if(((q_71 != NULL) && (q_71 != t)))
      _fail(t);
    else
      q_71 = t;
    t = not_null(o_71);
    if(((r_71 != NULL) && (r_71 != t)))
      _fail(t);
    else
      r_71 = t;
    t = not_null(m_71);
    {
      ATerm t_71 = NULL;
      ATerm b_72 (ATerm t)
      {
        t = not_null(t_71);
        if(((s_71 != NULL) && (s_71 != t)))
          _fail(t);
        else
          s_71 = t;
        t = not_null(t_71);
        return(t);
      }
      t = SSLgetAnnotations(not_null(p_71));
      if(((t_71 != NULL) && (t_71 != t)))
        _fail(t);
      else
        t_71 = t;
      t = b_72(t);
      t = not_null(q_71);
      t = l_65(t);
      if(((u_71 != NULL) && (u_71 != t)))
        _fail(t);
      else
        u_71 = t;
      t = c_72(t);
    }
    return(t);
  }
  if(((m_71 != NULL) && (m_71 != t)))
    _fail(t);
  else
    m_71 = t;
  t = not_null(m_71);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_71 = ATgetFirst((ATermList) t);
      o_71 = (ATerm) ATgetNext((ATermList) t);
      t = a_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm g_72 = NULL;
  ATerm i_72 (ATerm t)
  {
    ATerm h_72 = NULL;
    t = not_null(g_72);
    if(((h_72 != NULL) && (h_72 != t)))
      _fail(t);
    else
      h_72 = t;
    t = not_null(g_72);
    t = SSL_explode_string(not_null(h_72));
    return(t);
  }
  if(((g_72 != NULL) && (g_72 != t)))
    _fail(t);
  else
    g_72 = t;
  t = i_72(t);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm g_82 = t;
    int h_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_72 (ATerm t)
        {
          ATerm i_82 = t;
          int j_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, l_72, t);
              ;
              LocalPopChoice(j_82);
            }
          else
            {
              t = i_82;
              {
                ATerm n_31 (ATerm t)
                {
                  ATerm k_72 = NULL;
                  if(((k_72 != NULL) && (k_72 != t)))
                    _fail(t);
                  else
                    k_72 = t;
                  t = not_null(k_72);
                  if(match_int(t, 47))
                    {
                      t = not_null(k_72);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm r_31 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(n_31, r_31, t);
              }
            }
          return(t);
        }
        t = l_72(t);
        ;
        LocalPopChoice(h_82);
      }
    else
      {
        t = g_82;
        t = (ATerm) ATempty;
      }
    t = implode_string_0_0(t);
  }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm init_sc_config_0_0 (ATerm t)
{
  ATerm k_82;
  k_82 = t;
  {
    ATerm z_72 = NULL,b_73 = NULL,d_73 = NULL,f_73 = NULL,j_73 = NULL,n_73 = NULL,r_73 = NULL,v_73 = NULL;
    t = term_m_82;
    t = set_config_0_0(t);
    t = term_n_82;
    t = set_config_0_0(t);
    t = term_o_82;
    t = set_config_0_0(t);
    {
      ATerm p_82;
      p_82 = t;
      {
        ATerm a_73 = NULL;
        ATerm z_73 (ATerm t)
        {
          t = not_null(a_73);
          if(((z_72 != NULL) && (z_72 != t)))
            _fail(t);
          else
            z_72 = t;
          t = not_null(a_73);
          return(t);
        }
        t = term_q_82;
        t = xtc_find_path_0_0(t);
        if(((a_73 != NULL) && (a_73 != t)))
          _fail(t);
        else
          a_73 = t;
        t = z_73(t);
      }
      t = p_82;
      {
        ATerm r_82;
        r_82 = t;
        {
          ATerm c_73 = NULL;
          ATerm a_74 (ATerm t)
          {
            t = not_null(c_73);
            if(((b_73 != NULL) && (b_73 != t)))
              _fail(t);
            else
              b_73 = t;
            t = not_null(c_73);
            return(t);
          }
          t = term_s_82;
          t = xtc_find_path_0_0(t);
          if(((c_73 != NULL) && (c_73 != t)))
            _fail(t);
          else
            c_73 = t;
          t = a_74(t);
        }
        t = r_82;
        {
          ATerm e_73 = NULL;
          ATerm b_74 (ATerm t)
          {
            t = not_null(e_73);
            if(((d_73 != NULL) && (d_73 != t)))
              _fail(t);
            else
              d_73 = t;
            t = not_null(e_73);
            return(t);
          }
          t = term_t_82;
          t = xtc_find_path_0_0(t);
          if(((e_73 != NULL) && (e_73 != t)))
            _fail(t);
          else
            e_73 = t;
          t = b_74(t);
          t = (ATerm) ATmakeAppl(sym__2, term_j_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_73)), term_j_59), not_null(b_73)), term_j_59), not_null(z_72)), term_j_59));
          t = set_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATinsert(ATempty, term_v_82), term_u_82));
          t = set_config_0_0(t);
          {
            ATerm w_82;
            w_82 = t;
            {
              ATerm g_73 = NULL,i_73 = NULL;
              ATerm d_74 (ATerm t)
              {
                t = not_null(i_73);
                if(((f_73 != NULL) && (f_73 != t)))
                  _fail(t);
                else
                  f_73 = t;
                t = not_null(i_73);
                return(t);
              }
              ATerm h_73 = NULL;
              ATerm c_74 (ATerm t)
              {
                t = not_null(h_73);
                if(((g_73 != NULL) && (g_73 != t)))
                  _fail(t);
                else
                  g_73 = t;
                t = not_null(h_73);
                return(t);
              }
              t = term_x_82;
              t = xtc_find_path_0_0(t);
              if(((h_73 != NULL) && (h_73 != t)))
                _fail(t);
              else
                h_73 = t;
              t = c_74(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), term_y_82);
              t = conc_strings_0_0(t);
              if(((i_73 != NULL) && (i_73 != t)))
                _fail(t);
              else
                i_73 = t;
              t = d_74(t);
            }
            t = w_82;
            {
              ATerm z_82;
              z_82 = t;
              {
                ATerm k_73 = NULL,m_73 = NULL;
                ATerm f_74 (ATerm t)
                {
                  t = not_null(m_73);
                  if(((j_73 != NULL) && (j_73 != t)))
                    _fail(t);
                  else
                    j_73 = t;
                  t = not_null(m_73);
                  return(t);
                }
                ATerm l_73 = NULL;
                ATerm e_74 (ATerm t)
                {
                  t = not_null(l_73);
                  if(((k_73 != NULL) && (k_73 != t)))
                    _fail(t);
                  else
                    k_73 = t;
                  t = not_null(l_73);
                  return(t);
                }
                t = term_x_82;
                t = xtc_find_path_0_0(t);
                if(((l_73 != NULL) && (l_73 != t)))
                  _fail(t);
                else
                  l_73 = t;
                t = e_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), term_y_82);
                t = conc_strings_0_0(t);
                if(((m_73 != NULL) && (m_73 != t)))
                  _fail(t);
                else
                  m_73 = t;
                t = f_74(t);
              }
              t = z_82;
              {
                ATerm o_73 = NULL,q_73 = NULL;
                ATerm h_74 (ATerm t)
                {
                  t = not_null(q_73);
                  if(((n_73 != NULL) && (n_73 != t)))
                    _fail(t);
                  else
                    n_73 = t;
                  t = not_null(q_73);
                  return(t);
                }
                ATerm p_73 = NULL;
                ATerm g_74 (ATerm t)
                {
                  t = not_null(p_73);
                  if(((o_73 != NULL) && (o_73 != t)))
                    _fail(t);
                  else
                    o_73 = t;
                  t = not_null(p_73);
                  return(t);
                }
                t = term_a_83;
                t = xtc_find_path_0_0(t);
                if(((p_73 != NULL) && (p_73 != t)))
                  _fail(t);
                else
                  p_73 = t;
                t = g_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), term_y_82);
                t = conc_strings_0_0(t);
                if(((q_73 != NULL) && (q_73 != t)))
                  _fail(t);
                else
                  q_73 = t;
                t = h_74(t);
                t = (ATerm) ATmakeAppl(sym__2, term_c_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_73)), term_j_59), not_null(j_73)), term_j_59), not_null(f_73)), term_j_59));
                t = set_config_0_0(t);
                {
                  ATerm b_83;
                  b_83 = t;
                  {
                    ATerm s_73 = NULL,u_73 = NULL;
                    ATerm j_74 (ATerm t)
                    {
                      t = not_null(u_73);
                      if(((r_73 != NULL) && (r_73 != t)))
                        _fail(t);
                      else
                        r_73 = t;
                      t = not_null(u_73);
                      return(t);
                    }
                    ATerm t_73 = NULL;
                    ATerm i_74 (ATerm t)
                    {
                      t = not_null(t_73);
                      if(((s_73 != NULL) && (s_73 != t)))
                        _fail(t);
                      else
                        s_73 = t;
                      t = not_null(t_73);
                      return(t);
                    }
                    t = term_x_82;
                    t = xtc_find_path_0_0(t);
                    if(((t_73 != NULL) && (t_73 != t)))
                      _fail(t);
                    else
                      t_73 = t;
                    t = i_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), term_c_83);
                    t = conc_strings_0_0(t);
                    if(((u_73 != NULL) && (u_73 != t)))
                      _fail(t);
                    else
                      u_73 = t;
                    t = j_74(t);
                  }
                  t = b_83;
                  {
                    ATerm w_73 = NULL,y_73 = NULL;
                    ATerm l_74 (ATerm t)
                    {
                      t = not_null(y_73);
                      if(((v_73 != NULL) && (v_73 != t)))
                        _fail(t);
                      else
                        v_73 = t;
                      t = not_null(y_73);
                      return(t);
                    }
                    ATerm x_73 = NULL;
                    ATerm k_74 (ATerm t)
                    {
                      t = not_null(x_73);
                      if(((w_73 != NULL) && (w_73 != t)))
                        _fail(t);
                      else
                        w_73 = t;
                      t = not_null(x_73);
                      return(t);
                    }
                    t = term_a_83;
                    t = xtc_find_path_0_0(t);
                    if(((x_73 != NULL) && (x_73 != t)))
                      _fail(t);
                    else
                      x_73 = t;
                    t = k_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_c_83);
                    t = conc_strings_0_0(t);
                    if(((y_73 != NULL) && (y_73 != t)))
                      _fail(t);
                    else
                      y_73 = t;
                    t = l_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_83), term_g_83), not_null(v_73)), term_d_83), term_f_83), term_e_83), not_null(r_73)), term_d_83));
                    t = set_config_0_0(t);
                    t = term_i_83;
                    t = set_config_0_0(t);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  t = k_82;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm s_31 (ATerm t)
    {
      ATerm n_74 = NULL;
      t = term_h_78;
      t = get_config_0_0(t);
      {
        ATerm o_74 = NULL;
        ATerm p_74 (ATerm t)
        {
          t = not_null(o_74);
          if(((n_74 != NULL) && (n_74 != t)))
            _fail(t);
          else
            n_74 = t;
          t = not_null(o_74);
          return(t);
        }
        t = term_j_83;
        t = xtc_find_0_0(t);
        if(((o_74 != NULL) && (o_74 != t)))
          _fail(t);
        else
          o_74 = t;
        t = p_74(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), term_y_35);
        t = copy_file_0_0(t);
        t = term_g_33;
        t = exit_0_0(t);
      }
      return(t);
    }
    t = try_1_0(s_31, t);
    {
      ATerm d_32 (ATerm t)
      {
        t = term_m_78;
        t = get_config_0_0(t);
        t = sc_version_0_0(t);
        t = term_g_33;
        t = exit_0_0(t);
        return(t);
      }
      t = try_1_0(d_32, t);
      {
        ATerm k_83 = t;
        int l_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_83;
            m_83 = t;
            t = term_q_57;
            t = get_config_0_0(t);
            t = m_83;
            ;
            LocalPopChoice(l_83);
          }
        else
          {
            t = k_83;
            t = (ATerm) ATinsert(ATempty, term_n_83);
            t = fatal_error_0_0(t);
          }
        t = sc_announce_0_0(t);
        {
          ATerm e_32 (ATerm t)
          {
            ATerm o_83;
            o_83 = t;
            t = term_q_57;
            t = get_config_0_0(t);
            {
              ATerm l_32 (ATerm t)
              {
                t = term_p_83;
                return(t);
              }
              t = debug_1_0(l_32, t);
            }
            t = o_83;
            return(t);
          }
          t = if_verbose1_1_0(e_32, t);
        }
      }
    }
  }
  return(t);
}
ATerm sc_0_0 (ATerm t)
{
  ATerm q_83 = t;
  int r_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm m_32 (ATerm t)
        {
          ATerm x_32 (ATerm t)
          {
            ATerm t_74 = NULL;
            ATerm u_74 = NULL;
            ATerm z_74 (ATerm t)
            {
              t = not_null(u_74);
              if(((t_74 != NULL) && (t_74 != t)))
                _fail(t);
              else
                t_74 = t;
              t = not_null(u_74);
              return(t);
            }
            if(((u_74 != NULL) && (u_74 != t)))
              _fail(t);
            else
              u_74 = t;
            t = z_74(t);
            t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(CheckATermList(not_null(t_74)), term_s_83));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose1_1_0(x_32, t);
          return(t);
        }
        t = profile_p__2_0(m_32, compile_0_0, t);
        {
          ATerm y_32 (ATerm t)
          {
            ATerm v_74 = NULL;
            ATerm w_74 = NULL;
            ATerm a_75 (ATerm t)
            {
              t = not_null(w_74);
              if(((v_74 != NULL) && (v_74 != t)))
                _fail(t);
              else
                v_74 = t;
              t = not_null(w_74);
              return(t);
            }
            t = run_time_0_0(t);
            if(((w_74 != NULL) && (w_74 != t)))
              _fail(t);
            else
              w_74 = t;
            t = a_75(t);
            t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_83), not_null(v_74)), term_t_83));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose2_1_0(y_32, t);
          t = term_g_33;
          t = exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(r_83);
    }
  else
    {
      t = q_83;
      {
        ATerm x_74 = NULL;
        ATerm y_74 = NULL;
        ATerm b_75 (ATerm t)
        {
          t = not_null(y_74);
          if(((x_74 != NULL) && (x_74 != t)))
            _fail(t);
          else
            x_74 = t;
          t = not_null(y_74);
          return(t);
        }
        t = run_time_0_0(t);
        if(((y_74 != NULL) && (y_74 != t)))
          _fail(t);
        else
          y_74 = t;
        t = b_75(t);
        t = (ATerm) ATmakeAppl(sym__2, term_w_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_83), not_null(x_74)), term_v_83));
        t = printnl_0_0(t);
        t = term_o_47;
        t = exit_0_0(t);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = sc_0_0(t);
  return(t);
}
