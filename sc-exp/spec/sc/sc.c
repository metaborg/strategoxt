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
ATerm term_b_84;
ATerm term_a_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_v_83;
ATerm term_t_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_m_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_g_83;
ATerm term_e_83;
ATerm term_d_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_w_82;
ATerm term_u_82;
ATerm term_t_82;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_c_82;
ATerm term_p_81;
ATerm term_i_81;
ATerm term_g_81;
ATerm term_f_81;
ATerm term_a_81;
ATerm term_z_80;
ATerm term_y_80;
ATerm term_x_80;
ATerm term_w_80;
ATerm term_j_80;
ATerm term_i_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_d_80;
ATerm term_a_80;
ATerm term_z_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_p_78;
ATerm term_o_78;
ATerm term_n_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_b_78;
ATerm term_y_77;
ATerm term_x_77;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_s_77;
ATerm term_p_77;
ATerm term_o_77;
ATerm term_l_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_e_77;
ATerm term_d_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_o_76;
ATerm term_l_76;
ATerm term_i_76;
ATerm term_f_76;
ATerm term_c_76;
ATerm term_z_75;
ATerm term_w_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_g_75;
ATerm term_u_74;
ATerm term_q_74;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_v_72;
ATerm term_s_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_n_72;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_m_71;
ATerm term_h_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_u_68;
ATerm term_i_66;
ATerm term_h_66;
ATerm term_f_65;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_g_64;
ATerm term_f_64;
ATerm term_z_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_m_63;
ATerm term_h_63;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_f_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_i_58;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_l_57;
ATerm term_h_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
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
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
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
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_l_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_v_49;
ATerm term_r_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_f_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_q_48;
ATerm term_n_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_g_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_i_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_b_44;
ATerm term_z_43;
ATerm term_v_43;
ATerm term_i_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_w_42;
ATerm term_u_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_d_41;
ATerm term_x_40;
ATerm term_p_40;
ATerm term_k_40;
ATerm term_g_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_m_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_h_37;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_l_33;
void init_constant_terms (void)
{
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_b_46);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_48, term_u_47, term_x_48);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_49, term_o_33, term_j_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_z_44, term_v_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_c_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_50, term_r_50, term_s_50);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_51, term_g_51, term_h_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_51, term_n_51, term_o_51);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_51, term_t_51, term_a_52);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_52, term_j_52, term_k_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_r_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_u_52, term_v_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_52, term_y_52, term_z_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_f_53, term_g_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_53, term_t_53, term_u_53);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_53, term_x_53, term_y_53);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_54, term_b_54, term_c_54);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_54, term_f_54, term_g_54);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_54, term_j_54, term_k_54);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_54, term_n_54, term_o_54);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_54, term_r_54, term_s_54);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_54, term_v_54, term_w_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_54, term_z_54, term_a_55);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_55, term_d_55, term_e_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_55, term_h_55, term_i_55);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_55, term_l_55, term_m_55);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_55, term_p_55, term_q_55);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_56, term_c_56, term_d_56);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(sym__2, term_f_65, term_h_66);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(sym__2, term_f_65, term_n_72);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_a_45);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym__2, term_a_47, term_a_45);
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(sym__2, term_b_44, term_a_45);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(sym__2, term_x_40, term_a_45);
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_a_45);
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(sym__2, term_u_42, term_a_45);
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(sym__2, term_s_77, term_a_45);
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_x_77));
  term_x_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_l_33);
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(sym__2, term_i_78, term_a_45);
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(sym__2, term_n_78, term_a_45);
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(sym__2, term_s_78, term_a_45);
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(sym__2, term_g_80, term_h_80);
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_80));
  term_x_80 = (ATerm) ATmakeAppl(sym__2, term_w_80, term_a_45);
  ATprotect(&(term_y_80));
  term_y_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(sym__3, term_g_80, term_h_80, (ATerm) ATempty);
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(sym__2, term_t_63, term_r_82);
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_u_47);
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(sym__2, term_s_44, term_l_33);
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(sym__2, term_i_43, (ATerm) ATempty);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
      ATerm d_24;
      d_24 = t;
      t = SSL_printnl(not_null(v_1), not_null(w_1));
      t = d_24;
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
  ATerm v_26 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = u_92(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = v_26;
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
      t = term_l_33;
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
    ATerm m_33;
    m_33 = t;
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
      t = term_n_33;
      t = get_config_0_0(t);
      if(((v_3 != NULL) && (v_3 != t)))
        _fail(t);
      else
        v_3 = t;
      t = w_3(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_o_33);
      t = geq_0_0(t);
    }
    t = m_33;
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
          t = term_p_33;
          t = get_config_0_0(t);
          if(((h_4 != NULL) && (h_4 != t)))
            _fail(t);
          else
            h_4 = t;
          t = k_4(t);
          t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_x_34), not_null(d_4)));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = term_y_34;
          return(t);
        }
        t = say_1_0(t_0, t);
        return(t);
      }
      t = if_verbose2_1_0(s_0, t);
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_34;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            {
              ATerm v_0 (ATerm t)
              {
                t = term_c_35;
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
          t = term_d_35;
          t = get_config_0_0(t);
          if(((x_4 != NULL) && (x_4 != t)))
            _fail(t);
          else
            x_4 = t;
          t = b_5(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_x_34), not_null(s_4)), term_g_35));
          t = conc_0_0(t);
          if(((y_4 != NULL) && (y_4 != t)))
            _fail(t);
          else
            y_4 = t;
          t = c_5(t);
          t = (ATerm) ATmakeAppl(sym__2, term_q_33, not_null(v_4));
          t = if_verbose3_1_0(debug_0_0, t);
          t = call_0_0(t);
        }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = term_h_35;
          return(t);
        }
        t = say_1_0(x_0, t);
        return(t);
      }
      t = if_verbose2_1_0(w_0, t);
      {
        ATerm y_0 (ATerm t)
        {
          t = term_i_35;
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
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36;
      a_36 = t;
      t = term_g_35;
      t = get_config_0_0(t);
      t = a_36;
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
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
            t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_c_36));
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_6), term_d_36);
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
      t = term_d_36;
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
          ATerm e_36 = t;
          if((PushChoice() == 0))
            {
              ATerm f_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(g_36);
                }
              else
                {
                  t = f_36;
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
              t = e_36;
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
        ATerm h_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_6(t);
            ;
            LocalPopChoice(y_36);
          }
        else
          {
            t = h_36;
            {
              ATerm z_36 = t;
              int g_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_6(t);
                  ;
                  LocalPopChoice(g_37);
                }
              else
                {
                  t = z_36;
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
    t = term_h_37;
    return(t);
  }
  t = xtc_transform_1_0(g_1, t);
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_m_37;
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
    t = term_n_37;
    t = xtc_find_0_0(t);
    if(((r_6 != NULL) && (r_6 != t)))
      _fail(t);
    else
      r_6 = t;
    t = s_6(t);
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_s_37);
    return(t);
  }
  t = xtc_transform_2_0(h_1, i_1, t);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_t_37;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm w_37;
    w_37 = t;
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
    t = w_37;
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
      t = term_a_38;
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
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_a_38);
          return(t);
        }
        t = map_1_0(l_1, t);
        if(((b_7 != NULL) && (b_7 != t)))
          _fail(t);
        else
          b_7 = t;
        t = e_7(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_b_38)), not_null(w_6));
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
    ATerm c_38;
    c_38 = t;
    {
      ATerm n_1 (ATerm t)
      {
        t = term_m_38;
        return(t);
      }
      t = debug_1_0(n_1, t);
      {
        ATerm q_38;
        q_38 = t;
        t = term_u_38;
        t = get_config_0_0(t);
        t = q_38;
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
              t = term_v_38;
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
              t = term_w_38;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_j_39), term_x_38);
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
                  t = term_k_39;
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
                  t = (ATerm) ATinsert(ATempty, term_l_39);
                  return(t);
                }
                t = say_1_0(u_1, t);
              }
            }
          }
        }
      }
    }
    t = c_38;
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm stratego_cf_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_m_39;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(y_1, z_1, t);
  return(t);
}
ATerm canonicalize_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_y_39;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_b_38);
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
      t = term_z_39;
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
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_g_40));
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
            t = term_k_40;
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
    ATerm o_40;
    o_40 = t;
    {
      ATerm k_2 (ATerm t)
      {
        t = term_p_40;
        return(t);
      }
      t = debug_1_0(k_2, t);
      {
        ATerm w_40;
        w_40 = t;
        t = term_x_40;
        t = get_config_0_0(t);
        t = w_40;
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
              t = term_d_41;
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
              t = term_w_38;
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
              t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), term_x_38);
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
                  t = term_h_41;
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
                  t = (ATerm) ATinsert(ATempty, term_l_39);
                  return(t);
                }
                t = say_1_0(r_2, t);
              }
            }
          }
        }
      }
    }
    t = o_40;
    return(t);
  }
  t = try_1_0(j_2, t);
  return(t);
}
ATerm stratego_of_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_i_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(s_2, t_2, t);
  return(t);
}
ATerm optimize2_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_o_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(u_2, e_3, t);
  return(t);
}
ATerm desugar_case_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_p_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(f_3, g_3, t);
  return(t);
}
ATerm compile_match_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = term_q_41;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(h_3, t_3, t);
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = term_a_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(x_3, y_3, t);
  return(t);
}
ATerm inline_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_b_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(z_3, a_4, t);
  return(t);
}
ATerm fusion_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_j_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(l_4, m_4, t);
  return(t);
}
ATerm optimize1_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_k_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(n_4, o_4, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = term_l_42;
      return(t);
    }
    t = debug_1_0(d_5, t);
    return(t);
  }
  t = if_verbose2_1_0(p_4, t);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm p_5 (ATerm t)
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
        if(((x_9 != NULL) && (x_9 != t)))
          _fail(t);
        else
          x_9 = t;
        t = y_9(t);
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_m_42));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(p_5, t);
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      t = optimize1_0_0(t);
      {
        ATerm q_5 (ATerm t)
        {
          ATerm s_42;
          s_42 = t;
          {
            ATerm t_42 = t;
            if((PushChoice() == 0))
              {
                t = term_u_42;
                t = get_config_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_42;
              }
          }
          t = s_42;
          t = fusion_0_0(t);
          return(t);
        }
        t = try_1_0(q_5, t);
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
    t = profile_p__2_0(h_5, i_5, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    t = term_w_42;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(r_5, s_5, t);
  return(t);
}
ATerm stratego_nf_0_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    t = term_f_43;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(t_5, u_5, t);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = term_g_43;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm k_10 = NULL,m_10 = NULL;
    ATerm h_43;
    h_43 = t;
    {
      ATerm l_10 = NULL;
      ATerm q_10 (ATerm t)
      {
        t = not_null(l_10);
        if(((k_10 != NULL) && (k_10 != t)))
          _fail(t);
        else
          k_10 = t;
        t = not_null(l_10);
        return(t);
      }
      t = pass_verbose_0_0(t);
      if(((l_10 != NULL) && (l_10 != t)))
        _fail(t);
      else
        l_10 = t;
      t = q_10(t);
    }
    t = h_43;
    {
      ATerm p_10 = NULL;
      ATerm s_10 (ATerm t)
      {
        t = not_null(p_10);
        if(((m_10 != NULL) && (m_10 != t)))
          _fail(t);
        else
          m_10 = t;
        t = not_null(p_10);
        return(t);
      }
      t = term_i_43;
      t = get_config_0_0(t);
      {
        ATerm x_5 (ATerm t)
        {
          ATerm n_10 = NULL;
          ATerm o_10 = NULL;
          ATerm r_10 (ATerm t)
          {
            t = not_null(o_10);
            if(((n_10 != NULL) && (n_10 != t)))
              _fail(t);
            else
              n_10 = t;
            t = not_null(o_10);
            return(t);
          }
          if(((o_10 != NULL) && (o_10 != t)))
            _fail(t);
          else
            o_10 = t;
          t = r_10(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_10)), term_i_43);
          return(t);
        }
        t = map_1_0(x_5, t);
        if(((p_10 != NULL) && (p_10 != t)))
          _fail(t);
        else
          p_10 = t;
        t = s_10(t);
      }
      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_10)), (ATerm) ATinsert(ATempty, term_b_38)), not_null(k_10));
      t = concat_0_0(t);
    }
    return(t);
  }
  t = xtc_transform_2_0(v_5, w_5, t);
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    t = term_v_43;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(p_6, t_6, t);
  return(t);
}
ATerm extract_all_0_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = term_z_43;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(u_6, v_6, t);
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm a_44;
    a_44 = t;
    t = term_b_44;
    t = get_config_0_0(t);
    t = a_44;
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0_0(t);
          ;
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          t = (ATerm) ATinsert(ATempty, term_k_44);
          t = fatal_error_0_0(t);
        }
      {
        ATerm g_7 (ATerm t)
        {
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
          ATerm h_7 (ATerm t)
          {
            t = term_l_44;
            return(t);
          }
          t = get_outfile_1_0(h_7, t);
          if(((d_11 != NULL) && (d_11 != t)))
            _fail(t);
          else
            d_11 = t;
          t = e_11(t);
          return(t);
        }
        t = copy_to_1_0(g_7, t);
        {
          ATerm r_7 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_n_44);
            return(t);
          }
          t = say_1_0(r_7, t);
          t = xtc_io_exit_0_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1_0(f_7, t);
  return(t);
}
ATerm if_keep2_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm o_44;
    o_44 = t;
    {
      ATerm g_11 = NULL;
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
      t = term_s_44;
      t = get_config_0_0(t);
      if(((h_11 != NULL) && (h_11 != t)))
        _fail(t);
      else
        h_11 = t;
      t = i_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), term_o_33);
      t = geq_0_0(t);
    }
    t = o_44;
    t = l_101(t);
    return(t);
  }
  t = try_1_0(v_7, t);
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm z_7 (ATerm t)
  {
    t = term_t_44;
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm l_11 = NULL;
    ATerm m_11 = NULL;
    ATerm p_11 (ATerm t)
    {
      t = not_null(m_11);
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      t = not_null(m_11);
      return(t);
    }
    t = pass_verbose_0_0(t);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = p_11(t);
    t = (ATerm) ATinsert(CheckATermList(not_null(l_11)), term_b_38);
    return(t);
  }
  t = xtc_transform_2_0(z_7, d_8, t);
  {
    ATerm e_8 (ATerm t)
    {
      ATerm f_8 (ATerm t)
      {
        ATerm o_11 = NULL;
        ATerm q_11 (ATerm t)
        {
          t = not_null(o_11);
          if(((n_11 != NULL) && (n_11 != t)))
            _fail(t);
          else
            n_11 = t;
          t = not_null(o_11);
          return(t);
        }
        ATerm p_8 (ATerm t)
        {
          t = term_u_44;
          return(t);
        }
        t = get_outfile_1_0(p_8, t);
        if(((o_11 != NULL) && (o_11 != t)))
          _fail(t);
        else
          o_11 = t;
        t = q_11(t);
        return(t);
      }
      t = copy_to_1_0(f_8, t);
      {
        ATerm t_8 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_11)), term_v_44);
          return(t);
        }
        t = say_1_0(t_8, t);
      }
      return(t);
    }
    t = if_keep2_1_0(e_8, t);
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm w_44;
    w_44 = t;
    {
      ATerm s_11 = NULL;
      ATerm t_11 = NULL;
      ATerm u_11 (ATerm t)
      {
        t = not_null(t_11);
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = not_null(t_11);
        return(t);
      }
      t = term_s_44;
      t = get_config_0_0(t);
      if(((t_11 != NULL) && (t_11 != t)))
        _fail(t);
      else
        t_11 = t;
      t = u_11(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), term_z_44);
      t = geq_0_0(t);
    }
    t = w_44;
    t = m_101(t);
    return(t);
  }
  t = try_1_0(x_8, t);
  return(t);
}
ATerm AddMain_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  ATerm d_12 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL;
    t = not_null(z_11);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = not_null(y_11);
    {
      ATerm c_12 = NULL;
      ATerm e_12 (ATerm t)
      {
        t = not_null(c_12);
        if(((b_12 != NULL) && (b_12 != t)))
          _fail(t);
        else
          b_12 = t;
        t = not_null(c_12);
        return(t);
      }
      t = term_a_45;
      t = g_79(t);
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
      t = e_12(t);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(a_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_i_45, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_12)), (ATerm) ATempty))))));
    }
    return(t);
  }
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = not_null(y_11);
  if(match_cons(t, sym_Specification_1))
    {
      z_11 = ATgetArgument(t, 0);
      t = d_12(t);
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
  ATerm h_12 = NULL,j_12 = NULL;
  ATerm b_9 (ATerm t)
  {
    ATerm m_45;
    m_45 = t;
    {
      ATerm i_12 = NULL;
      ATerm l_12 (ATerm t)
      {
        t = not_null(i_12);
        if(((h_12 != NULL) && (h_12 != t)))
          _fail(t);
        else
          h_12 = t;
        t = not_null(i_12);
        {
          ATerm f_9 (ATerm t)
          {
            ATerm j_9 (ATerm t)
            {
              t = term_q_45;
              return(t);
            }
            t = debug_1_0(j_9, t);
            return(t);
          }
          t = if_verbose2_1_0(f_9, t);
        }
        return(t);
      }
      t = term_t_45;
      t = get_config_0_0(t);
      if(((i_12 != NULL) && (i_12 != t)))
        _fail(t);
      else
        i_12 = t;
      t = l_12(t);
    }
    t = m_45;
    {
      ATerm n_9 (ATerm t)
      {
        ATerm r_9 (ATerm t)
        {
          t = not_null(h_12);
          return(t);
        }
        t = AddMain_1_0(r_9, t);
        return(t);
      }
      t = xtc_io_transform_1_0(n_9, t);
    }
    return(t);
  }
  t = try_1_0(b_9, t);
  {
    ATerm v_9 (ATerm t)
    {
      ATerm z_9 (ATerm t)
      {
        ATerm k_12 = NULL;
        ATerm m_12 (ATerm t)
        {
          t = not_null(k_12);
          if(((j_12 != NULL) && (j_12 != t)))
            _fail(t);
          else
            j_12 = t;
          t = not_null(k_12);
          return(t);
        }
        ATerm d_10 (ATerm t)
        {
          t = term_u_45;
          return(t);
        }
        t = get_outfile_1_0(d_10, t);
        if(((k_12 != NULL) && (k_12 != t)))
          _fail(t);
        else
          k_12 = t;
        t = m_12(t);
        return(t);
      }
      t = copy_to_1_0(z_9, t);
      {
        ATerm h_10 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_12)), term_w_45);
          return(t);
        }
        t = say_1_0(h_10, t);
      }
      return(t);
    }
    t = if_keep3_1_0(v_9, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  ATerm x_12 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
    t = not_null(q_12);
    if(((r_12 != NULL) && (r_12 != t)))
      _fail(t);
    else
      r_12 = t;
    t = not_null(q_12);
    {
      ATerm i_10 (ATerm t)
      {
        ATerm z_45;
        z_45 = t;
        {
          ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
          ATerm y_12 (ATerm t)
          {
            t = not_null(v_12);
            if(((t_12 != NULL) && (t_12 != t)))
              _fail(t);
            else
              t_12 = t;
            t = not_null(w_12);
            if(((s_12 != NULL) && (s_12 != t)))
              _fail(t);
            else
              s_12 = t;
            t = not_null(t_12);
            {
              ATerm j_10 (ATerm t)
              {
                t = try_1_0(remove_file_0_0, t);
                return(t);
              }
              t = map_1_0(j_10, t);
            }
            return(t);
          }
          t = term_c_46;
          t = table_get_0_0(t);
          if(((u_12 != NULL) && (u_12 != t)))
            _fail(t);
          else
            u_12 = t;
          t = not_null(u_12);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_12 = ATgetFirst((ATermList) t);
              w_12 = (ATerm) ATgetNext((ATermList) t);
              t = y_12(t);
            }
          else
            {
              _fail(t);
            }
        }
        t = z_45;
        {
          ATerm t_10 (ATerm t)
          {
            t = term_a_46;
            return(t);
          }
          t = end_scope_1_0(t_10, t);
        }
        return(t);
      }
      t = repeat_1_0(i_10, t);
      t = exit_0_0(t);
    }
    return(t);
  }
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = x_12(t);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm x_10 (ATerm t)
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_34;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
        t = term_d_36;
      }
    return(t);
  }
  t = copy_to_1_0(x_10, t);
  t = term_l_33;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL;
  ATerm f_46;
  f_46 = t;
  {
    ATerm c_13 = NULL;
    ATerm f_13 (ATerm t)
    {
      t = not_null(c_13);
      if(((b_13 != NULL) && (b_13 != t)))
        _fail(t);
      else
        b_13 = t;
      t = not_null(c_13);
      return(t);
    }
    t = h_79(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = f_13(t);
  }
  t = f_46;
  {
    ATerm e_13 = NULL;
    ATerm g_13 (ATerm t)
    {
      t = not_null(e_13);
      if(((d_13 != NULL) && (d_13 != t)))
        _fail(t);
      else
        d_13 = t;
      t = not_null(e_13);
      return(t);
    }
    t = term_g_46;
    t = get_config_0_0(t);
    if(((e_13 != NULL) && (e_13 != t)))
      _fail(t);
    else
      e_13 = t;
    t = g_13(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(b_13));
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm r_13 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,p_13 = NULL;
    t = not_null(l_13);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = not_null(l_13);
    {
      ATerm h_46;
      h_46 = t;
      {
        ATerm o_13 = NULL;
        ATerm s_13 (ATerm t)
        {
          t = not_null(o_13);
          if(((n_13 != NULL) && (n_13 != t)))
            _fail(t);
          else
            n_13 = t;
          t = not_null(o_13);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_13));
        if(((o_13 != NULL) && (o_13 != t)))
          _fail(t);
        else
          o_13 = t;
        t = s_13(t);
      }
      t = h_46;
      {
        ATerm q_13 = NULL;
        ATerm t_13 (ATerm t)
        {
          t = not_null(q_13);
          if(((p_13 != NULL) && (p_13 != t)))
            _fail(t);
          else
            p_13 = t;
          t = not_null(q_13);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_13));
        if(((q_13 != NULL) && (q_13 != t)))
          _fail(t);
        else
          q_13 = t;
        t = t_13(t);
        t = not_null(p_13);
      }
    }
    return(t);
  }
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = not_null(l_13);
  if(match_cons(t, sym_stderr_0))
    {
      t = r_13(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  ATerm e_14 (ATerm t)
  {
    ATerm z_13 = NULL,a_14 = NULL,c_14 = NULL;
    t = not_null(y_13);
    if(((z_13 != NULL) && (z_13 != t)))
      _fail(t);
    else
      z_13 = t;
    t = not_null(y_13);
    {
      ATerm i_46;
      i_46 = t;
      {
        ATerm b_14 = NULL;
        ATerm f_14 (ATerm t)
        {
          t = not_null(b_14);
          if(((a_14 != NULL) && (a_14 != t)))
            _fail(t);
          else
            a_14 = t;
          t = not_null(b_14);
          return(t);
        }
        t = SSLgetAnnotations(not_null(z_13));
        if(((b_14 != NULL) && (b_14 != t)))
          _fail(t);
        else
          b_14 = t;
        t = f_14(t);
      }
      t = i_46;
      {
        ATerm d_14 = NULL;
        ATerm g_14 (ATerm t)
        {
          t = not_null(d_14);
          if(((c_14 != NULL) && (c_14 != t)))
            _fail(t);
          else
            c_14 = t;
          t = not_null(d_14);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_14));
        if(((d_14 != NULL) && (d_14 != t)))
          _fail(t);
        else
          d_14 = t;
        t = g_14(t);
        t = not_null(c_14);
      }
    }
    return(t);
  }
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  t = not_null(y_13);
  if(match_cons(t, sym_stdout_0))
    {
      t = e_14(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  ATerm a_15 (ATerm t)
  {
    ATerm r_14 = NULL,s_14 = NULL;
    t = not_null(q_14);
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = not_null(p_14);
    {
      ATerm t_14 = NULL;
      ATerm d_15 (ATerm t)
      {
        t = not_null(t_14);
        if(((s_14 != NULL) && (s_14 != t)))
          _fail(t);
        else
          s_14 = t;
        t = not_null(t_14);
        {
          ATerm j_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(l_46);
            }
          else
            {
              t = j_46;
              t = stderr_0_0(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(s_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = d_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_14));
    }
    return(t);
  }
  ATerm b_15 (ATerm t)
  {
    ATerm u_14 = NULL,v_14 = NULL;
    t = not_null(q_14);
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = not_null(p_14);
    {
      ATerm w_14 = NULL;
      ATerm e_15 (ATerm t)
      {
        t = not_null(w_14);
        if(((v_14 != NULL) && (v_14 != t)))
          _fail(t);
        else
          v_14 = t;
        t = not_null(w_14);
        {
          ATerm m_46 = t;
          if((PushChoice() == 0))
            {
              ATerm n_46 = t;
              int o_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = stdout_0_0(t);
                  ;
                  LocalPopChoice(o_46);
                }
              else
                {
                  t = n_46;
                  {
                    ATerm t_46 = t;
                    int u_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = stderr_0_0(t);
                        ;
                        LocalPopChoice(u_46);
                      }
                    else
                      {
                        t = t_46;
                        {
                          ATerm x_14 = NULL;
                          ATerm f_15 (ATerm t)
                          {
                            t = not_null(x_14);
                            if(((u_14 != NULL) && (u_14 != t)))
                              _fail(t);
                            else
                              u_14 = t;
                            t = not_null(x_14);
                            return(t);
                          }
                          if(((x_14 != NULL) && (x_14 != t)))
                            _fail(t);
                          else
                            x_14 = t;
                          t = f_15(t);
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_46;
            }
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(v_14));
          t = copy_file_0_0(t);
        }
        return(t);
      }
      t = q_0(t);
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = e_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
    }
    return(t);
  }
  ATerm c_15 (ATerm t)
  {
    ATerm y_14 = NULL;
    t = not_null(q_14);
    if(((y_14 != NULL) && (y_14 != t)))
      _fail(t);
    else
      y_14 = t;
    t = not_null(p_14);
    {
      ATerm z_14 = NULL;
      ATerm g_15 (ATerm t)
      {
        t = not_null(z_14);
        if(((y_14 != NULL) && (y_14 != t)))
          _fail(t);
        else
          y_14 = t;
        t = not_null(z_14);
        return(t);
      }
      t = q_0(t);
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      t = g_15(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_14));
    }
    return(t);
  }
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  t = not_null(p_14);
  if(match_cons(t, sym_FILE_1))
    {
      q_14 = ATgetArgument(t, 0);
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_15(t);
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            {
              ATerm x_46 = t;
              int y_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_15(t);
                  ;
                  LocalPopChoice(y_46);
                }
              else
                {
                  t = x_46;
                  t = c_15(t);
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
  ATerm i_15 = NULL;
  ATerm b_11 (ATerm t)
  {
    ATerm z_46;
    z_46 = t;
    t = term_a_47;
    t = get_config_0_0(t);
    t = z_46;
    {
      ATerm f_11 (ATerm t)
      {
        ATerm j_15 = NULL;
        ATerm k_15 (ATerm t)
        {
          t = not_null(j_15);
          if(((i_15 != NULL) && (i_15 != t)))
            _fail(t);
          else
            i_15 = t;
          t = not_null(j_15);
          return(t);
        }
        ATerm j_11 (ATerm t)
        {
          t = term_b_47;
          return(t);
        }
        t = get_outfile_1_0(j_11, t);
        if(((j_15 != NULL) && (j_15 != t)))
          _fail(t);
        else
          j_15 = t;
        t = k_15(t);
        return(t);
      }
      t = copy_to_1_0(f_11, t);
      {
        ATerm c_47;
        c_47 = t;
        t = (ATerm) ATinsert(ATempty, term_r_47);
        t = echo_0_0(t);
        t = c_47;
        t = xtc_io_exit_0_0(t);
      }
    }
    return(t);
  }
  t = try_1_0(b_11, t);
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm o_15 = NULL,q_15 = NULL;
  ATerm s_15 (ATerm t)
  {
    t = not_null(q_15);
    if(((n_15 != NULL) && (n_15 != t)))
      _fail(t);
    else
      n_15 = t;
    t = not_null(q_15);
    return(t);
  }
  ATerm p_15 = NULL;
  ATerm r_15 (ATerm t)
  {
    t = not_null(p_15);
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = not_null(p_15);
    return(t);
  }
  t = term_s_44;
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_47);
      }
    else
      {
        t = s_47;
        t = term_u_47;
      }
    if(((p_15 != NULL) && (p_15 != t)))
      _fail(t);
    else
      p_15 = t;
    t = r_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), term_u_47);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = s_15(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_15)), term_s_44);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  ATerm w_15 = NULL,y_15 = NULL;
  ATerm a_16 (ATerm t)
  {
    t = not_null(y_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = not_null(y_15);
    return(t);
  }
  ATerm x_15 = NULL;
  ATerm z_15 (ATerm t)
  {
    t = not_null(x_15);
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    t = not_null(x_15);
    return(t);
  }
  t = term_n_33;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        t = term_u_47;
      }
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    t = z_15(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), term_u_47);
  t = subt_0_0(t);
  t = int_to_string_0_0(t);
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = a_16(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_15)), term_n_33);
  return(t);
}
ATerm dep_name_0_0 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm d_16 = NULL;
  ATerm e_16 (ATerm t)
  {
    t = not_null(d_16);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = not_null(d_16);
    return(t);
  }
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_48);
    }
  else
    {
      t = z_47;
      t = term_g_46;
      t = get_config_0_0(t);
    }
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = e_16(t);
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_16)), term_b_48);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  ATerm r_16 (ATerm t)
  {
    ATerm m_16 = NULL;
    t = not_null(k_16);
    {
      ATerm n_16 = NULL;
      ATerm t_16 (ATerm t)
      {
        t = not_null(n_16);
        if(((m_16 != NULL) && (m_16 != t)))
          _fail(t);
        else
          m_16 = t;
        t = not_null(n_16);
        return(t);
      }
      t = term_c_48;
      t = ReadFromFile_0_0(t);
      if(((n_16 != NULL) && (n_16 != t)))
        _fail(t);
      else
        n_16 = t;
      t = t_16(t);
      t = not_null(m_16);
    }
    return(t);
  }
  ATerm s_16 (ATerm t)
  {
    ATerm o_16 = NULL,p_16 = NULL;
    t = not_null(l_16);
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = not_null(k_16);
    {
      ATerm q_16 = NULL;
      ATerm u_16 (ATerm t)
      {
        t = not_null(q_16);
        if(((p_16 != NULL) && (p_16 != t)))
          _fail(t);
        else
          p_16 = t;
        t = not_null(q_16);
        return(t);
      }
      t = not_null(o_16);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((q_16 != NULL) && (q_16 != t)))
        _fail(t);
      else
        q_16 = t;
      t = u_16(t);
      t = not_null(p_16);
    }
    return(t);
  }
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
  t = not_null(k_16);
  if(match_cons(t, sym_stdin_0))
    {
      t = r_16(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          l_16 = ATgetArgument(t, 0);
          t = s_16(t);
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  ATerm h_17 (ATerm t)
  {
    ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
    t = not_null(b_17);
    if(((d_17 != NULL) && (d_17 != t)))
      _fail(t);
    else
      d_17 = t;
    t = not_null(c_17);
    if(((e_17 != NULL) && (e_17 != t)))
      _fail(t);
    else
      e_17 = t;
    t = not_null(z_16);
    t = SSL_write_term_to_stream_baf(not_null(d_17), not_null(e_17));
    {
      ATerm g_17 = NULL;
      ATerm i_17 (ATerm t)
      {
        t = not_null(g_17);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = not_null(g_17);
        return(t);
      }
      if(((g_17 != NULL) && (g_17 != t)))
        _fail(t);
      else
        g_17 = t;
      t = i_17(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_17));
    }
    return(t);
  }
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  t = not_null(z_16);
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      t = not_null(a_17);
      if(match_cons(t, sym_Stream_1))
        {
          b_17 = ATgetArgument(t, 0);
          t = h_17(t);
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  ATerm w_17 (ATerm t)
  {
    ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL;
    t = not_null(o_17);
    if(((q_17 != NULL) && (q_17 != t)))
      _fail(t);
    else
      q_17 = t;
    t = not_null(p_17);
    if(((r_17 != NULL) && (r_17 != t)))
      _fail(t);
    else
      r_17 = t;
    t = not_null(q_17);
    {
      ATerm t_17 = NULL;
      ATerm x_17 (ATerm t)
      {
        t = not_null(t_17);
        if(((s_17 != NULL) && (s_17 != t)))
          _fail(t);
        else
          s_17 = t;
        t = not_null(t_17);
        return(t);
      }
      if(((t_17 != NULL) && (t_17 != t)))
        _fail(t);
      else
        t_17 = t;
      t = x_17(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), term_h_48);
      t = open_stream_0_0(t);
      {
        ATerm v_17 = NULL;
        ATerm y_17 (ATerm t)
        {
          t = not_null(v_17);
          if(((u_17 != NULL) && (u_17 != t)))
            _fail(t);
          else
            u_17 = t;
          t = not_null(v_17);
          return(t);
        }
        if(((v_17 != NULL) && (v_17 != t)))
          _fail(t);
        else
          v_17 = t;
        t = y_17(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(r_17));
        t = f_99(t);
        t = fclose_0_0(t);
        t = not_null(r_17);
      }
    }
    return(t);
  }
  if(((n_17 != NULL) && (n_17 != t)))
    _fail(t);
  else
    n_17 = t;
  t = not_null(n_17);
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
      t = w_17(t);
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
  ATerm b_18 = NULL;
  ATerm f_18 (ATerm t)
  {
    ATerm c_18 = NULL,d_18 = NULL;
    t = not_null(b_18);
    if(((c_18 != NULL) && (c_18 != t)))
      _fail(t);
    else
      c_18 = t;
    t = not_null(b_18);
    {
      ATerm e_18 = NULL;
      ATerm g_18 (ATerm t)
      {
        t = not_null(e_18);
        if(((d_18 != NULL) && (d_18 != t)))
          _fail(t);
        else
          d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(c_18));
        t = WriteToBinaryFile_0_0(t);
        t = not_null(d_18);
        t = close_file_0_0(t);
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((e_18 != NULL) && (e_18 != t)))
        _fail(t);
      else
        e_18 = t;
      t = g_18(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_18));
    }
    return(t);
  }
  if(((b_18 != NULL) && (b_18 != t)))
    _fail(t);
  else
    b_18 = t;
  t = f_18(t);
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
  ATerm i_18 = NULL;
  ATerm k_18 (ATerm t)
  {
    ATerm j_18 = NULL;
    t = not_null(i_18);
    if(((j_18 != NULL) && (j_18 != t)))
      _fail(t);
    else
      j_18 = t;
    t = not_null(i_18);
    t = SSL_close_file(not_null(j_18));
    return(t);
  }
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = k_18(t);
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  ATerm s_18 (ATerm t)
  {
    ATerm q_18 = NULL,r_18 = NULL;
    t = not_null(o_18);
    if(((q_18 != NULL) && (q_18 != t)))
      _fail(t);
    else
      q_18 = t;
    t = not_null(p_18);
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = not_null(n_18);
    t = SSL_execvp(not_null(q_18), not_null(r_18));
    return(t);
  }
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = not_null(n_18);
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
      t = s_18(t);
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
  ATerm u_18 = NULL;
  ATerm w_18 (ATerm t)
  {
    ATerm v_18 = NULL;
    t = not_null(u_18);
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = not_null(u_18);
    t = SSL_int_to_string(not_null(v_18));
    return(t);
  }
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  t = w_18(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  ATerm o_19 (ATerm t)
  {
    ATerm g_19 = NULL,h_19 = NULL;
    t = not_null(d_19);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    t = not_null(c_19);
    {
      ATerm i_19 = NULL;
      ATerm q_19 (ATerm t)
      {
        t = not_null(i_19);
        if(((h_19 != NULL) && (h_19 != t)))
          _fail(t);
        else
          h_19 = t;
        t = not_null(i_19);
        return(t);
      }
      t = not_null(g_19);
      t = int_to_string_0_0(t);
      if(((i_19 != NULL) && (i_19 != t)))
        _fail(t);
      else
        i_19 = t;
      t = q_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_48), not_null(h_19)), term_i_48);
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  ATerm p_19 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
    t = not_null(d_19);
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    t = not_null(e_19);
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = not_null(f_19);
    if(((l_19 != NULL) && (l_19 != t)))
      _fail(t);
    else
      l_19 = t;
    t = not_null(c_19);
    {
      ATerm n_19 = NULL;
      ATerm r_19 (ATerm t)
      {
        t = not_null(n_19);
        if(((m_19 != NULL) && (m_19 != t)))
          _fail(t);
        else
          m_19 = t;
        t = not_null(n_19);
        return(t);
      }
      t = not_null(k_19);
      t = int_to_string_0_0(t);
      if(((n_19 != NULL) && (n_19 != t)))
        _fail(t);
      else
        n_19 = t;
      t = r_19(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_19)), term_n_48), not_null(m_19)), term_k_48), not_null(j_19));
      t = concat_strings_0_0(t);
    }
    return(t);
  }
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = not_null(c_19);
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_19 = ATgetArgument(t, 0);
      t = o_19(t);
    }
  else
    {
      if(match_cons(t, sym_Signal_3))
        {
          d_19 = ATgetArgument(t, 0);
          e_19 = ATgetArgument(t, 1);
          f_19 = ATgetArgument(t, 2);
          t = p_19(t);
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
  ATerm t_19 = NULL;
  ATerm k_11 (ATerm t)
  {
    ATerm u_19 = NULL;
    ATerm v_19 (ATerm t)
    {
      t = not_null(u_19);
      if(((t_19 != NULL) && (t_19 != t)))
        _fail(t);
      else
        t_19 = t;
      t = not_null(u_19);
      return(t);
    }
    t = f_87(t);
    if(((u_19 != NULL) && (u_19 != t)))
      _fail(t);
    else
      u_19 = t;
    t = v_19(t);
    return(t);
  }
  t = fetch_1_0(k_11, t);
  t = not_null(t_19);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_19 = NULL;
  ATerm f_20 (ATerm t)
  {
    ATerm a_20 = NULL;
    t = not_null(z_19);
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    t = not_null(z_19);
    {
      ATerm o_48 = t;
      int p_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_56), term_a_56), term_n_55), term_j_55), term_f_55), term_b_55), term_x_54), term_t_54), term_p_54), term_l_54), term_h_54), term_d_54), term_z_53), term_v_53), term_r_53), term_l_53), term_a_53), term_w_52), term_s_52), term_l_52), term_b_52), term_p_51), term_i_51), term_t_50), term_p_50), term_z_49), term_k_49), term_y_48);
          {
            ATerm r_11 (ATerm t)
            {
              ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
              ATerm g_20 (ATerm t)
              {
                t = not_null(d_20);
                if(((a_20 != NULL) && (a_20 != t)))
                  _fail(t);
                else
                  a_20 = t;
                t = not_null(b_20);
                return(t);
              }
              if(((b_20 != NULL) && (b_20 != t)))
                _fail(t);
              else
                b_20 = t;
              t = not_null(b_20);
              if(match_cons(t, sym_Signal_3))
                {
                  c_20 = ATgetArgument(t, 0);
                  d_20 = ATgetArgument(t, 1);
                  e_20 = ATgetArgument(t, 2);
                  t = g_20(t);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_elem_1_0(r_11, t);
          }
          ;
          LocalPopChoice(p_48);
        }
      else
        {
          t = o_48;
          t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(a_20));
        }
    }
    return(t);
  }
  if(((z_19 != NULL) && (z_19 != t)))
    _fail(t);
  else
    z_19 = t;
  t = f_20(t);
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_56;
  f_56 = t;
  {
    ATerm v_11 (ATerm t)
    {
      ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
      ATerm t_20 (ATerm t)
      {
        ATerm p_20 = NULL,r_20 = NULL;
        t = not_null(n_20);
        if(((p_20 != NULL) && (p_20 != t)))
          _fail(t);
        else
          p_20 = t;
        t = not_null(p_20);
        {
          ATerm g_56 = t;
          if((PushChoice() == 0))
            {
              ATerm q_20 = NULL;
              if(((q_20 != NULL) && (q_20 != t)))
                _fail(t);
              else
                q_20 = t;
              t = not_null(q_20);
              if(match_int(t, -1))
                {
                  t = not_null(q_20);
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
              t = g_56;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          {
            ATerm s_20 = NULL;
            ATerm u_20 (ATerm t)
            {
              t = not_null(s_20);
              if(((r_20 != NULL) && (r_20 != t)))
                _fail(t);
              else
                r_20 = t;
              t = not_null(s_20);
              return(t);
            }
            if(((s_20 != NULL) && (s_20 != t)))
              _fail(t);
            else
              s_20 = t;
            t = u_20(t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_20)), term_h_56));
            t = printnl_0_0(t);
          }
        }
        return(t);
      }
      if(((l_20 != NULL) && (l_20 != t)))
        _fail(t);
      else
        l_20 = t;
      t = not_null(l_20);
      if(match_cons(t, sym_WaitStatus_3))
        {
          m_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          o_20 = ATgetArgument(t, 2);
          t = t_20(t);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1_0(v_11, t);
  }
  t = f_56;
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm y_20 (ATerm t)
  {
    ATerm x_20 = NULL;
    t = not_null(w_20);
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    t = not_null(w_20);
    t = SSL_waitpid(not_null(x_20));
    return(t);
  }
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  t = y_20(t);
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm d_21 = NULL;
  ATerm i_21 (ATerm t)
  {
    ATerm e_21 = NULL,f_21 = NULL;
    ATerm j_21 (ATerm t)
    {
      ATerm g_21 = NULL;
      t = not_null(f_21);
      if(((g_21 != NULL) && (g_21 != t)))
        _fail(t);
      else
        g_21 = t;
      t = not_null(f_21);
      {
        ATerm k_56 = t;
        int w_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_21 = NULL;
            ATerm k_21 (ATerm t)
            {
              t = not_null(e_21);
              t = a_102(t);
              return(t);
            }
            if(((h_21 != NULL) && (h_21 != t)))
              _fail(t);
            else
              h_21 = t;
            t = not_null(h_21);
            if(match_int(t, 0))
              {
                t = k_21(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(w_56);
          }
        else
          {
            t = k_56;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(e_21));
            t = b_102(t);
          }
      }
      return(t);
    }
    t = not_null(d_21);
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    t = not_null(d_21);
    t = fork_0_0(t);
    if(((f_21 != NULL) && (f_21 != t)))
      _fail(t);
    else
      f_21 = t;
    t = j_21(t);
    return(t);
  }
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  t = i_21(t);
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm q_21 = NULL;
  ATerm w_11 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
    ATerm z_21 (ATerm t)
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
      ATerm a_22 (ATerm t)
      {
        t = not_null(q_21);
        return(t);
      }
      t = not_null(s_21);
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      t = not_null(t_21);
      if(((q_21 != NULL) && (q_21 != t)))
        _fail(t);
      else
        q_21 = t;
      t = not_null(u_21);
      t = waitpid_0_0(t);
      t = warn_ifsignaled_0_0(t);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = not_null(v_21);
      if(match_cons(t, sym_WaitStatus_3))
        {
          w_21 = ATgetArgument(t, 0);
          x_21 = ATgetArgument(t, 1);
          y_21 = ATgetArgument(t, 2);
          t = not_null(w_21);
          if(match_int(t, 0))
            {
              t = a_22(t);
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
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = not_null(r_21);
    if(match_cons(t, sym__2))
      {
        s_21 = ATgetArgument(t, 0);
        t_21 = ATgetArgument(t, 1);
        t = z_21(t);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2_0(c_102, w_11, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
  ATerm i_22 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL;
    t = not_null(e_22);
    if(((g_22 != NULL) && (g_22 != t)))
      _fail(t);
    else
      g_22 = t;
    t = not_null(f_22);
    if(((h_22 != NULL) && (h_22 != t)))
      _fail(t);
    else
      h_22 = t;
    t = not_null(d_22);
    {
      ATerm x_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_22), not_null(h_22));
        t = execvp_0_0(t);
        return(t);
      }
      t = fork_and_wait_1_0(x_11, t);
    }
    return(t);
  }
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  t = not_null(d_22);
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
      t = i_22(t);
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
  ATerm l_22 = NULL;
  ATerm x_56;
  x_56 = t;
  {
    ATerm m_22 = NULL;
    ATerm p_22 (ATerm t)
    {
      t = not_null(m_22);
      if(((l_22 != NULL) && (l_22 != t)))
        _fail(t);
      else
        l_22 = t;
      t = not_null(m_22);
      return(t);
    }
    t = x_108(t);
    t = xtc_find_warning_0_0(t);
    if(((m_22 != NULL) && (m_22 != t)))
      _fail(t);
    else
      m_22 = t;
    t = p_22(t);
  }
  t = x_56;
  {
    ATerm y_56;
    y_56 = t;
    {
      ATerm n_22 = NULL;
      ATerm o_22 = NULL;
      ATerm q_22 (ATerm t)
      {
        t = not_null(o_22);
        if(((n_22 != NULL) && (n_22 != t)))
          _fail(t);
        else
          n_22 = t;
        t = not_null(o_22);
        return(t);
      }
      if(((o_22 != NULL) && (o_22 != t)))
        _fail(t);
      else
        o_22 = t;
      t = q_22(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(n_22));
      t = call_0_0(t);
    }
    t = y_56;
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  ATerm i_23 (ATerm t)
  {
    ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
    t = not_null(x_22);
    if(((z_22 != NULL) && (z_22 != t)))
      _fail(t);
    else
      z_22 = t;
    t = not_null(y_22);
    if(((a_23 != NULL) && (a_23 != t)))
      _fail(t);
    else
      a_23 = t;
    t = not_null(w_22);
    {
      ATerm z_56;
      z_56 = t;
      {
        ATerm e_23 = NULL;
        ATerm j_23 (ATerm t)
        {
          ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
          ATerm k_23 (ATerm t)
          {
            t = not_null(g_23);
            if(((c_23 != NULL) && (c_23 != t)))
              _fail(t);
            else
              c_23 = t;
            t = not_null(h_23);
            if(((d_23 != NULL) && (d_23 != t)))
              _fail(t);
            else
              d_23 = t;
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_23), term_b_46, (ATerm) ATinsert(CheckATermList(not_null(d_23)), (ATerm) ATinsert(CheckATermList(not_null(c_23)), not_null(z_22))));
            t = table_put_0_0(t);
            return(t);
          }
          t = not_null(e_23);
          if(((b_23 != NULL) && (b_23 != t)))
            _fail(t);
          else
            b_23 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(b_23), not_null(z_22), not_null(a_23));
          t = table_push_0_0(t);
          {
            ATerm a_57 = t;
            int j_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), term_b_46);
                t = table_get_0_0(t);
                ;
                LocalPopChoice(j_57);
              }
            else
              {
                t = a_57;
                t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
              }
            if(((f_23 != NULL) && (f_23 != t)))
              _fail(t);
            else
              f_23 = t;
            t = not_null(f_23);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_23 = ATgetFirst((ATermList) t);
                h_23 = (ATerm) ATgetNext((ATermList) t);
                t = k_23(t);
              }
            else
              {
                _fail(t);
              }
          }
          return(t);
        }
        t = m_97(t);
        if(((e_23 != NULL) && (e_23 != t)))
          _fail(t);
        else
          e_23 = t;
        t = j_23(t);
      }
      t = z_56;
    }
    return(t);
  }
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  t = not_null(w_22);
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      t = i_23(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm k_57;
  k_57 = t;
  t = y_98(t);
  {
    ATerm f_12 (ATerm t)
    {
      t = term_l_57;
      return(t);
    }
    t = debug_1_0(f_12, t);
  }
  t = k_57;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  ATerm y_23 (ATerm t)
  {
    ATerm s_23 = NULL;
    t = not_null(p_23);
    if(((s_23 != NULL) && (s_23 != t)))
      _fail(t);
    else
      s_23 = t;
    t = not_null(p_23);
    {
      ATerm m_57 = t;
      if((PushChoice() == 0))
        {
          ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
          if(((t_23 != NULL) && (t_23 != t)))
            _fail(t);
          else
            t_23 = t;
          t = not_null(t_23);
          if(match_cons(t, sym__2))
            {
              u_23 = ATgetArgument(t, 0);
              v_23 = ATgetArgument(t, 1);
              t = not_null(t_23);
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
          t = m_57;
        }
      {
        ATerm g_12 (ATerm t)
        {
          t = term_n_57;
          return(t);
        }
        t = obsolete_1_0(g_12, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), term_h_48);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm z_23 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL;
    t = not_null(q_23);
    if(((w_23 != NULL) && (w_23 != t)))
      _fail(t);
    else
      w_23 = t;
    t = not_null(r_23);
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    t = not_null(p_23);
    t = SSL_open_file(not_null(w_23), not_null(x_23));
    return(t);
  }
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = not_null(p_23);
  if(match_cons(t, sym__2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      {
        ATerm o_57 = t;
        int p_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_23(t);
            ;
            LocalPopChoice(p_57);
          }
        else
          {
            t = o_57;
            t = z_23(t);
          }
      }
    }
  else
    {
      t = y_23(t);
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
  ATerm b_24 = NULL;
  ATerm c_24 = NULL;
  ATerm e_24 (ATerm t)
  {
    t = not_null(c_24);
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    t = not_null(c_24);
    return(t);
  }
  t = term_a_45;
  t = new_0_0(t);
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = e_24(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_q_57);
  t = conc_strings_0_0(t);
  {
    ATerm n_12 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(n_12, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_24 = NULL;
  ATerm i_24 (ATerm t)
  {
    ATerm h_24 = NULL;
    t = not_null(g_24);
    if(((h_24 != NULL) && (h_24 != t)))
      _fail(t);
    else
      h_24 = t;
    t = not_null(g_24);
    {
      ATerm r_57;
      r_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_24), term_h_48);
      t = open_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_24), term_a_45);
      {
        ATerm o_12 (ATerm t)
        {
          t = term_a_46;
          return(t);
        }
        t = assert_1_0(o_12, t);
      }
      t = r_57;
    }
    return(t);
  }
  t = new_file_0_0(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  t = i_24(t);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  ATerm b_25 (ATerm t)
  {
    ATerm s_24 = NULL;
    t = not_null(q_24);
    {
      ATerm t_24 = NULL;
      ATerm d_25 (ATerm t)
      {
        ATerm u_24 = NULL;
        t = not_null(t_24);
        if(((s_24 != NULL) && (s_24 != t)))
          _fail(t);
        else
          s_24 = t;
        t = not_null(t_24);
        {
          ATerm v_24 = NULL;
          ATerm e_25 (ATerm t)
          {
            t = not_null(v_24);
            if(((u_24 != NULL) && (u_24 != t)))
              _fail(t);
            else
              u_24 = t;
            t = not_null(v_24);
            return(t);
          }
          t = p_0(t);
          if(((v_24 != NULL) && (v_24 != t)))
            _fail(t);
          else
            v_24 = t;
          t = e_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_24)), term_x_34));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(s_24);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = xtc_new_file_0_0(t);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      t = d_25(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_24));
    }
    return(t);
  }
  ATerm c_25 (ATerm t)
  {
    ATerm w_24 = NULL,x_24 = NULL;
    t = not_null(r_24);
    if(((w_24 != NULL) && (w_24 != t)))
      _fail(t);
    else
      w_24 = t;
    t = not_null(q_24);
    {
      ATerm y_24 = NULL;
      ATerm f_25 (ATerm t)
      {
        ATerm z_24 = NULL;
        t = not_null(y_24);
        if(((x_24 != NULL) && (x_24 != t)))
          _fail(t);
        else
          x_24 = t;
        t = not_null(y_24);
        {
          ATerm a_25 = NULL;
          ATerm g_25 (ATerm t)
          {
            t = not_null(a_25);
            if(((z_24 != NULL) && (z_24 != t)))
              _fail(t);
            else
              z_24 = t;
            t = not_null(a_25);
            return(t);
          }
          t = p_0(t);
          if(((a_25 != NULL) && (a_25 != t)))
            _fail(t);
          else
            a_25 = t;
          t = g_25(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), term_x_34), not_null(w_24)), term_i_58));
          t = conc_0_0(t);
          t = xtc_command_1_0(o_0, t);
          t = not_null(x_24);
          t = close_file_0_0(t);
        }
        return(t);
      }
      t = not_null(w_24);
      t = xtc_new_file_0_0(t);
      if(((y_24 != NULL) && (y_24 != t)))
        _fail(t);
      else
        y_24 = t;
      t = f_25(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_24));
    }
    return(t);
  }
  if(((q_24 != NULL) && (q_24 != t)))
    _fail(t);
  else
    q_24 = t;
  t = not_null(q_24);
  if(match_cons(t, sym_stdin_0))
    {
      t = b_25(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          r_24 = ATgetArgument(t, 0);
          t = c_25(t);
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
  ATerm l_25 = NULL;
  ATerm r_25 (ATerm t)
  {
    ATerm m_25 = NULL,n_25 = NULL,p_25 = NULL;
    t = not_null(l_25);
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = not_null(l_25);
    {
      ATerm j_58;
      j_58 = t;
      {
        ATerm o_25 = NULL;
        ATerm s_25 (ATerm t)
        {
          t = not_null(o_25);
          if(((n_25 != NULL) && (n_25 != t)))
            _fail(t);
          else
            n_25 = t;
          t = not_null(o_25);
          return(t);
        }
        t = SSLgetAnnotations(not_null(m_25));
        if(((o_25 != NULL) && (o_25 != t)))
          _fail(t);
        else
          o_25 = t;
        t = s_25(t);
      }
      t = j_58;
      {
        ATerm q_25 = NULL;
        ATerm t_25 (ATerm t)
        {
          t = not_null(q_25);
          if(((p_25 != NULL) && (p_25 != t)))
            _fail(t);
          else
            p_25 = t;
          t = not_null(q_25);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(n_25));
        if(((q_25 != NULL) && (q_25 != t)))
          _fail(t);
        else
          q_25 = t;
        t = t_25(t);
        t = not_null(p_25);
      }
    }
    return(t);
  }
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = not_null(l_25);
  if(match_cons(t, sym_stdin_0))
    {
      t = r_25(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  ATerm j_26 (ATerm t)
  {
    ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,f_26 = NULL;
    ATerm l_26 (ATerm t)
    {
      ATerm g_26 = NULL,h_26 = NULL;
      t = not_null(f_26);
      if(((g_26 != NULL) && (g_26 != t)))
        _fail(t);
      else
        g_26 = t;
      t = not_null(f_26);
      {
        ATerm i_26 = NULL;
        ATerm m_26 (ATerm t)
        {
          t = not_null(i_26);
          if(((h_26 != NULL) && (h_26 != t)))
            _fail(t);
          else
            h_26 = t;
          t = not_null(i_26);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_26)), not_null(d_26));
        if(((i_26 != NULL) && (i_26 != t)))
          _fail(t);
        else
          i_26 = t;
        t = m_26(t);
        t = not_null(h_26);
      }
      return(t);
    }
    t = not_null(z_25);
    if(((b_26 != NULL) && (b_26 != t)))
      _fail(t);
    else
      b_26 = t;
    t = not_null(a_26);
    if(((c_26 != NULL) && (c_26 != t)))
      _fail(t);
    else
      c_26 = t;
    t = not_null(z_25);
    {
      ATerm e_26 = NULL;
      ATerm k_26 (ATerm t)
      {
        t = not_null(e_26);
        if(((d_26 != NULL) && (d_26 != t)))
          _fail(t);
        else
          d_26 = t;
        t = not_null(e_26);
        return(t);
      }
      t = SSLgetAnnotations(not_null(b_26));
      if(((e_26 != NULL) && (e_26 != t)))
        _fail(t);
      else
        e_26 = t;
      t = k_26(t);
      t = not_null(c_26);
      t = g_71(t);
      if(((f_26 != NULL) && (f_26 != t)))
        _fail(t);
      else
        f_26 = t;
      t = l_26(t);
    }
    return(t);
  }
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = not_null(z_25);
  if(match_cons(t, sym_FILE_1))
    {
      a_26 = ATgetArgument(t, 0);
      t = j_26(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_58 = t;
      int r_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_58);
        }
      else
        {
          t = m_58;
          t = stdin_0_0(t);
        }
      LocalPopChoice(l_58);
      t = xtc_transform_file_2_0(z_108, a_109, t);
    }
  else
    {
      t = k_58;
      t = xtc_transform_term_2_0(z_108, a_109, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm p_12 (ATerm t)
  {
    ATerm s_58;
    s_58 = t;
    {
      ATerm o_26 = NULL;
      ATerm p_26 = NULL;
      ATerm q_26 (ATerm t)
      {
        t = not_null(p_26);
        if(((o_26 != NULL) && (o_26 != t)))
          _fail(t);
        else
          o_26 = t;
        t = not_null(p_26);
        return(t);
      }
      t = term_n_33;
      t = get_config_0_0(t);
      if(((p_26 != NULL) && (p_26 != t)))
        _fail(t);
      else
        p_26 = t;
      t = q_26(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), term_z_44);
      t = geq_0_0(t);
    }
    t = s_58;
    t = k_100(t);
    return(t);
  }
  t = try_1_0(p_12, t);
  return(t);
}
ATerm basename_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm z_12 (ATerm t)
    {
      ATerm t_58 = t;
      int u_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2_0(_id, z_12, t);
          ;
          LocalPopChoice(u_58);
        }
      else
        {
          t = t_58;
          {
            ATerm y_58 = t;
            int z_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_13 (ATerm t)
                {
                  ATerm t_26 = NULL;
                  if(((t_26 != NULL) && (t_26 != t)))
                    _fail(t);
                  else
                    t_26 = t;
                  t = not_null(t_26);
                  if(match_int(t, 47))
                    {
                      t = not_null(t_26);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2_0(a_13, _id, t);
                ;
                LocalPopChoice(z_58);
              }
            else
              {
                t = y_58;
                {
                  ATerm h_13 (ATerm t)
                  {
                    ATerm u_26 = NULL;
                    if(((u_26 != NULL) && (u_26 != t)))
                      _fail(t);
                    else
                      u_26 = t;
                    t = not_null(u_26);
                    if(match_int(t, 46))
                      {
                        t = not_null(u_26);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2_0(h_13, q_95, t);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1_0(z_12, t);
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
  ATerm a_27 = NULL,b_27 = NULL;
  ATerm h_27 (ATerm t)
  {
    ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
    t = not_null(b_27);
    if(((c_27 != NULL) && (c_27 != t)))
      _fail(t);
    else
      c_27 = t;
    t = not_null(a_27);
    {
      ATerm f_27 = NULL;
      ATerm i_27 (ATerm t)
      {
        ATerm g_27 = NULL;
        ATerm j_27 (ATerm t)
        {
          t = not_null(g_27);
          if(((e_27 != NULL) && (e_27 != t)))
            _fail(t);
          else
            e_27 = t;
          t = not_null(g_27);
          {
            ATerm i_13 (ATerm t)
            {
              ATerm j_13 (ATerm t)
              {
                t = term_a_59;
                return(t);
              }
              t = debug_1_0(j_13, t);
              return(t);
            }
            t = if_verbose3_1_0(i_13, t);
            t = (ATerm) ATmakeAppl(sym__2, term_g_46, not_null(e_27));
            t = set_config_0_0(t);
          }
          return(t);
        }
        t = not_null(f_27);
        if(((d_27 != NULL) && (d_27 != t)))
          _fail(t);
        else
          d_27 = t;
        t = not_null(f_27);
        {
          ATerm k_13 (ATerm t)
          {
            ATerm u_13 (ATerm t)
            {
              t = term_b_59;
              return(t);
            }
            t = debug_1_0(u_13, t);
            return(t);
          }
          t = if_verbose3_1_0(k_13, t);
          t = (ATerm) ATmakeAppl(sym__2, term_c_59, not_null(d_27));
          t = set_config_0_0(t);
          {
            ATerm d_59 = t;
            int e_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_34;
                t = get_config_0_0(t);
                t = basename_0_0(t);
                ;
                LocalPopChoice(e_59);
              }
            else
              {
                t = d_59;
                t = not_null(d_27);
              }
            if(((g_27 != NULL) && (g_27 != t)))
              _fail(t);
            else
              g_27 = t;
            t = j_27(t);
          }
        }
        return(t);
      }
      t = not_null(c_27);
      t = basename_0_0(t);
      if(((f_27 != NULL) && (f_27 != t)))
        _fail(t);
      else
        f_27 = t;
      t = i_27(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_27));
    }
    return(t);
  }
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = not_null(a_27);
  if(match_cons(t, sym_FILE_1))
    {
      b_27 = ATgetArgument(t, 0);
      t = h_27(t);
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
    ATerm v_13 (ATerm t)
    {
      t = term_f_59;
      return(t);
    }
    ATerm w_13 (ATerm t)
    {
      ATerm o_27 = NULL,q_27 = NULL,s_27 = NULL,l_28 = NULL;
      ATerm g_59;
      g_59 = t;
      {
        ATerm p_27 = NULL;
        ATerm o_28 (ATerm t)
        {
          t = not_null(p_27);
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = not_null(p_27);
          return(t);
        }
        t = dep_name_0_0(t);
        if(((p_27 != NULL) && (p_27 != t)))
          _fail(t);
        else
          p_27 = t;
        t = o_28(t);
      }
      t = g_59;
      {
        ATerm n_59;
        n_59 = t;
        {
          ATerm r_27 = NULL;
          ATerm p_28 (ATerm t)
          {
            t = not_null(r_27);
            if(((q_27 != NULL) && (q_27 != t)))
              _fail(t);
            else
              q_27 = t;
            t = not_null(r_27);
            return(t);
          }
          t = pass_verbose_0_0(t);
          if(((r_27 != NULL) && (r_27 != t)))
            _fail(t);
          else
            r_27 = t;
          t = p_28(t);
        }
        t = n_59;
        {
          ATerm s_59;
          s_59 = t;
          {
            ATerm x_27 = NULL;
            ATerm q_28 (ATerm t)
            {
              t = not_null(x_27);
              if(((s_27 != NULL) && (s_27 != t)))
                _fail(t);
              else
                s_27 = t;
              t = not_null(x_27);
              return(t);
            }
            t = pass_keep_0_0(t);
            if(((x_27 != NULL) && (x_27 != t)))
              _fail(t);
            else
              x_27 = t;
            t = q_28(t);
          }
          t = s_59;
          {
            ATerm n_28 = NULL;
            ATerm r_28 (ATerm t)
            {
              t = not_null(n_28);
              if(((l_28 != NULL) && (l_28 != t)))
                _fail(t);
              else
                l_28 = t;
              t = not_null(n_28);
              return(t);
            }
            t = term_t_59;
            t = get_config_0_0(t);
            if(((n_28 != NULL) && (n_28 != t)))
              _fail(t);
            else
              n_28 = t;
            t = r_28(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_27)), not_null(q_27)), not_null(l_28)), not_null(o_27));
            t = concat_0_0(t);
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2_0(v_13, w_13, t);
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm h_14 (ATerm t)
    {
      t = term_u_59;
      return(t);
    }
    t = debug_1_0(h_14, t);
    return(t);
  }
  t = if_verbose2_1_0(x_13, t);
  {
    ATerm i_14 (ATerm t)
    {
      ATerm k_14 (ATerm t)
      {
        ATerm t_28 = NULL;
        ATerm u_28 = NULL;
        ATerm v_28 (ATerm t)
        {
          t = not_null(u_28);
          if(((t_28 != NULL) && (t_28 != t)))
            _fail(t);
          else
            t_28 = t;
          t = not_null(u_28);
          return(t);
        }
        if(((u_28 != NULL) && (u_28 != t)))
          _fail(t);
        else
          u_28 = t;
        t = v_28(t);
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(CheckATermList(not_null(t_28)), term_v_59));
        t = printnl_0_0(t);
        return(t);
      }
      t = if_verbose1_1_0(k_14, t);
      return(t);
    }
    ATerm j_14 (ATerm t)
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
    t = profile_p__2_0(i_14, j_14, t);
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  ATerm c_29 (ATerm t)
  {
    ATerm b_29 = NULL;
    t = not_null(a_29);
    if(((b_29 != NULL) && (b_29 != t)))
      _fail(t);
    else
      b_29 = t;
    t = not_null(b_29);
    return(t);
  }
  if(((y_28 != NULL) && (y_28 != t)))
    _fail(t);
  else
    y_28 = t;
  t = not_null(y_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
      t = c_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  ATerm n_29 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL;
    t = not_null(h_29);
    if(((j_29 != NULL) && (j_29 != t)))
      _fail(t);
    else
      j_29 = t;
    t = not_null(i_29);
    if(((k_29 != NULL) && (k_29 != t)))
      _fail(t);
    else
      k_29 = t;
    t = not_null(g_29);
    {
      ATerm w_59;
      w_59 = t;
      {
        ATerm l_29 = NULL;
        ATerm m_29 = NULL;
        ATerm o_29 (ATerm t)
        {
          t = not_null(m_29);
          if(((l_29 != NULL) && (l_29 != t)))
            _fail(t);
          else
            l_29 = t;
          t = not_null(m_29);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(k_29));
        {
          ATerm x_59 = t;
          int o_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              t = Tl_0_0(t);
              ;
              LocalPopChoice(o_60);
            }
          else
            {
              t = x_59;
              t = (ATerm) ATempty;
            }
          if(((m_29 != NULL) && (m_29 != t)))
            _fail(t);
          else
            m_29 = t;
          t = o_29(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(j_29), not_null(k_29), not_null(l_29));
        t = table_put_0_0(t);
      }
      t = w_59;
    }
    return(t);
  }
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = not_null(g_29);
  if(match_cons(t, sym__2))
    {
      h_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
      t = n_29(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  ATerm s_60;
  s_60 = t;
  {
    ATerm b_30 = NULL;
    ATerm i_30 (ATerm t)
    {
      ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
      ATerm j_30 (ATerm t)
      {
        t = not_null(d_30);
        if(((u_29 != NULL) && (u_29 != t)))
          _fail(t);
        else
          u_29 = t;
        t = not_null(e_30);
        if(((t_29 != NULL) && (t_29 != t)))
          _fail(t);
        else
          t_29 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(v_29), term_b_46, not_null(t_29));
        t = table_put_0_0(t);
        t = not_null(u_29);
        {
          ATerm l_14 (ATerm t)
          {
            ATerm f_30 = NULL;
            ATerm k_30 (ATerm t)
            {
              ATerm g_30 = NULL;
              t = not_null(f_30);
              if(((g_30 != NULL) && (g_30 != t)))
                _fail(t);
              else
                g_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), not_null(g_30));
              t = table_pop_0_0(t);
              return(t);
            }
            if(((f_30 != NULL) && (f_30 != t)))
              _fail(t);
            else
              f_30 = t;
            t = k_30(t);
            return(t);
          }
          t = map_1_0(l_14, t);
        }
        return(t);
      }
      t = not_null(b_30);
      if(((v_29 != NULL) && (v_29 != t)))
        _fail(t);
      else
        v_29 = t;
      t = not_null(b_30);
      {
        ATerm t_60 = t;
        int u_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), term_b_46);
            t = table_get_0_0(t);
            ;
            LocalPopChoice(u_60);
          }
        else
          {
            t = t_60;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((c_30 != NULL) && (c_30 != t)))
          _fail(t);
        else
          c_30 = t;
        t = not_null(c_30);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_30 = ATgetFirst((ATermList) t);
            e_30 = (ATerm) ATgetNext((ATermList) t);
            t = j_30(t);
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = j_97(t);
    if(((b_30 != NULL) && (b_30 != t)))
      _fail(t);
    else
      b_30 = t;
    t = i_30(t);
  }
  t = s_60;
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm o_30 (ATerm t)
  {
    ATerm n_30 = NULL;
    t = not_null(m_30);
    if(((n_30 != NULL) && (n_30 != t)))
      _fail(t);
    else
      n_30 = t;
    t = not_null(m_30);
    t = SSL_remove(not_null(n_30));
    return(t);
  }
  if(((m_30 != NULL) && (m_30 != t)))
    _fail(t);
  else
    m_30 = t;
  t = o_30(t);
  return(t);
}
ATerm restore_always_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm v_60 = t;
  int w_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      t = y_79(t);
      ;
      LocalPopChoice(w_60);
    }
  else
    {
      t = v_60;
      t = y_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm v_30 = NULL;
  ATerm l_61;
  l_61 = t;
  {
    ATerm w_30 = NULL;
    ATerm z_30 (ATerm t)
    {
      ATerm x_30 = NULL;
      t = not_null(w_30);
      if(((v_30 != NULL) && (v_30 != t)))
        _fail(t);
      else
        v_30 = t;
      t = not_null(w_30);
      {
        ATerm y_30 = NULL;
        ATerm a_31 (ATerm t)
        {
          t = not_null(y_30);
          if(((x_30 != NULL) && (x_30 != t)))
            _fail(t);
          else
            x_30 = t;
          t = not_null(y_30);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), term_b_46);
        {
          ATerm m_61 = t;
          int n_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(n_61);
            }
          else
            {
              t = m_61;
              t = (ATerm) ATempty;
            }
          if(((y_30 != NULL) && (y_30 != t)))
            _fail(t);
          else
            y_30 = t;
          t = a_31(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(v_30), term_b_46, (ATerm) ATinsert(CheckATermList(not_null(x_30)), (ATerm) ATempty));
        t = table_put_0_0(t);
      }
      return(t);
    }
    t = i_97(t);
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    t = z_30(t);
  }
  t = l_61;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  ATerm m_14 (ATerm t)
  {
    t = term_a_46;
    return(t);
  }
  t = begin_scope_1_0(m_14, t);
  {
    ATerm n_14 (ATerm t)
    {
      ATerm o_61;
      o_61 = t;
      {
        ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
        ATerm i_31 (ATerm t)
        {
          t = not_null(g_31);
          if(((e_31 != NULL) && (e_31 != t)))
            _fail(t);
          else
            e_31 = t;
          t = not_null(h_31);
          if(((d_31 != NULL) && (d_31 != t)))
            _fail(t);
          else
            d_31 = t;
          t = not_null(e_31);
          {
            ATerm o_14 (ATerm t)
            {
              t = try_1_0(remove_file_0_0, t);
              return(t);
            }
            t = map_1_0(o_14, t);
          }
          return(t);
        }
        ATerm a_62 = t;
        int b_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_46;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(b_62);
          }
        else
          {
            t = a_62;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((f_31 != NULL) && (f_31 != t)))
          _fail(t);
        else
          f_31 = t;
        t = not_null(f_31);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_31 = ATgetFirst((ATermList) t);
            h_31 = (ATerm) ATgetNext((ATermList) t);
            t = i_31(t);
          }
        else
          {
            _fail(t);
          }
      }
      t = o_61;
      {
        ATerm h_15 (ATerm t)
        {
          t = term_a_46;
          return(t);
        }
        t = end_scope_1_0(h_15, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_108, n_14, t);
  }
  return(t);
}
ATerm xtc_input_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm l_15 (ATerm t)
  {
    ATerm c_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
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
        t = term_i_58;
        t = get_config_0_0(t);
        if(((l_31 != NULL) && (l_31 != t)))
          _fail(t);
        else
          l_31 = t;
        t = m_31(t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_31));
        ;
        LocalPopChoice(d_62);
      }
    else
      {
        t = c_62;
        t = term_c_48;
      }
    t = m_108(t);
    return(t);
  }
  t = xtc_temp_files_1_0(l_15, t);
  return(t);
}
ATerm compile_0_0 (ATerm t)
{
  ATerm m_15 (ATerm t)
  {
    t = front_end_0_0(t);
    t = optimize_0_0(t);
    t = back_end_0_0(t);
    t = c_compile_0_0(t);
    return(t);
  }
  t = xtc_input_1_0(m_15, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm e_62;
    e_62 = t;
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
      t = term_n_33;
      t = get_config_0_0(t);
      if(((p_31 != NULL) && (p_31 != t)))
        _fail(t);
      else
        p_31 = t;
      t = q_31(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_u_47);
      t = geq_0_0(t);
    }
    t = e_62;
    t = i_100(t);
    return(t);
  }
  t = try_1_0(t_15, t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm s_31 = NULL;
  ATerm u_31 (ATerm t)
  {
    ATerm t_31 = NULL;
    t = not_null(s_31);
    if(((t_31 != NULL) && (t_31 != t)))
      _fail(t);
    else
      t_31 = t;
    t = not_null(s_31);
    t = SSL_TicksToSeconds(not_null(t_31));
    return(t);
  }
  if(((s_31 != NULL) && (s_31 != t)))
    _fail(t);
  else
    s_31 = t;
  t = u_31(t);
  return(t);
}
ATerm self_children_sys_time_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  ATerm g_32 (ATerm t)
  {
    ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
    t = not_null(y_31);
    if(((c_32 != NULL) && (c_32 != t)))
      _fail(t);
    else
      c_32 = t;
    t = not_null(z_31);
    if(((e_32 != NULL) && (e_32 != t)))
      _fail(t);
    else
      e_32 = t;
    t = not_null(a_32);
    if(((d_32 != NULL) && (d_32 != t)))
      _fail(t);
    else
      d_32 = t;
    t = not_null(b_32);
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(f_32));
    t = add_0_0(t);
    return(t);
  }
  if(((x_31 != NULL) && (x_31 != t)))
    _fail(t);
  else
    x_31 = t;
  t = not_null(x_31);
  if(match_cons(t, sym__4))
    {
      y_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      a_32 = ATgetArgument(t, 2);
      b_32 = ATgetArgument(t, 3);
      t = g_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  ATerm o_32 (ATerm t)
  {
    ATerm m_32 = NULL,n_32 = NULL;
    t = not_null(k_32);
    if(((m_32 != NULL) && (m_32 != t)))
      _fail(t);
    else
      m_32 = t;
    t = not_null(l_32);
    if(((n_32 != NULL) && (n_32 != t)))
      _fail(t);
    else
      n_32 = t;
    t = not_null(j_32);
    {
      ATerm f_62 = t;
      int j_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(not_null(m_32), not_null(n_32));
          ;
          LocalPopChoice(j_62);
        }
      else
        {
          t = f_62;
          t = SSL_addr(not_null(m_32), not_null(n_32));
        }
    }
    return(t);
  }
  if(((j_32 != NULL) && (j_32 != t)))
    _fail(t);
  else
    j_32 = t;
  t = not_null(j_32);
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
      t = o_32(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  ATerm a_33 (ATerm t)
  {
    ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
    t = not_null(s_32);
    if(((y_32 != NULL) && (y_32 != t)))
      _fail(t);
    else
      y_32 = t;
    t = not_null(t_32);
    if(((w_32 != NULL) && (w_32 != t)))
      _fail(t);
    else
      w_32 = t;
    t = not_null(u_32);
    if(((z_32 != NULL) && (z_32 != t)))
      _fail(t);
    else
      z_32 = t;
    t = not_null(v_32);
    if(((x_32 != NULL) && (x_32 != t)))
      _fail(t);
    else
      x_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), not_null(z_32));
    t = add_0_0(t);
    return(t);
  }
  if(((r_32 != NULL) && (r_32 != t)))
    _fail(t);
  else
    r_32 = t;
  t = not_null(r_32);
  if(match_cons(t, sym__4))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
      u_32 = ATgetArgument(t, 2);
      v_32 = ATgetArgument(t, 3);
      t = a_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  ATerm i_33 (ATerm t)
  {
    ATerm g_33 = NULL,h_33 = NULL;
    t = not_null(e_33);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    t = not_null(f_33);
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = not_null(d_33);
    {
      ATerm k_62 = t;
      int l_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(not_null(g_33), not_null(h_33));
          ;
          LocalPopChoice(l_62);
        }
      else
        {
          t = k_62;
          t = SSL_subtr(not_null(g_33), not_null(h_33));
        }
    }
    return(t);
  }
  if(((d_33 != NULL) && (d_33 != t)))
    _fail(t);
  else
    d_33 = t;
  t = not_null(d_33);
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      t = i_33(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  ATerm s_34 (ATerm t)
  {
    ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,m_34 = NULL,o_34 = NULL,q_34 = NULL;
    t = not_null(t_33);
    if(((c_34 != NULL) && (c_34 != t)))
      _fail(t);
    else
      c_34 = t;
    t = not_null(u_33);
    if(((d_34 != NULL) && (d_34 != t)))
      _fail(t);
    else
      d_34 = t;
    t = not_null(v_33);
    if(((e_34 != NULL) && (e_34 != t)))
      _fail(t);
    else
      e_34 = t;
    t = not_null(w_33);
    if(((f_34 != NULL) && (f_34 != t)))
      _fail(t);
    else
      f_34 = t;
    t = not_null(y_33);
    if(((g_34 != NULL) && (g_34 != t)))
      _fail(t);
    else
      g_34 = t;
    t = not_null(z_33);
    if(((h_34 != NULL) && (h_34 != t)))
      _fail(t);
    else
      h_34 = t;
    t = not_null(a_34);
    if(((i_34 != NULL) && (i_34 != t)))
      _fail(t);
    else
      i_34 = t;
    t = not_null(b_34);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = not_null(r_33);
    {
      ATerm m_62;
      m_62 = t;
      {
        ATerm l_34 = NULL;
        ATerm t_34 (ATerm t)
        {
          t = not_null(l_34);
          if(((k_34 != NULL) && (k_34 != t)))
            _fail(t);
          else
            k_34 = t;
          t = not_null(l_34);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(g_34));
        t = subt_0_0(t);
        if(((l_34 != NULL) && (l_34 != t)))
          _fail(t);
        else
          l_34 = t;
        t = t_34(t);
      }
      t = m_62;
      {
        ATerm n_62;
        n_62 = t;
        {
          ATerm n_34 = NULL;
          ATerm u_34 (ATerm t)
          {
            t = not_null(n_34);
            if(((m_34 != NULL) && (m_34 != t)))
              _fail(t);
            else
              m_34 = t;
            t = not_null(n_34);
            return(t);
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_34), not_null(h_34));
          t = subt_0_0(t);
          if(((n_34 != NULL) && (n_34 != t)))
            _fail(t);
          else
            n_34 = t;
          t = u_34(t);
        }
        t = n_62;
        {
          ATerm o_62;
          o_62 = t;
          {
            ATerm p_34 = NULL;
            ATerm v_34 (ATerm t)
            {
              t = not_null(p_34);
              if(((o_34 != NULL) && (o_34 != t)))
                _fail(t);
              else
                o_34 = t;
              t = not_null(p_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), not_null(i_34));
            t = subt_0_0(t);
            if(((p_34 != NULL) && (p_34 != t)))
              _fail(t);
            else
              p_34 = t;
            t = v_34(t);
          }
          t = o_62;
          {
            ATerm r_34 = NULL;
            ATerm w_34 (ATerm t)
            {
              t = not_null(r_34);
              if(((q_34 != NULL) && (q_34 != t)))
                _fail(t);
              else
                q_34 = t;
              t = not_null(r_34);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), not_null(j_34));
            t = subt_0_0(t);
            if(((r_34 != NULL) && (r_34 != t)))
              _fail(t);
            else
              r_34 = t;
            t = w_34(t);
            t = (ATerm) ATmakeAppl(sym__4, not_null(k_34), not_null(m_34), not_null(o_34), not_null(q_34));
          }
        }
      }
    }
    return(t);
  }
  if(((r_33 != NULL) && (r_33 != t)))
    _fail(t);
  else
    r_33 = t;
  t = not_null(r_33);
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
      t = not_null(s_33);
      if(match_cons(t, sym__4))
        {
          t_33 = ATgetArgument(t, 0);
          u_33 = ATgetArgument(t, 1);
          v_33 = ATgetArgument(t, 2);
          w_33 = ATgetArgument(t, 3);
          t = not_null(x_33);
          if(match_cons(t, sym__4))
            {
              y_33 = ATgetArgument(t, 0);
              z_33 = ATgetArgument(t, 1);
              a_34 = ATgetArgument(t, 2);
              b_34 = ATgetArgument(t, 3);
              t = s_34(t);
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
  ATerm b_35 = NULL;
  ATerm p_62;
  p_62 = t;
  {
    ATerm e_35 = NULL;
    ATerm o_35 (ATerm t)
    {
      t = not_null(e_35);
      if(((b_35 != NULL) && (b_35 != t)))
        _fail(t);
      else
        b_35 = t;
      t = not_null(e_35);
      return(t);
    }
    t = times_0_0(t);
    if(((e_35 != NULL) && (e_35 != t)))
      _fail(t);
    else
      e_35 = t;
    t = o_35(t);
  }
  t = p_62;
  t = d_104(t);
  {
    ATerm q_62;
    q_62 = t;
    {
      ATerm f_35 = NULL,k_35 = NULL,m_35 = NULL;
      ATerm j_35 = NULL;
      ATerm p_35 (ATerm t)
      {
        t = not_null(j_35);
        if(((f_35 != NULL) && (f_35 != t)))
          _fail(t);
        else
          f_35 = t;
        t = not_null(j_35);
        return(t);
      }
      t = times_0_0(t);
      if(((j_35 != NULL) && (j_35 != t)))
        _fail(t);
      else
        j_35 = t;
      t = p_35(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), not_null(b_35));
      t = diff_times_0_0(t);
      {
        ATerm r_62;
        r_62 = t;
        {
          ATerm l_35 = NULL;
          ATerm q_35 (ATerm t)
          {
            t = not_null(l_35);
            if(((k_35 != NULL) && (k_35 != t)))
              _fail(t);
            else
              k_35 = t;
            t = not_null(l_35);
            return(t);
          }
          t = self_children_user_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((l_35 != NULL) && (l_35 != t)))
            _fail(t);
          else
            l_35 = t;
          t = q_35(t);
        }
        t = r_62;
        {
          ATerm n_35 = NULL;
          ATerm r_35 (ATerm t)
          {
            t = not_null(n_35);
            if(((m_35 != NULL) && (m_35 != t)))
              _fail(t);
            else
              m_35 = t;
            t = not_null(n_35);
            return(t);
          }
          t = self_children_sys_time_0_0(t);
          t = ticks_to_seconds_0_0(t);
          if(((n_35 != NULL) && (n_35 != t)))
            _fail(t);
          else
            n_35 = t;
          t = r_35(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_35)), term_t_62), not_null(k_35)), term_s_62);
          t = c_104(t);
        }
      }
    }
    t = q_62;
  }
  return(t);
}
ATerm debug_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm u_62;
  u_62 = t;
  {
    ATerm u_35 = NULL,w_35 = NULL;
    ATerm v_62;
    v_62 = t;
    {
      ATerm v_35 = NULL;
      ATerm y_35 (ATerm t)
      {
        t = not_null(v_35);
        if(((u_35 != NULL) && (u_35 != t)))
          _fail(t);
        else
          u_35 = t;
        t = not_null(v_35);
        return(t);
      }
      t = r_98(t);
      if(((v_35 != NULL) && (v_35 != t)))
        _fail(t);
      else
        v_35 = t;
      t = y_35(t);
    }
    t = v_62;
    {
      ATerm x_35 = NULL;
      ATerm z_35 (ATerm t)
      {
        t = not_null(x_35);
        if(((w_35 != NULL) && (w_35 != t)))
          _fail(t);
        else
          w_35 = t;
        t = not_null(x_35);
        return(t);
      }
      if(((x_35 != NULL) && (x_35 != t)))
        _fail(t);
      else
        x_35 = t;
      t = z_35(t);
      t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_35)), not_null(u_35)));
      t = printnl_0_0(t);
    }
  }
  t = u_62;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_62 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(b_63);
    }
  else
    {
      t = w_62;
      {
        ATerm d_63 = t;
        int e_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_15 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(u_15, t);
            ;
            LocalPopChoice(e_63);
          }
        else
          {
            t = d_63;
            {
              ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
              ATerm t_36 (ATerm t)
              {
                ATerm l_36 = NULL;
                t = not_null(j_36);
                if(((l_36 != NULL) && (l_36 != t)))
                  _fail(t);
                else
                  l_36 = t;
                t = not_null(l_36);
                return(t);
              }
              ATerm u_36 (ATerm t)
              {
                ATerm m_36 = NULL;
                t = not_null(j_36);
                if(((m_36 != NULL) && (m_36 != t)))
                  _fail(t);
                else
                  m_36 = t;
                t = not_null(m_36);
                {
                  ATerm f_63 = t;
                  int g_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_63);
                    }
                  else
                    {
                      t = f_63;
                      {
                        ATerm b_16 (ATerm t)
                        {
                          t = term_h_63;
                          return(t);
                        }
                        t = debug_1_0(b_16, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm v_36 (ATerm t)
              {
                ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,r_36 = NULL;
                t = not_null(j_36);
                if(((n_36 != NULL) && (n_36 != t)))
                  _fail(t);
                else
                  n_36 = t;
                t = not_null(k_36);
                if(((o_36 != NULL) && (o_36 != t)))
                  _fail(t);
                else
                  o_36 = t;
                t = not_null(i_36);
                {
                  ATerm i_63;
                  i_63 = t;
                  {
                    ATerm q_36 = NULL;
                    ATerm w_36 (ATerm t)
                    {
                      t = not_null(q_36);
                      if(((p_36 != NULL) && (p_36 != t)))
                        _fail(t);
                      else
                        p_36 = t;
                      t = not_null(q_36);
                      return(t);
                    }
                    t = not_null(n_36);
                    t = eval_config_0_0(t);
                    if(((q_36 != NULL) && (q_36 != t)))
                      _fail(t);
                    else
                      q_36 = t;
                    t = w_36(t);
                  }
                  t = i_63;
                  {
                    ATerm s_36 = NULL;
                    ATerm x_36 (ATerm t)
                    {
                      t = not_null(s_36);
                      if(((r_36 != NULL) && (r_36 != t)))
                        _fail(t);
                      else
                        r_36 = t;
                      t = not_null(s_36);
                      return(t);
                    }
                    t = not_null(o_36);
                    t = eval_config_0_0(t);
                    if(((s_36 != NULL) && (s_36 != t)))
                      _fail(t);
                    else
                      s_36 = t;
                    t = x_36(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(r_36));
                    t = conc_strings_0_0(t);
                  }
                }
                return(t);
              }
              if(((i_36 != NULL) && (i_36 != t)))
                _fail(t);
              else
                i_36 = t;
              t = not_null(i_36);
              if(match_cons(t, sym_Path_1))
                {
                  j_36 = ATgetArgument(t, 0);
                  t = t_36(t);
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_36 = ATgetArgument(t, 0);
                      t = u_36(t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_36 = ATgetArgument(t, 0);
                          k_36 = ATgetArgument(t, 1);
                          t = v_36(t);
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
  ATerm a_37 = NULL;
  ATerm e_37 (ATerm t)
  {
    ATerm b_37 = NULL;
    t = not_null(a_37);
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_63, not_null(b_37));
    t = table_get_0_0(t);
    {
      ATerm f_16 (ATerm t)
      {
        t = eval_config_0_0(t);
        {
          ATerm n_63;
          n_63 = t;
          {
            ATerm c_37 = NULL;
            ATerm d_37 = NULL;
            ATerm f_37 (ATerm t)
            {
              t = not_null(d_37);
              if(((c_37 != NULL) && (c_37 != t)))
                _fail(t);
              else
                c_37 = t;
              t = not_null(d_37);
              return(t);
            }
            if(((d_37 != NULL) && (d_37 != t)))
              _fail(t);
            else
              d_37 = t;
            t = f_37(t);
            t = (ATerm) ATmakeAppl(sym__3, term_m_63, not_null(b_37), not_null(c_37));
            t = table_put_0_0(t);
          }
          t = n_63;
        }
        return(t);
      }
      t = try_1_0(f_16, t);
    }
    return(t);
  }
  if(((a_37 != NULL) && (a_37 != t)))
    _fail(t);
  else
    a_37 = t;
  t = e_37(t);
  return(t);
}
ATerm sc_announce_0_0 (ATerm t)
{
  t = if_verbose2_1_0(sc_version_0_0, t);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm o_63;
  o_63 = t;
  t = error_0_0(t);
  t = term_u_47;
  t = exit_0_0(t);
  t = o_63;
  return(t);
}
ATerm sc_version_0_0 (ATerm t)
{
  ATerm q_63 = t;
  int r_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_63;
      s_63 = t;
      {
        ATerm i_37 = NULL;
        ATerm j_37 = NULL;
        ATerm l_37 (ATerm t)
        {
          t = not_null(j_37);
          if(((i_37 != NULL) && (i_37 != t)))
            _fail(t);
          else
            i_37 = t;
          t = not_null(j_37);
          return(t);
        }
        t = term_t_63;
        t = get_config_0_0(t);
        if(((j_37 != NULL) && (j_37 != t)))
          _fail(t);
        else
          j_37 = t;
        t = l_37(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_64), term_o_64), term_n_64), term_g_64), term_f_64), term_z_63), term_v_63), not_null(i_37)), term_u_63));
        t = printnl_0_0(t);
      }
      t = s_63;
      ;
      LocalPopChoice(r_63);
    }
  else
    {
      t = q_63;
      {
        ATerm k_37 = NULL;
        if(((k_37 != NULL) && (k_37 != t)))
          _fail(t);
        else
          k_37 = t;
        t = not_null(k_37);
        if(match_string(t, "0.9.3"))
          {
            t = not_null(k_37);
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
  ATerm q_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_79(t);
      ;
      LocalPopChoice(a_65);
    }
  else
    {
      t = q_64;
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  ATerm v_37 (ATerm t)
  {
    ATerm r_37 = NULL,u_37 = NULL;
    t = not_null(p_37);
    if(((r_37 != NULL) && (r_37 != t)))
      _fail(t);
    else
      r_37 = t;
    t = not_null(q_37);
    if(((u_37 != NULL) && (u_37 != t)))
      _fail(t);
    else
      u_37 = t;
    t = not_null(o_37);
    t = SSL_copy(not_null(r_37), not_null(u_37));
    return(t);
  }
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  t = not_null(o_37);
  if(match_cons(t, sym__2))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      t = v_37(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm x_37 = NULL;
  ATerm z_37 (ATerm t)
  {
    ATerm y_37 = NULL;
    t = not_null(x_37);
    if(((y_37 != NULL) && (y_37 != t)))
      _fail(t);
    else
      y_37 = t;
    t = not_null(x_37);
    t = SSL_table_keys(not_null(y_37));
    return(t);
  }
  if(((x_37 != NULL) && (x_37 != t)))
    _fail(t);
  else
    x_37 = t;
  t = z_37(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_38 = NULL;
  ATerm j_38 (ATerm t)
  {
    ATerm e_38 = NULL;
    t = not_null(d_38);
    if(((e_38 != NULL) && (e_38 != t)))
      _fail(t);
    else
      e_38 = t;
    t = not_null(d_38);
    t = table_keys_0_0(t);
    {
      ATerm g_16 (ATerm t)
      {
        ATerm f_38 = NULL;
        ATerm k_38 (ATerm t)
        {
          ATerm g_38 = NULL,h_38 = NULL;
          t = not_null(f_38);
          if(((g_38 != NULL) && (g_38 != t)))
            _fail(t);
          else
            g_38 = t;
          t = not_null(f_38);
          {
            ATerm i_38 = NULL;
            ATerm l_38 (ATerm t)
            {
              t = not_null(i_38);
              if(((h_38 != NULL) && (h_38 != t)))
                _fail(t);
              else
                h_38 = t;
              t = not_null(i_38);
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), not_null(g_38));
            t = table_get_0_0(t);
            if(((i_38 != NULL) && (i_38 != t)))
              _fail(t);
            else
              i_38 = t;
            t = l_38(t);
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_38), not_null(h_38));
          }
          return(t);
        }
        if(((f_38 != NULL) && (f_38 != t)))
          _fail(t);
        else
          f_38 = t;
        t = k_38(t);
        return(t);
      }
      t = map_1_0(g_16, t);
    }
    return(t);
  }
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  t = j_38(t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm h_16 (ATerm t)
  {
    ATerm b_65;
    b_65 = t;
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
      t = term_n_33;
      t = get_config_0_0(t);
      if(((o_38 != NULL) && (o_38 != t)))
        _fail(t);
      else
        o_38 = t;
      t = p_38(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), term_h_55);
      t = geq_0_0(t);
    }
    t = b_65;
    t = m_100(t);
    return(t);
  }
  t = try_1_0(h_16, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm e_65;
  e_65 = t;
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
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    t = t_38(t);
    t = (ATerm) ATmakeAppl(sym__2, term_b_36, not_null(r_38));
    t = printnl_0_0(t);
  }
  t = e_65;
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm y_38 = NULL;
  ATerm h_39 (ATerm t)
  {
    ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
    t = not_null(y_38);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    t = not_null(y_38);
    {
      ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
      ATerm i_39 (ATerm t)
      {
        t = not_null(e_39);
        if(((a_39 != NULL) && (a_39 != t)))
          _fail(t);
        else
          a_39 = t;
        t = not_null(f_39);
        if(((b_39 != NULL) && (b_39 != t)))
          _fail(t);
        else
          b_39 = t;
        t = not_null(c_39);
        return(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, term_f_65, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_38)));
      t = table_get_0_0(t);
      if(((c_39 != NULL) && (c_39 != t)))
        _fail(t);
      else
        c_39 = t;
      t = not_null(c_39);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(d_39);
          if(match_cons(t, sym__2))
            {
              e_39 = ATgetArgument(t, 0);
              f_39 = ATgetArgument(t, 1);
              t = i_39(t);
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
      t = not_null(b_39);
    }
    return(t);
  }
  if(((y_38 != NULL) && (y_38 != t)))
    _fail(t);
  else
    y_38 = t;
  t = h_39(t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  ATerm w_39 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
    t = not_null(o_39);
    if(((q_39 != NULL) && (q_39 != t)))
      _fail(t);
    else
      q_39 = t;
    t = not_null(p_39);
    if(((r_39 != NULL) && (r_39 != t)))
      _fail(t);
    else
      r_39 = t;
    t = not_null(n_39);
    t = (ATerm) ATmakeAppl(sym__2, term_f_65, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_39)));
    t = table_get_0_0(t);
    {
      ATerm i_16 (ATerm t)
      {
        ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
        ATerm x_39 (ATerm t)
        {
          t = not_null(u_39);
          if(((r_39 != NULL) && (r_39 != t)))
            _fail(t);
          else
            r_39 = t;
          t = not_null(v_39);
          if(((s_39 != NULL) && (s_39 != t)))
            _fail(t);
          else
            s_39 = t;
          t = not_null(t_39);
          return(t);
        }
        if(((t_39 != NULL) && (t_39 != t)))
          _fail(t);
        else
          t_39 = t;
        t = not_null(t_39);
        if(match_cons(t, sym__2))
          {
            u_39 = ATgetArgument(t, 0);
            v_39 = ATgetArgument(t, 1);
            t = x_39(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = fetch_1_0(i_16, t);
    }
    t = not_null(s_39);
    return(t);
  }
  if(((n_39 != NULL) && (n_39 != t)))
    _fail(t);
  else
    n_39 = t;
  t = not_null(n_39);
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      t = w_39(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm o_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(p_65);
    }
  else
    {
      t = o_65;
      {
        ATerm q_65 = t;
        int c_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 (ATerm t)
            {
              t = filter_1_0(x_93, t);
              return(t);
            }
            t = Cons_2_0(x_93, j_16, t);
            ;
            LocalPopChoice(c_66);
          }
        else
          {
            t = q_65;
            {
              ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
              ATerm e_40 (ATerm t)
              {
                ATerm d_40 = NULL;
                t = not_null(c_40);
                if(((d_40 != NULL) && (d_40 != t)))
                  _fail(t);
                else
                  d_40 = t;
                t = not_null(d_40);
                t = filter_1_0(x_93, t);
                return(t);
              }
              if(((a_40 != NULL) && (a_40 != t)))
                _fail(t);
              else
                a_40 = t;
              t = not_null(a_40);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_40 = ATgetFirst((ATermList) t);
                  c_40 = (ATerm) ATgetNext((ATermList) t);
                  t = e_40(t);
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
  ATerm f_40 (ATerm t)
  {
    ATerm v_16 (ATerm t)
    {
      t = e_80(t);
      t = f_40(t);
      return(t);
    }
    t = try_1_0(v_16, t);
    return(t);
  }
  t = f_40(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm g_66;
  g_66 = t;
  {
    ATerm w_16 (ATerm t)
    {
      t = term_i_66;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm j_66 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_66;
          }
      }
      return(t);
    }
    t = repeat_1_0(w_16, t);
  }
  t = g_66;
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm u_66;
  u_66 = t;
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
    if(((i_40 != NULL) && (i_40 != t)))
      _fail(t);
    else
      i_40 = t;
    t = j_40(t);
    t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATempty, not_null(h_40)));
    t = printnl_0_0(t);
  }
  t = u_66;
  return(t);
}
ATerm say_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm w_66;
  w_66 = t;
  t = v_98(t);
  t = debug_0_0(t);
  t = w_66;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm x_66;
    x_66 = t;
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
      t = term_n_33;
      t = get_config_0_0(t);
      if(((m_40 != NULL) && (m_40 != t)))
        _fail(t);
      else
        m_40 = t;
      t = n_40(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), term_y_52);
      t = geq_0_0(t);
    }
    t = x_66;
    t = l_100(t);
    return(t);
  }
  t = try_1_0(x_16, t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  ATerm v_40 (ATerm t)
  {
    ATerm t_40 = NULL,u_40 = NULL;
    t = not_null(r_40);
    if(((t_40 != NULL) && (t_40 != t)))
      _fail(t);
    else
      t_40 = t;
    t = not_null(s_40);
    if(((u_40 != NULL) && (u_40 != t)))
      _fail(t);
    else
      u_40 = t;
    t = not_null(q_40);
    {
      ATerm e_67;
      e_67 = t;
      {
        ATerm f_67 = t;
        int m_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(not_null(t_40), not_null(u_40));
            ;
            LocalPopChoice(m_67);
          }
        else
          {
            t = f_67;
            t = SSL_gtr(not_null(t_40), not_null(u_40));
          }
      }
      t = e_67;
    }
    return(t);
  }
  if(((q_40 != NULL) && (q_40 != t)))
    _fail(t);
  else
    q_40 = t;
  t = not_null(q_40);
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
      t = v_40(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_40 = NULL;
  ATerm n_67 = t;
  int r_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
      ATerm c_41 (ATerm t)
      {
        t = not_null(a_41);
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = not_null(b_41);
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = not_null(z_40);
        return(t);
      }
      if(((z_40 != NULL) && (z_40 != t)))
        _fail(t);
      else
        z_40 = t;
      t = not_null(z_40);
      if(match_cons(t, sym__2))
        {
          a_41 = ATgetArgument(t, 0);
          b_41 = ATgetArgument(t, 1);
          t = c_41(t);
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(r_67);
    }
  else
    {
      t = n_67;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm y_16 (ATerm t)
  {
    ATerm s_67;
    s_67 = t;
    {
      ATerm e_41 = NULL;
      ATerm f_41 = NULL;
      ATerm g_41 (ATerm t)
      {
        t = not_null(f_41);
        if(((e_41 != NULL) && (e_41 != t)))
          _fail(t);
        else
          e_41 = t;
        t = not_null(f_41);
        return(t);
      }
      t = term_n_33;
      t = get_config_0_0(t);
      if(((f_41 != NULL) && (f_41 != t)))
        _fail(t);
      else
        f_41 = t;
      t = g_41(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_41), term_b_50);
      t = geq_0_0(t);
    }
    t = s_67;
    t = n_100(t);
    return(t);
  }
  t = try_1_0(y_16, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
  ATerm n_41 (ATerm t)
  {
    ATerm m_41 = NULL;
    t = not_null(k_41);
    if(((m_41 != NULL) && (m_41 != t)))
      _fail(t);
    else
      m_41 = t;
    t = not_null(l_41);
    if(((m_41 != NULL) && (m_41 != t)))
      _fail(t);
    else
      m_41 = t;
    t = not_null(j_41);
    return(t);
  }
  if(((j_41 != NULL) && (j_41 != t)))
    _fail(t);
  else
    j_41 = t;
  t = not_null(j_41);
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
      t = n_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  ATerm y_41 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL;
    t = not_null(s_41);
    if(((v_41 != NULL) && (v_41 != t)))
      _fail(t);
    else
      v_41 = t;
    t = not_null(t_41);
    if(((u_41 != NULL) && (u_41 != t)))
      _fail(t);
    else
      u_41 = t;
    t = not_null(r_41);
    t = b_91(t);
    {
      ATerm j_17 (ATerm t)
      {
        ATerm w_41 = NULL;
        ATerm z_41 (ATerm t)
        {
          ATerm x_41 = NULL;
          t = not_null(w_41);
          if(((x_41 != NULL) && (x_41 != t)))
            _fail(t);
          else
            x_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_41), not_null(x_41));
          t = a_91(t);
          return(t);
        }
        if(((w_41 != NULL) && (w_41 != t)))
          _fail(t);
        else
          w_41 = t;
        t = z_41(t);
        return(t);
      }
      t = fetch_1_0(j_17, t);
    }
    t = not_null(u_41);
    return(t);
  }
  if(((r_41 != NULL) && (r_41 != t)))
    _fail(t);
  else
    r_41 = t;
  t = not_null(r_41);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_41 = ATgetFirst((ATermList) t);
      t_41 = (ATerm) ATgetNext((ATermList) t);
      t = y_41(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  ATerm h_42 (ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL;
    t = not_null(d_42);
    if(((g_42 != NULL) && (g_42 != t)))
      _fail(t);
    else
      g_42 = t;
    t = not_null(e_42);
    if(((f_42 != NULL) && (f_42 != t)))
      _fail(t);
    else
      f_42 = t;
    t = not_null(g_42);
    {
      ATerm i_42 (ATerm t)
      {
        ATerm b_68 = t;
        int c_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            t = not_null(f_42);
            ;
            LocalPopChoice(c_68);
          }
        else
          {
            t = b_68;
            {
              ATerm j_68 = t;
              int k_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_17 (ATerm t)
                  {
                    t = not_null(f_42);
                    return(t);
                  }
                  t = HdMember_p__2_0(w_90, k_17, t);
                  t = i_42(t);
                  ;
                  LocalPopChoice(k_68);
                }
              else
                {
                  t = j_68;
                  t = Cons_2_0(_id, i_42, t);
                }
            }
          }
        return(t);
      }
      t = i_42(t);
    }
    return(t);
  }
  if(((c_42 != NULL) && (c_42 != t)))
    _fail(t);
  else
    c_42 = t;
  t = not_null(c_42);
  if(match_cons(t, sym__2))
    {
      d_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
      t = h_42(t);
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
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  ATerm c_43 (ATerm t)
  {
    ATerm r_42 = NULL,v_42 = NULL,x_42 = NULL;
    t = not_null(o_42);
    if(((r_42 != NULL) && (r_42 != t)))
      _fail(t);
    else
      r_42 = t;
    t = not_null(p_42);
    if(((v_42 != NULL) && (v_42 != t)))
      _fail(t);
    else
      v_42 = t;
    t = not_null(q_42);
    if(((x_42 != NULL) && (x_42 != t)))
      _fail(t);
    else
      x_42 = t;
    t = not_null(n_42);
    {
      ATerm q_68;
      q_68 = t;
      {
        ATerm y_42 = NULL;
        ATerm z_42 = NULL,b_43 = NULL;
        ATerm e_43 (ATerm t)
        {
          t = not_null(b_43);
          if(((y_42 != NULL) && (y_42 != t)))
            _fail(t);
          else
            y_42 = t;
          t = not_null(b_43);
          return(t);
        }
        ATerm a_43 = NULL;
        ATerm d_43 (ATerm t)
        {
          t = not_null(a_43);
          if(((z_42 != NULL) && (z_42 != t)))
            _fail(t);
          else
            z_42 = t;
          t = not_null(a_43);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_42), not_null(v_42));
        {
          ATerm s_68 = t;
          int t_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_0_0(t);
              ;
              LocalPopChoice(t_68);
            }
          else
            {
              t = s_68;
              t = (ATerm) ATempty;
            }
          if(((a_43 != NULL) && (a_43 != t)))
            _fail(t);
          else
            a_43 = t;
          t = d_43(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_42), not_null(x_42));
        t = union_0_0(t);
        if(((b_43 != NULL) && (b_43 != t)))
          _fail(t);
        else
          b_43 = t;
        t = e_43(t);
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_42), not_null(v_42), not_null(y_42));
        t = set_0_0(t);
      }
      t = q_68;
    }
    return(t);
  }
  if(((n_42 != NULL) && (n_42 != t)))
    _fail(t);
  else
    n_42 = t;
  t = not_null(n_42);
  if(match_cons(t, sym__3))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      q_42 = ATgetArgument(t, 2);
      t = c_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
  ATerm t_43 (ATerm t)
  {
    ATerm m_43 = NULL,n_43 = NULL;
    t = not_null(k_43);
    if(((n_43 != NULL) && (n_43 != t)))
      _fail(t);
    else
      n_43 = t;
    t = not_null(l_43);
    if(((m_43 != NULL) && (m_43 != t)))
      _fail(t);
    else
      m_43 = t;
    t = not_null(m_43);
    {
      ATerm l_17 (ATerm t)
      {
        ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
        ATerm u_43 (ATerm t)
        {
          ATerm r_43 = NULL,s_43 = NULL;
          t = not_null(p_43);
          if(((r_43 != NULL) && (r_43 != t)))
            _fail(t);
          else
            r_43 = t;
          t = not_null(q_43);
          if(((s_43 != NULL) && (s_43 != t)))
            _fail(t);
          else
            s_43 = t;
          t = (ATerm) ATmakeAppl(sym__3, not_null(n_43), not_null(r_43), not_null(s_43));
          t = l_105(t);
          return(t);
        }
        if(((o_43 != NULL) && (o_43 != t)))
          _fail(t);
        else
          o_43 = t;
        t = not_null(o_43);
        if(match_cons(t, sym__2))
          {
            p_43 = ATgetArgument(t, 0);
            q_43 = ATgetArgument(t, 1);
            t = u_43(t);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = map_1_0(l_17, t);
    }
    return(t);
  }
  if(((j_43 != NULL) && (j_43 != t)))
    _fail(t);
  else
    j_43 = t;
  t = not_null(j_43);
  if(match_cons(t, sym__2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
      t = t_43(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm w_43 = NULL;
  ATerm x_43 = NULL;
  ATerm y_43 (ATerm t)
  {
    t = not_null(x_43);
    if(((w_43 != NULL) && (w_43 != t)))
      _fail(t);
    else
      w_43 = t;
    t = not_null(x_43);
    return(t);
  }
  if(((x_43 != NULL) && (x_43 != t)))
    _fail(t);
  else
    x_43 = t;
  t = y_43(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_43), (ATerm) ATinsert(ATempty, term_u_68));
  t = access_0_0(t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  ATerm i_44 (ATerm t)
  {
    ATerm e_44 = NULL;
    t = not_null(c_44);
    if(((e_44 != NULL) && (e_44 != t)))
      _fail(t);
    else
      e_44 = t;
    t = not_null(d_44);
    t = SSL_fclose(not_null(e_44));
    return(t);
  }
  ATerm j_44 (ATerm t)
  {
    ATerm h_44 = NULL;
    t = not_null(d_44);
    if(((h_44 != NULL) && (h_44 != t)))
      _fail(t);
    else
      h_44 = t;
    t = not_null(d_44);
    t = SSL_fclose(not_null(h_44));
    return(t);
  }
  if(((d_44 != NULL) && (d_44 != t)))
    _fail(t);
  else
    d_44 = t;
  t = not_null(d_44);
  if(match_cons(t, sym_Stream_1))
    {
      c_44 = ATgetArgument(t, 0);
      {
        ATerm v_68 = t;
        int w_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_44(t);
            ;
            LocalPopChoice(w_68);
          }
        else
          {
            t = v_68;
            t = j_44(t);
          }
      }
    }
  else
    {
      t = j_44(t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm m_44 = NULL,p_44 = NULL;
  ATerm r_44 (ATerm t)
  {
    ATerm q_44 = NULL;
    t = not_null(p_44);
    if(((q_44 != NULL) && (q_44 != t)))
      _fail(t);
    else
      q_44 = t;
    t = not_null(m_44);
    t = SSL_read_term_from_stream(not_null(q_44));
    return(t);
  }
  if(((m_44 != NULL) && (m_44 != t)))
    _fail(t);
  else
    m_44 = t;
  t = not_null(m_44);
  if(match_cons(t, sym_Stream_1))
    {
      p_44 = ATgetArgument(t, 0);
      t = r_44(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,b_45 = NULL;
  ATerm g_45 (ATerm t)
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
    t = not_null(y_44);
    if(((c_45 != NULL) && (c_45 != t)))
      _fail(t);
    else
      c_45 = t;
    t = not_null(b_45);
    if(((d_45 != NULL) && (d_45 != t)))
      _fail(t);
    else
      d_45 = t;
    t = not_null(x_44);
    t = SSL_fopen(not_null(c_45), not_null(d_45));
    {
      ATerm f_45 = NULL;
      ATerm h_45 (ATerm t)
      {
        t = not_null(f_45);
        if(((e_45 != NULL) && (e_45 != t)))
          _fail(t);
        else
          e_45 = t;
        t = not_null(f_45);
        return(t);
      }
      if(((f_45 != NULL) && (f_45 != t)))
        _fail(t);
      else
        f_45 = t;
      t = h_45(t);
      t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_45));
    }
    return(t);
  }
  if(((x_44 != NULL) && (x_44 != t)))
    _fail(t);
  else
    x_44 = t;
  t = not_null(x_44);
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
      t = g_45(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm l_45 (ATerm t)
  {
    ATerm k_45 = NULL;
    t = not_null(j_45);
    if(((k_45 != NULL) && (k_45 != t)))
      _fail(t);
    else
      k_45 = t;
    t = not_null(j_45);
    t = SSL_is_string(not_null(k_45));
    return(t);
  }
  if(((j_45 != NULL) && (j_45 != t)))
    _fail(t);
  else
    j_45 = t;
  t = l_45(t);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_stdin_stream();
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
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_45 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  ATerm q_46 (ATerm t)
  {
    t = not_null(p_46);
    t = stderr_stream_0_0(t);
    return(t);
  }
  ATerm r_46 (ATerm t)
  {
    t = not_null(p_46);
    t = stdout_stream_0_0(t);
    return(t);
  }
  ATerm s_46 (ATerm t)
  {
    t = not_null(p_46);
    t = stdin_stream_0_0(t);
    return(t);
  }
  if(((p_46 != NULL) && (p_46 != t)))
    _fail(t);
  else
    p_46 = t;
  t = not_null(p_46);
  if(match_cons(t, sym_stderr_0))
    {
      t = q_46(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_46(t);
        }
      else
        {
          if(match_cons(t, sym_stdin_0))
            {
              t = s_46(t);
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
  ATerm d_47 = NULL;
  ATerm o_47 (ATerm t)
  {
    ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
    t = not_null(d_47);
    if(((e_47 != NULL) && (e_47 != t)))
      _fail(t);
    else
      e_47 = t;
    t = not_null(d_47);
    {
      ATerm h_47 = NULL;
      ATerm p_47 (ATerm t)
      {
        ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
        ATerm q_47 (ATerm t)
        {
          t = not_null(m_47);
          if(((g_47 != NULL) && (g_47 != t)))
            _fail(t);
          else
            g_47 = t;
          t = not_null(n_47);
          if(((f_47 != NULL) && (f_47 != t)))
            _fail(t);
          else
            f_47 = t;
          t = not_null(j_47);
          return(t);
        }
        t = not_null(h_47);
        if(((i_47 != NULL) && (i_47 != t)))
          _fail(t);
        else
          i_47 = t;
        t = not_null(h_47);
        t = SSL_explode_term(not_null(i_47));
        if(((j_47 != NULL) && (j_47 != t)))
          _fail(t);
        else
          j_47 = t;
        t = not_null(j_47);
        if(match_cons(t, sym__2))
          {
            k_47 = ATgetArgument(t, 0);
            l_47 = ATgetArgument(t, 1);
            t = not_null(k_47);
            if(match_string(t, ""))
              {
                t = not_null(l_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_47 = ATgetFirst((ATermList) t);
                    n_47 = (ATerm) ATgetNext((ATermList) t);
                    t = q_47(t);
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
      t = not_null(e_47);
      if(((h_47 != NULL) && (h_47 != t)))
        _fail(t);
      else
        h_47 = t;
      t = p_47(t);
      t = not_null(g_47);
    }
    return(t);
  }
  if(((d_47 != NULL) && (d_47 != t)))
    _fail(t);
  else
    d_47 = t;
  t = o_47(t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,d_48 = NULL;
  ATerm l_48 (ATerm t)
  {
    t = not_null(x_47);
    {
      ATerm i_69 = t;
      int j_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Fst_0_0(t);
          t = stdio_stream_0_0(t);
          ;
          LocalPopChoice(j_69);
        }
      else
        {
          t = i_69;
          {
            ATerm k_69 = t;
            int l_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 (ATerm t)
                {
                  ATerm e_48 = NULL,f_48 = NULL;
                  ATerm m_48 (ATerm t)
                  {
                    ATerm g_48 = NULL;
                    t = not_null(f_48);
                    if(((g_48 != NULL) && (g_48 != t)))
                      _fail(t);
                    else
                      g_48 = t;
                    t = not_null(g_48);
                    return(t);
                  }
                  if(((e_48 != NULL) && (e_48 != t)))
                    _fail(t);
                  else
                    e_48 = t;
                  t = not_null(e_48);
                  if(match_cons(t, sym_Path_1))
                    {
                      f_48 = ATgetArgument(t, 0);
                      t = m_48(t);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = _2_0(m_17, _id, t);
                t = fopen_0_0(t);
                ;
                LocalPopChoice(l_69);
              }
            else
              {
                t = k_69;
                t = _2_0(is_string_0_0, _id, t);
                t = fopen_0_0(t);
              }
          }
        }
    }
    return(t);
  }
  if(((x_47 != NULL) && (x_47 != t)))
    _fail(t);
  else
    x_47 = t;
  t = not_null(x_47);
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
      t = l_48(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_48 = NULL;
  ATerm w_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_48 = NULL;
      ATerm s_48 = NULL;
      ATerm v_48 (ATerm t)
      {
        t = not_null(s_48);
        if(((r_48 != NULL) && (r_48 != t)))
          _fail(t);
        else
          r_48 = t;
        t = not_null(s_48);
        return(t);
      }
      if(((s_48 != NULL) && (s_48 != t)))
        _fail(t);
      else
        s_48 = t;
      t = v_48(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), term_e_70);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_69);
    }
  else
    {
      t = w_69;
      {
        ATerm z_17 (ATerm t)
        {
          t = term_f_70;
          return(t);
        }
        t = debug_1_0(z_17, t);
        _fail(t);
      }
    }
  {
    ATerm g_70;
    g_70 = t;
    {
      ATerm u_48 = NULL;
      ATerm w_48 (ATerm t)
      {
        t = not_null(u_48);
        if(((t_48 != NULL) && (t_48 != t)))
          _fail(t);
        else
          t_48 = t;
        t = not_null(u_48);
        return(t);
      }
      t = read_from_stream_0_0(t);
      if(((u_48 != NULL) && (u_48 != t)))
        _fail(t);
      else
        u_48 = t;
      t = w_48(t);
    }
    t = g_70;
    t = fclose_0_0(t);
    t = not_null(t_48);
  }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  ATerm e_49 (ATerm t)
  {
    ATerm c_49 = NULL,d_49 = NULL;
    t = not_null(a_49);
    if(((c_49 != NULL) && (c_49 != t)))
      _fail(t);
    else
      c_49 = t;
    t = not_null(b_49);
    if(((d_49 != NULL) && (d_49 != t)))
      _fail(t);
    else
      d_49 = t;
    t = not_null(z_48);
    t = SSL_access(not_null(c_49), not_null(d_49));
    return(t);
  }
  if(((z_48 != NULL) && (z_48 != t)))
    _fail(t);
  else
    z_48 = t;
  t = not_null(z_48);
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
      t = e_49(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm g_49 = NULL;
  ATerm h_49 = NULL;
  ATerm i_49 (ATerm t)
  {
    t = not_null(h_49);
    if(((g_49 != NULL) && (g_49 != t)))
      _fail(t);
    else
      g_49 = t;
    t = not_null(h_49);
    return(t);
  }
  if(((h_49 != NULL) && (h_49 != t)))
    _fail(t);
  else
    h_49 = t;
  t = i_49(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_49), (ATerm) ATinsert(ATempty, term_h_70));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_70 = t;
  int j_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(j_70);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_70;
      {
        ATerm f_71 = t;
        int k_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_71 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_71;
              }
            {
              ATerm a_18 (ATerm t)
              {
                t = term_m_71;
                return(t);
              }
              t = debug_1_0(a_18, t);
            }
            ;
            LocalPopChoice(k_71);
          }
        else
          {
            t = f_71;
            {
              ATerm h_18 (ATerm t)
              {
                t = term_n_71;
                return(t);
              }
              t = debug_1_0(h_18, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_49 = NULL;
  ATerm p_49 (ATerm t)
  {
    ATerm m_49 = NULL,n_49 = NULL;
    t = not_null(l_49);
    if(((m_49 != NULL) && (m_49 != t)))
      _fail(t);
    else
      m_49 = t;
    t = not_null(l_49);
    {
      ATerm l_18 (ATerm t)
      {
        ATerm m_18 (ATerm t)
        {
          t = term_o_71;
          return(t);
        }
        t = debug_1_0(m_18, t);
        return(t);
      }
      t = if_verbose5_1_0(l_18, t);
      {
        ATerm p_71 = t;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_65, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_49)));
            t = table_get_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_71;
          }
        {
          ATerm j_72;
          j_72 = t;
          t = (ATerm) ATmakeAppl(sym__3, term_f_65, term_n_72, (ATerm) ATinsert(ATempty, not_null(m_49)));
          t = table_put_0_0(t);
          t = j_72;
          {
            ATerm t_18 (ATerm t)
            {
              ATerm x_18 (ATerm t)
              {
                t = term_q_72;
                return(t);
              }
              t = debug_1_0(x_18, t);
              return(t);
            }
            t = if_verbose4_1_0(t_18, t);
            t = read_repository_file_0_0(t);
            {
              ATerm y_18 (ATerm t)
              {
                ATerm z_18 (ATerm t)
                {
                  t = term_r_72;
                  return(t);
                }
                t = say_1_0(z_18, t);
                return(t);
              }
              t = if_verbose6_1_0(y_18, t);
              {
                ATerm o_49 = NULL;
                ATerm q_49 (ATerm t)
                {
                  t = not_null(o_49);
                  if(((n_49 != NULL) && (n_49 != t)))
                    _fail(t);
                  else
                    n_49 = t;
                  t = not_null(o_49);
                  return(t);
                }
                if(((o_49 != NULL) && (o_49 != t)))
                  _fail(t);
                else
                  o_49 = t;
                t = q_49(t);
                t = (ATerm) ATmakeAppl(sym__2, term_f_65, not_null(n_49));
                t = table_putlist_1_0(table_append_0_0, t);
                {
                  ATerm a_19 (ATerm t)
                  {
                    ATerm b_19 (ATerm t)
                    {
                      t = term_s_72;
                      return(t);
                    }
                    t = say_1_0(b_19, t);
                    return(t);
                  }
                  t = if_verbose6_1_0(a_19, t);
                  t = (ATerm) ATmakeAppl(sym__3, term_f_65, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_49)), (ATerm) ATempty);
                  t = table_put_0_0(t);
                  {
                    ATerm s_19 (ATerm t)
                    {
                      ATerm w_19 (ATerm t)
                      {
                        t = term_r_72;
                        return(t);
                      }
                      t = say_1_0(w_19, t);
                      return(t);
                    }
                    t = if_verbose4_1_0(s_19, t);
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
  if(((l_49 != NULL) && (l_49 != t)))
    _fail(t);
  else
    l_49 = t;
  t = p_49(t);
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm u_49 (ATerm t)
  {
    ATerm t_49 = NULL;
    t = not_null(s_49);
    if(((t_49 != NULL) && (t_49 != t)))
      _fail(t);
    else
      t_49 = t;
    t = not_null(s_49);
    t = SSL_getenv(not_null(t_49));
    return(t);
  }
  if(((s_49 != NULL) && (s_49 != t)))
    _fail(t);
  else
    s_49 = t;
  t = u_49(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_72;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_72);
    }
  else
    {
      t = t_72;
      {
        ATerm w_72 = t;
        int x_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_72;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(x_72);
          }
        else
          {
            t = w_72;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_19 (ATerm t)
  {
    ATerm y_19 (ATerm t)
    {
      t = term_z_72;
      return(t);
    }
    t = debug_1_0(y_19, t);
    return(t);
  }
  t = if_verbose5_1_0(x_19, t);
  {
    ATerm a_73;
    a_73 = t;
    {
      ATerm b_73 = t;
      int c_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_74;
          t = table_get_0_0(t);
          ;
          LocalPopChoice(c_73);
        }
      else
        {
          t = b_73;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t = xtc_import_0_0(t);
        }
    }
    t = a_73;
    {
      ATerm h_20 (ATerm t)
      {
        ATerm i_20 (ATerm t)
        {
          t = term_u_74;
          return(t);
        }
        t = debug_1_0(i_20, t);
        return(t);
      }
      t = if_verbose5_1_0(h_20, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_74 = t;
  int w_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 (ATerm t)
      {
        ATerm k_20 (ATerm t)
        {
          t = term_g_75;
          return(t);
        }
        t = debug_1_0(k_20, t);
        return(t);
      }
      t = if_verbose5_1_0(j_20, t);
      t = xtc_load_0_0(t);
      {
        ATerm h_75 = t;
        int i_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(i_75);
          }
        else
          {
            t = h_75;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm v_20 (ATerm t)
          {
            ATerm z_20 (ATerm t)
            {
              t = term_g_75;
              return(t);
            }
            t = debug_1_0(z_20, t);
            return(t);
          }
          t = if_verbose5_1_0(v_20, t);
        }
      }
      ;
      LocalPopChoice(w_74);
    }
  else
    {
      t = v_74;
      {
        ATerm w_49 = NULL;
        ATerm x_49 = NULL;
        ATerm y_49 (ATerm t)
        {
          t = not_null(x_49);
          if(((w_49 != NULL) && (w_49 != t)))
            _fail(t);
          else
            w_49 = t;
          t = not_null(x_49);
          return(t);
        }
        if(((x_49 != NULL) && (x_49 != t)))
          _fail(t);
        else
          x_49 = t;
        t = y_49(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_75), not_null(w_49)), term_j_75);
        t = error_0_0(t);
        {
          ATerm a_21 (ATerm t)
          {
            t = term_f_65;
            t = table_getlist_0_0(t);
            {
              ATerm b_21 (ATerm t)
              {
                t = term_l_75;
                return(t);
              }
              t = debug_1_0(b_21, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(a_21, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  ATerm m_50 (ATerm t)
  {
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
    t = not_null(e_50);
    if(((g_50 != NULL) && (g_50 != t)))
      _fail(t);
    else
      g_50 = t;
    t = not_null(f_50);
    if(((h_50 != NULL) && (h_50 != t)))
      _fail(t);
    else
      h_50 = t;
    t = not_null(d_50);
    {
      ATerm j_50 = NULL,l_50 = NULL;
      ATerm o_50 (ATerm t)
      {
        t = not_null(l_50);
        if(((i_50 != NULL) && (i_50 != t)))
          _fail(t);
        else
          i_50 = t;
        t = not_null(l_50);
        return(t);
      }
      ATerm k_50 = NULL;
      ATerm n_50 (ATerm t)
      {
        t = not_null(k_50);
        if(((j_50 != NULL) && (j_50 != t)))
          _fail(t);
        else
          j_50 = t;
        t = not_null(k_50);
        return(t);
      }
      t = not_null(g_50);
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
        if(((k_50 != NULL) && (k_50 != t)))
          _fail(t);
        else
          k_50 = t;
        t = n_50(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_50), not_null(j_50));
      t = conc_0_0(t);
      if(((l_50 != NULL) && (l_50 != t)))
        _fail(t);
      else
        l_50 = t;
      t = o_50(t);
      t = (ATerm) ATmakeAppl(sym__3, term_m_63, not_null(g_50), not_null(i_50));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((d_50 != NULL) && (d_50 != t)))
    _fail(t);
  else
    d_50 = t;
  t = not_null(d_50);
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
      t = m_50(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  ATerm e_51 (ATerm t)
  {
    t = not_null(u_50);
    t = register_usage_1_0(n_0, t);
    return(t);
  }
  ATerm j_51 (ATerm t)
  {
    ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
    t = not_null(v_50);
    if(((z_50 != NULL) && (z_50 != t)))
      _fail(t);
    else
      z_50 = t;
    t = not_null(x_50);
    if(((a_51 != NULL) && (a_51 != t)))
      _fail(t);
    else
      a_51 = t;
    t = not_null(y_50);
    if(((b_51 != NULL) && (b_51 != t)))
      _fail(t);
    else
      b_51 = t;
    t = not_null(u_50);
    {
      ATerm o_75;
      o_75 = t;
      t = not_null(z_50);
      t = k_0(t);
      t = o_75;
      {
        ATerm d_51 = NULL;
        ATerm k_51 (ATerm t)
        {
          t = not_null(d_51);
          if(((c_51 != NULL) && (c_51 != t)))
            _fail(t);
          else
            c_51 = t;
          t = not_null(d_51);
          return(t);
        }
        t = not_null(a_51);
        t = m_0(t);
        if(((d_51 != NULL) && (d_51 != t)))
          _fail(t);
        else
          d_51 = t;
        t = k_51(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(b_51)), not_null(c_51));
      }
    }
    return(t);
  }
  if(((u_50 != NULL) && (u_50 != t)))
    _fail(t);
  else
    u_50 = t;
  t = not_null(u_50);
  if(match_string(t, "register-usage-info"))
    {
      t = e_51(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          w_50 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(w_50);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_50 = ATgetFirst((ATermList) t);
              y_50 = (ATerm) ATgetNext((ATermList) t);
              t = j_51(t);
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
  ATerm m_51 = NULL;
  ATerm r_51 (ATerm t)
  {
    ATerm q_51 = NULL;
    t = not_null(m_51);
    if(((q_51 != NULL) && (q_51 != t)))
      _fail(t);
    else
      q_51 = t;
    t = not_null(m_51);
    t = SSL_string_to_int(not_null(q_51));
    return(t);
  }
  if(((m_51 != NULL) && (m_51 != t)))
    _fail(t);
  else
    m_51 = t;
  t = r_51(t);
  return(t);
}
ATerm table_remove_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  ATerm p_75;
  p_75 = t;
  {
    ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL;
    ATerm z_51 (ATerm t)
    {
      t = not_null(x_51);
      if(((u_51 != NULL) && (u_51 != t)))
        _fail(t);
      else
        u_51 = t;
      t = not_null(y_51);
      if(((v_51 != NULL) && (v_51 != t)))
        _fail(t);
      else
        v_51 = t;
      t = not_null(w_51);
      t = SSL_table_remove(not_null(u_51), not_null(v_51));
      return(t);
    }
    if(((w_51 != NULL) && (w_51 != t)))
      _fail(t);
    else
      w_51 = t;
    t = not_null(w_51);
    if(match_cons(t, sym__2))
      {
        x_51 = ATgetArgument(t, 0);
        y_51 = ATgetArgument(t, 1);
        t = z_51(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = p_75;
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  ATerm h_52 (ATerm t)
  {
    ATerm f_52 = NULL,g_52 = NULL;
    t = not_null(d_52);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    t = not_null(e_52);
    if(((g_52 != NULL) && (g_52 != t)))
      _fail(t);
    else
      g_52 = t;
    t = not_null(c_52);
    {
      ATerm q_75 = t;
      int r_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(f_52);
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_m_63, not_null(f_52));
          t = table_remove_0_0(t);
          ;
          LocalPopChoice(r_75);
        }
      else
        {
          t = q_75;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_52), not_null(g_52));
          t = set_config_0_0(t);
        }
    }
    return(t);
  }
  if(((c_52 != NULL) && (c_52 != t)))
    _fail(t);
  else
    c_52 = t;
  t = not_null(c_52);
  if(match_cons(t, sym__2))
    {
      d_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
      t = h_52(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,q_52 = NULL;
  ATerm k_53 (ATerm t)
  {
    ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
    t = not_null(n_52);
    if(((c_53 != NULL) && (c_53 != t)))
      _fail(t);
    else
      c_53 = t;
    t = not_null(q_52);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = not_null(m_52);
    {
      ATerm h_53 = NULL,j_53 = NULL;
      ATerm p_53 (ATerm t)
      {
        t = not_null(j_53);
        if(((e_53 != NULL) && (e_53 != t)))
          _fail(t);
        else
          e_53 = t;
        t = not_null(j_53);
        return(t);
      }
      ATerm i_53 = NULL;
      ATerm o_53 (ATerm t)
      {
        t = not_null(i_53);
        if(((h_53 != NULL) && (h_53 != t)))
          _fail(t);
        else
          h_53 = t;
        t = not_null(i_53);
        return(t);
      }
      t = not_null(c_53);
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
        if(((i_53 != NULL) && (i_53 != t)))
          _fail(t);
        else
          i_53 = t;
        t = o_53(t);
      }
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_53), not_null(d_53));
      t = conc_0_0(t);
      if(((j_53 != NULL) && (j_53 != t)))
        _fail(t);
      else
        j_53 = t;
      t = p_53(t);
      t = (ATerm) ATmakeAppl(sym__3, term_m_63, not_null(c_53), not_null(e_53));
      t = table_put_0_0(t);
    }
    return(t);
  }
  if(((m_52 != NULL) && (m_52 != t)))
    _fail(t);
  else
    m_52 = t;
  t = not_null(m_52);
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
      t = k_53(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm u_75 = t;
  int v_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 (ATerm t)
      {
        ATerm r_55 = NULL;
        if(((r_55 != NULL) && (r_55 != t)))
          _fail(t);
        else
          r_55 = t;
        t = not_null(r_55);
        if(match_string(t, "-i"))
          {
            t = not_null(r_55);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_21 (ATerm t)
      {
        ATerm s_55 = NULL;
        ATerm t_55 = NULL;
        ATerm o_58 (ATerm t)
        {
          t = not_null(t_55);
          if(((s_55 != NULL) && (s_55 != t)))
            _fail(t);
          else
            s_55 = t;
          t = not_null(t_55);
          return(t);
        }
        if(((t_55 != NULL) && (t_55 != t)))
          _fail(t);
        else
          t_55 = t;
        t = o_58(t);
        t = (ATerm) ATmakeAppl(sym__2, term_i_58, not_null(s_55));
        t = set_config_0_0(t);
        t = term_a_45;
        return(t);
      }
      ATerm m_21 (ATerm t)
      {
        t = term_w_75;
        return(t);
      }
      t = ArgOption_3_0(c_21, l_21, m_21, t);
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
            ATerm n_21 (ATerm t)
            {
              ATerm u_55 = NULL;
              if(((u_55 != NULL) && (u_55 != t)))
                _fail(t);
              else
                u_55 = t;
              t = not_null(u_55);
              if(match_string(t, "-o"))
                {
                  t = not_null(u_55);
                }
              else
                {
                  if(match_string(t, "--output"))
                    {
                      t = not_null(u_55);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_21 (ATerm t)
            {
              ATerm v_55 = NULL;
              ATerm w_55 = NULL;
              ATerm p_58 (ATerm t)
              {
                t = not_null(w_55);
                if(((v_55 != NULL) && (v_55 != t)))
                  _fail(t);
                else
                  v_55 = t;
                t = not_null(w_55);
                return(t);
              }
              if(((w_55 != NULL) && (w_55 != t)))
                _fail(t);
              else
                w_55 = t;
              t = p_58(t);
              t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(v_55));
              t = set_config_0_0(t);
              t = term_a_45;
              return(t);
            }
            ATerm p_21 (ATerm t)
            {
              t = term_z_75;
              return(t);
            }
            t = ArgOption_3_0(n_21, o_21, p_21, t);
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
                  ATerm b_22 (ATerm t)
                  {
                    ATerm x_55 = NULL;
                    if(((x_55 != NULL) && (x_55 != t)))
                      _fail(t);
                    else
                      x_55 = t;
                    t = not_null(x_55);
                    if(match_string(t, "-I"))
                      {
                        t = not_null(x_55);
                      }
                    else
                      {
                        if(match_string(t, "--Include"))
                          {
                            t = not_null(x_55);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_22 (ATerm t)
                  {
                    ATerm y_55 = NULL;
                    ATerm z_55 = NULL;
                    ATerm q_58 (ATerm t)
                    {
                      t = not_null(z_55);
                      if(((y_55 != NULL) && (y_55 != t)))
                        _fail(t);
                      else
                        y_55 = t;
                      t = not_null(z_55);
                      return(t);
                    }
                    if(((z_55 != NULL) && (z_55 != t)))
                      _fail(t);
                    else
                      z_55 = t;
                    t = q_58(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_t_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_55)), term_t_59));
                    t = extend_config_0_0(t);
                    t = term_a_45;
                    return(t);
                  }
                  ATerm j_22 (ATerm t)
                  {
                    t = term_c_76;
                    return(t);
                  }
                  t = ArgOption_3_0(b_22, c_22, j_22, t);
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
                        ATerm k_22 (ATerm t)
                        {
                          ATerm i_56 = NULL;
                          if(((i_56 != NULL) && (i_56 != t)))
                            _fail(t);
                          else
                            i_56 = t;
                          t = not_null(i_56);
                          if(match_string(t, "--main"))
                            {
                              t = not_null(i_56);
                            }
                          else
                            {
                              if(match_string(t, "-m"))
                                {
                                  t = not_null(i_56);
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm r_22 (ATerm t)
                        {
                          ATerm j_56 = NULL;
                          ATerm l_56 = NULL;
                          ATerm v_58 (ATerm t)
                          {
                            t = not_null(l_56);
                            if(((j_56 != NULL) && (j_56 != t)))
                              _fail(t);
                            else
                              j_56 = t;
                            t = not_null(l_56);
                            return(t);
                          }
                          if(((l_56 != NULL) && (l_56 != t)))
                            _fail(t);
                          else
                            l_56 = t;
                          t = v_58(t);
                          t = (ATerm) ATmakeAppl(sym__2, term_t_45, not_null(j_56));
                          t = set_config_0_0(t);
                          t = term_a_45;
                          return(t);
                        }
                        ATerm s_22 (ATerm t)
                        {
                          t = term_f_76;
                          return(t);
                        }
                        t = ArgOption_3_0(k_22, r_22, s_22, t);
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
                              ATerm t_22 (ATerm t)
                              {
                                ATerm m_56 = NULL;
                                if(((m_56 != NULL) && (m_56 != t)))
                                  _fail(t);
                                else
                                  m_56 = t;
                                t = not_null(m_56);
                                if(match_string(t, "--C-include"))
                                  {
                                    t = not_null(m_56);
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm u_22 (ATerm t)
                              {
                                ATerm n_56 = NULL;
                                ATerm o_56 = NULL;
                                ATerm w_58 (ATerm t)
                                {
                                  t = not_null(o_56);
                                  if(((n_56 != NULL) && (n_56 != t)))
                                    _fail(t);
                                  else
                                    n_56 = t;
                                  t = not_null(o_56);
                                  return(t);
                                }
                                if(((o_56 != NULL) && (o_56 != t)))
                                  _fail(t);
                                else
                                  o_56 = t;
                                t = w_58(t);
                                t = (ATerm) ATmakeAppl(sym__2, term_a_38, (ATerm) ATinsert(ATempty, not_null(n_56)));
                                t = post_extend_config_0_0(t);
                                t = term_a_45;
                                return(t);
                              }
                              ATerm v_22 (ATerm t)
                              {
                                t = term_i_76;
                                return(t);
                              }
                              t = ArgOption_3_0(t_22, u_22, v_22, t);
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
                                    ATerm l_23 (ATerm t)
                                    {
                                      ATerm p_56 = NULL;
                                      if(((p_56 != NULL) && (p_56 != t)))
                                        _fail(t);
                                      else
                                        p_56 = t;
                                      t = not_null(p_56);
                                      if(match_string(t, "-CI"))
                                        {
                                          t = not_null(p_56);
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_23 (ATerm t)
                                    {
                                      ATerm q_56 = NULL;
                                      ATerm r_56 = NULL;
                                      ATerm x_58 (ATerm t)
                                      {
                                        t = not_null(r_56);
                                        if(((q_56 != NULL) && (q_56 != t)))
                                          _fail(t);
                                        else
                                          q_56 = t;
                                        t = not_null(r_56);
                                        return(t);
                                      }
                                      if(((r_56 != NULL) && (r_56 != t)))
                                        _fail(t);
                                      else
                                        r_56 = t;
                                      t = x_58(t);
                                      t = (ATerm) ATmakeAppl(sym__2, term_d_35, (ATerm) ATinsert(ATempty, not_null(q_56)));
                                      t = extend_config_0_0(t);
                                      t = term_a_45;
                                      return(t);
                                    }
                                    ATerm n_23 (ATerm t)
                                    {
                                      t = term_l_76;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(l_23, m_23, n_23, t);
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
                                          ATerm o_23 (ATerm t)
                                          {
                                            ATerm s_56 = NULL;
                                            if(((s_56 != NULL) && (s_56 != t)))
                                              _fail(t);
                                            else
                                              s_56 = t;
                                            t = not_null(s_56);
                                            if(match_string(t, "-CL"))
                                              {
                                                t = not_null(s_56);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm a_24 (ATerm t)
                                          {
                                            ATerm t_56 = NULL;
                                            ATerm u_56 = NULL;
                                            ATerm h_59 (ATerm t)
                                            {
                                              t = not_null(u_56);
                                              if(((t_56 != NULL) && (t_56 != t)))
                                                _fail(t);
                                              else
                                                t_56 = t;
                                              t = not_null(u_56);
                                              return(t);
                                            }
                                            if(((u_56 != NULL) && (u_56 != t)))
                                              _fail(t);
                                            else
                                              u_56 = t;
                                            t = h_59(t);
                                            t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATempty, not_null(t_56)));
                                            t = extend_config_0_0(t);
                                            t = term_a_45;
                                            return(t);
                                          }
                                          ATerm f_24 (ATerm t)
                                          {
                                            t = term_o_76;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(o_23, a_24, f_24, t);
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
                                                ATerm j_24 (ATerm t)
                                                {
                                                  ATerm v_56 = NULL;
                                                  if(((v_56 != NULL) && (v_56 != t)))
                                                    _fail(t);
                                                  else
                                                    v_56 = t;
                                                  t = not_null(v_56);
                                                  if(match_string(t, "-c"))
                                                    {
                                                      t = not_null(v_56);
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm k_24 (ATerm t)
                                                {
                                                  t = term_r_76;
                                                  t = set_config_0_0(t);
                                                  t = term_a_45;
                                                  return(t);
                                                }
                                                ATerm l_24 (ATerm t)
                                                {
                                                  t = term_s_76;
                                                  return(t);
                                                }
                                                t = Option_3_0(j_24, k_24, l_24, t);
                                                ;
                                                LocalPopChoice(q_76);
                                              }
                                            else
                                              {
                                                t = p_76;
                                                {
                                                  ATerm t_76 = t;
                                                  int u_76 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_24 (ATerm t)
                                                      {
                                                        ATerm b_57 = NULL;
                                                        if(((b_57 != NULL) && (b_57 != t)))
                                                          _fail(t);
                                                        else
                                                          b_57 = t;
                                                        t = not_null(b_57);
                                                        if(match_string(t, "--ast"))
                                                          {
                                                            t = not_null(b_57);
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm n_24 (ATerm t)
                                                      {
                                                        t = term_v_76;
                                                        t = set_config_0_0(t);
                                                        t = term_a_45;
                                                        return(t);
                                                      }
                                                      ATerm o_24 (ATerm t)
                                                      {
                                                        t = term_w_76;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(m_24, n_24, o_24, t);
                                                      ;
                                                      LocalPopChoice(u_76);
                                                    }
                                                  else
                                                    {
                                                      t = t_76;
                                                      {
                                                        ATerm x_76 = t;
                                                        int y_76 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm p_24 (ATerm t)
                                                            {
                                                              ATerm c_57 = NULL;
                                                              if(((c_57 != NULL) && (c_57 != t)))
                                                                _fail(t);
                                                              else
                                                                c_57 = t;
                                                              t = not_null(c_57);
                                                              if(match_string(t, "-F"))
                                                                {
                                                                  t = not_null(c_57);
                                                                }
                                                              else
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm h_25 (ATerm t)
                                                            {
                                                              t = term_z_76;
                                                              t = set_config_0_0(t);
                                                              t = term_a_45;
                                                              return(t);
                                                            }
                                                            ATerm i_25 (ATerm t)
                                                            {
                                                              t = term_a_77;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(p_24, h_25, i_25, t);
                                                            ;
                                                            LocalPopChoice(y_76);
                                                          }
                                                        else
                                                          {
                                                            t = x_76;
                                                            {
                                                              ATerm b_77 = t;
                                                              int c_77 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_25 (ATerm t)
                                                                  {
                                                                    ATerm d_57 = NULL;
                                                                    if(((d_57 != NULL) && (d_57 != t)))
                                                                      _fail(t);
                                                                    else
                                                                      d_57 = t;
                                                                    t = not_null(d_57);
                                                                    if(match_string(t, "--output-optimized"))
                                                                      {
                                                                        t = not_null(d_57);
                                                                      }
                                                                    else
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm k_25 (ATerm t)
                                                                  {
                                                                    t = term_d_77;
                                                                    t = set_config_0_0(t);
                                                                    t = term_a_45;
                                                                    return(t);
                                                                  }
                                                                  ATerm u_25 (ATerm t)
                                                                  {
                                                                    t = term_e_77;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3_0(j_25, k_25, u_25, t);
                                                                  ;
                                                                  LocalPopChoice(c_77);
                                                                }
                                                              else
                                                                {
                                                                  t = b_77;
                                                                  {
                                                                    ATerm f_77 = t;
                                                                    int g_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm v_25 (ATerm t)
                                                                        {
                                                                          ATerm e_57 = NULL;
                                                                          if(((e_57 != NULL) && (e_57 != t)))
                                                                            _fail(t);
                                                                          else
                                                                            e_57 = t;
                                                                          t = not_null(e_57);
                                                                          if(match_string(t, "--output-canonical"))
                                                                            {
                                                                              t = not_null(e_57);
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm w_25 (ATerm t)
                                                                        {
                                                                          t = term_h_77;
                                                                          t = set_config_0_0(t);
                                                                          t = term_a_45;
                                                                          return(t);
                                                                        }
                                                                        ATerm x_25 (ATerm t)
                                                                        {
                                                                          t = term_i_77;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3_0(v_25, w_25, x_25, t);
                                                                        ;
                                                                        LocalPopChoice(g_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_77;
                                                                        {
                                                                          ATerm j_77 = t;
                                                                          int k_77 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm y_25 (ATerm t)
                                                                              {
                                                                                ATerm f_57 = NULL;
                                                                                if(((f_57 != NULL) && (f_57 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  f_57 = t;
                                                                                t = not_null(f_57);
                                                                                if(match_string(t, "--keep"))
                                                                                  {
                                                                                    t = not_null(f_57);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm n_26 (ATerm t)
                                                                              {
                                                                                ATerm g_57 = NULL;
                                                                                ATerm h_57 = NULL;
                                                                                ATerm i_59 (ATerm t)
                                                                                {
                                                                                  t = not_null(h_57);
                                                                                  if(((g_57 != NULL) && (g_57 != t)))
                                                                                    _fail(t);
                                                                                  else
                                                                                    g_57 = t;
                                                                                  t = not_null(h_57);
                                                                                  return(t);
                                                                                }
                                                                                t = string_to_int_0_0(t);
                                                                                if(((h_57 != NULL) && (h_57 != t)))
                                                                                  _fail(t);
                                                                                else
                                                                                  h_57 = t;
                                                                                t = i_59(t);
                                                                                t = (ATerm) ATmakeAppl(sym__2, term_s_44, not_null(g_57));
                                                                                t = set_config_0_0(t);
                                                                                t = term_a_45;
                                                                                return(t);
                                                                              }
                                                                              ATerm r_26 (ATerm t)
                                                                              {
                                                                                t = term_l_77;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3_0(y_25, n_26, r_26, t);
                                                                              ;
                                                                              LocalPopChoice(k_77);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_77;
                                                                              {
                                                                                ATerm m_77 = t;
                                                                                int n_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm s_26 (ATerm t)
                                                                                    {
                                                                                      ATerm i_57 = NULL;
                                                                                      if(((i_57 != NULL) && (i_57 != t)))
                                                                                        _fail(t);
                                                                                      else
                                                                                        i_57 = t;
                                                                                      t = not_null(i_57);
                                                                                      if(match_string(t, "--fusion"))
                                                                                        {
                                                                                          t = not_null(i_57);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_26 (ATerm t)
                                                                                    {
                                                                                      t = term_o_77;
                                                                                      t = toggle_config_0_0(t);
                                                                                      t = term_a_45;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_26 (ATerm t)
                                                                                    {
                                                                                      t = term_p_77;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(s_26, w_26, x_26, t);
                                                                                    ;
                                                                                    LocalPopChoice(n_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_77;
                                                                                    {
                                                                                      ATerm q_77 = t;
                                                                                      int r_77 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm y_26 (ATerm t)
                                                                                          {
                                                                                            ATerm s_57 = NULL;
                                                                                            if(((s_57 != NULL) && (s_57 != t)))
                                                                                              _fail(t);
                                                                                            else
                                                                                              s_57 = t;
                                                                                            t = not_null(s_57);
                                                                                            if(match_string(t, "--trace-all"))
                                                                                              {
                                                                                                t = not_null(s_57);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm z_26 (ATerm t)
                                                                                          {
                                                                                            t = term_t_77;
                                                                                            t = set_config_0_0(t);
                                                                                            t = term_a_45;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm k_27 (ATerm t)
                                                                                          {
                                                                                            t = term_u_77;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3_0(y_26, z_26, k_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(r_77);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_77;
                                                                                          {
                                                                                            ATerm v_77 = t;
                                                                                            int w_77 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm l_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm t_57 = NULL;
                                                                                                  if(((t_57 != NULL) && (t_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    t_57 = t;
                                                                                                  t = not_null(t_57);
                                                                                                  if(match_string(t, "-t"))
                                                                                                    {
                                                                                                      t = not_null(t_57);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm m_27 (ATerm t)
                                                                                                {
                                                                                                  ATerm u_57 = NULL;
                                                                                                  ATerm v_57 = NULL;
                                                                                                  ATerm j_59 (ATerm t)
                                                                                                  {
                                                                                                    t = not_null(v_57);
                                                                                                    if(((u_57 != NULL) && (u_57 != t)))
                                                                                                      _fail(t);
                                                                                                    else
                                                                                                      u_57 = t;
                                                                                                    t = not_null(v_57);
                                                                                                    return(t);
                                                                                                  }
                                                                                                  if(((v_57 != NULL) && (v_57 != t)))
                                                                                                    _fail(t);
                                                                                                  else
                                                                                                    v_57 = t;
                                                                                                  t = j_59(t);
                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_x_77, (ATerm) ATinsert(ATempty, not_null(u_57)));
                                                                                                  t = extend_config_0_0(t);
                                                                                                  t = term_a_45;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm n_27 (ATerm t)
                                                                                                {
                                                                                                  t = term_y_77;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(l_27, m_27, n_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(w_77);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_77;
                                                                                                {
                                                                                                  ATerm z_77 = t;
                                                                                                  int a_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm t_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm w_57 = NULL;
                                                                                                        if(((w_57 != NULL) && (w_57 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          w_57 = t;
                                                                                                        t = not_null(w_57);
                                                                                                        if(match_string(t, "--verbose"))
                                                                                                          {
                                                                                                            t = not_null(w_57);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm u_27 (ATerm t)
                                                                                                      {
                                                                                                        ATerm x_57 = NULL;
                                                                                                        ATerm y_57 = NULL;
                                                                                                        ATerm k_59 (ATerm t)
                                                                                                        {
                                                                                                          t = not_null(y_57);
                                                                                                          if(((x_57 != NULL) && (x_57 != t)))
                                                                                                            _fail(t);
                                                                                                          else
                                                                                                            x_57 = t;
                                                                                                          t = not_null(y_57);
                                                                                                          return(t);
                                                                                                        }
                                                                                                        t = string_to_int_0_0(t);
                                                                                                        if(((y_57 != NULL) && (y_57 != t)))
                                                                                                          _fail(t);
                                                                                                        else
                                                                                                          y_57 = t;
                                                                                                        t = k_59(t);
                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(x_57));
                                                                                                        t = set_config_0_0(t);
                                                                                                        t = term_a_45;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_27 (ATerm t)
                                                                                                      {
                                                                                                        t = term_b_78;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3_0(t_27, u_27, v_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(a_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_77;
                                                                                                      {
                                                                                                        ATerm c_78 = t;
                                                                                                        int d_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm w_27 (ATerm t)
                                                                                                            {
                                                                                                              ATerm z_57 = NULL;
                                                                                                              if(((z_57 != NULL) && (z_57 != t)))
                                                                                                                _fail(t);
                                                                                                              else
                                                                                                                z_57 = t;
                                                                                                              t = not_null(z_57);
                                                                                                              if(match_string(t, "-S"))
                                                                                                                {
                                                                                                                  t = not_null(z_57);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "--silent"))
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
                                                                                                            ATerm y_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_e_78;
                                                                                                              t = set_config_0_0(t);
                                                                                                              t = term_a_45;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm z_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_f_78;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(w_27, y_27, z_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(d_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_78;
                                                                                                            {
                                                                                                              ATerm g_78 = t;
                                                                                                              int h_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm a_28 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm a_58 = NULL;
                                                                                                                    if(((a_58 != NULL) && (a_58 != t)))
                                                                                                                      _fail(t);
                                                                                                                    else
                                                                                                                      a_58 = t;
                                                                                                                    t = not_null(a_58);
                                                                                                                    if(match_string(t, "-h"))
                                                                                                                      {
                                                                                                                        t = not_null(a_58);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_string(t, "--help"))
                                                                                                                          {
                                                                                                                            t = not_null(a_58);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm b_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_j_78;
                                                                                                                    t = set_config_0_0(t);
                                                                                                                    t = term_a_45;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm c_28 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_k_78;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(a_28, b_28, c_28, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(h_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_78;
                                                                                                                  {
                                                                                                                    ATerm l_78 = t;
                                                                                                                    int m_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm d_28 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm b_58 = NULL;
                                                                                                                          if(((b_58 != NULL) && (b_58 != t)))
                                                                                                                            _fail(t);
                                                                                                                          else
                                                                                                                            b_58 = t;
                                                                                                                          t = not_null(b_58);
                                                                                                                          if(match_string(t, "--man"))
                                                                                                                            {
                                                                                                                              t = not_null(b_58);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm e_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_o_78;
                                                                                                                          t = set_config_0_0(t);
                                                                                                                          t = term_a_45;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm f_28 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_p_78;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(d_28, e_28, f_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(m_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = l_78;
                                                                                                                        {
                                                                                                                          ATerm q_78 = t;
                                                                                                                          int r_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm g_28 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm c_58 = NULL;
                                                                                                                                if(((c_58 != NULL) && (c_58 != t)))
                                                                                                                                  _fail(t);
                                                                                                                                else
                                                                                                                                  c_58 = t;
                                                                                                                                t = not_null(c_58);
                                                                                                                                if(match_string(t, "-v"))
                                                                                                                                  {
                                                                                                                                    t = not_null(c_58);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_string(t, "--version"))
                                                                                                                                      {
                                                                                                                                        t = not_null(c_58);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        _fail(t);
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm h_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_t_78;
                                                                                                                                t = set_config_0_0(t);
                                                                                                                                t = term_a_45;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm i_28 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_u_78;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3_0(g_28, h_28, i_28, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(r_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_78;
                                                                                                                              {
                                                                                                                                ATerm j_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm d_58 = NULL;
                                                                                                                                  if(((d_58 != NULL) && (d_58 != t)))
                                                                                                                                    _fail(t);
                                                                                                                                  else
                                                                                                                                    d_58 = t;
                                                                                                                                  t = not_null(d_58);
                                                                                                                                  if(match_string(t, "--warning"))
                                                                                                                                    {
                                                                                                                                      t = not_null(d_58);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "-W"))
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
                                                                                                                                ATerm k_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm v_78 = t;
                                                                                                                                  int w_78 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      ATerm f_58 = NULL;
                                                                                                                                      ATerm x_78;
                                                                                                                                      x_78 = t;
                                                                                                                                      t = term_i_43;
                                                                                                                                      t = get_config_0_0(t);
                                                                                                                                      {
                                                                                                                                        ATerm s_28 (ATerm t)
                                                                                                                                        {
                                                                                                                                          ATerm e_58 = NULL;
                                                                                                                                          if(((e_58 != NULL) && (e_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            e_58 = t;
                                                                                                                                          t = not_null(e_58);
                                                                                                                                          if(match_string(t, "all"))
                                                                                                                                            {
                                                                                                                                              t = not_null(e_58);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              _fail(t);
                                                                                                                                            }
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        t = Cons_2_0(s_28, Nil_0_0, t);
                                                                                                                                      }
                                                                                                                                      t = x_78;
                                                                                                                                      {
                                                                                                                                        ATerm g_58 = NULL;
                                                                                                                                        ATerm l_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(g_58);
                                                                                                                                          if(((f_58 != NULL) && (f_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            f_58 = t;
                                                                                                                                          t = not_null(g_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((g_58 != NULL) && (g_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          g_58 = t;
                                                                                                                                        t = l_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_i_43, (ATerm) ATinsert(ATempty, not_null(f_58)));
                                                                                                                                        t = set_config_0_0(t);
                                                                                                                                      }
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(w_78);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = v_78;
                                                                                                                                      {
                                                                                                                                        ATerm h_58 = NULL;
                                                                                                                                        ATerm n_58 = NULL;
                                                                                                                                        ATerm m_59 (ATerm t)
                                                                                                                                        {
                                                                                                                                          t = not_null(n_58);
                                                                                                                                          if(((h_58 != NULL) && (h_58 != t)))
                                                                                                                                            _fail(t);
                                                                                                                                          else
                                                                                                                                            h_58 = t;
                                                                                                                                          t = not_null(n_58);
                                                                                                                                          return(t);
                                                                                                                                        }
                                                                                                                                        if(((n_58 != NULL) && (n_58 != t)))
                                                                                                                                          _fail(t);
                                                                                                                                        else
                                                                                                                                          n_58 = t;
                                                                                                                                        t = m_59(t);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_i_43, (ATerm) ATinsert(ATempty, not_null(h_58)));
                                                                                                                                        t = extend_config_0_0(t);
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  t = term_a_45;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm m_28 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_y_78;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = ArgOption_3_0(j_28, k_28, m_28, t);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_59 = NULL;
  ATerm q_59 (ATerm t)
  {
    ATerm p_59 = NULL;
    t = not_null(o_59);
    if(((p_59 != NULL) && (p_59 != t)))
      _fail(t);
    else
      p_59 = t;
    t = not_null(o_59);
    t = SSL_table_destroy(not_null(p_59));
    return(t);
  }
  if(((o_59 != NULL) && (o_59 != t)))
    _fail(t);
  else
    o_59 = t;
  t = q_59(t);
  return(t);
}
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_79), term_f_64), term_n_79), term_m_79), term_l_79), term_f_64), term_k_79), term_j_79), term_f_79), term_e_79), term_d_79), term_c_79), term_b_79), term_a_79), term_z_78);
  return(t);
}
ATerm map_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm r_59 (ATerm t)
  {
    ATerm p_79 = t;
    int q_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(q_79);
      }
    else
      {
        t = p_79;
        t = Cons_2_0(t_86, r_59, t);
      }
    return(t);
  }
  t = r_59(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  ATerm j_60 (ATerm t)
  {
    ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
    t = not_null(y_59);
    if(((b_60 != NULL) && (b_60 != t)))
      _fail(t);
    else
      b_60 = t;
    t = not_null(z_59);
    if(((c_60 != NULL) && (c_60 != t)))
      _fail(t);
    else
      c_60 = t;
    t = not_null(c_60);
    {
      ATerm r_79;
      r_79 = t;
      {
        ATerm e_60 = NULL,g_60 = NULL,i_60 = NULL;
        ATerm n_60 (ATerm t)
        {
          t = not_null(i_60);
          if(((d_60 != NULL) && (d_60 != t)))
            _fail(t);
          else
            d_60 = t;
          t = not_null(i_60);
          return(t);
        }
        ATerm s_79;
        s_79 = t;
        {
          ATerm f_60 = NULL;
          ATerm l_60 (ATerm t)
          {
            t = not_null(f_60);
            if(((e_60 != NULL) && (e_60 != t)))
              _fail(t);
            else
              e_60 = t;
            t = not_null(f_60);
            return(t);
          }
          t = h_0(t);
          if(((f_60 != NULL) && (f_60 != t)))
            _fail(t);
          else
            f_60 = t;
          t = l_60(t);
        }
        t = s_79;
        {
          ATerm h_60 = NULL;
          ATerm m_60 (ATerm t)
          {
            t = not_null(h_60);
            if(((g_60 != NULL) && (g_60 != t)))
              _fail(t);
            else
              g_60 = t;
            t = not_null(h_60);
            return(t);
          }
          t = not_null(b_60);
          t = g_0(t);
          if(((h_60 != NULL) && (h_60 != t)))
            _fail(t);
          else
            h_60 = t;
          t = m_60(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(e_60)), not_null(g_60));
          if(((i_60 != NULL) && (i_60 != t)))
            _fail(t);
          else
            i_60 = t;
          t = n_60(t);
        }
      }
      t = r_79;
      {
        ATerm w_28 (ATerm t)
        {
          t = not_null(d_60);
          return(t);
        }
        t = reverse_acc_2_0(g_0, w_28, t);
      }
    }
    return(t);
  }
  ATerm k_60 (ATerm t)
  {
    t = term_a_45;
    t = h_0(t);
    return(t);
  }
  if(((a_60 != NULL) && (a_60 != t)))
    _fail(t);
  else
    a_60 = t;
  t = not_null(a_60);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_59 = ATgetFirst((ATermList) t);
      z_59 = (ATerm) ATgetNext((ATermList) t);
      t = j_60(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_60(t);
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
  ATerm x_28 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_28, t);
  return(t);
}
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_60 = NULL;
  ATerm q_60 = NULL;
  ATerm r_60 (ATerm t)
  {
    t = not_null(q_60);
    if(((p_60 != NULL) && (p_60 != t)))
      _fail(t);
    else
      p_60 = t;
    t = not_null(q_60);
    return(t);
  }
  t = term_a_45;
  t = e_0(t);
  if(((q_60 != NULL) && (q_60 != t)))
    _fail(t);
  else
    q_60 = t;
  t = r_60(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_80), not_null(p_60)), term_z_79), term_f_64), term_w_79), term_f_64), term_v_79), term_u_79), term_f_64), term_t_79);
  return(t);
}
ATerm Program_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  ATerm h_61 (ATerm t)
  {
    ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,d_61 = NULL;
    ATerm j_61 (ATerm t)
    {
      ATerm e_61 = NULL,f_61 = NULL;
      t = not_null(d_61);
      if(((e_61 != NULL) && (e_61 != t)))
        _fail(t);
      else
        e_61 = t;
      t = not_null(d_61);
      {
        ATerm g_61 = NULL;
        ATerm k_61 (ATerm t)
        {
          t = not_null(g_61);
          if(((f_61 != NULL) && (f_61 != t)))
            _fail(t);
          else
            f_61 = t;
          t = not_null(g_61);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_61)), not_null(b_61));
        if(((g_61 != NULL) && (g_61 != t)))
          _fail(t);
        else
          g_61 = t;
        t = k_61(t);
        t = not_null(f_61);
      }
      return(t);
    }
    t = not_null(x_60);
    if(((z_60 != NULL) && (z_60 != t)))
      _fail(t);
    else
      z_60 = t;
    t = not_null(y_60);
    if(((a_61 != NULL) && (a_61 != t)))
      _fail(t);
    else
      a_61 = t;
    t = not_null(x_60);
    {
      ATerm c_61 = NULL;
      ATerm i_61 (ATerm t)
      {
        t = not_null(c_61);
        if(((b_61 != NULL) && (b_61 != t)))
          _fail(t);
        else
          b_61 = t;
        t = not_null(c_61);
        return(t);
      }
      t = SSLgetAnnotations(not_null(z_60));
      if(((c_61 != NULL) && (c_61 != t)))
        _fail(t);
      else
        c_61 = t;
      t = i_61(t);
      t = not_null(a_61);
      t = c_71(t);
      if(((d_61 != NULL) && (d_61 != t)))
        _fail(t);
      else
        d_61 = t;
      t = j_61(t);
    }
    return(t);
  }
  if(((x_60 != NULL) && (x_60 != t)))
    _fail(t);
  else
    x_60 = t;
  t = not_null(x_60);
  if(match_cons(t, sym_Program_1))
    {
      y_60 = ATgetArgument(t, 0);
      t = h_61(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_61 = NULL;
  ATerm b_80 = t;
  int c_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_61 = NULL;
      ATerm w_61 (ATerm t)
      {
        t = not_null(q_61);
        if(((p_61 != NULL) && (p_61 != t)))
          _fail(t);
        else
          p_61 = t;
        t = not_null(q_61);
        return(t);
      }
      t = term_d_80;
      t = get_config_0_0(t);
      if(((q_61 != NULL) && (q_61 != t)))
        _fail(t);
      else
        q_61 = t;
      t = w_61(t);
      ;
      LocalPopChoice(c_80);
    }
  else
    {
      t = b_80;
      {
        ATerm d_29 (ATerm t)
        {
          ATerm e_29 (ATerm t)
          {
            ATerm r_61 = NULL;
            ATerm x_61 (ATerm t)
            {
              t = not_null(r_61);
              if(((p_61 != NULL) && (p_61 != t)))
                _fail(t);
              else
                p_61 = t;
              t = not_null(r_61);
              return(t);
            }
            if(((r_61 != NULL) && (r_61 != t)))
              _fail(t);
            else
              r_61 = t;
            t = x_61(t);
            return(t);
          }
          t = Program_1_0(e_29, t);
          return(t);
        }
        t = option_defined_1_0(d_29, t);
      }
    }
  {
    ATerm f_29 (ATerm t)
    {
      ATerm p_29 (ATerm t)
      {
        t = not_null(p_61);
        return(t);
      }
      t = short_description_1_0(p_29, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(f_29, t);
    t = term_f_80;
    t = echo_0_0(t);
    t = term_i_80;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm q_29 (ATerm t)
      {
        ATerm s_61 = NULL;
        ATerm t_61 = NULL;
        ATerm y_61 (ATerm t)
        {
          t = not_null(t_61);
          if(((s_61 != NULL) && (s_61 != t)))
            _fail(t);
          else
            s_61 = t;
          t = not_null(t_61);
          return(t);
        }
        if(((t_61 != NULL) && (t_61 != t)))
          _fail(t);
        else
          t_61 = t;
        t = y_61(t);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_61)), term_j_80);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_29, t);
      {
        ATerm r_29 (ATerm t)
        {
          ATerm u_61 = NULL;
          ATerm v_61 = NULL;
          ATerm z_61 (ATerm t)
          {
            t = not_null(v_61);
            if(((u_61 != NULL) && (u_61 != t)))
              _fail(t);
            else
              u_61 = t;
            t = not_null(v_61);
            return(t);
          }
          ATerm s_29 (ATerm t)
          {
            t = not_null(p_61);
            return(t);
          }
          t = long_description_1_0(s_29, t);
          if(((v_61 != NULL) && (v_61 != t)))
            _fail(t);
          else
            v_61 = t;
          t = z_61(t);
          t = (ATerm) ATinsert(CheckATermList(not_null(u_61)), term_f_64);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(r_29, t);
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
  ATerm k_80 = t;
  int l_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(l_80);
    }
  else
    {
      t = k_80;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  ATerm l_63 (ATerm t)
  {
    ATerm i_62 = NULL,x_62 = NULL,y_62 = NULL,a_63 = NULL;
    ATerm w_63 (ATerm t)
    {
      ATerm c_63 = NULL,j_63 = NULL;
      t = not_null(a_63);
      if(((c_63 != NULL) && (c_63 != t)))
        _fail(t);
      else
        c_63 = t;
      t = not_null(a_63);
      {
        ATerm k_63 = NULL;
        ATerm x_63 (ATerm t)
        {
          t = not_null(k_63);
          if(((j_63 != NULL) && (j_63 != t)))
            _fail(t);
          else
            j_63 = t;
          t = not_null(k_63);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_63)), not_null(y_62));
        if(((k_63 != NULL) && (k_63 != t)))
          _fail(t);
        else
          k_63 = t;
        t = x_63(t);
        t = not_null(j_63);
      }
      return(t);
    }
    t = not_null(g_62);
    if(((i_62 != NULL) && (i_62 != t)))
      _fail(t);
    else
      i_62 = t;
    t = not_null(h_62);
    if(((x_62 != NULL) && (x_62 != t)))
      _fail(t);
    else
      x_62 = t;
    t = not_null(g_62);
    {
      ATerm z_62 = NULL;
      ATerm p_63 (ATerm t)
      {
        t = not_null(z_62);
        if(((y_62 != NULL) && (y_62 != t)))
          _fail(t);
        else
          y_62 = t;
        t = not_null(z_62);
        return(t);
      }
      t = SSLgetAnnotations(not_null(i_62));
      if(((z_62 != NULL) && (z_62 != t)))
        _fail(t);
      else
        z_62 = t;
      t = p_63(t);
      t = not_null(x_62);
      t = d_71(t);
      if(((a_63 != NULL) && (a_63 != t)))
        _fail(t);
      else
        a_63 = t;
      t = w_63(t);
    }
    return(t);
  }
  if(((g_62 != NULL) && (g_62 != t)))
    _fail(t);
  else
    g_62 = t;
  t = not_null(g_62);
  if(match_cons(t, sym_Undefined_1))
    {
      h_62 = ATgetArgument(t, 0);
      t = l_63(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm y_63 (ATerm t)
  {
    ATerm m_80 = t;
    int n_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_87, _id, t);
        ;
        LocalPopChoice(n_80);
      }
    else
      {
        t = m_80;
        t = Cons_2_0(_id, y_63, t);
      }
    return(t);
  }
  t = y_63(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  t = fetch_1_0(f_104, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL,e_64 = NULL;
  if(((a_64 != NULL) && (a_64 != t)))
    _fail(t);
  else
    a_64 = t;
  t = not_null(a_64);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(a_64);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_64 = ATgetFirst((ATermList) t);
          e_64 = (ATerm) ATgetNext((ATermList) t);
          t = not_null(a_64);
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
  ATerm o_80;
  o_80 = t;
  {
    ATerm h_64 = NULL;
    ATerm k_64 = NULL;
    ATerm m_64 (ATerm t)
    {
      t = not_null(k_64);
      if(((h_64 != NULL) && (h_64 != t)))
        _fail(t);
      else
        h_64 = t;
      t = not_null(k_64);
      return(t);
    }
    ATerm p_80 = t;
    int q_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(q_80);
      }
    else
      {
        t = p_80;
        {
          ATerm i_64 = NULL;
          ATerm j_64 = NULL;
          ATerm l_64 (ATerm t)
          {
            t = not_null(j_64);
            if(((i_64 != NULL) && (i_64 != t)))
              _fail(t);
            else
              i_64 = t;
            t = not_null(j_64);
            return(t);
          }
          if(((j_64 != NULL) && (j_64 != t)))
            _fail(t);
          else
            j_64 = t;
          t = l_64(t);
          t = (ATerm) ATinsert(ATempty, not_null(i_64));
        }
      }
    if(((k_64 != NULL) && (k_64 != t)))
      _fail(t);
    else
      k_64 = t;
    t = m_64(t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_36, not_null(h_64));
    t = printnl_0_0(t);
  }
  t = o_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_80;
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
  ATerm r_80 = t;
  int s_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(s_80);
    }
  else
    {
      t = r_80;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  ATerm r_64 = NULL;
  ATerm x_64 (ATerm t)
  {
    ATerm s_64 = NULL,t_64 = NULL,v_64 = NULL;
    t = not_null(r_64);
    if(((s_64 != NULL) && (s_64 != t)))
      _fail(t);
    else
      s_64 = t;
    t = not_null(r_64);
    {
      ATerm t_80;
      t_80 = t;
      {
        ATerm u_64 = NULL;
        ATerm y_64 (ATerm t)
        {
          t = not_null(u_64);
          if(((t_64 != NULL) && (t_64 != t)))
            _fail(t);
          else
            t_64 = t;
          t = not_null(u_64);
          return(t);
        }
        t = SSLgetAnnotations(not_null(s_64));
        if(((u_64 != NULL) && (u_64 != t)))
          _fail(t);
        else
          u_64 = t;
        t = y_64(t);
      }
      t = t_80;
      {
        ATerm w_64 = NULL;
        ATerm z_64 (ATerm t)
        {
          t = not_null(w_64);
          if(((v_64 != NULL) && (v_64 != t)))
            _fail(t);
          else
            v_64 = t;
          t = not_null(w_64);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_64));
        if(((w_64 != NULL) && (w_64 != t)))
          _fail(t);
        else
          w_64 = t;
        t = z_64(t);
        t = not_null(v_64);
      }
    }
    return(t);
  }
  if(((r_64 != NULL) && (r_64 != t)))
    _fail(t);
  else
    r_64 = t;
  t = not_null(r_64);
  if(match_cons(t, sym_Help_0))
    {
      t = x_64(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_80 = t;
  int v_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_29 (ATerm t)
      {
        ATerm c_65 = NULL;
        if(((c_65 != NULL) && (c_65 != t)))
          _fail(t);
        else
          c_65 = t;
        t = not_null(c_65);
        if(match_string(t, "--about"))
          {
            t = not_null(c_65);
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      ATerm x_29 (ATerm t)
      {
        t = term_x_80;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm y_29 (ATerm t)
      {
        t = term_y_80;
        return(t);
      }
      t = Option_3_0(w_29, x_29, y_29, t);
      ;
      LocalPopChoice(v_80);
    }
  else
    {
      t = u_80;
      {
        ATerm z_29 (ATerm t)
        {
          ATerm d_65 = NULL;
          if(((d_65 != NULL) && (d_65 != t)))
            _fail(t);
          else
            d_65 = t;
          t = not_null(d_65);
          if(match_string(t, "--version"))
            {
              t = not_null(d_65);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_30 (ATerm t)
        {
          t = term_x_80;
          t = set_config_0_0(t);
          t = term_t_78;
          t = set_config_0_0(t);
          t = term_z_80;
          return(t);
        }
        ATerm h_30 (ATerm t)
        {
          t = term_a_81;
          return(t);
        }
        t = Option_3_0(z_29, a_30, h_30, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  ATerm n_65 (ATerm t)
  {
    ATerm j_65 = NULL,k_65 = NULL;
    t = not_null(h_65);
    if(((j_65 != NULL) && (j_65 != t)))
      _fail(t);
    else
      j_65 = t;
    t = not_null(i_65);
    if(((k_65 != NULL) && (k_65 != t)))
      _fail(t);
    else
      k_65 = t;
    t = not_null(g_65);
    t = SSL_table_get(not_null(j_65), not_null(k_65));
    return(t);
  }
  if(((g_65 != NULL) && (g_65 != t)))
    _fail(t);
  else
    g_65 = t;
  t = not_null(g_65);
  if(match_cons(t, sym__2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      t = n_65(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL;
  ATerm a_66 (ATerm t)
  {
    ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
    t = not_null(s_65);
    if(((w_65 != NULL) && (w_65 != t)))
      _fail(t);
    else
      w_65 = t;
    t = not_null(t_65);
    if(((x_65 != NULL) && (x_65 != t)))
      _fail(t);
    else
      x_65 = t;
    t = not_null(u_65);
    if(((v_65 != NULL) && (v_65 != t)))
      _fail(t);
    else
      v_65 = t;
    t = not_null(r_65);
    {
      ATerm b_81;
      b_81 = t;
      {
        ATerm y_65 = NULL;
        ATerm z_65 = NULL;
        ATerm b_66 (ATerm t)
        {
          t = not_null(z_65);
          if(((y_65 != NULL) && (y_65 != t)))
            _fail(t);
          else
            y_65 = t;
          t = not_null(z_65);
          return(t);
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_65), not_null(x_65));
        {
          ATerm c_81 = t;
          int d_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = table_get_0_0(t);
              ;
              LocalPopChoice(d_81);
            }
          else
            {
              t = c_81;
              t = (ATerm) ATempty;
            }
          if(((z_65 != NULL) && (z_65 != t)))
            _fail(t);
          else
            z_65 = t;
          t = b_66(t);
        }
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_65), not_null(x_65), (ATerm) ATinsert(CheckATermList(not_null(y_65)), not_null(v_65)));
        t = table_put_0_0(t);
      }
      t = b_81;
    }
    return(t);
  }
  if(((r_65 != NULL) && (r_65 != t)))
    _fail(t);
  else
    r_65 = t;
  t = not_null(r_65);
  if(match_cons(t, sym__3))
    {
      s_65 = ATgetArgument(t, 0);
      t_65 = ATgetArgument(t, 1);
      u_65 = ATgetArgument(t, 2);
      t = a_66(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm d_66 = NULL;
  ATerm e_66 = NULL;
  ATerm f_66 (ATerm t)
  {
    t = not_null(e_66);
    if(((d_66 != NULL) && (d_66 != t)))
      _fail(t);
    else
      d_66 = t;
    t = not_null(e_66);
    return(t);
  }
  t = term_a_45;
  t = k_105(t);
  if(((e_66 != NULL) && (e_66 != t)))
    _fail(t);
  else
    e_66 = t;
  t = f_66(t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_80, term_h_80, not_null(d_66));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  ATerm r_66 (ATerm t)
  {
    t = not_null(k_66);
    t = register_usage_1_0(d_0, t);
    return(t);
  }
  ATerm s_66 (ATerm t)
  {
    ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
    t = not_null(l_66);
    if(((n_66 != NULL) && (n_66 != t)))
      _fail(t);
    else
      n_66 = t;
    t = not_null(m_66);
    if(((o_66 != NULL) && (o_66 != t)))
      _fail(t);
    else
      o_66 = t;
    t = not_null(k_66);
    {
      ATerm e_81;
      e_81 = t;
      t = not_null(n_66);
      t = a_0(t);
      t = e_81;
      {
        ATerm q_66 = NULL;
        ATerm t_66 (ATerm t)
        {
          t = not_null(q_66);
          if(((p_66 != NULL) && (p_66 != t)))
            _fail(t);
          else
            p_66 = t;
          t = not_null(q_66);
          return(t);
        }
        t = term_a_45;
        t = c_0(t);
        if(((q_66 != NULL) && (q_66 != t)))
          _fail(t);
        else
          q_66 = t;
        t = t_66(t);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_66)), not_null(p_66));
      }
    }
    return(t);
  }
  if(((k_66 != NULL) && (k_66 != t)))
    _fail(t);
  else
    k_66 = t;
  t = not_null(k_66);
  if(match_string(t, "register-usage-info"))
    {
      t = r_66(t);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_66 = ATgetFirst((ATermList) t);
          m_66 = (ATerm) ATgetNext((ATermList) t);
          t = s_66(t);
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
  ATerm l_30 (ATerm t)
  {
    ATerm v_66 = NULL;
    if(((v_66 != NULL) && (v_66 != t)))
      _fail(t);
    else
      v_66 = t;
    t = not_null(v_66);
    if(match_string(t, "--help"))
      {
        t = not_null(v_66);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(v_66);
          }
        else
          {
            if(match_string(t, "-?"))
              {
                t = not_null(v_66);
              }
            else
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_30 (ATerm t)
  {
    t = term_j_78;
    t = set_config_0_0(t);
    t = term_f_81;
    return(t);
  }
  ATerm q_30 (ATerm t)
  {
    t = term_g_81;
    return(t);
  }
  t = Option_3_0(l_30, p_30, q_30, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  ATerm d_67 (ATerm t)
  {
    ATerm b_67 = NULL,c_67 = NULL;
    t = not_null(z_66);
    if(((b_67 != NULL) && (b_67 != t)))
      _fail(t);
    else
      b_67 = t;
    t = not_null(a_67);
    if(((c_67 != NULL) && (c_67 != t)))
      _fail(t);
    else
      c_67 = t;
    t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_67)));
    return(t);
  }
  if(((y_66 != NULL) && (y_66 != t)))
    _fail(t);
  else
    y_66 = t;
  t = not_null(y_66);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_66 = ATgetFirst((ATermList) t);
      a_67 = (ATerm) ATgetNext((ATermList) t);
      t = d_67(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm h_81;
  h_81 = t;
  {
    ATerm r_30 (ATerm t)
    {
      t = term_i_81;
      t = i_105(t);
      return(t);
    }
    t = try_1_0(r_30, t);
  }
  t = h_81;
  {
    ATerm s_30 (ATerm t)
    {
      ATerm i_67 = NULL;
      ATerm j_81;
      j_81 = t;
      {
        ATerm g_67 = NULL;
        ATerm h_67 = NULL;
        ATerm k_67 (ATerm t)
        {
          t = not_null(h_67);
          if(((g_67 != NULL) && (g_67 != t)))
            _fail(t);
          else
            g_67 = t;
          t = not_null(h_67);
          return(t);
        }
        if(((h_67 != NULL) && (h_67 != t)))
          _fail(t);
        else
          h_67 = t;
        t = k_67(t);
        t = (ATerm) ATmakeAppl(sym__2, term_d_80, not_null(g_67));
        t = set_config_0_0(t);
      }
      t = j_81;
      {
        ATerm j_67 = NULL;
        ATerm l_67 (ATerm t)
        {
          t = not_null(j_67);
          if(((i_67 != NULL) && (i_67 != t)))
            _fail(t);
          else
            i_67 = t;
          t = not_null(j_67);
          return(t);
        }
        if(((j_67 != NULL) && (j_67 != t)))
          _fail(t);
        else
          j_67 = t;
        t = l_67(t);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_67));
      }
      return(t);
    }
    ATerm t_30 (ATerm t)
    {
      ATerm k_81 = t;
      int l_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_81 = t;
          int n_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(n_81);
            }
          else
            {
              t = m_81;
              t = i_105(t);
              t = Cons_2_0(_id, t_30, t);
            }
          ;
          LocalPopChoice(l_81);
        }
      else
        {
          t = k_81;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(s_30, t_30, t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm o_67 = NULL;
  ATerm o_81;
  o_81 = t;
  t = term_p_81;
  t = table_put_0_0(t);
  t = o_81;
  {
    ATerm u_30 (ATerm t)
    {
      ATerm q_81 = t;
      int r_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          ;
          LocalPopChoice(r_81);
        }
      else
        {
          t = q_81;
          {
            ATerm s_81 = t;
            int t_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(t_81);
              }
            else
              {
                t = s_81;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_30, t);
    {
      ATerm b_31 (ATerm t)
      {
        ATerm u_81 = t;
        int v_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_81;
            w_81 = t;
            {
              ATerm x_81 = t;
              int y_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_78;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(y_81);
                }
              else
                {
                  t = x_81;
                  t = option_defined_1_0(Help_0_0, t);
                }
            }
            t = w_81;
            t = system_usage_0_0(t);
            t = term_l_33;
            t = exit_0_0(t);
            ;
            LocalPopChoice(v_81);
          }
        else
          {
            t = u_81;
            {
              ATerm z_81 = t;
              int a_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_82;
                  b_82 = t;
                  t = term_w_80;
                  t = get_config_0_0(t);
                  t = b_82;
                  t = system_about_0_0(t);
                  t = term_l_33;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(a_82);
                }
              else
                {
                  t = z_81;
                  {
                    ATerm c_31 (ATerm t)
                    {
                      ATerm j_31 (ATerm t)
                      {
                        ATerm p_67 = NULL;
                        ATerm q_67 (ATerm t)
                        {
                          t = not_null(p_67);
                          if(((o_67 != NULL) && (o_67 != t)))
                            _fail(t);
                          else
                            o_67 = t;
                          t = not_null(p_67);
                          return(t);
                        }
                        if(((p_67 != NULL) && (p_67 != t)))
                          _fail(t);
                        else
                          p_67 = t;
                        t = q_67(t);
                        return(t);
                      }
                      t = Undefined_1_0(j_31, t);
                      return(t);
                    }
                    t = option_defined_1_0(c_31, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_67)), term_c_82));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_u_47;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(b_31, t);
      {
        ATerm d_82;
        d_82 = t;
        t = term_g_80;
        t = table_destroy_0_0(t);
        t = d_82;
      }
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  ATerm e_82;
  e_82 = t;
  {
    ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
    ATerm a_68 (ATerm t)
    {
      t = not_null(x_67);
      if(((t_67 != NULL) && (t_67 != t)))
        _fail(t);
      else
        t_67 = t;
      t = not_null(y_67);
      if(((u_67 != NULL) && (u_67 != t)))
        _fail(t);
      else
        u_67 = t;
      t = not_null(z_67);
      if(((v_67 != NULL) && (v_67 != t)))
        _fail(t);
      else
        v_67 = t;
      t = not_null(w_67);
      t = SSL_table_put(not_null(t_67), not_null(u_67), not_null(v_67));
      return(t);
    }
    if(((w_67 != NULL) && (w_67 != t)))
      _fail(t);
    else
      w_67 = t;
    t = not_null(w_67);
    if(match_cons(t, sym__3))
      {
        x_67 = ATgetArgument(t, 0);
        y_67 = ATgetArgument(t, 1);
        z_67 = ATgetArgument(t, 2);
        t = a_68(t);
      }
    else
      {
        _fail(t);
      }
  }
  t = e_82;
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
  ATerm i_68 (ATerm t)
  {
    ATerm g_68 = NULL,h_68 = NULL;
    t = not_null(e_68);
    if(((g_68 != NULL) && (g_68 != t)))
      _fail(t);
    else
      g_68 = t;
    t = not_null(f_68);
    if(((h_68 != NULL) && (h_68 != t)))
      _fail(t);
    else
      h_68 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_63, not_null(g_68), not_null(h_68));
    t = table_put_0_0(t);
    return(t);
  }
  if(((d_68 != NULL) && (d_68 != t)))
    _fail(t);
  else
    d_68 = t;
  t = not_null(d_68);
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
      t = i_68(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_82 = t;
  int g_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(g_82);
    }
  else
    {
      t = f_82;
      {
        ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
        ATerm r_68 (ATerm t)
        {
          ATerm o_68 = NULL,p_68 = NULL;
          t = not_null(m_68);
          if(((o_68 != NULL) && (o_68 != t)))
            _fail(t);
          else
            o_68 = t;
          t = not_null(n_68);
          if(((p_68 != NULL) && (p_68 != t)))
            _fail(t);
          else
            p_68 = t;
          t = not_null(o_68);
          {
            ATerm n_31 (ATerm t)
            {
              t = not_null(p_68);
              t = concat_0_0(t);
              return(t);
            }
            t = at_end_1_0(n_31, t);
          }
          return(t);
        }
        if(((l_68 != NULL) && (l_68 != t)))
          _fail(t);
        else
          l_68 = t;
        t = not_null(l_68);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_68 = ATgetFirst((ATermList) t);
            n_68 = (ATerm) ATgetNext((ATermList) t);
            t = r_68(t);
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
  ATerm x_68 = NULL;
  ATerm f_69 (ATerm t)
  {
    ATerm y_68 = NULL,z_68 = NULL;
    t = not_null(x_68);
    if(((y_68 != NULL) && (y_68 != t)))
      _fail(t);
    else
      y_68 = t;
    t = not_null(x_68);
    {
      ATerm a_69 = NULL;
      ATerm g_69 (ATerm t)
      {
        ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
        ATerm h_69 (ATerm t)
        {
          t = not_null(e_69);
          if(((z_68 != NULL) && (z_68 != t)))
            _fail(t);
          else
            z_68 = t;
          t = not_null(c_69);
          return(t);
        }
        t = not_null(a_69);
        if(((b_69 != NULL) && (b_69 != t)))
          _fail(t);
        else
          b_69 = t;
        t = not_null(a_69);
        t = SSL_explode_term(not_null(b_69));
        if(((c_69 != NULL) && (c_69 != t)))
          _fail(t);
        else
          c_69 = t;
        t = not_null(c_69);
        if(match_cons(t, sym__2))
          {
            d_69 = ATgetArgument(t, 0);
            e_69 = ATgetArgument(t, 1);
            t = not_null(d_69);
            if(match_string(t, ""))
              {
                t = h_69(t);
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
      t = not_null(y_68);
      if(((a_69 != NULL) && (a_69 != t)))
        _fail(t);
      else
        a_69 = t;
      t = g_69(t);
      t = not_null(z_68);
      t = concat_0_0(t);
    }
    return(t);
  }
  if(((x_68 != NULL) && (x_68 != t)))
    _fail(t);
  else
    x_68 = t;
  t = f_69(t);
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  ATerm m_69 = NULL;
  ATerm s_69 (ATerm t)
  {
    ATerm n_69 = NULL,o_69 = NULL,q_69 = NULL;
    t = not_null(m_69);
    if(((n_69 != NULL) && (n_69 != t)))
      _fail(t);
    else
      n_69 = t;
    t = not_null(m_69);
    {
      ATerm h_82;
      h_82 = t;
      {
        ATerm p_69 = NULL;
        ATerm t_69 (ATerm t)
        {
          t = not_null(p_69);
          if(((o_69 != NULL) && (o_69 != t)))
            _fail(t);
          else
            o_69 = t;
          t = not_null(p_69);
          return(t);
        }
        t = SSLgetAnnotations(not_null(n_69));
        if(((p_69 != NULL) && (p_69 != t)))
          _fail(t);
        else
          p_69 = t;
        t = t_69(t);
      }
      t = h_82;
      {
        ATerm r_69 = NULL;
        ATerm u_69 (ATerm t)
        {
          t = not_null(r_69);
          if(((q_69 != NULL) && (q_69 != t)))
            _fail(t);
          else
            q_69 = t;
          t = not_null(r_69);
          return(t);
        }
        t = SSLsetAnnotations((ATerm)ATempty, not_null(o_69));
        if(((r_69 != NULL) && (r_69 != t)))
          _fail(t);
        else
          r_69 = t;
        t = u_69(t);
        t = not_null(q_69);
      }
    }
    return(t);
  }
  if(((m_69 != NULL) && (m_69 != t)))
    _fail(t);
  else
    m_69 = t;
  t = not_null(m_69);
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_69(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm v_69 (ATerm t)
  {
    ATerm i_82 = t;
    int j_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_69, t);
        ;
        LocalPopChoice(j_82);
      }
    else
      {
        t = i_82;
        t = Nil_0_0(t);
        t = j_87(t);
      }
    return(t);
  }
  t = v_69(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
  ATerm d_70 (ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL;
    t = not_null(z_69);
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = not_null(a_70);
    if(((b_70 != NULL) && (b_70 != t)))
      _fail(t);
    else
      b_70 = t;
    t = not_null(c_70);
    {
      ATerm r_31 (ATerm t)
      {
        t = not_null(b_70);
        return(t);
      }
      t = at_end_1_0(r_31, t);
    }
    return(t);
  }
  if(((y_69 != NULL) && (y_69 != t)))
    _fail(t);
  else
    y_69 = t;
  t = not_null(y_69);
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
      t = d_70(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_82 = t;
  int l_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(l_82);
    }
  else
    {
      t = k_82;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  ATerm y_70 (ATerm t)
  {
    ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,s_70 = NULL;
    ATerm a_71 (ATerm t)
    {
      ATerm t_70 = NULL,u_70 = NULL;
      ATerm b_71 (ATerm t)
      {
        ATerm v_70 = NULL,w_70 = NULL;
        t = not_null(u_70);
        if(((v_70 != NULL) && (v_70 != t)))
          _fail(t);
        else
          v_70 = t;
        t = not_null(u_70);
        {
          ATerm x_70 = NULL;
          ATerm e_71 (ATerm t)
          {
            t = not_null(x_70);
            if(((w_70 != NULL) && (w_70 != t)))
              _fail(t);
            else
              w_70 = t;
            t = not_null(x_70);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_70), not_null(v_70)), not_null(q_70));
          if(((x_70 != NULL) && (x_70 != t)))
            _fail(t);
          else
            x_70 = t;
          t = e_71(t);
          t = not_null(w_70);
        }
        return(t);
      }
      t = not_null(s_70);
      if(((t_70 != NULL) && (t_70 != t)))
        _fail(t);
      else
        t_70 = t;
      t = not_null(p_70);
      t = d_64(t);
      if(((u_70 != NULL) && (u_70 != t)))
        _fail(t);
      else
        u_70 = t;
      t = b_71(t);
      return(t);
    }
    t = not_null(k_70);
    if(((n_70 != NULL) && (n_70 != t)))
      _fail(t);
    else
      n_70 = t;
    t = not_null(l_70);
    if(((o_70 != NULL) && (o_70 != t)))
      _fail(t);
    else
      o_70 = t;
    t = not_null(m_70);
    if(((p_70 != NULL) && (p_70 != t)))
      _fail(t);
    else
      p_70 = t;
    t = not_null(k_70);
    {
      ATerm r_70 = NULL;
      ATerm z_70 (ATerm t)
      {
        t = not_null(r_70);
        if(((q_70 != NULL) && (q_70 != t)))
          _fail(t);
        else
          q_70 = t;
        t = not_null(r_70);
        return(t);
      }
      t = SSLgetAnnotations(not_null(n_70));
      if(((r_70 != NULL) && (r_70 != t)))
        _fail(t);
      else
        r_70 = t;
      t = z_70(t);
      t = not_null(o_70);
      t = c_64(t);
      if(((s_70 != NULL) && (s_70 != t)))
        _fail(t);
      else
        s_70 = t;
      t = a_71(t);
    }
    return(t);
  }
  if(((k_70 != NULL) && (k_70 != t)))
    _fail(t);
  else
    k_70 = t;
  t = not_null(k_70);
  if(match_cons(t, sym__2))
    {
      l_70 = ATgetArgument(t, 0);
      m_70 = ATgetArgument(t, 1);
      t = y_70(t);
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
  ATerm h_71 = NULL;
  ATerm j_71 (ATerm t)
  {
    ATerm i_71 = NULL;
    t = not_null(h_71);
    if(((i_71 != NULL) && (i_71 != t)))
      _fail(t);
    else
      i_71 = t;
    t = not_null(h_71);
    t = SSL_implode_string(not_null(i_71));
    return(t);
  }
  if(((h_71 != NULL) && (h_71 != t)))
    _fail(t);
  else
    h_71 = t;
  t = j_71(t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL;
  ATerm e_72 (ATerm t)
  {
    ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,y_71 = NULL;
    ATerm g_72 (ATerm t)
    {
      ATerm z_71 = NULL,a_72 = NULL;
      ATerm h_72 (ATerm t)
      {
        ATerm b_72 = NULL,c_72 = NULL;
        t = not_null(a_72);
        if(((b_72 != NULL) && (b_72 != t)))
          _fail(t);
        else
          b_72 = t;
        t = not_null(a_72);
        {
          ATerm d_72 = NULL;
          ATerm i_72 (ATerm t)
          {
            t = not_null(d_72);
            if(((c_72 != NULL) && (c_72 != t)))
              _fail(t);
            else
              c_72 = t;
            t = not_null(d_72);
            return(t);
          }
          t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_72)), not_null(z_71)), not_null(w_71));
          if(((d_72 != NULL) && (d_72 != t)))
            _fail(t);
          else
            d_72 = t;
          t = i_72(t);
          t = not_null(c_72);
        }
        return(t);
      }
      t = not_null(y_71);
      if(((z_71 != NULL) && (z_71 != t)))
        _fail(t);
      else
        z_71 = t;
      t = not_null(v_71);
      t = m_65(t);
      if(((a_72 != NULL) && (a_72 != t)))
        _fail(t);
      else
        a_72 = t;
      t = h_72(t);
      return(t);
    }
    t = not_null(q_71);
    if(((t_71 != NULL) && (t_71 != t)))
      _fail(t);
    else
      t_71 = t;
    t = not_null(r_71);
    if(((u_71 != NULL) && (u_71 != t)))
      _fail(t);
    else
      u_71 = t;
    t = not_null(s_71);
    if(((v_71 != NULL) && (v_71 != t)))
      _fail(t);
    else
      v_71 = t;
    t = not_null(q_71);
    {
      ATerm x_71 = NULL;
      ATerm f_72 (ATerm t)
      {
        t = not_null(x_71);
        if(((w_71 != NULL) && (w_71 != t)))
          _fail(t);
        else
          w_71 = t;
        t = not_null(x_71);
        return(t);
      }
      t = SSLgetAnnotations(not_null(t_71));
      if(((x_71 != NULL) && (x_71 != t)))
        _fail(t);
      else
        x_71 = t;
      t = f_72(t);
      t = not_null(u_71);
      t = l_65(t);
      if(((y_71 != NULL) && (y_71 != t)))
        _fail(t);
      else
        y_71 = t;
      t = g_72(t);
    }
    return(t);
  }
  if(((q_71 != NULL) && (q_71 != t)))
    _fail(t);
  else
    q_71 = t;
  t = not_null(q_71);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_71 = ATgetFirst((ATermList) t);
      s_71 = (ATerm) ATgetNext((ATermList) t);
      t = e_72(t);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm k_72 = NULL;
  ATerm m_72 (ATerm t)
  {
    ATerm l_72 = NULL;
    t = not_null(k_72);
    if(((l_72 != NULL) && (l_72 != t)))
      _fail(t);
    else
      l_72 = t;
    t = not_null(k_72);
    t = SSL_explode_string(not_null(l_72));
    return(t);
  }
  if(((k_72 != NULL) && (k_72 != t)))
    _fail(t);
  else
    k_72 = t;
  t = m_72(t);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  {
    ATerm m_82 = t;
    int n_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_72 (ATerm t)
        {
          ATerm o_82 = t;
          int p_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, p_72, t);
              ;
              LocalPopChoice(p_82);
            }
          else
            {
              t = o_82;
              {
                ATerm v_31 (ATerm t)
                {
                  ATerm o_72 = NULL;
                  if(((o_72 != NULL) && (o_72 != t)))
                    _fail(t);
                  else
                    o_72 = t;
                  t = not_null(o_72);
                  if(match_int(t, 47))
                    {
                      t = not_null(o_72);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm w_31 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(v_31, w_31, t);
              }
            }
          return(t);
        }
        t = p_72(t);
        ;
        LocalPopChoice(n_82);
      }
    else
      {
        t = m_82;
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
  ATerm q_82;
  q_82 = t;
  {
    ATerm d_73 = NULL,f_73 = NULL,h_73 = NULL,j_73 = NULL,n_73 = NULL,r_73 = NULL,v_73 = NULL,z_73 = NULL;
    t = term_s_82;
    t = set_config_0_0(t);
    t = term_t_82;
    t = set_config_0_0(t);
    t = term_u_82;
    t = set_config_0_0(t);
    {
      ATerm v_82;
      v_82 = t;
      {
        ATerm e_73 = NULL;
        ATerm d_74 (ATerm t)
        {
          t = not_null(e_73);
          if(((d_73 != NULL) && (d_73 != t)))
            _fail(t);
          else
            d_73 = t;
          t = not_null(e_73);
          return(t);
        }
        t = term_w_82;
        t = xtc_find_path_0_0(t);
        if(((e_73 != NULL) && (e_73 != t)))
          _fail(t);
        else
          e_73 = t;
        t = d_74(t);
      }
      t = v_82;
      {
        ATerm x_82;
        x_82 = t;
        {
          ATerm g_73 = NULL;
          ATerm e_74 (ATerm t)
          {
            t = not_null(g_73);
            if(((f_73 != NULL) && (f_73 != t)))
              _fail(t);
            else
              f_73 = t;
            t = not_null(g_73);
            return(t);
          }
          t = term_y_82;
          t = xtc_find_path_0_0(t);
          if(((g_73 != NULL) && (g_73 != t)))
            _fail(t);
          else
            g_73 = t;
          t = e_74(t);
        }
        t = x_82;
        {
          ATerm i_73 = NULL;
          ATerm f_74 (ATerm t)
          {
            t = not_null(i_73);
            if(((h_73 != NULL) && (h_73 != t)))
              _fail(t);
            else
              h_73 = t;
            t = not_null(i_73);
            return(t);
          }
          t = term_z_82;
          t = xtc_find_path_0_0(t);
          if(((i_73 != NULL) && (i_73 != t)))
            _fail(t);
          else
            i_73 = t;
          t = f_74(t);
          t = (ATerm) ATmakeAppl(sym__2, term_t_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_73)), term_t_59), not_null(f_73)), term_t_59), not_null(d_73)), term_t_59));
          t = set_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, term_a_38, (ATerm) ATinsert(ATinsert(ATempty, term_b_83), term_a_83));
          t = set_config_0_0(t);
          {
            ATerm c_83;
            c_83 = t;
            {
              ATerm k_73 = NULL,m_73 = NULL;
              ATerm h_74 (ATerm t)
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
              ATerm g_74 (ATerm t)
              {
                t = not_null(l_73);
                if(((k_73 != NULL) && (k_73 != t)))
                  _fail(t);
                else
                  k_73 = t;
                t = not_null(l_73);
                return(t);
              }
              t = term_d_83;
              t = xtc_find_path_0_0(t);
              if(((l_73 != NULL) && (l_73 != t)))
                _fail(t);
              else
                l_73 = t;
              t = g_74(t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), term_e_83);
              t = conc_strings_0_0(t);
              if(((m_73 != NULL) && (m_73 != t)))
                _fail(t);
              else
                m_73 = t;
              t = h_74(t);
            }
            t = c_83;
            {
              ATerm f_83;
              f_83 = t;
              {
                ATerm o_73 = NULL,q_73 = NULL;
                ATerm j_74 (ATerm t)
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
                ATerm i_74 (ATerm t)
                {
                  t = not_null(p_73);
                  if(((o_73 != NULL) && (o_73 != t)))
                    _fail(t);
                  else
                    o_73 = t;
                  t = not_null(p_73);
                  return(t);
                }
                t = term_d_83;
                t = xtc_find_path_0_0(t);
                if(((p_73 != NULL) && (p_73 != t)))
                  _fail(t);
                else
                  p_73 = t;
                t = i_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), term_e_83);
                t = conc_strings_0_0(t);
                if(((q_73 != NULL) && (q_73 != t)))
                  _fail(t);
                else
                  q_73 = t;
                t = j_74(t);
              }
              t = f_83;
              {
                ATerm s_73 = NULL,u_73 = NULL;
                ATerm l_74 (ATerm t)
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
                ATerm k_74 (ATerm t)
                {
                  t = not_null(t_73);
                  if(((s_73 != NULL) && (s_73 != t)))
                    _fail(t);
                  else
                    s_73 = t;
                  t = not_null(t_73);
                  return(t);
                }
                t = term_g_83;
                t = xtc_find_path_0_0(t);
                if(((t_73 != NULL) && (t_73 != t)))
                  _fail(t);
                else
                  t_73 = t;
                t = k_74(t);
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), term_e_83);
                t = conc_strings_0_0(t);
                if(((u_73 != NULL) && (u_73 != t)))
                  _fail(t);
                else
                  u_73 = t;
                t = l_74(t);
                t = (ATerm) ATmakeAppl(sym__2, term_d_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_73)), term_t_59), not_null(n_73)), term_t_59), not_null(j_73)), term_t_59));
                t = set_config_0_0(t);
                {
                  ATerm h_83;
                  h_83 = t;
                  {
                    ATerm w_73 = NULL,y_73 = NULL;
                    ATerm n_74 (ATerm t)
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
                    ATerm m_74 (ATerm t)
                    {
                      t = not_null(x_73);
                      if(((w_73 != NULL) && (w_73 != t)))
                        _fail(t);
                      else
                        w_73 = t;
                      t = not_null(x_73);
                      return(t);
                    }
                    t = term_d_83;
                    t = xtc_find_path_0_0(t);
                    if(((x_73 != NULL) && (x_73 != t)))
                      _fail(t);
                    else
                      x_73 = t;
                    t = m_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_i_83);
                    t = conc_strings_0_0(t);
                    if(((y_73 != NULL) && (y_73 != t)))
                      _fail(t);
                    else
                      y_73 = t;
                    t = n_74(t);
                  }
                  t = h_83;
                  {
                    ATerm a_74 = NULL,c_74 = NULL;
                    ATerm p_74 (ATerm t)
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
                    ATerm o_74 (ATerm t)
                    {
                      t = not_null(b_74);
                      if(((a_74 != NULL) && (a_74 != t)))
                        _fail(t);
                      else
                        a_74 = t;
                      t = not_null(b_74);
                      return(t);
                    }
                    t = term_g_83;
                    t = xtc_find_path_0_0(t);
                    if(((b_74 != NULL) && (b_74 != t)))
                      _fail(t);
                    else
                      b_74 = t;
                    t = o_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), term_i_83);
                    t = conc_strings_0_0(t);
                    if(((c_74 != NULL) && (c_74 != t)))
                      _fail(t);
                    else
                      c_74 = t;
                    t = p_74(t);
                    t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_83), term_m_83), not_null(z_73)), term_j_83), term_l_83), term_k_83), not_null(v_73)), term_j_83));
                    t = set_config_0_0(t);
                    t = term_o_83;
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
  t = q_82;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm h_32 (ATerm t)
    {
      ATerm r_74 = NULL;
      t = term_n_78;
      t = get_config_0_0(t);
      {
        ATerm s_74 = NULL;
        ATerm t_74 (ATerm t)
        {
          t = not_null(s_74);
          if(((r_74 != NULL) && (r_74 != t)))
            _fail(t);
          else
            r_74 = t;
          t = not_null(s_74);
          return(t);
        }
        t = term_p_83;
        t = xtc_find_0_0(t);
        if(((s_74 != NULL) && (s_74 != t)))
          _fail(t);
        else
          s_74 = t;
        t = t_74(t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_74), term_d_36);
        t = copy_file_0_0(t);
        t = term_l_33;
        t = exit_0_0(t);
      }
      return(t);
    }
    t = try_1_0(h_32, t);
    {
      ATerm i_32 (ATerm t)
      {
        t = term_s_78;
        t = get_config_0_0(t);
        t = sc_version_0_0(t);
        t = term_l_33;
        t = exit_0_0(t);
        return(t);
      }
      t = try_1_0(i_32, t);
      {
        ATerm q_83 = t;
        int r_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_83;
            s_83 = t;
            t = term_i_58;
            t = get_config_0_0(t);
            t = s_83;
            ;
            LocalPopChoice(r_83);
          }
        else
          {
            t = q_83;
            t = (ATerm) ATinsert(ATempty, term_t_83);
            t = fatal_error_0_0(t);
          }
        t = sc_announce_0_0(t);
        {
          ATerm p_32 (ATerm t)
          {
            ATerm u_83;
            u_83 = t;
            t = term_i_58;
            t = get_config_0_0(t);
            {
              ATerm q_32 (ATerm t)
              {
                t = term_v_83;
                return(t);
              }
              t = debug_1_0(q_32, t);
            }
            t = u_83;
            return(t);
          }
          t = if_verbose1_1_0(p_32, t);
        }
      }
    }
  }
  return(t);
}
ATerm sc_0_0 (ATerm t)
{
  ATerm w_83 = t;
  int x_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm b_33 (ATerm t)
        {
          ATerm c_33 (ATerm t)
          {
            ATerm x_74 = NULL;
            ATerm y_74 = NULL;
            ATerm d_75 (ATerm t)
            {
              t = not_null(y_74);
              if(((x_74 != NULL) && (x_74 != t)))
                _fail(t);
              else
                x_74 = t;
              t = not_null(y_74);
              return(t);
            }
            if(((y_74 != NULL) && (y_74 != t)))
              _fail(t);
            else
              y_74 = t;
            t = d_75(t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(CheckATermList(not_null(x_74)), term_y_83));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose1_1_0(c_33, t);
          return(t);
        }
        t = profile_p__2_0(b_33, compile_0_0, t);
        {
          ATerm j_33 (ATerm t)
          {
            ATerm z_74 = NULL;
            ATerm a_75 = NULL;
            ATerm e_75 (ATerm t)
            {
              t = not_null(a_75);
              if(((z_74 != NULL) && (z_74 != t)))
                _fail(t);
              else
                z_74 = t;
              t = not_null(a_75);
              return(t);
            }
            t = run_time_0_0(t);
            if(((a_75 != NULL) && (a_75 != t)))
              _fail(t);
            else
              a_75 = t;
            t = e_75(t);
            t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_84), not_null(z_74)), term_z_83));
            t = printnl_0_0(t);
            return(t);
          }
          t = if_verbose2_1_0(j_33, t);
          t = term_l_33;
          t = exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(x_83);
    }
  else
    {
      t = w_83;
      {
        ATerm b_75 = NULL;
        ATerm c_75 = NULL;
        ATerm f_75 (ATerm t)
        {
          t = not_null(c_75);
          if(((b_75 != NULL) && (b_75 != t)))
            _fail(t);
          else
            b_75 = t;
          t = not_null(c_75);
          return(t);
        }
        t = run_time_0_0(t);
        if(((c_75 != NULL) && (c_75 != t)))
          _fail(t);
        else
          c_75 = t;
        t = f_75(t);
        t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_84), not_null(b_75)), term_b_84));
        t = printnl_0_0(t);
        t = term_u_47;
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
