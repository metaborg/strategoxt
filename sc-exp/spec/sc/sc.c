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
ATerm term_h_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_b_84;
ATerm term_z_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_m_83;
ATerm term_k_83;
ATerm term_j_83;
ATerm term_h_83;
ATerm term_g_83;
ATerm term_f_83;
ATerm term_e_83;
ATerm term_c_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_x_82;
ATerm term_i_82;
ATerm term_v_81;
ATerm term_o_81;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_g_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_d_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_r_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_q_78;
ATerm term_p_78;
ATerm term_o_78;
ATerm term_l_78;
ATerm term_k_78;
ATerm term_h_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_a_78;
ATerm term_z_77;
ATerm term_y_77;
ATerm term_v_77;
ATerm term_u_77;
ATerm term_r_77;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_g_77;
ATerm term_f_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_y_76;
ATerm term_x_76;
ATerm term_u_76;
ATerm term_r_76;
ATerm term_o_76;
ATerm term_l_76;
ATerm term_i_76;
ATerm term_f_76;
ATerm term_c_76;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_m_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_b_73;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_n_72;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_n_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_a_69;
ATerm term_y_66;
ATerm term_n_66;
ATerm term_t_65;
ATerm term_e_65;
ATerm term_u_64;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_f_64;
ATerm term_v_63;
ATerm term_o_63;
ATerm term_m_63;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_r_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_k_58;
ATerm term_i_58;
ATerm term_p_57;
ATerm term_n_57;
ATerm term_w_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
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
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_c_53;
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
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_z_49;
ATerm term_v_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_j_49;
ATerm term_c_49;
ATerm term_t_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_a_48;
ATerm term_x_47;
ATerm term_r_47;
ATerm term_g_47;
ATerm term_j_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_w_45;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_m_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_t_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_k_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_b_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_o_40;
ATerm term_k_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_u_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_w_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
void init_constant_terms (void)
{
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_d_46, term_e_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_49, term_a_48, term_j_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_t_33, term_v_49);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_50, term_m_45, term_e_50);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_50, term_t_50, term_u_50);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_50, term_x_50, term_f_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_n_51);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_51, term_s_51, term_w_51);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_52, term_f_52, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_t_52, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_53, term_l_53, term_m_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_x_53, term_y_53);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_54, term_d_54, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_54, term_h_54, term_i_54);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_54, term_l_54, term_m_54);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_54, term_p_54, term_q_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_t_54, term_u_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_54, term_x_54, term_y_54);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_55, term_b_55, term_c_55);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_55, term_f_55, term_g_55);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_55, term_j_55, term_k_55);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_55, term_n_55, term_o_55);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_55, term_r_55, term_s_55);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_55, term_a_56, term_b_56);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_56, term_e_56, term_f_56);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(sym__2, term_t_65, term_n_66);
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(sym__2, term_t_65, term_v_72);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_q_45);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym__2, term_g_47, term_q_45);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(sym__2, term_k_44, term_q_45);
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(sym__2, term_l_41, term_q_45);
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym__2, term_z_38, term_q_45);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(sym__2, term_j_43, term_q_45);
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(sym__2, term_y_77, term_q_45);
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_q_33);
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(sym__2, term_o_78, term_q_45);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(sym__2, term_t_78, term_q_45);
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(sym__2, term_y_78, term_q_45);
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(sym__2, term_m_80, term_n_80);
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(sym__2, term_c_81, term_q_45);
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(sym__3, term_m_80, term_n_80, (ATerm) ATempty);
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeAppl(sym__2, term_v_63, term_x_82);
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_a_48);
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_q_33);
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(sym__2, term_d_44, (ATerm) ATempty);
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm canonicalize_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm output_optimized_0_0 (ATerm);
ATerm stratego_of_0_0 (ATerm);
ATerm optimize2_0_0 (ATerm);
ATerm desugar_case_0_0 (ATerm);
ATerm compile_match_0_0 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
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
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
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
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm);
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
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
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
  ATerm f_0 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm j_0 = NULL;
    t = not_null(f_0);
    if(((j_0 != NULL) && (j_0 != t)))
      _fail(t);
    else
      j_0 = t;
    t = not_null(f_0);
    t = SSL_exit(not_null(j_0));
    return(t);
  }
  if(((f_0 != NULL) && (f_0 != t)))
    _fail(t);
  else
    f_0 = t;
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
      ATerm h_24;
      h_24 = t;
      t = SSL_printnl(not_null(v_1), not_null(w_1));
      t = h_24;
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
  ATerm z_26 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = u_92(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = z_26;
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
    ATerm b_0 (ATerm t)
    {
      t = term_q_33;
      return(t);
    }
    t = crush_2_0(b_0, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm r_33;
    r_33 = t;
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
      t = term_s_33;
      t = get_config_0_0(t);
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      t = w_3(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_t_33);
      t = geq_0_0(t);
    }
    t = r_33;
    t = j_100(t);
    return(t);
  }
  t = try_1_0(l_0, t);
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
          t = term_u_33;
          t = get_config_0_0(t);
          if(((h_4 != NULL) && (h_4 != t)))
            _fail(t);
          else
            h_4 = t;
          t = k_4(t);
          t = (ATerm) ATmakeAppl(sym__2, term_b_35, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_c_35), not_null(d_4)));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = term_d_35;
          return(t);
        }
        t = say_1_0(t_0, t);
        return(t);
      }
      t = if_verbose2_1_0(s_0, t);
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_35;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm v_0 (ATerm t)
              {
                t = term_g_35;
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
          t = term_h_35;
          t = get_config_0_0(t);
          if(((x_4 != NULL) && (x_4 != t)))
            _fail(t);
          else
            x_4 = t;
          t = b_5(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_c_35), not_null(s_4)), term_i_35));
          t = conc_0_0(t);
          if(((y_4 != NULL) && (y_4 != t)))
            _fail(t);
          else
            y_4 = t;
          t = c_5(t);
          t = (ATerm) ATmakeAppl(sym__2, term_b_35, not_null(v_4));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = term_j_35;
          return(t);
        }
        t = say_1_0(x_0, t);
        return(t);
      }
      t = if_verbose2_1_0(w_0, t);
      {
        ATerm y_0 (ATerm t)
        {
          t = term_w_35;
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
  ATerm x_35 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_36;
      e_36 = t;
      t = term_i_35;
      t = get_config_0_0(t);
      t = e_36;
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = x_35;
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
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_h_36));
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_i_36);
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
      t = term_i_36;
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
          ATerm j_36 = t;
          if((PushChoice() == 0))
            {
              ATerm k_36 = t;
              int l_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(l_36);
                }
              else
                {
                  t = k_36;
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
              t = j_36;
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
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_6(t);
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            {
              ATerm k_37 = t;
              int l_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_6(t);
                  ;
                  LocalPopChoice(l_37);
                }
              else
                {
                  t = k_37;
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
    t = term_q_37;
    return(t);
  }
  t = xtc_transform_1_0(g_1, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_r_37;
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
    t = term_s_37;
    t = xtc_find_0_0(t);
    if(((r_6 != NULL) && (r_6 != t)))
      _fail(t);
    else
      r_6 = t;
    t = s_6(t);
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_t_37);
    return(t);
  }
  t = xtc_transform_2_0(h_1, i_1, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_a_38;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm e_38;
    e_38 = t;
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
    t = e_38;
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
      t = term_f_38;
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
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_f_38);
          return(t);
        }
        t = map_1_0(l_1, t);
        if(((b_7 != NULL) && (b_7 != t)))
          _fail(t);
        else
          b_7 = t;
        t = e_7(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_g_38)), not_null(w_6));
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
    ATerm q_38;
    q_38 = t;
    {
      ATerm n_1 (ATerm t)
      {
        t = term_u_38;
        return(t);
      }
      t = debug_1_0(n_1, t);
      {
        ATerm y_38;
        y_38 = t;
        t = term_z_38;
        t = get_config_0_0(t);
        t = y_38;
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
              t = term_a_39;
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
              t = term_b_39;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_o_39), term_n_39);
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
                  t = term_p_39;
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
                  t = (ATerm) ATinsert(ATempty, term_q_39);
                  return(t);
                }
                t = say_1_0(u_1, t);
              }
            }
          }
        }
      }
    }
    t = q_38;
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_c_40;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(y_1, z_1, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_d_40;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(a_2, b_2, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_k_40;
    return(t);
  }
  ATerm d_2 (ATerm t)
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
    t = pass_verbose_0_0(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = c_8(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(c_2, d_2, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_o_40;
      return(t);
    }
    t = debug_1_0(f_2, t);
    return(t);
  }
  t = if_verbose2_1_0(e_2, t);
  {
    ATerm g_2 (ATerm t)
    {
      ATerm i_2 (ATerm t)
      {
        ATerm e_8 = NULL;
        ATerm f_8 = NULL;
        ATerm g_8 (ATerm t)
        {
          t = not_null(f_8);
          if(((e_8 != NULL) && (e_8 != t)))
            _fail(t);
          else
            e_8 = t;
          t = not_null(f_8);
          return(t);
        }
        if(((f_8 != NULL) && (f_8 != t)))
          _fail(t);
        else
          f_8 = t;
        t = g_8(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_s_40));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(i_2, t);
      return(t);
    }
    ATerm h_2 (ATerm t)
    {
      t = canonicalize_0_0(t);
      t = bound_unbound_vars_0_0(t);
      t = stratego_cf_0_0(t);
      t = output_canonical_0_0(t);
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      t = abox2text_0_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            t = term_t_40;
            return(t);
          }
          t = get_outfile_1_0(k_2, t);
          return(t);
        }
        t = rename_to_1_0(j_2, t);
      }
      return(t);
    }
    t = profile_p__2_0(g_2, h_2, t);
  }
  return(t);
}
ATerm output_optimized_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm a_41;
    a_41 = t;
    {
      ATerm m_2 (ATerm t)
      {
        t = term_b_41;
        return(t);
      }
      t = debug_1_0(m_2, t);
      {
        ATerm h_41;
        h_41 = t;
        t = term_l_41;
        t = get_config_0_0(t);
        t = h_41;
        {
          ATerm n_2 (ATerm t)
          {
            ATerm m_8 = NULL;
            ATerm q_8 (ATerm t)
            {
              t = not_null(m_8);
              if(((k_8 != NULL) && (k_8 != t)))
                _fail(t);
              else
                k_8 = t;
              t = not_null(m_8);
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              t = term_m_41;
              return(t);
            }
            t = get_outfile_1_0(o_2, t);
            if(((m_8 != NULL) && (m_8 != t)))
              _fail(t);
            else
              m_8 = t;
            t = q_8(t);
            return(t);
          }
          t = copy_to_1_0(n_2, t);
          {
            ATerm p_2 (ATerm t)
            {
              t = term_b_39;
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm n_8 = NULL;
              ATerm o_8 = NULL;
              ATerm r_8 (ATerm t)
              {
                t = not_null(o_8);
                if(((n_8 != NULL) && (n_8 != t)))
                  _fail(t);
                else
                  n_8 = t;
                t = not_null(o_8);
                return(t);
              }
              t = pass_verbose_0_0(t);
              if(((o_8 != NULL) && (o_8 != t)))
                _fail(t);
              else
                o_8 = t;
              t = r_8(t);
              t = (ATerm) ATinsert(CheckATermList(not_null(n_8)), term_n_39);
              return(t);
            }
            t = xtc_transform_2_0(p_2, q_2, t);
            {
              ATerm r_2 (ATerm t)
              {
                ATerm p_8 = NULL;
                ATerm s_8 (ATerm t)
                {
                  t = not_null(p_8);
                  if(((l_8 != NULL) && (l_8 != t)))
                    _fail(t);
                  else
                    l_8 = t;
                  t = not_null(p_8);
                  return(t);
                }
                ATerm s_2 (ATerm t)
                {
                  t = term_s_41;
                  return(t);
                }
                t = get_outfile_1_0(s_2, t);
                if(((p_8 != NULL) && (p_8 != t)))
                  _fail(t);
                else
                  p_8 = t;
                t = s_8(t);
                return(t);
              }
              t = copy_to_1_0(r_2, t);
              {
                ATerm t_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_q_39);
                  return(t);
                }
                t = say_1_0(t_2, t);
              }
            }
          }
        }
      }
    }
    t = a_41;
    return(t);
  }
  t = try_1_0(l_2, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_t_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(u_2, e_3, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_u_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(f_3, g_3, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = term_e_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(h_3, t_3, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_f_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(x_3, y_3, t);
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_n_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(z_3, a_4, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_o_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(l_4, m_4, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_p_42;
    return(t);
  }
  ATerm o_4 (ATerm t)
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
    t = pass_verbose_0_0(t);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = u_9(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(n_4, o_4, t);
  return(t);
}
ATerm optimize1_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    t = term_q_42;
    return(t);
  }
  ATerm d_5 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(p_4, d_5, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = term_s_42;
      return(t);
    }
    t = debug_1_0(i_5, t);
    return(t);
  }
  t = if_verbose2_1_0(h_5, t);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
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
        if(((b_10 != NULL) && (b_10 != t)))
          _fail(t);
        else
          b_10 = t;
        t = c_10(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_t_42));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(r_5, t);
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      t = optimize1_0_0(t);
      {
        ATerm s_5 (ATerm t)
        {
          ATerm u_42;
          u_42 = t;
          {
            ATerm w_42 = t;
            if((PushChoice() == 0))
              {
                t = term_j_43;
                t = get_config_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_42;
              }
          }
          t = u_42;
          t = fusion_0_0(t);
          return(t);
        }
        t = try_1_0(s_5, t);
        t = inline_0_0(t);
        t = dead_def_elim_0_0(t);
        t = compile_match_0_0(t);
        t = desugar_case_0_0(t);
        t = optimize2_0_0(t);
        t = stratego_of_0_0(t);
        t = output_optimized_0_0(t);
      }
      return(t);
    }
    t = profile_p__2_0(p_5, q_5, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    t = term_k_43;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    ATerm g_10 (ATerm t)
    {
      t = not_null(f_10);
      if(((e_10 != NULL) && (e_10 != t)))
        _fail(t);
      else
        e_10 = t;
      t = not_null(f_10);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((f_10 != NULL) && (f_10 != t)))
      _fail(t);
    else
      f_10 = t;
    t = g_10(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(t_5, u_5, t);
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = term_l_43;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm i_10 = NULL;
    ATerm j_10 = NULL;
    ATerm k_10 (ATerm t)
    {
      t = not_null(j_10);
      if(((i_10 != NULL) && (i_10 != t)))
        _fail(t);
      else
        i_10 = t;
      t = not_null(j_10);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    t = k_10(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(v_5, w_5, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    t = term_m_43;
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm o_10 = NULL,q_10 = NULL;
    ATerm z_43;
    z_43 = t;
    {
      ATerm p_10 = NULL;
      ATerm u_10 (ATerm t)
      {
        t = not_null(p_10);
        if(((o_10 != NULL) && (o_10 != t)))
          _fail(t);
        else
          o_10 = t;
        t = not_null(p_10);
        return(t);
      }
      t = pass_verbose_0_0(t);
      if(((p_10 != NULL) && (p_10 != t)))
        _fail(t);
      else
        p_10 = t;
      t = u_10(t);
    }
    t = z_43;
    {
      ATerm t_10 = NULL;
      ATerm w_10 (ATerm t)
      {
        t = not_null(t_10);
        if(((q_10 != NULL) && (q_10 != t)))
          _fail(t);
        else
          q_10 = t;
        t = not_null(t_10);
        return(t);
      }
      t = term_d_44;
      t = get_config_0_0(t);
      {
        ATerm t_6 (ATerm t)
        {
          ATerm r_10 = NULL;
          ATerm s_10 = NULL;
          ATerm v_10 (ATerm t)
          {
            t = not_null(s_10);
            if(((r_10 != NULL) && (r_10 != t)))
              _fail(t);
            else
              r_10 = t;
            t = not_null(s_10);
            return(t);
          }
          if(((s_10 != NULL) && (s_10 != t)))
            _fail(t);
          else
            s_10 = t;
          t = v_10(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), term_d_44);
          return(t);
        }
        t = map_1_0(t_6, t);
        if(((t_10 != NULL) && (t_10 != t)))
          _fail(t);
        else
          t_10 = t;
        t = w_10(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_10)), (ATerm) ATinsert(ATempty, term_g_38)), not_null(o_10));
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(x_5, p_6, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = term_e_44;
    return(t);
  }
  ATerm v_6 (ATerm t)
  {
    ATerm y_10 = NULL;
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
    t = pass_verbose_0_0(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = a_11(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(u_6, v_6, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    t = term_f_44;
    return(t);
  }
  ATerm g_7 (ATerm t)
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
    t = pass_verbose_0_0(t);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = e_11(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(c_11)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(f_7, g_7, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm h_7 (ATerm t)
  {
    ATerm j_44;
    j_44 = t;
    t = term_k_44;
    t = get_config_0_0(t);
    t = j_44;
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0_0(t);
          ;
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          t = (ATerm) ATinsert(ATempty, term_q_44);
          t = fatal_error_0_0(t);
        }
      {
        ATerm r_7 (ATerm t)
        {
          ATerm h_11 = NULL;
          ATerm i_11 (ATerm t)
          {
            t = not_null(h_11);
            if(((g_11 != NULL) && (g_11 != t)))
              _fail(t);
            else
              g_11 = t;
            t = not_null(h_11);
            return(t);
          }
          ATerm v_7 (ATerm t)
          {
            t = term_r_44;
            return(t);
          }
          t = get_outfile_1_0(v_7, t);
          if(((h_11 != NULL) && (h_11 != t)))
            _fail(t);
          else
            h_11 = t;
          t = i_11(t);
          return(t);
        }
        t = copy_to_1_0(r_7, t);
        {
          ATerm z_7 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_t_44);
            return(t);
          }
          t = say_1_0(z_7, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(h_7, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm u_44;
    u_44 = t;
    {
      ATerm k_11 = NULL;
      ATerm l_11 = NULL;
      ATerm m_11 (ATerm t)
      {
        t = not_null(l_11);
        if(((k_11 != NULL) && (k_11 != t)))
          _fail(t);
        else
          k_11 = t;
        t = not_null(l_11);
        return(t);
      }
      t = term_y_44;
      t = get_config_0_0(t);
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      t = m_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_11), term_t_33);
      t = geq_0_0(t);
    }
    t = u_44;
    t = l_101(t);
    return(t);
  }
  t = try_1_0(d_8, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  ATerm h_8 (ATerm t)
  {
    t = term_z_44;
    return(t);
  }
  ATerm i_8 (ATerm t)
  {
    ATerm p_11 = NULL;
    ATerm q_11 = NULL;
    ATerm t_11 (ATerm t)
    {
      t = not_null(q_11);
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = not_null(q_11);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    t = t_11(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(p_11)), term_g_38);
    return(t);
  }
  t = xtc_transform_2_0(h_8, i_8, t);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm s_11 = NULL;
        ATerm u_11 (ATerm t)
        {
          t = not_null(s_11);
          if(((r_11 != NULL) && (r_11 != t)))
            _fail(t);
          else
            r_11 = t;
          t = not_null(s_11);
          return(t);
        }
        ATerm x_8 (ATerm t)
        {
          t = term_a_45;
          return(t);
        }
        t = get_outfile_1_0(x_8, t);
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = u_11(t);
        return(t);
      }
      t = copy_to_1_0(t_8, t);
      {
        ATerm b_9 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_11)), term_b_45);
          return(t);
        }
        t = say_1_0(b_9, t);
      }
      return(t);
    }
    t = if_keep2_1_0(j_8, t);
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm c_45;
    c_45 = t;
    {
      ATerm w_11 = NULL;
      ATerm x_11 = NULL;
      ATerm y_11 (ATerm t)
      {
        t = not_null(x_11);
        if(((w_11 != NULL) && (w_11 != t)))
          _fail(t);
        else
          w_11 = t;
        t = not_null(x_11);
        return(t);
      }
      t = term_y_44;
      t = get_config_0_0(t);
      if(((x_11 != NULL) && (x_11 != t)))
        _fail(t);
      else
        x_11 = t;
      t = y_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), term_m_45);
      t = geq_0_0(t);
    }
    t = c_45;
    t = m_101(t);
    return(t);
  }
  t = try_1_0(f_9, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  ATerm h_12 (ATerm t)
  {
    ATerm e_12 = NULL,f_12 = NULL;
    t = not_null(d_12);
    if(((e_12 != NULL) && (e_12 != t)))
      _fail(t);
    else
      e_12 = t;
    t = not_null(c_12);
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
      t = term_q_45;
      t = g_79(t);
      if(((g_12 != NULL) && (g_12 != t)))
        _fail(t);
      else
        g_12 = t;
      t = i_12(t);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(e_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_t_45, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_12)), (ATerm) ATempty))))));
    }
    return(t);
  }
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = not_null(c_12);
  if(match_cons(t, sym_Specification_1))
    {
      d_12 = ATgetArgument(t, 0);
      t = h_12(t);
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
  ATerm l_12 = NULL,n_12 = NULL;
  ATerm j_9 (ATerm t)
  {
    ATerm u_45;
    u_45 = t;
    {
      ATerm m_12 = NULL;
      ATerm p_12 (ATerm t)
      {
        t = not_null(m_12);
        if(((l_12 != NULL) && (l_12 != t)))
          _fail(t);
        else
          l_12 = t;
        t = not_null(m_12);
        {
          ATerm n_9 (ATerm t)
          {
            ATerm r_9 (ATerm t)
            {
              t = term_w_45;
              return(t);
            }
            t = debug_1_0(r_9, t);
            return(t);
          }
          t = if_verbose2_1_0(n_9, t);
        }
        return(t);
      }
      t = term_z_45;
      t = get_config_0_0(t);
      if(((m_12 != NULL) && (m_12 != t)))
        _fail(t);
      else
        m_12 = t;
      t = p_12(t);
    }
    t = u_45;
    {
      ATerm v_9 (ATerm t)
      {
        ATerm z_9 (ATerm t)
        {
          t = not_null(l_12);
          return(t);
        }
        t = AddMain_1_0(z_9, t);
        return(t);
      }
      t = xtc_io_transform_1_0(v_9, t);
    }
    return(t);
  }
  t = try_1_0(j_9, t);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm h_10 (ATerm t)
      {
        ATerm o_12 = NULL;
        ATerm q_12 (ATerm t)
        {
          t = not_null(o_12);
          if(((n_12 != NULL) && (n_12 != t)))
            _fail(t);
          else
            n_12 = t;
          t = not_null(o_12);
          return(t);
        }
        ATerm l_10 (ATerm t)
        {
          t = term_a_46;
          return(t);
        }
        t = get_outfile_1_0(l_10, t);
        if(((o_12 != NULL) && (o_12 != t)))
          _fail(t);
        else
          o_12 = t;
        t = q_12(t);
        return(t);
      }
      t = copy_to_1_0(h_10, t);
      {
        ATerm m_10 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_12)), term_b_46);
          return(t);
        }
        t = say_1_0(m_10, t);
      }
      return(t);
    }
    t = if_keep3_1_0(d_10, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm b_13 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
    t = not_null(u_12);
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = not_null(u_12);
    {
      ATerm n_10 (ATerm t)
      {
        ATerm c_46;
        c_46 = t;
        {
          ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
          ATerm c_13 (ATerm t)
          {
            t = not_null(z_12);
            if(((x_12 != NULL) && (x_12 != t)))
              _fail(t);
            else
              x_12 = t;
            t = not_null(a_13);
            if(((w_12 != NULL) && (w_12 != t)))
              _fail(t);
            else
              w_12 = t;
            t = not_null(x_12);
            {
              ATerm x_10 (ATerm t)
              {
                t = try_1_0(remove_file_0_0, t);
                return(t);
              }
              t = map_1_0(x_10, t);
            }
            return(t);
          }
          t = term_f_46;
          t = table_get_0_0(t);
          if(((y_12 != NULL) && (y_12 != t)))
            _fail(t);
          else
            y_12 = t;
          t = not_null(y_12);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_12 = ATgetFirst((ATermList) t);
              a_13 = (ATerm) ATgetNext((ATermList) t);
              t = c_13(t);
            }
          else
            {
              _fail(t);
            }
        }
        t = c_46;
        {
          ATerm b_11 (ATerm t)
          {
            t = term_d_46;
            return(t);
          }
          t = end_scope_1_0(b_11, t);
        }
        return(t);
      }
      t = repeat_1_0(n_10, t);
      t = exit_0_0(t);
    }
    return(t);
  }
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = b_13(t);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_35;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
        t = term_i_36;
      }
    return(t);
  }
  t = copy_to_1_0(f_11, t);
  t = term_q_33;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,h_13 = NULL;
  ATerm i_46;
  i_46 = t;
  {
    ATerm g_13 = NULL;
    ATerm j_13 (ATerm t)
    {
      t = not_null(g_13);
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = not_null(g_13);
      return(t);
    }
    t = h_79(t);
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = j_13(t);
  }
  t = i_46;
  {
    ATerm i_13 = NULL;
    ATerm k_13 (ATerm t)
    {
      t = not_null(i_13);
      if(((h_13 != NULL) && (h_13 != t)))
        _fail(t);
      else
        h_13 = t;
      t = not_null(i_13);
      return(t);
    }
    t = term_j_46;
    t = get_config_0_0(t);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = k_13(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(f_13));
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  ATerm v_13 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,t_13 = NULL;
    t = not_null(p_13);
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = not_null(p_13);
    {
      ATerm l_46;
      l_46 = t;
      {
        ATerm s_13 = NULL;
        ATerm w_13 (ATerm t)
        {
          t = not_null(s_13);
          if(((r_13 != NULL) && (r_13 != t)))
            _fail(t);
          else
            r_13 = t;
          t = not_null(s_13);
          return(t);
        }
        t = SSLgetAnnotations(not_null(q_13));
        if(((s_13 != NULL) && (s_13 != t)))
          _fail(t);
        else
          s_13 = t;
        t = w_13(t);
      }
      t = l_46;
      {
        ATerm u_13 = NULL;
        ATerm x_13 (ATerm t)
        {
          t = not_null(u_13);
          if(((t_13 != NULL) && (t_13 != t)))
            _fail(t);
          else
            t_13 = t;
          t = not_null(u_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(r_13));
        if(((u_13 != NULL) && (u_13 != t)))
          _fail(t);
        else
          u_13 = t;
        t = x_13(t);
        t = not_null(t_13);
      }
    }
    return(t);
  }
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  t = not_null(p_13);
  if(match_cons(t, sym_stderr_0))
    {
      t = v_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm i_14 (ATerm t)
  {
    ATerm d_14 = NULL,e_14 = NULL,g_14 = NULL;
    t = not_null(c_14);
    if(((d_14 != NULL) && (d_14 != t)))
      _fail(t);
    else
      d_14 = t;
    t = not_null(c_14);
    {
      ATerm p_46;
      p_46 = t;
      {
        ATerm f_14 = NULL;
        ATerm j_14 (ATerm t)
        {
          t = not_null(f_14);
          if(((e_14 != NULL) && (e_14 != t)))
            _fail(t);
          else
            e_14 = t;
          t = not_null(f_14);
          return(t);
        }
        t = SSLgetAnnotations(not_null(d_14));
        if(((f_14 != NULL) && (f_14 != t)))
          _fail(t);
        else
          f_14 = t;
        t = j_14(t);
      }
      t = p_46;
      {
        ATerm h_14 = NULL;
        ATerm k_14 (ATerm t)
        {
          t = not_null(h_14);
          if(((g_14 != NULL) && (g_14 != t)))
            _fail(t);
          else
            g_14 = t;
          t = not_null(h_14);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(e_14));
        if(((h_14 != NULL) && (h_14 != t)))
          _fail(t);
        else
          h_14 = t;
        t = k_14(t);
        t = not_null(g_14);
      }
    }
    return(t);
  }
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = not_null(c_14);
  if(match_cons(t, sym_stdout_0))
    {
      t = i_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  ATerm e_15 (ATerm t)
  {
    ATerm v_14 = NULL,w_14 = NULL;
    t = not_null(u_14);
    if(((v_14 != NULL) && (v_14 != t)))
      _fail(t);
    else
      v_14 = t;
    t = not_null(t_14);
    {
      ATerm x_14 = NULL;
      ATerm h_15 (ATerm t)
      {
        t = not_null(x_14);
        if(((w_14 != NULL) && (w_14 != t)))
          _fail(t);
        else
          w_14 = t;
        t = not_null(x_14);
        {
          ATerm q_46 = t;
          int r_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(r_46);
            }
          else
            {
              t = q_46;
              t = stderr_0_0(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_14), not_null(w_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = h_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_14));
    }
    return(t);
  }
  ATerm f_15 (ATerm t)
  {
    ATerm y_14 = NULL,z_14 = NULL;
    t = not_null(u_14);
    if(((y_14 != NULL) && (y_14 != t)))
      _fail(t);
    else
      y_14 = t;
    t = not_null(t_14);
    {
      ATerm a_15 = NULL;
      ATerm i_15 (ATerm t)
      {
        t = not_null(a_15);
        if(((z_14 != NULL) && (z_14 != t)))
          _fail(t);
        else
          z_14 = t;
        t = not_null(a_15);
        {
          ATerm s_46 = t;
          if((PushChoice() == 0))
            {
              ATerm x_46 = t;
              int y_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(y_46);
                }
              else
                {
                  t = x_46;
                  {
                    ATerm z_46 = t;
                    int a_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stderr_0_0(t);
                        ;
                        LocalPopChoice(a_47);
                      }
                    else
                      {
                        t = z_46;
                        {
                          ATerm b_15 = NULL;
                          ATerm j_15 (ATerm t)
                          {
                            t = not_null(b_15);
                            if(((y_14 != NULL) && (y_14 != t)))
                              _fail(t);
                            else
                              y_14 = t;
                            t = not_null(b_15);
                            return(t);
                          }
                          if(((b_15 != NULL) && (b_15 != t)))
                            _fail(t);
                          else
                            b_15 = t;
                          t = j_15(t);
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_46;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), not_null(z_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((a_15 != NULL) && (a_15 != t)))
        _fail(t);
      else
        a_15 = t;
      t = i_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_14));
    }
    return(t);
  }
  ATerm g_15 (ATerm t)
  {
    ATerm c_15 = NULL;
    t = not_null(u_14);
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    t = not_null(t_14);
    {
      ATerm d_15 = NULL;
      ATerm k_15 (ATerm t)
      {
        t = not_null(d_15);
        if(((c_15 != NULL) && (c_15 != t)))
          _fail(t);
        else
          c_15 = t;
        t = not_null(d_15);
        return(t);
      }
      t = q_0(t);
      if(((d_15 != NULL) && (d_15 != t)))
        _fail(t);
      else
        d_15 = t;
      t = k_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_15));
    }
    return(t);
  }
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  t = not_null(t_14);
  if(match_cons(t, sym_FILE_1))
    {
      u_14 = ATgetArgument(t, 0);
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_15(t);
            ;
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
            {
              ATerm d_47 = t;
              int e_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_15(t);
                  ;
                  LocalPopChoice(e_47);
                }
              else
                {
                  t = d_47;
                  t = g_15(t);
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
  ATerm m_15 = NULL;
  ATerm j_11 (ATerm t)
  {
    ATerm f_47;
    f_47 = t;
    t = term_g_47;
    t = get_config_0_0(t);
    t = f_47;
    {
      ATerm n_11 (ATerm t)
      {
        ATerm n_15 = NULL;
        ATerm o_15 (ATerm t)
        {
          t = not_null(n_15);
          if(((m_15 != NULL) && (m_15 != t)))
            _fail(t);
          else
            m_15 = t;
          t = not_null(n_15);
          return(t);
        }
        ATerm o_11 (ATerm t)
        {
          t = term_r_47;
          return(t);
        }
        t = get_outfile_1_0(o_11, t);
        if(((n_15 != NULL) && (n_15 != t)))
          _fail(t);
        else
          n_15 = t;
        t = o_15(t);
        return(t);
      }
      t = copy_to_1_0(n_11, t);
      {
        ATerm s_47;
        s_47 = t;
        t = (ATerm) ATinsert(ATempty, term_x_47);
        t = echo_0_0(t);
        t = s_47;
        t = xtc_io_exit_0_0(t);
      }
    }
    return(t);
  }
  t = try_1_0(j_11, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
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
  t = term_y_44;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
        t = term_a_48;
      }
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = v_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), term_a_48);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = w_15(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_y_44);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm a_16 = NULL,c_16 = NULL;
  ATerm e_16 (ATerm t)
  {
    t = not_null(c_16);
    if(((z_15 != NULL) && (z_15 != t)))
      _fail(t);
    else
      z_15 = t;
    t = not_null(c_16);
    return(t);
  }
  ATerm b_16 = NULL;
  ATerm d_16 (ATerm t)
  {
    t = not_null(b_16);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = not_null(b_16);
    return(t);
  }
  t = term_s_33;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = term_a_48;
      }
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    t = d_16(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), term_a_48);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = e_16(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_15)), term_s_33);
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  ATerm h_16 = NULL;
  ATerm i_16 (ATerm t)
  {
    t = not_null(h_16);
    if(((g_16 != NULL) && (g_16 != t)))
      _fail(t);
    else
      g_16 = t;
    t = not_null(h_16);
    return(t);
  }
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      t = term_j_46;
      t = get_config_0_0(t);
    }
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = i_16(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), term_h_48);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  ATerm v_16 (ATerm t)
  {
    ATerm q_16 = NULL;
    t = not_null(o_16);
    {
      ATerm r_16 = NULL;
      ATerm x_16 (ATerm t)
      {
        t = not_null(r_16);
        if(((q_16 != NULL) && (q_16 != t)))
          _fail(t);
        else
          q_16 = t;
        t = not_null(r_16);
        return(t);
      }
      t = term_i_48;
      t = ReadFromFile_0_0(t);
      if(((r_16 != NULL) && (r_16 != t)))
        _fail(t);
      else
        r_16 = t;
      t = x_16(t);
      t = not_null(q_16);
    }
    return(t);
  }
  ATerm w_16 (ATerm t)
  {
    ATerm s_16 = NULL,t_16 = NULL;
    t = not_null(p_16);
    if(((s_16 != NULL) && (s_16 != t)))
      _fail(t);
    else
      s_16 = t;
    t = not_null(o_16);
    {
      ATerm u_16 = NULL;
      ATerm y_16 (ATerm t)
      {
        t = not_null(u_16);
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
        t = not_null(u_16);
        return(t);
      }
      t = not_null(s_16);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((u_16 != NULL) && (u_16 != t)))
        _fail(t);
      else
        u_16 = t;
      t = y_16(t);
      t = not_null(t_16);
    }
    return(t);
  }
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = not_null(o_16);
  if(match_cons(t, sym_stdin_0))
    {
      t = v_16(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          p_16 = ATgetArgument(t, 0);
          t = w_16(t);
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  ATerm l_17 (ATerm t)
  {
    ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
    t = not_null(f_17);
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    t = not_null(g_17);
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    t = not_null(d_17);
    t = SSL_write_term_to_stream_baf(not_null(h_17), not_null(i_17));
    {
      ATerm k_17 = NULL;
      ATerm m_17 (ATerm t)
      {
        t = not_null(k_17);
        if(((j_17 != NULL) && (j_17 != t)))
          _fail(t);
        else
          j_17 = t;
        t = not_null(k_17);
        return(t);
      }
      if(((k_17 != NULL) && (k_17 != t)))
        _fail(t);
      else
        k_17 = t;
      t = m_17(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_17));
    }
    return(t);
  }
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  t = not_null(d_17);
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      t = not_null(e_17);
      if(match_cons(t, sym_Stream_1))
        {
          f_17 = ATgetArgument(t, 0);
          t = l_17(t);
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  ATerm a_18 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,y_17 = NULL;
    t = not_null(s_17);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = not_null(t_17);
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = not_null(u_17);
    {
      ATerm x_17 = NULL;
      ATerm b_18 (ATerm t)
      {
        t = not_null(x_17);
        if(((w_17 != NULL) && (w_17 != t)))
          _fail(t);
        else
          w_17 = t;
        t = not_null(x_17);
        return(t);
      }
      if(((x_17 != NULL) && (x_17 != t)))
        _fail(t);
      else
        x_17 = t;
      t = b_18(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), term_j_48);
      t = open_stream_0_0(t);
      {
        ATerm z_17 = NULL;
        ATerm c_18 (ATerm t)
        {
          t = not_null(z_17);
          if(((y_17 != NULL) && (y_17 != t)))
            _fail(t);
          else
            y_17 = t;
          t = not_null(z_17);
          return(t);
        }
        if(((z_17 != NULL) && (z_17 != t)))
          _fail(t);
        else
          z_17 = t;
        t = c_18(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(v_17));
        t = f_99(t);
        t = fclose_0_0(t);
        t = not_null(v_17);
      }
    }
    return(t);
  }
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(r_17);
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
      t = a_18(t);
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
  ATerm f_18 = NULL;
  ATerm j_18 (ATerm t)
  {
    ATerm g_18 = NULL,h_18 = NULL;
    t = not_null(f_18);
    if(((g_18 != NULL) && (g_18 != t)))
      _fail(t);
    else
      g_18 = t;
    t = not_null(f_18);
    {
      ATerm i_18 = NULL;
      ATerm k_18 (ATerm t)
      {
        t = not_null(i_18);
        if(((h_18 != NULL) && (h_18 != t)))
          _fail(t);
        else
          h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(g_18));
        t = WriteToBinaryFile_0_0(t);
        t = not_null(h_18);
        t = close_file_0_0(t);
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((i_18 != NULL) && (i_18 != t)))
        _fail(t);
      else
        i_18 = t;
      t = k_18(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
    }
    return(t);
  }
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  t = j_18(t);
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
  ATerm m_18 = NULL;
  ATerm o_18 (ATerm t)
  {
    ATerm n_18 = NULL;
    t = not_null(m_18);
    if(((n_18 != NULL) && (n_18 != t)))
      _fail(t);
    else
      n_18 = t;
    t = not_null(m_18);
    t = SSL_close_file(not_null(n_18));
    return(t);
  }
  if(((m_18 != NULL) && (m_18 != t)))
    _fail(t);
  else
    m_18 = t;
  t = o_18(t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  ATerm w_18 (ATerm t)
  {
    ATerm u_18 = NULL,v_18 = NULL;
    t = not_null(s_18);
    if(((u_18 != NULL) && (u_18 != t)))
      _fail(t);
    else
      u_18 = t;
    t = not_null(t_18);
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(r_18);
    t = SSL_execvp(not_null(u_18), not_null(v_18));
    return(t);
  }
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  t = not_null(r_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      t = w_18(t);
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
  ATerm y_18 = NULL;
  ATerm a_19 (ATerm t)
  {
    ATerm z_18 = NULL;
    t = not_null(y_18);
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = not_null(y_18);
    t = SSL_int_to_string(not_null(z_18));
    return(t);
  }
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = a_19(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  ATerm s_19 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL;
    t = not_null(h_19);
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = not_null(g_19);
    {
      ATerm m_19 = NULL;
      ATerm u_19 (ATerm t)
      {
        t = not_null(m_19);
        if(((l_19 != NULL) && (l_19 != t)))
          _fail(t);
        else
          l_19 = t;
        t = not_null(m_19);
        return(t);
      }
      t = not_null(k_19);
      t = int_to_string_0_0(t);
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      t = u_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_48), not_null(l_19)), term_k_48);
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  ATerm t_19 (ATerm t)
  {
    ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
    t = not_null(h_19);
    if(((n_19 != NULL) && (n_19 != t)))
      _fail(t);
    else
      n_19 = t;
    t = not_null(i_19);
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    t = not_null(j_19);
    if(((p_19 != NULL) && (p_19 != t)))
      _fail(t);
    else
      p_19 = t;
    t = not_null(g_19);
    {
      ATerm r_19 = NULL;
      ATerm v_19 (ATerm t)
      {
        t = not_null(r_19);
        if(((q_19 != NULL) && (q_19 != t)))
          _fail(t);
        else
          q_19 = t;
        t = not_null(r_19);
        return(t);
      }
      t = not_null(o_19);
      t = int_to_string_0_0(t);
      if(((r_19 != NULL) && (r_19 != t)))
        _fail(t);
      else
        r_19 = t;
      t = v_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_19)), term_t_48), not_null(q_19)), term_q_48), not_null(n_19));
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  t = not_null(g_19);
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_19 = ATgetArgument(t, 0);
      t = s_19(t);
    }
  else
    {
      if(match_cons(t, sym_Signal_3))
        {
          h_19 = ATgetArgument(t, 0);
          i_19 = ATgetArgument(t, 1);
          j_19 = ATgetArgument(t, 2);
          t = t_19(t);
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
  ATerm x_19 = NULL;
  ATerm v_11 (ATerm t)
  {
    ATerm y_19 = NULL;
    ATerm z_19 (ATerm t)
    {
      t = not_null(y_19);
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      t = not_null(y_19);
      return(t);
    }
    t = f_87(t);
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    t = z_19(t);
    return(t);
  }
  t = fetch_1_0(v_11, t);
  t = not_null(x_19);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  ATerm j_20 (ATerm t)
  {
    ATerm e_20 = NULL;
    t = not_null(d_20);
    if(((e_20 != NULL) && (e_20 != t)))
      _fail(t);
    else
      e_20 = t;
    t = not_null(d_20);
    {
      ATerm u_48 = t;
      int b_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_56), term_c_56), term_t_55), term_p_55), term_l_55), term_h_55), term_d_55), term_z_54), term_v_54), term_r_54), term_n_54), term_j_54), term_f_54), term_z_53), term_t_53), term_n_53), term_f_53), term_z_52), term_v_52), term_r_52), term_n_52), term_x_51), term_o_51), term_g_51), term_v_50), term_f_50), term_z_49), term_n_49);
          {
            ATerm z_11 (ATerm t)
            {
              ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
              ATerm k_20 (ATerm t)
              {
                t = not_null(h_20);
                if(((e_20 != NULL) && (e_20 != t)))
                  _fail(t);
                else
                  e_20 = t;
                t = not_null(f_20);
                return(t);
              }
              if(((f_20 != NULL) && (f_20 != t)))
                _fail(t);
              else
                f_20 = t;
              t = not_null(f_20);
              if(match_cons(t, sym_Signal_3))
                {
                  g_20 = ATgetArgument(t, 0);
                  h_20 = ATgetArgument(t, 1);
                  i_20 = ATgetArgument(t, 2);
                  t = k_20(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_elem_1_0(z_11, t);
          }
          ;
          LocalPopChoice(b_49);
        }
      else
        {
          t = u_48;
          t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(e_20));
        }
    }
    return(t);
  }
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  t = j_20(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_56;
  h_56 = t;
  {
    ATerm a_12 (ATerm t)
    {
      ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
      ATerm x_20 (ATerm t)
      {
        ATerm t_20 = NULL,v_20 = NULL;
        t = not_null(r_20);
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = not_null(t_20);
        {
          ATerm k_56 = t;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL;
              if(((u_20 != NULL) && (u_20 != t)))
                _fail(t);
              else
                u_20 = t;
              t = not_null(u_20);
              if(match_int(t, -1))
                {
                  t = not_null(u_20);
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
              t = k_56;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          {
            ATerm w_20 = NULL;
            ATerm y_20 (ATerm t)
            {
              t = not_null(w_20);
              if(((v_20 != NULL) && (v_20 != t)))
                _fail(t);
              else
                v_20 = t;
              t = not_null(w_20);
              return(t);
            }
            if(((w_20 != NULL) && (w_20 != t)))
              _fail(t);
            else
              w_20 = t;
            t = y_20(t);
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), term_w_56));
            t = printnl_0_0(t);
          }
        }
        return(t);
      }
      if(((p_20 != NULL) && (p_20 != t)))
        _fail(t);
      else
        p_20 = t;
      t = not_null(p_20);
      if(match_cons(t, sym_WaitStatus_3))
        {
          q_20 = ATgetArgument(t, 0);
          r_20 = ATgetArgument(t, 1);
          s_20 = ATgetArgument(t, 2);
          t = x_20(t);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1_0(a_12, t);
  }
  t = h_56;
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  ATerm c_21 (ATerm t)
  {
    ATerm b_21 = NULL;
    t = not_null(a_21);
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = not_null(a_21);
    t = SSL_waitpid(not_null(b_21));
    return(t);
  }
  if(((a_21 != NULL) && (a_21 != t)))
    _fail(t);
  else
    a_21 = t;
  t = c_21(t);
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm h_21 = NULL;
  ATerm m_21 (ATerm t)
  {
    ATerm i_21 = NULL,j_21 = NULL;
    ATerm n_21 (ATerm t)
    {
      ATerm k_21 = NULL;
      t = not_null(j_21);
      if(((k_21 != NULL) && (k_21 != t)))
        _fail(t);
      else
        k_21 = t;
      t = not_null(j_21);
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL;
            ATerm o_21 (ATerm t)
            {
              t = not_null(i_21);
              t = a_102(t);
              return(t);
            }
            if(((l_21 != NULL) && (l_21 != t)))
              _fail(t);
            else
              l_21 = t;
            t = not_null(l_21);
            if(match_int(t, 0))
              {
                t = o_21(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(i_21));
            t = b_102(t);
          }
      }
      return(t);
    }
    t = not_null(h_21);
    if(((i_21 != NULL) && (i_21 != t)))
      _fail(t);
    else
      i_21 = t;
    t = not_null(h_21);
    t = fork_0_0(t);
    if(((j_21 != NULL) && (j_21 != t)))
      _fail(t);
    else
      j_21 = t;
    t = n_21(t);
    return(t);
  }
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = m_21(t);
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm u_21 = NULL;
  ATerm b_12 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
    ATerm d_22 (ATerm t)
    {
      ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
      ATerm e_22 (ATerm t)
      {
        t = not_null(u_21);
        return(t);
      }
      t = not_null(w_21);
      if(((y_21 != NULL) && (y_21 != t)))
        _fail(t);
      else
        y_21 = t;
      t = not_null(x_21);
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      t = not_null(y_21);
      t = waitpid_0_0(t);
      t = warn_ifsignaled_0_0(t);
      if(((z_21 != NULL) && (z_21 != t)))
        _fail(t);
      else
        z_21 = t;
      t = not_null(z_21);
      if(match_cons(t, sym_WaitStatus_3))
        {
          a_22 = ATgetArgument(t, 0);
          b_22 = ATgetArgument(t, 1);
          c_22 = ATgetArgument(t, 2);
          t = not_null(a_22);
          if(match_int(t, 0))
            {
              t = e_22(t);
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
    if(((v_21 != NULL) && (v_21 != t)))
      _fail(t);
    else
      v_21 = t;
    t = not_null(v_21);
    if(match_cons(t, sym__2))
      {
        w_21 = ATgetArgument(t, 0);
        x_21 = ATgetArgument(t, 1);
        t = d_22(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2_0(c_102, b_12, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  ATerm m_22 (ATerm t)
  {
    ATerm k_22 = NULL,l_22 = NULL;
    t = not_null(i_22);
    if(((k_22 != NULL) && (k_22 != t)))
      _fail(t);
    else
      k_22 = t;
    t = not_null(j_22);
    if(((l_22 != NULL) && (l_22 != t)))
      _fail(t);
    else
      l_22 = t;
    t = not_null(h_22);
    {
      ATerm j_12 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(l_22));
        t = execvp_0_0(t);
        return(t);
      }
      t = fork_and_wait_1_0(j_12, t);
    }
    return(t);
  }
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  t = not_null(h_22);
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
      t = m_22(t);
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
  ATerm p_22 = NULL;
  ATerm z_56;
  z_56 = t;
  {
    ATerm q_22 = NULL;
    ATerm t_22 (ATerm t)
    {
      t = not_null(q_22);
      if(((p_22 != NULL) && (p_22 != t)))
        _fail(t);
      else
        p_22 = t;
      t = not_null(q_22);
      return(t);
    }
    t = x_108(t);
    t = xtc_find_warning_0_0(t);
    if(((q_22 != NULL) && (q_22 != t)))
      _fail(t);
    else
      q_22 = t;
    t = t_22(t);
  }
  t = z_56;
  {
    ATerm a_57;
    a_57 = t;
    {
      ATerm r_22 = NULL;
      ATerm s_22 = NULL;
      ATerm u_22 (ATerm t)
      {
        t = not_null(s_22);
        if(((r_22 != NULL) && (r_22 != t)))
          _fail(t);
        else
          r_22 = t;
        t = not_null(s_22);
        return(t);
      }
      if(((s_22 != NULL) && (s_22 != t)))
        _fail(t);
      else
        s_22 = t;
      t = u_22(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), not_null(r_22));
      t = call_0_0(t);
    }
    t = a_57;
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  ATerm m_23 (ATerm t)
  {
    ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
    t = not_null(b_23);
    if(((d_23 != NULL) && (d_23 != t)))
      _fail(t);
    else
      d_23 = t;
    t = not_null(c_23);
    if(((e_23 != NULL) && (e_23 != t)))
      _fail(t);
    else
      e_23 = t;
    t = not_null(a_23);
    {
      ATerm j_57;
      j_57 = t;
      {
        ATerm i_23 = NULL;
        ATerm n_23 (ATerm t)
        {
          ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
          ATerm o_23 (ATerm t)
          {
            t = not_null(k_23);
            if(((g_23 != NULL) && (g_23 != t)))
              _fail(t);
            else
              g_23 = t;
            t = not_null(l_23);
            if(((h_23 != NULL) && (h_23 != t)))
              _fail(t);
            else
              h_23 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_23), term_e_46, (ATerm) ATinsert(CheckATermList(not_null(h_23)), (ATerm) ATinsert(CheckATermList(not_null(g_23)), not_null(d_23))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(i_23);
          if(((f_23 != NULL) && (f_23 != t)))
            _fail(t);
          else
            f_23 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(f_23), not_null(d_23), not_null(e_23));
          t = table_push_0_0(t);
          {
            ATerm k_57 = t;
            int l_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_e_46);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(l_57);
              }
            else
              {
                t = k_57;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((j_23 != NULL) && (j_23 != t)))
              _fail(t);
            else
              j_23 = t;
            t = not_null(j_23);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_23 = ATgetFirst((ATermList) t);
                l_23 = (ATerm) ATgetNext((ATermList) t);
                t = o_23(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = m_97(t);
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        t = n_23(t);
      }
      t = j_57;
    }
    return(t);
  }
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  t = not_null(a_23);
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
      t = m_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm m_57;
  m_57 = t;
  t = y_98(t);
  {
    ATerm k_12 (ATerm t)
    {
      t = term_n_57;
      return(t);
    }
    t = debug_1_0(k_12, t);
  }
  t = m_57;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  ATerm c_24 (ATerm t)
  {
    ATerm w_23 = NULL;
    t = not_null(t_23);
    if(((w_23 != NULL) && (w_23 != t)))
      _fail(t);
    else
      w_23 = t;
    t = not_null(t_23);
    {
      ATerm o_57 = t;
      if((PushChoice() == 0))
        {
          ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
          if(((x_23 != NULL) && (x_23 != t)))
            _fail(t);
          else
            x_23 = t;
          t = not_null(x_23);
          if(match_cons(t, sym__2))
            {
              y_23 = ATgetArgument(t, 0);
              z_23 = ATgetArgument(t, 1);
              t = not_null(x_23);
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
          t = o_57;
        }
      {
        ATerm r_12 (ATerm t)
        {
          t = term_p_57;
          return(t);
        }
        t = obsolete_1_0(r_12, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), term_j_48);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm d_24 (ATerm t)
  {
    ATerm a_24 = NULL,b_24 = NULL;
    t = not_null(u_23);
    if(((a_24 != NULL) && (a_24 != t)))
      _fail(t);
    else
      a_24 = t;
    t = not_null(v_23);
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    t = not_null(t_23);
    t = SSL_open_file(not_null(a_24), not_null(b_24));
    return(t);
  }
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = not_null(t_23);
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
      {
        ATerm q_57 = t;
        int r_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_24(t);
            ;
            LocalPopChoice(r_57);
          }
        else
          {
            t = q_57;
            t = d_24(t);
          }
      }
    }
  else
    {
      t = c_24(t);
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
  ATerm f_24 = NULL;
  ATerm g_24 = NULL;
  ATerm i_24 (ATerm t)
  {
    t = not_null(g_24);
    if(((f_24 != NULL) && (f_24 != t)))
      _fail(t);
    else
      f_24 = t;
    t = not_null(g_24);
    return(t);
  }
  t = term_q_45;
  t = new_0_0(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = i_24(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), term_i_58);
  t = conc_strings_0_0(t);
  {
    ATerm s_12 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(s_12, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_24 = NULL;
  ATerm m_24 (ATerm t)
  {
    ATerm l_24 = NULL;
    t = not_null(k_24);
    if(((l_24 != NULL) && (l_24 != t)))
      _fail(t);
    else
      l_24 = t;
    t = not_null(k_24);
    {
      ATerm j_58;
      j_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_j_48);
      t = open_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_24), term_q_45);
      {
        ATerm t_12 (ATerm t)
        {
          t = term_d_46;
          return(t);
        }
        t = assert_1_0(t_12, t);
      }
      t = j_58;
    }
    return(t);
  }
  t = new_file_0_0(t);
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = m_24(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  ATerm f_25 (ATerm t)
  {
    ATerm w_24 = NULL;
    t = not_null(u_24);
    {
      ATerm x_24 = NULL;
      ATerm h_25 (ATerm t)
      {
        ATerm y_24 = NULL;
        t = not_null(x_24);
        if(((w_24 != NULL) && (w_24 != t)))
          _fail(t);
        else
          w_24 = t;
        t = not_null(x_24);
        {
          ATerm z_24 = NULL;
          ATerm i_25 (ATerm t)
          {
            t = not_null(z_24);
            if(((y_24 != NULL) && (y_24 != t)))
              _fail(t);
            else
              y_24 = t;
            t = not_null(z_24);
            return(t);
          }
          t = p_0(t);
          if(((z_24 != NULL) && (z_24 != t)))
            _fail(t);
          else
            z_24 = t;
          t = i_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_24)), term_c_35));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(w_24);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((x_24 != NULL) && (x_24 != t)))
        _fail(t);
      else
        x_24 = t;
      t = h_25(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_24));
    }
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL;
    t = not_null(v_24);
    if(((a_25 != NULL) && (a_25 != t)))
      _fail(t);
    else
      a_25 = t;
    t = not_null(u_24);
    {
      ATerm c_25 = NULL;
      ATerm j_25 (ATerm t)
      {
        ATerm d_25 = NULL;
        t = not_null(c_25);
        if(((b_25 != NULL) && (b_25 != t)))
          _fail(t);
        else
          b_25 = t;
        t = not_null(c_25);
        {
          ATerm e_25 = NULL;
          ATerm k_25 (ATerm t)
          {
            t = not_null(e_25);
            if(((d_25 != NULL) && (d_25 != t)))
              _fail(t);
            else
              d_25 = t;
            t = not_null(e_25);
            return(t);
          }
          t = p_0(t);
          if(((e_25 != NULL) && (e_25 != t)))
            _fail(t);
          else
            e_25 = t;
          t = k_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), term_c_35), not_null(a_25)), term_k_58));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(b_25);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = not_null(a_25);
      t = xtc_new_file_0_0(t);
      if(((c_25 != NULL) && (c_25 != t)))
        _fail(t);
      else
        c_25 = t;
      t = j_25(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_25));
    }
    return(t);
  }
  if(((u_24 != NULL) && (u_24 != t)))
    _fail(t);
  else
    u_24 = t;
  t = not_null(u_24);
  if(match_cons(t, sym_stdin_0))
    {
      t = f_25(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          v_24 = ATgetArgument(t, 0);
          t = g_25(t);
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
  ATerm p_25 = NULL;
  ATerm v_25 (ATerm t)
  {
    ATerm q_25 = NULL,r_25 = NULL,t_25 = NULL;
    t = not_null(p_25);
    if(((q_25 != NULL) && (q_25 != t)))
      _fail(t);
    else
      q_25 = t;
    t = not_null(p_25);
    {
      ATerm l_58;
      l_58 = t;
      {
        ATerm s_25 = NULL;
        ATerm w_25 (ATerm t)
        {
          t = not_null(s_25);
          if(((r_25 != NULL) && (r_25 != t)))
            _fail(t);
          else
            r_25 = t;
          t = not_null(s_25);
          return(t);
        }
        t = SSLgetAnnotations(not_null(q_25));
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = w_25(t);
      }
      t = l_58;
      {
        ATerm u_25 = NULL;
        ATerm x_25 (ATerm t)
        {
          t = not_null(u_25);
          if(((t_25 != NULL) && (t_25 != t)))
            _fail(t);
          else
            t_25 = t;
          t = not_null(u_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(r_25));
        if(((u_25 != NULL) && (u_25 != t)))
          _fail(t);
        else
          u_25 = t;
        t = x_25(t);
        t = not_null(t_25);
      }
    }
    return(t);
  }
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  t = not_null(p_25);
  if(match_cons(t, sym_stdin_0))
    {
      t = v_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL;
  ATerm n_26 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,j_26 = NULL;
    ATerm p_26 (ATerm t)
    {
      ATerm k_26 = NULL,l_26 = NULL;
      t = not_null(j_26);
      if(((k_26 != NULL) && (k_26 != t)))
        _fail(t);
      else
        k_26 = t;
      t = not_null(j_26);
      {
        ATerm m_26 = NULL;
        ATerm q_26 (ATerm t)
        {
          t = not_null(m_26);
          if(((l_26 != NULL) && (l_26 != t)))
            _fail(t);
          else
            l_26 = t;
          t = not_null(m_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(k_26)), not_null(h_26));
        if(((m_26 != NULL) && (m_26 != t)))
          _fail(t);
        else
          m_26 = t;
        t = q_26(t);
        t = not_null(l_26);
      }
      return(t);
    }
    t = not_null(d_26);
    if(((f_26 != NULL) && (f_26 != t)))
      _fail(t);
    else
      f_26 = t;
    t = not_null(e_26);
    if(((g_26 != NULL) && (g_26 != t)))
      _fail(t);
    else
      g_26 = t;
    t = not_null(d_26);
    {
      ATerm i_26 = NULL;
      ATerm o_26 (ATerm t)
      {
        t = not_null(i_26);
        if(((h_26 != NULL) && (h_26 != t)))
          _fail(t);
        else
          h_26 = t;
        t = not_null(i_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(f_26));
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      t = o_26(t);
      t = not_null(g_26);
      t = g_71(t);
      if(((j_26 != NULL) && (j_26 != t)))
        _fail(t);
      else
        j_26 = t;
      t = p_26(t);
    }
    return(t);
  }
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = not_null(d_26);
  if(match_cons(t, sym_FILE_1))
    {
      e_26 = ATgetArgument(t, 0);
      t = n_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm m_58 = t;
  int r_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_58 = t;
      int t_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_58);
        }
      else
        {
          t = s_58;
          t = stdin_0_0(t);
        }
      LocalPopChoice(r_58);
      t = xtc_transform_file_2_0(z_108, a_109, t);
    }
  else
    {
      t = m_58;
      t = xtc_transform_term_2_0(z_108, a_109, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    ATerm u_58;
    u_58 = t;
    {
      ATerm s_26 = NULL;
      ATerm t_26 = NULL;
      ATerm u_26 (ATerm t)
      {
        t = not_null(t_26);
        if(((s_26 != NULL) && (s_26 != t)))
          _fail(t);
        else
          s_26 = t;
        t = not_null(t_26);
        return(t);
      }
      t = term_s_33;
      t = get_config_0_0(t);
      if(((t_26 != NULL) && (t_26 != t)))
        _fail(t);
      else
        t_26 = t;
      t = u_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), term_m_45);
      t = geq_0_0(t);
    }
    t = u_58;
    t = k_100(t);
    return(t);
  }
  t = try_1_0(d_13, t);
  return(t);
}
ATerm basename_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm e_13 (ATerm t)
    {
      ATerm y_58 = t;
      int z_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, e_13, t);
          ;
          LocalPopChoice(z_58);
        }
      else
        {
          t = y_58;
          {
            ATerm a_59 = t;
            int b_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 (ATerm t)
                {
                  ATerm x_26 = NULL;
                  if(((x_26 != NULL) && (x_26 != t)))
                    _fail(t);
                  else
                    x_26 = t;
                  t = not_null(x_26);
                  if(match_int(t, 47))
                    {
                      t = not_null(x_26);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2_0(l_13, _id, t);
                ;
                LocalPopChoice(b_59);
              }
            else
              {
                t = a_59;
                {
                  ATerm m_13 (ATerm t)
                  {
                    ATerm y_26 = NULL;
                    if(((y_26 != NULL) && (y_26 != t)))
                      _fail(t);
                    else
                      y_26 = t;
                    t = not_null(y_26);
                    if(match_int(t, 46))
                      {
                        t = not_null(y_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2_0(m_13, q_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(e_13, t);
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
  ATerm e_27 = NULL,f_27 = NULL;
  ATerm l_27 (ATerm t)
  {
    ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
    t = not_null(f_27);
    if(((g_27 != NULL) && (g_27 != t)))
      _fail(t);
    else
      g_27 = t;
    t = not_null(e_27);
    {
      ATerm j_27 = NULL;
      ATerm m_27 (ATerm t)
      {
        ATerm k_27 = NULL;
        ATerm n_27 (ATerm t)
        {
          t = not_null(k_27);
          if(((i_27 != NULL) && (i_27 != t)))
            _fail(t);
          else
            i_27 = t;
          t = not_null(k_27);
          {
            ATerm n_13 (ATerm t)
            {
              ATerm o_13 (ATerm t)
              {
                t = term_c_59;
                return(t);
              }
              t = debug_1_0(o_13, t);
              return(t);
            }
            t = if_verbose3_1_0(n_13, t);
            t = (ATerm) ATmakeAppl(sym__2, term_j_46, not_null(i_27));
            t = set_config_0_0(t);
          }
          return(t);
        }
        t = not_null(j_27);
        if(((h_27 != NULL) && (h_27 != t)))
          _fail(t);
        else
          h_27 = t;
        t = not_null(j_27);
        {
          ATerm y_13 (ATerm t)
          {
            ATerm z_13 (ATerm t)
            {
              t = term_d_59;
              return(t);
            }
            t = debug_1_0(z_13, t);
            return(t);
          }
          t = if_verbose3_1_0(y_13, t);
          t = (ATerm) ATmakeAppl(sym__2, term_e_59, not_null(h_27));
          t = set_config_0_0(t);
          {
            ATerm f_59 = t;
            int g_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_35;
                t = get_config_0_0(t);
                t = basename_0_0(t);
                ;
                LocalPopChoice(g_59);
              }
            else
              {
                t = f_59;
                t = not_null(h_27);
              }
            if(((k_27 != NULL) && (k_27 != t)))
              _fail(t);
            else
              k_27 = t;
            t = n_27(t);
          }
        }
        return(t);
      }
      t = not_null(g_27);
      t = basename_0_0(t);
      if(((j_27 != NULL) && (j_27 != t)))
        _fail(t);
      else
        j_27 = t;
      t = m_27(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_27));
    }
    return(t);
  }
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  t = not_null(e_27);
  if(match_cons(t, sym_FILE_1))
    {
      f_27 = ATgetArgument(t, 0);
      t = l_27(t);
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
    ATerm a_14 (ATerm t)
    {
      t = term_r_59;
      return(t);
    }
    ATerm b_14 (ATerm t)
    {
      ATerm s_27 = NULL,l_28 = NULL,o_28 = NULL,q_28 = NULL;
      ATerm w_59;
      w_59 = t;
      {
        ATerm x_27 = NULL;
        ATerm s_28 (ATerm t)
        {
          t = not_null(x_27);
          if(((s_27 != NULL) && (s_27 != t)))
            _fail(t);
          else
            s_27 = t;
          t = not_null(x_27);
          return(t);
        }
        t = dep_name_0_0(t);
        if(((x_27 != NULL) && (x_27 != t)))
          _fail(t);
        else
          x_27 = t;
        t = s_28(t);
      }
      t = w_59;
      {
        ATerm x_59;
        x_59 = t;
        {
          ATerm n_28 = NULL;
          ATerm t_28 (ATerm t)
          {
            t = not_null(n_28);
            if(((l_28 != NULL) && (l_28 != t)))
              _fail(t);
            else
              l_28 = t;
            t = not_null(n_28);
            return(t);
          }
          t = pass_verbose_0_0(t);
          if(((n_28 != NULL) && (n_28 != t)))
            _fail(t);
          else
            n_28 = t;
          t = t_28(t);
        }
        t = x_59;
        {
          ATerm y_59;
          y_59 = t;
          {
            ATerm p_28 = NULL;
            ATerm u_28 (ATerm t)
            {
              t = not_null(p_28);
              if(((o_28 != NULL) && (o_28 != t)))
                _fail(t);
              else
                o_28 = t;
              t = not_null(p_28);
              return(t);
            }
            t = pass_keep_0_0(t);
            if(((p_28 != NULL) && (p_28 != t)))
              _fail(t);
            else
              p_28 = t;
            t = u_28(t);
          }
          t = y_59;
          {
            ATerm r_28 = NULL;
            ATerm v_28 (ATerm t)
            {
              t = not_null(r_28);
              if(((q_28 != NULL) && (q_28 != t)))
                _fail(t);
              else
                q_28 = t;
              t = not_null(r_28);
              return(t);
            }
            t = term_z_59;
            t = get_config_0_0(t);
            if(((r_28 != NULL) && (r_28 != t)))
              _fail(t);
            else
              r_28 = t;
            t = v_28(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_28)), not_null(l_28)), not_null(q_28)), not_null(s_27));
            t = concat_0_0(t);
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2_0(a_14, b_14, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm l_14 (ATerm t)
  {
    ATerm m_14 (ATerm t)
    {
      t = term_a_60;
      return(t);
    }
    t = debug_1_0(m_14, t);
    return(t);
  }
  t = if_verbose2_1_0(l_14, t);
  {
    ATerm n_14 (ATerm t)
    {
      ATerm p_14 (ATerm t)
      {
        ATerm x_28 = NULL;
        ATerm y_28 = NULL;
        ATerm z_28 (ATerm t)
        {
          t = not_null(y_28);
          if(((x_28 != NULL) && (x_28 != t)))
            _fail(t);
          else
            x_28 = t;
          t = not_null(y_28);
          return(t);
        }
        if(((y_28 != NULL) && (y_28 != t)))
          _fail(t);
        else
          y_28 = t;
        t = z_28(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(CheckATermList(not_null(x_28)), term_b_60));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(p_14, t);
      return(t);
    }
    ATerm o_14 (ATerm t)
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
    t = profile_p__2_0(n_14, o_14, t);
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  ATerm g_29 (ATerm t)
  {
    ATerm f_29 = NULL;
    t = not_null(e_29);
    if(((f_29 != NULL) && (f_29 != t)))
      _fail(t);
    else
      f_29 = t;
    t = not_null(f_29);
    return(t);
  }
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  t = not_null(c_29);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_29 = ATgetFirst((ATermList) t);
      e_29 = (ATerm) ATgetNext((ATermList) t);
      t = g_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  ATerm r_29 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL;
    t = not_null(l_29);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(m_29);
    if(((o_29 != NULL) && (o_29 != t)))
      _fail(t);
    else
      o_29 = t;
    t = not_null(k_29);
    {
      ATerm s_60;
      s_60 = t;
      {
        ATerm p_29 = NULL;
        ATerm q_29 = NULL;
        ATerm s_29 (ATerm t)
        {
          t = not_null(q_29);
          if(((p_29 != NULL) && (p_29 != t)))
            _fail(t);
          else
            p_29 = t;
          t = not_null(q_29);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_29), not_null(o_29));
        {
          ATerm w_60 = t;
          int x_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(x_60);
            }
          else
            {
              t = w_60;
              t = (ATerm) ATempty;
            }
          if(((q_29 != NULL) && (q_29 != t)))
            _fail(t);
          else
            q_29 = t;
          t = s_29(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_29), not_null(o_29), not_null(p_29));
        t = table_put_0_0(t);
      }
      t = s_60;
    }
    return(t);
  }
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  t = not_null(k_29);
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
      t = r_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  ATerm y_60;
  y_60 = t;
  {
    ATerm f_30 = NULL;
    ATerm m_30 (ATerm t)
    {
      ATerm g_30 = NULL,i_30 = NULL,j_30 = NULL;
      ATerm n_30 (ATerm t)
      {
        t = not_null(i_30);
        if(((d_30 != NULL) && (d_30 != t)))
          _fail(t);
        else
          d_30 = t;
        t = not_null(j_30);
        if(((c_30 != NULL) && (c_30 != t)))
          _fail(t);
        else
          c_30 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_30), term_e_46, not_null(c_30));
        t = table_put_0_0(t);
        t = not_null(d_30);
        {
          ATerm q_14 (ATerm t)
          {
            ATerm k_30 = NULL;
            ATerm o_30 (ATerm t)
            {
              ATerm l_30 = NULL;
              t = not_null(k_30);
              if(((l_30 != NULL) && (l_30 != t)))
                _fail(t);
              else
                l_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(l_30));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((k_30 != NULL) && (k_30 != t)))
              _fail(t);
            else
              k_30 = t;
            t = o_30(t);
            return(t);
          }
          t = map_1_0(q_14, t);
        }
        return(t);
      }
      t = not_null(f_30);
      if(((e_30 != NULL) && (e_30 != t)))
        _fail(t);
      else
        e_30 = t;
      t = not_null(f_30);
      {
        ATerm z_60 = t;
        int a_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), term_e_46);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(a_61);
          }
        else
          {
            t = z_60;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((g_30 != NULL) && (g_30 != t)))
          _fail(t);
        else
          g_30 = t;
        t = not_null(g_30);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_30 = ATgetFirst((ATermList) t);
            j_30 = (ATerm) ATgetNext((ATermList) t);
            t = n_30(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = j_97(t);
    if(((f_30 != NULL) && (f_30 != t)))
      _fail(t);
    else
      f_30 = t;
    t = m_30(t);
  }
  t = y_60;
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm u_30 = NULL;
  ATerm w_30 (ATerm t)
  {
    ATerm v_30 = NULL;
    t = not_null(u_30);
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = not_null(u_30);
    t = SSL_remove(not_null(v_30));
    return(t);
  }
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  t = w_30(t);
  return(t);
}
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm p_61 = t;
  int q_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      t = y_79(t);
      ;
      LocalPopChoice(q_61);
    }
  else
    {
      t = p_61;
      t = y_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  ATerm r_61;
  r_61 = t;
  {
    ATerm a_31 = NULL;
    ATerm d_31 (ATerm t)
    {
      ATerm b_31 = NULL;
      t = not_null(a_31);
      if(((z_30 != NULL) && (z_30 != t)))
        _fail(t);
      else
        z_30 = t;
      t = not_null(a_31);
      {
        ATerm c_31 = NULL;
        ATerm e_31 (ATerm t)
        {
          t = not_null(c_31);
          if(((b_31 != NULL) && (b_31 != t)))
            _fail(t);
          else
            b_31 = t;
          t = not_null(c_31);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), term_e_46);
        {
          ATerm s_61 = t;
          int c_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(c_62);
            }
          else
            {
              t = s_61;
              t = (ATerm) ATempty;
            }
          if(((c_31 != NULL) && (c_31 != t)))
            _fail(t);
          else
            c_31 = t;
          t = e_31(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_30), term_e_46, (ATerm) ATinsert(CheckATermList(not_null(b_31)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = i_97(t);
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = d_31(t);
  }
  t = r_61;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  ATerm r_14 (ATerm t)
  {
    t = term_d_46;
    return(t);
  }
  t = begin_scope_1_0(r_14, t);
  {
    ATerm s_14 (ATerm t)
    {
      ATerm f_62;
      f_62 = t;
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
        ATerm m_31 (ATerm t)
        {
          t = not_null(k_31);
          if(((i_31 != NULL) && (i_31 != t)))
            _fail(t);
          else
            i_31 = t;
          t = not_null(l_31);
          if(((h_31 != NULL) && (h_31 != t)))
            _fail(t);
          else
            h_31 = t;
          t = not_null(i_31);
          {
            ATerm l_15 (ATerm t)
            {
              t = try_1_0(remove_file_0_0, t);
              return(t);
            }
            t = map_1_0(l_15, t);
          }
          return(t);
        }
        ATerm g_62 = t;
        int h_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_46;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(h_62);
          }
        else
          {
            t = g_62;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((j_31 != NULL) && (j_31 != t)))
          _fail(t);
        else
          j_31 = t;
        t = not_null(j_31);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_31 = ATgetFirst((ATermList) t);
            l_31 = (ATerm) ATgetNext((ATermList) t);
            t = m_31(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = f_62;
      {
        ATerm p_15 (ATerm t)
        {
          t = term_d_46;
          return(t);
        }
        t = end_scope_1_0(p_15, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_108, s_14, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm q_15 (ATerm t)
  {
    ATerm i_62 = t;
    int j_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_31 = NULL;
        ATerm p_31 = NULL;
        ATerm q_31 (ATerm t)
        {
          t = not_null(p_31);
          if(((o_31 != NULL) && (o_31 != t)))
            _fail(t);
          else
            o_31 = t;
          t = not_null(p_31);
          return(t);
        }
        t = term_k_58;
        t = get_config_0_0(t);
        if(((p_31 != NULL) && (p_31 != t)))
          _fail(t);
        else
          p_31 = t;
        t = q_31(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_31));
        ;
        LocalPopChoice(j_62);
      }
    else
      {
        t = i_62;
        t = term_i_48;
      }
    t = m_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_15, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(x_15, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm k_62;
    k_62 = t;
    {
      ATerm s_31 = NULL;
      ATerm t_31 = NULL;
      ATerm u_31 (ATerm t)
      {
        t = not_null(t_31);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = not_null(t_31);
        return(t);
      }
      t = term_s_33;
      t = get_config_0_0(t);
      if(((t_31 != NULL) && (t_31 != t)))
        _fail(t);
      else
        t_31 = t;
      t = u_31(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), term_a_48);
      t = geq_0_0(t);
    }
    t = k_62;
    t = i_100(t);
    return(t);
  }
  t = try_1_0(y_15, t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  ATerm y_31 (ATerm t)
  {
    ATerm x_31 = NULL;
    t = not_null(w_31);
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    t = not_null(w_31);
    t = SSL_TicksToSeconds(not_null(x_31));
    return(t);
  }
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = y_31(t);
  return(t);
}
ATerm self_children_sys_time_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  ATerm k_32 (ATerm t)
  {
    ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
    t = not_null(c_32);
    if(((g_32 != NULL) && (g_32 != t)))
      _fail(t);
    else
      g_32 = t;
    t = not_null(d_32);
    if(((i_32 != NULL) && (i_32 != t)))
      _fail(t);
    else
      i_32 = t;
    t = not_null(e_32);
    if(((h_32 != NULL) && (h_32 != t)))
      _fail(t);
    else
      h_32 = t;
    t = not_null(f_32);
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_32), not_null(j_32));
    t = add_0_0(t);
    return(t);
  }
  if(((b_32 != NULL) && (b_32 != t)))
    _fail(t);
  else
    b_32 = t;
  t = not_null(b_32);
  if(match_cons(t, sym__4))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      e_32 = ATgetArgument(t, 2);
      f_32 = ATgetArgument(t, 3);
      t = k_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  ATerm s_32 (ATerm t)
  {
    ATerm q_32 = NULL,r_32 = NULL;
    t = not_null(o_32);
    if(((q_32 != NULL) && (q_32 != t)))
      _fail(t);
    else
      q_32 = t;
    t = not_null(p_32);
    if(((r_32 != NULL) && (r_32 != t)))
      _fail(t);
    else
      r_32 = t;
    t = not_null(n_32);
    {
      ATerm l_62 = t;
      int m_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(q_32), not_null(r_32));
          ;
          LocalPopChoice(m_62);
        }
      else
        {
          t = l_62;
          t = SSL_addr(not_null(q_32), not_null(r_32));
        }
    }
    return(t);
  }
  if(((n_32 != NULL) && (n_32 != t)))
    _fail(t);
  else
    n_32 = t;
  t = not_null(n_32);
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
      t = s_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  ATerm e_33 (ATerm t)
  {
    ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
    t = not_null(w_32);
    if(((c_33 != NULL) && (c_33 != t)))
      _fail(t);
    else
      c_33 = t;
    t = not_null(x_32);
    if(((a_33 != NULL) && (a_33 != t)))
      _fail(t);
    else
      a_33 = t;
    t = not_null(y_32);
    if(((d_33 != NULL) && (d_33 != t)))
      _fail(t);
    else
      d_33 = t;
    t = not_null(z_32);
    if(((b_33 != NULL) && (b_33 != t)))
      _fail(t);
    else
      b_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(d_33));
    t = add_0_0(t);
    return(t);
  }
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  t = not_null(v_32);
  if(match_cons(t, sym__4))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      y_32 = ATgetArgument(t, 2);
      z_32 = ATgetArgument(t, 3);
      t = e_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  ATerm m_33 (ATerm t)
  {
    ATerm k_33 = NULL,l_33 = NULL;
    t = not_null(i_33);
    if(((k_33 != NULL) && (k_33 != t)))
      _fail(t);
    else
      k_33 = t;
    t = not_null(j_33);
    if(((l_33 != NULL) && (l_33 != t)))
      _fail(t);
    else
      l_33 = t;
    t = not_null(h_33);
    {
      ATerm n_62 = t;
      int o_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(k_33), not_null(l_33));
          ;
          LocalPopChoice(o_62);
        }
      else
        {
          t = n_62;
          t = SSL_subtr(not_null(k_33), not_null(l_33));
        }
    }
    return(t);
  }
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = not_null(h_33);
  if(match_cons(t, sym__2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
      t = m_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  ATerm w_34 (ATerm t)
  {
    ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,q_34 = NULL,s_34 = NULL,u_34 = NULL;
    t = not_null(x_33);
    if(((g_34 != NULL) && (g_34 != t)))
      _fail(t);
    else
      g_34 = t;
    t = not_null(y_33);
    if(((h_34 != NULL) && (h_34 != t)))
      _fail(t);
    else
      h_34 = t;
    t = not_null(z_33);
    if(((i_34 != NULL) && (i_34 != t)))
      _fail(t);
    else
      i_34 = t;
    t = not_null(a_34);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = not_null(c_34);
    if(((k_34 != NULL) && (k_34 != t)))
      _fail(t);
    else
      k_34 = t;
    t = not_null(d_34);
    if(((l_34 != NULL) && (l_34 != t)))
      _fail(t);
    else
      l_34 = t;
    t = not_null(e_34);
    if(((m_34 != NULL) && (m_34 != t)))
      _fail(t);
    else
      m_34 = t;
    t = not_null(f_34);
    if(((n_34 != NULL) && (n_34 != t)))
      _fail(t);
    else
      n_34 = t;
    t = not_null(v_33);
    {
      ATerm p_62;
      p_62 = t;
      {
        ATerm p_34 = NULL;
        ATerm x_34 (ATerm t)
        {
          t = not_null(p_34);
          if(((o_34 != NULL) && (o_34 != t)))
            _fail(t);
          else
            o_34 = t;
          t = not_null(p_34);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_34), not_null(k_34));
        t = subt_0_0(t);
        if(((p_34 != NULL) && (p_34 != t)))
          _fail(t);
        else
          p_34 = t;
        t = x_34(t);
      }
      t = p_62;
      {
        ATerm q_62;
        q_62 = t;
        {
          ATerm r_34 = NULL;
          ATerm y_34 (ATerm t)
          {
            t = not_null(r_34);
            if(((q_34 != NULL) && (q_34 != t)))
              _fail(t);
            else
              q_34 = t;
            t = not_null(r_34);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_34), not_null(l_34));
          t = subt_0_0(t);
          if(((r_34 != NULL) && (r_34 != t)))
            _fail(t);
          else
            r_34 = t;
          t = y_34(t);
        }
        t = q_62;
        {
          ATerm r_62;
          r_62 = t;
          {
            ATerm t_34 = NULL;
            ATerm z_34 (ATerm t)
            {
              t = not_null(t_34);
              if(((s_34 != NULL) && (s_34 != t)))
                _fail(t);
              else
                s_34 = t;
              t = not_null(t_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(m_34));
            t = subt_0_0(t);
            if(((t_34 != NULL) && (t_34 != t)))
              _fail(t);
            else
              t_34 = t;
            t = z_34(t);
          }
          t = r_62;
          {
            ATerm v_34 = NULL;
            ATerm a_35 (ATerm t)
            {
              t = not_null(v_34);
              if(((u_34 != NULL) && (u_34 != t)))
                _fail(t);
              else
                u_34 = t;
              t = not_null(v_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), not_null(n_34));
            t = subt_0_0(t);
            if(((v_34 != NULL) && (v_34 != t)))
              _fail(t);
            else
              v_34 = t;
            t = a_35(t);
            t = (ATerm) ATmakeAppl(sym__4, not_null(o_34), not_null(q_34), not_null(s_34), not_null(u_34));
          }
        }
      }
    }
    return(t);
  }
  if(((v_33 != NULL) && (v_33 != t)))
    _fail(t);
  else
    v_33 = t;
  t = not_null(v_33);
  if(match_cons(t, sym__2))
    {
      w_33 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
      t = not_null(w_33);
      if(match_cons(t, sym__4))
        {
          x_33 = ATgetArgument(t, 0);
          y_33 = ATgetArgument(t, 1);
          z_33 = ATgetArgument(t, 2);
          a_34 = ATgetArgument(t, 3);
          t = not_null(b_34);
          if(match_cons(t, sym__4))
            {
              c_34 = ATgetArgument(t, 0);
              d_34 = ATgetArgument(t, 1);
              e_34 = ATgetArgument(t, 2);
              f_34 = ATgetArgument(t, 3);
              t = w_34(t);
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
  ATerm k_35 = NULL;
  ATerm s_62;
  s_62 = t;
  {
    ATerm l_35 = NULL;
    ATerm s_35 (ATerm t)
    {
      t = not_null(l_35);
      if(((k_35 != NULL) && (k_35 != t)))
        _fail(t);
      else
        k_35 = t;
      t = not_null(l_35);
      return(t);
    }
    t = times_0_0(t);
    if(((l_35 != NULL) && (l_35 != t)))
      _fail(t);
    else
      l_35 = t;
    t = s_35(t);
  }
  t = s_62;
  t = d_104(t);
  {
    ATerm t_62;
    t_62 = t;
    {
      ATerm m_35 = NULL,o_35 = NULL,q_35 = NULL;
      ATerm n_35 = NULL;
      ATerm t_35 (ATerm t)
      {
        t = not_null(n_35);
        if(((m_35 != NULL) && (m_35 != t)))
          _fail(t);
        else
          m_35 = t;
        t = not_null(n_35);
        return(t);
      }
      t = times_0_0(t);
      if(((n_35 != NULL) && (n_35 != t)))
        _fail(t);
      else
        n_35 = t;
      t = t_35(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), not_null(k_35));
      t = diff_times_0_0(t);
      {
        ATerm u_62;
        u_62 = t;
        {
          ATerm p_35 = NULL;
          ATerm u_35 (ATerm t)
          {
            t = not_null(p_35);
            if(((o_35 != NULL) && (o_35 != t)))
              _fail(t);
            else
              o_35 = t;
            t = not_null(p_35);
            return(t);
          }
          t = self_children_user_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((p_35 != NULL) && (p_35 != t)))
            _fail(t);
          else
            p_35 = t;
          t = u_35(t);
        }
        t = u_62;
        {
          ATerm r_35 = NULL;
          ATerm v_35 (ATerm t)
          {
            t = not_null(r_35);
            if(((q_35 != NULL) && (q_35 != t)))
              _fail(t);
            else
              q_35 = t;
            t = not_null(r_35);
            return(t);
          }
          t = self_children_sys_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((r_35 != NULL) && (r_35 != t)))
            _fail(t);
          else
            r_35 = t;
          t = v_35(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_35)), term_w_62), not_null(o_35)), term_v_62);
          t = c_104(t);
        }
      }
    }
    t = t_62;
  }
  return(t);
}
ATerm debug_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm x_62;
  x_62 = t;
  {
    ATerm y_35 = NULL,a_36 = NULL;
    ATerm b_63;
    b_63 = t;
    {
      ATerm z_35 = NULL;
      ATerm c_36 (ATerm t)
      {
        t = not_null(z_35);
        if(((y_35 != NULL) && (y_35 != t)))
          _fail(t);
        else
          y_35 = t;
        t = not_null(z_35);
        return(t);
      }
      t = r_98(t);
      if(((z_35 != NULL) && (z_35 != t)))
        _fail(t);
      else
        z_35 = t;
      t = c_36(t);
    }
    t = b_63;
    {
      ATerm b_36 = NULL;
      ATerm f_36 (ATerm t)
      {
        t = not_null(b_36);
        if(((a_36 != NULL) && (a_36 != t)))
          _fail(t);
        else
          a_36 = t;
        t = not_null(b_36);
        return(t);
      }
      if(((b_36 != NULL) && (b_36 != t)))
        _fail(t);
      else
        b_36 = t;
      t = f_36(t);
      t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), not_null(y_35)));
      t = printnl_0_0(t);
    }
  }
  t = x_62;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      {
        ATerm f_63 = t;
        int g_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(f_16, t);
            ;
            LocalPopChoice(g_63);
          }
        else
          {
            t = f_63;
            {
              ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
              ATerm x_36 (ATerm t)
              {
                ATerm p_36 = NULL;
                t = not_null(n_36);
                if(((p_36 != NULL) && (p_36 != t)))
                  _fail(t);
                else
                  p_36 = t;
                t = not_null(p_36);
                return(t);
              }
              ATerm y_36 (ATerm t)
              {
                ATerm q_36 = NULL;
                t = not_null(n_36);
                if(((q_36 != NULL) && (q_36 != t)))
                  _fail(t);
                else
                  q_36 = t;
                t = not_null(q_36);
                {
                  ATerm h_63 = t;
                  int i_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_63);
                    }
                  else
                    {
                      t = h_63;
                      {
                        ATerm j_16 (ATerm t)
                        {
                          t = term_m_63;
                          return(t);
                        }
                        t = debug_1_0(j_16, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm z_36 (ATerm t)
              {
                ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL;
                t = not_null(n_36);
                if(((r_36 != NULL) && (r_36 != t)))
                  _fail(t);
                else
                  r_36 = t;
                t = not_null(o_36);
                if(((s_36 != NULL) && (s_36 != t)))
                  _fail(t);
                else
                  s_36 = t;
                t = not_null(m_36);
                {
                  ATerm n_63;
                  n_63 = t;
                  {
                    ATerm u_36 = NULL;
                    ATerm a_37 (ATerm t)
                    {
                      t = not_null(u_36);
                      if(((t_36 != NULL) && (t_36 != t)))
                        _fail(t);
                      else
                        t_36 = t;
                      t = not_null(u_36);
                      return(t);
                    }
                    t = not_null(r_36);
                    t = eval_config_0_0(t);
                    if(((u_36 != NULL) && (u_36 != t)))
                      _fail(t);
                    else
                      u_36 = t;
                    t = a_37(t);
                  }
                  t = n_63;
                  {
                    ATerm w_36 = NULL;
                    ATerm b_37 (ATerm t)
                    {
                      t = not_null(w_36);
                      if(((v_36 != NULL) && (v_36 != t)))
                        _fail(t);
                      else
                        v_36 = t;
                      t = not_null(w_36);
                      return(t);
                    }
                    t = not_null(s_36);
                    t = eval_config_0_0(t);
                    if(((w_36 != NULL) && (w_36 != t)))
                      _fail(t);
                    else
                      w_36 = t;
                    t = b_37(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(v_36));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((m_36 != NULL) && (m_36 != t)))
                _fail(t);
              else
                m_36 = t;
              t = not_null(m_36);
              if(match_cons(t, sym_Path_1))
                {
                  n_36 = ATgetArgument(t, 0);
                  t = x_36(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_36 = ATgetArgument(t, 0);
                      t = y_36(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_36 = ATgetArgument(t, 0);
                          o_36 = ATgetArgument(t, 1);
                          t = z_36(t);
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
  ATerm e_37 = NULL;
  ATerm i_37 (ATerm t)
  {
    ATerm f_37 = NULL;
    t = not_null(e_37);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_63, not_null(f_37));
    t = table_get_0_0(t);
    {
      ATerm k_16 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm q_63;
          q_63 = t;
          {
            ATerm g_37 = NULL;
            ATerm h_37 = NULL;
            ATerm j_37 (ATerm t)
            {
              t = not_null(h_37);
              if(((g_37 != NULL) && (g_37 != t)))
                _fail(t);
              else
                g_37 = t;
              t = not_null(h_37);
              return(t);
            }
            if(((h_37 != NULL) && (h_37 != t)))
              _fail(t);
            else
              h_37 = t;
            t = j_37(t);
            t = (ATerm) ATmakeAppl(sym__3, term_o_63, not_null(f_37), not_null(g_37));
            t = table_put_0_0(t);
          }
          t = q_63;
        }
        return(t);
      }
      t = try_1_0(k_16, t);
    }
    return(t);
  }
  if(((e_37 != NULL) && (e_37 != t)))
    _fail(t);
  else
    e_37 = t;
  t = i_37(t);
  return(t);
}
ATerm sc_announce_0_0 (ATerm t)
{
  t = if_verbose2_1_0(sc_version_0_0, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm r_63;
  r_63 = t;
  t = error_0_0(t);
  t = term_a_48;
  t = exit_0_0(t);
  t = r_63;
  return(t);
}
ATerm sc_version_0_0 (ATerm t)
{
  ATerm s_63 = t;
  int t_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_63;
      u_63 = t;
      {
        ATerm m_37 = NULL;
        ATerm n_37 = NULL;
        ATerm p_37 (ATerm t)
        {
          t = not_null(n_37);
          if(((m_37 != NULL) && (m_37 != t)))
            _fail(t);
          else
            m_37 = t;
          t = not_null(n_37);
          return(t);
        }
        t = term_v_63;
        t = get_config_0_0(t);
        if(((n_37 != NULL) && (n_37 != t)))
          _fail(t);
        else
          n_37 = t;
        t = p_37(t);
        t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_65), term_u_64), term_t_64), term_s_64), term_r_64), term_k_64), term_j_64), not_null(m_37)), term_f_64));
        t = printnl_0_0(t);
      }
      t = u_63;
      ;
      LocalPopChoice(t_63);
    }
  else
    {
      t = s_63;
      {
        ATerm o_37 = NULL;
        if(((o_37 != NULL) && (o_37 != t)))
          _fail(t);
        else
          o_37 = t;
        t = not_null(o_37);
        if(match_string(t, "0.9.3"))
          {
            t = not_null(o_37);
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
  ATerm f_65 = t;
  int i_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_79(t);
      ;
      LocalPopChoice(i_65);
    }
  else
    {
      t = f_65;
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  ATerm z_37 (ATerm t)
  {
    ATerm x_37 = NULL,y_37 = NULL;
    t = not_null(v_37);
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    t = not_null(w_37);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = not_null(u_37);
    t = SSL_copy(not_null(x_37), not_null(y_37));
    return(t);
  }
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  t = not_null(u_37);
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
      t = z_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm b_38 = NULL;
  ATerm d_38 (ATerm t)
  {
    ATerm c_38 = NULL;
    t = not_null(b_38);
    if(((c_38 != NULL) && (c_38 != t)))
      _fail(t);
    else
      c_38 = t;
    t = not_null(b_38);
    t = SSL_table_keys(not_null(c_38));
    return(t);
  }
  if(((b_38 != NULL) && (b_38 != t)))
    _fail(t);
  else
    b_38 = t;
  t = d_38(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm n_38 (ATerm t)
  {
    ATerm i_38 = NULL;
    t = not_null(h_38);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = not_null(h_38);
    t = table_keys_0_0(t);
    {
      ATerm l_16 (ATerm t)
      {
        ATerm j_38 = NULL;
        ATerm o_38 (ATerm t)
        {
          ATerm k_38 = NULL,l_38 = NULL;
          t = not_null(j_38);
          if(((k_38 != NULL) && (k_38 != t)))
            _fail(t);
          else
            k_38 = t;
          t = not_null(j_38);
          {
            ATerm m_38 = NULL;
            ATerm p_38 (ATerm t)
            {
              t = not_null(m_38);
              if(((l_38 != NULL) && (l_38 != t)))
                _fail(t);
              else
                l_38 = t;
              t = not_null(m_38);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(k_38));
            t = table_get_0_0(t);
            if(((m_38 != NULL) && (m_38 != t)))
              _fail(t);
            else
              m_38 = t;
            t = p_38(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_38), not_null(l_38));
          }
          return(t);
        }
        if(((j_38 != NULL) && (j_38 != t)))
          _fail(t);
        else
          j_38 = t;
        t = o_38(t);
        return(t);
      }
      t = map_1_0(l_16, t);
    }
    return(t);
  }
  if(((h_38 != NULL) && (h_38 != t)))
    _fail(t);
  else
    h_38 = t;
  t = n_38(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm m_16 (ATerm t)
  {
    ATerm j_65;
    j_65 = t;
    {
      ATerm r_38 = NULL;
      ATerm s_38 = NULL;
      ATerm t_38 (ATerm t)
      {
        t = not_null(s_38);
        if(((r_38 != NULL) && (r_38 != t)))
          _fail(t);
        else
          r_38 = t;
        t = not_null(s_38);
        return(t);
      }
      t = term_s_33;
      t = get_config_0_0(t);
      if(((s_38 != NULL) && (s_38 != t)))
        _fail(t);
      else
        s_38 = t;
      t = t_38(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_38), term_n_55);
      t = geq_0_0(t);
    }
    t = j_65;
    t = m_100(t);
    return(t);
  }
  t = try_1_0(m_16, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm s_65;
  s_65 = t;
  {
    ATerm v_38 = NULL;
    ATerm w_38 = NULL;
    ATerm x_38 (ATerm t)
    {
      t = not_null(w_38);
      if(((v_38 != NULL) && (v_38 != t)))
        _fail(t);
      else
        v_38 = t;
      t = not_null(w_38);
      return(t);
    }
    if(((w_38 != NULL) && (w_38 != t)))
      _fail(t);
    else
      w_38 = t;
    t = x_38(t);
    t = (ATerm) ATmakeAppl(sym__2, term_g_36, not_null(v_38));
    t = printnl_0_0(t);
  }
  t = s_65;
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm l_39 (ATerm t)
  {
    ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
    t = not_null(c_39);
    if(((d_39 != NULL) && (d_39 != t)))
      _fail(t);
    else
      d_39 = t;
    t = not_null(c_39);
    {
      ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
      ATerm m_39 (ATerm t)
      {
        t = not_null(i_39);
        if(((e_39 != NULL) && (e_39 != t)))
          _fail(t);
        else
          e_39 = t;
        t = not_null(j_39);
        if(((f_39 != NULL) && (f_39 != t)))
          _fail(t);
        else
          f_39 = t;
        t = not_null(g_39);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, term_t_65, (ATerm) ATmakeAppl(sym_Tool_1, not_null(d_39)));
      t = table_get_0_0(t);
      if(((g_39 != NULL) && (g_39 != t)))
        _fail(t);
      else
        g_39 = t;
      t = not_null(g_39);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_39 = ATgetFirst((ATermList) t);
          k_39 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(h_39);
          if(match_cons(t, sym__2))
            {
              i_39 = ATgetArgument(t, 0);
              j_39 = ATgetArgument(t, 1);
              t = m_39(t);
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
      t = not_null(f_39);
    }
    return(t);
  }
  if(((c_39 != NULL) && (c_39 != t)))
    _fail(t);
  else
    c_39 = t;
  t = l_39(t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  ATerm a_40 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
    t = not_null(s_39);
    if(((u_39 != NULL) && (u_39 != t)))
      _fail(t);
    else
      u_39 = t;
    t = not_null(t_39);
    if(((v_39 != NULL) && (v_39 != t)))
      _fail(t);
    else
      v_39 = t;
    t = not_null(r_39);
    t = (ATerm) ATmakeAppl(sym__2, term_t_65, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_39)));
    t = table_get_0_0(t);
    {
      ATerm n_16 (ATerm t)
      {
        ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
        ATerm b_40 (ATerm t)
        {
          t = not_null(y_39);
          if(((v_39 != NULL) && (v_39 != t)))
            _fail(t);
          else
            v_39 = t;
          t = not_null(z_39);
          if(((w_39 != NULL) && (w_39 != t)))
            _fail(t);
          else
            w_39 = t;
          t = not_null(x_39);
          return(t);
        }
        if(((x_39 != NULL) && (x_39 != t)))
          _fail(t);
        else
          x_39 = t;
        t = not_null(x_39);
        if(match_cons(t, sym__2))
          {
            y_39 = ATgetArgument(t, 0);
            z_39 = ATgetArgument(t, 1);
            t = b_40(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(n_16, t);
    }
    t = not_null(w_39);
    return(t);
  }
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  t = not_null(r_39);
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
      t = a_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm u_65 = t;
  int g_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(g_66);
    }
  else
    {
      t = u_65;
      {
        ATerm k_66 = t;
        int l_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_16 (ATerm t)
            {
              t = filter_1_0(x_93, t);
              return(t);
            }
            t = Cons_2_0(x_93, z_16, t);
            ;
            LocalPopChoice(l_66);
          }
        else
          {
            t = k_66;
            {
              ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
              ATerm i_40 (ATerm t)
              {
                ATerm h_40 = NULL;
                t = not_null(g_40);
                if(((h_40 != NULL) && (h_40 != t)))
                  _fail(t);
                else
                  h_40 = t;
                t = not_null(h_40);
                t = filter_1_0(x_93, t);
                return(t);
              }
              if(((e_40 != NULL) && (e_40 != t)))
                _fail(t);
              else
                e_40 = t;
              t = not_null(e_40);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_40 = ATgetFirst((ATermList) t);
                  g_40 = (ATerm) ATgetNext((ATermList) t);
                  t = i_40(t);
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
  ATerm j_40 (ATerm t)
  {
    ATerm a_17 (ATerm t)
    {
      t = e_80(t);
      t = j_40(t);
      return(t);
    }
    t = try_1_0(a_17, t);
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm m_66;
  m_66 = t;
  {
    ATerm b_17 (ATerm t)
    {
      t = term_y_66;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm a_67 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_67;
          }
      }
      return(t);
    }
    t = repeat_1_0(b_17, t);
  }
  t = m_66;
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm b_67;
  b_67 = t;
  {
    ATerm l_40 = NULL;
    ATerm m_40 = NULL;
    ATerm n_40 (ATerm t)
    {
      t = not_null(m_40);
      if(((l_40 != NULL) && (l_40 != t)))
        _fail(t);
      else
        l_40 = t;
      t = not_null(m_40);
      return(t);
    }
    if(((m_40 != NULL) && (m_40 != t)))
      _fail(t);
    else
      m_40 = t;
    t = n_40(t);
    t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATempty, not_null(l_40)));
    t = printnl_0_0(t);
  }
  t = b_67;
  return(t);
}
ATerm say_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm i_67;
  i_67 = t;
  t = v_98(t);
  t = debug_0_0(t);
  t = i_67;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm c_17 (ATerm t)
  {
    ATerm j_67;
    j_67 = t;
    {
      ATerm p_40 = NULL;
      ATerm q_40 = NULL;
      ATerm r_40 (ATerm t)
      {
        t = not_null(q_40);
        if(((p_40 != NULL) && (p_40 != t)))
          _fail(t);
        else
          p_40 = t;
        t = not_null(q_40);
        return(t);
      }
      t = term_s_33;
      t = get_config_0_0(t);
      if(((q_40 != NULL) && (q_40 != t)))
        _fail(t);
      else
        q_40 = t;
      t = r_40(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), term_b_53);
      t = geq_0_0(t);
    }
    t = j_67;
    t = l_100(t);
    return(t);
  }
  t = try_1_0(c_17, t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  ATerm z_40 (ATerm t)
  {
    ATerm x_40 = NULL,y_40 = NULL;
    t = not_null(v_40);
    if(((x_40 != NULL) && (x_40 != t)))
      _fail(t);
    else
      x_40 = t;
    t = not_null(w_40);
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    t = not_null(u_40);
    {
      ATerm q_67;
      q_67 = t;
      {
        ATerm r_67 = t;
        int v_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(x_40), not_null(y_40));
            ;
            LocalPopChoice(v_67);
          }
        else
          {
            t = r_67;
            t = SSL_gtr(not_null(x_40), not_null(y_40));
          }
      }
      t = q_67;
    }
    return(t);
  }
  if(((u_40 != NULL) && (u_40 != t)))
    _fail(t);
  else
    u_40 = t;
  t = not_null(u_40);
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      t = z_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_41 = NULL;
  ATerm w_67 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
      ATerm g_41 (ATerm t)
      {
        t = not_null(e_41);
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = not_null(f_41);
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = not_null(d_41);
        return(t);
      }
      if(((d_41 != NULL) && (d_41 != t)))
        _fail(t);
      else
        d_41 = t;
      t = not_null(d_41);
      if(match_cons(t, sym__2))
        {
          e_41 = ATgetArgument(t, 0);
          f_41 = ATgetArgument(t, 1);
          t = g_41(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(f_68);
    }
  else
    {
      t = w_67;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm n_17 (ATerm t)
  {
    ATerm g_68;
    g_68 = t;
    {
      ATerm i_41 = NULL;
      ATerm j_41 = NULL;
      ATerm k_41 (ATerm t)
      {
        t = not_null(j_41);
        if(((i_41 != NULL) && (i_41 != t)))
          _fail(t);
        else
          i_41 = t;
        t = not_null(j_41);
        return(t);
      }
      t = term_s_33;
      t = get_config_0_0(t);
      if(((j_41 != NULL) && (j_41 != t)))
        _fail(t);
      else
        j_41 = t;
      t = k_41(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_41), term_t_50);
      t = geq_0_0(t);
    }
    t = g_68;
    t = n_100(t);
    return(t);
  }
  t = try_1_0(n_17, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  ATerm r_41 (ATerm t)
  {
    ATerm q_41 = NULL;
    t = not_null(o_41);
    if(((q_41 != NULL) && (q_41 != t)))
      _fail(t);
    else
      q_41 = t;
    t = not_null(p_41);
    if(((q_41 != NULL) && (q_41 != t)))
      _fail(t);
    else
      q_41 = t;
    t = not_null(n_41);
    return(t);
  }
  if(((n_41 != NULL) && (n_41 != t)))
    _fail(t);
  else
    n_41 = t;
  t = not_null(n_41);
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
      t = r_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  ATerm c_42 (ATerm t)
  {
    ATerm y_41 = NULL,z_41 = NULL;
    t = not_null(w_41);
    if(((z_41 != NULL) && (z_41 != t)))
      _fail(t);
    else
      z_41 = t;
    t = not_null(x_41);
    if(((y_41 != NULL) && (y_41 != t)))
      _fail(t);
    else
      y_41 = t;
    t = not_null(v_41);
    t = b_91(t);
    {
      ATerm o_17 (ATerm t)
      {
        ATerm a_42 = NULL;
        ATerm d_42 (ATerm t)
        {
          ATerm b_42 = NULL;
          t = not_null(a_42);
          if(((b_42 != NULL) && (b_42 != t)))
            _fail(t);
          else
            b_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_41), not_null(b_42));
          t = a_91(t);
          return(t);
        }
        if(((a_42 != NULL) && (a_42 != t)))
          _fail(t);
        else
          a_42 = t;
        t = d_42(t);
        return(t);
      }
      t = fetch_1_0(o_17, t);
    }
    t = not_null(y_41);
    return(t);
  }
  if(((v_41 != NULL) && (v_41 != t)))
    _fail(t);
  else
    v_41 = t;
  t = not_null(v_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_41 = ATgetFirst((ATermList) t);
      x_41 = (ATerm) ATgetNext((ATermList) t);
      t = c_42(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  ATerm l_42 (ATerm t)
  {
    ATerm j_42 = NULL,k_42 = NULL;
    t = not_null(h_42);
    if(((k_42 != NULL) && (k_42 != t)))
      _fail(t);
    else
      k_42 = t;
    t = not_null(i_42);
    if(((j_42 != NULL) && (j_42 != t)))
      _fail(t);
    else
      j_42 = t;
    t = not_null(k_42);
    {
      ATerm m_42 (ATerm t)
      {
        ATerm n_68 = t;
        int o_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(j_42);
            ;
            LocalPopChoice(o_68);
          }
        else
          {
            t = n_68;
            {
              ATerm u_68 = t;
              int w_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_17 (ATerm t)
                  {
                    t = not_null(j_42);
                    return(t);
                  }
                  t = HdMember_p__2_0(w_90, p_17, t);
                  t = m_42(t);
                  ;
                  LocalPopChoice(w_68);
                }
              else
                {
                  t = u_68;
                  t = Cons_2_0(_id, m_42, t);
                }
            }
          }
        return(t);
      }
      t = m_42(t);
    }
    return(t);
  }
  if(((g_42 != NULL) && (g_42 != t)))
    _fail(t);
  else
    g_42 = t;
  t = not_null(g_42);
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
      t = l_42(t);
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
  ATerm r_42 = NULL,v_42 = NULL,x_42 = NULL,y_42 = NULL;
  ATerm g_43 (ATerm t)
  {
    ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
    t = not_null(v_42);
    if(((z_42 != NULL) && (z_42 != t)))
      _fail(t);
    else
      z_42 = t;
    t = not_null(x_42);
    if(((a_43 != NULL) && (a_43 != t)))
      _fail(t);
    else
      a_43 = t;
    t = not_null(y_42);
    if(((b_43 != NULL) && (b_43 != t)))
      _fail(t);
    else
      b_43 = t;
    t = not_null(r_42);
    {
      ATerm x_68;
      x_68 = t;
      {
        ATerm c_43 = NULL;
        ATerm d_43 = NULL,f_43 = NULL;
        ATerm i_43 (ATerm t)
        {
          t = not_null(f_43);
          if(((c_43 != NULL) && (c_43 != t)))
            _fail(t);
          else
            c_43 = t;
          t = not_null(f_43);
          return(t);
        }
        ATerm e_43 = NULL;
        ATerm h_43 (ATerm t)
        {
          t = not_null(e_43);
          if(((d_43 != NULL) && (d_43 != t)))
            _fail(t);
          else
            d_43 = t;
          t = not_null(e_43);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), not_null(a_43));
        {
          ATerm y_68 = t;
          int z_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_0_0(t);
              ;
              LocalPopChoice(z_68);
            }
          else
            {
              t = y_68;
              t = (ATerm) ATempty;
            }
          if(((e_43 != NULL) && (e_43 != t)))
            _fail(t);
          else
            e_43 = t;
          t = h_43(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(b_43));
        t = union_0_0(t);
        if(((f_43 != NULL) && (f_43 != t)))
          _fail(t);
        else
          f_43 = t;
        t = i_43(t);
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_42), not_null(a_43), not_null(c_43));
        t = set_0_0(t);
      }
      t = x_68;
    }
    return(t);
  }
  if(((r_42 != NULL) && (r_42 != t)))
    _fail(t);
  else
    r_42 = t;
  t = not_null(r_42);
  if(match_cons(t, sym__3))
    {
      v_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
      y_42 = ATgetArgument(t, 2);
      t = g_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  ATerm x_43 (ATerm t)
  {
    ATerm q_43 = NULL,r_43 = NULL;
    t = not_null(o_43);
    if(((r_43 != NULL) && (r_43 != t)))
      _fail(t);
    else
      r_43 = t;
    t = not_null(p_43);
    if(((q_43 != NULL) && (q_43 != t)))
      _fail(t);
    else
      q_43 = t;
    t = not_null(q_43);
    {
      ATerm q_17 (ATerm t)
      {
        ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
        ATerm y_43 (ATerm t)
        {
          ATerm v_43 = NULL,w_43 = NULL;
          t = not_null(t_43);
          if(((v_43 != NULL) && (v_43 != t)))
            _fail(t);
          else
            v_43 = t;
          t = not_null(u_43);
          if(((w_43 != NULL) && (w_43 != t)))
            _fail(t);
          else
            w_43 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_43), not_null(v_43), not_null(w_43));
          t = l_105(t);
          return(t);
        }
        if(((s_43 != NULL) && (s_43 != t)))
          _fail(t);
        else
          s_43 = t;
        t = not_null(s_43);
        if(match_cons(t, sym__2))
          {
            t_43 = ATgetArgument(t, 0);
            u_43 = ATgetArgument(t, 1);
            t = y_43(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(q_17, t);
    }
    return(t);
  }
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = not_null(n_43);
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
      t = x_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm a_44 = NULL;
  ATerm b_44 = NULL;
  ATerm c_44 (ATerm t)
  {
    t = not_null(b_44);
    if(((a_44 != NULL) && (a_44 != t)))
      _fail(t);
    else
      a_44 = t;
    t = not_null(b_44);
    return(t);
  }
  if(((b_44 != NULL) && (b_44 != t)))
    _fail(t);
  else
    b_44 = t;
  t = c_44(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), (ATerm) ATinsert(ATempty, term_a_69));
  t = access_0_0(t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  ATerm m_44 (ATerm t)
  {
    ATerm i_44 = NULL;
    t = not_null(g_44);
    if(((i_44 != NULL) && (i_44 != t)))
      _fail(t);
    else
      i_44 = t;
    t = not_null(h_44);
    t = SSL_fclose(not_null(i_44));
    return(t);
  }
  ATerm p_44 (ATerm t)
  {
    ATerm l_44 = NULL;
    t = not_null(h_44);
    if(((l_44 != NULL) && (l_44 != t)))
      _fail(t);
    else
      l_44 = t;
    t = not_null(h_44);
    t = SSL_fclose(not_null(l_44));
    return(t);
  }
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = not_null(h_44);
  if(match_cons(t, sym_Stream_1))
    {
      g_44 = ATgetArgument(t, 0);
      {
        ATerm m_69 = t;
        int n_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_44(t);
            ;
            LocalPopChoice(n_69);
          }
        else
          {
            t = m_69;
            t = p_44(t);
          }
      }
    }
  else
    {
      t = p_44(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm s_44 = NULL,v_44 = NULL;
  ATerm x_44 (ATerm t)
  {
    ATerm w_44 = NULL;
    t = not_null(v_44);
    if(((w_44 != NULL) && (w_44 != t)))
      _fail(t);
    else
      w_44 = t;
    t = not_null(s_44);
    t = SSL_read_term_from_stream(not_null(w_44));
    return(t);
  }
  if(((s_44 != NULL) && (s_44 != t)))
    _fail(t);
  else
    s_44 = t;
  t = not_null(s_44);
  if(match_cons(t, sym_Stream_1))
    {
      v_44 = ATgetArgument(t, 0);
      t = x_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  ATerm k_45 (ATerm t)
  {
    ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
    t = not_null(e_45);
    if(((g_45 != NULL) && (g_45 != t)))
      _fail(t);
    else
      g_45 = t;
    t = not_null(f_45);
    if(((h_45 != NULL) && (h_45 != t)))
      _fail(t);
    else
      h_45 = t;
    t = not_null(d_45);
    t = SSL_fopen(not_null(g_45), not_null(h_45));
    {
      ATerm j_45 = NULL;
      ATerm l_45 (ATerm t)
      {
        t = not_null(j_45);
        if(((i_45 != NULL) && (i_45 != t)))
          _fail(t);
        else
          i_45 = t;
        t = not_null(j_45);
        return(t);
      }
      if(((j_45 != NULL) && (j_45 != t)))
        _fail(t);
      else
        j_45 = t;
      t = l_45(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_45));
    }
    return(t);
  }
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  t = not_null(d_45);
  if(match_cons(t, sym__2))
    {
      e_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
      t = k_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  ATerm p_45 (ATerm t)
  {
    ATerm o_45 = NULL;
    t = not_null(n_45);
    if(((o_45 != NULL) && (o_45 != t)))
      _fail(t);
    else
      o_45 = t;
    t = not_null(n_45);
    t = SSL_is_string(not_null(o_45));
    return(t);
  }
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = p_45(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_45 = NULL;
  t = SSL_stdin_stream();
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
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm y_45 = NULL;
    ATerm k_46 (ATerm t)
    {
      t = not_null(y_45);
      if(((x_45 != NULL) && (x_45 != t)))
        _fail(t);
      else
        x_45 = t;
      t = not_null(y_45);
      return(t);
    }
    if(((y_45 != NULL) && (y_45 != t)))
      _fail(t);
    else
      y_45 = t;
    t = k_46(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_45));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm n_46 = NULL;
    ATerm o_46 (ATerm t)
    {
      t = not_null(n_46);
      if(((m_46 != NULL) && (m_46 != t)))
        _fail(t);
      else
        m_46 = t;
      t = not_null(n_46);
      return(t);
    }
    if(((n_46 != NULL) && (n_46 != t)))
      _fail(t);
    else
      n_46 = t;
    t = o_46(t);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_46));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm t_46 = NULL;
  ATerm u_46 (ATerm t)
  {
    t = not_null(t_46);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm v_46 (ATerm t)
  {
    t = not_null(t_46);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm w_46 (ATerm t)
  {
    t = not_null(t_46);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((t_46 != NULL) && (t_46 != t)))
    _fail(t);
  else
    t_46 = t;
  t = not_null(t_46);
  if(match_cons(t, sym_stderr_0))
    {
      t = u_46(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_46(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = w_46(t);
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
  ATerm h_47 = NULL;
  ATerm u_47 (ATerm t)
  {
    ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
    t = not_null(h_47);
    if(((i_47 != NULL) && (i_47 != t)))
      _fail(t);
    else
      i_47 = t;
    t = not_null(h_47);
    {
      ATerm l_47 = NULL;
      ATerm v_47 (ATerm t)
      {
        ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,t_47 = NULL;
        ATerm w_47 (ATerm t)
        {
          t = not_null(q_47);
          if(((k_47 != NULL) && (k_47 != t)))
            _fail(t);
          else
            k_47 = t;
          t = not_null(t_47);
          if(((j_47 != NULL) && (j_47 != t)))
            _fail(t);
          else
            j_47 = t;
          t = not_null(n_47);
          return(t);
        }
        t = not_null(l_47);
        if(((m_47 != NULL) && (m_47 != t)))
          _fail(t);
        else
          m_47 = t;
        t = not_null(l_47);
        t = SSL_explode_term(not_null(m_47));
        if(((n_47 != NULL) && (n_47 != t)))
          _fail(t);
        else
          n_47 = t;
        t = not_null(n_47);
        if(match_cons(t, sym__2))
          {
            o_47 = ATgetArgument(t, 0);
            p_47 = ATgetArgument(t, 1);
            t = not_null(o_47);
            if(match_string(t, ""))
              {
                t = not_null(p_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_47 = ATgetFirst((ATermList) t);
                    t_47 = (ATerm) ATgetNext((ATermList) t);
                    t = w_47(t);
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
      t = not_null(i_47);
      if(((l_47 != NULL) && (l_47 != t)))
        _fail(t);
      else
        l_47 = t;
      t = v_47(t);
      t = not_null(k_47);
    }
    return(t);
  }
  if(((h_47 != NULL) && (h_47 != t)))
    _fail(t);
  else
    h_47 = t;
  t = u_47(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,l_48 = NULL;
  ATerm r_48 (ATerm t)
  {
    t = not_null(f_48);
    {
      ATerm o_69 = t;
      int p_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(p_69);
        }
      else
        {
          t = o_69;
          {
            ATerm a_70 = t;
            int b_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_18 (ATerm t)
                {
                  ATerm m_48 = NULL,n_48 = NULL;
                  ATerm s_48 (ATerm t)
                  {
                    ATerm o_48 = NULL;
                    t = not_null(n_48);
                    if(((o_48 != NULL) && (o_48 != t)))
                      _fail(t);
                    else
                      o_48 = t;
                    t = not_null(o_48);
                    return(t);
                  }
                  if(((m_48 != NULL) && (m_48 != t)))
                    _fail(t);
                  else
                    m_48 = t;
                  t = not_null(m_48);
                  if(match_cons(t, sym_Path_1))
                    {
                      n_48 = ATgetArgument(t, 0);
                      t = s_48(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(d_18, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(b_70);
              }
            else
              {
                t = a_70;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  t = not_null(f_48);
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
      t = r_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm i_70 = t;
  int j_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_48 = NULL;
      ATerm w_48 = NULL;
      ATerm z_48 (ATerm t)
      {
        t = not_null(w_48);
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        t = not_null(w_48);
        return(t);
      }
      if(((w_48 != NULL) && (w_48 != t)))
        _fail(t);
      else
        w_48 = t;
      t = z_48(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_48), term_k_70);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_70);
    }
  else
    {
      t = i_70;
      {
        ATerm e_18 (ATerm t)
        {
          t = term_l_70;
          return(t);
        }
        t = debug_1_0(e_18, t);
        _fail(t);
      }
    }
  {
    ATerm m_70;
    m_70 = t;
    {
      ATerm y_48 = NULL;
      ATerm a_49 (ATerm t)
      {
        t = not_null(y_48);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = not_null(y_48);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((y_48 != NULL) && (y_48 != t)))
        _fail(t);
      else
        y_48 = t;
      t = a_49(t);
    }
    t = m_70;
    t = fclose_0_0(t);
    t = not_null(x_48);
  }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  ATerm i_49 (ATerm t)
  {
    ATerm g_49 = NULL,h_49 = NULL;
    t = not_null(e_49);
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(f_49);
    if(((h_49 != NULL) && (h_49 != t)))
      _fail(t);
    else
      h_49 = t;
    t = not_null(d_49);
    t = SSL_access(not_null(g_49), not_null(h_49));
    return(t);
  }
  if(((d_49 != NULL) && (d_49 != t)))
    _fail(t);
  else
    d_49 = t;
  t = not_null(d_49);
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
      t = i_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm k_49 = NULL;
  ATerm l_49 = NULL;
  ATerm m_49 (ATerm t)
  {
    t = not_null(l_49);
    if(((k_49 != NULL) && (k_49 != t)))
      _fail(t);
    else
      k_49 = t;
    t = not_null(l_49);
    return(t);
  }
  if(((l_49 != NULL) && (l_49 != t)))
    _fail(t);
  else
    l_49 = t;
  t = m_49(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), (ATerm) ATinsert(ATempty, term_n_70));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_71 = t;
  int o_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(o_71);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_71;
      {
        ATerm p_71 = t;
        int q_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_71 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_71;
              }
            {
              ATerm l_18 (ATerm t)
              {
                t = term_s_71;
                return(t);
              }
              t = debug_1_0(l_18, t);
            }
            ;
            LocalPopChoice(q_71);
          }
        else
          {
            t = p_71;
            {
              ATerm p_18 (ATerm t)
              {
                t = term_t_71;
                return(t);
              }
              t = debug_1_0(p_18, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_49 = NULL;
  ATerm t_49 (ATerm t)
  {
    ATerm q_49 = NULL,r_49 = NULL;
    t = not_null(p_49);
    if(((q_49 != NULL) && (q_49 != t)))
      _fail(t);
    else
      q_49 = t;
    t = not_null(p_49);
    {
      ATerm q_18 (ATerm t)
      {
        ATerm x_18 (ATerm t)
        {
          t = term_n_72;
          return(t);
        }
        t = debug_1_0(x_18, t);
        return(t);
      }
      t = if_verbose5_1_0(q_18, t);
      {
        ATerm r_72 = t;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, term_t_65, (ATerm) ATmakeAppl(sym_Imported_1, not_null(q_49)));
            t = table_get_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_72;
          }
        {
          ATerm u_72;
          u_72 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_t_65, term_v_72, (ATerm) ATinsert(ATempty, not_null(q_49)));
          t = table_put_0_0(t);
          t = u_72;
          {
            ATerm b_19 (ATerm t)
            {
              ATerm c_19 (ATerm t)
              {
                t = term_w_72;
                return(t);
              }
              t = debug_1_0(c_19, t);
              return(t);
            }
            t = if_verbose4_1_0(b_19, t);
            t = read_repository_file_0_0(t);
            {
              ATerm d_19 (ATerm t)
              {
                ATerm e_19 (ATerm t)
                {
                  t = term_x_72;
                  return(t);
                }
                t = say_1_0(e_19, t);
                return(t);
              }
              t = if_verbose6_1_0(d_19, t);
              {
                ATerm s_49 = NULL;
                ATerm u_49 (ATerm t)
                {
                  t = not_null(s_49);
                  if(((r_49 != NULL) && (r_49 != t)))
                    _fail(t);
                  else
                    r_49 = t;
                  t = not_null(s_49);
                  return(t);
                }
                if(((s_49 != NULL) && (s_49 != t)))
                  _fail(t);
                else
                  s_49 = t;
                t = u_49(t);
                t = (ATerm) ATmakeAppl(sym__2, term_t_65, not_null(r_49));
                t = table_putlist_1_0(table_append_0_0, t);
                {
                  ATerm f_19 (ATerm t)
                  {
                    ATerm w_19 (ATerm t)
                    {
                      t = term_y_72;
                      return(t);
                    }
                    t = say_1_0(w_19, t);
                    return(t);
                  }
                  t = if_verbose6_1_0(f_19, t);
                  t = (ATerm) ATmakeAppl(sym__3, term_t_65, (ATerm)ATmakeAppl(sym_Imported_1, not_null(q_49)), (ATerm) ATempty);
                  t = table_put_0_0(t);
                  {
                    ATerm a_20 (ATerm t)
                    {
                      ATerm b_20 (ATerm t)
                      {
                        t = term_x_72;
                        return(t);
                      }
                      t = say_1_0(b_20, t);
                      return(t);
                    }
                    t = if_verbose4_1_0(a_20, t);
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
  if(((p_49 != NULL) && (p_49 != t)))
    _fail(t);
  else
    p_49 = t;
  t = t_49(t);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm w_49 = NULL;
  ATerm y_49 (ATerm t)
  {
    ATerm x_49 = NULL;
    t = not_null(w_49);
    if(((x_49 != NULL) && (x_49 != t)))
      _fail(t);
    else
      x_49 = t;
    t = not_null(w_49);
    t = SSL_getenv(not_null(x_49));
    return(t);
  }
  if(((w_49 != NULL) && (w_49 != t)))
    _fail(t);
  else
    w_49 = t;
  t = y_49(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_73;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_73);
    }
  else
    {
      t = z_72;
      {
        ATerm c_73 = t;
        int d_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_73;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(d_73);
          }
        else
          {
            t = c_73;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm l_20 (ATerm t)
    {
      t = term_f_73;
      return(t);
    }
    t = debug_1_0(l_20, t);
    return(t);
  }
  t = if_verbose5_1_0(c_20, t);
  {
    ATerm g_73;
    g_73 = t;
    {
      ATerm u_74 = t;
      int y_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_74;
          t = table_get_0_0(t);
          ;
          LocalPopChoice(y_74);
        }
      else
        {
          t = u_74;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t = xtc_import_0_0(t);
        }
    }
    t = g_73;
    {
      ATerm m_20 (ATerm t)
      {
        ATerm n_20 (ATerm t)
        {
          t = term_a_75;
          return(t);
        }
        t = debug_1_0(n_20, t);
        return(t);
      }
      t = if_verbose5_1_0(m_20, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_75 = t;
  int l_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 (ATerm t)
      {
        ATerm z_20 (ATerm t)
        {
          t = term_m_75;
          return(t);
        }
        t = debug_1_0(z_20, t);
        return(t);
      }
      t = if_verbose5_1_0(o_20, t);
      t = xtc_load_0_0(t);
      {
        ATerm n_75 = t;
        int o_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(o_75);
          }
        else
          {
            t = n_75;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm d_21 (ATerm t)
          {
            ATerm e_21 (ATerm t)
            {
              t = term_m_75;
              return(t);
            }
            t = debug_1_0(e_21, t);
            return(t);
          }
          t = if_verbose5_1_0(d_21, t);
        }
      }
      ;
      LocalPopChoice(l_75);
    }
  else
    {
      t = k_75;
      {
        ATerm a_50 = NULL;
        ATerm b_50 = NULL;
        ATerm c_50 (ATerm t)
        {
          t = not_null(b_50);
          if(((a_50 != NULL) && (a_50 != t)))
            _fail(t);
          else
            a_50 = t;
          t = not_null(b_50);
          return(t);
        }
        if(((b_50 != NULL) && (b_50 != t)))
          _fail(t);
        else
          b_50 = t;
        t = c_50(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_75), not_null(a_50)), term_p_75);
        t = error_0_0(t);
        {
          ATerm f_21 (ATerm t)
          {
            t = term_t_65;
            t = table_getlist_0_0(t);
            {
              ATerm g_21 (ATerm t)
              {
                t = term_r_75;
                return(t);
              }
              t = debug_1_0(g_21, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(f_21, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  ATerm q_50 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
    t = not_null(i_50);
    if(((k_50 != NULL) && (k_50 != t)))
      _fail(t);
    else
      k_50 = t;
    t = not_null(j_50);
    if(((l_50 != NULL) && (l_50 != t)))
      _fail(t);
    else
      l_50 = t;
    t = not_null(h_50);
    {
      ATerm n_50 = NULL,p_50 = NULL;
      ATerm s_50 (ATerm t)
      {
        t = not_null(p_50);
        if(((m_50 != NULL) && (m_50 != t)))
          _fail(t);
        else
          m_50 = t;
        t = not_null(p_50);
        return(t);
      }
      ATerm o_50 = NULL;
      ATerm r_50 (ATerm t)
      {
        t = not_null(o_50);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = not_null(o_50);
        return(t);
      }
      t = not_null(k_50);
      {
        ATerm s_75 = t;
        int t_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(t_75);
          }
        else
          {
            t = s_75;
            t = (ATerm) ATempty;
          }
        if(((o_50 != NULL) && (o_50 != t)))
          _fail(t);
        else
          o_50 = t;
        t = r_50(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), not_null(n_50));
      t = conc_0_0(t);
      if(((p_50 != NULL) && (p_50 != t)))
        _fail(t);
      else
        p_50 = t;
      t = s_50(t);
      t = (ATerm) ATmakeAppl(sym__3, term_o_63, not_null(k_50), not_null(m_50));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((h_50 != NULL) && (h_50 != t)))
    _fail(t);
  else
    h_50 = t;
  t = not_null(h_50);
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
      t = q_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  ATerm m_51 (ATerm t)
  {
    t = not_null(y_50);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm q_51 (ATerm t)
  {
    ATerm d_51 = NULL,e_51 = NULL,j_51 = NULL,k_51 = NULL;
    t = not_null(z_50);
    if(((d_51 != NULL) && (d_51 != t)))
      _fail(t);
    else
      d_51 = t;
    t = not_null(b_51);
    if(((e_51 != NULL) && (e_51 != t)))
      _fail(t);
    else
      e_51 = t;
    t = not_null(c_51);
    if(((j_51 != NULL) && (j_51 != t)))
      _fail(t);
    else
      j_51 = t;
    t = not_null(y_50);
    {
      ATerm u_75;
      u_75 = t;
      t = not_null(d_51);
      t = k_0(t);
      t = u_75;
      {
        ATerm l_51 = NULL;
        ATerm r_51 (ATerm t)
        {
          t = not_null(l_51);
          if(((k_51 != NULL) && (k_51 != t)))
            _fail(t);
          else
            k_51 = t;
          t = not_null(l_51);
          return(t);
        }
        t = not_null(e_51);
        t = m_0(t);
        if(((l_51 != NULL) && (l_51 != t)))
          _fail(t);
        else
          l_51 = t;
        t = r_51(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(j_51)), not_null(k_51));
      }
    }
    return(t);
  }
  if(((y_50 != NULL) && (y_50 != t)))
    _fail(t);
  else
    y_50 = t;
  t = not_null(y_50);
  if(match_string(t, "register-usage-info"))
    {
      t = m_51(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_50 = ATgetFirst((ATermList) t);
          a_51 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_51);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_51 = ATgetFirst((ATermList) t);
              c_51 = (ATerm) ATgetNext((ATermList) t);
              t = q_51(t);
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
  ATerm t_51 = NULL;
  ATerm v_51 (ATerm t)
  {
    ATerm u_51 = NULL;
    t = not_null(t_51);
    if(((u_51 != NULL) && (u_51 != t)))
      _fail(t);
    else
      u_51 = t;
    t = not_null(t_51);
    t = SSL_string_to_int(not_null(u_51));
    return(t);
  }
  if(((t_51 != NULL) && (t_51 != t)))
    _fail(t);
  else
    t_51 = t;
  t = v_51(t);
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  ATerm v_75;
  v_75 = t;
  {
    ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
    ATerm d_52 (ATerm t)
    {
      t = not_null(b_52);
      if(((y_51 != NULL) && (y_51 != t)))
        _fail(t);
      else
        y_51 = t;
      t = not_null(c_52);
      if(((z_51 != NULL) && (z_51 != t)))
        _fail(t);
      else
        z_51 = t;
      t = not_null(a_52);
      t = SSL_table_remove(not_null(y_51), not_null(z_51));
      return(t);
    }
    if(((a_52 != NULL) && (a_52 != t)))
      _fail(t);
    else
      a_52 = t;
    t = not_null(a_52);
    if(match_cons(t, sym__2))
      {
        b_52 = ATgetArgument(t, 0);
        c_52 = ATgetArgument(t, 1);
        t = d_52(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = v_75;
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  ATerm l_52 (ATerm t)
  {
    ATerm j_52 = NULL,k_52 = NULL;
    t = not_null(h_52);
    if(((j_52 != NULL) && (j_52 != t)))
      _fail(t);
    else
      j_52 = t;
    t = not_null(i_52);
    if(((k_52 != NULL) && (k_52 != t)))
      _fail(t);
    else
      k_52 = t;
    t = not_null(g_52);
    {
      ATerm w_75 = t;
      int x_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(j_52);
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_o_63, not_null(j_52));
          t = table_remove_0_0(t);
          ;
          LocalPopChoice(x_75);
        }
      else
        {
          t = w_75;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_52), not_null(k_52));
          t = set_config_0_0(t);
        }
    }
    return(t);
  }
  if(((g_52 != NULL) && (g_52 != t)))
    _fail(t);
  else
    g_52 = t;
  t = not_null(g_52);
  if(match_cons(t, sym__2))
    {
      h_52 = ATgetArgument(t, 0);
      i_52 = ATgetArgument(t, 1);
      t = l_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,h_53 = NULL;
  ATerm w_53 (ATerm t)
  {
    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
    t = not_null(e_53);
    if(((i_53 != NULL) && (i_53 != t)))
      _fail(t);
    else
      i_53 = t;
    t = not_null(h_53);
    if(((j_53 != NULL) && (j_53 != t)))
      _fail(t);
    else
      j_53 = t;
    t = not_null(d_53);
    {
      ATerm o_53 = NULL,v_53 = NULL;
      ATerm c_54 (ATerm t)
      {
        t = not_null(v_53);
        if(((k_53 != NULL) && (k_53 != t)))
          _fail(t);
        else
          k_53 = t;
        t = not_null(v_53);
        return(t);
      }
      ATerm p_53 = NULL;
      ATerm b_54 (ATerm t)
      {
        t = not_null(p_53);
        if(((o_53 != NULL) && (o_53 != t)))
          _fail(t);
        else
          o_53 = t;
        t = not_null(p_53);
        return(t);
      }
      t = not_null(i_53);
      {
        ATerm y_75 = t;
        int z_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = get_config_0_0(t);
            ;
            LocalPopChoice(z_75);
          }
        else
          {
            t = y_75;
            t = (ATerm) ATempty;
          }
        if(((p_53 != NULL) && (p_53 != t)))
          _fail(t);
        else
          p_53 = t;
        t = b_54(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_53), not_null(j_53));
      t = conc_0_0(t);
      if(((v_53 != NULL) && (v_53 != t)))
        _fail(t);
      else
        v_53 = t;
      t = c_54(t);
      t = (ATerm) ATmakeAppl(sym__3, term_o_63, not_null(i_53), not_null(k_53));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((d_53 != NULL) && (d_53 != t)))
    _fail(t);
  else
    d_53 = t;
  t = not_null(d_53);
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
      t = w_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm a_76 = t;
  int b_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_21 (ATerm t)
      {
        ATerm v_55 = NULL;
        if(((v_55 != NULL) && (v_55 != t)))
          _fail(t);
        else
          v_55 = t;
        t = not_null(v_55);
        if(match_string(t, "-i"))
          {
            t = not_null(v_55);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_21 (ATerm t)
      {
        ATerm w_55 = NULL;
        ATerm x_55 = NULL;
        ATerm w_58 (ATerm t)
        {
          t = not_null(x_55);
          if(((w_55 != NULL) && (w_55 != t)))
            _fail(t);
          else
            w_55 = t;
          t = not_null(x_55);
          return(t);
        }
        if(((x_55 != NULL) && (x_55 != t)))
          _fail(t);
        else
          x_55 = t;
        t = w_58(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_58, not_null(w_55));
        t = set_config_0_0(t);
        t = term_q_45;
        return(t);
      }
      ATerm r_21 (ATerm t)
      {
        t = term_c_76;
        return(t);
      }
      t = ArgOption_3_0(p_21, q_21, r_21, t);
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
            ATerm s_21 (ATerm t)
            {
              ATerm y_55 = NULL;
              if(((y_55 != NULL) && (y_55 != t)))
                _fail(t);
              else
                y_55 = t;
              t = not_null(y_55);
              if(match_string(t, "-o"))
                {
                  t = not_null(y_55);
                }
              else
                {
                  if(match_string(t, "--output"))
                    {
                      t = not_null(y_55);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_21 (ATerm t)
            {
              ATerm z_55 = NULL;
              ATerm i_56 = NULL;
              ATerm x_58 (ATerm t)
              {
                t = not_null(i_56);
                if(((z_55 != NULL) && (z_55 != t)))
                  _fail(t);
                else
                  z_55 = t;
                t = not_null(i_56);
                return(t);
              }
              if(((i_56 != NULL) && (i_56 != t)))
                _fail(t);
              else
                i_56 = t;
              t = x_58(t);
              t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(z_55));
              t = set_config_0_0(t);
              t = term_q_45;
              return(t);
            }
            ATerm f_22 (ATerm t)
            {
              t = term_f_76;
              return(t);
            }
            t = ArgOption_3_0(s_21, t_21, f_22, t);
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
                  ATerm g_22 (ATerm t)
                  {
                    ATerm j_56 = NULL;
                    if(((j_56 != NULL) && (j_56 != t)))
                      _fail(t);
                    else
                      j_56 = t;
                    t = not_null(j_56);
                    if(match_string(t, "-I"))
                      {
                        t = not_null(j_56);
                      }
                    else
                      {
                        if(match_string(t, "--Include"))
                          {
                            t = not_null(j_56);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm n_22 (ATerm t)
                  {
                    ATerm l_56 = NULL;
                    ATerm m_56 = NULL;
                    ATerm h_59 (ATerm t)
                    {
                      t = not_null(m_56);
                      if(((l_56 != NULL) && (l_56 != t)))
                        _fail(t);
                      else
                        l_56 = t;
                      t = not_null(m_56);
                      return(t);
                    }
                    if(((m_56 != NULL) && (m_56 != t)))
                      _fail(t);
                    else
                      m_56 = t;
                    t = h_59(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_z_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_56)), term_z_59));
                    t = extend_config_0_0(t);
                    t = term_q_45;
                    return(t);
                  }
                  ATerm o_22 (ATerm t)
                  {
                    t = term_i_76;
                    return(t);
                  }
                  t = ArgOption_3_0(g_22, n_22, o_22, t);
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
                        ATerm v_22 (ATerm t)
                        {
                          ATerm n_56 = NULL;
                          if(((n_56 != NULL) && (n_56 != t)))
                            _fail(t);
                          else
                            n_56 = t;
                          t = not_null(n_56);
                          if(match_string(t, "--main"))
                            {
                              t = not_null(n_56);
                            }
                          else
                            {
                              if(match_string(t, "-m"))
                                {
                                  t = not_null(n_56);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm w_22 (ATerm t)
                        {
                          ATerm o_56 = NULL;
                          ATerm p_56 = NULL;
                          ATerm i_59 (ATerm t)
                          {
                            t = not_null(p_56);
                            if(((o_56 != NULL) && (o_56 != t)))
                              _fail(t);
                            else
                              o_56 = t;
                            t = not_null(p_56);
                            return(t);
                          }
                          if(((p_56 != NULL) && (p_56 != t)))
                            _fail(t);
                          else
                            p_56 = t;
                          t = i_59(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_z_45, not_null(o_56));
                          t = set_config_0_0(t);
                          t = term_q_45;
                          return(t);
                        }
                        ATerm x_22 (ATerm t)
                        {
                          t = term_l_76;
                          return(t);
                        }
                        t = ArgOption_3_0(v_22, w_22, x_22, t);
                        ;
                        LocalPopChoice(k_76);
                      }
                    else
                      {
                        t = j_76;
                        {
                          ATerm m_76 = t;
                          int n_76 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_22 (ATerm t)
                              {
                                ATerm q_56 = NULL;
                                if(((q_56 != NULL) && (q_56 != t)))
                                  _fail(t);
                                else
                                  q_56 = t;
                                t = not_null(q_56);
                                if(match_string(t, "--C-include"))
                                  {
                                    t = not_null(q_56);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_22 (ATerm t)
                              {
                                ATerm r_56 = NULL;
                                ATerm s_56 = NULL;
                                ATerm j_59 (ATerm t)
                                {
                                  t = not_null(s_56);
                                  if(((r_56 != NULL) && (r_56 != t)))
                                    _fail(t);
                                  else
                                    r_56 = t;
                                  t = not_null(s_56);
                                  return(t);
                                }
                                if(((s_56 != NULL) && (s_56 != t)))
                                  _fail(t);
                                else
                                  s_56 = t;
                                t = j_59(t);
                                t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, not_null(r_56)));
                                t = post_extend_config_0_0(t);
                                t = term_q_45;
                                return(t);
                              }
                              ATerm p_23 (ATerm t)
                              {
                                t = term_o_76;
                                return(t);
                              }
                              t = ArgOption_3_0(y_22, z_22, p_23, t);
                              ;
                              LocalPopChoice(n_76);
                            }
                          else
                            {
                              t = m_76;
                              {
                                ATerm p_76 = t;
                                int q_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_23 (ATerm t)
                                    {
                                      ATerm t_56 = NULL;
                                      if(((t_56 != NULL) && (t_56 != t)))
                                        _fail(t);
                                      else
                                        t_56 = t;
                                      t = not_null(t_56);
                                      if(match_string(t, "-CI"))
                                        {
                                          t = not_null(t_56);
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm r_23 (ATerm t)
                                    {
                                      ATerm u_56 = NULL;
                                      ATerm v_56 = NULL;
                                      ATerm k_59 (ATerm t)
                                      {
                                        t = not_null(v_56);
                                        if(((u_56 != NULL) && (u_56 != t)))
                                          _fail(t);
                                        else
                                          u_56 = t;
                                        t = not_null(v_56);
                                        return(t);
                                      }
                                      if(((v_56 != NULL) && (v_56 != t)))
                                        _fail(t);
                                      else
                                        v_56 = t;
                                      t = k_59(t);
                                      t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATinsert(ATempty, not_null(u_56)));
                                      t = extend_config_0_0(t);
                                      t = term_q_45;
                                      return(t);
                                    }
                                    ATerm s_23 (ATerm t)
                                    {
                                      t = term_r_76;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(q_23, r_23, s_23, t);
                                    ;
                                    LocalPopChoice(q_76);
                                  }
                                else
                                  {
                                    t = p_76;
                                    {
                                      ATerm s_76 = t;
                                      int t_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_24 (ATerm t)
                                          {
                                            ATerm b_57 = NULL;
                                            if(((b_57 != NULL) && (b_57 != t)))
                                              _fail(t);
                                            else
                                              b_57 = t;
                                            t = not_null(b_57);
                                            if(match_string(t, "-CL"))
                                              {
                                                t = not_null(b_57);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_24 (ATerm t)
                                          {
                                            ATerm c_57 = NULL;
                                            ATerm d_57 = NULL;
                                            ATerm l_59 (ATerm t)
                                            {
                                              t = not_null(d_57);
                                              if(((c_57 != NULL) && (c_57 != t)))
                                                _fail(t);
                                              else
                                                c_57 = t;
                                              t = not_null(d_57);
                                              return(t);
                                            }
                                            if(((d_57 != NULL) && (d_57 != t)))
                                              _fail(t);
                                            else
                                              d_57 = t;
                                            t = l_59(t);
                                            t = (ATerm) ATmakeAppl(sym__2, term_u_33, (ATerm) ATinsert(ATempty, not_null(c_57)));
                                            t = extend_config_0_0(t);
                                            t = term_q_45;
                                            return(t);
                                          }
                                          ATerm n_24 (ATerm t)
                                          {
                                            t = term_u_76;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(e_24, j_24, n_24, t);
                                          ;
                                          LocalPopChoice(t_76);
                                        }
                                      else
                                        {
                                          t = s_76;
                                          {
                                            ATerm v_76 = t;
                                            int w_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_24 (ATerm t)
                                                {
                                                  ATerm e_57 = NULL;
                                                  if(((e_57 != NULL) && (e_57 != t)))
                                                    _fail(t);
                                                  else
                                                    e_57 = t;
                                                  t = not_null(e_57);
                                                  if(match_string(t, "-c"))
                                                    {
                                                      t = not_null(e_57);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm p_24 (ATerm t)
                                                {
                                                  t = term_x_76;
                                                  t = set_config_0_0(t);
                                                  t = term_q_45;
                                                  return(t);
                                                }
                                                ATerm q_24 (ATerm t)
                                                {
                                                  t = term_y_76;
                                                  return(t);
                                                }
                                                t = Option_3_0(o_24, p_24, q_24, t);
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
                                                      ATerm r_24 (ATerm t)
                                                      {
                                                        ATerm f_57 = NULL;
                                                        if(((f_57 != NULL) && (f_57 != t)))
                                                          _fail(t);
                                                        else
                                                          f_57 = t;
                                                        t = not_null(f_57);
                                                        if(match_string(t, "--ast"))
                                                          {
                                                            t = not_null(f_57);
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm s_24 (ATerm t)
                                                      {
                                                        t = term_b_77;
                                                        t = set_config_0_0(t);
                                                        t = term_q_45;
                                                        return(t);
                                                      }
                                                      ATerm t_24 (ATerm t)
                                                      {
                                                        t = term_c_77;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(r_24, s_24, t_24, t);
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
                                                            ATerm l_25 (ATerm t)
                                                            {
                                                              ATerm g_57 = NULL;
                                                              if(((g_57 != NULL) && (g_57 != t)))
                                                                _fail(t);
                                                              else
                                                                g_57 = t;
                                                              t = not_null(g_57);
                                                              if(match_string(t, "-F"))
                                                                {
                                                                  t = not_null(g_57);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm m_25 (ATerm t)
                                                            {
                                                              t = term_f_77;
                                                              t = set_config_0_0(t);
                                                              t = term_q_45;
                                                              return(t);
                                                            }
                                                            ATerm n_25 (ATerm t)
                                                            {
                                                              t = term_g_77;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(l_25, m_25, n_25, t);
                                                            ;
                                                            LocalPopChoice(e_77);
                                                          }
                                                        else
                                                          {
                                                            t = d_77;
                                                            {
                                                              ATerm h_77 = t;
                                                              int i_77 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_25 (ATerm t)
                                                                  {
                                                                    ATerm h_57 = NULL;
                                                                    if(((h_57 != NULL) && (h_57 != t)))
                                                                      _fail(t);
                                                                    else
                                                                      h_57 = t;
                                                                    t = not_null(h_57);
                                                                    if(match_string(t, "--output-optimized"))
                                                                      {
                                                                        t = not_null(h_57);
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm y_25 (ATerm t)
                                                                  {
                                                                    t = term_j_77;
                                                                    t = set_config_0_0(t);
                                                                    t = term_q_45;
                                                                    return(t);
                                                                  }
                                                                  ATerm z_25 (ATerm t)
                                                                  {
                                                                    t = term_k_77;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3_0(o_25, y_25, z_25, t);
                                                                  ;
                                                                  LocalPopChoice(i_77);
                                                                }
                                                              else
                                                                {
                                                                  t = h_77;
                                                                  {
                                                                    ATerm l_77 = t;
                                                                    int m_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm a_26 (ATerm t)
                                                                        {
                                                                          ATerm i_57 = NULL;
                                                                          if(((i_57 != NULL) && (i_57 != t)))
                                                                            _fail(t);
                                                                          else
                                                                            i_57 = t;
                                                                          t = not_null(i_57);
                                                                          if(match_string(t, "--output-canonical"))
                                                                            {
                                                                              t = not_null(i_57);
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm b_26 (ATerm t)
                                                                        {
                                                                          t = term_n_77;
                                                                          t = set_config_0_0(t);
                                                                          t = term_q_45;
                                                                          return(t);
                                                                        }
                                                                        ATerm c_26 (ATerm t)
                                                                        {
                                                                          t = term_o_77;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3_0(a_26, b_26, c_26, t);
                                                                        ;
                                                                        LocalPopChoice(m_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_77;
                                                                        {
                                                                          ATerm p_77 = t;
                                                                          int q_77 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm r_26 (ATerm t)
                                                                              {
                                                                                ATerm s_57 = NULL;
                                                                                if(((s_57 != NULL) && (s_57 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  s_57 = t;
                                                                                t = not_null(s_57);
                                                                                if(match_string(t, "--keep"))
                                                                                  {
                                                                                    t = not_null(s_57);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm v_26 (ATerm t)
                                                                              {
                                                                                ATerm t_57 = NULL;
                                                                                ATerm u_57 = NULL;
                                                                                ATerm m_59 (ATerm t)
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
                                                                                t = m_59(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, term_y_44, not_null(t_57));
                                                                                t = set_config_0_0(t);
                                                                                t = term_q_45;
                                                                                return(t);
                                                                              }
                                                                              ATerm w_26 (ATerm t)
                                                                              {
                                                                                t = term_r_77;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3_0(r_26, v_26, w_26, t);
                                                                              ;
                                                                              LocalPopChoice(q_77);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_77;
                                                                              {
                                                                                ATerm s_77 = t;
                                                                                int t_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_27 (ATerm t)
                                                                                    {
                                                                                      ATerm v_57 = NULL;
                                                                                      if(((v_57 != NULL) && (v_57 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        v_57 = t;
                                                                                      t = not_null(v_57);
                                                                                      if(match_string(t, "--fusion"))
                                                                                        {
                                                                                          t = not_null(v_57);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_27 (ATerm t)
                                                                                    {
                                                                                      t = term_u_77;
                                                                                      t = toggle_config_0_0(t);
                                                                                      t = term_q_45;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm c_27 (ATerm t)
                                                                                    {
                                                                                      t = term_v_77;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(a_27, b_27, c_27, t);
                                                                                    ;
                                                                                    LocalPopChoice(t_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_77;
                                                                                    {
                                                                                      ATerm w_77 = t;
                                                                                      int x_77 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm d_27 (ATerm t)
                                                                                          {
                                                                                            ATerm w_57 = NULL;
                                                                                            if(((w_57 != NULL) && (w_57 != t)))
                                                                                              _fail(t);
                                                                                            else
                                                                                              w_57 = t;
                                                                                            t = not_null(w_57);
                                                                                            if(match_string(t, "--trace-all"))
                                                                                              {
                                                                                                t = not_null(w_57);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm o_27 (ATerm t)
                                                                                          {
                                                                                            t = term_z_77;
                                                                                            t = set_config_0_0(t);
                                                                                            t = term_q_45;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm p_27 (ATerm t)
                                                                                          {
                                                                                            t = term_a_78;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3_0(d_27, o_27, p_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(x_77);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_77;
                                                                                          {
                                                                                            ATerm b_78 = t;
                                                                                            int c_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm x_57 = NULL;
                                                                                                  if(((x_57 != NULL) && (x_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    x_57 = t;
                                                                                                  t = not_null(x_57);
                                                                                                  if(match_string(t, "-t"))
                                                                                                    {
                                                                                                      t = not_null(x_57);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm y_57 = NULL;
                                                                                                  ATerm z_57 = NULL;
                                                                                                  ATerm n_59 (ATerm t)
                                                                                                  {
                                                                                                    t = not_null(z_57);
                                                                                                    if(((y_57 != NULL) && (y_57 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      y_57 = t;
                                                                                                    t = not_null(z_57);
                                                                                                    return(t);
                                                                                                  }
                                                                                                  if(((z_57 != NULL) && (z_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    z_57 = t;
                                                                                                  t = n_59(t);
                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_d_78, (ATerm) ATinsert(ATempty, not_null(y_57)));
                                                                                                  t = extend_config_0_0(t);
                                                                                                  t = term_q_45;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm t_27 (ATerm t)
                                                                                                {
                                                                                                  t = term_e_78;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(q_27, r_27, t_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(c_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_78;
                                                                                                {
                                                                                                  ATerm f_78 = t;
                                                                                                  int g_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm u_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm a_58 = NULL;
                                                                                                        if(((a_58 != NULL) && (a_58 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          a_58 = t;
                                                                                                        t = not_null(a_58);
                                                                                                        if(match_string(t, "--verbose"))
                                                                                                          {
                                                                                                            t = not_null(a_58);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm b_58 = NULL;
                                                                                                        ATerm c_58 = NULL;
                                                                                                        ATerm o_59 (ATerm t)
                                                                                                        {
                                                                                                          t = not_null(c_58);
                                                                                                          if(((b_58 != NULL) && (b_58 != t)))
                                                                                                            _fail(t);
                                                                                                          else
                                                                                                            b_58 = t;
                                                                                                          t = not_null(c_58);
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = string_to_int_0_0(t);
                                                                                                        if(((c_58 != NULL) && (c_58 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          c_58 = t;
                                                                                                        t = o_59(t);
                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_s_33, not_null(b_58));
                                                                                                        t = set_config_0_0(t);
                                                                                                        t = term_q_45;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm w_27 (ATerm t)
                                                                                                      {
                                                                                                        t = term_h_78;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3_0(u_27, v_27, w_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(g_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = f_78;
                                                                                                      {
                                                                                                        ATerm i_78 = t;
                                                                                                        int j_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm y_27 (ATerm t)
                                                                                                            {
                                                                                                              ATerm d_58 = NULL;
                                                                                                              if(((d_58 != NULL) && (d_58 != t)))
                                                                                                                _fail(t);
                                                                                                              else
                                                                                                                d_58 = t;
                                                                                                              t = not_null(d_58);
                                                                                                              if(match_string(t, "-S"))
                                                                                                                {
                                                                                                                  t = not_null(d_58);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "--silent"))
                                                                                                                    {
                                                                                                                      t = not_null(d_58);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm z_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_k_78;
                                                                                                              t = set_config_0_0(t);
                                                                                                              t = term_q_45;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm a_28 (ATerm t)
                                                                                                            {
                                                                                                              t = term_l_78;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(y_27, z_27, a_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(j_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_78;
                                                                                                            {
                                                                                                              ATerm m_78 = t;
                                                                                                              int n_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm b_28 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm e_58 = NULL;
                                                                                                                    if(((e_58 != NULL) && (e_58 != t)))
                                                                                                                      _fail(t);
                                                                                                                    else
                                                                                                                      e_58 = t;
                                                                                                                    t = not_null(e_58);
                                                                                                                    if(match_string(t, "-h"))
                                                                                                                      {
                                                                                                                        t = not_null(e_58);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_string(t, "--help"))
                                                                                                                          {
                                                                                                                            t = not_null(e_58);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm c_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_p_78;
                                                                                                                    t = set_config_0_0(t);
                                                                                                                    t = term_q_45;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm d_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_q_78;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(b_28, c_28, d_28, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(n_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = m_78;
                                                                                                                  {
                                                                                                                    ATerm r_78 = t;
                                                                                                                    int s_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm e_28 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm f_58 = NULL;
                                                                                                                          if(((f_58 != NULL) && (f_58 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            f_58 = t;
                                                                                                                          t = not_null(f_58);
                                                                                                                          if(match_string(t, "--man"))
                                                                                                                            {
                                                                                                                              t = not_null(f_58);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm f_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_u_78;
                                                                                                                          t = set_config_0_0(t);
                                                                                                                          t = term_q_45;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm g_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_v_78;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(e_28, f_28, g_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(s_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_78;
                                                                                                                        {
                                                                                                                          ATerm w_78 = t;
                                                                                                                          int x_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm h_28 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm g_58 = NULL;
                                                                                                                                if(((g_58 != NULL) && (g_58 != t)))
                                                                                                                                  _fail(t);
                                                                                                                                else
                                                                                                                                  g_58 = t;
                                                                                                                                t = not_null(g_58);
                                                                                                                                if(match_string(t, "-v"))
                                                                                                                                  {
                                                                                                                                    t = not_null(g_58);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_string(t, "--version"))
                                                                                                                                      {
                                                                                                                                        t = not_null(g_58);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        _fail(t);
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm i_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_z_78;
                                                                                                                                t = set_config_0_0(t);
                                                                                                                                t = term_q_45;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm j_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_a_79;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3_0(h_28, i_28, j_28, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(x_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_78;
                                                                                                                              {
                                                                                                                                ATerm k_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm h_58 = NULL;
                                                                                                                                  if(((h_58 != NULL) && (h_58 != t)))
                                                                                                                                    _fail(t);
                                                                                                                                  else
                                                                                                                                    h_58 = t;
                                                                                                                                  t = not_null(h_58);
                                                                                                                                  if(match_string(t, "--warning"))
                                                                                                                                    {
                                                                                                                                      t = not_null(h_58);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "-W"))
                                                                                                                                        {
                                                                                                                                          t = not_null(h_58);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          _fail(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm m_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm b_79 = t;
                                                                                                                                  int c_79 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      ATerm o_58 = NULL;
                                                                                                                                      ATerm d_79;
                                                                                                                                      d_79 = t;
                                                                                                                                      t = term_d_44;
                                                                                                                                      t = get_config_0_0(t);
                                                                                                                                      {
                                                                                                                                        ATerm a_29 (ATerm t)
                                                                                                                                        {
                                                                                                                                          ATerm n_58 = NULL;
                                                                                                                                          if(((n_58 != NULL) && (n_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            n_58 = t;
                                                                                                                                          t = not_null(n_58);
                                                                                                                                          if(match_string(t, "all"))
                                                                                                                                            {
                                                                                                                                              t = not_null(n_58);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              _fail(t);
                                                                                                                                            }
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        t = Cons_2_0(a_29, Nil_0_0, t);
                                                                                                                                      }
                                                                                                                                      t = d_79;
                                                                                                                                      {
                                                                                                                                        ATerm p_58 = NULL;
                                                                                                                                        ATerm p_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(p_58);
                                                                                                                                          if(((o_58 != NULL) && (o_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            o_58 = t;
                                                                                                                                          t = not_null(p_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((p_58 != NULL) && (p_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          p_58 = t;
                                                                                                                                        t = p_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_d_44, (ATerm) ATinsert(ATempty, not_null(o_58)));
                                                                                                                                        t = set_config_0_0(t);
                                                                                                                                      }
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(c_79);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_79;
                                                                                                                                      {
                                                                                                                                        ATerm q_58 = NULL;
                                                                                                                                        ATerm v_58 = NULL;
                                                                                                                                        ATerm q_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(v_58);
                                                                                                                                          if(((q_58 != NULL) && (q_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            q_58 = t;
                                                                                                                                          t = not_null(v_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((v_58 != NULL) && (v_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          v_58 = t;
                                                                                                                                        t = q_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_d_44, (ATerm) ATinsert(ATempty, not_null(q_58)));
                                                                                                                                        t = extend_config_0_0(t);
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  t = term_q_45;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm w_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_e_79;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = ArgOption_3_0(k_28, m_28, w_28, t);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_59 = NULL;
  ATerm u_59 (ATerm t)
  {
    ATerm t_59 = NULL;
    t = not_null(s_59);
    if(((t_59 != NULL) && (t_59 != t)))
      _fail(t);
    else
      t_59 = t;
    t = not_null(s_59);
    t = SSL_table_destroy(not_null(t_59));
    return(t);
  }
  if(((s_59 != NULL) && (s_59 != t)))
    _fail(t);
  else
    s_59 = t;
  t = u_59(t);
  return(t);
}
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_79), term_r_64), term_t_79), term_s_79), term_r_79), term_r_64), term_q_79), term_p_79), term_o_79), term_n_79), term_m_79), term_l_79), term_k_79), term_j_79), term_f_79);
  return(t);
}
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm v_59 (ATerm t)
  {
    ATerm v_79 = t;
    int w_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(w_79);
      }
    else
      {
        t = v_79;
        t = Cons_2_0(t_86, v_59, t);
      }
    return(t);
  }
  t = v_59(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  ATerm n_60 (ATerm t)
  {
    ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
    t = not_null(c_60);
    if(((f_60 != NULL) && (f_60 != t)))
      _fail(t);
    else
      f_60 = t;
    t = not_null(d_60);
    if(((g_60 != NULL) && (g_60 != t)))
      _fail(t);
    else
      g_60 = t;
    t = not_null(g_60);
    {
      ATerm z_79;
      z_79 = t;
      {
        ATerm i_60 = NULL,k_60 = NULL,m_60 = NULL;
        ATerm r_60 (ATerm t)
        {
          t = not_null(m_60);
          if(((h_60 != NULL) && (h_60 != t)))
            _fail(t);
          else
            h_60 = t;
          t = not_null(m_60);
          return(t);
        }
        ATerm a_80;
        a_80 = t;
        {
          ATerm j_60 = NULL;
          ATerm p_60 (ATerm t)
          {
            t = not_null(j_60);
            if(((i_60 != NULL) && (i_60 != t)))
              _fail(t);
            else
              i_60 = t;
            t = not_null(j_60);
            return(t);
          }
          t = h_0(t);
          if(((j_60 != NULL) && (j_60 != t)))
            _fail(t);
          else
            j_60 = t;
          t = p_60(t);
        }
        t = a_80;
        {
          ATerm l_60 = NULL;
          ATerm q_60 (ATerm t)
          {
            t = not_null(l_60);
            if(((k_60 != NULL) && (k_60 != t)))
              _fail(t);
            else
              k_60 = t;
            t = not_null(l_60);
            return(t);
          }
          t = not_null(f_60);
          t = g_0(t);
          if(((l_60 != NULL) && (l_60 != t)))
            _fail(t);
          else
            l_60 = t;
          t = q_60(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(i_60)), not_null(k_60));
          if(((m_60 != NULL) && (m_60 != t)))
            _fail(t);
          else
            m_60 = t;
          t = r_60(t);
        }
      }
      t = z_79;
      {
        ATerm b_29 (ATerm t)
        {
          t = not_null(h_60);
          return(t);
        }
        t = reverse_acc_2_0(g_0, b_29, t);
      }
    }
    return(t);
  }
  ATerm o_60 (ATerm t)
  {
    t = term_q_45;
    t = h_0(t);
    return(t);
  }
  if(((e_60 != NULL) && (e_60 != t)))
    _fail(t);
  else
    e_60 = t;
  t = not_null(e_60);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_60 = ATgetFirst((ATermList) t);
      d_60 = (ATerm) ATgetNext((ATermList) t);
      t = n_60(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_60(t);
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
  ATerm h_29 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_29, t);
  return(t);
}
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_60 = NULL;
  ATerm u_60 = NULL;
  ATerm v_60 (ATerm t)
  {
    t = not_null(u_60);
    if(((t_60 != NULL) && (t_60 != t)))
      _fail(t);
    else
      t_60 = t;
    t = not_null(u_60);
    return(t);
  }
  t = term_q_45;
  t = e_0(t);
  if(((u_60 != NULL) && (u_60 != t)))
    _fail(t);
  else
    u_60 = t;
  t = v_60(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_80), not_null(t_60)), term_g_80), term_r_64), term_f_80), term_r_64), term_d_80), term_c_80), term_r_64), term_b_80);
  return(t);
}
ATerm Program_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  ATerm l_61 (ATerm t)
  {
    ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,h_61 = NULL;
    ATerm n_61 (ATerm t)
    {
      ATerm i_61 = NULL,j_61 = NULL;
      t = not_null(h_61);
      if(((i_61 != NULL) && (i_61 != t)))
        _fail(t);
      else
        i_61 = t;
      t = not_null(h_61);
      {
        ATerm k_61 = NULL;
        ATerm o_61 (ATerm t)
        {
          t = not_null(k_61);
          if(((j_61 != NULL) && (j_61 != t)))
            _fail(t);
          else
            j_61 = t;
          t = not_null(k_61);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_61)), not_null(f_61));
        if(((k_61 != NULL) && (k_61 != t)))
          _fail(t);
        else
          k_61 = t;
        t = o_61(t);
        t = not_null(j_61);
      }
      return(t);
    }
    t = not_null(b_61);
    if(((d_61 != NULL) && (d_61 != t)))
      _fail(t);
    else
      d_61 = t;
    t = not_null(c_61);
    if(((e_61 != NULL) && (e_61 != t)))
      _fail(t);
    else
      e_61 = t;
    t = not_null(b_61);
    {
      ATerm g_61 = NULL;
      ATerm m_61 (ATerm t)
      {
        t = not_null(g_61);
        if(((f_61 != NULL) && (f_61 != t)))
          _fail(t);
        else
          f_61 = t;
        t = not_null(g_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(d_61));
      if(((g_61 != NULL) && (g_61 != t)))
        _fail(t);
      else
        g_61 = t;
      t = m_61(t);
      t = not_null(e_61);
      t = c_71(t);
      if(((h_61 != NULL) && (h_61 != t)))
        _fail(t);
      else
        h_61 = t;
      t = n_61(t);
    }
    return(t);
  }
  if(((b_61 != NULL) && (b_61 != t)))
    _fail(t);
  else
    b_61 = t;
  t = not_null(b_61);
  if(match_cons(t, sym_Program_1))
    {
      c_61 = ATgetArgument(t, 0);
      t = l_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  ATerm i_80 = t;
  int j_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_61 = NULL;
      ATerm a_62 (ATerm t)
      {
        t = not_null(u_61);
        if(((t_61 != NULL) && (t_61 != t)))
          _fail(t);
        else
          t_61 = t;
        t = not_null(u_61);
        return(t);
      }
      t = term_k_80;
      t = get_config_0_0(t);
      if(((u_61 != NULL) && (u_61 != t)))
        _fail(t);
      else
        u_61 = t;
      t = a_62(t);
      ;
      LocalPopChoice(j_80);
    }
  else
    {
      t = i_80;
      {
        ATerm i_29 (ATerm t)
        {
          ATerm j_29 (ATerm t)
          {
            ATerm v_61 = NULL;
            ATerm b_62 (ATerm t)
            {
              t = not_null(v_61);
              if(((t_61 != NULL) && (t_61 != t)))
                _fail(t);
              else
                t_61 = t;
              t = not_null(v_61);
              return(t);
            }
            if(((v_61 != NULL) && (v_61 != t)))
              _fail(t);
            else
              v_61 = t;
            t = b_62(t);
            return(t);
          }
          t = Program_1_0(j_29, t);
          return(t);
        }
        t = option_defined_1_0(i_29, t);
      }
    }
  {
    ATerm t_29 (ATerm t)
    {
      ATerm u_29 (ATerm t)
      {
        t = not_null(t_61);
        return(t);
      }
      t = short_description_1_0(u_29, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(t_29, t);
    t = term_l_80;
    t = echo_0_0(t);
    t = term_o_80;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm v_29 (ATerm t)
      {
        ATerm w_61 = NULL;
        ATerm x_61 = NULL;
        ATerm d_62 (ATerm t)
        {
          t = not_null(x_61);
          if(((w_61 != NULL) && (w_61 != t)))
            _fail(t);
          else
            w_61 = t;
          t = not_null(x_61);
          return(t);
        }
        if(((x_61 != NULL) && (x_61 != t)))
          _fail(t);
        else
          x_61 = t;
        t = d_62(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_61)), term_p_80);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(v_29, t);
      {
        ATerm w_29 (ATerm t)
        {
          ATerm y_61 = NULL;
          ATerm z_61 = NULL;
          ATerm e_62 (ATerm t)
          {
            t = not_null(z_61);
            if(((y_61 != NULL) && (y_61 != t)))
              _fail(t);
            else
              y_61 = t;
            t = not_null(z_61);
            return(t);
          }
          ATerm x_29 (ATerm t)
          {
            t = not_null(t_61);
            return(t);
          }
          t = long_description_1_0(x_29, t);
          if(((z_61 != NULL) && (z_61 != t)))
            _fail(t);
          else
            z_61 = t;
          t = e_62(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), term_r_64);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(w_29, t);
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
  ATerm q_80 = t;
  int r_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(r_80);
    }
  else
    {
      t = q_80;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL;
  ATerm y_63 (ATerm t)
  {
    ATerm a_63 = NULL,c_63 = NULL,j_63 = NULL,l_63 = NULL;
    ATerm a_64 (ATerm t)
    {
      ATerm p_63 = NULL,w_63 = NULL;
      t = not_null(l_63);
      if(((p_63 != NULL) && (p_63 != t)))
        _fail(t);
      else
        p_63 = t;
      t = not_null(l_63);
      {
        ATerm x_63 = NULL;
        ATerm b_64 (ATerm t)
        {
          t = not_null(x_63);
          if(((w_63 != NULL) && (w_63 != t)))
            _fail(t);
          else
            w_63 = t;
          t = not_null(x_63);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_63)), not_null(j_63));
        if(((x_63 != NULL) && (x_63 != t)))
          _fail(t);
        else
          x_63 = t;
        t = b_64(t);
        t = not_null(w_63);
      }
      return(t);
    }
    t = not_null(y_62);
    if(((a_63 != NULL) && (a_63 != t)))
      _fail(t);
    else
      a_63 = t;
    t = not_null(z_62);
    if(((c_63 != NULL) && (c_63 != t)))
      _fail(t);
    else
      c_63 = t;
    t = not_null(y_62);
    {
      ATerm k_63 = NULL;
      ATerm z_63 (ATerm t)
      {
        t = not_null(k_63);
        if(((j_63 != NULL) && (j_63 != t)))
          _fail(t);
        else
          j_63 = t;
        t = not_null(k_63);
        return(t);
      }
      t = SSLgetAnnotations(not_null(a_63));
      if(((k_63 != NULL) && (k_63 != t)))
        _fail(t);
      else
        k_63 = t;
      t = z_63(t);
      t = not_null(c_63);
      t = d_71(t);
      if(((l_63 != NULL) && (l_63 != t)))
        _fail(t);
      else
        l_63 = t;
      t = a_64(t);
    }
    return(t);
  }
  if(((y_62 != NULL) && (y_62 != t)))
    _fail(t);
  else
    y_62 = t;
  t = not_null(y_62);
  if(match_cons(t, sym_Undefined_1))
    {
      z_62 = ATgetArgument(t, 0);
      t = y_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm e_64 (ATerm t)
  {
    ATerm s_80 = t;
    int t_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_87, _id, t);
        ;
        LocalPopChoice(t_80);
      }
    else
      {
        t = s_80;
        t = Cons_2_0(_id, e_64, t);
      }
    return(t);
  }
  t = e_64(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  t = fetch_1_0(f_104, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  if(((g_64 != NULL) && (g_64 != t)))
    _fail(t);
  else
    g_64 = t;
  t = not_null(g_64);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(g_64);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_64 = ATgetFirst((ATermList) t);
          i_64 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(g_64);
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
  ATerm u_80;
  u_80 = t;
  {
    ATerm l_64 = NULL;
    ATerm o_64 = NULL;
    ATerm q_64 (ATerm t)
    {
      t = not_null(o_64);
      if(((l_64 != NULL) && (l_64 != t)))
        _fail(t);
      else
        l_64 = t;
      t = not_null(o_64);
      return(t);
    }
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(w_80);
      }
    else
      {
        t = v_80;
        {
          ATerm m_64 = NULL;
          ATerm n_64 = NULL;
          ATerm p_64 (ATerm t)
          {
            t = not_null(n_64);
            if(((m_64 != NULL) && (m_64 != t)))
              _fail(t);
            else
              m_64 = t;
            t = not_null(n_64);
            return(t);
          }
          if(((n_64 != NULL) && (n_64 != t)))
            _fail(t);
          else
            n_64 = t;
          t = p_64(t);
          t = (ATerm) ATinsert(ATempty, not_null(m_64));
        }
      }
    if(((o_64 != NULL) && (o_64 != t)))
      _fail(t);
    else
      o_64 = t;
    t = q_64(t);
    t = (ATerm) ATmakeAppl(sym__2, term_i_36, not_null(l_64));
    t = printnl_0_0(t);
  }
  t = u_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_80;
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
  ATerm x_80 = t;
  int y_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(y_80);
    }
  else
    {
      t = x_80;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm v_64 = NULL;
  ATerm b_65 (ATerm t)
  {
    ATerm w_64 = NULL,x_64 = NULL,z_64 = NULL;
    t = not_null(v_64);
    if(((w_64 != NULL) && (w_64 != t)))
      _fail(t);
    else
      w_64 = t;
    t = not_null(v_64);
    {
      ATerm z_80;
      z_80 = t;
      {
        ATerm y_64 = NULL;
        ATerm c_65 (ATerm t)
        {
          t = not_null(y_64);
          if(((x_64 != NULL) && (x_64 != t)))
            _fail(t);
          else
            x_64 = t;
          t = not_null(y_64);
          return(t);
        }
        t = SSLgetAnnotations(not_null(w_64));
        if(((y_64 != NULL) && (y_64 != t)))
          _fail(t);
        else
          y_64 = t;
        t = c_65(t);
      }
      t = z_80;
      {
        ATerm a_65 = NULL;
        ATerm d_65 (ATerm t)
        {
          t = not_null(a_65);
          if(((z_64 != NULL) && (z_64 != t)))
            _fail(t);
          else
            z_64 = t;
          t = not_null(a_65);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_64));
        if(((a_65 != NULL) && (a_65 != t)))
          _fail(t);
        else
          a_65 = t;
        t = d_65(t);
        t = not_null(z_64);
      }
    }
    return(t);
  }
  if(((v_64 != NULL) && (v_64 != t)))
    _fail(t);
  else
    v_64 = t;
  t = not_null(v_64);
  if(match_cons(t, sym_Help_0))
    {
      t = b_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_81 = t;
  int b_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_29 (ATerm t)
      {
        ATerm g_65 = NULL;
        if(((g_65 != NULL) && (g_65 != t)))
          _fail(t);
        else
          g_65 = t;
        t = not_null(g_65);
        if(match_string(t, "--about"))
          {
            t = not_null(g_65);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm z_29 (ATerm t)
      {
        t = term_d_81;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm a_30 (ATerm t)
      {
        t = term_e_81;
        return(t);
      }
      t = Option_3_0(y_29, z_29, a_30, t);
      ;
      LocalPopChoice(b_81);
    }
  else
    {
      t = a_81;
      {
        ATerm b_30 (ATerm t)
        {
          ATerm h_65 = NULL;
          if(((h_65 != NULL) && (h_65 != t)))
            _fail(t);
          else
            h_65 = t;
          t = not_null(h_65);
          if(match_string(t, "--version"))
            {
              t = not_null(h_65);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_30 (ATerm t)
        {
          t = term_d_81;
          t = set_config_0_0(t);
          t = term_z_78;
          t = set_config_0_0(t);
          t = term_f_81;
          return(t);
        }
        ATerm p_30 (ATerm t)
        {
          t = term_g_81;
          return(t);
        }
        t = Option_3_0(b_30, h_30, p_30, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm k_65 = NULL,n_65 = NULL,o_65 = NULL;
  ATerm r_65 (ATerm t)
  {
    ATerm p_65 = NULL,q_65 = NULL;
    t = not_null(n_65);
    if(((p_65 != NULL) && (p_65 != t)))
      _fail(t);
    else
      p_65 = t;
    t = not_null(o_65);
    if(((q_65 != NULL) && (q_65 != t)))
      _fail(t);
    else
      q_65 = t;
    t = not_null(k_65);
    t = SSL_table_get(not_null(p_65), not_null(q_65));
    return(t);
  }
  if(((k_65 != NULL) && (k_65 != t)))
    _fail(t);
  else
    k_65 = t;
  t = not_null(k_65);
  if(match_cons(t, sym__2))
    {
      n_65 = ATgetArgument(t, 0);
      o_65 = ATgetArgument(t, 1);
      t = r_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  ATerm e_66 (ATerm t)
  {
    ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
    t = not_null(w_65);
    if(((a_66 != NULL) && (a_66 != t)))
      _fail(t);
    else
      a_66 = t;
    t = not_null(x_65);
    if(((b_66 != NULL) && (b_66 != t)))
      _fail(t);
    else
      b_66 = t;
    t = not_null(y_65);
    if(((z_65 != NULL) && (z_65 != t)))
      _fail(t);
    else
      z_65 = t;
    t = not_null(v_65);
    {
      ATerm h_81;
      h_81 = t;
      {
        ATerm c_66 = NULL;
        ATerm d_66 = NULL;
        ATerm f_66 (ATerm t)
        {
          t = not_null(d_66);
          if(((c_66 != NULL) && (c_66 != t)))
            _fail(t);
          else
            c_66 = t;
          t = not_null(d_66);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_66), not_null(b_66));
        {
          ATerm i_81 = t;
          int j_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(j_81);
            }
          else
            {
              t = i_81;
              t = (ATerm) ATempty;
            }
          if(((d_66 != NULL) && (d_66 != t)))
            _fail(t);
          else
            d_66 = t;
          t = f_66(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_66), not_null(b_66), (ATerm) ATinsert(CheckATermList(not_null(c_66)), not_null(z_65)));
        t = table_put_0_0(t);
      }
      t = h_81;
    }
    return(t);
  }
  if(((v_65 != NULL) && (v_65 != t)))
    _fail(t);
  else
    v_65 = t;
  t = not_null(v_65);
  if(match_cons(t, sym__3))
    {
      w_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
      y_65 = ATgetArgument(t, 2);
      t = e_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm h_66 = NULL;
  ATerm i_66 = NULL;
  ATerm j_66 (ATerm t)
  {
    t = not_null(i_66);
    if(((h_66 != NULL) && (h_66 != t)))
      _fail(t);
    else
      h_66 = t;
    t = not_null(i_66);
    return(t);
  }
  t = term_q_45;
  t = k_105(t);
  if(((i_66 != NULL) && (i_66 != t)))
    _fail(t);
  else
    i_66 = t;
  t = j_66(t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_80, term_n_80, not_null(h_66));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  ATerm v_66 (ATerm t)
  {
    t = not_null(o_66);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm w_66 (ATerm t)
  {
    ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
    t = not_null(p_66);
    if(((r_66 != NULL) && (r_66 != t)))
      _fail(t);
    else
      r_66 = t;
    t = not_null(q_66);
    if(((s_66 != NULL) && (s_66 != t)))
      _fail(t);
    else
      s_66 = t;
    t = not_null(o_66);
    {
      ATerm k_81;
      k_81 = t;
      t = not_null(r_66);
      t = a_0(t);
      t = k_81;
      {
        ATerm u_66 = NULL;
        ATerm x_66 (ATerm t)
        {
          t = not_null(u_66);
          if(((t_66 != NULL) && (t_66 != t)))
            _fail(t);
          else
            t_66 = t;
          t = not_null(u_66);
          return(t);
        }
        t = term_q_45;
        t = c_0(t);
        if(((u_66 != NULL) && (u_66 != t)))
          _fail(t);
        else
          u_66 = t;
        t = x_66(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(s_66)), not_null(t_66));
      }
    }
    return(t);
  }
  if(((o_66 != NULL) && (o_66 != t)))
    _fail(t);
  else
    o_66 = t;
  t = not_null(o_66);
  if(match_string(t, "register-usage-info"))
    {
      t = v_66(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_66 = ATgetFirst((ATermList) t);
          q_66 = (ATerm) ATgetNext((ATermList) t);
          t = w_66(t);
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
  ATerm q_30 (ATerm t)
  {
    ATerm z_66 = NULL;
    if(((z_66 != NULL) && (z_66 != t)))
      _fail(t);
    else
      z_66 = t;
    t = not_null(z_66);
    if(match_string(t, "--help"))
      {
        t = not_null(z_66);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(z_66);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(z_66);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_30 (ATerm t)
  {
    t = term_p_78;
    t = set_config_0_0(t);
    t = term_l_81;
    return(t);
  }
  ATerm s_30 (ATerm t)
  {
    t = term_m_81;
    return(t);
  }
  t = Option_3_0(q_30, r_30, s_30, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  ATerm h_67 (ATerm t)
  {
    ATerm f_67 = NULL,g_67 = NULL;
    t = not_null(d_67);
    if(((f_67 != NULL) && (f_67 != t)))
      _fail(t);
    else
      f_67 = t;
    t = not_null(e_67);
    if(((g_67 != NULL) && (g_67 != t)))
      _fail(t);
    else
      g_67 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(g_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_67)));
    return(t);
  }
  if(((c_67 != NULL) && (c_67 != t)))
    _fail(t);
  else
    c_67 = t;
  t = not_null(c_67);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_67 = ATgetFirst((ATermList) t);
      e_67 = (ATerm) ATgetNext((ATermList) t);
      t = h_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm n_81;
  n_81 = t;
  {
    ATerm t_30 (ATerm t)
    {
      t = term_o_81;
      t = i_105(t);
      return(t);
    }
    t = try_1_0(t_30, t);
  }
  t = n_81;
  {
    ATerm x_30 (ATerm t)
    {
      ATerm m_67 = NULL;
      ATerm p_81;
      p_81 = t;
      {
        ATerm k_67 = NULL;
        ATerm l_67 = NULL;
        ATerm o_67 (ATerm t)
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
        t = o_67(t);
        t = (ATerm) ATmakeAppl(sym__2, term_k_80, not_null(k_67));
        t = set_config_0_0(t);
      }
      t = p_81;
      {
        ATerm n_67 = NULL;
        ATerm p_67 (ATerm t)
        {
          t = not_null(n_67);
          if(((m_67 != NULL) && (m_67 != t)))
            _fail(t);
          else
            m_67 = t;
          t = not_null(n_67);
          return(t);
        }
        if(((n_67 != NULL) && (n_67 != t)))
          _fail(t);
        else
          n_67 = t;
        t = p_67(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_67));
      }
      return(t);
    }
    ATerm y_30 (ATerm t)
    {
      ATerm q_81 = t;
      int r_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_81 = t;
          int t_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(t_81);
            }
          else
            {
              t = s_81;
              t = i_105(t);
              t = Cons_2_0(_id, y_30, t);
            }
          ;
          LocalPopChoice(r_81);
        }
      else
        {
          t = q_81;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(x_30, y_30, t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm s_67 = NULL;
  ATerm u_81;
  u_81 = t;
  t = term_v_81;
  t = table_put_0_0(t);
  t = u_81;
  {
    ATerm f_31 (ATerm t)
    {
      ATerm w_81 = t;
      int x_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          ;
          LocalPopChoice(x_81);
        }
      else
        {
          t = w_81;
          {
            ATerm y_81 = t;
            int z_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(z_81);
              }
            else
              {
                t = y_81;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_31, t);
    {
      ATerm g_31 (ATerm t)
      {
        ATerm a_82 = t;
        int b_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_82;
            c_82 = t;
            {
              ATerm d_82 = t;
              int e_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_78;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(e_82);
                }
              else
                {
                  t = d_82;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = c_82;
            t = system_usage_0_0(t);
            t = term_q_33;
            t = exit_0_0(t);
            ;
            LocalPopChoice(b_82);
          }
        else
          {
            t = a_82;
            {
              ATerm f_82 = t;
              int g_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_82;
                  h_82 = t;
                  t = term_c_81;
                  t = get_config_0_0(t);
                  t = h_82;
                  t = system_about_0_0(t);
                  t = term_q_33;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(g_82);
                }
              else
                {
                  t = f_82;
                  {
                    ATerm n_31 (ATerm t)
                    {
                      ATerm r_31 (ATerm t)
                      {
                        ATerm t_67 = NULL;
                        ATerm u_67 (ATerm t)
                        {
                          t = not_null(t_67);
                          if(((s_67 != NULL) && (s_67 != t)))
                            _fail(t);
                          else
                            s_67 = t;
                          t = not_null(t_67);
                          return(t);
                        }
                        if(((t_67 != NULL) && (t_67 != t)))
                          _fail(t);
                        else
                          t_67 = t;
                        t = u_67(t);
                        return(t);
                      }
                      t = Undefined_1_0(r_31, t);
                      return(t);
                    }
                    t = option_defined_1_0(n_31, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_67)), term_i_82));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_a_48;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(g_31, t);
      {
        ATerm j_82;
        j_82 = t;
        t = term_m_80;
        t = table_destroy_0_0(t);
        t = j_82;
      }
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  ATerm k_82;
  k_82 = t;
  {
    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
    ATerm e_68 (ATerm t)
    {
      t = not_null(b_68);
      if(((x_67 != NULL) && (x_67 != t)))
        _fail(t);
      else
        x_67 = t;
      t = not_null(c_68);
      if(((y_67 != NULL) && (y_67 != t)))
        _fail(t);
      else
        y_67 = t;
      t = not_null(d_68);
      if(((z_67 != NULL) && (z_67 != t)))
        _fail(t);
      else
        z_67 = t;
      t = not_null(a_68);
      t = SSL_table_put(not_null(x_67), not_null(y_67), not_null(z_67));
      return(t);
    }
    if(((a_68 != NULL) && (a_68 != t)))
      _fail(t);
    else
      a_68 = t;
    t = not_null(a_68);
    if(match_cons(t, sym__3))
      {
        b_68 = ATgetArgument(t, 0);
        c_68 = ATgetArgument(t, 1);
        d_68 = ATgetArgument(t, 2);
        t = e_68(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = k_82;
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  ATerm m_68 (ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__3, term_o_63, not_null(k_68), not_null(l_68));
    t = table_put_0_0(t);
    return(t);
  }
  if(((h_68 != NULL) && (h_68 != t)))
    _fail(t);
  else
    h_68 = t;
  t = not_null(h_68);
  if(match_cons(t, sym__2))
    {
      i_68 = ATgetArgument(t, 0);
      j_68 = ATgetArgument(t, 1);
      t = m_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_82 = t;
  int m_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(m_82);
    }
  else
    {
      t = l_82;
      {
        ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
        ATerm v_68 (ATerm t)
        {
          ATerm s_68 = NULL,t_68 = NULL;
          t = not_null(q_68);
          if(((s_68 != NULL) && (s_68 != t)))
            _fail(t);
          else
            s_68 = t;
          t = not_null(r_68);
          if(((t_68 != NULL) && (t_68 != t)))
            _fail(t);
          else
            t_68 = t;
          t = not_null(s_68);
          {
            ATerm v_31 (ATerm t)
            {
              t = not_null(t_68);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(v_31, t);
          }
          return(t);
        }
        if(((p_68 != NULL) && (p_68 != t)))
          _fail(t);
        else
          p_68 = t;
        t = not_null(p_68);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_68 = ATgetFirst((ATermList) t);
            r_68 = (ATerm) ATgetNext((ATermList) t);
            t = v_68(t);
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
  ATerm b_69 = NULL;
  ATerm j_69 (ATerm t)
  {
    ATerm c_69 = NULL,d_69 = NULL;
    t = not_null(b_69);
    if(((c_69 != NULL) && (c_69 != t)))
      _fail(t);
    else
      c_69 = t;
    t = not_null(b_69);
    {
      ATerm e_69 = NULL;
      ATerm k_69 (ATerm t)
      {
        ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL;
        ATerm l_69 (ATerm t)
        {
          t = not_null(i_69);
          if(((d_69 != NULL) && (d_69 != t)))
            _fail(t);
          else
            d_69 = t;
          t = not_null(g_69);
          return(t);
        }
        t = not_null(e_69);
        if(((f_69 != NULL) && (f_69 != t)))
          _fail(t);
        else
          f_69 = t;
        t = not_null(e_69);
        t = SSL_explode_term(not_null(f_69));
        if(((g_69 != NULL) && (g_69 != t)))
          _fail(t);
        else
          g_69 = t;
        t = not_null(g_69);
        if(match_cons(t, sym__2))
          {
            h_69 = ATgetArgument(t, 0);
            i_69 = ATgetArgument(t, 1);
            t = not_null(h_69);
            if(match_string(t, ""))
              {
                t = l_69(t);
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
      t = not_null(c_69);
      if(((e_69 != NULL) && (e_69 != t)))
        _fail(t);
      else
        e_69 = t;
      t = k_69(t);
      t = not_null(d_69);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((b_69 != NULL) && (b_69 != t)))
    _fail(t);
  else
    b_69 = t;
  t = j_69(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm q_69 = NULL;
  ATerm w_69 (ATerm t)
  {
    ATerm r_69 = NULL,s_69 = NULL,u_69 = NULL;
    t = not_null(q_69);
    if(((r_69 != NULL) && (r_69 != t)))
      _fail(t);
    else
      r_69 = t;
    t = not_null(q_69);
    {
      ATerm n_82;
      n_82 = t;
      {
        ATerm t_69 = NULL;
        ATerm x_69 (ATerm t)
        {
          t = not_null(t_69);
          if(((s_69 != NULL) && (s_69 != t)))
            _fail(t);
          else
            s_69 = t;
          t = not_null(t_69);
          return(t);
        }
        t = SSLgetAnnotations(not_null(r_69));
        if(((t_69 != NULL) && (t_69 != t)))
          _fail(t);
        else
          t_69 = t;
        t = x_69(t);
      }
      t = n_82;
      {
        ATerm v_69 = NULL;
        ATerm y_69 (ATerm t)
        {
          t = not_null(v_69);
          if(((u_69 != NULL) && (u_69 != t)))
            _fail(t);
          else
            u_69 = t;
          t = not_null(v_69);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(s_69));
        if(((v_69 != NULL) && (v_69 != t)))
          _fail(t);
        else
          v_69 = t;
        t = y_69(t);
        t = not_null(u_69);
      }
    }
    return(t);
  }
  if(((q_69 != NULL) && (q_69 != t)))
    _fail(t);
  else
    q_69 = t;
  t = not_null(q_69);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm z_69 (ATerm t)
  {
    ATerm o_82 = t;
    int p_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_69, t);
        ;
        LocalPopChoice(p_82);
      }
    else
      {
        t = o_82;
        t = Nil_0_0(t);
        t = j_87(t);
      }
    return(t);
  }
  t = z_69(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  ATerm h_70 (ATerm t)
  {
    ATerm f_70 = NULL,g_70 = NULL;
    t = not_null(d_70);
    if(((g_70 != NULL) && (g_70 != t)))
      _fail(t);
    else
      g_70 = t;
    t = not_null(e_70);
    if(((f_70 != NULL) && (f_70 != t)))
      _fail(t);
    else
      f_70 = t;
    t = not_null(g_70);
    {
      ATerm z_31 (ATerm t)
      {
        t = not_null(f_70);
        return(t);
      }
      t = at_end_1_0(z_31, t);
    }
    return(t);
  }
  if(((c_70 != NULL) && (c_70 != t)))
    _fail(t);
  else
    c_70 = t;
  t = not_null(c_70);
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
      t = h_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_82 = t;
  int r_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(r_82);
    }
  else
    {
      t = q_82;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  ATerm e_71 (ATerm t)
  {
    ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,w_70 = NULL;
    ATerm h_71 (ATerm t)
    {
      ATerm x_70 = NULL,y_70 = NULL;
      ATerm i_71 (ATerm t)
      {
        ATerm z_70 = NULL,a_71 = NULL;
        t = not_null(y_70);
        if(((z_70 != NULL) && (z_70 != t)))
          _fail(t);
        else
          z_70 = t;
        t = not_null(y_70);
        {
          ATerm b_71 = NULL;
          ATerm j_71 (ATerm t)
          {
            t = not_null(b_71);
            if(((a_71 != NULL) && (a_71 != t)))
              _fail(t);
            else
              a_71 = t;
            t = not_null(b_71);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_70), not_null(z_70)), not_null(u_70));
          if(((b_71 != NULL) && (b_71 != t)))
            _fail(t);
          else
            b_71 = t;
          t = j_71(t);
          t = not_null(a_71);
        }
        return(t);
      }
      t = not_null(w_70);
      if(((x_70 != NULL) && (x_70 != t)))
        _fail(t);
      else
        x_70 = t;
      t = not_null(t_70);
      t = d_64(t);
      if(((y_70 != NULL) && (y_70 != t)))
        _fail(t);
      else
        y_70 = t;
      t = i_71(t);
      return(t);
    }
    t = not_null(o_70);
    if(((r_70 != NULL) && (r_70 != t)))
      _fail(t);
    else
      r_70 = t;
    t = not_null(p_70);
    if(((s_70 != NULL) && (s_70 != t)))
      _fail(t);
    else
      s_70 = t;
    t = not_null(q_70);
    if(((t_70 != NULL) && (t_70 != t)))
      _fail(t);
    else
      t_70 = t;
    t = not_null(o_70);
    {
      ATerm v_70 = NULL;
      ATerm f_71 (ATerm t)
      {
        t = not_null(v_70);
        if(((u_70 != NULL) && (u_70 != t)))
          _fail(t);
        else
          u_70 = t;
        t = not_null(v_70);
        return(t);
      }
      t = SSLgetAnnotations(not_null(r_70));
      if(((v_70 != NULL) && (v_70 != t)))
        _fail(t);
      else
        v_70 = t;
      t = f_71(t);
      t = not_null(s_70);
      t = c_64(t);
      if(((w_70 != NULL) && (w_70 != t)))
        _fail(t);
      else
        w_70 = t;
      t = h_71(t);
    }
    return(t);
  }
  if(((o_70 != NULL) && (o_70 != t)))
    _fail(t);
  else
    o_70 = t;
  t = not_null(o_70);
  if(match_cons(t, sym__2))
    {
      p_70 = ATgetArgument(t, 0);
      q_70 = ATgetArgument(t, 1);
      t = e_71(t);
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
  ATerm l_71 = NULL;
  ATerm n_71 (ATerm t)
  {
    ATerm m_71 = NULL;
    t = not_null(l_71);
    if(((m_71 != NULL) && (m_71 != t)))
      _fail(t);
    else
      m_71 = t;
    t = not_null(l_71);
    t = SSL_implode_string(not_null(m_71));
    return(t);
  }
  if(((l_71 != NULL) && (l_71 != t)))
    _fail(t);
  else
    l_71 = t;
  t = n_71(t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  ATerm i_72 (ATerm t)
  {
    ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,c_72 = NULL;
    ATerm k_72 (ATerm t)
    {
      ATerm d_72 = NULL,e_72 = NULL;
      ATerm l_72 (ATerm t)
      {
        ATerm f_72 = NULL,g_72 = NULL;
        t = not_null(e_72);
        if(((f_72 != NULL) && (f_72 != t)))
          _fail(t);
        else
          f_72 = t;
        t = not_null(e_72);
        {
          ATerm h_72 = NULL;
          ATerm m_72 (ATerm t)
          {
            t = not_null(h_72);
            if(((g_72 != NULL) && (g_72 != t)))
              _fail(t);
            else
              g_72 = t;
            t = not_null(h_72);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_72)), not_null(d_72)), not_null(a_72));
          if(((h_72 != NULL) && (h_72 != t)))
            _fail(t);
          else
            h_72 = t;
          t = m_72(t);
          t = not_null(g_72);
        }
        return(t);
      }
      t = not_null(c_72);
      if(((d_72 != NULL) && (d_72 != t)))
        _fail(t);
      else
        d_72 = t;
      t = not_null(z_71);
      t = m_65(t);
      if(((e_72 != NULL) && (e_72 != t)))
        _fail(t);
      else
        e_72 = t;
      t = l_72(t);
      return(t);
    }
    t = not_null(u_71);
    if(((x_71 != NULL) && (x_71 != t)))
      _fail(t);
    else
      x_71 = t;
    t = not_null(v_71);
    if(((y_71 != NULL) && (y_71 != t)))
      _fail(t);
    else
      y_71 = t;
    t = not_null(w_71);
    if(((z_71 != NULL) && (z_71 != t)))
      _fail(t);
    else
      z_71 = t;
    t = not_null(u_71);
    {
      ATerm b_72 = NULL;
      ATerm j_72 (ATerm t)
      {
        t = not_null(b_72);
        if(((a_72 != NULL) && (a_72 != t)))
          _fail(t);
        else
          a_72 = t;
        t = not_null(b_72);
        return(t);
      }
      t = SSLgetAnnotations(not_null(x_71));
      if(((b_72 != NULL) && (b_72 != t)))
        _fail(t);
      else
        b_72 = t;
      t = j_72(t);
      t = not_null(y_71);
      t = l_65(t);
      if(((c_72 != NULL) && (c_72 != t)))
        _fail(t);
      else
        c_72 = t;
      t = k_72(t);
    }
    return(t);
  }
  if(((u_71 != NULL) && (u_71 != t)))
    _fail(t);
  else
    u_71 = t;
  t = not_null(u_71);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_71 = ATgetFirst((ATermList) t);
      w_71 = (ATerm) ATgetNext((ATermList) t);
      t = i_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm o_72 = NULL;
  ATerm q_72 (ATerm t)
  {
    ATerm p_72 = NULL;
    t = not_null(o_72);
    if(((p_72 != NULL) && (p_72 != t)))
      _fail(t);
    else
      p_72 = t;
    t = not_null(o_72);
    t = SSL_explode_string(not_null(p_72));
    return(t);
  }
  if(((o_72 != NULL) && (o_72 != t)))
    _fail(t);
  else
    o_72 = t;
  t = q_72(t);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm s_82 = t;
    int t_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_72 (ATerm t)
        {
          ATerm u_82 = t;
          int v_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, t_72, t);
              ;
              LocalPopChoice(v_82);
            }
          else
            {
              t = u_82;
              {
                ATerm a_32 (ATerm t)
                {
                  ATerm s_72 = NULL;
                  if(((s_72 != NULL) && (s_72 != t)))
                    _fail(t);
                  else
                    s_72 = t;
                  t = not_null(s_72);
                  if(match_int(t, 47))
                    {
                      t = not_null(s_72);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm l_32 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(a_32, l_32, t);
              }
            }
          return(t);
        }
        t = t_72(t);
        ;
        LocalPopChoice(t_82);
      }
    else
      {
        t = s_82;
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
  ATerm w_82;
  w_82 = t;
  {
    ATerm h_73 = NULL,j_73 = NULL,l_73 = NULL,n_73 = NULL,r_73 = NULL,v_73 = NULL,z_73 = NULL,d_74 = NULL;
    t = term_y_82;
    t = set_config_0_0(t);
    t = term_z_82;
    t = set_config_0_0(t);
    t = term_a_83;
    t = set_config_0_0(t);
    {
      ATerm b_83;
      b_83 = t;
      {
        ATerm i_73 = NULL;
        ATerm h_74 (ATerm t)
        {
          t = not_null(i_73);
          if(((h_73 != NULL) && (h_73 != t)))
            _fail(t);
          else
            h_73 = t;
          t = not_null(i_73);
          return(t);
        }
        t = term_c_83;
        t = xtc_find_path_0_0(t);
        if(((i_73 != NULL) && (i_73 != t)))
          _fail(t);
        else
          i_73 = t;
        t = h_74(t);
      }
      t = b_83;
      {
        ATerm d_83;
        d_83 = t;
        {
          ATerm k_73 = NULL;
          ATerm i_74 (ATerm t)
          {
            t = not_null(k_73);
            if(((j_73 != NULL) && (j_73 != t)))
              _fail(t);
            else
              j_73 = t;
            t = not_null(k_73);
            return(t);
          }
          t = term_e_83;
          t = xtc_find_path_0_0(t);
          if(((k_73 != NULL) && (k_73 != t)))
            _fail(t);
          else
            k_73 = t;
          t = i_74(t);
        }
        t = d_83;
        {
          ATerm m_73 = NULL;
          ATerm j_74 (ATerm t)
          {
            t = not_null(m_73);
            if(((l_73 != NULL) && (l_73 != t)))
              _fail(t);
            else
              l_73 = t;
            t = not_null(m_73);
            return(t);
          }
          t = term_f_83;
          t = xtc_find_path_0_0(t);
          if(((m_73 != NULL) && (m_73 != t)))
            _fail(t);
          else
            m_73 = t;
          t = j_74(t);
          t = (ATerm) ATmakeAppl(sym__2, term_z_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_73)), term_z_59), not_null(j_73)), term_z_59), not_null(h_73)), term_z_59));
          t = set_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATinsert(ATempty, term_h_83), term_g_83));
          t = set_config_0_0(t);
          {
            ATerm i_83;
            i_83 = t;
            {
              ATerm o_73 = NULL,q_73 = NULL;
              ATerm l_74 (ATerm t)
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
              ATerm k_74 (ATerm t)
              {
                t = not_null(p_73);
                if(((o_73 != NULL) && (o_73 != t)))
                  _fail(t);
                else
                  o_73 = t;
                t = not_null(p_73);
                return(t);
              }
              t = term_j_83;
              t = xtc_find_path_0_0(t);
              if(((p_73 != NULL) && (p_73 != t)))
                _fail(t);
              else
                p_73 = t;
              t = k_74(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), term_k_83);
              t = conc_strings_0_0(t);
              if(((q_73 != NULL) && (q_73 != t)))
                _fail(t);
              else
                q_73 = t;
              t = l_74(t);
            }
            t = i_83;
            {
              ATerm l_83;
              l_83 = t;
              {
                ATerm s_73 = NULL,u_73 = NULL;
                ATerm n_74 (ATerm t)
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
                ATerm m_74 (ATerm t)
                {
                  t = not_null(t_73);
                  if(((s_73 != NULL) && (s_73 != t)))
                    _fail(t);
                  else
                    s_73 = t;
                  t = not_null(t_73);
                  return(t);
                }
                t = term_j_83;
                t = xtc_find_path_0_0(t);
                if(((t_73 != NULL) && (t_73 != t)))
                  _fail(t);
                else
                  t_73 = t;
                t = m_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), term_k_83);
                t = conc_strings_0_0(t);
                if(((u_73 != NULL) && (u_73 != t)))
                  _fail(t);
                else
                  u_73 = t;
                t = n_74(t);
              }
              t = l_83;
              {
                ATerm w_73 = NULL,y_73 = NULL;
                ATerm p_74 (ATerm t)
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
                ATerm o_74 (ATerm t)
                {
                  t = not_null(x_73);
                  if(((w_73 != NULL) && (w_73 != t)))
                    _fail(t);
                  else
                    w_73 = t;
                  t = not_null(x_73);
                  return(t);
                }
                t = term_m_83;
                t = xtc_find_path_0_0(t);
                if(((x_73 != NULL) && (x_73 != t)))
                  _fail(t);
                else
                  x_73 = t;
                t = o_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_k_83);
                t = conc_strings_0_0(t);
                if(((y_73 != NULL) && (y_73 != t)))
                  _fail(t);
                else
                  y_73 = t;
                t = p_74(t);
                t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_73)), term_z_59), not_null(r_73)), term_z_59), not_null(n_73)), term_z_59));
                t = set_config_0_0(t);
                {
                  ATerm n_83;
                  n_83 = t;
                  {
                    ATerm a_74 = NULL,c_74 = NULL;
                    ATerm r_74 (ATerm t)
                    {
                      t = not_null(c_74);
                      if(((z_73 != NULL) && (z_73 != t)))
                        _fail(t);
                      else
                        z_73 = t;
                      t = not_null(c_74);
                      return(t);
                    }
                    ATerm b_74 = NULL;
                    ATerm q_74 (ATerm t)
                    {
                      t = not_null(b_74);
                      if(((a_74 != NULL) && (a_74 != t)))
                        _fail(t);
                      else
                        a_74 = t;
                      t = not_null(b_74);
                      return(t);
                    }
                    t = term_j_83;
                    t = xtc_find_path_0_0(t);
                    if(((b_74 != NULL) && (b_74 != t)))
                      _fail(t);
                    else
                      b_74 = t;
                    t = q_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), term_o_83);
                    t = conc_strings_0_0(t);
                    if(((c_74 != NULL) && (c_74 != t)))
                      _fail(t);
                    else
                      c_74 = t;
                    t = r_74(t);
                  }
                  t = n_83;
                  {
                    ATerm e_74 = NULL,g_74 = NULL;
                    ATerm t_74 (ATerm t)
                    {
                      t = not_null(g_74);
                      if(((d_74 != NULL) && (d_74 != t)))
                        _fail(t);
                      else
                        d_74 = t;
                      t = not_null(g_74);
                      return(t);
                    }
                    ATerm f_74 = NULL;
                    ATerm s_74 (ATerm t)
                    {
                      t = not_null(f_74);
                      if(((e_74 != NULL) && (e_74 != t)))
                        _fail(t);
                      else
                        e_74 = t;
                      t = not_null(f_74);
                      return(t);
                    }
                    t = term_m_83;
                    t = xtc_find_path_0_0(t);
                    if(((f_74 != NULL) && (f_74 != t)))
                      _fail(t);
                    else
                      f_74 = t;
                    t = s_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_74), term_o_83);
                    t = conc_strings_0_0(t);
                    if(((g_74 != NULL) && (g_74 != t)))
                      _fail(t);
                    else
                      g_74 = t;
                    t = t_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_u_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_83), term_s_83), not_null(d_74)), term_p_83), term_r_83), term_q_83), not_null(z_73)), term_p_83));
                    t = set_config_0_0(t);
                    t = term_u_83;
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
  t = w_82;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm m_32 (ATerm t)
    {
      ATerm v_74 = NULL;
      t = term_t_78;
      t = get_config_0_0(t);
      {
        ATerm w_74 = NULL;
        ATerm x_74 (ATerm t)
        {
          t = not_null(w_74);
          if(((v_74 != NULL) && (v_74 != t)))
            _fail(t);
          else
            v_74 = t;
          t = not_null(w_74);
          return(t);
        }
        t = term_v_83;
        t = xtc_find_0_0(t);
        if(((w_74 != NULL) && (w_74 != t)))
          _fail(t);
        else
          w_74 = t;
        t = x_74(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_74), term_i_36);
        t = copy_file_0_0(t);
        t = term_q_33;
        t = exit_0_0(t);
      }
      return(t);
    }
    t = try_1_0(m_32, t);
    {
      ATerm t_32 (ATerm t)
      {
        t = term_y_78;
        t = get_config_0_0(t);
        t = sc_version_0_0(t);
        t = term_q_33;
        t = exit_0_0(t);
        return(t);
      }
      t = try_1_0(t_32, t);
      {
        ATerm w_83 = t;
        int x_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_83;
            y_83 = t;
            t = term_k_58;
            t = get_config_0_0(t);
            t = y_83;
            ;
            LocalPopChoice(x_83);
          }
        else
          {
            t = w_83;
            t = (ATerm) ATinsert(ATempty, term_z_83);
            t = fatal_error_0_0(t);
          }
        t = sc_announce_0_0(t);
        {
          ATerm u_32 (ATerm t)
          {
            ATerm a_84;
            a_84 = t;
            t = term_k_58;
            t = get_config_0_0(t);
            {
              ATerm f_33 (ATerm t)
              {
                t = term_b_84;
                return(t);
              }
              t = debug_1_0(f_33, t);
            }
            t = a_84;
            return(t);
          }
          t = if_verbose1_1_0(u_32, t);
        }
      }
    }
  }
  return(t);
}
ATerm sc_0_0 (ATerm t)
{
  ATerm c_84 = t;
  int d_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm g_33 (ATerm t)
        {
          ATerm n_33 (ATerm t)
          {
            ATerm b_75 = NULL;
            ATerm c_75 = NULL;
            ATerm h_75 (ATerm t)
            {
              t = not_null(c_75);
              if(((b_75 != NULL) && (b_75 != t)))
                _fail(t);
              else
                b_75 = t;
              t = not_null(c_75);
              return(t);
            }
            if(((c_75 != NULL) && (c_75 != t)))
              _fail(t);
            else
              c_75 = t;
            t = h_75(t);
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(CheckATermList(not_null(b_75)), term_e_84));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose1_1_0(n_33, t);
          return(t);
        }
        t = profile_p__2_0(g_33, compile_0_0, t);
        {
          ATerm o_33 (ATerm t)
          {
            ATerm d_75 = NULL;
            ATerm e_75 = NULL;
            ATerm i_75 (ATerm t)
            {
              t = not_null(e_75);
              if(((d_75 != NULL) && (d_75 != t)))
                _fail(t);
              else
                d_75 = t;
              t = not_null(e_75);
              return(t);
            }
            t = run_time_0_0(t);
            if(((e_75 != NULL) && (e_75 != t)))
              _fail(t);
            else
              e_75 = t;
            t = i_75(t);
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_84), not_null(d_75)), term_f_84));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose2_1_0(o_33, t);
          t = term_q_33;
          t = exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(d_84);
    }
  else
    {
      t = c_84;
      {
        ATerm f_75 = NULL;
        ATerm g_75 = NULL;
        ATerm j_75 (ATerm t)
        {
          t = not_null(g_75);
          if(((f_75 != NULL) && (f_75 != t)))
            _fail(t);
          else
            f_75 = t;
          t = not_null(g_75);
          return(t);
        }
        t = run_time_0_0(t);
        if(((g_75 != NULL) && (g_75 != t)))
          _fail(t);
        else
          g_75 = t;
        t = j_75(t);
        t = (ATerm) ATmakeAppl(sym__2, term_g_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_84), not_null(f_75)), term_h_84));
        t = printnl_0_0(t);
        t = term_a_48;
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
