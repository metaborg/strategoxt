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
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_c_63;
ATerm term_z_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_o_62;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_l_62;
ATerm term_j_62;
ATerm term_h_62;
ATerm term_f_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_v_61;
ATerm term_t_61;
ATerm term_s_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_k_60;
ATerm term_m_59;
ATerm term_e_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_f_58;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_e_55;
ATerm term_c_55;
ATerm term_y_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_e_54;
ATerm term_c_54;
ATerm term_a_54;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_l_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_r_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_f_51;
ATerm term_c_51;
ATerm term_x_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_d_50;
ATerm term_w_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_b_49;
ATerm term_y_48;
ATerm term_r_48;
ATerm term_o_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_e_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_y_46;
ATerm term_w_46;
ATerm term_r_46;
ATerm term_g_46;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_y_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_u_43;
ATerm term_q_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_q_38;
ATerm term_m_38;
ATerm term_h_38;
ATerm term_f_38;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_u_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_s_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_n_19;
void init_constant_terms (void)
{
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_i_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_29, term_s_28, term_x_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_30, term_s_19, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_30, term_r_26, term_g_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_30, term_k_30, term_l_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_30, term_o_30, term_p_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_30, term_w_30, term_x_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_31, term_i_31, term_j_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_31, term_p_31, term_q_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_31, term_z_31, term_a_32);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_32, term_d_32, term_i_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_32, term_l_32, term_s_32);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_32, term_v_32, term_w_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_33, term_d_33, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_33, term_h_33, term_i_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_33, term_z_33, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_d_34, term_e_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_34, term_p_34, term_q_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_34, term_t_34, term_u_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_34, term_a_35, term_b_35);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_35, term_g_35, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_n_35, term_o_35);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_35, term_v_35, term_w_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_z_35, term_a_36);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_36, term_h_36, term_i_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_36, term_p_36, term_q_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_36, term_t_36, term_u_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_36, term_a_37, term_b_37);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_37, term_i_37, term_n_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_h_45);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_x_47);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_s_26);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_s_26);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym__2, term_r_25, term_s_26);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_s_26);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_s_26);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_s_26);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym__2, term_y_52, term_s_26);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_n_19);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym__2, term_u_53, term_s_26);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym__2, term_a_54, term_s_26);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym__2, term_n_54, term_s_26);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(sym__2, term_n_57, term_o_57);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym__2, term_s_58, term_s_26);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(sym__3, term_n_57, term_o_57, (ATerm) ATempty);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_j_61);
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_s_28);
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_n_19);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATempty);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_92 (ATerm), ATerm t_92 (ATerm));
ATerm crush_2 (ATerm, ATerm l_96 (ATerm), ATerm m_96 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_100 (ATerm));
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm w_108 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm output_canonical_0 (ATerm);
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
ATerm if_keep2_1 (ATerm, ATerm j_101 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm k_101 (ATerm));
ATerm AddMain_1 (ATerm, ATerm e_79 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm g_109 (ATerm));
ATerm add_main_0 (ATerm);
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm f_79 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm d_99 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm e_109 (ATerm), ATerm f_109 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm d_87 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm y_101 (ATerm), ATerm z_101 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm a_102 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm v_108 (ATerm));
ATerm assert_1 (ATerm, ATerm k_97 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_98 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm e_71 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm x_108 (ATerm), ATerm y_108 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm i_100 (ATerm));
ATerm basename_1 (ATerm, ATerm o_95 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm h_97 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm g_97 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm h_108 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm k_108 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_100 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm));
ATerm debug_1 (ATerm, ATerm p_98 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_79 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_100 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm v_93 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_80 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm t_98 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm j_100 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm l_100 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm y_90 (ATerm), ATerm z_90 (ATerm));
ATerm union_1 (ATerm, ATerm u_90 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm j_105 (ATerm));
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
ATerm map_1 (ATerm, ATerm r_86 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm a_71 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_87 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_104 (ATerm));
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm default_system_about_0 (ATerm);
ATerm override_system_about_0 (ATerm);
ATerm system_about_0 (ATerm);
ATerm Help_0 (ATerm);
ATerm system_about_switch_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_105 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_105 (ATerm));
ATerm parse_options_1 (ATerm, ATerm f_105 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_87 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm a_64 (ATerm), ATerm b_64 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
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
        ATerm k_19;
        k_19 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = k_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_92 (ATerm), ATerm t_92 (ATerm))
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_92(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
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
                t = foldr_2(t, s_92, t_92);
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
                t = t_92(t);
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
ATerm crush_2 (ATerm t, ATerm l_96 (ATerm), ATerm m_96 (ATerm))
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
      t = foldr_2(t, l_96, m_96);
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
      t = term_n_19;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_100 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_r_19;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_s_19);
        t = geq_0(t);
      }
    }
    t = o_19;
    t = h_100(t);
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
            t = term_t_19;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm w_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_c_20;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = w_19;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_d_20;
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
                t = term_f_20;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_c_20), not_null(c_4)));
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
            t = term_p_20;
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
            t = term_q_20;
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
                t = term_r_20;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_c_20), not_null(r_4)), term_t_20));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_l_20, not_null(v_4));
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
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20;
      w_20 = t;
      {
        t = term_t_20;
        t = get_config_0(t);
      }
      t = w_20;
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
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
              t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_a_21));
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
        ATerm c_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_f_21);
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
            t = term_f_21;
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = c_21;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
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
                        ATerm i_21 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_21 = t;
                            int v_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(v_21);
                              }
                            else
                              {
                                t = q_21;
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
                            t = i_21;
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
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
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
ATerm xtc_transform_1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, w_108, e_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_x_21;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_c_22;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_d_22);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_e_22;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm f_22;
    f_22 = t;
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
    t = f_22;
    {
      ATerm b_7 = NULL;
      t = term_g_22;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_g_22);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_l_22)), not_null(w_6));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, i_1, j_1);
  return(t);
}
ATerm output_canonical_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm m_22;
    m_22 = t;
    {
      ATerm m_1 (ATerm t)
      {
        t = term_n_22;
        return(t);
      }
      t = debug_1(t, m_1);
      {
        ATerm o_22;
        o_22 = t;
        {
          t = term_p_22;
          t = get_config_0(t);
        }
        t = o_22;
        {
          ATerm n_1 (ATerm t)
          {
            ATerm k_7 = NULL;
            ATerm o_1 (ATerm t)
            {
              t = term_v_22;
              return(t);
            }
            t = get_outfile_1(t, o_1);
            {
              k_7 = t;
              if(((i_7 != NULL) && (i_7 != k_7)))
                _fail(k_7);
              else
                i_7 = k_7;
            }
            return(t);
          }
          t = copy_to_1(t, n_1);
          {
            ATerm p_1 (ATerm t)
            {
              t = term_w_22;
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm l_7 = NULL;
              ATerm m_7 = NULL;
              t = pass_verbose_0(t);
              {
                m_7 = t;
                if(((l_7 != NULL) && (l_7 != m_7)))
                  _fail(m_7);
                else
                  l_7 = m_7;
              }
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_f_23), term_e_23);
              return(t);
            }
            t = xtc_transform_2(t, p_1, q_1);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm n_7 = NULL;
                ATerm s_1 (ATerm t)
                {
                  t = term_g_23;
                  return(t);
                }
                t = get_outfile_1(t, s_1);
                {
                  n_7 = t;
                  if(((j_7 != NULL) && (j_7 != n_7)))
                    _fail(n_7);
                  else
                    j_7 = n_7;
                }
                return(t);
              }
              t = copy_to_1(t, r_1);
              {
                ATerm t_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_h_23);
                  return(t);
                }
                t = say_1(t, t_1);
              }
            }
          }
        }
      }
    }
    t = m_22;
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  ATerm v_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_o_23;
    return(t);
  }
  ATerm x_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, w_1, x_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_s_23;
      return(t);
    }
    t = debug_1(t, z_1);
    return(t);
  }
  t = if_verbose2_1(t, y_1);
  {
    ATerm a_2 (ATerm t)
    {
      ATerm c_2 (ATerm t)
      {
        ATerm a_8 = NULL;
        ATerm b_8 = NULL;
        b_8 = t;
        if(((a_8 != NULL) && (a_8 != b_8)))
          _fail(b_8);
        else
          a_8 = b_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_t_23));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, c_2);
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = output_canonical_0(t);
          {
            t = s2c_0(t);
            {
              t = ac2abox_0(t);
              {
                t = abox2text_0(t);
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm f_2 (ATerm t)
                    {
                      t = term_w_23;
                      return(t);
                    }
                    t = get_outfile_1(t, f_2);
                    return(t);
                  }
                  t = rename_to_1(t, e_2);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, a_2, b_2);
  }
  return(t);
}
ATerm output_optimized_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm z_23;
    z_23 = t;
    {
      ATerm h_2 (ATerm t)
      {
        t = term_a_24;
        return(t);
      }
      t = debug_1(t, h_2);
      {
        ATerm b_24;
        b_24 = t;
        {
          t = term_d_24;
          t = get_config_0(t);
        }
        t = b_24;
        {
          ATerm i_2 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_2 (ATerm t)
            {
              t = term_e_24;
              return(t);
            }
            t = get_outfile_1(t, j_2);
            {
              i_8 = t;
              if(((g_8 != NULL) && (g_8 != i_8)))
                _fail(i_8);
              else
                g_8 = i_8;
            }
            return(t);
          }
          t = copy_to_1(t, i_2);
          {
            ATerm k_2 (ATerm t)
            {
              t = term_w_22;
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              ATerm j_8 = NULL;
              ATerm k_8 = NULL;
              t = pass_verbose_0(t);
              {
                k_8 = t;
                if(((j_8 != NULL) && (j_8 != k_8)))
                  _fail(k_8);
                else
                  j_8 = k_8;
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), term_e_23);
              return(t);
            }
            t = xtc_transform_2(t, k_2, l_2);
            {
              ATerm m_2 (ATerm t)
              {
                ATerm l_8 = NULL;
                ATerm n_2 (ATerm t)
                {
                  t = term_f_24;
                  return(t);
                }
                t = get_outfile_1(t, n_2);
                {
                  l_8 = t;
                  if(((h_8 != NULL) && (h_8 != l_8)))
                    _fail(l_8);
                  else
                    h_8 = l_8;
                }
                return(t);
              }
              t = copy_to_1(t, m_2);
              {
                ATerm o_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_h_23);
                  return(t);
                }
                t = say_1(t, o_2);
              }
            }
          }
        }
      }
    }
    t = z_23;
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm stratego_of_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_g_24;
    return(t);
  }
  ATerm q_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_h_24;
    return(t);
  }
  ATerm s_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm desugar_case_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  ATerm u_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = term_j_24;
    return(t);
  }
  ATerm z_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, y_2, z_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = term_k_24;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm g_9 = NULL;
    ATerm h_9 = NULL;
    t = pass_verbose_0(t);
    {
      h_9 = t;
      if(((g_9 != NULL) && (g_9 != h_9)))
        _fail(h_9);
      else
        g_9 = h_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, c_3, d_3);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  ATerm f_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, e_3, f_3);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  ATerm j_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, g_3, j_3);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = term_y_24;
      return(t);
    }
    t = debug_1(t, q_3);
    return(t);
  }
  t = if_verbose2_1(t, m_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        ATerm s_9 = NULL;
        ATerm t_9 = NULL;
        t_9 = t;
        if(((s_9 != NULL) && (s_9 != t_9)))
          _fail(t_9);
        else
          s_9 = t_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_z_24));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, t_3);
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm w_3 (ATerm t)
        {
          ATerm a_25;
          a_25 = t;
          {
            ATerm b_25 = t;
            if((PushChoice() == 0))
              {
                t = term_c_25;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_25;
              }
          }
          t = a_25;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, w_3);
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
    t = profile_p__2(t, r_3, s_3);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_d_25;
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm w_9 = NULL;
    ATerm x_9 = NULL;
    t = pass_verbose_0(t);
    {
      x_9 = t;
      if(((w_9 != NULL) && (w_9 != x_9)))
        _fail(x_9);
      else
        w_9 = x_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, x_3, y_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_e_25;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm a_10 = NULL;
    ATerm b_10 = NULL;
    t = pass_verbose_0(t);
    {
      b_10 = t;
      if(((a_10 != NULL) && (a_10 != b_10)))
        _fail(b_10);
      else
        a_10 = b_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, z_3, d_4);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = term_f_25;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    ATerm g_10 = NULL,i_10 = NULL;
    ATerm i_25;
    i_25 = t;
    {
      ATerm h_10 = NULL;
      t = pass_verbose_0(t);
      {
        h_10 = t;
        if(((g_10 != NULL) && (g_10 != h_10)))
          _fail(h_10);
        else
          g_10 = h_10;
      }
    }
    t = i_25;
    {
      ATerm l_10 = NULL;
      t = term_n_25;
      {
        t = get_config_0(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm j_10 = NULL;
            ATerm k_10 = NULL;
            k_10 = t;
            if(((j_10 != NULL) && (j_10 != k_10)))
              _fail(k_10);
            else
              j_10 = k_10;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_10)), term_n_25);
            return(t);
          }
          t = map_1(t, k_4);
          {
            l_10 = t;
            if(((i_10 != NULL) && (i_10 != l_10)))
              _fail(l_10);
            else
              i_10 = l_10;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_10)), (ATerm) ATinsert(ATempty, term_l_22)), not_null(g_10));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, i_4, j_4);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_o_25;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    ATerm q_10 = NULL;
    ATerm r_10 = NULL;
    t = pass_verbose_0(t);
    {
      r_10 = t;
      if(((q_10 != NULL) && (q_10 != r_10)))
        _fail(r_10);
      else
        q_10 = r_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, l_4, m_4);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_p_25;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm u_10 = NULL;
    ATerm v_10 = NULL;
    t = pass_verbose_0(t);
    {
      v_10 = t;
      if(((u_10 != NULL) && (u_10 != v_10)))
        _fail(v_10);
      else
        u_10 = v_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, n_4, o_4);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm s_4 (ATerm t)
  {
    ATerm q_25;
    q_25 = t;
    {
      t = term_r_25;
      t = get_config_0(t);
    }
    t = q_25;
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
          {
            t = (ATerm) ATinsert(ATempty, term_x_25);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm z_4 (ATerm t)
        {
          ATerm z_10 = NULL;
          ATerm a_5 (ATerm t)
          {
            t = term_y_25;
            return(t);
          }
          t = get_outfile_1(t, a_5);
          {
            z_10 = t;
            if(((y_10 != NULL) && (y_10 != z_10)))
              _fail(z_10);
            else
              y_10 = z_10;
          }
          return(t);
        }
        t = copy_to_1(t, z_4);
        {
          ATerm b_5 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_c_26);
            return(t);
          }
          t = say_1(t, b_5);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_4);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm f_26;
    f_26 = t;
    {
      ATerm c_11 = NULL;
      ATerm d_11 = NULL;
      t = term_g_26;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), term_s_19);
        t = geq_0(t);
      }
    }
    t = f_26;
    t = j_101(t);
    return(t);
  }
  t = try_1(t, c_5);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm d_5 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm h_11 = NULL;
    ATerm i_11 = NULL;
    t = pass_verbose_0(t);
    {
      i_11 = t;
      if(((h_11 != NULL) && (h_11 != i_11)))
        _fail(i_11);
      else
        h_11 = i_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(h_11)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, d_5, g_5);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm m_5 (ATerm t)
      {
        ATerm k_11 = NULL;
        ATerm n_5 (ATerm t)
        {
          t = term_i_26;
          return(t);
        }
        t = get_outfile_1(t, n_5);
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
        return(t);
      }
      t = copy_to_1(t, m_5);
      {
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_11)), term_j_26);
          return(t);
        }
        t = say_1(t, o_5);
      }
      return(t);
    }
    t = if_keep2_1(t, h_5);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm k_101 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm m_26;
    m_26 = t;
    {
      ATerm o_11 = NULL;
      ATerm p_11 = NULL;
      t = term_g_26;
      {
        t = get_config_0(t);
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), term_r_26);
        t = geq_0(t);
      }
    }
    t = m_26;
    t = k_101(t);
    return(t);
  }
  t = try_1(t, p_5);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_Specification_1))
    {
      v_11 = ATgetArgument(u_11, 0);
      {
        ATerm x_11 = NULL;
        ATerm y_11 = NULL;
        t = term_s_26;
        {
          t = e_79(t);
          {
            y_11 = t;
            if(((x_11 != NULL) && (x_11 != y_11)))
              _fail(y_11);
            else
              x_11 = y_11;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(v_11)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_t_26, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_11)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm g_109 (ATerm))
{
  t = read_from_0(t);
  {
    t = g_109(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL;
  ATerm q_5 (ATerm t)
  {
    ATerm u_26;
    u_26 = t;
    {
      ATerm e_12 = NULL;
      t = term_y_26;
      {
        t = get_config_0(t);
        {
          e_12 = t;
          {
            if(((d_12 != NULL) && (d_12 != e_12)))
              _fail(e_12);
            else
              d_12 = e_12;
            {
              ATerm r_5 (ATerm t)
              {
                ATerm s_5 (ATerm t)
                {
                  t = term_d_27;
                  return(t);
                }
                t = debug_1(t, s_5);
                return(t);
              }
              t = if_verbose2_1(t, r_5);
            }
          }
        }
      }
    }
    t = u_26;
    {
      ATerm u_5 (ATerm t)
      {
        ATerm v_5 (ATerm t)
        {
          t = not_null(d_12);
          return(t);
        }
        t = AddMain_1(t, v_5);
        return(t);
      }
      t = xtc_io_transform_1(t, u_5);
    }
    return(t);
  }
  t = try_1(t, q_5);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm g_12 = NULL;
        ATerm c_6 (ATerm t)
        {
          t = term_e_27;
          return(t);
        }
        t = get_outfile_1(t, c_6);
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        return(t);
      }
      t = copy_to_1(t, a_6);
      {
        ATerm g_6 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_12)), term_f_27);
          return(t);
        }
        t = say_1(t, g_6);
      }
      return(t);
    }
    t = if_keep3_1(t, w_5);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm o_12 = NULL,p_12 = NULL;
  m_12 = t;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm g_27;
      g_27 = t;
      {
        ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
        t = term_j_27;
        {
          t = table_get_0(t);
          {
            q_12 = t;
            l_12 :
            if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
              {
                r_12 = ATgetFirst((ATermList) q_12);
                s_12 = (ATerm) ATgetNext((ATermList) q_12);
                {
                  if(((p_12 != NULL) && (p_12 != r_12)))
                    _fail(r_12);
                  else
                    p_12 = r_12;
                  {
                    if(((o_12 != NULL) && (o_12 != s_12)))
                      _fail(s_12);
                    else
                      o_12 = s_12;
                    {
                      t = not_null(p_12);
                      {
                        ATerm j_6 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, j_6);
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
      t = g_27;
      {
        ATerm k_6 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = end_scope_1(t, k_6);
      }
      return(t);
    }
    t = repeat_1(t, i_6);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_20;
        t = get_config_0(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = term_f_21;
      }
    return(t);
  }
  t = copy_to_1(t, l_6);
  {
    t = term_n_19;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm x_12 = NULL,z_12 = NULL;
  ATerm t_27;
  t_27 = t;
  {
    ATerm y_12 = NULL;
    t = f_79(t);
    {
      y_12 = t;
      if(((x_12 != NULL) && (x_12 != y_12)))
        _fail(y_12);
      else
        x_12 = y_12;
    }
  }
  t = t_27;
  {
    ATerm a_13 = NULL;
    t = term_u_27;
    {
      t = get_config_0(t);
      {
        a_13 = t;
        if(((z_12 != NULL) && (z_12 != a_13)))
          _fail(a_13);
        else
          z_12 = a_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), not_null(x_12));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym_stderr_0))
    {
      ATerm j_13 = NULL,l_13 = NULL;
      ATerm w_27;
      w_27 = t;
      {
        ATerm k_13 = NULL;
        t = SSLgetAnnotations(not_null(h_13));
        {
          k_13 = t;
          if(((j_13 != NULL) && (j_13 != k_13)))
            _fail(k_13);
          else
            j_13 = k_13;
        }
      }
      t = w_27;
      {
        ATerm m_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_13));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_stdout_0))
    {
      ATerm w_13 = NULL,y_13 = NULL;
      ATerm x_27;
      x_27 = t;
      {
        ATerm x_13 = NULL;
        t = SSLgetAnnotations(not_null(u_13));
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
      }
      t = x_27;
      {
        ATerm z_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(w_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        t = not_null(y_13);
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
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_FILE_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_14 = NULL;
            ATerm p_14 = NULL;
            t = q_0(t);
            {
              p_14 = t;
              {
                if(((o_14 != NULL) && (o_14 != p_14)))
                  _fail(p_14);
                else
                  o_14 = p_14;
                {
                  ATerm a_28 = t;
                  int b_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(b_28);
                    }
                  else
                    {
                      t = a_28;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(o_14));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm c_28 = t;
              int d_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_14 = NULL;
                  ATerm s_14 = NULL;
                  t = q_0(t);
                  {
                    s_14 = t;
                    {
                      if(((r_14 != NULL) && (r_14 != s_14)))
                        _fail(s_14);
                      else
                        r_14 = s_14;
                      {
                        ATerm e_28 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_28 = t;
                            int g_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(g_28);
                              }
                            else
                              {
                                t = f_28;
                                {
                                  ATerm h_28 = t;
                                  int i_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(i_28);
                                    }
                                  else
                                    {
                                      t = h_28;
                                      {
                                        ATerm t_14 = NULL;
                                        t_14 = t;
                                        if(((m_14 != NULL) && (m_14 != t_14)))
                                          _fail(t_14);
                                        else
                                          m_14 = t_14;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_28;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(r_14));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
                  ;
                  LocalPopChoice(d_28);
                }
              else
                {
                  t = c_28;
                  {
                    ATerm v_14 = NULL;
                    t = q_0(t);
                    {
                      v_14 = t;
                      if(((m_14 != NULL) && (m_14 != v_14)))
                        _fail(v_14);
                      else
                        m_14 = v_14;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
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
  ATerm e_15 = NULL;
  ATerm m_6 (ATerm t)
  {
    ATerm j_28;
    j_28 = t;
    {
      t = term_k_28;
      t = get_config_0(t);
    }
    t = j_28;
    {
      ATerm n_6 (ATerm t)
      {
        ATerm f_15 = NULL;
        ATerm o_6 (ATerm t)
        {
          t = term_l_28;
          return(t);
        }
        t = get_outfile_1(t, o_6);
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
        return(t);
      }
      t = copy_to_1(t, n_6);
      {
        ATerm m_28;
        m_28 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_n_28);
          t = echo_0(t);
        }
        t = m_28;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, m_6);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm k_15 = NULL,m_15 = NULL;
  ATerm l_15 = NULL;
  t = term_g_26;
  {
    ATerm o_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = o_28;
        t = term_s_28;
      }
    {
      l_15 = t;
      if(((k_15 != NULL) && (k_15 != l_15)))
        _fail(l_15);
      else
        k_15 = l_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_s_28);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          m_15 = t;
          if(((j_15 != NULL) && (j_15 != m_15)))
            _fail(m_15);
          else
            j_15 = m_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_15)), term_g_26);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm s_15 = NULL,u_15 = NULL;
  ATerm t_15 = NULL;
  t = term_r_19;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = term_s_28;
      }
    {
      t_15 = t;
      if(((s_15 != NULL) && (s_15 != t_15)))
        _fail(t_15);
      else
        s_15 = t_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), term_s_28);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_15 = t;
          if(((r_15 != NULL) && (r_15 != u_15)))
            _fail(u_15);
          else
            r_15 = u_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_r_19);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm z_15 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        t = term_u_27;
        t = get_config_0(t);
      }
    }
  {
    z_15 = t;
    if(((y_15 != NULL) && (y_15 != z_15)))
      _fail(z_15);
    else
      y_15 = z_15;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), term_f_29);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym_stdin_0))
    {
      ATerm i_16 = NULL;
      ATerm j_16 = NULL;
      t = term_g_29;
      {
        t = ReadFromFile_0(t);
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
      }
      t = not_null(i_16);
    }
  else
    {
      if(match_cons(g_16, sym_FILE_1))
        {
          h_16 = ATgetArgument(g_16, 0);
          {
            ATerm l_16 = NULL;
            ATerm m_16 = NULL;
            t = not_null(h_16);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  m_16 = t;
                  if(((l_16 != NULL) && (l_16 != m_16)))
                    _fail(m_16);
                  else
                    l_16 = m_16;
                }
              }
            }
            t = not_null(l_16);
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
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  v_16 = t;
  t_16 :
  if(match_cons(v_16, sym__2))
    {
      w_16 = ATgetArgument(v_16, 0);
      y_16 = ATgetArgument(v_16, 1);
      u_16 :
      if(match_cons(w_16, sym_Stream_1))
        {
          x_16 = ATgetArgument(w_16, 0);
          {
            ATerm b_17 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(x_16), not_null(y_16));
            {
              ATerm c_17 = NULL;
              c_17 = t;
              if(((b_17 != NULL) && (b_17 != c_17)))
                _fail(c_17);
              else
                b_17 = c_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_17));
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
ATerm WriteToFile_1 (ATerm t, ATerm d_99 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      {
        ATerm o_17 = NULL,q_17 = NULL;
        t = not_null(k_17);
        {
          ATerm p_17 = NULL;
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), term_j_29);
            {
              t = open_stream_0(t);
              {
                ATerm r_17 = NULL;
                r_17 = t;
                if(((q_17 != NULL) && (q_17 != r_17)))
                  _fail(r_17);
                else
                  q_17 = r_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(l_17));
                  {
                    t = d_99(t);
                    {
                      t = fclose_0(t);
                      t = not_null(l_17);
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
  ATerm x_17 = NULL;
  ATerm z_17 = NULL;
  x_17 = t;
  {
    ATerm a_18 = NULL;
    t = xtc_new_file_0(t);
    {
      a_18 = t;
      {
        if(((z_17 != NULL) && (z_17 != a_18)))
          _fail(a_18);
        else
          z_17 = a_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(x_17));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(z_17);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_17));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm e_109 (ATerm), ATerm f_109 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, e_109, f_109);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  t = SSL_close_file(not_null(e_18));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      t = SSL_execvp(not_null(k_18), not_null(l_18));
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
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_int_to_string(not_null(q_18));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_UnknownSignal_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm d_19 = NULL;
        ATerm e_19 = NULL;
        t = not_null(z_18);
        {
          t = int_to_string_0(t);
          {
            e_19 = t;
            if(((d_19 != NULL) && (d_19 != e_19)))
              _fail(e_19);
            else
              d_19 = e_19;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_29), not_null(d_19)), term_k_29);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(y_18, sym_Signal_3))
        {
          z_18 = ATgetArgument(y_18, 0);
          a_19 = ATgetArgument(y_18, 1);
          b_19 = ATgetArgument(y_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = not_null(a_19);
            {
              t = int_to_string_0(t);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_19)), term_n_29), not_null(i_19)), term_m_29), not_null(z_18));
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
ATerm fetch_elem_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm p_19 = NULL;
  ATerm p_6 (ATerm t)
  {
    ATerm q_19 = NULL;
    t = d_87(t);
    {
      q_19 = t;
      if(((p_19 != NULL) && (p_19 != q_19)))
        _fail(q_19);
      else
        p_19 = q_19;
    }
    return(t);
  }
  t = fetch_1(t, p_6);
  t = not_null(p_19);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_37), term_c_37), term_v_36), term_r_36), term_j_36), term_b_36), term_x_35), term_p_35), term_l_35), term_e_35), term_v_34), term_r_34), term_f_34), term_b_34), term_j_33), term_f_33), term_x_32), term_t_32), term_j_32), term_b_32), term_r_31), term_m_31), term_e_31), term_r_30), term_m_30), term_h_30), term_e_30), term_y_29);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
            x_19 = t;
            u_19 :
            if(match_cons(x_19, sym_Signal_3))
              {
                y_19 = ATgetArgument(x_19, 0);
                z_19 = ATgetArgument(x_19, 1);
                a_20 = ATgetArgument(x_19, 2);
                if(((v_19 != NULL) && (v_19 != z_19)))
                  _fail(z_19);
                else
                  v_19 = z_19;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, s_6);
        }
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(v_19));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm p_37;
  p_37 = t;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
      h_20 = t;
      g_20 :
      if(match_cons(h_20, sym_WaitStatus_3))
        {
          i_20 = ATgetArgument(h_20, 0);
          j_20 = ATgetArgument(h_20, 1);
          k_20 = ATgetArgument(h_20, 2);
          {
            ATerm n_20 = NULL;
            t = not_null(j_20);
            {
              ATerm q_37 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_20 = NULL;
                  m_20 = t;
                  e_20 :
                  if(!(match_int(m_20, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_37;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm o_20 = NULL;
                    o_20 = t;
                    if(((n_20 != NULL) && (n_20 != o_20)))
                      _fail(o_20);
                    else
                      n_20 = o_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_20)), term_r_37));
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
    t = try_1(t, t_6);
  }
  t = p_37;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  t = SSL_waitpid(not_null(s_20));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm z_20 = NULL;
  ATerm b_21 = NULL;
  z_20 = t;
  {
    t = fork_0(t);
    {
      b_21 = t;
      {
        ATerm s_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL;
            d_21 = t;
            y_20 :
            if(match_int(d_21, 0))
              {
                t = not_null(z_20);
                t = y_101(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = s_37;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_21), not_null(z_20));
              t = z_101(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm a_102 (ATerm))
{
  ATerm m_21 = NULL;
  ATerm u_6 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
    n_21 = t;
    l_21 :
    if(match_cons(n_21, sym__2))
      {
        o_21 = ATgetArgument(n_21, 0);
        p_21 = ATgetArgument(n_21, 1);
        {
          ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
          if(((m_21 != NULL) && (m_21 != p_21)))
            _fail(p_21);
          else
            m_21 = p_21;
          {
            t = not_null(o_21);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  r_21 = t;
                  j_21 :
                  if(match_cons(r_21, sym_WaitStatus_3))
                    {
                      s_21 = ATgetArgument(r_21, 0);
                      t_21 = ATgetArgument(r_21, 1);
                      u_21 = ATgetArgument(r_21, 2);
                      k_21 :
                      if(match_int(s_21, 0))
                        {
                          t = not_null(m_21);
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
  t = fork_2(t, a_102, u_6);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym__2))
    {
      a_22 = ATgetArgument(z_21, 0);
      b_22 = ATgetArgument(z_21, 1);
      {
        ATerm v_6 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), not_null(b_22));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, v_6);
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
ATerm xtc_command_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm h_22 = NULL;
  ATerm v_37;
  v_37 = t;
  {
    ATerm i_22 = NULL;
    t = v_108(t);
    {
      t = xtc_find_warning_0(t);
      {
        i_22 = t;
        if(((h_22 != NULL) && (h_22 != i_22)))
          _fail(i_22);
        else
          h_22 = i_22;
      }
    }
  }
  t = v_37;
  {
    ATerm w_37;
    w_37 = t;
    {
      ATerm j_22 = NULL;
      ATerm k_22 = NULL;
      k_22 = t;
      if(((j_22 != NULL) && (j_22 != k_22)))
        _fail(k_22);
      else
        j_22 = k_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(j_22));
        t = call_0(t);
      }
    }
    t = w_37;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
        ATerm x_37;
        x_37 = t;
        {
          ATerm a_23 = NULL;
          ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
          t = k_97(t);
          {
            a_23 = t;
            {
              if(((x_22 != NULL) && (x_22 != a_23)))
                _fail(a_23);
              else
                x_22 = a_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), not_null(t_22), not_null(u_22));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_37 = t;
                    int a_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), term_i_27);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(a_38);
                      }
                    else
                      {
                        t = y_37;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_23 = t;
                      q_22 :
                      if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
                        {
                          c_23 = ATgetFirst((ATermList) b_23);
                          d_23 = (ATerm) ATgetNext((ATermList) b_23);
                          {
                            if(((y_22 != NULL) && (y_22 != c_23)))
                              _fail(c_23);
                            else
                              y_22 = c_23;
                            {
                              if(((z_22 != NULL) && (z_22 != d_23)))
                                _fail(d_23);
                              else
                                z_22 = d_23;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), term_i_27, (ATerm) ATinsert(CheckATermList(not_null(z_22)), (ATerm) ATinsert(CheckATermList(not_null(y_22)), not_null(t_22))));
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
        t = x_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm c_38;
  c_38 = t;
  {
    t = w_98(t);
    {
      ATerm c_7 (ATerm t)
      {
        t = term_f_38;
        return(t);
      }
      t = debug_1(t, c_7);
    }
  }
  t = c_38;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  ATerm u_23 (ATerm t)
  {
    ATerm g_38 = t;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
        p_23 = t;
        j_23 :
        if(match_cons(p_23, sym__2))
          {
            q_23 = ATgetArgument(p_23, 0);
            r_23 = ATgetArgument(p_23, 1);
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
        t = g_38;
      }
    {
      ATerm d_7 (ATerm t)
      {
        t = term_h_38;
        return(t);
      }
      t = obsolete_1(t, d_7);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), term_j_29);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm v_23 (ATerm t)
  {
    t = SSL_open_file(not_null(m_23), not_null(n_23));
    return(t);
  }
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm i_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_23(t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = i_38;
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm x_23 = NULL;
  ATerm y_23 = NULL;
  t = term_s_26;
  {
    t = new_0(t);
    {
      y_23 = t;
      if(((x_23 != NULL) && (x_23 != y_23)))
        _fail(y_23);
      else
        x_23 = y_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), term_m_38);
    {
      t = conc_strings_0(t);
      {
        ATerm e_7 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, e_7);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = new_file_0(t);
  {
    c_24 = t;
    {
      ATerm p_38;
      p_38 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), term_j_29);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), term_s_26);
            {
              ATerm f_7 (ATerm t)
              {
                t = term_h_27;
                return(t);
              }
              t = assert_1(t, f_7);
            }
          }
        }
      }
      t = p_38;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_stdin_0))
    {
      ATerm o_24 = NULL;
      ATerm p_24 = NULL;
      ATerm q_24 = NULL;
      t = xtc_new_file_0(t);
      {
        p_24 = t;
        {
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
          {
            ATerm r_24 = NULL;
            t = p_0(t);
            {
              r_24 = t;
              if(((q_24 != NULL) && (q_24 != r_24)))
                _fail(r_24);
              else
                q_24 = r_24;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_24)), term_c_20));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(o_24);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_24));
    }
  else
    {
      if(match_cons(m_24, sym_FILE_1))
        {
          n_24 = ATgetArgument(m_24, 0);
          {
            ATerm t_24 = NULL;
            ATerm u_24 = NULL;
            t = not_null(n_24);
            {
              ATerm v_24 = NULL;
              t = xtc_new_file_0(t);
              {
                u_24 = t;
                {
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                  {
                    ATerm w_24 = NULL;
                    t = p_0(t);
                    {
                      w_24 = t;
                      if(((v_24 != NULL) && (v_24 != w_24)))
                        _fail(w_24);
                      else
                        v_24 = w_24;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_24)), term_c_20), not_null(n_24)), term_q_38));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(t_24);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_24));
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
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_stdin_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm r_38;
      r_38 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = r_38;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_FILE_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      {
        ATerm z_25 = NULL,b_26 = NULL;
        ATerm a_26 = NULL;
        t = SSLgetAnnotations(not_null(v_25));
        {
          a_26 = t;
          if(((z_25 != NULL) && (z_25 != a_26)))
            _fail(a_26);
          else
            z_25 = a_26;
        }
        {
          t = not_null(w_25);
          {
            ATerm d_26 = NULL;
            t = e_71(t);
            {
              b_26 = t;
              {
                ATerm e_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(b_26)), not_null(z_25));
                {
                  e_26 = t;
                  if(((d_26 != NULL) && (d_26 != e_26)))
                    _fail(e_26);
                  else
                    d_26 = e_26;
                }
                t = not_null(d_26);
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
ATerm xtc_transform_2 (ATerm t, ATerm x_108 (ATerm), ATerm y_108 (ATerm))
{
  ATerm v_38 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(f_39);
        }
      else
        {
          t = e_39;
          t = stdin_0(t);
        }
      LocalPopChoice(d_39);
      t = xtc_transform_file_2(t, x_108, y_108);
    }
  else
    {
      t = v_38;
      t = xtc_transform_term_2(t, x_108, y_108);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm g_39;
    g_39 = t;
    {
      ATerm k_26 = NULL;
      ATerm l_26 = NULL;
      t = term_r_19;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), term_r_26);
        t = geq_0(t);
      }
    }
    t = g_39;
    t = i_100(t);
    return(t);
  }
  t = try_1(t, g_7);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_95 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, h_7);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm s_39 = t;
            int t_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm p_26 = NULL;
                  p_26 = t;
                  n_26 :
                  if(!(match_int(p_26, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, o_7, _id);
                ;
                LocalPopChoice(t_39);
              }
            else
              {
                t = s_39;
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm q_26 = NULL;
                    q_26 = t;
                    o_26 :
                    if(!(match_int(q_26, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, p_7, o_95);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, h_7);
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
  ATerm w_26 = NULL,x_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_FILE_1))
    {
      x_26 = ATgetArgument(w_26, 0);
      {
        ATerm z_26 = NULL,a_27 = NULL;
        ATerm b_27 = NULL;
        t = not_null(x_26);
        {
          ATerm c_27 = NULL;
          t = basename_0(t);
          {
            b_27 = t;
            {
              if(((z_26 != NULL) && (z_26 != b_27)))
                _fail(b_27);
              else
                z_26 = b_27;
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm r_7 (ATerm t)
                  {
                    t = term_u_39;
                    return(t);
                  }
                  t = debug_1(t, r_7);
                  return(t);
                }
                t = if_verbose3_1(t, q_7);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_39, not_null(z_26));
                  {
                    t = set_config_0(t);
                    {
                      ATerm a_40 = t;
                      int c_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_c_20;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(c_40);
                        }
                      else
                        {
                          t = a_40;
                          t = not_null(z_26);
                        }
                      {
                        c_27 = t;
                        {
                          if(((a_27 != NULL) && (a_27 != c_27)))
                            _fail(c_27);
                          else
                            a_27 = c_27;
                          {
                            ATerm u_7 (ATerm t)
                            {
                              ATerm v_7 (ATerm t)
                              {
                                t = term_f_40;
                                return(t);
                              }
                              t = debug_1(t, v_7);
                              return(t);
                            }
                            t = if_verbose3_1(t, u_7);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_u_27, not_null(a_27));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_26));
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
    ATerm y_7 (ATerm t)
    {
      t = term_g_40;
      return(t);
    }
    ATerm z_7 (ATerm t)
    {
      ATerm k_27 = NULL,m_27 = NULL,o_27 = NULL,q_27 = NULL;
      ATerm j_40;
      j_40 = t;
      {
        ATerm l_27 = NULL;
        t = dep_name_0(t);
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
      }
      t = j_40;
      {
        ATerm k_40;
        k_40 = t;
        {
          ATerm n_27 = NULL;
          t = pass_verbose_0(t);
          {
            n_27 = t;
            if(((m_27 != NULL) && (m_27 != n_27)))
              _fail(n_27);
            else
              m_27 = n_27;
          }
        }
        t = k_40;
        {
          ATerm p_40;
          p_40 = t;
          {
            ATerm p_27 = NULL;
            t = pass_keep_0(t);
            {
              p_27 = t;
              if(((o_27 != NULL) && (o_27 != p_27)))
                _fail(p_27);
              else
                o_27 = p_27;
            }
          }
          t = p_40;
          {
            ATerm v_27 = NULL;
            t = term_q_40;
            {
              t = get_config_0(t);
              {
                v_27 = t;
                if(((q_27 != NULL) && (q_27 != v_27)))
                  _fail(v_27);
                else
                  q_27 = v_27;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_27)), not_null(m_27)), not_null(q_27)), not_null(k_27));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, y_7, z_7);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      t = term_r_40;
      return(t);
    }
    t = debug_1(t, d_8);
    return(t);
  }
  t = if_verbose2_1(t, c_8);
  {
    ATerm e_8 (ATerm t)
    {
      ATerm m_8 (ATerm t)
      {
        ATerm p_28 = NULL;
        ATerm q_28 = NULL;
        q_28 = t;
        if(((p_28 != NULL) && (p_28 != q_28)))
          _fail(q_28);
        else
          p_28 = q_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(CheckATermList(not_null(p_28)), term_s_40));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, m_8);
      return(t);
    }
    ATerm f_8 (ATerm t)
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
    t = profile_p__2(t, e_8, f_8);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
    {
      v_28 = ATgetFirst((ATermList) u_28);
      w_28 = (ATerm) ATgetNext((ATermList) u_28);
      t = not_null(w_28);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      {
        ATerm y_40;
        y_40 = t;
        {
          ATerm h_29 = NULL;
          ATerm i_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), not_null(e_29));
          {
            ATerm z_40 = t;
            int c_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(c_41);
              }
            else
              {
                t = z_40;
                t = (ATerm) ATempty;
              }
            {
              i_29 = t;
              if(((h_29 != NULL) && (h_29 != i_29)))
                _fail(i_29);
              else
                h_29 = i_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_29), not_null(e_29), not_null(h_29));
            t = table_put_0(t);
          }
        }
        t = y_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm h_97 (ATerm))
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  ATerm d_41;
  d_41 = t;
  {
    ATerm s_29 = NULL;
    ATerm t_29 = NULL,z_29 = NULL,a_30 = NULL;
    t = h_97(t);
    {
      s_29 = t;
      {
        if(((r_29 != NULL) && (r_29 != s_29)))
          _fail(s_29);
        else
          r_29 = s_29;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), term_i_27);
              t = table_get_0(t);
              ;
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_29 = t;
            o_29 :
            if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
              {
                z_29 = ATgetFirst((ATermList) t_29);
                a_30 = (ATerm) ATgetNext((ATermList) t_29);
                {
                  if(((q_29 != NULL) && (q_29 != z_29)))
                    _fail(z_29);
                  else
                    q_29 = z_29;
                  {
                    if(((p_29 != NULL) && (p_29 != a_30)))
                      _fail(a_30);
                    else
                      p_29 = a_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_29), term_i_27, not_null(p_29));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(q_29);
                          {
                            ATerm n_8 (ATerm t)
                            {
                              ATerm b_30 = NULL;
                              b_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(b_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_8);
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
  t = d_41;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_remove(not_null(i_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm k_41 = t;
  int l_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      ;
      LocalPopChoice(l_41);
    }
  else
    {
      t = k_41;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm q_30 = NULL;
  ATerm q_41;
  q_41 = t;
  {
    ATerm s_30 = NULL;
    ATerm t_30 = NULL;
    t = g_97(t);
    {
      s_30 = t;
      {
        if(((q_30 != NULL) && (q_30 != s_30)))
          _fail(s_30);
        else
          q_30 = s_30;
        {
          ATerm u_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), term_i_27);
          {
            ATerm r_41 = t;
            int t_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_41);
              }
            else
              {
                t = r_41;
                t = (ATerm) ATempty;
              }
            {
              u_30 = t;
              if(((t_30 != NULL) && (t_30 != u_30)))
                _fail(u_30);
              else
                t_30 = u_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_30), term_i_27, (ATerm) ATinsert(CheckATermList(not_null(t_30)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = q_41;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm o_8 (ATerm t)
  {
    t = term_h_27;
    return(t);
  }
  t = begin_scope_1(t, o_8);
  {
    ATerm p_8 (ATerm t)
    {
      ATerm u_41;
      u_41 = t;
      {
        ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_27;
            t = table_get_0(t);
            ;
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          b_31 = t;
          y_30 :
          if(((ATgetType(b_31) == AT_LIST) && !(ATisEmpty(b_31))))
            {
              c_31 = ATgetFirst((ATermList) b_31);
              d_31 = (ATerm) ATgetNext((ATermList) b_31);
              {
                if(((a_31 != NULL) && (a_31 != c_31)))
                  _fail(c_31);
                else
                  a_31 = c_31;
                {
                  if(((z_30 != NULL) && (z_30 != d_31)))
                    _fail(d_31);
                  else
                    z_30 = d_31;
                  {
                    t = not_null(a_31);
                    {
                      ATerm s_8 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, s_8);
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
      t = u_41;
      {
        ATerm t_8 (ATerm t)
        {
          t = term_h_27;
          return(t);
        }
        t = end_scope_1(t, t_8);
      }
      return(t);
    }
    t = restore_always_2(t, h_108, p_8);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        ATerm h_31 = NULL;
        t = term_q_38;
        {
          t = get_config_0(t);
          {
            h_31 = t;
            if(((g_31 != NULL) && (g_31 != h_31)))
              _fail(h_31);
            else
              g_31 = h_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_31));
        ;
        LocalPopChoice(c_42);
      }
    else
      {
        t = b_42;
        t = term_g_29;
      }
    t = k_108(t);
    return(t);
  }
  t = xtc_temp_files_1(t, w_8);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm x_8 (ATerm t)
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
  t = xtc_input_1(t, x_8);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm d_42;
    d_42 = t;
    {
      ATerm k_31 = NULL;
      ATerm l_31 = NULL;
      t = term_r_19;
      {
        t = get_config_0(t);
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), term_s_28);
        t = geq_0(t);
      }
    }
    t = d_42;
    t = g_100(t);
    return(t);
  }
  t = try_1(t, a_9);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_TicksToSeconds(not_null(o_31));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym__4))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      w_31 = ATgetArgument(t_31, 2);
      x_31 = ATgetArgument(t_31, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_31), not_null(x_31));
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
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym__2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_32), not_null(h_32));
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            t = SSL_addr(not_null(g_32), not_null(h_32));
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym__4))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      q_32 = ATgetArgument(n_32, 2);
      r_32 = ATgetArgument(n_32, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), not_null(q_32));
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
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      {
        ATerm h_42 = t;
        int n_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_33), not_null(b_33));
            ;
            LocalPopChoice(n_42);
          }
        else
          {
            t = h_42;
            t = SSL_subtr(not_null(a_33), not_null(b_33));
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
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  n_33 = t;
  k_33 :
  if(match_cons(n_33, sym__2))
    {
      o_33 = ATgetArgument(n_33, 0);
      t_33 = ATgetArgument(n_33, 1);
      l_33 :
      if(match_cons(o_33, sym__4))
        {
          p_33 = ATgetArgument(o_33, 0);
          q_33 = ATgetArgument(o_33, 1);
          r_33 = ATgetArgument(o_33, 2);
          s_33 = ATgetArgument(o_33, 3);
          m_33 :
          if(match_cons(t_33, sym__4))
            {
              u_33 = ATgetArgument(t_33, 0);
              v_33 = ATgetArgument(t_33, 1);
              w_33 = ATgetArgument(t_33, 2);
              x_33 = ATgetArgument(t_33, 3);
              {
                ATerm g_34 = NULL,i_34 = NULL,k_34 = NULL,m_34 = NULL;
                ATerm o_42;
                o_42 = t;
                {
                  ATerm h_34 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_33), not_null(u_33));
                  {
                    t = subt_0(t);
                    {
                      h_34 = t;
                      if(((g_34 != NULL) && (g_34 != h_34)))
                        _fail(h_34);
                      else
                        g_34 = h_34;
                    }
                  }
                }
                t = o_42;
                {
                  ATerm p_42;
                  p_42 = t;
                  {
                    ATerm j_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(v_33));
                    {
                      t = subt_0(t);
                      {
                        j_34 = t;
                        if(((i_34 != NULL) && (i_34 != j_34)))
                          _fail(j_34);
                        else
                          i_34 = j_34;
                      }
                    }
                  }
                  t = p_42;
                  {
                    ATerm q_42;
                    q_42 = t;
                    {
                      ATerm l_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), not_null(w_33));
                      {
                        t = subt_0(t);
                        {
                          l_34 = t;
                          if(((k_34 != NULL) && (k_34 != l_34)))
                            _fail(l_34);
                          else
                            k_34 = l_34;
                        }
                      }
                    }
                    t = q_42;
                    {
                      ATerm n_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(x_33));
                      {
                        t = subt_0(t);
                        {
                          n_34 = t;
                          if(((m_34 != NULL) && (m_34 != n_34)))
                            _fail(n_34);
                          else
                            m_34 = n_34;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(g_34), not_null(i_34), not_null(k_34), not_null(m_34));
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
ATerm profile_p__2 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm))
{
  ATerm x_34 = NULL;
  ATerm r_42;
  r_42 = t;
  {
    ATerm y_34 = NULL;
    t = times_0(t);
    {
      y_34 = t;
      if(((x_34 != NULL) && (x_34 != y_34)))
        _fail(y_34);
      else
        x_34 = y_34;
    }
  }
  t = r_42;
  {
    t = b_104(t);
    {
      ATerm s_42;
      s_42 = t;
      {
        ATerm z_34 = NULL,d_35 = NULL,i_35 = NULL;
        ATerm c_35 = NULL;
        t = times_0(t);
        {
          c_35 = t;
          if(((z_34 != NULL) && (z_34 != c_35)))
            _fail(c_35);
          else
            z_34 = c_35;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(x_34));
          {
            t = diff_times_0(t);
            {
              ATerm u_42;
              u_42 = t;
              {
                ATerm h_35 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    h_35 = t;
                    if(((d_35 != NULL) && (d_35 != h_35)))
                      _fail(h_35);
                    else
                      d_35 = h_35;
                  }
                }
              }
              t = u_42;
              {
                ATerm j_35 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    j_35 = t;
                    if(((i_35 != NULL) && (i_35 != j_35)))
                      _fail(j_35);
                    else
                      i_35 = j_35;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_35)), term_z_42), not_null(d_35)), term_y_42);
                  t = a_104(t);
                }
              }
            }
          }
        }
      }
      t = s_42;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm a_43;
  a_43 = t;
  {
    ATerm q_35 = NULL,s_35 = NULL;
    ATerm b_43;
    b_43 = t;
    {
      ATerm r_35 = NULL;
      t = p_98(t);
      {
        r_35 = t;
        if(((q_35 != NULL) && (q_35 != r_35)))
          _fail(r_35);
        else
          q_35 = r_35;
      }
    }
    t = b_43;
    {
      ATerm t_35 = NULL;
      t_35 = t;
      if(((s_35 != NULL) && (s_35 != t_35)))
        _fail(t_35);
      else
        s_35 = t_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_35)), not_null(q_35)));
        t = printnl_0(t);
      }
    }
  }
  t = a_43;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_43);
    }
  else
    {
      t = c_43;
      {
        ATerm j_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_9);
            ;
            LocalPopChoice(n_43);
          }
        else
          {
            t = j_43;
            {
              ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
              e_36 = t;
              d_36 :
              if(match_cons(e_36, sym_Path_1))
                {
                  f_36 = ATgetArgument(e_36, 0);
                  t = not_null(f_36);
                }
              else
                {
                  if(match_cons(e_36, sym_Var_1))
                    {
                      f_36 = ATgetArgument(e_36, 0);
                      {
                        t = not_null(f_36);
                        {
                          ATerm o_43 = t;
                          int p_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(p_43);
                            }
                          else
                            {
                              t = o_43;
                              {
                                ATerm e_9 (ATerm t)
                                {
                                  t = term_q_43;
                                  return(t);
                                }
                                t = debug_1(t, e_9);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_36, sym_Prefix_2))
                        {
                          f_36 = ATgetArgument(e_36, 0);
                          g_36 = ATgetArgument(e_36, 1);
                          {
                            ATerm l_36 = NULL,n_36 = NULL;
                            ATerm r_43;
                            r_43 = t;
                            {
                              ATerm m_36 = NULL;
                              t = not_null(f_36);
                              {
                                t = eval_config_0(t);
                                {
                                  m_36 = t;
                                  if(((l_36 != NULL) && (l_36 != m_36)))
                                    _fail(m_36);
                                  else
                                    l_36 = m_36;
                                }
                              }
                            }
                            t = r_43;
                            {
                              ATerm o_36 = NULL;
                              t = not_null(g_36);
                              {
                                t = eval_config_0(t);
                                {
                                  o_36 = t;
                                  if(((n_36 != NULL) && (n_36 != o_36)))
                                    _fail(o_36);
                                  else
                                    n_36 = o_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_36), not_null(n_36));
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
  ATerm w_36 = NULL;
  w_36 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_43, not_null(w_36));
    {
      t = table_get_0(t);
      {
        ATerm f_9 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_43;
            v_43 = t;
            {
              ATerm y_36 = NULL;
              ATerm z_36 = NULL;
              z_36 = t;
              if(((y_36 != NULL) && (y_36 != z_36)))
                _fail(z_36);
              else
                y_36 = z_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_43, not_null(w_36), not_null(y_36));
                t = table_put_0(t);
              }
            }
            t = v_43;
          }
          return(t);
        }
        t = try_1(t, f_9);
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
  ATerm w_43;
  w_43 = t;
  {
    t = error_0(t);
    {
      t = term_s_28;
      t = exit_0(t);
    }
  }
  t = w_43;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_44;
      c_44 = t;
      {
        ATerm e_37 = NULL;
        ATerm f_37 = NULL;
        t = term_d_44;
        {
          t = get_config_0(t);
          {
            f_37 = t;
            if(((e_37 != NULL) && (e_37 != f_37)))
              _fail(f_37);
            else
              e_37 = f_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_44), term_o_44), term_n_44), term_m_44), term_l_44), term_k_44), term_g_44), not_null(e_37)), term_e_44));
          t = printnl_0(t);
        }
      }
      t = c_44;
      ;
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
      {
        ATerm g_37 = NULL;
        g_37 = t;
        d_37 :
        if(!(match_string(g_37, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(s_44);
    }
  else
    {
      t = r_44;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym__2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      t = SSL_copy(not_null(l_37), not_null(m_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_table_keys(not_null(t_37));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  {
    t = table_keys_0(t);
    {
      ATerm i_9 (ATerm t)
      {
        ATerm b_38 = NULL;
        ATerm d_38 = NULL;
        b_38 = t;
        {
          ATerm e_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_37), not_null(b_38));
          {
            t = table_get_0(t);
            {
              e_38 = t;
              if(((d_38 != NULL) && (d_38 != e_38)))
                _fail(e_38);
              else
                d_38 = e_38;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_38), not_null(d_38));
        }
        return(t);
      }
      t = map_1(t, i_9);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm j_9 (ATerm t)
  {
    ATerm w_44;
    w_44 = t;
    {
      ATerm j_38 = NULL;
      ATerm k_38 = NULL;
      t = term_r_19;
      {
        t = get_config_0(t);
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), term_p_36);
        t = geq_0(t);
      }
    }
    t = w_44;
    t = k_100(t);
    return(t);
  }
  t = try_1(t, j_9);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm x_44;
  x_44 = t;
  {
    ATerm n_38 = NULL;
    ATerm o_38 = NULL;
    o_38 = t;
    if(((n_38 != NULL) && (n_38 != o_38)))
      _fail(o_38);
    else
      n_38 = o_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_20, not_null(n_38));
      t = printnl_0(t);
    }
  }
  t = x_44;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm w_38 = NULL,x_38 = NULL;
  u_38 = t;
  {
    ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_44, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_38)));
    {
      t = table_get_0(t);
      {
        y_38 = t;
        s_38 :
        if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
          {
            z_38 = ATgetFirst((ATermList) y_38);
            c_39 = (ATerm) ATgetNext((ATermList) y_38);
            t_38 :
            if(match_cons(z_38, sym__2))
              {
                a_39 = ATgetArgument(z_38, 0);
                b_39 = ATgetArgument(z_38, 1);
                {
                  if(((w_38 != NULL) && (w_38 != a_39)))
                    _fail(a_39);
                  else
                    w_38 = a_39;
                  if(((x_38 != NULL) && (x_38 != b_39)))
                    _fail(b_39);
                  else
                    x_38 = b_39;
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
    t = not_null(x_38);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  i_39 :
  if(match_cons(j_39, sym__2))
    {
      k_39 = ATgetArgument(j_39, 0);
      l_39 = ATgetArgument(j_39, 1);
      {
        ATerm o_39 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_y_44, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_39)));
        {
          t = table_get_0(t);
          {
            ATerm m_9 (ATerm t)
            {
              ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
              p_39 = t;
              h_39 :
              if(match_cons(p_39, sym__2))
                {
                  q_39 = ATgetArgument(p_39, 0);
                  r_39 = ATgetArgument(p_39, 1);
                  {
                    if(((l_39 != NULL) && (l_39 != q_39)))
                      _fail(q_39);
                    else
                      l_39 = q_39;
                    if(((o_39 != NULL) && (o_39 != r_39)))
                      _fail(r_39);
                    else
                      o_39 = r_39;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, m_9);
          }
        }
        t = not_null(o_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm z_44 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_45);
    }
  else
    {
      t = z_44;
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 (ATerm t)
            {
              t = filter_1(t, v_93);
              return(t);
            }
            t = Cons_2(t, v_93, n_9);
            ;
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            {
              ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
              w_39 = t;
              v_39 :
              if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
                {
                  x_39 = ATgetFirst((ATermList) w_39);
                  y_39 = (ATerm) ATgetNext((ATermList) w_39);
                  {
                    t = not_null(y_39);
                    t = filter_1(t, v_93);
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
ATerm repeat_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm b_40 (ATerm t)
  {
    ATerm q_9 (ATerm t)
    {
      t = c_80(t);
      t = b_40(t);
      return(t);
    }
    t = try_1(t, q_9);
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm g_45;
  g_45 = t;
  {
    ATerm r_9 (ATerm t)
    {
      t = term_i_45;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm l_45 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_45;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, r_9);
  }
  t = g_45;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm m_45;
  m_45 = t;
  {
    ATerm d_40 = NULL;
    ATerm e_40 = NULL;
    e_40 = t;
    if(((d_40 != NULL) && (d_40 != e_40)))
      _fail(e_40);
    else
      d_40 = e_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATempty, not_null(d_40)));
      t = printnl_0(t);
    }
  }
  t = m_45;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm p_45;
  p_45 = t;
  {
    t = t_98(t);
    t = debug_0(t);
  }
  t = p_45;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    ATerm q_45;
    q_45 = t;
    {
      ATerm h_40 = NULL;
      ATerm i_40 = NULL;
      t = term_r_19;
      {
        t = get_config_0(t);
        {
          i_40 = t;
          if(((h_40 != NULL) && (h_40 != i_40)))
            _fail(i_40);
          else
            h_40 = i_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), term_v_32);
        t = geq_0(t);
      }
    }
    t = q_45;
    t = j_100(t);
    return(t);
  }
  t = try_1(t, u_9);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym__2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm r_45;
        r_45 = t;
        {
          ATerm s_45 = t;
          int v_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_40), not_null(o_40));
              ;
              LocalPopChoice(v_45);
            }
          else
            {
              t = s_45;
              t = SSL_gtr(not_null(n_40), not_null(o_40));
            }
        }
        t = r_45;
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
  ATerm u_40 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
      v_40 = t;
      t_40 :
      if(match_cons(v_40, sym__2))
        {
          w_40 = ATgetArgument(v_40, 0);
          x_40 = ATgetArgument(v_40, 1);
          {
            if(((u_40 != NULL) && (u_40 != w_40)))
              _fail(w_40);
            else
              u_40 = w_40;
            if(((u_40 != NULL) && (u_40 != x_40)))
              _fail(x_40);
            else
              u_40 = x_40;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm v_9 (ATerm t)
  {
    ATerm y_45;
    y_45 = t;
    {
      ATerm a_41 = NULL;
      ATerm b_41 = NULL;
      t = term_r_19;
      {
        t = get_config_0(t);
        {
          b_41 = t;
          if(((a_41 != NULL) && (a_41 != b_41)))
            _fail(b_41);
          else
            a_41 = b_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_41), term_k_30);
        t = geq_0(t);
      }
    }
    t = y_45;
    t = l_100(t);
    return(t);
  }
  t = try_1(t, v_9);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym__2))
    {
      g_41 = ATgetArgument(f_41, 0);
      h_41 = ATgetArgument(f_41, 1);
      if(((g_41 != NULL) && (g_41 != h_41)))
        _fail(h_41);
      else
        g_41 = h_41;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
    {
      o_41 = ATgetFirst((ATermList) n_41);
      p_41 = (ATerm) ATgetNext((ATermList) n_41);
      {
        t = z_90(t);
        {
          ATerm y_9 (ATerm t)
          {
            ATerm s_41 = NULL;
            s_41 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_41), not_null(s_41));
              t = y_90(t);
            }
            return(t);
          }
          t = fetch_1(t, y_9);
        }
        t = not_null(p_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym__2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        t = not_null(z_41);
        {
          ATerm e_42 (ATerm t)
          {
            ATerm z_45 = t;
            int a_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_42);
                ;
                LocalPopChoice(a_46);
              }
            else
              {
                t = z_45;
                {
                  ATerm b_46 = t;
                  int c_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_9 (ATerm t)
                      {
                        t = not_null(a_42);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_90, z_9);
                      t = e_42(t);
                      ;
                      LocalPopChoice(c_46);
                    }
                  else
                    {
                      t = b_46;
                      t = Cons_2(t, _id, e_42);
                    }
                }
              }
            return(t);
          }
          t = e_42(t);
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
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym__3))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      m_42 = ATgetArgument(j_42, 2);
      {
        ATerm d_46;
        d_46 = t;
        {
          ATerm t_42 = NULL;
          ATerm v_42 = NULL,x_42 = NULL;
          ATerm w_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_42), not_null(l_42));
          {
            ATerm e_46 = t;
            int f_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(f_46);
              }
            else
              {
                t = e_46;
                t = (ATerm) ATempty;
              }
            {
              w_42 = t;
              if(((v_42 != NULL) && (v_42 != w_42)))
                _fail(w_42);
              else
                v_42 = w_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(m_42));
            {
              t = union_0(t);
              {
                x_42 = t;
                if(((t_42 != NULL) && (t_42 != x_42)))
                  _fail(x_42);
                else
                  t_42 = x_42;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_42), not_null(l_42), not_null(t_42));
            t = set_0(t);
          }
        }
        t = d_46;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm j_105 (ATerm))
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym__2))
    {
      g_43 = ATgetArgument(f_43, 0);
      h_43 = ATgetArgument(f_43, 1);
      {
        t = not_null(h_43);
        {
          ATerm c_10 (ATerm t)
          {
            ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
            k_43 = t;
            d_43 :
            if(match_cons(k_43, sym__2))
              {
                l_43 = ATgetArgument(k_43, 0);
                m_43 = ATgetArgument(k_43, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_43), not_null(l_43), not_null(m_43));
                  t = j_105(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_10);
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
  ATerm s_43 = NULL;
  ATerm t_43 = NULL;
  t_43 = t;
  if(((s_43 != NULL) && (s_43 != t_43)))
    _fail(t_43);
  else
    s_43 = t_43;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_43), (ATerm) ATinsert(ATempty, term_g_46));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  ATerm f_44 (ATerm t)
  {
    t = SSL_fclose(not_null(z_43));
    return(t);
  }
  z_43 = t;
  x_43 :
  if(match_cons(z_43, sym_Stream_1))
    {
      y_43 = ATgetArgument(z_43, 0);
      {
        ATerm h_46 = t;
        int i_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(y_43));
            ;
            LocalPopChoice(i_46);
          }
        else
          {
            t = h_46;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  i_44 = t;
  h_44 :
  if(match_cons(i_44, sym_Stream_1))
    {
      j_44 = ATgetArgument(i_44, 0);
      t = SSL_read_term_from_stream(not_null(j_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  q_44 :
  if(match_cons(t_44, sym__2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm a_45 = NULL;
        t = SSL_fopen(not_null(u_44), not_null(v_44));
        {
          ATerm b_45 = NULL;
          b_45 = t;
          if(((a_45 != NULL) && (a_45 != b_45)))
            _fail(b_45);
          else
            a_45 = b_45;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_45));
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
  ATerm f_45 = NULL;
  f_45 = t;
  t = SSL_is_string(not_null(f_45));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm k_45 = NULL;
    k_45 = t;
    if(((j_45 != NULL) && (j_45 != k_45)))
      _fail(k_45);
    else
      j_45 = k_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_45));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm o_45 = NULL;
    o_45 = t;
    if(((n_45 != NULL) && (n_45 != o_45)))
      _fail(o_45);
    else
      n_45 = o_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_45));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm u_45 = NULL;
    u_45 = t;
    if(((t_45 != NULL) && (t_45 != u_45)))
      _fail(u_45);
    else
      t_45 = u_45;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_45));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_46, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_46, sym_stdin_0))
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
  ATerm v_46 = NULL;
  ATerm b_47 = NULL,c_47 = NULL;
  v_46 = t;
  {
    ATerm d_47 = NULL;
    ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
    t = not_null(v_46);
    {
      d_47 = t;
      {
        t = SSL_explode_term(not_null(d_47));
        {
          f_47 = t;
          s_46 :
          if(match_cons(f_47, sym__2))
            {
              g_47 = ATgetArgument(f_47, 0);
              h_47 = ATgetArgument(f_47, 1);
              t_46 :
              if(match_string(g_47, ""))
                {
                  u_46 :
                  if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
                    {
                      i_47 = ATgetFirst((ATermList) h_47);
                      j_47 = (ATerm) ATgetNext((ATermList) h_47);
                      {
                        if(((c_47 != NULL) && (c_47 != i_47)))
                          _fail(i_47);
                        else
                          c_47 = i_47;
                        if(((b_47 != NULL) && (b_47 != j_47)))
                          _fail(j_47);
                        else
                          b_47 = j_47;
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
    t = not_null(c_47);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym__2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      {
        ATerm j_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_46);
          }
        else
          {
            t = j_46;
            {
              ATerm n_46 = t;
              int o_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_10 (ATerm t)
                  {
                    ATerm w_47 = NULL,b_48 = NULL;
                    w_47 = t;
                    r_47 :
                    if(match_cons(w_47, sym_Path_1))
                      {
                        b_48 = ATgetArgument(w_47, 0);
                        t = not_null(b_48);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, d_10, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(o_46);
                }
              else
                {
                  t = n_46;
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
  ATerm p_48 = NULL;
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_48 = NULL;
      ATerm m_48 = NULL;
      m_48 = t;
      if(((l_48 != NULL) && (l_48 != m_48)))
        _fail(m_48);
      else
        l_48 = m_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_48), term_r_46);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm e_10 (ATerm t)
        {
          t = term_w_46;
          return(t);
        }
        t = debug_1(t, e_10);
        _fail(t);
      }
    }
  {
    ATerm x_46;
    x_46 = t;
    {
      ATerm q_48 = NULL;
      t = read_from_stream_0(t);
      {
        q_48 = t;
        if(((p_48 != NULL) && (p_48 != q_48)))
          _fail(q_48);
        else
          p_48 = q_48;
      }
    }
    t = x_46;
    {
      t = fclose_0(t);
      t = not_null(p_48);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  u_48 :
  if(match_cons(v_48, sym__2))
    {
      w_48 = ATgetArgument(v_48, 0);
      x_48 = ATgetArgument(v_48, 1);
      t = SSL_access(not_null(w_48), not_null(x_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm c_49 = NULL;
  ATerm d_49 = NULL;
  d_49 = t;
  if(((c_49 != NULL) && (c_49 != d_49)))
    _fail(d_49);
  else
    c_49 = d_49;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), (ATerm) ATinsert(ATempty, term_y_46));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(a_47);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = z_46;
      {
        ATerm e_47 = t;
        int k_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_47 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_47;
              }
            {
              ATerm f_10 (ATerm t)
              {
                t = term_m_47;
                return(t);
              }
              t = debug_1(t, f_10);
            }
            ;
            LocalPopChoice(k_47);
          }
        else
          {
            t = e_47;
            {
              ATerm m_10 (ATerm t)
              {
                t = term_n_47;
                return(t);
              }
              t = debug_1(t, m_10);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm h_49 = NULL;
  ATerm j_49 = NULL;
  h_49 = t;
  {
    ATerm n_10 (ATerm t)
    {
      ATerm o_10 (ATerm t)
      {
        t = term_o_47;
        return(t);
      }
      t = debug_1(t, o_10);
      return(t);
    }
    t = if_verbose5_1(t, n_10);
    {
      ATerm p_47 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_44, (ATerm) ATmakeAppl(sym_Imported_1, not_null(h_49)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_47;
        }
      {
        ATerm q_47;
        q_47 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_44, term_x_47, (ATerm) ATinsert(ATempty, not_null(h_49)));
          t = table_put_0(t);
        }
        t = q_47;
        {
          ATerm p_10 (ATerm t)
          {
            ATerm s_10 (ATerm t)
            {
              t = term_y_47;
              return(t);
            }
            t = debug_1(t, s_10);
            return(t);
          }
          t = if_verbose4_1(t, p_10);
          {
            t = read_repository_file_0(t);
            {
              ATerm t_10 (ATerm t)
              {
                ATerm w_10 (ATerm t)
                {
                  t = term_z_47;
                  return(t);
                }
                t = say_1(t, w_10);
                return(t);
              }
              t = if_verbose6_1(t, t_10);
              {
                ATerm k_49 = NULL;
                k_49 = t;
                if(((j_49 != NULL) && (j_49 != k_49)))
                  _fail(k_49);
                else
                  j_49 = k_49;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_44, not_null(j_49));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm x_10 (ATerm t)
                      {
                        ATerm a_11 (ATerm t)
                        {
                          t = term_a_48;
                          return(t);
                        }
                        t = say_1(t, a_11);
                        return(t);
                      }
                      t = if_verbose6_1(t, x_10);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_y_44, (ATerm)ATmakeAppl(sym_Imported_1, not_null(h_49)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm b_11 (ATerm t)
                            {
                              ATerm e_11 (ATerm t)
                              {
                                t = term_z_47;
                                return(t);
                              }
                              t = say_1(t, e_11);
                              return(t);
                            }
                            t = if_verbose4_1(t, b_11);
                          }
                        }
                      }
                    }
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
  ATerm o_49 = NULL;
  o_49 = t;
  t = SSL_getenv(not_null(o_49));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_48;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_h_48;
            t = getenv_0(t);
            ;
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm g_11 (ATerm t)
    {
      t = term_i_48;
      return(t);
    }
    t = debug_1(t, g_11);
    return(t);
  }
  t = if_verbose5_1(t, f_11);
  {
    ATerm j_48;
    j_48 = t;
    {
      ATerm k_48 = t;
      int n_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_48;
          t = table_get_0(t);
          ;
          LocalPopChoice(n_48);
        }
      else
        {
          t = k_48;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = j_48;
    {
      ATerm l_11 (ATerm t)
      {
        ATerm m_11 (ATerm t)
        {
          t = term_r_48;
          return(t);
        }
        t = debug_1(t, m_11);
        return(t);
      }
      t = if_verbose5_1(t, l_11);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 (ATerm t)
      {
        ATerm q_11 (ATerm t)
        {
          t = term_y_48;
          return(t);
        }
        t = debug_1(t, q_11);
        return(t);
      }
      t = if_verbose5_1(t, n_11);
      {
        t = xtc_load_0(t);
        {
          ATerm z_48 = t;
          int a_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(a_49);
            }
          else
            {
              t = z_48;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm r_11 (ATerm t)
            {
              ATerm s_11 (ATerm t)
              {
                t = term_y_48;
                return(t);
              }
              t = debug_1(t, s_11);
              return(t);
            }
            t = if_verbose5_1(t, r_11);
          }
        }
      }
      ;
      LocalPopChoice(t_48);
    }
  else
    {
      t = s_48;
      {
        ATerm s_49 = NULL;
        ATerm t_49 = NULL;
        t_49 = t;
        if(((s_49 != NULL) && (s_49 != t_49)))
          _fail(t_49);
        else
          s_49 = t_49;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_49), not_null(s_49)), term_b_49);
          {
            t = error_0(t);
            {
              ATerm w_11 (ATerm t)
              {
                t = term_y_44;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm z_11 (ATerm t)
                    {
                      t = term_f_49;
                      return(t);
                    }
                    t = debug_1(t, z_11);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, w_11);
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
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  y_49 :
  if(match_cons(z_49, sym__2))
    {
      a_50 = ATgetArgument(z_49, 0);
      b_50 = ATgetArgument(z_49, 1);
      {
        ATerm e_50 = NULL;
        ATerm f_50 = NULL,h_50 = NULL;
        ATerm g_50 = NULL;
        t = not_null(a_50);
        {
          ATerm g_49 = t;
          int i_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(i_49);
            }
          else
            {
              t = g_49;
              t = (ATerm) ATempty;
            }
          {
            g_50 = t;
            if(((f_50 != NULL) && (f_50 != g_50)))
              _fail(g_50);
            else
              f_50 = g_50;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_50), not_null(f_50));
          {
            t = conc_0(t);
            {
              h_50 = t;
              if(((e_50 != NULL) && (e_50 != h_50)))
                _fail(h_50);
              else
                e_50 = h_50;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_43, not_null(a_50), not_null(e_50));
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
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  q_50 = t;
  o_50 :
  if(match_string(q_50, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_50) == AT_LIST) && !(ATisEmpty(q_50))))
        {
          r_50 = ATgetFirst((ATermList) q_50);
          s_50 = (ATerm) ATgetNext((ATermList) q_50);
          p_50 :
          if(((ATgetType(s_50) == AT_LIST) && !(ATisEmpty(s_50))))
            {
              t_50 = ATgetFirst((ATermList) s_50);
              u_50 = (ATerm) ATgetNext((ATermList) s_50);
              {
                ATerm y_50 = NULL;
                ATerm l_49;
                l_49 = t;
                {
                  t = not_null(r_50);
                  t = l_0(t);
                }
                t = l_49;
                {
                  ATerm z_50 = NULL;
                  t = not_null(t_50);
                  {
                    t = m_0(t);
                    {
                      z_50 = t;
                      if(((y_50 != NULL) && (y_50 != z_50)))
                        _fail(z_50);
                      else
                        y_50 = z_50;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_50)), not_null(y_50));
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
  ATerm i_51 = NULL;
  i_51 = t;
  t = SSL_string_to_int(not_null(i_51));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  ATerm m_49;
  m_49 = t;
  {
    ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
    s_51 = t;
    p_51 :
    if(match_cons(s_51, sym__2))
      {
        t_51 = ATgetArgument(s_51, 0);
        u_51 = ATgetArgument(s_51, 1);
        {
          if(((q_51 != NULL) && (q_51 != t_51)))
            _fail(t_51);
          else
            q_51 = t_51;
          {
            if(((r_51 != NULL) && (r_51 != u_51)))
              _fail(u_51);
            else
              r_51 = u_51;
            t = SSL_table_remove(not_null(q_51), not_null(r_51));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_49;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym__2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      {
        ATerm n_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(z_51);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_43, not_null(z_51));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = n_49;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), not_null(a_52));
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
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_cons(i_52, sym__2))
    {
      j_52 = ATgetArgument(i_52, 0);
      k_52 = ATgetArgument(i_52, 1);
      {
        ATerm a_53 = NULL;
        ATerm b_53 = NULL,f_53 = NULL;
        ATerm c_53 = NULL;
        t = not_null(j_52);
        {
          ATerm q_49 = t;
          int r_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(r_49);
            }
          else
            {
              t = q_49;
              t = (ATerm) ATempty;
            }
          {
            c_53 = t;
            if(((b_53 != NULL) && (b_53 != c_53)))
              _fail(c_53);
            else
              b_53 = c_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_53), not_null(k_52));
          {
            t = conc_0(t);
            {
              f_53 = t;
              if(((a_53 != NULL) && (a_53 != f_53)))
                _fail(f_53);
              else
                a_53 = f_53;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_43, not_null(j_52), not_null(a_53));
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
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 (ATerm t)
      {
        ATerm n_55 = NULL;
        n_55 = t;
        m_53 :
        if(!(match_string(n_55, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm b_12 (ATerm t)
      {
        ATerm o_55 = NULL;
        ATerm p_55 = NULL;
        p_55 = t;
        if(((o_55 != NULL) && (o_55 != p_55)))
          _fail(p_55);
        else
          o_55 = p_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_38, not_null(o_55));
          t = set_config_0(t);
        }
        t = term_s_26;
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        t = term_w_49;
        return(t);
      }
      t = ArgOption_3(t, a_12, b_12, c_12);
      ;
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm x_49 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 (ATerm t)
            {
              ATerm q_55 = NULL;
              q_55 = t;
              t_53 :
              if(!(match_string(q_55, "-o")))
                {
                  if(!(match_string(q_55, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_12 (ATerm t)
            {
              ATerm r_55 = NULL;
              ATerm s_55 = NULL;
              s_55 = t;
              if(((r_55 != NULL) && (r_55 != s_55)))
                _fail(s_55);
              else
                r_55 = s_55;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_20, not_null(r_55));
                t = set_config_0(t);
              }
              t = term_s_26;
              return(t);
            }
            ATerm j_12 (ATerm t)
            {
              t = term_d_50;
              return(t);
            }
            t = ArgOption_3(t, h_12, i_12, j_12);
            ;
            LocalPopChoice(c_50);
          }
        else
          {
            t = x_49;
            {
              ATerm i_50 = t;
              int j_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_12 (ATerm t)
                  {
                    ATerm t_55 = NULL;
                    t_55 = t;
                    z_53 :
                    if(!(match_string(t_55, "-I")))
                      {
                        if(!(match_string(t_55, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm n_12 (ATerm t)
                  {
                    ATerm u_55 = NULL;
                    ATerm v_55 = NULL;
                    v_55 = t;
                    if(((u_55 != NULL) && (u_55 != v_55)))
                      _fail(v_55);
                    else
                      u_55 = v_55;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_q_40));
                      t = extend_config_0(t);
                    }
                    t = term_s_26;
                    return(t);
                  }
                  ATerm t_12 (ATerm t)
                  {
                    t = term_k_50;
                    return(t);
                  }
                  t = ArgOption_3(t, k_12, n_12, t_12);
                  ;
                  LocalPopChoice(j_50);
                }
              else
                {
                  t = i_50;
                  {
                    ATerm l_50 = t;
                    int m_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_12 (ATerm t)
                        {
                          ATerm w_55 = NULL;
                          w_55 = t;
                          b_54 :
                          if(!(match_string(w_55, "--main")))
                            {
                              if(!(match_string(w_55, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm v_12 (ATerm t)
                        {
                          ATerm x_55 = NULL;
                          ATerm g_56 = NULL;
                          g_56 = t;
                          if(((x_55 != NULL) && (x_55 != g_56)))
                            _fail(g_56);
                          else
                            x_55 = g_56;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(x_55));
                            t = set_config_0(t);
                          }
                          t = term_s_26;
                          return(t);
                        }
                        ATerm w_12 (ATerm t)
                        {
                          t = term_n_50;
                          return(t);
                        }
                        t = ArgOption_3(t, u_12, v_12, w_12);
                        ;
                        LocalPopChoice(m_50);
                      }
                    else
                      {
                        t = l_50;
                        {
                          ATerm v_50 = t;
                          int w_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_13 (ATerm t)
                              {
                                ATerm h_56 = NULL;
                                h_56 = t;
                                d_54 :
                                if(!(match_string(h_56, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_13 (ATerm t)
                              {
                                ATerm j_56 = NULL;
                                ATerm k_56 = NULL;
                                k_56 = t;
                                if(((j_56 != NULL) && (j_56 != k_56)))
                                  _fail(k_56);
                                else
                                  j_56 = k_56;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATinsert(ATempty, not_null(j_56)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_s_26;
                                return(t);
                              }
                              ATerm d_13 (ATerm t)
                              {
                                t = term_x_50;
                                return(t);
                              }
                              t = ArgOption_3(t, b_13, c_13, d_13);
                              ;
                              LocalPopChoice(w_50);
                            }
                          else
                            {
                              t = v_50;
                              {
                                ATerm a_51 = t;
                                int b_51 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_13 (ATerm t)
                                    {
                                      ATerm l_56 = NULL;
                                      l_56 = t;
                                      f_54 :
                                      if(!(match_string(l_56, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_13 (ATerm t)
                                    {
                                      ATerm m_56 = NULL;
                                      ATerm n_56 = NULL;
                                      n_56 = t;
                                      if(((m_56 != NULL) && (m_56 != n_56)))
                                        _fail(n_56);
                                      else
                                        m_56 = n_56;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATempty, not_null(m_56)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_s_26;
                                      return(t);
                                    }
                                    ATerm i_13 (ATerm t)
                                    {
                                      t = term_c_51;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_13, f_13, i_13);
                                    ;
                                    LocalPopChoice(b_51);
                                  }
                                else
                                  {
                                    t = a_51;
                                    {
                                      ATerm d_51 = t;
                                      int e_51 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_13 (ATerm t)
                                          {
                                            ATerm o_56 = NULL;
                                            o_56 = t;
                                            h_54 :
                                            if(!(match_string(o_56, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm o_13 (ATerm t)
                                          {
                                            ATerm p_56 = NULL;
                                            ATerm q_56 = NULL;
                                            q_56 = t;
                                            if(((p_56 != NULL) && (p_56 != q_56)))
                                              _fail(q_56);
                                            else
                                              p_56 = q_56;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATinsert(ATempty, not_null(p_56)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_s_26;
                                            return(t);
                                          }
                                          ATerm p_13 (ATerm t)
                                          {
                                            t = term_f_51;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, n_13, o_13, p_13);
                                          ;
                                          LocalPopChoice(e_51);
                                        }
                                      else
                                        {
                                          t = d_51;
                                          {
                                            ATerm g_51 = t;
                                            int h_51 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_13 (ATerm t)
                                                {
                                                  ATerm r_56 = NULL;
                                                  r_56 = t;
                                                  j_54 :
                                                  if(!(match_string(r_56, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm r_13 (ATerm t)
                                                {
                                                  t = term_j_51;
                                                  t = set_config_0(t);
                                                  t = term_s_26;
                                                  return(t);
                                                }
                                                ATerm s_13 (ATerm t)
                                                {
                                                  t = term_k_51;
                                                  return(t);
                                                }
                                                t = Option_3(t, q_13, r_13, s_13);
                                                ;
                                                LocalPopChoice(h_51);
                                              }
                                            else
                                              {
                                                t = g_51;
                                                {
                                                  ATerm l_51 = t;
                                                  int m_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_13 (ATerm t)
                                                      {
                                                        ATerm s_56 = NULL;
                                                        s_56 = t;
                                                        k_54 :
                                                        if(!(match_string(s_56, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm a_14 (ATerm t)
                                                      {
                                                        t = term_n_51;
                                                        t = set_config_0(t);
                                                        t = term_s_26;
                                                        return(t);
                                                      }
                                                      ATerm b_14 (ATerm t)
                                                      {
                                                        t = term_o_51;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, v_13, a_14, b_14);
                                                      ;
                                                      LocalPopChoice(m_51);
                                                    }
                                                  else
                                                    {
                                                      t = l_51;
                                                      {
                                                        ATerm v_51 = t;
                                                        int w_51 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm c_14 (ATerm t)
                                                            {
                                                              ATerm t_56 = NULL;
                                                              t_56 = t;
                                                              l_54 :
                                                              if(!(match_string(t_56, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm d_14 (ATerm t)
                                                            {
                                                              t = term_b_52;
                                                              t = set_config_0(t);
                                                              t = term_s_26;
                                                              return(t);
                                                            }
                                                            ATerm e_14 (ATerm t)
                                                            {
                                                              t = term_c_52;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, c_14, d_14, e_14);
                                                            ;
                                                            LocalPopChoice(w_51);
                                                          }
                                                        else
                                                          {
                                                            t = v_51;
                                                            {
                                                              ATerm d_52 = t;
                                                              int e_52 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_14 (ATerm t)
                                                                  {
                                                                    ATerm z_56 = NULL;
                                                                    z_56 = t;
                                                                    m_54 :
                                                                    if(!(match_string(z_56, "--output-optimized")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm g_14 (ATerm t)
                                                                  {
                                                                    t = term_f_52;
                                                                    t = set_config_0(t);
                                                                    t = term_s_26;
                                                                    return(t);
                                                                  }
                                                                  ATerm h_14 (ATerm t)
                                                                  {
                                                                    t = term_g_52;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, f_14, g_14, h_14);
                                                                  ;
                                                                  LocalPopChoice(e_52);
                                                                }
                                                              else
                                                                {
                                                                  t = d_52;
                                                                  {
                                                                    ATerm l_52 = t;
                                                                    int m_52 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_14 (ATerm t)
                                                                        {
                                                                          ATerm a_57 = NULL;
                                                                          a_57 = t;
                                                                          w_54 :
                                                                          if(!(match_string(a_57, "--output-canonical")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm j_14 (ATerm t)
                                                                        {
                                                                          t = term_n_52;
                                                                          t = set_config_0(t);
                                                                          t = term_s_26;
                                                                          return(t);
                                                                        }
                                                                        ATerm n_14 (ATerm t)
                                                                        {
                                                                          t = term_o_52;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, i_14, j_14, n_14);
                                                                        ;
                                                                        LocalPopChoice(m_52);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_52;
                                                                        {
                                                                          ATerm p_52 = t;
                                                                          int q_52 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm q_14 (ATerm t)
                                                                              {
                                                                                ATerm b_57 = NULL;
                                                                                b_57 = t;
                                                                                x_54 :
                                                                                if(!(match_string(b_57, "--keep")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm u_14 (ATerm t)
                                                                              {
                                                                                ATerm c_57 = NULL;
                                                                                ATerm d_57 = NULL;
                                                                                t = string_to_int_0(t);
                                                                                {
                                                                                  d_57 = t;
                                                                                  if(((c_57 != NULL) && (c_57 != d_57)))
                                                                                    _fail(d_57);
                                                                                  else
                                                                                    c_57 = d_57;
                                                                                }
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_g_26, not_null(c_57));
                                                                                  t = set_config_0(t);
                                                                                }
                                                                                t = term_s_26;
                                                                                return(t);
                                                                              }
                                                                              ATerm w_14 (ATerm t)
                                                                              {
                                                                                t = term_r_52;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3(t, q_14, u_14, w_14);
                                                                              ;
                                                                              LocalPopChoice(q_52);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_52;
                                                                              {
                                                                                ATerm s_52 = t;
                                                                                int t_52 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm x_14 (ATerm t)
                                                                                    {
                                                                                      ATerm e_57 = NULL;
                                                                                      e_57 = t;
                                                                                      z_54 :
                                                                                      if(!(match_string(e_57, "--fusion")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_14 (ATerm t)
                                                                                    {
                                                                                      t = term_u_52;
                                                                                      t = toggle_config_0(t);
                                                                                      t = term_s_26;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm z_14 (ATerm t)
                                                                                    {
                                                                                      t = term_v_52;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3(t, x_14, y_14, z_14);
                                                                                    ;
                                                                                    LocalPopChoice(t_52);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_52;
                                                                                    {
                                                                                      ATerm w_52 = t;
                                                                                      int x_52 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm a_15 (ATerm t)
                                                                                          {
                                                                                            ATerm f_57 = NULL;
                                                                                            f_57 = t;
                                                                                            a_55 :
                                                                                            if(!(match_string(f_57, "--trace-all")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm b_15 (ATerm t)
                                                                                          {
                                                                                            t = term_z_52;
                                                                                            t = set_config_0(t);
                                                                                            t = term_s_26;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm c_15 (ATerm t)
                                                                                          {
                                                                                            t = term_d_53;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3(t, a_15, b_15, c_15);
                                                                                          ;
                                                                                          LocalPopChoice(x_52);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_52;
                                                                                          {
                                                                                            ATerm e_53 = t;
                                                                                            int g_53 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm d_15 (ATerm t)
                                                                                                {
                                                                                                  ATerm g_57 = NULL;
                                                                                                  g_57 = t;
                                                                                                  b_55 :
                                                                                                  if(!(match_string(g_57, "-t")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm g_15 (ATerm t)
                                                                                                {
                                                                                                  ATerm q_57 = NULL;
                                                                                                  ATerm r_57 = NULL;
                                                                                                  r_57 = t;
                                                                                                  if(((q_57 != NULL) && (q_57 != r_57)))
                                                                                                    _fail(r_57);
                                                                                                  else
                                                                                                    q_57 = r_57;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_h_53, (ATerm) ATinsert(ATempty, not_null(q_57)));
                                                                                                    t = extend_config_0(t);
                                                                                                  }
                                                                                                  t = term_s_26;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm h_15 (ATerm t)
                                                                                                {
                                                                                                  t = term_i_53;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3(t, d_15, g_15, h_15);
                                                                                                ;
                                                                                                LocalPopChoice(g_53);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_53;
                                                                                                {
                                                                                                  ATerm j_53 = t;
                                                                                                  int k_53 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm i_15 (ATerm t)
                                                                                                      {
                                                                                                        ATerm s_57 = NULL;
                                                                                                        s_57 = t;
                                                                                                        d_55 :
                                                                                                        if(!(match_string(s_57, "--verbose")))
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm n_15 (ATerm t)
                                                                                                      {
                                                                                                        ATerm t_57 = NULL;
                                                                                                        ATerm u_57 = NULL;
                                                                                                        t = string_to_int_0(t);
                                                                                                        {
                                                                                                          u_57 = t;
                                                                                                          if(((t_57 != NULL) && (t_57 != u_57)))
                                                                                                            _fail(u_57);
                                                                                                          else
                                                                                                            t_57 = u_57;
                                                                                                        }
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_r_19, not_null(t_57));
                                                                                                          t = set_config_0(t);
                                                                                                        }
                                                                                                        t = term_s_26;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm o_15 (ATerm t)
                                                                                                      {
                                                                                                        t = term_l_53;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3(t, i_15, n_15, o_15);
                                                                                                      ;
                                                                                                      LocalPopChoice(k_53);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_53;
                                                                                                      {
                                                                                                        ATerm n_53 = t;
                                                                                                        int o_53 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm p_15 (ATerm t)
                                                                                                            {
                                                                                                              ATerm v_57 = NULL;
                                                                                                              v_57 = t;
                                                                                                              f_55 :
                                                                                                              if(!(match_string(v_57, "-S")))
                                                                                                                {
                                                                                                                  if(!(match_string(v_57, "--silent")))
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm q_15 (ATerm t)
                                                                                                            {
                                                                                                              t = term_p_53;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_s_26;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm v_15 (ATerm t)
                                                                                                            {
                                                                                                              t = term_q_53;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, p_15, q_15, v_15);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_53);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_53;
                                                                                                            {
                                                                                                              ATerm r_53 = t;
                                                                                                              int s_53 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm w_15 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm w_57 = NULL;
                                                                                                                    w_57 = t;
                                                                                                                    g_55 :
                                                                                                                    if(!(match_string(w_57, "-h")))
                                                                                                                      {
                                                                                                                        if(!(match_string(w_57, "--help")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm x_15 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_v_53;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_s_26;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm a_16 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_w_53;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, w_15, x_15, a_16);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(s_53);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_53;
                                                                                                                  {
                                                                                                                    ATerm x_53 = t;
                                                                                                                    int y_53 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm b_16 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm x_57 = NULL;
                                                                                                                          x_57 = t;
                                                                                                                          h_55 :
                                                                                                                          if(!(match_string(x_57, "--man")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm c_16 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_c_54;
                                                                                                                          t = set_config_0(t);
                                                                                                                          t = term_s_26;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm d_16 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_e_54;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3(t, b_16, c_16, d_16);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(y_53);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_53;
                                                                                                                        {
                                                                                                                          ATerm g_54 = t;
                                                                                                                          int i_54 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_16 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm y_57 = NULL;
                                                                                                                                y_57 = t;
                                                                                                                                i_55 :
                                                                                                                                if(!(match_string(y_57, "-v")))
                                                                                                                                  {
                                                                                                                                    if(!(match_string(y_57, "--version")))
                                                                                                                                      {
                                                                                                                                        _fail(t);
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm k_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_o_54;
                                                                                                                                t = set_config_0(t);
                                                                                                                                t = term_s_26;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm n_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_p_54;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3(t, e_16, k_16, n_16);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(i_54);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = g_54;
                                                                                                                              {
                                                                                                                                ATerm o_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm z_57 = NULL;
                                                                                                                                  z_57 = t;
                                                                                                                                  j_55 :
                                                                                                                                  if(!(match_string(z_57, "--warning")))
                                                                                                                                    {
                                                                                                                                      if(!(match_string(z_57, "-W")))
                                                                                                                                        {
                                                                                                                                          _fail(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm p_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm q_54 = t;
                                                                                                                                  int r_54 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      ATerm b_58 = NULL;
                                                                                                                                      ATerm s_54;
                                                                                                                                      s_54 = t;
                                                                                                                                      {
                                                                                                                                        t = term_n_25;
                                                                                                                                        {
                                                                                                                                          t = get_config_0(t);
                                                                                                                                          {
                                                                                                                                            ATerm r_16 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm a_58 = NULL;
                                                                                                                                              a_58 = t;
                                                                                                                                              k_55 :
                                                                                                                                              if(!(match_string(a_58, "all")))
                                                                                                                                                {
                                                                                                                                                  _fail(t);
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = Cons_2(t, r_16, Nil_0);
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      t = s_54;
                                                                                                                                      {
                                                                                                                                        ATerm c_58 = NULL;
                                                                                                                                        c_58 = t;
                                                                                                                                        if(((b_58 != NULL) && (b_58 != c_58)))
                                                                                                                                          _fail(c_58);
                                                                                                                                        else
                                                                                                                                          b_58 = c_58;
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATinsert(ATempty, not_null(b_58)));
                                                                                                                                          t = set_config_0(t);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(r_54);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_54;
                                                                                                                                      {
                                                                                                                                        ATerm d_58 = NULL;
                                                                                                                                        ATerm e_58 = NULL;
                                                                                                                                        e_58 = t;
                                                                                                                                        if(((d_58 != NULL) && (d_58 != e_58)))
                                                                                                                                          _fail(e_58);
                                                                                                                                        else
                                                                                                                                          d_58 = e_58;
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATinsert(ATempty, not_null(d_58)));
                                                                                                                                          t = extend_config_0(t);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  t = term_s_26;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm q_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_t_54;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = ArgOption_3(t, o_16, p_16, q_16);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm k_59 = NULL;
  k_59 = t;
  t = SSL_table_destroy(not_null(k_59));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_56), term_l_44), term_c_56), term_b_56), term_a_56), term_l_44), term_z_55), term_y_55), term_m_55), term_l_55), term_e_55), term_c_55), term_y_54), term_v_54), term_u_54);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm n_59 (ATerm t)
  {
    ATerm e_56 = t;
    int f_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(f_56);
      }
    else
      {
        t = e_56;
        t = Cons_2(t, r_86, n_59);
      }
    return(t);
  }
  t = n_59(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
  w_59 = t;
  t_59 :
  if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
    {
      u_59 = ATgetFirst((ATermList) w_59);
      v_59 = (ATerm) ATgetNext((ATermList) w_59);
      {
        ATerm z_59 = NULL;
        t = not_null(v_59);
        {
          ATerm i_56;
          i_56 = t;
          {
            ATerm a_60 = NULL,c_60 = NULL,e_60 = NULL;
            ATerm u_56;
            u_56 = t;
            {
              ATerm b_60 = NULL;
              t = j_0(t);
              {
                b_60 = t;
                if(((a_60 != NULL) && (a_60 != b_60)))
                  _fail(b_60);
                else
                  a_60 = b_60;
              }
            }
            t = u_56;
            {
              ATerm d_60 = NULL;
              t = not_null(u_59);
              {
                t = i_0(t);
                {
                  d_60 = t;
                  if(((c_60 != NULL) && (c_60 != d_60)))
                    _fail(d_60);
                  else
                    c_60 = d_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_60)), not_null(c_60));
                {
                  e_60 = t;
                  if(((z_59 != NULL) && (z_59 != e_60)))
                    _fail(e_60);
                  else
                    z_59 = e_60;
                }
              }
            }
          }
          t = i_56;
          {
            ATerm s_16 (ATerm t)
            {
              t = not_null(z_59);
              return(t);
            }
            t = reverse_acc_2(t, i_0, s_16);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_59) == AT_LIST) && ATisEmpty(w_59)))
        {
          {
            t = term_s_26;
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
  ATerm z_16 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_16);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm l_60 = NULL;
  ATerm m_60 = NULL;
  t = term_s_26;
  {
    t = g_0(t);
    {
      m_60 = t;
      if(((l_60 != NULL) && (l_60 != m_60)))
        _fail(m_60);
      else
        l_60 = m_60;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_57), not_null(l_60)), term_h_57), term_l_44), term_y_56), term_l_44), term_x_56), term_w_56), term_l_44), term_v_56);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm t_60 = NULL,u_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym_Program_1))
    {
      u_60 = ATgetArgument(t_60, 0);
      {
        ATerm x_60 = NULL,z_60 = NULL;
        ATerm y_60 = NULL;
        t = SSLgetAnnotations(not_null(t_60));
        {
          y_60 = t;
          if(((x_60 != NULL) && (x_60 != y_60)))
            _fail(y_60);
          else
            x_60 = y_60;
        }
        {
          t = not_null(u_60);
          {
            ATerm b_61 = NULL;
            t = a_71(t);
            {
              z_60 = t;
              {
                ATerm c_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_60)), not_null(x_60));
                {
                  c_61 = t;
                  if(((b_61 != NULL) && (b_61 != c_61)))
                    _fail(c_61);
                  else
                    b_61 = c_61;
                }
                t = not_null(b_61);
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
  ATerm l_61 = NULL;
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL;
      t = term_l_57;
      {
        t = get_config_0(t);
        {
          m_61 = t;
          if(((l_61 != NULL) && (l_61 != m_61)))
            _fail(m_61);
          else
            l_61 = m_61;
        }
      }
      ;
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      {
        ATerm a_17 (ATerm t)
        {
          ATerm d_17 (ATerm t)
          {
            ATerm n_61 = NULL;
            n_61 = t;
            if(((l_61 != NULL) && (l_61 != n_61)))
              _fail(n_61);
            else
              l_61 = n_61;
            return(t);
          }
          t = Program_1(t, d_17);
          return(t);
        }
        t = option_defined_1(t, a_17);
      }
    }
  {
    ATerm e_17 (ATerm t)
    {
      ATerm f_17 (ATerm t)
      {
        t = not_null(l_61);
        return(t);
      }
      t = short_description_1(t, f_17);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_17);
    {
      t = term_m_57;
      {
        t = echo_0(t);
        {
          t = term_p_57;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_17 (ATerm t)
                {
                  ATerm o_61 = NULL;
                  ATerm p_61 = NULL;
                  p_61 = t;
                  if(((o_61 != NULL) && (o_61 != p_61)))
                    _fail(p_61);
                  else
                    o_61 = p_61;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_61)), term_f_58);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_17);
                {
                  ATerm h_17 (ATerm t)
                  {
                    ATerm q_61 = NULL;
                    ATerm r_61 = NULL;
                    ATerm m_17 (ATerm t)
                    {
                      t = not_null(l_61);
                      return(t);
                    }
                    t = long_description_1(t, m_17);
                    {
                      r_61 = t;
                      if(((q_61 != NULL) && (q_61 != r_61)))
                        _fail(r_61);
                      else
                        q_61 = r_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_61)), term_l_44);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_17);
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
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(h_58);
    }
  else
    {
      t = g_58;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm c_62 = NULL,d_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Undefined_1))
    {
      d_62 = ATgetArgument(c_62, 0);
      {
        ATerm g_62 = NULL,w_62 = NULL;
        ATerm v_62 = NULL;
        t = SSLgetAnnotations(not_null(c_62));
        {
          v_62 = t;
          if(((g_62 != NULL) && (g_62 != v_62)))
            _fail(v_62);
          else
            g_62 = v_62;
        }
        {
          t = not_null(d_62);
          {
            ATerm y_62 = NULL;
            t = b_71(t);
            {
              w_62 = t;
              {
                ATerm a_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_62)), not_null(g_62));
                {
                  a_63 = t;
                  if(((y_62 != NULL) && (y_62 != a_63)))
                    _fail(a_63);
                  else
                    y_62 = a_63;
                }
                t = not_null(y_62);
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
ATerm fetch_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm u_63 (ATerm t)
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_87, _id);
        ;
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = Cons_2(t, _id, u_63);
      }
    return(t);
  }
  t = u_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_104 (ATerm))
{
  t = fetch_1(t, d_104);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  v_63 :
  if(((ATgetType(w_63) == AT_LIST) && ATisEmpty(w_63)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_63) == AT_LIST) && !(ATisEmpty(w_63))))
        {
          x_63 = ATgetFirst((ATermList) w_63);
          y_63 = (ATerm) ATgetNext((ATermList) w_63);
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
  ATerm k_58;
  k_58 = t;
  {
    ATerm d_64 = NULL;
    ATerm g_64 = NULL;
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
        {
          ATerm e_64 = NULL;
          ATerm f_64 = NULL;
          f_64 = t;
          if(((e_64 != NULL) && (e_64 != f_64)))
            _fail(f_64);
          else
            e_64 = f_64;
          t = (ATerm) ATinsert(ATempty, not_null(e_64));
        }
      }
    {
      g_64 = t;
      if(((d_64 != NULL) && (d_64 != g_64)))
        _fail(g_64);
      else
        d_64 = g_64;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(d_64));
      t = printnl_0(t);
    }
  }
  t = k_58;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_l_57;
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
  ATerm n_58 = t;
  int o_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(o_58);
    }
  else
    {
      t = n_58;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_64 = NULL;
  n_64 = t;
  m_64 :
  if(match_cons(n_64, sym_Help_0))
    {
      ATerm p_64 = NULL,r_64 = NULL;
      ATerm p_58;
      p_58 = t;
      {
        ATerm q_64 = NULL;
        t = SSLgetAnnotations(not_null(n_64));
        {
          q_64 = t;
          if(((p_64 != NULL) && (p_64 != q_64)))
            _fail(q_64);
          else
            p_64 = q_64;
        }
      }
      t = p_58;
      {
        ATerm s_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_64));
        {
          s_64 = t;
          if(((r_64 != NULL) && (r_64 != s_64)))
            _fail(s_64);
          else
            r_64 = s_64;
        }
        t = not_null(r_64);
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
  ATerm q_58 = t;
  int r_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 (ATerm t)
      {
        ATerm y_64 = NULL;
        y_64 = t;
        w_64 :
        if(!(match_string(y_64, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm s_17 (ATerm t)
      {
        t = term_t_58;
        t = set_config_0(t);
        return(t);
      }
      ATerm t_17 (ATerm t)
      {
        t = term_u_58;
        return(t);
      }
      t = Option_3(t, n_17, s_17, t_17);
      ;
      LocalPopChoice(r_58);
    }
  else
    {
      t = q_58;
      {
        ATerm u_17 (ATerm t)
        {
          ATerm z_64 = NULL;
          z_64 = t;
          x_64 :
          if(!(match_string(z_64, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_17 (ATerm t)
        {
          t = term_t_58;
          {
            t = set_config_0(t);
            {
              t = term_o_54;
              t = set_config_0(t);
            }
          }
          t = term_v_58;
          return(t);
        }
        ATerm w_17 (ATerm t)
        {
          t = term_w_58;
          return(t);
        }
        t = Option_3(t, u_17, v_17, w_17);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  b_65 :
  if(match_cons(c_65, sym__2))
    {
      d_65 = ATgetArgument(c_65, 0);
      e_65 = ATgetArgument(c_65, 1);
      t = SSL_table_get(not_null(d_65), not_null(e_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
  n_65 = t;
  m_65 :
  if(match_cons(n_65, sym__3))
    {
      o_65 = ATgetArgument(n_65, 0);
      p_65 = ATgetArgument(n_65, 1);
      q_65 = ATgetArgument(n_65, 2);
      {
        ATerm x_58;
        x_58 = t;
        {
          ATerm u_65 = NULL;
          ATerm v_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), not_null(p_65));
          {
            ATerm y_58 = t;
            int z_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(z_58);
              }
            else
              {
                t = y_58;
                t = (ATerm) ATempty;
              }
            {
              v_65 = t;
              if(((u_65 != NULL) && (u_65 != v_65)))
                _fail(v_65);
              else
                u_65 = v_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_65), not_null(p_65), (ATerm) ATinsert(CheckATermList(not_null(u_65)), not_null(q_65)));
            t = table_put_0(t);
          }
        }
        t = x_58;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_105 (ATerm))
{
  ATerm z_65 = NULL;
  ATerm a_66 = NULL;
  t = term_s_26;
  {
    t = i_105(t);
    {
      a_66 = t;
      if(((z_65 != NULL) && (z_65 != a_66)))
        _fail(a_66);
      else
        z_65 = a_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_57, term_o_57, not_null(z_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL;
  g_66 = t;
  f_66 :
  if(match_string(g_66, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(g_66) == AT_LIST) && !(ATisEmpty(g_66))))
        {
          h_66 = ATgetFirst((ATermList) g_66);
          i_66 = (ATerm) ATgetNext((ATermList) g_66);
          {
            ATerm l_66 = NULL;
            ATerm a_59;
            a_59 = t;
            {
              t = not_null(h_66);
              t = a_0(t);
            }
            t = a_59;
            {
              ATerm m_66 = NULL;
              t = term_s_26;
              {
                t = b_0(t);
                {
                  m_66 = t;
                  if(((l_66 != NULL) && (l_66 != m_66)))
                    _fail(m_66);
                  else
                    l_66 = m_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_66)), not_null(l_66));
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
  ATerm y_17 (ATerm t)
  {
    ATerm r_66 = NULL;
    r_66 = t;
    q_66 :
    if(!(match_string(r_66, "--help")))
      {
        if(!(match_string(r_66, "-h")))
          {
            if(!(match_string(r_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_18 (ATerm t)
  {
    t = term_v_53;
    {
      t = set_config_0(t);
      t = term_b_59;
    }
    return(t);
  }
  ATerm c_18 (ATerm t)
  {
    t = term_c_59;
    return(t);
  }
  t = Option_3(t, y_17, b_18, c_18);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  t_66 :
  if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
    {
      v_66 = ATgetFirst((ATermList) u_66);
      w_66 = (ATerm) ATgetNext((ATermList) u_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_105 (ATerm))
{
  ATerm d_59;
  d_59 = t;
  {
    ATerm d_18 (ATerm t)
    {
      t = term_e_59;
      t = g_105(t);
      return(t);
    }
    t = try_1(t, d_18);
  }
  t = d_59;
  {
    ATerm f_18 (ATerm t)
    {
      ATerm e_67 = NULL;
      ATerm f_59;
      f_59 = t;
      {
        ATerm c_67 = NULL;
        ATerm d_67 = NULL;
        d_67 = t;
        if(((c_67 != NULL) && (c_67 != d_67)))
          _fail(d_67);
        else
          c_67 = d_67;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_57, not_null(c_67));
          t = set_config_0(t);
        }
      }
      t = f_59;
      {
        ATerm f_67 = NULL;
        f_67 = t;
        if(((e_67 != NULL) && (e_67 != f_67)))
          _fail(f_67);
        else
          e_67 = f_67;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_67));
      }
      return(t);
    }
    ATerm g_18 (ATerm t)
    {
      ATerm g_59 = t;
      int h_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_59 = t;
          int j_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(j_59);
            }
          else
            {
              t = i_59;
              {
                t = g_105(t);
                t = Cons_2(t, _id, g_18);
              }
            }
          ;
          LocalPopChoice(h_59);
        }
      else
        {
          t = g_59;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_18, g_18);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm k_67 = NULL;
  ATerm l_59;
  l_59 = t;
  {
    t = term_m_59;
    t = table_put_0(t);
  }
  t = l_59;
  {
    ATerm h_18 (ATerm t)
    {
      ATerm o_59 = t;
      int p_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_105(t);
          ;
          LocalPopChoice(p_59);
        }
      else
        {
          t = o_59;
          {
            ATerm q_59 = t;
            int r_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(r_59);
              }
            else
              {
                t = q_59;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, h_18);
    {
      ATerm m_18 (ATerm t)
      {
        ATerm s_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_59;
            y_59 = t;
            {
              ATerm f_60 = t;
              int g_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_53;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(g_60);
                }
              else
                {
                  t = f_60;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_59;
            {
              t = system_usage_0(t);
              {
                t = term_n_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(x_59);
          }
        else
          {
            t = s_59;
            {
              ATerm h_60 = t;
              int i_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_60;
                  j_60 = t;
                  {
                    t = term_s_58;
                    t = get_config_0(t);
                  }
                  t = j_60;
                  {
                    t = system_about_0(t);
                    {
                      t = term_n_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(i_60);
                }
              else
                {
                  t = h_60;
                  {
                    ATerm n_18 (ATerm t)
                    {
                      ATerm o_18 (ATerm t)
                      {
                        ATerm l_67 = NULL;
                        l_67 = t;
                        if(((k_67 != NULL) && (k_67 != l_67)))
                          _fail(l_67);
                        else
                          k_67 = l_67;
                        return(t);
                      }
                      t = Undefined_1(t, o_18);
                      return(t);
                    }
                    t = option_defined_1(t, n_18);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_67)), term_k_60));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_s_28;
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
      t = try_1(t, m_18);
      {
        ATerm n_60;
        n_60 = t;
        {
          t = term_n_57;
          t = table_destroy_0(t);
        }
        t = n_60;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  ATerm o_60;
  o_60 = t;
  {
    ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
    s_67 = t;
    o_67 :
    if(match_cons(s_67, sym__3))
      {
        t_67 = ATgetArgument(s_67, 0);
        u_67 = ATgetArgument(s_67, 1);
        v_67 = ATgetArgument(s_67, 2);
        {
          if(((p_67 != NULL) && (p_67 != t_67)))
            _fail(t_67);
          else
            p_67 = t_67;
          {
            if(((q_67 != NULL) && (q_67 != u_67)))
              _fail(u_67);
            else
              q_67 = u_67;
            {
              if(((r_67 != NULL) && (r_67 != v_67)))
                _fail(v_67);
              else
                r_67 = v_67;
              t = SSL_table_put(not_null(p_67), not_null(q_67), not_null(r_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_60;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym__2))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_43, not_null(a_68), not_null(b_68));
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
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
        h_68 = t;
        g_68 :
        if(((ATgetType(h_68) == AT_LIST) && !(ATisEmpty(h_68))))
          {
            i_68 = ATgetFirst((ATermList) h_68);
            j_68 = (ATerm) ATgetNext((ATermList) h_68);
            {
              t = not_null(i_68);
              {
                ATerm p_18 (ATerm t)
                {
                  t = not_null(j_68);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_18);
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
  ATerm t_68 = NULL;
  ATerm v_68 = NULL;
  t_68 = t;
  {
    ATerm w_68 = NULL;
    ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
    t = not_null(t_68);
    {
      w_68 = t;
      {
        t = SSL_explode_term(not_null(w_68));
        {
          y_68 = t;
          r_68 :
          if(match_cons(y_68, sym__2))
            {
              z_68 = ATgetArgument(y_68, 0);
              a_69 = ATgetArgument(y_68, 1);
              s_68 :
              if(match_string(z_68, ""))
                {
                  if(((v_68 != NULL) && (v_68 != a_69)))
                    _fail(a_69);
                  else
                    v_68 = a_69;
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
      t = not_null(v_68);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  h_69 :
  if(((ATgetType(i_69) == AT_LIST) && ATisEmpty(i_69)))
    {
      {
        ATerm k_69 = NULL,m_69 = NULL;
        ATerm r_60;
        r_60 = t;
        {
          ATerm l_69 = NULL;
          t = SSLgetAnnotations(not_null(i_69));
          {
            l_69 = t;
            if(((k_69 != NULL) && (k_69 != l_69)))
              _fail(l_69);
            else
              k_69 = l_69;
          }
        }
        t = r_60;
        {
          ATerm n_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_69));
          {
            n_69 = t;
            if(((m_69 != NULL) && (m_69 != n_69)))
              _fail(n_69);
            else
              m_69 = n_69;
          }
          t = not_null(m_69);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm r_69 (ATerm t)
  {
    ATerm v_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_69);
        ;
        LocalPopChoice(w_60);
      }
    else
      {
        t = v_60;
        {
          t = Nil_0(t);
          t = h_87(t);
        }
      }
    return(t);
  }
  t = r_69(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym__2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        t = not_null(v_69);
        {
          ATerm r_18 (ATerm t)
          {
            t = not_null(w_69);
            return(t);
          }
          t = at_end_1(t, r_18);
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
  ATerm a_61 = t;
  int d_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_61);
    }
  else
    {
      t = a_61;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  g_70 = t;
  f_70 :
  if(match_cons(g_70, sym__2))
    {
      h_70 = ATgetArgument(g_70, 0);
      i_70 = ATgetArgument(g_70, 1);
      {
        ATerm m_70 = NULL,o_70 = NULL;
        ATerm n_70 = NULL;
        t = SSLgetAnnotations(not_null(g_70));
        {
          n_70 = t;
          if(((m_70 != NULL) && (m_70 != n_70)))
            _fail(n_70);
          else
            m_70 = n_70;
        }
        {
          t = not_null(h_70);
          {
            ATerm q_70 = NULL;
            t = a_64(t);
            {
              o_70 = t;
              {
                t = not_null(i_70);
                {
                  ATerm s_70 = NULL;
                  t = b_64(t);
                  {
                    q_70 = t;
                    {
                      ATerm t_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_70), not_null(q_70)), not_null(m_70));
                      {
                        t_70 = t;
                        if(((s_70 != NULL) && (s_70 != t_70)))
                          _fail(t_70);
                        else
                          s_70 = t_70;
                      }
                      t = not_null(s_70);
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
  ATerm c_71 = NULL;
  c_71 = t;
  t = SSL_implode_string(not_null(c_71));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  l_71 :
  if(((ATgetType(m_71) == AT_LIST) && !(ATisEmpty(m_71))))
    {
      n_71 = ATgetFirst((ATermList) m_71);
      o_71 = (ATerm) ATgetNext((ATermList) m_71);
      {
        ATerm s_71 = NULL,u_71 = NULL;
        ATerm t_71 = NULL;
        t = SSLgetAnnotations(not_null(m_71));
        {
          t_71 = t;
          if(((s_71 != NULL) && (s_71 != t_71)))
            _fail(t_71);
          else
            s_71 = t_71;
        }
        {
          t = not_null(n_71);
          {
            ATerm w_71 = NULL;
            t = j_65(t);
            {
              u_71 = t;
              {
                t = not_null(o_71);
                {
                  ATerm y_71 = NULL;
                  t = k_65(t);
                  {
                    w_71 = t;
                    {
                      ATerm z_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_71)), not_null(u_71)), not_null(s_71));
                      {
                        z_71 = t;
                        if(((y_71 != NULL) && (y_71 != z_71)))
                          _fail(z_71);
                        else
                          y_71 = z_71;
                      }
                      t = not_null(y_71);
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
  ATerm g_72 = NULL;
  g_72 = t;
  t = SSL_explode_string(not_null(g_72));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm e_61 = t;
    int f_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_72 (ATerm t)
        {
          ATerm g_61 = t;
          int h_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, l_72);
              ;
              LocalPopChoice(h_61);
            }
          else
            {
              t = g_61;
              {
                ATerm s_18 (ATerm t)
                {
                  ATerm k_72 = NULL;
                  k_72 = t;
                  j_72 :
                  if(!(match_int(k_72, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm t_18 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, s_18, t_18);
              }
            }
          return(t);
        }
        t = l_72(t);
        ;
        LocalPopChoice(f_61);
      }
    else
      {
        t = e_61;
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
  ATerm i_61;
  i_61 = t;
  {
    ATerm z_72 = NULL,b_73 = NULL,d_73 = NULL,f_73 = NULL,j_73 = NULL,n_73 = NULL,r_73 = NULL,v_73 = NULL;
    t = term_k_61;
    {
      t = set_config_0(t);
      {
        t = term_s_61;
        {
          t = set_config_0(t);
          {
            t = term_t_61;
            {
              t = set_config_0(t);
              {
                ATerm u_61;
                u_61 = t;
                {
                  ATerm a_73 = NULL;
                  t = term_v_61;
                  {
                    t = xtc_find_path_0(t);
                    {
                      a_73 = t;
                      if(((z_72 != NULL) && (z_72 != a_73)))
                        _fail(a_73);
                      else
                        z_72 = a_73;
                    }
                  }
                }
                t = u_61;
                {
                  ATerm w_61;
                  w_61 = t;
                  {
                    ATerm c_73 = NULL;
                    t = term_x_61;
                    {
                      t = xtc_find_path_0(t);
                      {
                        c_73 = t;
                        if(((b_73 != NULL) && (b_73 != c_73)))
                          _fail(c_73);
                        else
                          b_73 = c_73;
                      }
                    }
                  }
                  t = w_61;
                  {
                    ATerm e_73 = NULL;
                    t = term_y_61;
                    {
                      t = xtc_find_path_0(t);
                      {
                        e_73 = t;
                        if(((d_73 != NULL) && (d_73 != e_73)))
                          _fail(e_73);
                        else
                          d_73 = e_73;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_73)), term_q_40), not_null(b_73)), term_q_40), not_null(z_72)), term_q_40));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATinsert(ATinsert(ATempty, term_a_62), term_z_61));
                          {
                            t = set_config_0(t);
                            {
                              ATerm e_62;
                              e_62 = t;
                              {
                                ATerm g_73 = NULL,i_73 = NULL;
                                ATerm h_73 = NULL;
                                t = term_f_62;
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
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), term_h_62);
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
                              }
                              t = e_62;
                              {
                                ATerm i_62;
                                i_62 = t;
                                {
                                  ATerm k_73 = NULL,m_73 = NULL;
                                  ATerm l_73 = NULL;
                                  t = term_f_62;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      l_73 = t;
                                      if(((k_73 != NULL) && (k_73 != l_73)))
                                        _fail(l_73);
                                      else
                                        k_73 = l_73;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), term_h_62);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        m_73 = t;
                                        if(((j_73 != NULL) && (j_73 != m_73)))
                                          _fail(m_73);
                                        else
                                          j_73 = m_73;
                                      }
                                    }
                                  }
                                }
                                t = i_62;
                                {
                                  ATerm o_73 = NULL,q_73 = NULL;
                                  ATerm p_73 = NULL;
                                  t = term_j_62;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      p_73 = t;
                                      if(((o_73 != NULL) && (o_73 != p_73)))
                                        _fail(p_73);
                                      else
                                        o_73 = p_73;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), term_h_62);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        q_73 = t;
                                        if(((n_73 != NULL) && (n_73 != q_73)))
                                          _fail(q_73);
                                        else
                                          n_73 = q_73;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_r_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_73)), term_q_40), not_null(j_73)), term_q_40), not_null(f_73)), term_q_40));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm k_62;
                                        k_62 = t;
                                        {
                                          ATerm s_73 = NULL,u_73 = NULL;
                                          ATerm t_73 = NULL;
                                          t = term_f_62;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              t_73 = t;
                                              if(((s_73 != NULL) && (s_73 != t_73)))
                                                _fail(t_73);
                                              else
                                                s_73 = t_73;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), term_l_62);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                u_73 = t;
                                                if(((r_73 != NULL) && (r_73 != u_73)))
                                                  _fail(u_73);
                                                else
                                                  r_73 = u_73;
                                              }
                                            }
                                          }
                                        }
                                        t = k_62;
                                        {
                                          ATerm w_73 = NULL,y_73 = NULL;
                                          ATerm x_73 = NULL;
                                          t = term_j_62;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              x_73 = t;
                                              if(((w_73 != NULL) && (w_73 != x_73)))
                                                _fail(x_73);
                                              else
                                                w_73 = x_73;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_l_62);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                y_73 = t;
                                                if(((v_73 != NULL) && (v_73 != y_73)))
                                                  _fail(y_73);
                                                else
                                                  v_73 = y_73;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_62), term_p_62), not_null(v_73)), term_m_62), term_o_62), term_n_62), not_null(r_73)), term_m_62));
                                            {
                                              t = set_config_0(t);
                                              {
                                                t = term_r_62;
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
  t = i_61;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm u_18 (ATerm t)
      {
        ATerm n_74 = NULL;
        t = term_a_54;
        {
          t = get_config_0(t);
          {
            ATerm o_74 = NULL;
            t = term_s_62;
            {
              t = xtc_find_0(t);
              {
                o_74 = t;
                if(((n_74 != NULL) && (n_74 != o_74)))
                  _fail(o_74);
                else
                  n_74 = o_74;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), term_f_21);
              {
                t = copy_file_0(t);
                {
                  t = term_n_19;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, u_18);
      {
        ATerm v_18 (ATerm t)
        {
          t = term_n_54;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_n_19;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, v_18);
        {
          ATerm t_62 = t;
          int u_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_62;
              x_62 = t;
              {
                t = term_q_38;
                t = get_config_0(t);
              }
              t = x_62;
              ;
              LocalPopChoice(u_62);
            }
          else
            {
              t = t_62;
              {
                t = (ATerm) ATinsert(ATempty, term_z_62);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm w_18 (ATerm t)
              {
                ATerm b_63;
                b_63 = t;
                {
                  t = term_q_38;
                  {
                    t = get_config_0(t);
                    {
                      ATerm c_19 (ATerm t)
                      {
                        t = term_c_63;
                        return(t);
                      }
                      t = debug_1(t, c_19);
                    }
                  }
                }
                t = b_63;
                return(t);
              }
              t = if_verbose1_1(t, w_18);
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
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm f_19 (ATerm t)
        {
          ATerm g_19 (ATerm t)
          {
            ATerm t_74 = NULL;
            ATerm u_74 = NULL;
            u_74 = t;
            if(((t_74 != NULL) && (t_74 != u_74)))
              _fail(u_74);
            else
              t_74 = u_74;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(CheckATermList(not_null(t_74)), term_f_63));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, g_19);
          return(t);
        }
        t = profile_p__2(t, f_19, compile_0);
        {
          ATerm h_19 (ATerm t)
          {
            ATerm v_74 = NULL;
            ATerm w_74 = NULL;
            t = run_time_0(t);
            {
              w_74 = t;
              if(((v_74 != NULL) && (v_74 != w_74)))
                _fail(w_74);
              else
                v_74 = w_74;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_63), not_null(v_74)), term_g_63));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, h_19);
          {
            t = term_n_19;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      {
        ATerm x_74 = NULL;
        ATerm y_74 = NULL;
        t = run_time_0(t);
        {
          y_74 = t;
          if(((x_74 != NULL) && (x_74 != y_74)))
            _fail(y_74);
          else
            x_74 = y_74;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_63), not_null(x_74)), term_i_63));
          {
            t = printnl_0(t);
            {
              t = term_s_28;
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
