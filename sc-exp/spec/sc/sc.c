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
ATerm term_p_63;
ATerm term_o_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_h_63;
ATerm term_f_63;
ATerm term_b_63;
ATerm term_z_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_p_62;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_k_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_h_62;
ATerm term_f_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_w_60;
ATerm term_x_59;
ATerm term_o_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_m_55;
ATerm term_k_55;
ATerm term_g_55;
ATerm term_z_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_g_54;
ATerm term_e_54;
ATerm term_c_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_s_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_x_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_e_51;
ATerm term_u_50;
ATerm term_r_50;
ATerm term_k_50;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_i_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_n_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_i_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_q_46;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_k_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_a_41;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_k_40;
ATerm term_i_40;
ATerm term_d_39;
ATerm term_y_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_c_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
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
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_g_29;
ATerm term_z_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_n_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
void init_constant_terms (void)
{
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_s_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_30, term_g_29, term_f_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_30, term_a_20, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_30, term_b_27, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_30, term_t_30, term_v_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_30, term_y_30, term_d_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_31, term_m_31, term_n_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_31, term_u_31, term_v_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_31, term_z_31, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_32, term_j_32, term_k_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_32, term_r_32, term_s_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_33, term_b_33, term_c_33);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_33, term_f_33, term_k_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_33, term_n_33, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_33, term_r_33, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_34, term_j_34, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_34, term_n_34, term_w_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_34, term_z_34, term_a_35);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_35, term_d_35, term_e_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_35, term_h_35, term_i_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_35, term_t_35, term_u_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_35, term_x_35, term_b_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_36, term_f_36, term_g_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_36, term_j_36, term_k_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_36, term_r_36, term_s_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_36, term_z_36, term_a_37);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_37, term_d_37, term_f_37);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_37, term_k_37, term_p_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_37, term_s_37, term_x_37);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_r_45);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_b_48);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_c_27);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_c_27);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_c_27);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_c_27);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_c_27);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_c_27);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_i_53, term_c_27);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_v_19);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym__2, term_c_54, term_c_27);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym__2, term_m_54, term_c_27);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(sym__2, term_r_54, term_c_27);
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(sym__2, term_p_57, term_g_58);
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(sym__2, term_c_59, term_c_27);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym__3, term_p_57, term_g_58, (ATerm) ATempty);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(sym__2, term_n_44, term_a_62);
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_g_29);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_v_19);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATempty);
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
ATerm bound_unbound_vars_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm output_optimized_0 (ATerm);
ATerm stratego_of_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm desugar_case_0 (ATerm);
ATerm compile_match_0 (ATerm);
ATerm dead_def_elim_0 (ATerm);
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
        ATerm s_19;
        s_19 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = s_19;
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
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_92(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
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
      t = term_v_19;
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
    ATerm w_19;
    w_19 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_z_19;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_a_20);
        t = geq_0(t);
      }
    }
    t = w_19;
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
            t = term_b_20;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm e_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_20;
              t = get_config_0(t);
              ;
              LocalPopChoice(j_20);
            }
          else
            {
              t = e_20;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_l_20;
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
                t = term_n_20;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_k_20), not_null(c_4)));
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
            t = term_x_20;
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
            t = term_y_20;
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
                t = term_z_20;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_k_20), not_null(r_4)), term_b_21));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(v_4));
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
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21;
      e_21 = t;
      {
        t = term_b_21;
        t = get_config_0(t);
      }
      t = e_21;
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
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
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_i_21));
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
        ATerm k_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_n_21);
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
            t = term_n_21;
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = k_21;
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
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
                        ATerm q_21 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_21 = t;
                            int d_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(d_22);
                              }
                            else
                              {
                                t = y_21;
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
                            t = q_21;
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
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
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
    t = term_e_22;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_k_22;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_l_22);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_m_22;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm n_22;
    n_22 = t;
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
    t = n_22;
    {
      ATerm b_7 = NULL;
      t = term_o_22;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_o_22);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_t_22)), not_null(w_6));
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
    ATerm u_22;
    u_22 = t;
    {
      ATerm m_1 (ATerm t)
      {
        t = term_v_22;
        return(t);
      }
      t = debug_1(t, m_1);
      {
        ATerm w_22;
        w_22 = t;
        {
          t = term_x_22;
          t = get_config_0(t);
        }
        t = w_22;
        {
          ATerm n_1 (ATerm t)
          {
            ATerm k_7 = NULL;
            ATerm o_1 (ATerm t)
            {
              t = term_d_23;
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
              t = term_e_23;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_n_23), term_m_23);
              return(t);
            }
            t = xtc_transform_2(t, p_1, q_1);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm n_7 = NULL;
                ATerm s_1 (ATerm t)
                {
                  t = term_o_23;
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
                  t = (ATerm) ATinsert(ATempty, term_p_23);
                  return(t);
                }
                t = say_1(t, t_1);
              }
            }
          }
        }
      }
    }
    t = u_22;
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_q_23;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm bound_unbound_vars_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_w_23;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, w_1, x_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_a_24;
    return(t);
  }
  ATerm z_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = term_b_24;
      return(t);
    }
    t = debug_1(t, b_2);
    return(t);
  }
  t = if_verbose2_1(t, a_2);
  {
    ATerm c_2 (ATerm t)
    {
      ATerm f_2 (ATerm t)
      {
        ATerm e_8 = NULL;
        ATerm f_8 = NULL;
        f_8 = t;
        if(((e_8 != NULL) && (e_8 != f_8)))
          _fail(f_8);
        else
          e_8 = f_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(CheckATermList(not_null(e_8)), term_e_24));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, f_2);
      return(t);
    }
    ATerm e_2 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = bound_unbound_vars_0(t);
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
                    ATerm g_2 (ATerm t)
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = term_h_24;
                        return(t);
                      }
                      t = get_outfile_1(t, h_2);
                      return(t);
                    }
                    t = rename_to_1(t, g_2);
                  }
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, c_2, e_2);
  }
  return(t);
}
ATerm output_optimized_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm i_24;
    i_24 = t;
    {
      ATerm j_2 (ATerm t)
      {
        t = term_j_24;
        return(t);
      }
      t = debug_1(t, j_2);
      {
        ATerm l_24;
        l_24 = t;
        {
          t = term_m_24;
          t = get_config_0(t);
        }
        t = l_24;
        {
          ATerm k_2 (ATerm t)
          {
            ATerm m_8 = NULL;
            ATerm l_2 (ATerm t)
            {
              t = term_n_24;
              return(t);
            }
            t = get_outfile_1(t, l_2);
            {
              m_8 = t;
              if(((k_8 != NULL) && (k_8 != m_8)))
                _fail(m_8);
              else
                k_8 = m_8;
            }
            return(t);
          }
          t = copy_to_1(t, k_2);
          {
            ATerm m_2 (ATerm t)
            {
              t = term_e_23;
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              ATerm n_8 = NULL;
              ATerm o_8 = NULL;
              t = pass_verbose_0(t);
              {
                o_8 = t;
                if(((n_8 != NULL) && (n_8 != o_8)))
                  _fail(o_8);
                else
                  n_8 = o_8;
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_8)), term_m_23);
              return(t);
            }
            t = xtc_transform_2(t, m_2, n_2);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm p_8 = NULL;
                ATerm p_2 (ATerm t)
                {
                  t = term_o_24;
                  return(t);
                }
                t = get_outfile_1(t, p_2);
                {
                  p_8 = t;
                  if(((l_8 != NULL) && (l_8 != p_8)))
                    _fail(p_8);
                  else
                    l_8 = p_8;
                }
                return(t);
              }
              t = copy_to_1(t, o_2);
              {
                ATerm q_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_p_23);
                  return(t);
                }
                t = say_1(t, q_2);
              }
            }
          }
        }
      }
    }
    t = i_24;
    return(t);
  }
  t = try_1(t, i_2);
  return(t);
}
ATerm stratego_of_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_p_24;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_q_24;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm desugar_case_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = term_r_24;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, y_2, z_2);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    t = term_s_24;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, c_3, d_3);
  return(t);
}
ATerm dead_def_elim_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_a_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, e_3, f_3);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_f_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, g_3, j_3);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = term_g_25;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm s_9 = NULL;
    ATerm t_9 = NULL;
    t = pass_verbose_0(t);
    {
      t_9 = t;
      if(((s_9 != NULL) && (s_9 != t_9)))
        _fail(t_9);
      else
        s_9 = t_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, m_3, q_3);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = term_h_25;
    return(t);
  }
  ATerm s_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, r_3, s_3);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      t = term_i_25;
      return(t);
    }
    t = debug_1(t, w_3);
    return(t);
  }
  t = if_verbose2_1(t, t_3);
  {
    ATerm x_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm a_10 = NULL;
        ATerm b_10 = NULL;
        b_10 = t;
        if(((a_10 != NULL) && (a_10 != b_10)))
          _fail(b_10);
        else
          a_10 = b_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_j_25));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, z_3);
      return(t);
    }
    ATerm y_3 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm d_4 (ATerm t)
        {
          ATerm k_25;
          k_25 = t;
          {
            ATerm l_25 = t;
            if((PushChoice() == 0))
              {
                t = term_m_25;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_25;
              }
          }
          t = k_25;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, d_4);
        {
          t = inline_0(t);
          {
            t = dead_def_elim_0(t);
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
      }
      return(t);
    }
    t = profile_p__2(t, x_3, y_3);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = term_n_25;
    return(t);
  }
  ATerm j_4 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, i_4, j_4);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    t = term_q_25;
    return(t);
  }
  ATerm l_4 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, k_4, l_4);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm o_10 = NULL,q_10 = NULL;
    ATerm w_25;
    w_25 = t;
    {
      ATerm p_10 = NULL;
      t = pass_verbose_0(t);
      {
        p_10 = t;
        if(((o_10 != NULL) && (o_10 != p_10)))
          _fail(p_10);
        else
          o_10 = p_10;
      }
    }
    t = w_25;
    {
      ATerm t_10 = NULL;
      t = term_x_25;
      {
        t = get_config_0(t);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm r_10 = NULL;
            ATerm s_10 = NULL;
            s_10 = t;
            if(((r_10 != NULL) && (r_10 != s_10)))
              _fail(s_10);
            else
              r_10 = s_10;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), term_x_25);
            return(t);
          }
          t = map_1(t, o_4);
          {
            t_10 = t;
            if(((q_10 != NULL) && (q_10 != t_10)))
              _fail(t_10);
            else
              q_10 = t_10;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_10)), (ATerm) ATinsert(ATempty, term_t_22)), not_null(o_10));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, m_4, n_4);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm y_10 = NULL;
    ATerm z_10 = NULL;
    t = pass_verbose_0(t);
    {
      z_10 = t;
      if(((y_10 != NULL) && (y_10 != z_10)))
        _fail(z_10);
      else
        y_10 = z_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, s_4, z_4);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm c_11 = NULL;
    ATerm d_11 = NULL;
    t = pass_verbose_0(t);
    {
      d_11 = t;
      if(((c_11 != NULL) && (c_11 != d_11)))
        _fail(d_11);
      else
        c_11 = d_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(c_11)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, a_5, b_5);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm a_26;
    a_26 = t;
    {
      t = term_b_26;
      t = get_config_0(t);
    }
    t = a_26;
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            t = (ATerm) ATinsert(ATempty, term_k_26);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm d_5 (ATerm t)
        {
          ATerm h_11 = NULL;
          ATerm g_5 (ATerm t)
          {
            t = term_n_26;
            return(t);
          }
          t = get_outfile_1(t, g_5);
          {
            h_11 = t;
            if(((g_11 != NULL) && (g_11 != h_11)))
              _fail(h_11);
            else
              g_11 = h_11;
          }
          return(t);
        }
        t = copy_to_1(t, d_5);
        {
          ATerm h_5 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_o_26);
            return(t);
          }
          t = say_1(t, h_5);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, c_5);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    ATerm p_26;
    p_26 = t;
    {
      ATerm k_11 = NULL;
      ATerm l_11 = NULL;
      t = term_q_26;
      {
        t = get_config_0(t);
        {
          l_11 = t;
          if(((k_11 != NULL) && (k_11 != l_11)))
            _fail(l_11);
          else
            k_11 = l_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_11), term_a_20);
        t = geq_0(t);
      }
    }
    t = p_26;
    t = j_101(t);
    return(t);
  }
  t = try_1(t, m_5);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm r_11 = NULL;
  ATerm n_5 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    ATerm p_11 = NULL;
    ATerm q_11 = NULL;
    t = pass_verbose_0(t);
    {
      q_11 = t;
      if(((p_11 != NULL) && (p_11 != q_11)))
        _fail(q_11);
      else
        p_11 = q_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_11)), term_t_22);
    return(t);
  }
  t = xtc_transform_2(t, n_5, o_5);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm q_5 (ATerm t)
      {
        ATerm s_11 = NULL;
        ATerm r_5 (ATerm t)
        {
          t = term_u_26;
          return(t);
        }
        t = get_outfile_1(t, r_5);
        {
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
        }
        return(t);
      }
      t = copy_to_1(t, q_5);
      {
        ATerm s_5 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_11)), term_z_26);
          return(t);
        }
        t = say_1(t, s_5);
      }
      return(t);
    }
    t = if_keep2_1(t, p_5);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm k_101 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm w_11 = NULL;
      ATerm x_11 = NULL;
      t = term_q_26;
      {
        t = get_config_0(t);
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), term_b_27);
        t = geq_0(t);
      }
    }
    t = a_27;
    t = k_101(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Specification_1))
    {
      d_12 = ATgetArgument(c_12, 0);
      {
        ATerm f_12 = NULL;
        ATerm g_12 = NULL;
        t = term_c_27;
        {
          t = e_79(t);
          {
            g_12 = t;
            if(((f_12 != NULL) && (f_12 != g_12)))
              _fail(g_12);
            else
              f_12 = g_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(d_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_27, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_12)), (ATerm) ATempty))))));
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
  ATerm l_12 = NULL,n_12 = NULL;
  ATerm v_5 (ATerm t)
  {
    ATerm l_27;
    l_27 = t;
    {
      ATerm m_12 = NULL;
      t = term_m_27;
      {
        t = get_config_0(t);
        {
          m_12 = t;
          {
            if(((l_12 != NULL) && (l_12 != m_12)))
              _fail(m_12);
            else
              l_12 = m_12;
            {
              ATerm w_5 (ATerm t)
              {
                ATerm a_6 (ATerm t)
                {
                  t = term_n_27;
                  return(t);
                }
                t = debug_1(t, a_6);
                return(t);
              }
              t = if_verbose2_1(t, w_5);
            }
          }
        }
      }
    }
    t = l_27;
    {
      ATerm c_6 (ATerm t)
      {
        ATerm g_6 (ATerm t)
        {
          t = not_null(l_12);
          return(t);
        }
        t = AddMain_1(t, g_6);
        return(t);
      }
      t = xtc_io_transform_1(t, c_6);
    }
    return(t);
  }
  t = try_1(t, v_5);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm j_6 (ATerm t)
      {
        ATerm o_12 = NULL;
        ATerm k_6 (ATerm t)
        {
          t = term_o_27;
          return(t);
        }
        t = get_outfile_1(t, k_6);
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
        return(t);
      }
      t = copy_to_1(t, j_6);
      {
        ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_12)), term_p_27);
          return(t);
        }
        t = say_1(t, l_6);
      }
      return(t);
    }
    t = if_keep3_1(t, i_6);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm w_12 = NULL,x_12 = NULL;
  u_12 = t;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm q_27;
      q_27 = t;
      {
        ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
        t = term_t_27;
        {
          t = table_get_0(t);
          {
            y_12 = t;
            t_12 :
            if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
              {
                z_12 = ATgetFirst((ATermList) y_12);
                a_13 = (ATerm) ATgetNext((ATermList) y_12);
                {
                  if(((x_12 != NULL) && (x_12 != z_12)))
                    _fail(z_12);
                  else
                    x_12 = z_12;
                  {
                    if(((w_12 != NULL) && (w_12 != a_13)))
                      _fail(a_13);
                    else
                      w_12 = a_13;
                    {
                      t = not_null(x_12);
                      {
                        ATerm n_6 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, n_6);
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
      t = q_27;
      {
        ATerm o_6 (ATerm t)
        {
          t = term_r_27;
          return(t);
        }
        t = end_scope_1(t, o_6);
      }
      return(t);
    }
    t = repeat_1(t, m_6);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_20;
        t = get_config_0(t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = term_n_21;
      }
    return(t);
  }
  t = copy_to_1(t, p_6);
  {
    t = term_v_19;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm f_13 = NULL,h_13 = NULL;
  ATerm w_27;
  w_27 = t;
  {
    ATerm g_13 = NULL;
    t = f_79(t);
    {
      g_13 = t;
      if(((f_13 != NULL) && (f_13 != g_13)))
        _fail(g_13);
      else
        f_13 = g_13;
    }
  }
  t = w_27;
  {
    ATerm i_13 = NULL;
    t = term_x_27;
    {
      t = get_config_0(t);
      {
        i_13 = t;
        if(((h_13 != NULL) && (h_13 != i_13)))
          _fail(i_13);
        else
          h_13 = i_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), not_null(f_13));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym_stderr_0))
    {
      ATerm r_13 = NULL,t_13 = NULL;
      ATerm y_27;
      y_27 = t;
      {
        ATerm s_13 = NULL;
        t = SSLgetAnnotations(not_null(p_13));
        {
          s_13 = t;
          if(((r_13 != NULL) && (r_13 != s_13)))
            _fail(s_13);
          else
            r_13 = s_13;
        }
      }
      t = y_27;
      {
        ATerm u_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(r_13));
        {
          u_13 = t;
          if(((t_13 != NULL) && (t_13 != u_13)))
            _fail(u_13);
          else
            t_13 = u_13;
        }
        t = not_null(t_13);
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
  ATerm c_14 = NULL;
  c_14 = t;
  b_14 :
  if(match_cons(c_14, sym_stdout_0))
    {
      ATerm e_14 = NULL,g_14 = NULL;
      ATerm z_27;
      z_27 = t;
      {
        ATerm f_14 = NULL;
        t = SSLgetAnnotations(not_null(c_14));
        {
          f_14 = t;
          if(((e_14 != NULL) && (e_14 != f_14)))
            _fail(f_14);
          else
            e_14 = f_14;
        }
      }
      t = z_27;
      {
        ATerm h_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(e_14));
        {
          h_14 = t;
          if(((g_14 != NULL) && (g_14 != h_14)))
            _fail(h_14);
          else
            g_14 = h_14;
        }
        t = not_null(g_14);
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
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_FILE_1))
    {
      u_14 = ATgetArgument(t_14, 0);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_14 = NULL;
            ATerm x_14 = NULL;
            t = q_0(t);
            {
              x_14 = t;
              {
                if(((w_14 != NULL) && (w_14 != x_14)))
                  _fail(x_14);
                else
                  w_14 = x_14;
                {
                  ATerm c_28 = t;
                  int d_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(d_28);
                    }
                  else
                    {
                      t = c_28;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(w_14));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm e_28 = t;
              int f_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_14 = NULL;
                  ATerm a_15 = NULL;
                  t = q_0(t);
                  {
                    a_15 = t;
                    {
                      if(((z_14 != NULL) && (z_14 != a_15)))
                        _fail(a_15);
                      else
                        z_14 = a_15;
                      {
                        ATerm g_28 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_28 = t;
                            int i_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(i_28);
                              }
                            else
                              {
                                t = h_28;
                                {
                                  ATerm k_28 = t;
                                  int s_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(s_28);
                                    }
                                  else
                                    {
                                      t = k_28;
                                      {
                                        ATerm b_15 = NULL;
                                        b_15 = t;
                                        if(((u_14 != NULL) && (u_14 != b_15)))
                                          _fail(b_15);
                                        else
                                          u_14 = b_15;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = g_28;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(z_14));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
                  ;
                  LocalPopChoice(f_28);
                }
              else
                {
                  t = e_28;
                  {
                    ATerm d_15 = NULL;
                    t = q_0(t);
                    {
                      d_15 = t;
                      if(((u_14 != NULL) && (u_14 != d_15)))
                        _fail(d_15);
                      else
                        u_14 = d_15;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_14));
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
  ATerm m_15 = NULL;
  ATerm s_6 (ATerm t)
  {
    ATerm t_28;
    t_28 = t;
    {
      t = term_u_28;
      t = get_config_0(t);
    }
    t = t_28;
    {
      ATerm t_6 (ATerm t)
      {
        ATerm n_15 = NULL;
        ATerm u_6 (ATerm t)
        {
          t = term_v_28;
          return(t);
        }
        t = get_outfile_1(t, u_6);
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        return(t);
      }
      t = copy_to_1(t, t_6);
      {
        ATerm w_28;
        w_28 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_z_28);
          t = echo_0(t);
        }
        t = w_28;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm s_15 = NULL,u_15 = NULL;
  ATerm t_15 = NULL;
  t = term_q_26;
  {
    ATerm a_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = a_29;
        t = term_g_29;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), term_g_29);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_q_26);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm z_15 = NULL;
  ATerm a_16 = NULL,c_16 = NULL;
  ATerm b_16 = NULL;
  t = term_z_19;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = term_g_29;
      }
    {
      b_16 = t;
      if(((a_16 != NULL) && (a_16 != b_16)))
        _fail(b_16);
      else
        a_16 = b_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), term_g_29);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          c_16 = t;
          if(((z_15 != NULL) && (z_15 != c_16)))
            _fail(c_16);
          else
            z_15 = c_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_15)), term_z_19);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm g_16 = NULL;
  ATerm h_16 = NULL;
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
        t = term_x_27;
        t = get_config_0(t);
      }
    }
  {
    h_16 = t;
    if(((g_16 != NULL) && (g_16 != h_16)))
      _fail(h_16);
    else
      g_16 = h_16;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), term_r_29);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym_stdin_0))
    {
      ATerm q_16 = NULL;
      ATerm r_16 = NULL;
      t = term_s_29;
      {
        t = ReadFromFile_0(t);
        {
          r_16 = t;
          if(((q_16 != NULL) && (q_16 != r_16)))
            _fail(r_16);
          else
            q_16 = r_16;
        }
      }
      t = not_null(q_16);
    }
  else
    {
      if(match_cons(o_16, sym_FILE_1))
        {
          p_16 = ATgetArgument(o_16, 0);
          {
            ATerm t_16 = NULL;
            ATerm u_16 = NULL;
            t = not_null(p_16);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  u_16 = t;
                  if(((t_16 != NULL) && (t_16 != u_16)))
                    _fail(u_16);
                  else
                    t_16 = u_16;
                }
              }
            }
            t = not_null(t_16);
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  d_17 = t;
  b_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      g_17 = ATgetArgument(d_17, 1);
      c_17 :
      if(match_cons(e_17, sym_Stream_1))
        {
          f_17 = ATgetArgument(e_17, 0);
          {
            ATerm j_17 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(f_17), not_null(g_17));
            {
              ATerm k_17 = NULL;
              k_17 = t;
              if(((j_17 != NULL) && (j_17 != k_17)))
                _fail(k_17);
              else
                j_17 = k_17;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_17));
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym__2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      {
        ATerm w_17 = NULL,y_17 = NULL;
        t = not_null(s_17);
        {
          ATerm x_17 = NULL;
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), term_t_29);
            {
              t = open_stream_0(t);
              {
                ATerm z_17 = NULL;
                z_17 = t;
                if(((y_17 != NULL) && (y_17 != z_17)))
                  _fail(z_17);
                else
                  y_17 = z_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(t_17));
                  {
                    t = d_99(t);
                    {
                      t = fclose_0(t);
                      t = not_null(t_17);
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
  ATerm f_18 = NULL;
  ATerm h_18 = NULL;
  f_18 = t;
  {
    ATerm i_18 = NULL;
    t = xtc_new_file_0(t);
    {
      i_18 = t;
      {
        if(((h_18 != NULL) && (h_18 != i_18)))
          _fail(i_18);
        else
          h_18 = i_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(f_18));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(h_18);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_18));
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
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_close_file(not_null(m_18));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      t = SSL_execvp(not_null(s_18), not_null(t_18));
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
  ATerm y_18 = NULL;
  y_18 = t;
  t = SSL_int_to_string(not_null(y_18));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_UnknownSignal_1))
    {
      h_19 = ATgetArgument(g_19, 0);
      {
        ATerm l_19 = NULL;
        ATerm m_19 = NULL;
        t = not_null(h_19);
        {
          t = int_to_string_0(t);
          {
            m_19 = t;
            if(((l_19 != NULL) && (l_19 != m_19)))
              _fail(m_19);
            else
              l_19 = m_19;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_29), not_null(l_19)), term_u_29);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(g_19, sym_Signal_3))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          j_19 = ATgetArgument(g_19, 2);
          {
            ATerm q_19 = NULL;
            ATerm r_19 = NULL;
            t = not_null(i_19);
            {
              t = int_to_string_0(t);
              {
                r_19 = t;
                if(((q_19 != NULL) && (q_19 != r_19)))
                  _fail(r_19);
                else
                  q_19 = r_19;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_19)), term_x_29), not_null(q_19)), term_w_29), not_null(h_19));
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
  ATerm x_19 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm y_19 = NULL;
    t = d_87(t);
    {
      y_19 = t;
      if(((x_19 != NULL) && (x_19 != y_19)))
        _fail(y_19);
      else
        x_19 = y_19;
    }
    return(t);
  }
  t = fetch_1(t, v_6);
  t = not_null(x_19);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_37), term_q_37), term_i_37), term_b_37), term_x_36), term_p_36), term_h_36), term_c_36), term_v_35), term_j_35), term_f_35), term_b_35), term_x_34), term_l_34), term_h_34), term_p_33), term_l_33), term_d_33), term_t_32), term_l_32), term_h_32), term_x_31), term_q_31), term_e_31), term_w_30), term_r_30), term_o_30), term_l_30);
        {
          ATerm c_7 (ATerm t)
          {
            ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
            f_20 = t;
            c_20 :
            if(match_cons(f_20, sym_Signal_3))
              {
                g_20 = ATgetArgument(f_20, 0);
                h_20 = ATgetArgument(f_20, 1);
                i_20 = ATgetArgument(f_20, 2);
                if(((d_20 != NULL) && (d_20 != h_20)))
                  _fail(h_20);
                else
                  d_20 = h_20;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, c_7);
        }
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(d_20));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm z_37;
  z_37 = t;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
      p_20 = t;
      o_20 :
      if(match_cons(p_20, sym_WaitStatus_3))
        {
          q_20 = ATgetArgument(p_20, 0);
          r_20 = ATgetArgument(p_20, 1);
          s_20 = ATgetArgument(p_20, 2);
          {
            ATerm v_20 = NULL;
            t = not_null(r_20);
            {
              ATerm a_38 = t;
              if((PushChoice() == 0))
                {
                  ATerm u_20 = NULL;
                  u_20 = t;
                  m_20 :
                  if(!(match_int(u_20, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = a_38;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm w_20 = NULL;
                    w_20 = t;
                    if(((v_20 != NULL) && (v_20 != w_20)))
                      _fail(w_20);
                    else
                      v_20 = w_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_20)), term_c_38));
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
    t = try_1(t, d_7);
  }
  t = z_37;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  t = SSL_waitpid(not_null(a_21));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm h_21 = NULL;
  ATerm j_21 = NULL;
  h_21 = t;
  {
    t = fork_0(t);
    {
      j_21 = t;
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_21 = NULL;
            l_21 = t;
            g_21 :
            if(match_int(l_21, 0))
              {
                t = not_null(h_21);
                t = y_101(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(h_21));
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
  ATerm u_21 = NULL;
  ATerm e_7 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
    v_21 = t;
    t_21 :
    if(match_cons(v_21, sym__2))
      {
        w_21 = ATgetArgument(v_21, 0);
        x_21 = ATgetArgument(v_21, 1);
        {
          ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
          if(((u_21 != NULL) && (u_21 != x_21)))
            _fail(x_21);
          else
            u_21 = x_21;
          {
            t = not_null(w_21);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  z_21 = t;
                  r_21 :
                  if(match_cons(z_21, sym_WaitStatus_3))
                    {
                      a_22 = ATgetArgument(z_21, 0);
                      b_22 = ATgetArgument(z_21, 1);
                      c_22 = ATgetArgument(z_21, 2);
                      s_21 :
                      if(match_int(a_22, 0))
                        {
                          t = not_null(u_21);
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
  t = fork_2(t, a_102, e_7);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym__2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      {
        ATerm f_7 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(j_22));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, f_7);
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
  ATerm p_22 = NULL;
  ATerm f_38;
  f_38 = t;
  {
    ATerm q_22 = NULL;
    t = v_108(t);
    {
      t = xtc_find_warning_0(t);
      {
        q_22 = t;
        if(((p_22 != NULL) && (p_22 != q_22)))
          _fail(q_22);
        else
          p_22 = q_22;
      }
    }
  }
  t = f_38;
  {
    ATerm g_38;
    g_38 = t;
    {
      ATerm r_22 = NULL;
      ATerm s_22 = NULL;
      s_22 = t;
      if(((r_22 != NULL) && (r_22 != s_22)))
        _fail(s_22);
      else
        r_22 = s_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), not_null(r_22));
        t = call_0(t);
      }
    }
    t = g_38;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym__2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      {
        ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
        ATerm i_38;
        i_38 = t;
        {
          ATerm i_23 = NULL;
          ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
          t = k_97(t);
          {
            i_23 = t;
            {
              if(((f_23 != NULL) && (f_23 != i_23)))
                _fail(i_23);
              else
                f_23 = i_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_23), not_null(b_23), not_null(c_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm k_38 = t;
                    int n_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_s_27);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(n_38);
                      }
                    else
                      {
                        t = k_38;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_23 = t;
                      y_22 :
                      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
                        {
                          k_23 = ATgetFirst((ATermList) j_23);
                          l_23 = (ATerm) ATgetNext((ATermList) j_23);
                          {
                            if(((g_23 != NULL) && (g_23 != k_23)))
                              _fail(k_23);
                            else
                              g_23 = k_23;
                            {
                              if(((h_23 != NULL) && (h_23 != l_23)))
                                _fail(l_23);
                              else
                                h_23 = l_23;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_23), term_s_27, (ATerm) ATinsert(CheckATermList(not_null(h_23)), (ATerm) ATinsert(CheckATermList(not_null(g_23)), not_null(b_23))));
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
        t = i_38;
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
  ATerm o_38;
  o_38 = t;
  {
    t = w_98(t);
    {
      ATerm g_7 (ATerm t)
      {
        t = term_p_38;
        return(t);
      }
      t = debug_1(t, g_7);
    }
  }
  t = o_38;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  ATerm c_24 (ATerm t)
  {
    ATerm q_38 = t;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
        x_23 = t;
        r_23 :
        if(match_cons(x_23, sym__2))
          {
            y_23 = ATgetArgument(x_23, 0);
            z_23 = ATgetArgument(x_23, 1);
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
        t = q_38;
      }
    {
      ATerm h_7 (ATerm t)
      {
        t = term_t_38;
        return(t);
      }
      t = obsolete_1(t, h_7);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), term_t_29);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm d_24 (ATerm t)
  {
    t = SSL_open_file(not_null(u_23), not_null(v_23));
    return(t);
  }
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm u_38 = t;
        int x_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_24(t);
            ;
            LocalPopChoice(x_38);
          }
        else
          {
            t = u_38;
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm f_24 = NULL;
  ATerm g_24 = NULL;
  t = term_c_27;
  {
    t = new_0(t);
    {
      g_24 = t;
      if(((f_24 != NULL) && (f_24 != g_24)))
        _fail(g_24);
      else
        f_24 = g_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), term_y_38);
    {
      t = conc_strings_0(t);
      {
        ATerm o_7 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, o_7);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm k_24 = NULL;
  t = new_file_0(t);
  {
    k_24 = t;
    {
      ATerm z_38;
      z_38 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), term_t_29);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), term_c_27);
            {
              ATerm p_7 (ATerm t)
              {
                t = term_r_27;
                return(t);
              }
              t = assert_1(t, p_7);
            }
          }
        }
      }
      t = z_38;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_stdin_0))
    {
      ATerm w_24 = NULL;
      ATerm x_24 = NULL;
      ATerm y_24 = NULL;
      t = xtc_new_file_0(t);
      {
        x_24 = t;
        {
          if(((w_24 != NULL) && (w_24 != x_24)))
            _fail(x_24);
          else
            w_24 = x_24;
          {
            ATerm z_24 = NULL;
            t = p_0(t);
            {
              z_24 = t;
              if(((y_24 != NULL) && (y_24 != z_24)))
                _fail(z_24);
              else
                y_24 = z_24;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_24), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_24)), term_k_20));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(w_24);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_24));
    }
  else
    {
      if(match_cons(u_24, sym_FILE_1))
        {
          v_24 = ATgetArgument(u_24, 0);
          {
            ATerm b_25 = NULL;
            ATerm c_25 = NULL;
            t = not_null(v_24);
            {
              ATerm d_25 = NULL;
              t = xtc_new_file_0(t);
              {
                c_25 = t;
                {
                  if(((b_25 != NULL) && (b_25 != c_25)))
                    _fail(c_25);
                  else
                    b_25 = c_25;
                  {
                    ATerm e_25 = NULL;
                    t = p_0(t);
                    {
                      e_25 = t;
                      if(((d_25 != NULL) && (d_25 != e_25)))
                        _fail(e_25);
                      else
                        d_25 = e_25;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), term_k_20), not_null(v_24)), term_d_39));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(b_25);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_25));
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
  ATerm p_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_stdin_0))
    {
      ATerm r_25 = NULL,t_25 = NULL;
      ATerm l_39;
      l_39 = t;
      {
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(p_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
      }
      t = l_39;
      {
        ATerm u_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(r_25));
        {
          u_25 = t;
          if(((t_25 != NULL) && (t_25 != u_25)))
            _fail(u_25);
          else
            t_25 = u_25;
        }
        t = not_null(t_25);
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_FILE_1))
    {
      e_26 = ATgetArgument(d_26, 0);
      {
        ATerm h_26 = NULL,j_26 = NULL;
        ATerm i_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          i_26 = t;
          if(((h_26 != NULL) && (h_26 != i_26)))
            _fail(i_26);
          else
            h_26 = i_26;
        }
        {
          t = not_null(e_26);
          {
            ATerm l_26 = NULL;
            t = e_71(t);
            {
              j_26 = t;
              {
                ATerm m_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(j_26)), not_null(h_26));
                {
                  m_26 = t;
                  if(((l_26 != NULL) && (l_26 != m_26)))
                    _fail(m_26);
                  else
                    l_26 = m_26;
                }
                t = not_null(l_26);
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
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(u_39);
        }
      else
        {
          t = o_39;
          t = stdin_0(t);
        }
      LocalPopChoice(n_39);
      t = xtc_transform_file_2(t, x_108, y_108);
    }
  else
    {
      t = m_39;
      t = xtc_transform_term_2(t, x_108, y_108);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm v_39;
    v_39 = t;
    {
      ATerm s_26 = NULL;
      ATerm t_26 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          t_26 = t;
          if(((s_26 != NULL) && (s_26 != t_26)))
            _fail(t_26);
          else
            s_26 = t_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_26), term_b_27);
        t = geq_0(t);
      }
    }
    t = v_39;
    t = i_100(t);
    return(t);
  }
  t = try_1(t, q_7);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_95 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm a_40 = t;
      int b_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, r_7);
          ;
          LocalPopChoice(b_40);
        }
      else
        {
          t = a_40;
          {
            ATerm c_40 = t;
            int h_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_7 (ATerm t)
                {
                  ATerm x_26 = NULL;
                  x_26 = t;
                  v_26 :
                  if(!(match_int(x_26, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, u_7, _id);
                ;
                LocalPopChoice(h_40);
              }
            else
              {
                t = c_40;
                {
                  ATerm v_7 (ATerm t)
                  {
                    ATerm y_26 = NULL;
                    y_26 = t;
                    w_26 :
                    if(!(match_int(y_26, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, v_7, o_95);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, r_7);
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
  ATerm e_27 = NULL,f_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_FILE_1))
    {
      f_27 = ATgetArgument(e_27, 0);
      {
        ATerm h_27 = NULL,i_27 = NULL;
        ATerm j_27 = NULL;
        t = not_null(f_27);
        {
          ATerm k_27 = NULL;
          t = basename_0(t);
          {
            j_27 = t;
            {
              if(((h_27 != NULL) && (h_27 != j_27)))
                _fail(j_27);
              else
                h_27 = j_27;
              {
                ATerm y_7 (ATerm t)
                {
                  ATerm z_7 (ATerm t)
                  {
                    t = term_i_40;
                    return(t);
                  }
                  t = debug_1(t, z_7);
                  return(t);
                }
                t = if_verbose3_1(t, y_7);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_40, not_null(h_27));
                  {
                    t = set_config_0(t);
                    {
                      ATerm n_40 = t;
                      int o_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_k_20;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(o_40);
                        }
                      else
                        {
                          t = n_40;
                          t = not_null(h_27);
                        }
                      {
                        k_27 = t;
                        {
                          if(((i_27 != NULL) && (i_27 != k_27)))
                            _fail(k_27);
                          else
                            i_27 = k_27;
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
                            t = if_verbose3_1(t, c_8);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(i_27));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_27));
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
    ATerm g_8 (ATerm t)
    {
      t = term_s_40;
      return(t);
    }
    ATerm h_8 (ATerm t)
    {
      ATerm j_28 = NULL,m_28 = NULL,o_28 = NULL,q_28 = NULL;
      ATerm x_40;
      x_40 = t;
      {
        ATerm l_28 = NULL;
        t = dep_name_0(t);
        {
          l_28 = t;
          if(((j_28 != NULL) && (j_28 != l_28)))
            _fail(l_28);
          else
            j_28 = l_28;
        }
      }
      t = x_40;
      {
        ATerm y_40;
        y_40 = t;
        {
          ATerm n_28 = NULL;
          t = pass_verbose_0(t);
          {
            n_28 = t;
            if(((m_28 != NULL) && (m_28 != n_28)))
              _fail(n_28);
            else
              m_28 = n_28;
          }
        }
        t = y_40;
        {
          ATerm z_40;
          z_40 = t;
          {
            ATerm p_28 = NULL;
            t = pass_keep_0(t);
            {
              p_28 = t;
              if(((o_28 != NULL) && (o_28 != p_28)))
                _fail(p_28);
              else
                o_28 = p_28;
            }
          }
          t = z_40;
          {
            ATerm r_28 = NULL;
            t = term_a_41;
            {
              t = get_config_0(t);
              {
                r_28 = t;
                if(((q_28 != NULL) && (q_28 != r_28)))
                  _fail(r_28);
                else
                  q_28 = r_28;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_28)), not_null(m_28)), not_null(q_28)), not_null(j_28));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, g_8, h_8);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm j_8 (ATerm t)
    {
      t = term_g_41;
      return(t);
    }
    t = debug_1(t, j_8);
    return(t);
  }
  t = if_verbose2_1(t, i_8);
  {
    ATerm q_8 (ATerm t)
    {
      ATerm s_8 (ATerm t)
      {
        ATerm x_28 = NULL;
        ATerm y_28 = NULL;
        y_28 = t;
        if(((x_28 != NULL) && (x_28 != y_28)))
          _fail(y_28);
        else
          x_28 = y_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(CheckATermList(not_null(x_28)), term_h_41));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, s_8);
      return(t);
    }
    ATerm r_8 (ATerm t)
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
    t = profile_p__2(t, q_8, r_8);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
    {
      d_29 = ATgetFirst((ATermList) c_29);
      e_29 = (ATerm) ATgetNext((ATermList) c_29);
      t = not_null(e_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym__2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      {
        ATerm k_41;
        k_41 = t;
        {
          ATerm p_29 = NULL;
          ATerm q_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), not_null(m_29));
          {
            ATerm l_41 = t;
            int q_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(q_41);
              }
            else
              {
                t = l_41;
                t = (ATerm) ATempty;
              }
            {
              q_29 = t;
              if(((p_29 != NULL) && (p_29 != q_29)))
                _fail(q_29);
              else
                p_29 = q_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_29), not_null(m_29), not_null(p_29));
            t = table_put_0(t);
          }
        }
        t = k_41;
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
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  ATerm r_41;
  r_41 = t;
  {
    ATerm g_30 = NULL;
    ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
    t = h_97(t);
    {
      g_30 = t;
      {
        if(((e_30 != NULL) && (e_30 != g_30)))
          _fail(g_30);
        else
          e_30 = g_30;
        {
          ATerm s_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), term_s_27);
              t = table_get_0(t);
              ;
              LocalPopChoice(t_41);
            }
          else
            {
              t = s_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_30 = t;
            b_30 :
            if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
              {
                i_30 = ATgetFirst((ATermList) h_30);
                j_30 = (ATerm) ATgetNext((ATermList) h_30);
                {
                  if(((d_30 != NULL) && (d_30 != i_30)))
                    _fail(i_30);
                  else
                    d_30 = i_30;
                  {
                    if(((c_30 != NULL) && (c_30 != j_30)))
                      _fail(j_30);
                    else
                      c_30 = j_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_30), term_s_27, not_null(c_30));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_30);
                          {
                            ATerm t_8 (ATerm t)
                            {
                              ATerm k_30 = NULL;
                              k_30 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(k_30));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_8);
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
  t = r_41;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  t = SSL_remove(not_null(u_30));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm y_41 = t;
  int z_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      ;
      LocalPopChoice(z_41);
    }
  else
    {
      t = y_41;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm z_30 = NULL;
  ATerm b_42;
  b_42 = t;
  {
    ATerm a_31 = NULL;
    ATerm b_31 = NULL;
    t = g_97(t);
    {
      a_31 = t;
      {
        if(((z_30 != NULL) && (z_30 != a_31)))
          _fail(a_31);
        else
          z_30 = a_31;
        {
          ATerm c_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), term_s_27);
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(d_42);
              }
            else
              {
                t = c_42;
                t = (ATerm) ATempty;
              }
            {
              c_31 = t;
              if(((b_31 != NULL) && (b_31 != c_31)))
                _fail(c_31);
              else
                b_31 = c_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_30), term_s_27, (ATerm) ATinsert(CheckATermList(not_null(b_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = b_42;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm h_31 = NULL,i_31 = NULL;
  ATerm w_8 (ATerm t)
  {
    t = term_r_27;
    return(t);
  }
  t = begin_scope_1(t, w_8);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm e_42;
      e_42 = t;
      {
        ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_27;
            t = table_get_0(t);
            ;
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          j_31 = t;
          g_31 :
          if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
            {
              k_31 = ATgetFirst((ATermList) j_31);
              l_31 = (ATerm) ATgetNext((ATermList) j_31);
              {
                if(((i_31 != NULL) && (i_31 != k_31)))
                  _fail(k_31);
                else
                  i_31 = k_31;
                {
                  if(((h_31 != NULL) && (h_31 != l_31)))
                    _fail(l_31);
                  else
                    h_31 = l_31;
                  {
                    t = not_null(i_31);
                    {
                      ATerm a_9 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, a_9);
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
      t = e_42;
      {
        ATerm b_9 (ATerm t)
        {
          t = term_r_27;
          return(t);
        }
        t = end_scope_1(t, b_9);
      }
      return(t);
    }
    t = restore_always_2(t, h_108, x_8);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm e_9 (ATerm t)
  {
    ATerm l_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_31 = NULL;
        ATerm p_31 = NULL;
        t = term_d_39;
        {
          t = get_config_0(t);
          {
            p_31 = t;
            if(((o_31 != NULL) && (o_31 != p_31)))
              _fail(p_31);
            else
              o_31 = p_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_31));
        ;
        LocalPopChoice(n_42);
      }
    else
      {
        t = l_42;
        t = term_s_29;
      }
    t = k_108(t);
    return(t);
  }
  t = xtc_temp_files_1(t, e_9);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
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
  t = xtc_input_1(t, f_9);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm i_9 (ATerm t)
  {
    ATerm o_42;
    o_42 = t;
    {
      ATerm s_31 = NULL;
      ATerm t_31 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_31), term_g_29);
        t = geq_0(t);
      }
    }
    t = o_42;
    t = g_100(t);
    return(t);
  }
  t = try_1(t, i_9);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  t = SSL_TicksToSeconds(not_null(w_31));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym__4))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      e_32 = ATgetArgument(b_32, 2);
      f_32 = ATgetArgument(b_32, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), not_null(f_32));
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym__2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm p_42 = t;
        int q_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_32), not_null(p_32));
            ;
            LocalPopChoice(q_42);
          }
        else
          {
            t = p_42;
            t = SSL_addr(not_null(o_32), not_null(p_32));
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
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym__4))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      y_32 = ATgetArgument(v_32, 2);
      z_32 = ATgetArgument(v_32, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_32), not_null(y_32));
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym__2))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      {
        ATerm r_42 = t;
        int s_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(i_33), not_null(j_33));
            ;
            LocalPopChoice(s_42);
          }
        else
          {
            t = r_42;
            t = SSL_subtr(not_null(i_33), not_null(j_33));
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
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  v_33 = t;
  s_33 :
  if(match_cons(v_33, sym__2))
    {
      w_33 = ATgetArgument(v_33, 0);
      b_34 = ATgetArgument(v_33, 1);
      t_33 :
      if(match_cons(w_33, sym__4))
        {
          x_33 = ATgetArgument(w_33, 0);
          y_33 = ATgetArgument(w_33, 1);
          z_33 = ATgetArgument(w_33, 2);
          a_34 = ATgetArgument(w_33, 3);
          u_33 :
          if(match_cons(b_34, sym__4))
            {
              c_34 = ATgetArgument(b_34, 0);
              d_34 = ATgetArgument(b_34, 1);
              e_34 = ATgetArgument(b_34, 2);
              f_34 = ATgetArgument(b_34, 3);
              {
                ATerm o_34 = NULL,q_34 = NULL,s_34 = NULL,u_34 = NULL;
                ATerm u_42;
                u_42 = t;
                {
                  ATerm p_34 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_33), not_null(c_34));
                  {
                    t = subt_0(t);
                    {
                      p_34 = t;
                      if(((o_34 != NULL) && (o_34 != p_34)))
                        _fail(p_34);
                      else
                        o_34 = p_34;
                    }
                  }
                }
                t = u_42;
                {
                  ATerm z_42;
                  z_42 = t;
                  {
                    ATerm r_34 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(d_34));
                    {
                      t = subt_0(t);
                      {
                        r_34 = t;
                        if(((q_34 != NULL) && (q_34 != r_34)))
                          _fail(r_34);
                        else
                          q_34 = r_34;
                      }
                    }
                  }
                  t = z_42;
                  {
                    ATerm a_43;
                    a_43 = t;
                    {
                      ATerm t_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_33), not_null(e_34));
                      {
                        t = subt_0(t);
                        {
                          t_34 = t;
                          if(((s_34 != NULL) && (s_34 != t_34)))
                            _fail(t_34);
                          else
                            s_34 = t_34;
                        }
                      }
                    }
                    t = a_43;
                    {
                      ATerm v_34 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(f_34));
                      {
                        t = subt_0(t);
                        {
                          v_34 = t;
                          if(((u_34 != NULL) && (u_34 != v_34)))
                            _fail(v_34);
                          else
                            u_34 = v_34;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(o_34), not_null(q_34), not_null(s_34), not_null(u_34));
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
  ATerm k_35 = NULL;
  ATerm b_43;
  b_43 = t;
  {
    ATerm l_35 = NULL;
    t = times_0(t);
    {
      l_35 = t;
      if(((k_35 != NULL) && (k_35 != l_35)))
        _fail(l_35);
      else
        k_35 = l_35;
    }
  }
  t = b_43;
  {
    t = b_104(t);
    {
      ATerm g_43;
      g_43 = t;
      {
        ATerm m_35 = NULL,o_35 = NULL,q_35 = NULL;
        ATerm n_35 = NULL;
        t = times_0(t);
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), not_null(k_35));
          {
            t = diff_times_0(t);
            {
              ATerm h_43;
              h_43 = t;
              {
                ATerm p_35 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    p_35 = t;
                    if(((o_35 != NULL) && (o_35 != p_35)))
                      _fail(p_35);
                    else
                      o_35 = p_35;
                  }
                }
              }
              t = h_43;
              {
                ATerm r_35 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    r_35 = t;
                    if(((q_35 != NULL) && (q_35 != r_35)))
                      _fail(r_35);
                    else
                      q_35 = r_35;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_35)), term_j_43), not_null(o_35)), term_i_43);
                  t = a_104(t);
                }
              }
            }
          }
        }
      }
      t = g_43;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm k_43;
  k_43 = t;
  {
    ATerm y_35 = NULL,a_36 = NULL;
    ATerm q_43;
    q_43 = t;
    {
      ATerm z_35 = NULL;
      t = p_98(t);
      {
        z_35 = t;
        if(((y_35 != NULL) && (y_35 != z_35)))
          _fail(z_35);
        else
          y_35 = z_35;
      }
    }
    t = q_43;
    {
      ATerm d_36 = NULL;
      d_36 = t;
      if(((a_36 != NULL) && (a_36 != d_36)))
        _fail(d_36);
      else
        a_36 = d_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_36)), not_null(y_35)));
        t = printnl_0(t);
      }
    }
  }
  t = k_43;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = r_43;
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_9);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            {
              ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
              m_36 = t;
              l_36 :
              if(match_cons(m_36, sym_Path_1))
                {
                  n_36 = ATgetArgument(m_36, 0);
                  t = not_null(n_36);
                }
              else
                {
                  if(match_cons(m_36, sym_Var_1))
                    {
                      n_36 = ATgetArgument(m_36, 0);
                      {
                        t = not_null(n_36);
                        {
                          ATerm y_43 = t;
                          int z_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_43);
                            }
                          else
                            {
                              t = y_43;
                              {
                                ATerm m_9 (ATerm t)
                                {
                                  t = term_c_44;
                                  return(t);
                                }
                                t = debug_1(t, m_9);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_36, sym_Prefix_2))
                        {
                          n_36 = ATgetArgument(m_36, 0);
                          o_36 = ATgetArgument(m_36, 1);
                          {
                            ATerm t_36 = NULL,v_36 = NULL;
                            ATerm d_44;
                            d_44 = t;
                            {
                              ATerm u_36 = NULL;
                              t = not_null(n_36);
                              {
                                t = eval_config_0(t);
                                {
                                  u_36 = t;
                                  if(((t_36 != NULL) && (t_36 != u_36)))
                                    _fail(u_36);
                                  else
                                    t_36 = u_36;
                                }
                              }
                            }
                            t = d_44;
                            {
                              ATerm w_36 = NULL;
                              t = not_null(o_36);
                              {
                                t = eval_config_0(t);
                                {
                                  w_36 = t;
                                  if(((v_36 != NULL) && (v_36 != w_36)))
                                    _fail(w_36);
                                  else
                                    v_36 = w_36;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(v_36));
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
  ATerm e_37 = NULL;
  e_37 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_44, not_null(e_37));
    {
      t = table_get_0(t);
      {
        ATerm n_9 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_44;
            i_44 = t;
            {
              ATerm g_37 = NULL;
              ATerm h_37 = NULL;
              h_37 = t;
              if(((g_37 != NULL) && (g_37 != h_37)))
                _fail(h_37);
              else
                g_37 = h_37;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_44, not_null(e_37), not_null(g_37));
                t = table_put_0(t);
              }
            }
            t = i_44;
          }
          return(t);
        }
        t = try_1(t, n_9);
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
  ATerm j_44;
  j_44 = t;
  {
    t = error_0(t);
    {
      t = term_g_29;
      t = exit_0(t);
    }
  }
  t = j_44;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_44;
      m_44 = t;
      {
        ATerm m_37 = NULL;
        ATerm n_37 = NULL;
        t = term_n_44;
        {
          t = get_config_0(t);
          {
            n_37 = t;
            if(((m_37 != NULL) && (m_37 != n_37)))
              _fail(n_37);
            else
              m_37 = n_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_44), term_y_44), term_x_44), term_w_44), term_s_44), term_r_44), term_q_44), not_null(m_37)), term_o_44));
          t = printnl_0(t);
        }
      }
      t = m_44;
      ;
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm o_37 = NULL;
        o_37 = t;
        l_37 :
        if(!(match_string(o_37, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      t = SSL_copy(not_null(v_37), not_null(w_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  t = SSL_table_keys(not_null(b_38));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_38 = NULL;
  h_38 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_9 (ATerm t)
      {
        ATerm j_38 = NULL;
        ATerm l_38 = NULL;
        j_38 = t;
        {
          ATerm m_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), not_null(j_38));
          {
            t = table_get_0(t);
            {
              m_38 = t;
              if(((l_38 != NULL) && (l_38 != m_38)))
                _fail(m_38);
              else
                l_38 = m_38;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(l_38));
        }
        return(t);
      }
      t = map_1(t, q_9);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm r_9 (ATerm t)
  {
    ATerm g_45;
    g_45 = t;
    {
      ATerm r_38 = NULL;
      ATerm s_38 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          s_38 = t;
          if(((r_38 != NULL) && (r_38 != s_38)))
            _fail(s_38);
          else
            r_38 = s_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_38), term_z_36);
        t = geq_0(t);
      }
    }
    t = g_45;
    t = k_100(t);
    return(t);
  }
  t = try_1(t, r_9);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm h_45;
  h_45 = t;
  {
    ATerm v_38 = NULL;
    ATerm w_38 = NULL;
    w_38 = t;
    if(((v_38 != NULL) && (v_38 != w_38)))
      _fail(w_38);
    else
      v_38 = w_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(v_38));
      t = printnl_0(t);
    }
  }
  t = h_45;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm e_39 = NULL,f_39 = NULL;
  c_39 = t;
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_39)));
    {
      t = table_get_0(t);
      {
        g_39 = t;
        a_39 :
        if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
          {
            h_39 = ATgetFirst((ATermList) g_39);
            k_39 = (ATerm) ATgetNext((ATermList) g_39);
            b_39 :
            if(match_cons(h_39, sym__2))
              {
                i_39 = ATgetArgument(h_39, 0);
                j_39 = ATgetArgument(h_39, 1);
                {
                  if(((e_39 != NULL) && (e_39 != i_39)))
                    _fail(i_39);
                  else
                    e_39 = i_39;
                  if(((f_39 != NULL) && (f_39 != j_39)))
                    _fail(j_39);
                  else
                    f_39 = j_39;
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
    t = not_null(f_39);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym__2))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      {
        ATerm w_39 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_39)));
        {
          t = table_get_0(t);
          {
            ATerm u_9 (ATerm t)
            {
              ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
              x_39 = t;
              p_39 :
              if(match_cons(x_39, sym__2))
                {
                  y_39 = ATgetArgument(x_39, 0);
                  z_39 = ATgetArgument(x_39, 1);
                  {
                    if(((t_39 != NULL) && (t_39 != y_39)))
                      _fail(y_39);
                    else
                      t_39 = y_39;
                    if(((w_39 != NULL) && (w_39 != z_39)))
                      _fail(z_39);
                    else
                      w_39 = z_39;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, u_9);
          }
        }
        t = not_null(w_39);
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
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 (ATerm t)
            {
              t = filter_1(t, v_93);
              return(t);
            }
            t = Cons_2(t, v_93, v_9);
            ;
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            {
              ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
              e_40 = t;
              d_40 :
              if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
                {
                  f_40 = ATgetFirst((ATermList) e_40);
                  g_40 = (ATerm) ATgetNext((ATermList) e_40);
                  {
                    t = not_null(g_40);
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
  ATerm j_40 (ATerm t)
  {
    ATerm y_9 (ATerm t)
    {
      t = c_80(t);
      t = j_40(t);
      return(t);
    }
    t = try_1(t, y_9);
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm q_45;
  q_45 = t;
  {
    ATerm z_9 (ATerm t)
    {
      t = term_s_45;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm v_45 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_45;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, z_9);
  }
  t = q_45;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_45;
  w_45 = t;
  {
    ATerm l_40 = NULL;
    ATerm m_40 = NULL;
    m_40 = t;
    if(((l_40 != NULL) && (l_40 != m_40)))
      _fail(m_40);
    else
      l_40 = m_40;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATempty, not_null(l_40)));
      t = printnl_0(t);
    }
  }
  t = w_45;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm x_45;
  x_45 = t;
  {
    t = t_98(t);
    t = debug_0(t);
  }
  t = x_45;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm c_10 (ATerm t)
  {
    ATerm y_45;
    y_45 = t;
    {
      ATerm p_40 = NULL;
      ATerm q_40 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          q_40 = t;
          if(((p_40 != NULL) && (p_40 != q_40)))
            _fail(q_40);
          else
            p_40 = q_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), term_f_33);
        t = geq_0(t);
      }
    }
    t = y_45;
    t = j_100(t);
    return(t);
  }
  t = try_1(t, c_10);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym__2))
    {
      v_40 = ATgetArgument(u_40, 0);
      w_40 = ATgetArgument(u_40, 1);
      {
        ATerm z_45;
        z_45 = t;
        {
          ATerm a_46 = t;
          int b_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_40), not_null(w_40));
              ;
              LocalPopChoice(b_46);
            }
          else
            {
              t = a_46;
              t = SSL_gtr(not_null(v_40), not_null(w_40));
            }
        }
        t = z_45;
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
  ATerm c_41 = NULL;
  ATerm c_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
      d_41 = t;
      b_41 :
      if(match_cons(d_41, sym__2))
        {
          e_41 = ATgetArgument(d_41, 0);
          f_41 = ATgetArgument(d_41, 1);
          {
            if(((c_41 != NULL) && (c_41 != e_41)))
              _fail(e_41);
            else
              c_41 = e_41;
            if(((c_41 != NULL) && (c_41 != f_41)))
              _fail(f_41);
            else
              c_41 = f_41;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(d_46);
    }
  else
    {
      t = c_46;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm d_10 (ATerm t)
  {
    ATerm e_46;
    e_46 = t;
    {
      ATerm i_41 = NULL;
      ATerm j_41 = NULL;
      t = term_z_19;
      {
        t = get_config_0(t);
        {
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_41), term_t_30);
        t = geq_0(t);
      }
    }
    t = e_46;
    t = l_100(t);
    return(t);
  }
  t = try_1(t, d_10);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym__2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      if(((o_41 != NULL) && (o_41 != p_41)))
        _fail(p_41);
      else
        o_41 = p_41;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
    {
      w_41 = ATgetFirst((ATermList) v_41);
      x_41 = (ATerm) ATgetNext((ATermList) v_41);
      {
        t = z_90(t);
        {
          ATerm g_10 (ATerm t)
          {
            ATerm a_42 = NULL;
            a_42 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_41), not_null(a_42));
              t = y_90(t);
            }
            return(t);
          }
          t = fetch_1(t, g_10);
        }
        t = not_null(x_41);
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
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      {
        t = not_null(h_42);
        {
          ATerm m_42 (ATerm t)
          {
            ATerm f_46 = t;
            int g_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_42);
                ;
                LocalPopChoice(g_46);
              }
            else
              {
                t = f_46;
                {
                  ATerm h_46 = t;
                  int k_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_10 (ATerm t)
                      {
                        t = not_null(i_42);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_90, h_10);
                      t = m_42(t);
                      ;
                      LocalPopChoice(k_46);
                    }
                  else
                    {
                      t = h_46;
                      t = Cons_2(t, _id, m_42);
                    }
                }
              }
            return(t);
          }
          t = m_42(t);
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
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  v_42 = t;
  t_42 :
  if(match_cons(v_42, sym__3))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      y_42 = ATgetArgument(v_42, 2);
      {
        ATerm l_46;
        l_46 = t;
        {
          ATerm c_43 = NULL;
          ATerm d_43 = NULL,f_43 = NULL;
          ATerm e_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_42), not_null(x_42));
          {
            ATerm o_46 = t;
            int p_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(p_46);
              }
            else
              {
                t = o_46;
                t = (ATerm) ATempty;
              }
            {
              e_43 = t;
              if(((d_43 != NULL) && (d_43 != e_43)))
                _fail(e_43);
              else
                d_43 = e_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(y_42));
            {
              t = union_0(t);
              {
                f_43 = t;
                if(((c_43 != NULL) && (c_43 != f_43)))
                  _fail(f_43);
                else
                  c_43 = f_43;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_42), not_null(x_42), not_null(c_43));
            t = set_0(t);
          }
        }
        t = l_46;
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
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym__2))
    {
      o_43 = ATgetArgument(n_43, 0);
      p_43 = ATgetArgument(n_43, 1);
      {
        t = not_null(p_43);
        {
          ATerm k_10 (ATerm t)
          {
            ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
            s_43 = t;
            l_43 :
            if(match_cons(s_43, sym__2))
              {
                t_43 = ATgetArgument(s_43, 0);
                u_43 = ATgetArgument(s_43, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_43), not_null(t_43), not_null(u_43));
                  t = j_105(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_10);
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
  ATerm a_44 = NULL;
  ATerm b_44 = NULL;
  b_44 = t;
  if(((a_44 != NULL) && (a_44 != b_44)))
    _fail(b_44);
  else
    a_44 = b_44;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), (ATerm) ATinsert(ATempty, term_q_46));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  ATerm p_44 (ATerm t)
  {
    t = SSL_fclose(not_null(h_44));
    return(t);
  }
  h_44 = t;
  f_44 :
  if(match_cons(h_44, sym_Stream_1))
    {
      g_44 = ATgetArgument(h_44, 0);
      {
        ATerm r_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(g_44));
            ;
            LocalPopChoice(u_46);
          }
        else
          {
            t = r_46;
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
ATerm read_from_stream_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym_Stream_1))
    {
      v_44 = ATgetArgument(u_44, 0);
      t = SSL_read_term_from_stream(not_null(v_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym__2))
    {
      e_45 = ATgetArgument(d_45, 0);
      f_45 = ATgetArgument(d_45, 1);
      {
        ATerm i_45 = NULL;
        t = SSL_fopen(not_null(e_45), not_null(f_45));
        {
          ATerm j_45 = NULL;
          j_45 = t;
          if(((i_45 != NULL) && (i_45 != j_45)))
            _fail(j_45);
          else
            i_45 = j_45;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_45));
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
  ATerm n_45 = NULL;
  n_45 = t;
  t = SSL_is_string(not_null(n_45));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_stdin_stream();
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
ATerm stdout_stream_0 (ATerm t)
{
  ATerm i_46 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm j_46 = NULL;
    j_46 = t;
    if(((i_46 != NULL) && (i_46 != j_46)))
      _fail(j_46);
    else
      i_46 = j_46;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_46));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm n_46 = NULL;
    n_46 = t;
    if(((m_46 != NULL) && (m_46 != n_46)))
      _fail(n_46);
    else
      m_46 = n_46;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_46));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  s_46 :
  if(match_cons(t_46, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(t_46, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(t_46, sym_stdin_0))
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
  ATerm h_47 = NULL;
  ATerm j_47 = NULL,k_47 = NULL;
  h_47 = t;
  {
    ATerm l_47 = NULL;
    ATerm n_47 = NULL,o_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
    t = not_null(h_47);
    {
      l_47 = t;
      {
        t = SSL_explode_term(not_null(l_47));
        {
          n_47 = t;
          e_47 :
          if(match_cons(n_47, sym__2))
            {
              o_47 = ATgetArgument(n_47, 0);
              r_47 = ATgetArgument(n_47, 1);
              f_47 :
              if(match_string(o_47, ""))
                {
                  g_47 :
                  if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
                    {
                      s_47 = ATgetFirst((ATermList) r_47);
                      t_47 = (ATerm) ATgetNext((ATermList) r_47);
                      {
                        if(((k_47 != NULL) && (k_47 != s_47)))
                          _fail(s_47);
                        else
                          k_47 = s_47;
                        if(((j_47 != NULL) && (j_47 != t_47)))
                          _fail(t_47);
                        else
                          j_47 = t_47;
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
    t = not_null(k_47);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  e_48 :
  if(match_cons(j_48, sym__2))
    {
      k_48 = ATgetArgument(j_48, 0);
      l_48 = ATgetArgument(j_48, 1);
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
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
                  ATerm l_10 (ATerm t)
                  {
                    ATerm m_48 = NULL,p_48 = NULL;
                    m_48 = t;
                    d_48 :
                    if(match_cons(m_48, sym_Path_1))
                      {
                        p_48 = ATgetArgument(m_48, 0);
                        t = not_null(p_48);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_10, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(y_46);
                }
              else
                {
                  t = x_46;
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
  ATerm x_48 = NULL;
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_48 = NULL;
      ATerm w_48 = NULL;
      w_48 = t;
      if(((v_48 != NULL) && (v_48 != w_48)))
        _fail(w_48);
      else
        v_48 = w_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_48), term_b_47);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
      {
        ATerm m_10 (ATerm t)
        {
          t = term_c_47;
          return(t);
        }
        t = debug_1(t, m_10);
        _fail(t);
      }
    }
  {
    ATerm d_47;
    d_47 = t;
    {
      ATerm y_48 = NULL;
      t = read_from_stream_0(t);
      {
        y_48 = t;
        if(((x_48 != NULL) && (x_48 != y_48)))
          _fail(y_48);
        else
          x_48 = y_48;
      }
    }
    t = d_47;
    {
      t = fclose_0(t);
      t = not_null(x_48);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym__2))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      t = SSL_access(not_null(e_49), not_null(f_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm k_49 = NULL;
  ATerm l_49 = NULL;
  l_49 = t;
  if(((k_49 != NULL) && (k_49 != l_49)))
    _fail(l_49);
  else
    k_49 = l_49;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), (ATerm) ATinsert(ATempty, term_i_47));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm m_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(p_47);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = m_47;
      {
        ATerm q_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_47 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_47;
              }
            {
              ATerm n_10 (ATerm t)
              {
                t = term_w_47;
                return(t);
              }
              t = debug_1(t, n_10);
            }
            ;
            LocalPopChoice(u_47);
          }
        else
          {
            t = q_47;
            {
              ATerm u_10 (ATerm t)
              {
                t = term_x_47;
                return(t);
              }
              t = debug_1(t, u_10);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm p_49 = NULL;
  ATerm r_49 = NULL;
  p_49 = t;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm w_10 (ATerm t)
      {
        t = term_y_47;
        return(t);
      }
      t = debug_1(t, w_10);
      return(t);
    }
    t = if_verbose5_1(t, v_10);
    {
      ATerm z_47 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATmakeAppl(sym_Imported_1, not_null(p_49)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_47;
        }
      {
        ATerm a_48;
        a_48 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_45, term_b_48, (ATerm) ATinsert(ATempty, not_null(p_49)));
          t = table_put_0(t);
        }
        t = a_48;
        {
          ATerm x_10 (ATerm t)
          {
            ATerm a_11 (ATerm t)
            {
              t = term_c_48;
              return(t);
            }
            t = debug_1(t, a_11);
            return(t);
          }
          t = if_verbose4_1(t, x_10);
          {
            t = read_repository_file_0(t);
            {
              ATerm b_11 (ATerm t)
              {
                ATerm e_11 (ATerm t)
                {
                  t = term_f_48;
                  return(t);
                }
                t = say_1(t, e_11);
                return(t);
              }
              t = if_verbose6_1(t, b_11);
              {
                ATerm s_49 = NULL;
                s_49 = t;
                if(((r_49 != NULL) && (r_49 != s_49)))
                  _fail(s_49);
                else
                  r_49 = s_49;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_45, not_null(r_49));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm f_11 (ATerm t)
                      {
                        ATerm i_11 (ATerm t)
                        {
                          t = term_g_48;
                          return(t);
                        }
                        t = say_1(t, i_11);
                        return(t);
                      }
                      t = if_verbose6_1(t, f_11);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_k_45, (ATerm)ATmakeAppl(sym_Imported_1, not_null(p_49)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm j_11 (ATerm t)
                            {
                              ATerm m_11 (ATerm t)
                              {
                                t = term_f_48;
                                return(t);
                              }
                              t = say_1(t, m_11);
                              return(t);
                            }
                            t = if_verbose4_1(t, j_11);
                          }
                        }
                      }
                    }
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
  ATerm w_49 = NULL;
  w_49 = t;
  t = SSL_getenv(not_null(w_49));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_48;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm o_48 = t;
        int q_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_48;
            t = getenv_0(t);
            ;
            LocalPopChoice(q_48);
          }
        else
          {
            t = o_48;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm o_11 (ATerm t)
    {
      t = term_s_48;
      return(t);
    }
    t = debug_1(t, o_11);
    return(t);
  }
  t = if_verbose5_1(t, n_11);
  {
    ATerm t_48;
    t_48 = t;
    {
      ATerm u_48 = t;
      int z_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_49;
          t = table_get_0(t);
          ;
          LocalPopChoice(z_48);
        }
      else
        {
          t = u_48;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = t_48;
    {
      ATerm t_11 (ATerm t)
      {
        ATerm u_11 (ATerm t)
        {
          t = term_b_49;
          return(t);
        }
        t = debug_1(t, u_11);
        return(t);
      }
      t = if_verbose5_1(t, t_11);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm g_49 = t;
  int h_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11 (ATerm t)
      {
        ATerm y_11 (ATerm t)
        {
          t = term_i_49;
          return(t);
        }
        t = debug_1(t, y_11);
        return(t);
      }
      t = if_verbose5_1(t, v_11);
      {
        t = xtc_load_0(t);
        {
          ATerm j_49 = t;
          int m_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(m_49);
            }
          else
            {
              t = j_49;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_11 (ATerm t)
            {
              ATerm a_12 (ATerm t)
              {
                t = term_i_49;
                return(t);
              }
              t = debug_1(t, a_12);
              return(t);
            }
            t = if_verbose5_1(t, z_11);
          }
        }
      }
      ;
      LocalPopChoice(h_49);
    }
  else
    {
      t = g_49;
      {
        ATerm a_50 = NULL;
        ATerm b_50 = NULL;
        b_50 = t;
        if(((a_50 != NULL) && (a_50 != b_50)))
          _fail(b_50);
        else
          a_50 = b_50;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_49), not_null(a_50)), term_n_49);
          {
            t = error_0(t);
            {
              ATerm e_12 (ATerm t)
              {
                t = term_k_45;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm h_12 (ATerm t)
                    {
                      t = term_q_49;
                      return(t);
                    }
                    t = debug_1(t, h_12);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_12);
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
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  g_50 :
  if(match_cons(h_50, sym__2))
    {
      i_50 = ATgetArgument(h_50, 0);
      j_50 = ATgetArgument(h_50, 1);
      {
        ATerm m_50 = NULL;
        ATerm n_50 = NULL,p_50 = NULL;
        ATerm o_50 = NULL;
        t = not_null(i_50);
        {
          ATerm t_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(u_49);
            }
          else
            {
              t = t_49;
              t = (ATerm) ATempty;
            }
          {
            o_50 = t;
            if(((n_50 != NULL) && (n_50 != o_50)))
              _fail(o_50);
            else
              n_50 = o_50;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_50), not_null(n_50));
          {
            t = conc_0(t);
            {
              p_50 = t;
              if(((m_50 != NULL) && (m_50 != p_50)))
                _fail(p_50);
              else
                m_50 = p_50;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_44, not_null(i_50), not_null(m_50));
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
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  y_50 = t;
  w_50 :
  if(match_string(y_50, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(y_50) == AT_LIST) && !(ATisEmpty(y_50))))
        {
          z_50 = ATgetFirst((ATermList) y_50);
          a_51 = (ATerm) ATgetNext((ATermList) y_50);
          x_50 :
          if(((ATgetType(a_51) == AT_LIST) && !(ATisEmpty(a_51))))
            {
              b_51 = ATgetFirst((ATermList) a_51);
              c_51 = (ATerm) ATgetNext((ATermList) a_51);
              {
                ATerm k_51 = NULL;
                ATerm v_49;
                v_49 = t;
                {
                  t = not_null(z_50);
                  t = l_0(t);
                }
                t = v_49;
                {
                  ATerm o_51 = NULL;
                  t = not_null(b_51);
                  {
                    t = m_0(t);
                    {
                      o_51 = t;
                      if(((k_51 != NULL) && (k_51 != o_51)))
                        _fail(o_51);
                      else
                        k_51 = o_51;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_51)), not_null(k_51));
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
  ATerm t_51 = NULL;
  t_51 = t;
  t = SSL_string_to_int(not_null(t_51));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  ATerm x_49;
  x_49 = t;
  {
    ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
    a_52 = t;
    x_51 :
    if(match_cons(a_52, sym__2))
      {
        b_52 = ATgetArgument(a_52, 0);
        c_52 = ATgetArgument(a_52, 1);
        {
          if(((y_51 != NULL) && (y_51 != b_52)))
            _fail(b_52);
          else
            y_51 = b_52;
          {
            if(((z_51 != NULL) && (z_51 != c_52)))
              _fail(c_52);
            else
              z_51 = c_52;
            t = SSL_table_remove(not_null(y_51), not_null(z_51));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_49;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym__2))
    {
      h_52 = ATgetArgument(g_52, 0);
      i_52 = ATgetArgument(g_52, 1);
      {
        ATerm y_49 = t;
        int z_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(h_52);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_44, not_null(h_52));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(z_49);
          }
        else
          {
            t = y_49;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_52), not_null(i_52));
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
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  c_53 :
  if(match_cons(f_53, sym__2))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      {
        ATerm n_53 = NULL;
        ATerm t_53 = NULL,z_53 = NULL;
        ATerm u_53 = NULL;
        t = not_null(g_53);
        {
          ATerm c_50 = t;
          int d_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(d_50);
            }
          else
            {
              t = c_50;
              t = (ATerm) ATempty;
            }
          {
            u_53 = t;
            if(((t_53 != NULL) && (t_53 != u_53)))
              _fail(u_53);
            else
              t_53 = u_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_53), not_null(h_53));
          {
            t = conc_0(t);
            {
              z_53 = t;
              if(((n_53 != NULL) && (n_53 != z_53)))
                _fail(z_53);
              else
                n_53 = z_53;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_44, not_null(g_53), not_null(n_53));
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
  ATerm e_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 (ATerm t)
      {
        ATerm v_55 = NULL;
        v_55 = t;
        d_54 :
        if(!(match_string(v_55, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm j_12 (ATerm t)
      {
        ATerm w_55 = NULL;
        ATerm x_55 = NULL;
        x_55 = t;
        if(((w_55 != NULL) && (w_55 != x_55)))
          _fail(x_55);
        else
          w_55 = x_55;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_39, not_null(w_55));
          t = set_config_0(t);
        }
        t = term_c_27;
        return(t);
      }
      ATerm k_12 (ATerm t)
      {
        t = term_k_50;
        return(t);
      }
      t = ArgOption_3(t, i_12, j_12, k_12);
      ;
      LocalPopChoice(f_50);
    }
  else
    {
      t = e_50;
      {
        ATerm l_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_12 (ATerm t)
            {
              ATerm g_56 = NULL;
              g_56 = t;
              f_54 :
              if(!(match_string(g_56, "-o")))
                {
                  if(!(match_string(g_56, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_12 (ATerm t)
            {
              ATerm h_56 = NULL;
              ATerm j_56 = NULL;
              j_56 = t;
              if(((h_56 != NULL) && (h_56 != j_56)))
                _fail(j_56);
              else
                h_56 = j_56;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(h_56));
                t = set_config_0(t);
              }
              t = term_c_27;
              return(t);
            }
            ATerm r_12 (ATerm t)
            {
              t = term_r_50;
              return(t);
            }
            t = ArgOption_3(t, p_12, q_12, r_12);
            ;
            LocalPopChoice(q_50);
          }
        else
          {
            t = l_50;
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_12 (ATerm t)
                  {
                    ATerm k_56 = NULL;
                    k_56 = t;
                    h_54 :
                    if(!(match_string(k_56, "-I")))
                      {
                        if(!(match_string(k_56, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm v_12 (ATerm t)
                  {
                    ATerm l_56 = NULL;
                    ATerm m_56 = NULL;
                    m_56 = t;
                    if(((l_56 != NULL) && (l_56 != m_56)))
                      _fail(m_56);
                    else
                      l_56 = m_56;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_56)), term_a_41));
                      t = extend_config_0(t);
                    }
                    t = term_c_27;
                    return(t);
                  }
                  ATerm b_13 (ATerm t)
                  {
                    t = term_u_50;
                    return(t);
                  }
                  t = ArgOption_3(t, s_12, v_12, b_13);
                  ;
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  {
                    ATerm v_50 = t;
                    int d_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_13 (ATerm t)
                        {
                          ATerm n_56 = NULL;
                          n_56 = t;
                          j_54 :
                          if(!(match_string(n_56, "--main")))
                            {
                              if(!(match_string(n_56, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm d_13 (ATerm t)
                        {
                          ATerm o_56 = NULL;
                          ATerm p_56 = NULL;
                          p_56 = t;
                          if(((o_56 != NULL) && (o_56 != p_56)))
                            _fail(p_56);
                          else
                            o_56 = p_56;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_m_27, not_null(o_56));
                            t = set_config_0(t);
                          }
                          t = term_c_27;
                          return(t);
                        }
                        ATerm e_13 (ATerm t)
                        {
                          t = term_e_51;
                          return(t);
                        }
                        t = ArgOption_3(t, c_13, d_13, e_13);
                        ;
                        LocalPopChoice(d_51);
                      }
                    else
                      {
                        t = v_50;
                        {
                          ATerm f_51 = t;
                          int g_51 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_13 (ATerm t)
                              {
                                ATerm q_56 = NULL;
                                q_56 = t;
                                l_54 :
                                if(!(match_string(q_56, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_13 (ATerm t)
                              {
                                ATerm r_56 = NULL;
                                ATerm s_56 = NULL;
                                s_56 = t;
                                if(((r_56 != NULL) && (r_56 != s_56)))
                                  _fail(s_56);
                                else
                                  r_56 = s_56;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATempty, not_null(r_56)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_c_27;
                                return(t);
                              }
                              ATerm l_13 (ATerm t)
                              {
                                t = term_h_51;
                                return(t);
                              }
                              t = ArgOption_3(t, j_13, k_13, l_13);
                              ;
                              LocalPopChoice(g_51);
                            }
                          else
                            {
                              t = f_51;
                              {
                                ATerm i_51 = t;
                                int j_51 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_13 (ATerm t)
                                    {
                                      ATerm t_56 = NULL;
                                      t_56 = t;
                                      w_54 :
                                      if(!(match_string(t_56, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_13 (ATerm t)
                                    {
                                      ATerm z_56 = NULL;
                                      ATerm a_57 = NULL;
                                      a_57 = t;
                                      if(((z_56 != NULL) && (z_56 != a_57)))
                                        _fail(a_57);
                                      else
                                        z_56 = a_57;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATinsert(ATempty, not_null(z_56)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_c_27;
                                      return(t);
                                    }
                                    ATerm q_13 (ATerm t)
                                    {
                                      t = term_l_51;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, m_13, n_13, q_13);
                                    ;
                                    LocalPopChoice(j_51);
                                  }
                                else
                                  {
                                    t = i_51;
                                    {
                                      ATerm m_51 = t;
                                      int n_51 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_13 (ATerm t)
                                          {
                                            ATerm b_57 = NULL;
                                            b_57 = t;
                                            y_54 :
                                            if(!(match_string(b_57, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_13 (ATerm t)
                                          {
                                            ATerm c_57 = NULL;
                                            ATerm d_57 = NULL;
                                            d_57 = t;
                                            if(((c_57 != NULL) && (c_57 != d_57)))
                                              _fail(d_57);
                                            else
                                              c_57 = d_57;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATinsert(ATempty, not_null(c_57)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_c_27;
                                            return(t);
                                          }
                                          ATerm x_13 (ATerm t)
                                          {
                                            t = term_p_51;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, v_13, w_13, x_13);
                                          ;
                                          LocalPopChoice(n_51);
                                        }
                                      else
                                        {
                                          t = m_51;
                                          {
                                            ATerm q_51 = t;
                                            int r_51 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm y_13 (ATerm t)
                                                {
                                                  ATerm e_57 = NULL;
                                                  e_57 = t;
                                                  a_55 :
                                                  if(!(match_string(e_57, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm z_13 (ATerm t)
                                                {
                                                  t = term_s_51;
                                                  t = set_config_0(t);
                                                  t = term_c_27;
                                                  return(t);
                                                }
                                                ATerm a_14 (ATerm t)
                                                {
                                                  t = term_u_51;
                                                  return(t);
                                                }
                                                t = Option_3(t, y_13, z_13, a_14);
                                                ;
                                                LocalPopChoice(r_51);
                                              }
                                            else
                                              {
                                                t = q_51;
                                                {
                                                  ATerm v_51 = t;
                                                  int w_51 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_14 (ATerm t)
                                                      {
                                                        ATerm f_57 = NULL;
                                                        f_57 = t;
                                                        b_55 :
                                                        if(!(match_string(f_57, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm i_14 (ATerm t)
                                                      {
                                                        t = term_d_52;
                                                        t = set_config_0(t);
                                                        t = term_c_27;
                                                        return(t);
                                                      }
                                                      ATerm j_14 (ATerm t)
                                                      {
                                                        t = term_e_52;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, d_14, i_14, j_14);
                                                      ;
                                                      LocalPopChoice(w_51);
                                                    }
                                                  else
                                                    {
                                                      t = v_51;
                                                      {
                                                        ATerm j_52 = t;
                                                        int k_52 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_14 (ATerm t)
                                                            {
                                                              ATerm g_57 = NULL;
                                                              g_57 = t;
                                                              c_55 :
                                                              if(!(match_string(g_57, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm l_14 (ATerm t)
                                                            {
                                                              t = term_l_52;
                                                              t = set_config_0(t);
                                                              t = term_c_27;
                                                              return(t);
                                                            }
                                                            ATerm m_14 (ATerm t)
                                                            {
                                                              t = term_m_52;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, k_14, l_14, m_14);
                                                            ;
                                                            LocalPopChoice(k_52);
                                                          }
                                                        else
                                                          {
                                                            t = j_52;
                                                            {
                                                              ATerm n_52 = t;
                                                              int o_52 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_14 (ATerm t)
                                                                  {
                                                                    ATerm q_57 = NULL;
                                                                    q_57 = t;
                                                                    d_55 :
                                                                    if(!(match_string(q_57, "--output-optimized")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm o_14 (ATerm t)
                                                                  {
                                                                    t = term_p_52;
                                                                    t = set_config_0(t);
                                                                    t = term_c_27;
                                                                    return(t);
                                                                  }
                                                                  ATerm p_14 (ATerm t)
                                                                  {
                                                                    t = term_q_52;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, n_14, o_14, p_14);
                                                                  ;
                                                                  LocalPopChoice(o_52);
                                                                }
                                                              else
                                                                {
                                                                  t = n_52;
                                                                  {
                                                                    ATerm r_52 = t;
                                                                    int s_52 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_14 (ATerm t)
                                                                        {
                                                                          ATerm r_57 = NULL;
                                                                          r_57 = t;
                                                                          e_55 :
                                                                          if(!(match_string(r_57, "--output-canonical")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm r_14 (ATerm t)
                                                                        {
                                                                          t = term_t_52;
                                                                          t = set_config_0(t);
                                                                          t = term_c_27;
                                                                          return(t);
                                                                        }
                                                                        ATerm v_14 (ATerm t)
                                                                        {
                                                                          t = term_u_52;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, q_14, r_14, v_14);
                                                                        ;
                                                                        LocalPopChoice(s_52);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_52;
                                                                        {
                                                                          ATerm v_52 = t;
                                                                          int w_52 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm y_14 (ATerm t)
                                                                              {
                                                                                ATerm s_57 = NULL;
                                                                                s_57 = t;
                                                                                f_55 :
                                                                                if(!(match_string(s_57, "--keep")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm c_15 (ATerm t)
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
                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(t_57));
                                                                                  t = set_config_0(t);
                                                                                }
                                                                                t = term_c_27;
                                                                                return(t);
                                                                              }
                                                                              ATerm e_15 (ATerm t)
                                                                              {
                                                                                t = term_x_52;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3(t, y_14, c_15, e_15);
                                                                              ;
                                                                              LocalPopChoice(w_52);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_52;
                                                                              {
                                                                                ATerm y_52 = t;
                                                                                int z_52 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_15 (ATerm t)
                                                                                    {
                                                                                      ATerm v_57 = NULL;
                                                                                      v_57 = t;
                                                                                      h_55 :
                                                                                      if(!(match_string(v_57, "--fusion")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_15 (ATerm t)
                                                                                    {
                                                                                      t = term_a_53;
                                                                                      t = toggle_config_0(t);
                                                                                      t = term_c_27;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_15 (ATerm t)
                                                                                    {
                                                                                      t = term_b_53;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3(t, f_15, g_15, h_15);
                                                                                    ;
                                                                                    LocalPopChoice(z_52);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_52;
                                                                                    {
                                                                                      ATerm d_53 = t;
                                                                                      int e_53 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_15 (ATerm t)
                                                                                          {
                                                                                            ATerm w_57 = NULL;
                                                                                            w_57 = t;
                                                                                            i_55 :
                                                                                            if(!(match_string(w_57, "--trace-all")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm j_15 (ATerm t)
                                                                                          {
                                                                                            t = term_j_53;
                                                                                            t = set_config_0(t);
                                                                                            t = term_c_27;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm k_15 (ATerm t)
                                                                                          {
                                                                                            t = term_k_53;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3(t, i_15, j_15, k_15);
                                                                                          ;
                                                                                          LocalPopChoice(e_53);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_53;
                                                                                          {
                                                                                            ATerm l_53 = t;
                                                                                            int m_53 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm l_15 (ATerm t)
                                                                                                {
                                                                                                  ATerm x_57 = NULL;
                                                                                                  x_57 = t;
                                                                                                  j_55 :
                                                                                                  if(!(match_string(x_57, "-t")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm o_15 (ATerm t)
                                                                                                {
                                                                                                  ATerm y_57 = NULL;
                                                                                                  ATerm z_57 = NULL;
                                                                                                  z_57 = t;
                                                                                                  if(((y_57 != NULL) && (y_57 != z_57)))
                                                                                                    _fail(z_57);
                                                                                                  else
                                                                                                    y_57 = z_57;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym__2, term_o_53, (ATerm) ATinsert(ATempty, not_null(y_57)));
                                                                                                    t = extend_config_0(t);
                                                                                                  }
                                                                                                  t = term_c_27;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm p_15 (ATerm t)
                                                                                                {
                                                                                                  t = term_p_53;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3(t, l_15, o_15, p_15);
                                                                                                ;
                                                                                                LocalPopChoice(m_53);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = l_53;
                                                                                                {
                                                                                                  ATerm q_53 = t;
                                                                                                  int r_53 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm q_15 (ATerm t)
                                                                                                      {
                                                                                                        ATerm a_58 = NULL;
                                                                                                        a_58 = t;
                                                                                                        l_55 :
                                                                                                        if(!(match_string(a_58, "--verbose")))
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_15 (ATerm t)
                                                                                                      {
                                                                                                        ATerm b_58 = NULL;
                                                                                                        ATerm c_58 = NULL;
                                                                                                        t = string_to_int_0(t);
                                                                                                        {
                                                                                                          c_58 = t;
                                                                                                          if(((b_58 != NULL) && (b_58 != c_58)))
                                                                                                            _fail(c_58);
                                                                                                          else
                                                                                                            b_58 = c_58;
                                                                                                        }
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(b_58));
                                                                                                          t = set_config_0(t);
                                                                                                        }
                                                                                                        t = term_c_27;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm w_15 (ATerm t)
                                                                                                      {
                                                                                                        t = term_s_53;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3(t, q_15, v_15, w_15);
                                                                                                      ;
                                                                                                      LocalPopChoice(r_53);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_53;
                                                                                                      {
                                                                                                        ATerm v_53 = t;
                                                                                                        int w_53 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm x_15 (ATerm t)
                                                                                                            {
                                                                                                              ATerm d_58 = NULL;
                                                                                                              d_58 = t;
                                                                                                              n_55 :
                                                                                                              if(!(match_string(d_58, "-S")))
                                                                                                                {
                                                                                                                  if(!(match_string(d_58, "--silent")))
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm y_15 (ATerm t)
                                                                                                            {
                                                                                                              t = term_x_53;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_c_27;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm d_16 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_53;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, x_15, y_15, d_16);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_53);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_53;
                                                                                                            {
                                                                                                              ATerm a_54 = t;
                                                                                                              int b_54 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm e_16 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm e_58 = NULL;
                                                                                                                    e_58 = t;
                                                                                                                    o_55 :
                                                                                                                    if(!(match_string(e_58, "-h")))
                                                                                                                      {
                                                                                                                        if(!(match_string(e_58, "--help")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm f_16 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_e_54;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_c_27;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm i_16 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_g_54;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, e_16, f_16, i_16);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(b_54);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_54;
                                                                                                                  {
                                                                                                                    ATerm i_54 = t;
                                                                                                                    int k_54 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm j_16 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm f_58 = NULL;
                                                                                                                          f_58 = t;
                                                                                                                          p_55 :
                                                                                                                          if(!(match_string(f_58, "--man")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm k_16 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_n_54;
                                                                                                                          t = set_config_0(t);
                                                                                                                          t = term_c_27;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm l_16 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_o_54;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3(t, j_16, k_16, l_16);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(k_54);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_54;
                                                                                                                        {
                                                                                                                          ATerm p_54 = t;
                                                                                                                          int q_54 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm m_16 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm l_58 = NULL;
                                                                                                                                l_58 = t;
                                                                                                                                q_55 :
                                                                                                                                if(!(match_string(l_58, "-v")))
                                                                                                                                  {
                                                                                                                                    if(!(match_string(l_58, "--version")))
                                                                                                                                      {
                                                                                                                                        _fail(t);
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm s_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_s_54;
                                                                                                                                t = set_config_0(t);
                                                                                                                                t = term_c_27;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm v_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_t_54;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3(t, m_16, s_16, v_16);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(q_54);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_54;
                                                                                                                              {
                                                                                                                                ATerm w_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm m_58 = NULL;
                                                                                                                                  m_58 = t;
                                                                                                                                  r_55 :
                                                                                                                                  if(!(match_string(m_58, "--warning")))
                                                                                                                                    {
                                                                                                                                      if(!(match_string(m_58, "-W")))
                                                                                                                                        {
                                                                                                                                          _fail(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm x_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  ATerm u_54 = t;
                                                                                                                                  int v_54 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      ATerm o_58 = NULL;
                                                                                                                                      ATerm x_54;
                                                                                                                                      x_54 = t;
                                                                                                                                      {
                                                                                                                                        t = term_x_25;
                                                                                                                                        {
                                                                                                                                          t = get_config_0(t);
                                                                                                                                          {
                                                                                                                                            ATerm z_16 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm n_58 = NULL;
                                                                                                                                              n_58 = t;
                                                                                                                                              s_55 :
                                                                                                                                              if(!(match_string(n_58, "all")))
                                                                                                                                                {
                                                                                                                                                  _fail(t);
                                                                                                                                                }
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = Cons_2(t, z_16, Nil_0);
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      t = x_54;
                                                                                                                                      {
                                                                                                                                        ATerm t_58 = NULL;
                                                                                                                                        t_58 = t;
                                                                                                                                        if(((o_58 != NULL) && (o_58 != t_58)))
                                                                                                                                          _fail(t_58);
                                                                                                                                        else
                                                                                                                                          o_58 = t_58;
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATempty, not_null(o_58)));
                                                                                                                                          t = set_config_0(t);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      ;
                                                                                                                                      LocalPopChoice(v_54);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = u_54;
                                                                                                                                      {
                                                                                                                                        ATerm u_58 = NULL;
                                                                                                                                        ATerm v_58 = NULL;
                                                                                                                                        v_58 = t;
                                                                                                                                        if(((u_58 != NULL) && (u_58 != v_58)))
                                                                                                                                          _fail(v_58);
                                                                                                                                        else
                                                                                                                                          u_58 = v_58;
                                                                                                                                        {
                                                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATempty, not_null(u_58)));
                                                                                                                                          t = extend_config_0(t);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  t = term_c_27;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                ATerm y_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_z_54;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = ArgOption_3(t, w_16, x_16, y_16);
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_59 = NULL;
  s_59 = t;
  t = SSL_table_destroy(not_null(s_59));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_56), term_s_44), term_e_56), term_d_56), term_c_56), term_s_44), term_b_56), term_a_56), term_z_55), term_y_55), term_u_55), term_t_55), term_m_55), term_k_55), term_g_55);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm v_59 (ATerm t)
  {
    ATerm i_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_56);
      }
    else
      {
        t = i_56;
        t = Cons_2(t, r_86, v_59);
      }
    return(t);
  }
  t = v_59(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  e_60 = t;
  b_60 :
  if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
    {
      c_60 = ATgetFirst((ATermList) e_60);
      d_60 = (ATerm) ATgetNext((ATermList) e_60);
      {
        ATerm h_60 = NULL;
        t = not_null(d_60);
        {
          ATerm v_56;
          v_56 = t;
          {
            ATerm i_60 = NULL,k_60 = NULL,m_60 = NULL;
            ATerm w_56;
            w_56 = t;
            {
              ATerm j_60 = NULL;
              t = j_0(t);
              {
                j_60 = t;
                if(((i_60 != NULL) && (i_60 != j_60)))
                  _fail(j_60);
                else
                  i_60 = j_60;
              }
            }
            t = w_56;
            {
              ATerm l_60 = NULL;
              t = not_null(c_60);
              {
                t = i_0(t);
                {
                  l_60 = t;
                  if(((k_60 != NULL) && (k_60 != l_60)))
                    _fail(l_60);
                  else
                    k_60 = l_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_60)), not_null(k_60));
                {
                  m_60 = t;
                  if(((h_60 != NULL) && (h_60 != m_60)))
                    _fail(m_60);
                  else
                    h_60 = m_60;
                }
              }
            }
          }
          t = v_56;
          {
            ATerm a_17 (ATerm t)
            {
              t = not_null(h_60);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_17);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_60) == AT_LIST) && ATisEmpty(e_60)))
        {
          {
            t = term_c_27;
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
  ATerm h_17 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_17);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm t_60 = NULL;
  ATerm u_60 = NULL;
  t = term_c_27;
  {
    t = g_0(t);
    {
      u_60 = t;
      if(((t_60 != NULL) && (t_60 != u_60)))
        _fail(u_60);
      else
        t_60 = u_60;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_57), not_null(t_60)), term_j_57), term_s_44), term_i_57), term_s_44), term_h_57), term_y_56), term_s_44), term_x_56);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm b_61 = NULL,c_61 = NULL;
  b_61 = t;
  a_61 :
  if(match_cons(b_61, sym_Program_1))
    {
      c_61 = ATgetArgument(b_61, 0);
      {
        ATerm f_61 = NULL,h_61 = NULL;
        ATerm g_61 = NULL;
        t = SSLgetAnnotations(not_null(b_61));
        {
          g_61 = t;
          if(((f_61 != NULL) && (f_61 != g_61)))
            _fail(g_61);
          else
            f_61 = g_61;
        }
        {
          t = not_null(c_61);
          {
            ATerm j_61 = NULL;
            t = a_71(t);
            {
              h_61 = t;
              {
                ATerm k_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_61)), not_null(f_61));
                {
                  k_61 = t;
                  if(((j_61 != NULL) && (j_61 != k_61)))
                    _fail(k_61);
                  else
                    j_61 = k_61;
                }
                t = not_null(j_61);
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
  ATerm t_61 = NULL;
  ATerm l_57 = t;
  int m_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_61 = NULL;
      t = term_n_57;
      {
        t = get_config_0(t);
        {
          u_61 = t;
          if(((t_61 != NULL) && (t_61 != u_61)))
            _fail(u_61);
          else
            t_61 = u_61;
        }
      }
      ;
      LocalPopChoice(m_57);
    }
  else
    {
      t = l_57;
      {
        ATerm i_17 (ATerm t)
        {
          ATerm l_17 (ATerm t)
          {
            ATerm v_61 = NULL;
            v_61 = t;
            if(((t_61 != NULL) && (t_61 != v_61)))
              _fail(v_61);
            else
              t_61 = v_61;
            return(t);
          }
          t = Program_1(t, l_17);
          return(t);
        }
        t = option_defined_1(t, i_17);
      }
    }
  {
    ATerm m_17 (ATerm t)
    {
      ATerm n_17 (ATerm t)
      {
        t = not_null(t_61);
        return(t);
      }
      t = short_description_1(t, n_17);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_17);
    {
      t = term_o_57;
      {
        t = echo_0(t);
        {
          t = term_h_58;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_17 (ATerm t)
                {
                  ATerm w_61 = NULL;
                  ATerm x_61 = NULL;
                  x_61 = t;
                  if(((w_61 != NULL) && (w_61 != x_61)))
                    _fail(x_61);
                  else
                    w_61 = x_61;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_61)), term_i_58);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_17);
                {
                  ATerm p_17 (ATerm t)
                  {
                    ATerm y_61 = NULL;
                    ATerm z_61 = NULL;
                    ATerm u_17 (ATerm t)
                    {
                      t = not_null(t_61);
                      return(t);
                    }
                    t = long_description_1(t, u_17);
                    {
                      z_61 = t;
                      if(((y_61 != NULL) && (y_61 != z_61)))
                        _fail(z_61);
                      else
                        y_61 = z_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), term_s_44);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_17);
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
  ATerm j_58 = t;
  int k_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(k_58);
    }
  else
    {
      t = j_58;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm y_62 = NULL,a_63 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym_Undefined_1))
    {
      a_63 = ATgetArgument(y_62, 0);
      {
        ATerm j_63 = NULL,u_63 = NULL;
        ATerm n_63 = NULL;
        t = SSLgetAnnotations(not_null(y_62));
        {
          n_63 = t;
          if(((j_63 != NULL) && (j_63 != n_63)))
            _fail(n_63);
          else
            j_63 = n_63;
        }
        {
          t = not_null(a_63);
          {
            ATerm w_63 = NULL;
            t = b_71(t);
            {
              u_63 = t;
              {
                ATerm x_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_63)), not_null(j_63));
                {
                  x_63 = t;
                  if(((w_63 != NULL) && (w_63 != x_63)))
                    _fail(x_63);
                  else
                    w_63 = x_63;
                }
                t = not_null(w_63);
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
  ATerm e_64 (ATerm t)
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_87, _id);
        ;
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = Cons_2(t, _id, e_64);
      }
    return(t);
  }
  t = e_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_104 (ATerm))
{
  t = fetch_1(t, d_104);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(((ATgetType(g_64) == AT_LIST) && ATisEmpty(g_64)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_64) == AT_LIST) && !(ATisEmpty(g_64))))
        {
          h_64 = ATgetFirst((ATermList) g_64);
          i_64 = (ATerm) ATgetNext((ATermList) g_64);
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
  ATerm r_58;
  r_58 = t;
  {
    ATerm l_64 = NULL;
    ATerm o_64 = NULL;
    ATerm s_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(w_58);
      }
    else
      {
        t = s_58;
        {
          ATerm m_64 = NULL;
          ATerm n_64 = NULL;
          n_64 = t;
          if(((m_64 != NULL) && (m_64 != n_64)))
            _fail(n_64);
          else
            m_64 = n_64;
          t = (ATerm) ATinsert(ATempty, not_null(m_64));
        }
      }
    {
      o_64 = t;
      if(((l_64 != NULL) && (l_64 != o_64)))
        _fail(o_64);
      else
        l_64 = o_64;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(l_64));
      t = printnl_0(t);
    }
  }
  t = r_58;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_n_57;
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
  ATerm x_58 = t;
  int y_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(y_58);
    }
  else
    {
      t = x_58;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_64 = NULL;
  v_64 = t;
  u_64 :
  if(match_cons(v_64, sym_Help_0))
    {
      ATerm x_64 = NULL,z_64 = NULL;
      ATerm z_58;
      z_58 = t;
      {
        ATerm y_64 = NULL;
        t = SSLgetAnnotations(not_null(v_64));
        {
          y_64 = t;
          if(((x_64 != NULL) && (x_64 != y_64)))
            _fail(y_64);
          else
            x_64 = y_64;
        }
      }
      t = z_58;
      {
        ATerm a_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        t = not_null(z_64);
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
  ATerm a_59 = t;
  int b_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_17 (ATerm t)
      {
        ATerm g_65 = NULL;
        g_65 = t;
        e_65 :
        if(!(match_string(g_65, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm a_18 (ATerm t)
      {
        t = term_d_59;
        t = set_config_0(t);
        return(t);
      }
      ATerm b_18 (ATerm t)
      {
        t = term_e_59;
        return(t);
      }
      t = Option_3(t, v_17, a_18, b_18);
      ;
      LocalPopChoice(b_59);
    }
  else
    {
      t = a_59;
      {
        ATerm c_18 (ATerm t)
        {
          ATerm h_65 = NULL;
          h_65 = t;
          f_65 :
          if(!(match_string(h_65, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm d_18 (ATerm t)
        {
          t = term_d_59;
          {
            t = set_config_0(t);
            {
              t = term_s_54;
              t = set_config_0(t);
            }
          }
          t = term_f_59;
          return(t);
        }
        ATerm e_18 (ATerm t)
        {
          t = term_g_59;
          return(t);
        }
        t = Option_3(t, c_18, d_18, e_18);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  l_65 :
  if(match_cons(m_65, sym__2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      t = SSL_table_get(not_null(n_65), not_null(o_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  v_65 = t;
  u_65 :
  if(match_cons(v_65, sym__3))
    {
      w_65 = ATgetArgument(v_65, 0);
      x_65 = ATgetArgument(v_65, 1);
      y_65 = ATgetArgument(v_65, 2);
      {
        ATerm h_59;
        h_59 = t;
        {
          ATerm c_66 = NULL;
          ATerm d_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_65), not_null(x_65));
          {
            ATerm i_59 = t;
            int j_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_59);
              }
            else
              {
                t = i_59;
                t = (ATerm) ATempty;
              }
            {
              d_66 = t;
              if(((c_66 != NULL) && (c_66 != d_66)))
                _fail(d_66);
              else
                c_66 = d_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_65), not_null(x_65), (ATerm) ATinsert(CheckATermList(not_null(c_66)), not_null(y_65)));
            t = table_put_0(t);
          }
        }
        t = h_59;
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
  ATerm h_66 = NULL;
  ATerm i_66 = NULL;
  t = term_c_27;
  {
    t = i_105(t);
    {
      i_66 = t;
      if(((h_66 != NULL) && (h_66 != i_66)))
        _fail(i_66);
      else
        h_66 = i_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_57, term_g_58, not_null(h_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  o_66 = t;
  n_66 :
  if(match_string(o_66, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
        {
          p_66 = ATgetFirst((ATermList) o_66);
          q_66 = (ATerm) ATgetNext((ATermList) o_66);
          {
            ATerm t_66 = NULL;
            ATerm k_59;
            k_59 = t;
            {
              t = not_null(p_66);
              t = a_0(t);
            }
            t = k_59;
            {
              ATerm u_66 = NULL;
              t = term_c_27;
              {
                t = b_0(t);
                {
                  u_66 = t;
                  if(((t_66 != NULL) && (t_66 != u_66)))
                    _fail(u_66);
                  else
                    t_66 = u_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_66)), not_null(t_66));
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
  ATerm g_18 (ATerm t)
  {
    ATerm z_66 = NULL;
    z_66 = t;
    y_66 :
    if(!(match_string(z_66, "--help")))
      {
        if(!(match_string(z_66, "-h")))
          {
            if(!(match_string(z_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_18 (ATerm t)
  {
    t = term_e_54;
    {
      t = set_config_0(t);
      t = term_l_59;
    }
    return(t);
  }
  ATerm k_18 (ATerm t)
  {
    t = term_m_59;
    return(t);
  }
  t = Option_3(t, g_18, j_18, k_18);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  c_67 = t;
  b_67 :
  if(((ATgetType(c_67) == AT_LIST) && !(ATisEmpty(c_67))))
    {
      d_67 = ATgetFirst((ATermList) c_67);
      e_67 = (ATerm) ATgetNext((ATermList) c_67);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_67)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_105 (ATerm))
{
  ATerm n_59;
  n_59 = t;
  {
    ATerm l_18 (ATerm t)
    {
      t = term_o_59;
      t = g_105(t);
      return(t);
    }
    t = try_1(t, l_18);
  }
  t = n_59;
  {
    ATerm n_18 (ATerm t)
    {
      ATerm m_67 = NULL;
      ATerm p_59;
      p_59 = t;
      {
        ATerm k_67 = NULL;
        ATerm l_67 = NULL;
        l_67 = t;
        if(((k_67 != NULL) && (k_67 != l_67)))
          _fail(l_67);
        else
          k_67 = l_67;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_57, not_null(k_67));
          t = set_config_0(t);
        }
      }
      t = p_59;
      {
        ATerm n_67 = NULL;
        n_67 = t;
        if(((m_67 != NULL) && (m_67 != n_67)))
          _fail(n_67);
        else
          m_67 = n_67;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_67));
      }
      return(t);
    }
    ATerm o_18 (ATerm t)
    {
      ATerm q_59 = t;
      int r_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_59 = t;
          int u_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_59);
            }
          else
            {
              t = t_59;
              {
                t = g_105(t);
                t = Cons_2(t, _id, o_18);
              }
            }
          ;
          LocalPopChoice(r_59);
        }
      else
        {
          t = q_59;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_18, o_18);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm s_67 = NULL;
  ATerm w_59;
  w_59 = t;
  {
    t = term_x_59;
    t = table_put_0(t);
  }
  t = w_59;
  {
    ATerm p_18 (ATerm t)
    {
      ATerm y_59 = t;
      int z_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_105(t);
          ;
          LocalPopChoice(z_59);
        }
      else
        {
          t = y_59;
          {
            ATerm a_60 = t;
            int f_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(f_60);
              }
            else
              {
                t = a_60;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, p_18);
    {
      ATerm u_18 (ATerm t)
      {
        ATerm g_60 = t;
        int n_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_60;
            o_60 = t;
            {
              ATerm p_60 = t;
              int q_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_54;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(q_60);
                }
              else
                {
                  t = p_60;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_60;
            {
              t = system_usage_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_60);
          }
        else
          {
            t = g_60;
            {
              ATerm r_60 = t;
              int s_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_60;
                  v_60 = t;
                  {
                    t = term_c_59;
                    t = get_config_0(t);
                  }
                  t = v_60;
                  {
                    t = system_about_0(t);
                    {
                      t = term_v_19;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(s_60);
                }
              else
                {
                  t = r_60;
                  {
                    ATerm v_18 (ATerm t)
                    {
                      ATerm w_18 (ATerm t)
                      {
                        ATerm t_67 = NULL;
                        t_67 = t;
                        if(((s_67 != NULL) && (s_67 != t_67)))
                          _fail(t_67);
                        else
                          s_67 = t_67;
                        return(t);
                      }
                      t = Undefined_1(t, w_18);
                      return(t);
                    }
                    t = option_defined_1(t, v_18);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_67)), term_w_60));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_g_29;
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
      t = try_1(t, u_18);
      {
        ATerm x_60;
        x_60 = t;
        {
          t = term_p_57;
          t = table_destroy_0(t);
        }
        t = x_60;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  ATerm y_60;
  y_60 = t;
  {
    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
    a_68 = t;
    w_67 :
    if(match_cons(a_68, sym__3))
      {
        b_68 = ATgetArgument(a_68, 0);
        c_68 = ATgetArgument(a_68, 1);
        d_68 = ATgetArgument(a_68, 2);
        {
          if(((x_67 != NULL) && (x_67 != b_68)))
            _fail(b_68);
          else
            x_67 = b_68;
          {
            if(((y_67 != NULL) && (y_67 != c_68)))
              _fail(c_68);
            else
              y_67 = c_68;
            {
              if(((z_67 != NULL) && (z_67 != d_68)))
                _fail(d_68);
              else
                z_67 = d_68;
              t = SSL_table_put(not_null(x_67), not_null(y_67), not_null(z_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_60;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  h_68 = t;
  g_68 :
  if(match_cons(h_68, sym__2))
    {
      i_68 = ATgetArgument(h_68, 0);
      j_68 = ATgetArgument(h_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_44, not_null(i_68), not_null(j_68));
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
  ATerm z_60 = t;
  int d_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_61);
    }
  else
    {
      t = z_60;
      {
        ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
        p_68 = t;
        o_68 :
        if(((ATgetType(p_68) == AT_LIST) && !(ATisEmpty(p_68))))
          {
            q_68 = ATgetFirst((ATermList) p_68);
            r_68 = (ATerm) ATgetNext((ATermList) p_68);
            {
              t = not_null(q_68);
              {
                ATerm x_18 (ATerm t)
                {
                  t = not_null(r_68);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_18);
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
  ATerm b_69 = NULL;
  ATerm d_69 = NULL;
  b_69 = t;
  {
    ATerm e_69 = NULL;
    ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
    t = not_null(b_69);
    {
      e_69 = t;
      {
        t = SSL_explode_term(not_null(e_69));
        {
          g_69 = t;
          z_68 :
          if(match_cons(g_69, sym__2))
            {
              h_69 = ATgetArgument(g_69, 0);
              i_69 = ATgetArgument(g_69, 1);
              a_69 :
              if(match_string(h_69, ""))
                {
                  if(((d_69 != NULL) && (d_69 != i_69)))
                    _fail(i_69);
                  else
                    d_69 = i_69;
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
      t = not_null(d_69);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_69 = NULL;
  q_69 = t;
  p_69 :
  if(((ATgetType(q_69) == AT_LIST) && ATisEmpty(q_69)))
    {
      {
        ATerm s_69 = NULL,u_69 = NULL;
        ATerm e_61;
        e_61 = t;
        {
          ATerm t_69 = NULL;
          t = SSLgetAnnotations(not_null(q_69));
          {
            t_69 = t;
            if(((s_69 != NULL) && (s_69 != t_69)))
              _fail(t_69);
            else
              s_69 = t_69;
          }
        }
        t = e_61;
        {
          ATerm v_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_69));
          {
            v_69 = t;
            if(((u_69 != NULL) && (u_69 != v_69)))
              _fail(v_69);
            else
              u_69 = v_69;
          }
          t = not_null(u_69);
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
  ATerm z_69 (ATerm t)
  {
    ATerm i_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_69);
        ;
        LocalPopChoice(l_61);
      }
    else
      {
        t = i_61;
        {
          t = Nil_0(t);
          t = h_87(t);
        }
      }
    return(t);
  }
  t = z_69(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym__2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        t = not_null(d_70);
        {
          ATerm z_18 (ATerm t)
          {
            t = not_null(e_70);
            return(t);
          }
          t = at_end_1(t, z_18);
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
  ATerm m_61 = t;
  int n_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(n_61);
    }
  else
    {
      t = m_61;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  o_70 = t;
  n_70 :
  if(match_cons(o_70, sym__2))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      {
        ATerm u_70 = NULL,w_70 = NULL;
        ATerm v_70 = NULL;
        t = SSLgetAnnotations(not_null(o_70));
        {
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
        }
        {
          t = not_null(p_70);
          {
            ATerm y_70 = NULL;
            t = a_64(t);
            {
              w_70 = t;
              {
                t = not_null(q_70);
                {
                  ATerm c_71 = NULL;
                  t = b_64(t);
                  {
                    y_70 = t;
                    {
                      ATerm d_71 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_70), not_null(y_70)), not_null(u_70));
                      {
                        d_71 = t;
                        if(((c_71 != NULL) && (c_71 != d_71)))
                          _fail(d_71);
                        else
                          c_71 = d_71;
                      }
                      t = not_null(c_71);
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
  ATerm l_71 = NULL;
  l_71 = t;
  t = SSL_implode_string(not_null(l_71));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  u_71 = t;
  t_71 :
  if(((ATgetType(u_71) == AT_LIST) && !(ATisEmpty(u_71))))
    {
      v_71 = ATgetFirst((ATermList) u_71);
      w_71 = (ATerm) ATgetNext((ATermList) u_71);
      {
        ATerm a_72 = NULL,c_72 = NULL;
        ATerm b_72 = NULL;
        t = SSLgetAnnotations(not_null(u_71));
        {
          b_72 = t;
          if(((a_72 != NULL) && (a_72 != b_72)))
            _fail(b_72);
          else
            a_72 = b_72;
        }
        {
          t = not_null(v_71);
          {
            ATerm e_72 = NULL;
            t = j_65(t);
            {
              c_72 = t;
              {
                t = not_null(w_71);
                {
                  ATerm g_72 = NULL;
                  t = k_65(t);
                  {
                    e_72 = t;
                    {
                      ATerm h_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_72)), not_null(c_72)), not_null(a_72));
                      {
                        h_72 = t;
                        if(((g_72 != NULL) && (g_72 != h_72)))
                          _fail(h_72);
                        else
                          g_72 = h_72;
                      }
                      t = not_null(g_72);
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
  ATerm o_72 = NULL;
  o_72 = t;
  t = SSL_explode_string(not_null(o_72));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_72 (ATerm t)
        {
          ATerm q_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, t_72);
              ;
              LocalPopChoice(r_61);
            }
          else
            {
              t = q_61;
              {
                ATerm a_19 (ATerm t)
                {
                  ATerm s_72 = NULL;
                  s_72 = t;
                  r_72 :
                  if(!(match_int(s_72, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm b_19 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, a_19, b_19);
              }
            }
          return(t);
        }
        t = t_72(t);
        ;
        LocalPopChoice(p_61);
      }
    else
      {
        t = o_61;
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
  ATerm s_61;
  s_61 = t;
  {
    ATerm h_73 = NULL,j_73 = NULL,l_73 = NULL,n_73 = NULL,r_73 = NULL,v_73 = NULL,z_73 = NULL,d_74 = NULL;
    t = term_b_62;
    {
      t = set_config_0(t);
      {
        t = term_c_62;
        {
          t = set_config_0(t);
          {
            t = term_d_62;
            {
              t = set_config_0(t);
              {
                ATerm e_62;
                e_62 = t;
                {
                  ATerm i_73 = NULL;
                  t = term_f_62;
                  {
                    t = xtc_find_path_0(t);
                    {
                      i_73 = t;
                      if(((h_73 != NULL) && (h_73 != i_73)))
                        _fail(i_73);
                      else
                        h_73 = i_73;
                    }
                  }
                }
                t = e_62;
                {
                  ATerm g_62;
                  g_62 = t;
                  {
                    ATerm k_73 = NULL;
                    t = term_h_62;
                    {
                      t = xtc_find_path_0(t);
                      {
                        k_73 = t;
                        if(((j_73 != NULL) && (j_73 != k_73)))
                          _fail(k_73);
                        else
                          j_73 = k_73;
                      }
                    }
                  }
                  t = g_62;
                  {
                    ATerm m_73 = NULL;
                    t = term_i_62;
                    {
                      t = xtc_find_path_0(t);
                      {
                        m_73 = t;
                        if(((l_73 != NULL) && (l_73 != m_73)))
                          _fail(m_73);
                        else
                          l_73 = m_73;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_41, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_73)), term_a_41), not_null(j_73)), term_a_41), not_null(h_73)), term_a_41));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, term_k_62), term_j_62));
                          {
                            t = set_config_0(t);
                            {
                              ATerm l_62;
                              l_62 = t;
                              {
                                ATerm o_73 = NULL,q_73 = NULL;
                                ATerm p_73 = NULL;
                                t = term_m_62;
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
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), term_n_62);
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
                              }
                              t = l_62;
                              {
                                ATerm o_62;
                                o_62 = t;
                                {
                                  ATerm s_73 = NULL,u_73 = NULL;
                                  ATerm t_73 = NULL;
                                  t = term_m_62;
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
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), term_n_62);
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
                                t = o_62;
                                {
                                  ATerm w_73 = NULL,y_73 = NULL;
                                  ATerm x_73 = NULL;
                                  t = term_p_62;
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
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_73), term_n_62);
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
                                    t = (ATerm) ATmakeAppl(sym__2, term_z_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_73)), term_a_41), not_null(r_73)), term_a_41), not_null(n_73)), term_a_41));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm q_62;
                                        q_62 = t;
                                        {
                                          ATerm a_74 = NULL,c_74 = NULL;
                                          ATerm b_74 = NULL;
                                          t = term_m_62;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              b_74 = t;
                                              if(((a_74 != NULL) && (a_74 != b_74)))
                                                _fail(b_74);
                                              else
                                                a_74 = b_74;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_74), term_r_62);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                c_74 = t;
                                                if(((z_73 != NULL) && (z_73 != c_74)))
                                                  _fail(c_74);
                                                else
                                                  z_73 = c_74;
                                              }
                                            }
                                          }
                                        }
                                        t = q_62;
                                        {
                                          ATerm e_74 = NULL,g_74 = NULL;
                                          ATerm f_74 = NULL;
                                          t = term_p_62;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              f_74 = t;
                                              if(((e_74 != NULL) && (e_74 != f_74)))
                                                _fail(f_74);
                                              else
                                                e_74 = f_74;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_74), term_r_62);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                g_74 = t;
                                                if(((d_74 != NULL) && (d_74 != g_74)))
                                                  _fail(g_74);
                                                else
                                                  d_74 = g_74;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_n_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_62), term_v_62), not_null(d_74)), term_s_62), term_u_62), term_t_62), not_null(z_73)), term_s_62));
                                            {
                                              t = set_config_0(t);
                                              {
                                                t = term_z_62;
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
  t = s_61;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm c_19 (ATerm t)
      {
        ATerm v_74 = NULL;
        t = term_m_54;
        {
          t = get_config_0(t);
          {
            ATerm w_74 = NULL;
            t = term_b_63;
            {
              t = xtc_find_0(t);
              {
                w_74 = t;
                if(((v_74 != NULL) && (v_74 != w_74)))
                  _fail(w_74);
                else
                  v_74 = w_74;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_74), term_n_21);
              {
                t = copy_file_0(t);
                {
                  t = term_v_19;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, c_19);
      {
        ATerm d_19 (ATerm t)
        {
          t = term_r_54;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, d_19);
        {
          ATerm c_63 = t;
          int d_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_63;
              e_63 = t;
              {
                t = term_d_39;
                t = get_config_0(t);
              }
              t = e_63;
              ;
              LocalPopChoice(d_63);
            }
          else
            {
              t = c_63;
              {
                t = (ATerm) ATinsert(ATempty, term_f_63);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm e_19 (ATerm t)
              {
                ATerm g_63;
                g_63 = t;
                {
                  t = term_d_39;
                  {
                    t = get_config_0(t);
                    {
                      ATerm k_19 (ATerm t)
                      {
                        t = term_h_63;
                        return(t);
                      }
                      t = debug_1(t, k_19);
                    }
                  }
                }
                t = g_63;
                return(t);
              }
              t = if_verbose1_1(t, e_19);
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
  ATerm i_63 = t;
  int k_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm n_19 (ATerm t)
        {
          ATerm o_19 (ATerm t)
          {
            ATerm b_75 = NULL;
            ATerm c_75 = NULL;
            c_75 = t;
            if(((b_75 != NULL) && (b_75 != c_75)))
              _fail(c_75);
            else
              b_75 = c_75;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(CheckATermList(not_null(b_75)), term_l_63));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, o_19);
          return(t);
        }
        t = profile_p__2(t, n_19, compile_0);
        {
          ATerm p_19 (ATerm t)
          {
            ATerm d_75 = NULL;
            ATerm e_75 = NULL;
            t = run_time_0(t);
            {
              e_75 = t;
              if(((d_75 != NULL) && (d_75 != e_75)))
                _fail(e_75);
              else
                d_75 = e_75;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_63), not_null(d_75)), term_m_63));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, p_19);
          {
            t = term_v_19;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(k_63);
    }
  else
    {
      t = i_63;
      {
        ATerm f_75 = NULL;
        ATerm g_75 = NULL;
        t = run_time_0(t);
        {
          g_75 = t;
          if(((f_75 != NULL) && (f_75 != g_75)))
            _fail(g_75);
          else
            f_75 = g_75;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_63), not_null(f_75)), term_p_63));
          {
            t = printnl_0(t);
            {
              t = term_g_29;
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
