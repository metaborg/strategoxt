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
ATerm term_c_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_q_65;
ATerm term_h_65;
ATerm term_b_65;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_m_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_t_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_m_63;
ATerm term_s_62;
ATerm term_d_62;
ATerm term_u_61;
ATerm term_s_61;
ATerm term_r_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_a_57;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_i_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_v_55;
ATerm term_t_55;
ATerm term_n_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_n_54;
ATerm term_k_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_h_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_z_52;
ATerm term_w_52;
ATerm term_t_52;
ATerm term_q_52;
ATerm term_m_52;
ATerm term_i_52;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_x_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_l_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_z_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_d_49;
ATerm term_w_48;
ATerm term_s_48;
ATerm term_f_48;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_x_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_x_45;
ATerm term_s_45;
ATerm term_g_45;
ATerm term_d_45;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_p_41;
ATerm term_l_41;
ATerm term_f_41;
ATerm term_z_40;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_f_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_u_29;
ATerm term_q_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_u_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_c_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_d_23;
ATerm term_w_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_i_21;
void init_constant_terms (void)
{
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_h_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_32, term_g_26, term_d_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_r_21, term_o_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_32, term_o_26, term_t_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_32, term_x_32, term_e_33);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_33, term_h_33, term_i_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_33, term_p_33, term_q_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_33, term_z_33, term_a_34);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_34, term_d_34, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_34, term_l_34, term_m_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_34, term_p_34, term_a_35);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_35, term_f_35, term_g_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_35, term_y_26, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_35, term_o_35, term_p_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_35, term_a_36, term_b_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_36, term_e_36, term_f_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_36, term_i_36, term_j_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_36, term_u_36, term_v_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_36, term_c_37, term_d_37);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_37, term_g_37, term_h_37);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_37, term_o_37, term_p_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_37, term_s_37, term_x_37);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_37, term_a_38, term_b_38);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_38, term_f_38, term_i_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_38, term_p_38, term_q_38);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_38, term_x_38, term_y_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_39, term_c_39, term_d_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_39, term_i_39, term_l_39);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_39, term_o_39, term_r_39);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym__2, term_x_46, term_e_47);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym__2, term_x_46, term_z_49);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_r_28);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_r_28);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_b_28, term_r_28);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_r_28);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_r_28);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_r_28);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym__2, term_u_54, term_r_28);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_i_21);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(sym__2, term_z_55, term_r_28);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym__2, term_e_56, term_r_28);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_t_56, term_r_28);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__2, term_d_59, term_e_59);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym__2, term_x_60, term_r_28);
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(sym__3, term_d_59, term_e_59, (ATerm) ATempty);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym__2, term_d_46, term_m_63);
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_g_26);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_i_21);
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_g_26);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATempty);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
ATerm olevel1_1 (ATerm, ATerm n_109 (ATerm));
ATerm dead_var_elim_0 (ATerm);
ATerm bound_unbound_vars_0 (ATerm);
ATerm const_prop_0 (ATerm);
ATerm olevel3_1 (ATerm, ATerm p_109 (ATerm));
ATerm desugar_case_0 (ATerm);
ATerm olevel2_1 (ATerm, ATerm o_109 (ATerm));
ATerm compile_match_0 (ATerm);
ATerm olevel_2 (ATerm, ATerm l_109 (ATerm), ATerm m_109 (ATerm));
ATerm olevel4_1 (ATerm, ATerm q_109 (ATerm));
ATerm define_congruences_0 (ATerm);
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
ATerm strc_0 (ATerm);
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
        ATerm z_20;
        z_20 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = z_20;
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
  ATerm c_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_92(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = c_21;
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
      t = term_i_21;
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
    ATerm j_21;
    j_21 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_l_21;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_r_21);
        t = geq_0(t);
      }
    }
    t = j_21;
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
            t = term_v_21;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_z_21;
              t = get_config_0(t);
              ;
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_a_22;
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
                t = term_b_22;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_z_21), not_null(c_4)));
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
            t = term_d_22;
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
            t = term_g_22;
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
                t = term_i_22;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_z_21), not_null(r_4)), term_k_22));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(v_4));
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
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22;
      n_22 = t;
      {
        t = term_k_22;
        t = get_config_0(t);
      }
      t = n_22;
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
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
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_w_22));
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
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_d_23);
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
            t = term_d_23;
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
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
                        ATerm k_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm l_23 = t;
                            int m_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(m_23);
                              }
                            else
                              {
                                t = l_23;
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
                            t = k_23;
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
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
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
    t = term_r_23;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_s_23;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_t_23;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_u_23);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_v_23;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm b_24;
    b_24 = t;
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
    t = b_24;
    {
      ATerm b_7 = NULL;
      t = term_c_24;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_c_24);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_k_24)), not_null(w_6));
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
    ATerm l_24;
    l_24 = t;
    {
      ATerm m_1 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = debug_1(t, m_1);
      {
        ATerm n_24;
        n_24 = t;
        {
          t = term_o_24;
          t = get_config_0(t);
        }
        t = n_24;
        {
          ATerm n_1 (ATerm t)
          {
            ATerm k_7 = NULL;
            ATerm o_1 (ATerm t)
            {
              t = term_u_24;
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
              t = term_y_24;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_c_25), term_z_24);
              return(t);
            }
            t = xtc_transform_2(t, p_1, q_1);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm n_7 = NULL;
                ATerm s_1 (ATerm t)
                {
                  t = term_f_25;
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
                  t = (ATerm) ATinsert(ATempty, term_g_25);
                  return(t);
                }
                t = say_1(t, t_1);
              }
            }
          }
        }
      }
    }
    t = l_24;
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_h_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_j_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_k_24);
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
      t = term_k_25;
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
          t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_l_25));
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
        t = olevel1_1(t, bound_unbound_vars_0);
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
                        t = term_m_25;
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
    ATerm n_25;
    n_25 = t;
    {
      ATerm h_2 (ATerm t)
      {
        t = term_o_25;
        return(t);
      }
      t = debug_1(t, h_2);
      {
        ATerm p_25;
        p_25 = t;
        {
          t = term_q_25;
          t = get_config_0(t);
        }
        t = p_25;
        {
          ATerm i_2 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_2 (ATerm t)
            {
              t = term_y_25;
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
              t = term_y_24;
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
              t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), term_z_24);
              return(t);
            }
            t = xtc_transform_2(t, k_2, l_2);
            {
              ATerm m_2 (ATerm t)
              {
                ATerm l_8 = NULL;
                ATerm n_2 (ATerm t)
                {
                  t = term_d_26;
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
                  t = (ATerm) ATinsert(ATempty, term_g_25);
                  return(t);
                }
                t = say_1(t, o_2);
              }
            }
          }
        }
      }
    }
    t = n_25;
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm stratego_of_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_e_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_f_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm olevel1_1 (ATerm t, ATerm n_109 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    t = term_g_26;
    return(t);
  }
  t = olevel_2(t, t_2, n_109);
  return(t);
}
ATerm dead_var_elim_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  ATerm y_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, u_2, y_2);
  return(t);
}
ATerm bound_unbound_vars_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        t = term_k_26;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        ATerm d_9 = NULL;
        ATerm e_9 = NULL;
        t = pass_verbose_0(t);
        {
          e_9 = t;
          if(((d_9 != NULL) && (d_9 != e_9)))
            _fail(e_9);
          else
            d_9 = e_9;
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(d_9)), term_k_24);
        return(t);
      }
      t = xtc_transform_2(t, z_2, c_3);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm d_3 (ATerm t)
        {
          t = term_k_26;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          ATerm f_9 = NULL;
          ATerm g_9 = NULL;
          t = pass_verbose_0(t);
          {
            g_9 = t;
            if(((f_9 != NULL) && (f_9 != g_9)))
              _fail(g_9);
            else
              f_9 = g_9;
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_k_24);
          return(t);
        }
        t = xtc_transform_2(t, d_3, e_3);
      }
    }
  return(t);
}
ATerm const_prop_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_l_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, f_3, g_3);
  return(t);
}
ATerm olevel3_1 (ATerm t, ATerm p_109 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = olevel_2(t, j_3, p_109);
  return(t);
}
ATerm desugar_case_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = term_t_26;
    return(t);
  }
  ATerm q_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, m_3, q_3);
  return(t);
}
ATerm olevel2_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = term_r_21;
    return(t);
  }
  t = olevel_2(t, r_3, o_109);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  ATerm t_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, s_3, t_3);
  return(t);
}
ATerm olevel_2 (ATerm t, ATerm l_109 (ATerm), ATerm m_109 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm v_26;
    v_26 = t;
    {
      ATerm x_9 = NULL,z_9 = NULL;
      ATerm w_26;
      w_26 = t;
      {
        ATerm y_9 = NULL;
        t = l_109(t);
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      t = w_26;
      {
        ATerm a_10 = NULL;
        t = term_x_26;
        {
          t = get_config_0(t);
          {
            a_10 = t;
            if(((z_9 != NULL) && (z_9 != a_10)))
              _fail(a_10);
            else
              z_9 = a_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(x_9));
          t = geq_0(t);
        }
      }
    }
    t = v_26;
    t = m_109(t);
    return(t);
  }
  t = try_1(t, w_3);
  return(t);
}
ATerm olevel4_1 (ATerm t, ATerm q_109 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = olevel_2(t, x_3, q_109);
  return(t);
}
ATerm define_congruences_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  ATerm z_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, y_3, z_3);
  return(t);
}
ATerm dead_def_elim_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  ATerm i_4 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, d_4, i_4);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm m_10 = NULL;
    ATerm n_10 = NULL;
    t = pass_verbose_0(t);
    {
      n_10 = t;
      if(((m_10 != NULL) && (m_10 != n_10)))
        _fail(n_10);
      else
        m_10 = n_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_10)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, j_4, k_4);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_i_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, l_4, m_4);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    t = term_l_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, n_4, o_4);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      t = term_m_27;
      return(t);
    }
    t = debug_1(t, z_4);
    return(t);
  }
  t = if_verbose2_1(t, s_4);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        ATerm y_10 = NULL;
        ATerm z_10 = NULL;
        z_10 = t;
        if(((y_10 != NULL) && (y_10 != z_10)))
          _fail(z_10);
        else
          y_10 = z_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_n_27));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, c_5);
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      t = olevel1_1(t, optimize1_0);
      {
        ATerm d_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            ATerm o_27;
            o_27 = t;
            {
              ATerm p_27 = t;
              if((PushChoice() == 0))
                {
                  t = term_r_27;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_27;
                }
            }
            t = o_27;
            t = fusion_0(t);
            return(t);
          }
          t = try_1(t, g_5);
          return(t);
        }
        t = olevel2_1(t, d_5);
        {
          t = olevel4_1(t, inline_0);
          {
            t = olevel4_1(t, dead_def_elim_0);
            {
              t = olevel4_1(t, optimize2_0);
              {
                t = define_congruences_0(t);
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = const_prop_0(t);
                    {
                      t = bound_unbound_vars_0(t);
                      t = dead_var_elim_0(t);
                    }
                    return(t);
                  }
                  t = olevel4_1(t, h_5);
                  {
                    t = olevel4_1(t, optimize2_0);
                    {
                      t = olevel2_1(t, compile_match_0);
                      {
                        t = olevel2_1(t, desugar_case_0);
                        {
                          t = olevel3_1(t, optimize2_0);
                          {
                            ATerm m_5 (ATerm t)
                            {
                              t = const_prop_0(t);
                              {
                                t = bound_unbound_vars_0(t);
                                t = dead_var_elim_0(t);
                              }
                              return(t);
                            }
                            t = olevel3_1(t, m_5);
                            {
                              t = olevel1_1(t, optimize2_0);
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
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, a_5, b_5);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    t = term_s_27;
    return(t);
  }
  ATerm o_5 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_11)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, n_5, o_5);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm g_11 = NULL;
    ATerm h_11 = NULL;
    t = pass_verbose_0(t);
    {
      h_11 = t;
      if(((g_11 != NULL) && (g_11 != h_11)))
        _fail(h_11);
      else
        g_11 = h_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_11)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, p_5, q_5);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    t = term_u_27;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm m_11 = NULL,o_11 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm n_11 = NULL;
      t = pass_verbose_0(t);
      {
        n_11 = t;
        if(((m_11 != NULL) && (m_11 != n_11)))
          _fail(n_11);
        else
          m_11 = n_11;
      }
    }
    t = w_27;
    {
      ATerm r_11 = NULL;
      t = term_x_27;
      {
        t = get_config_0(t);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm p_11 = NULL;
            ATerm q_11 = NULL;
            q_11 = t;
            if(((p_11 != NULL) && (p_11 != q_11)))
              _fail(q_11);
            else
              p_11 = q_11;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_11)), term_x_27);
            return(t);
          }
          t = map_1(t, u_5);
          {
            r_11 = t;
            if(((o_11 != NULL) && (o_11 != r_11)))
              _fail(r_11);
            else
              o_11 = r_11;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_11)), (ATerm) ATinsert(ATempty, term_k_24)), not_null(m_11));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, r_5, s_5);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = term_y_27;
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm w_11 = NULL;
    ATerm x_11 = NULL;
    t = pass_verbose_0(t);
    {
      x_11 = t;
      if(((w_11 != NULL) && (w_11 != x_11)))
        _fail(x_11);
      else
        w_11 = x_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_11)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, v_5, w_5);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = term_z_27;
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm a_12 = NULL;
    ATerm b_12 = NULL;
    t = pass_verbose_0(t);
    {
      b_12 = t;
      if(((a_12 != NULL) && (a_12 != b_12)))
        _fail(b_12);
      else
        a_12 = b_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(a_12)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, a_6, c_6);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm g_6 (ATerm t)
  {
    ATerm a_28;
    a_28 = t;
    {
      t = term_b_28;
      t = get_config_0(t);
    }
    t = a_28;
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          {
            t = (ATerm) ATinsert(ATempty, term_e_28);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm i_6 (ATerm t)
        {
          ATerm f_12 = NULL;
          ATerm j_6 (ATerm t)
          {
            t = term_f_28;
            return(t);
          }
          t = get_outfile_1(t, j_6);
          {
            f_12 = t;
            if(((e_12 != NULL) && (e_12 != f_12)))
              _fail(f_12);
            else
              e_12 = f_12;
          }
          return(t);
        }
        t = copy_to_1(t, i_6);
        {
          ATerm k_6 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_g_28);
            return(t);
          }
          t = say_1(t, k_6);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, g_6);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm h_28;
    h_28 = t;
    {
      ATerm i_12 = NULL;
      ATerm j_12 = NULL;
      t = term_i_28;
      {
        t = get_config_0(t);
        {
          j_12 = t;
          if(((i_12 != NULL) && (i_12 != j_12)))
            _fail(j_12);
          else
            i_12 = j_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), term_r_21);
        t = geq_0(t);
      }
    }
    t = h_28;
    t = j_101(t);
    return(t);
  }
  t = try_1(t, l_6);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm m_6 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    ATerm n_12 = NULL;
    ATerm o_12 = NULL;
    t = pass_verbose_0(t);
    {
      o_12 = t;
      if(((n_12 != NULL) && (n_12 != o_12)))
        _fail(o_12);
      else
        n_12 = o_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(n_12)), term_k_24);
    return(t);
  }
  t = xtc_transform_2(t, m_6, n_6);
  {
    ATerm o_6 (ATerm t)
    {
      ATerm p_6 (ATerm t)
      {
        ATerm q_12 = NULL;
        ATerm s_6 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        t = get_outfile_1(t, s_6);
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
        return(t);
      }
      t = copy_to_1(t, p_6);
      {
        ATerm t_6 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_12)), term_p_28);
          return(t);
        }
        t = say_1(t, t_6);
      }
      return(t);
    }
    t = if_keep2_1(t, o_6);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm k_101 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm q_28;
    q_28 = t;
    {
      ATerm u_12 = NULL;
      ATerm v_12 = NULL;
      t = term_i_28;
      {
        t = get_config_0(t);
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), term_o_26);
        t = geq_0(t);
      }
    }
    t = q_28;
    t = k_101(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm a_13 = NULL,b_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym_Specification_1))
    {
      b_13 = ATgetArgument(a_13, 0);
      {
        ATerm d_13 = NULL;
        ATerm e_13 = NULL;
        t = term_r_28;
        {
          t = e_79(t);
          {
            e_13 = t;
            if(((d_13 != NULL) && (d_13 != e_13)))
              _fail(e_13);
            else
              d_13 = e_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(b_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_s_28, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_13)), (ATerm) ATempty))))));
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
  ATerm j_13 = NULL,l_13 = NULL;
  ATerm v_6 (ATerm t)
  {
    ATerm w_28;
    w_28 = t;
    {
      ATerm k_13 = NULL;
      t = term_b_29;
      {
        t = get_config_0(t);
        {
          k_13 = t;
          {
            if(((j_13 != NULL) && (j_13 != k_13)))
              _fail(k_13);
            else
              j_13 = k_13;
            {
              ATerm c_7 (ATerm t)
              {
                ATerm d_7 (ATerm t)
                {
                  t = term_c_29;
                  return(t);
                }
                t = debug_1(t, d_7);
                return(t);
              }
              t = if_verbose2_1(t, c_7);
            }
          }
        }
      }
    }
    t = w_28;
    {
      ATerm e_7 (ATerm t)
      {
        ATerm f_7 (ATerm t)
        {
          t = not_null(j_13);
          return(t);
        }
        t = AddMain_1(t, f_7);
        return(t);
      }
      t = xtc_io_transform_1(t, e_7);
    }
    return(t);
  }
  t = try_1(t, v_6);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        ATerm m_13 = NULL;
        ATerm o_7 (ATerm t)
        {
          t = term_d_29;
          return(t);
        }
        t = get_outfile_1(t, o_7);
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
        return(t);
      }
      t = copy_to_1(t, h_7);
      {
        ATerm p_7 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_13)), term_e_29);
          return(t);
        }
        t = say_1(t, p_7);
      }
      return(t);
    }
    t = if_keep3_1(t, g_7);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm u_13 = NULL,v_13 = NULL;
  s_13 = t;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm f_29;
      f_29 = t;
      {
        ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
        t = term_q_29;
        {
          t = table_get_0(t);
          {
            w_13 = t;
            r_13 :
            if(((ATgetType(w_13) == AT_LIST) && !(ATisEmpty(w_13))))
              {
                x_13 = ATgetFirst((ATermList) w_13);
                y_13 = (ATerm) ATgetNext((ATermList) w_13);
                {
                  if(((v_13 != NULL) && (v_13 != x_13)))
                    _fail(x_13);
                  else
                    v_13 = x_13;
                  {
                    if(((u_13 != NULL) && (u_13 != y_13)))
                      _fail(y_13);
                    else
                      u_13 = y_13;
                    {
                      t = not_null(v_13);
                      {
                        ATerm r_7 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, r_7);
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
      t = f_29;
      {
        ATerm u_7 (ATerm t)
        {
          t = term_g_29;
          return(t);
        }
        t = end_scope_1(t, u_7);
      }
      return(t);
    }
    t = repeat_1(t, q_7);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_21;
        t = get_config_0(t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = term_d_23;
      }
    return(t);
  }
  t = copy_to_1(t, v_7);
  {
    t = term_i_21;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm d_14 = NULL,f_14 = NULL;
  ATerm t_29;
  t_29 = t;
  {
    ATerm e_14 = NULL;
    t = f_79(t);
    {
      e_14 = t;
      if(((d_14 != NULL) && (d_14 != e_14)))
        _fail(e_14);
      else
        d_14 = e_14;
    }
  }
  t = t_29;
  {
    ATerm g_14 = NULL;
    t = term_u_29;
    {
      t = get_config_0(t);
      {
        g_14 = t;
        if(((f_14 != NULL) && (f_14 != g_14)))
          _fail(g_14);
        else
          f_14 = g_14;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(d_14));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  m_14 :
  if(match_cons(n_14, sym_stderr_0))
    {
      ATerm p_14 = NULL,r_14 = NULL;
      ATerm v_29;
      v_29 = t;
      {
        ATerm q_14 = NULL;
        t = SSLgetAnnotations(not_null(n_14));
        {
          q_14 = t;
          if(((p_14 != NULL) && (p_14 != q_14)))
            _fail(q_14);
          else
            p_14 = q_14;
        }
      }
      t = v_29;
      {
        ATerm s_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(p_14));
        {
          s_14 = t;
          if(((r_14 != NULL) && (r_14 != s_14)))
            _fail(s_14);
          else
            r_14 = s_14;
        }
        t = not_null(r_14);
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
  ATerm a_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_stdout_0))
    {
      ATerm c_15 = NULL,e_15 = NULL;
      ATerm w_29;
      w_29 = t;
      {
        ATerm d_15 = NULL;
        t = SSLgetAnnotations(not_null(a_15));
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
      }
      t = w_29;
      {
        ATerm f_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(c_15));
        {
          f_15 = t;
          if(((e_15 != NULL) && (e_15 != f_15)))
            _fail(f_15);
          else
            e_15 = f_15;
        }
        t = not_null(e_15);
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
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_FILE_1))
    {
      s_15 = ATgetArgument(r_15, 0);
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_15 = NULL;
            ATerm v_15 = NULL;
            t = q_0(t);
            {
              v_15 = t;
              {
                if(((u_15 != NULL) && (u_15 != v_15)))
                  _fail(v_15);
                else
                  u_15 = v_15;
                {
                  ATerm z_29 = t;
                  int c_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(c_30);
                    }
                  else
                    {
                      t = z_29;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), not_null(u_15));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_15));
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm d_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_15 = NULL;
                  ATerm y_15 = NULL;
                  t = q_0(t);
                  {
                    y_15 = t;
                    {
                      if(((x_15 != NULL) && (x_15 != y_15)))
                        _fail(y_15);
                      else
                        x_15 = y_15;
                      {
                        ATerm j_30 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm k_30 = t;
                            int l_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(l_30);
                              }
                            else
                              {
                                t = k_30;
                                {
                                  ATerm m_30 = t;
                                  int n_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(n_30);
                                    }
                                  else
                                    {
                                      t = m_30;
                                      {
                                        ATerm z_15 = NULL;
                                        z_15 = t;
                                        if(((s_15 != NULL) && (s_15 != z_15)))
                                          _fail(z_15);
                                        else
                                          s_15 = z_15;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = j_30;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_15), not_null(x_15));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_15));
                  ;
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = d_30;
                  {
                    ATerm b_16 = NULL;
                    t = q_0(t);
                    {
                      b_16 = t;
                      if(((s_15 != NULL) && (s_15 != b_16)))
                        _fail(b_16);
                      else
                        s_15 = b_16;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_15));
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
  ATerm k_16 = NULL;
  ATerm y_7 (ATerm t)
  {
    ATerm o_30;
    o_30 = t;
    {
      t = term_p_30;
      t = get_config_0(t);
    }
    t = o_30;
    {
      ATerm z_7 (ATerm t)
      {
        ATerm l_16 = NULL;
        ATerm c_8 (ATerm t)
        {
          t = term_r_30;
          return(t);
        }
        t = get_outfile_1(t, c_8);
        {
          l_16 = t;
          if(((k_16 != NULL) && (k_16 != l_16)))
            _fail(l_16);
          else
            k_16 = l_16;
        }
        return(t);
      }
      t = copy_to_1(t, z_7);
      {
        ATerm v_30;
        v_30 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_w_30);
          t = echo_0(t);
        }
        t = v_30;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, y_7);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm p_16 = NULL;
  ATerm q_16 = NULL,s_16 = NULL;
  ATerm r_16 = NULL;
  t = term_i_28;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = term_g_26;
      }
    {
      r_16 = t;
      if(((q_16 != NULL) && (q_16 != r_16)))
        _fail(r_16);
      else
        q_16 = r_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), term_g_26);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          s_16 = t;
          if(((p_16 != NULL) && (p_16 != s_16)))
            _fail(s_16);
          else
            p_16 = s_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_16)), term_i_28);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm x_16 = NULL;
  ATerm y_16 = NULL,a_17 = NULL;
  ATerm z_16 = NULL;
  t = term_l_21;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = term_g_26;
      }
    {
      z_16 = t;
      if(((y_16 != NULL) && (y_16 != z_16)))
        _fail(z_16);
      else
        y_16 = z_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), term_g_26);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          a_17 = t;
          if(((x_16 != NULL) && (x_16 != a_17)))
            _fail(a_17);
          else
            x_16 = a_17;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_16)), term_l_21);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm e_17 = NULL;
  ATerm f_17 = NULL;
  ATerm d_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = d_31;
      {
        t = term_u_29;
        t = get_config_0(t);
      }
    }
  {
    f_17 = t;
    if(((e_17 != NULL) && (e_17 != f_17)))
      _fail(f_17);
    else
      e_17 = f_17;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_17)), term_o_31);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_stdin_0))
    {
      ATerm o_17 = NULL;
      ATerm p_17 = NULL;
      t = term_p_31;
      {
        t = ReadFromFile_0(t);
        {
          p_17 = t;
          if(((o_17 != NULL) && (o_17 != p_17)))
            _fail(p_17);
          else
            o_17 = p_17;
        }
      }
      t = not_null(o_17);
    }
  else
    {
      if(match_cons(m_17, sym_FILE_1))
        {
          n_17 = ATgetArgument(m_17, 0);
          {
            ATerm r_17 = NULL;
            ATerm s_17 = NULL;
            t = not_null(n_17);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  s_17 = t;
                  if(((r_17 != NULL) && (r_17 != s_17)))
                    _fail(s_17);
                  else
                    r_17 = s_17;
                }
              }
            }
            t = not_null(r_17);
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  b_18 = t;
  z_17 :
  if(match_cons(b_18, sym__2))
    {
      c_18 = ATgetArgument(b_18, 0);
      e_18 = ATgetArgument(b_18, 1);
      a_18 :
      if(match_cons(c_18, sym_Stream_1))
        {
          d_18 = ATgetArgument(c_18, 0);
          {
            ATerm h_18 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(d_18), not_null(e_18));
            {
              ATerm i_18 = NULL;
              i_18 = t;
              if(((h_18 != NULL) && (h_18 != i_18)))
                _fail(i_18);
              else
                h_18 = i_18;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_18));
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
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__2))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      {
        ATerm u_18 = NULL,w_18 = NULL;
        t = not_null(q_18);
        {
          ATerm v_18 = NULL;
          v_18 = t;
          if(((u_18 != NULL) && (u_18 != v_18)))
            _fail(v_18);
          else
            u_18 = v_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), term_q_31);
            {
              t = open_stream_0(t);
              {
                ATerm x_18 = NULL;
                x_18 = t;
                if(((w_18 != NULL) && (w_18 != x_18)))
                  _fail(x_18);
                else
                  w_18 = x_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(r_18));
                  {
                    t = d_99(t);
                    {
                      t = fclose_0(t);
                      t = not_null(r_18);
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
  ATerm d_19 = NULL;
  ATerm f_19 = NULL;
  d_19 = t;
  {
    ATerm g_19 = NULL;
    t = xtc_new_file_0(t);
    {
      g_19 = t;
      {
        if(((f_19 != NULL) && (f_19 != g_19)))
          _fail(g_19);
        else
          f_19 = g_19;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_19), not_null(d_19));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_19);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_19));
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
  ATerm k_19 = NULL;
  k_19 = t;
  t = SSL_close_file(not_null(k_19));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym__2))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      t = SSL_execvp(not_null(q_19), not_null(r_19));
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
  ATerm w_19 = NULL;
  w_19 = t;
  t = SSL_int_to_string(not_null(w_19));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_UnknownSignal_1))
    {
      f_20 = ATgetArgument(e_20, 0);
      {
        ATerm j_20 = NULL;
        ATerm k_20 = NULL;
        t = not_null(f_20);
        {
          t = int_to_string_0(t);
          {
            k_20 = t;
            if(((j_20 != NULL) && (j_20 != k_20)))
              _fail(k_20);
            else
              j_20 = k_20;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_31), not_null(j_20)), term_r_31);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(e_20, sym_Signal_3))
        {
          f_20 = ATgetArgument(e_20, 0);
          g_20 = ATgetArgument(e_20, 1);
          h_20 = ATgetArgument(e_20, 2);
          {
            ATerm o_20 = NULL;
            ATerm p_20 = NULL;
            t = not_null(g_20);
            {
              t = int_to_string_0(t);
              {
                p_20 = t;
                if(((o_20 != NULL) && (o_20 != p_20)))
                  _fail(p_20);
                else
                  o_20 = p_20;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_20)), term_v_31), not_null(o_20)), term_u_31), not_null(f_20));
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
  ATerm v_20 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm w_20 = NULL;
    t = d_87(t);
    {
      w_20 = t;
      if(((v_20 != NULL) && (v_20 != w_20)))
        _fail(w_20);
      else
        v_20 = w_20;
    }
    return(t);
  }
  t = fetch_1(t, d_8);
  t = not_null(v_20);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm w_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_39), term_m_39), term_e_39), term_a_39), term_v_38), term_j_38), term_c_38), term_y_37), term_q_37), term_i_37), term_e_37), term_w_36), term_s_36), term_g_36), term_c_36), term_q_35), term_m_35), term_j_35), term_b_35), term_n_34), term_j_34), term_b_34), term_r_33), term_j_33), term_f_33), term_v_32), term_p_32), term_k_32);
        {
          ATerm e_8 (ATerm t)
          {
            ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
            d_21 = t;
            a_21 :
            if(match_cons(d_21, sym_Signal_3))
              {
                e_21 = ATgetArgument(d_21, 0);
                f_21 = ATgetArgument(d_21, 1);
                g_21 = ATgetArgument(d_21, 2);
                if(((b_21 != NULL) && (b_21 != f_21)))
                  _fail(f_21);
                else
                  b_21 = f_21;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, e_8);
        }
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(b_21));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm v_39;
  v_39 = t;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
      n_21 = t;
      m_21 :
      if(match_cons(n_21, sym_WaitStatus_3))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          q_21 = ATgetArgument(n_21, 2);
          {
            ATerm t_21 = NULL;
            t = not_null(p_21);
            {
              ATerm w_39 = t;
              if((PushChoice() == 0))
                {
                  ATerm s_21 = NULL;
                  s_21 = t;
                  k_21 :
                  if(!(match_int(s_21, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_39;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm u_21 = NULL;
                    u_21 = t;
                    if(((t_21 != NULL) && (t_21 != u_21)))
                      _fail(u_21);
                    else
                      t_21 = u_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_21)), term_x_39));
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
    t = try_1(t, f_8);
  }
  t = v_39;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = SSL_waitpid(not_null(y_21));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm f_22 = NULL;
  ATerm h_22 = NULL;
  f_22 = t;
  {
    t = fork_0(t);
    {
      h_22 = t;
      {
        ATerm b_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = NULL;
            j_22 = t;
            e_22 :
            if(match_int(j_22, 0))
              {
                t = not_null(f_22);
                t = y_101(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = b_40;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(f_22));
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
  ATerm s_22 = NULL;
  ATerm m_8 (ATerm t)
  {
    ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
    t_22 = t;
    r_22 :
    if(match_cons(t_22, sym__2))
      {
        u_22 = ATgetArgument(t_22, 0);
        v_22 = ATgetArgument(t_22, 1);
        {
          ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
          if(((s_22 != NULL) && (s_22 != v_22)))
            _fail(v_22);
          else
            s_22 = v_22;
          {
            t = not_null(u_22);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  x_22 = t;
                  p_22 :
                  if(match_cons(x_22, sym_WaitStatus_3))
                    {
                      y_22 = ATgetArgument(x_22, 0);
                      z_22 = ATgetArgument(x_22, 1);
                      a_23 = ATgetArgument(x_22, 2);
                      q_22 :
                      if(match_int(y_22, 0))
                        {
                          t = not_null(s_22);
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
  t = fork_2(t, a_102, m_8);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      {
        ATerm n_8 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(h_23));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, n_8);
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
  ATerm n_23 = NULL;
  ATerm k_40;
  k_40 = t;
  {
    ATerm o_23 = NULL;
    t = v_108(t);
    {
      t = xtc_find_warning_0(t);
      {
        o_23 = t;
        if(((n_23 != NULL) && (n_23 != o_23)))
          _fail(o_23);
        else
          n_23 = o_23;
      }
    }
  }
  t = k_40;
  {
    ATerm l_40;
    l_40 = t;
    {
      ATerm p_23 = NULL;
      ATerm q_23 = NULL;
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(p_23));
        t = call_0(t);
      }
    }
    t = l_40;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
        ATerm m_40;
        m_40 = t;
        {
          ATerm g_24 = NULL;
          ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
          t = k_97(t);
          {
            g_24 = t;
            {
              if(((d_24 != NULL) && (d_24 != g_24)))
                _fail(g_24);
              else
                d_24 = g_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_24), not_null(z_23), not_null(a_24));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_40 = t;
                    int t_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), term_h_29);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(t_40);
                      }
                    else
                      {
                        t = s_40;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_24 = t;
                      w_23 :
                      if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
                        {
                          i_24 = ATgetFirst((ATermList) h_24);
                          j_24 = (ATerm) ATgetNext((ATermList) h_24);
                          {
                            if(((e_24 != NULL) && (e_24 != i_24)))
                              _fail(i_24);
                            else
                              e_24 = i_24;
                            {
                              if(((f_24 != NULL) && (f_24 != j_24)))
                                _fail(j_24);
                              else
                                f_24 = j_24;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_24), term_h_29, (ATerm) ATinsert(CheckATermList(not_null(f_24)), (ATerm) ATinsert(CheckATermList(not_null(e_24)), not_null(z_23))));
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
        t = m_40;
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
  ATerm y_40;
  y_40 = t;
  {
    t = w_98(t);
    {
      ATerm o_8 (ATerm t)
      {
        t = term_z_40;
        return(t);
      }
      t = debug_1(t, o_8);
    }
  }
  t = y_40;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  ATerm a_25 (ATerm t)
  {
    ATerm a_41 = t;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
        v_24 = t;
        p_24 :
        if(match_cons(v_24, sym__2))
          {
            w_24 = ATgetArgument(v_24, 0);
            x_24 = ATgetArgument(v_24, 1);
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
        t = a_41;
      }
    {
      ATerm p_8 (ATerm t)
      {
        t = term_f_41;
        return(t);
      }
      t = obsolete_1(t, p_8);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_24), term_q_31);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm b_25 (ATerm t)
  {
    t = SSL_open_file(not_null(s_24), not_null(t_24));
    return(t);
  }
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm g_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_25(t);
            ;
            LocalPopChoice(i_41);
          }
        else
          {
            t = g_41;
            t = b_25(t);
          }
      }
    }
  else
    {
      t = a_25(t);
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
  ATerm d_25 = NULL;
  ATerm e_25 = NULL;
  t = term_r_28;
  {
    t = new_0(t);
    {
      e_25 = t;
      if(((d_25 != NULL) && (d_25 != e_25)))
        _fail(e_25);
      else
        d_25 = e_25;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), term_l_41);
    {
      t = conc_strings_0(t);
      {
        ATerm s_8 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, s_8);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm i_25 = NULL;
  t = new_file_0(t);
  {
    i_25 = t;
    {
      ATerm m_41;
      m_41 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), term_q_31);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), term_r_28);
            {
              ATerm t_8 (ATerm t)
              {
                t = term_g_29;
                return(t);
              }
              t = assert_1(t, t_8);
            }
          }
        }
      }
      t = m_41;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_stdin_0))
    {
      ATerm u_25 = NULL;
      ATerm v_25 = NULL;
      ATerm w_25 = NULL;
      t = xtc_new_file_0(t);
      {
        v_25 = t;
        {
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
          {
            ATerm x_25 = NULL;
            t = p_0(t);
            {
              x_25 = t;
              if(((w_25 != NULL) && (w_25 != x_25)))
                _fail(x_25);
              else
                w_25 = x_25;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_25)), term_z_21));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(u_25);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_25));
    }
  else
    {
      if(match_cons(s_25, sym_FILE_1))
        {
          t_25 = ATgetArgument(s_25, 0);
          {
            ATerm z_25 = NULL;
            ATerm a_26 = NULL;
            t = not_null(t_25);
            {
              ATerm b_26 = NULL;
              t = xtc_new_file_0(t);
              {
                a_26 = t;
                {
                  if(((z_25 != NULL) && (z_25 != a_26)))
                    _fail(a_26);
                  else
                    z_25 = a_26;
                  {
                    ATerm c_26 = NULL;
                    t = p_0(t);
                    {
                      c_26 = t;
                      if(((b_26 != NULL) && (b_26 != c_26)))
                        _fail(c_26);
                      else
                        b_26 = c_26;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_25)), term_z_21), not_null(t_25)), term_p_41));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(z_25);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_25));
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
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_stdin_0))
    {
      ATerm p_26 = NULL,r_26 = NULL;
      ATerm q_41;
      q_41 = t;
      {
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
      }
      t = q_41;
      {
        ATerm s_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(p_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        t = not_null(r_26);
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
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym_FILE_1))
    {
      c_27 = ATgetArgument(b_27, 0);
      {
        ATerm f_27 = NULL,h_27 = NULL;
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(b_27));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        {
          t = not_null(c_27);
          {
            ATerm j_27 = NULL;
            t = e_71(t);
            {
              h_27 = t;
              {
                ATerm k_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_27)), not_null(f_27));
                {
                  k_27 = t;
                  if(((j_27 != NULL) && (j_27 != k_27)))
                    _fail(k_27);
                  else
                    j_27 = k_27;
                }
                t = not_null(j_27);
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
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = t;
      int y_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(y_41);
        }
      else
        {
          t = x_41;
          t = stdin_0(t);
        }
      LocalPopChoice(w_41);
      t = xtc_transform_file_2(t, x_108, y_108);
    }
  else
    {
      t = v_41;
      t = xtc_transform_term_2(t, x_108, y_108);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm e_42;
    e_42 = t;
    {
      ATerm q_27 = NULL;
      ATerm v_27 = NULL;
      t = term_l_21;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_27), term_o_26);
        t = geq_0(t);
      }
    }
    t = e_42;
    t = i_100(t);
    return(t);
  }
  t = try_1(t, w_8);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_95 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm x_8 (ATerm t)
    {
      ATerm f_42 = t;
      int i_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, x_8);
          ;
          LocalPopChoice(i_42);
        }
      else
        {
          t = f_42;
          {
            ATerm j_42 = t;
            int o_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm n_28 = NULL;
                  n_28 = t;
                  l_28 :
                  if(!(match_int(n_28, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, a_9, _id);
                ;
                LocalPopChoice(o_42);
              }
            else
              {
                t = j_42;
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm o_28 = NULL;
                    o_28 = t;
                    m_28 :
                    if(!(match_int(o_28, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, b_9, o_95);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, x_8);
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
  ATerm u_28 = NULL,v_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_FILE_1))
    {
      v_28 = ATgetArgument(u_28, 0);
      {
        ATerm x_28 = NULL,y_28 = NULL;
        ATerm z_28 = NULL;
        t = not_null(v_28);
        {
          ATerm a_29 = NULL;
          t = basename_0(t);
          {
            z_28 = t;
            {
              if(((x_28 != NULL) && (x_28 != z_28)))
                _fail(z_28);
              else
                x_28 = z_28;
              {
                ATerm c_9 (ATerm t)
                {
                  ATerm h_9 (ATerm t)
                  {
                    t = term_p_42;
                    return(t);
                  }
                  t = debug_1(t, h_9);
                  return(t);
                }
                t = if_verbose3_1(t, c_9);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_42, not_null(x_28));
                  {
                    t = set_config_0(t);
                    {
                      ATerm r_42 = t;
                      int s_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_z_21;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(s_42);
                        }
                      else
                        {
                          t = r_42;
                          t = not_null(x_28);
                        }
                      {
                        a_29 = t;
                        {
                          if(((y_28 != NULL) && (y_28 != a_29)))
                            _fail(a_29);
                          else
                            y_28 = a_29;
                          {
                            ATerm i_9 (ATerm t)
                            {
                              ATerm j_9 (ATerm t)
                              {
                                t = term_t_42;
                                return(t);
                              }
                              t = debug_1(t, j_9);
                              return(t);
                            }
                            t = if_verbose3_1(t, i_9);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(y_28));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_28));
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
    ATerm m_9 (ATerm t)
    {
      t = term_u_42;
      return(t);
    }
    ATerm n_9 (ATerm t)
    {
      ATerm i_29 = NULL,k_29 = NULL,m_29 = NULL,o_29 = NULL;
      ATerm v_42;
      v_42 = t;
      {
        ATerm j_29 = NULL;
        t = dep_name_0(t);
        {
          j_29 = t;
          if(((i_29 != NULL) && (i_29 != j_29)))
            _fail(j_29);
          else
            i_29 = j_29;
        }
      }
      t = v_42;
      {
        ATerm a_43;
        a_43 = t;
        {
          ATerm l_29 = NULL;
          t = pass_verbose_0(t);
          {
            l_29 = t;
            if(((k_29 != NULL) && (k_29 != l_29)))
              _fail(l_29);
            else
              k_29 = l_29;
          }
        }
        t = a_43;
        {
          ATerm b_43;
          b_43 = t;
          {
            ATerm n_29 = NULL;
            t = pass_keep_0(t);
            {
              n_29 = t;
              if(((m_29 != NULL) && (m_29 != n_29)))
                _fail(n_29);
              else
                m_29 = n_29;
            }
          }
          t = b_43;
          {
            ATerm p_29 = NULL;
            t = term_d_43;
            {
              t = get_config_0(t);
              {
                p_29 = t;
                if(((o_29 != NULL) && (o_29 != p_29)))
                  _fail(p_29);
                else
                  o_29 = p_29;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_29)), not_null(k_29)), not_null(o_29)), not_null(i_29));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, m_9, n_9);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm r_9 (ATerm t)
    {
      t = term_e_43;
      return(t);
    }
    t = debug_1(t, r_9);
    return(t);
  }
  t = if_verbose2_1(t, q_9);
  {
    ATerm u_9 (ATerm t)
    {
      ATerm w_9 (ATerm t)
      {
        ATerm a_30 = NULL;
        ATerm b_30 = NULL;
        b_30 = t;
        if(((a_30 != NULL) && (a_30 != b_30)))
          _fail(b_30);
        else
          a_30 = b_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(CheckATermList(not_null(a_30)), term_f_43));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, w_9);
      return(t);
    }
    ATerm v_9 (ATerm t)
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
    t = profile_p__2(t, u_9, v_9);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  e_30 :
  if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
    {
      h_30 = ATgetFirst((ATermList) g_30);
      i_30 = (ATerm) ATgetNext((ATermList) g_30);
      t = not_null(i_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  q_30 :
  if(match_cons(s_30, sym__2))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      {
        ATerm g_43;
        g_43 = t;
        {
          ATerm x_30 = NULL;
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(u_30));
          {
            ATerm l_43 = t;
            int m_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(m_43);
              }
            else
              {
                t = l_43;
                t = (ATerm) ATempty;
              }
            {
              y_30 = t;
              if(((x_30 != NULL) && (x_30 != y_30)))
                _fail(y_30);
              else
                x_30 = y_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_30), not_null(u_30), not_null(x_30));
            t = table_put_0(t);
          }
        }
        t = g_43;
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
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  ATerm n_43;
  n_43 = t;
  {
    ATerm i_31 = NULL;
    ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
    t = h_97(t);
    {
      i_31 = t;
      {
        if(((h_31 != NULL) && (h_31 != i_31)))
          _fail(i_31);
        else
          h_31 = i_31;
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), term_h_29);
              t = table_get_0(t);
              ;
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_31 = t;
            e_31 :
            if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
              {
                k_31 = ATgetFirst((ATermList) j_31);
                l_31 = (ATerm) ATgetNext((ATermList) j_31);
                {
                  if(((g_31 != NULL) && (g_31 != k_31)))
                    _fail(k_31);
                  else
                    g_31 = k_31;
                  {
                    if(((f_31 != NULL) && (f_31 != l_31)))
                      _fail(l_31);
                    else
                      f_31 = l_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_31), term_h_29, not_null(f_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_31);
                          {
                            ATerm b_10 (ATerm t)
                            {
                              ATerm m_31 = NULL;
                              m_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), not_null(m_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, b_10);
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
  t = n_43;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_remove(not_null(s_31));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm r_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      ;
      LocalPopChoice(x_43);
    }
  else
    {
      t = r_43;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm x_31 = NULL;
  ATerm y_43;
  y_43 = t;
  {
    ATerm y_31 = NULL;
    ATerm z_31 = NULL;
    t = g_97(t);
    {
      y_31 = t;
      {
        if(((x_31 != NULL) && (x_31 != y_31)))
          _fail(y_31);
        else
          x_31 = y_31;
        {
          ATerm a_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), term_h_29);
          {
            ATerm z_43 = t;
            int e_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(e_44);
              }
            else
              {
                t = z_43;
                t = (ATerm) ATempty;
              }
            {
              a_32 = t;
              if(((z_31 != NULL) && (z_31 != a_32)))
                _fail(a_32);
              else
                z_31 = a_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), term_h_29, (ATerm) ATinsert(CheckATermList(not_null(z_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_43;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL;
  ATerm c_10 (ATerm t)
  {
    t = term_g_29;
    return(t);
  }
  t = begin_scope_1(t, c_10);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm f_44;
      f_44 = t;
      {
        ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
        ATerm g_44 = t;
        int h_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_29;
            t = table_get_0(t);
            ;
            LocalPopChoice(h_44);
          }
        else
          {
            t = g_44;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          h_32 = t;
          e_32 :
          if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
            {
              i_32 = ATgetFirst((ATermList) h_32);
              j_32 = (ATerm) ATgetNext((ATermList) h_32);
              {
                if(((g_32 != NULL) && (g_32 != i_32)))
                  _fail(i_32);
                else
                  g_32 = i_32;
                {
                  if(((f_32 != NULL) && (f_32 != j_32)))
                    _fail(j_32);
                  else
                    f_32 = j_32;
                  {
                    t = not_null(g_32);
                    {
                      ATerm g_10 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, g_10);
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
      t = f_44;
      {
        ATerm h_10 (ATerm t)
        {
          t = term_g_29;
          return(t);
        }
        t = end_scope_1(t, h_10);
      }
      return(t);
    }
    t = restore_always_2(t, h_108, d_10);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm k_10 (ATerm t)
  {
    ATerm i_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_32 = NULL;
        ATerm n_32 = NULL;
        t = term_p_41;
        {
          t = get_config_0(t);
          {
            n_32 = t;
            if(((m_32 != NULL) && (m_32 != n_32)))
              _fail(n_32);
            else
              m_32 = n_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_32));
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = i_44;
        t = term_p_31;
      }
    t = k_108(t);
    return(t);
  }
  t = xtc_temp_files_1(t, k_10);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm l_10 (ATerm t)
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
  t = xtc_input_1(t, l_10);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm o_10 (ATerm t)
  {
    ATerm m_44;
    m_44 = t;
    {
      ATerm q_32 = NULL;
      ATerm r_32 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          r_32 = t;
          if(((q_32 != NULL) && (q_32 != r_32)))
            _fail(r_32);
          else
            q_32 = r_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_32), term_g_26);
        t = geq_0(t);
      }
    }
    t = m_44;
    t = g_100(t);
    return(t);
  }
  t = try_1(t, o_10);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_TicksToSeconds(not_null(u_32));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__4))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      c_33 = ATgetArgument(z_32, 2);
      d_33 = ATgetArgument(z_32, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_33), not_null(d_33));
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
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym__2))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_33), not_null(n_33));
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            t = SSL_addr(not_null(m_33), not_null(n_33));
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
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__4))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      w_33 = ATgetArgument(t_33, 2);
      x_33 = ATgetArgument(t_33, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), not_null(w_33));
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
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm s_44 = t;
        int t_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_34), not_null(h_34));
            ;
            LocalPopChoice(t_44);
          }
        else
          {
            t = s_44;
            t = SSL_subtr(not_null(g_34), not_null(h_34));
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,c_35 = NULL,d_35 = NULL,h_35 = NULL,i_35 = NULL;
  t_34 = t;
  q_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      z_34 = ATgetArgument(t_34, 1);
      r_34 :
      if(match_cons(u_34, sym__4))
        {
          v_34 = ATgetArgument(u_34, 0);
          w_34 = ATgetArgument(u_34, 1);
          x_34 = ATgetArgument(u_34, 2);
          y_34 = ATgetArgument(u_34, 3);
          s_34 :
          if(match_cons(z_34, sym__4))
            {
              c_35 = ATgetArgument(z_34, 0);
              d_35 = ATgetArgument(z_34, 1);
              h_35 = ATgetArgument(z_34, 2);
              i_35 = ATgetArgument(z_34, 3);
              {
                ATerm r_35 = NULL,t_35 = NULL,v_35 = NULL,x_35 = NULL;
                ATerm x_44;
                x_44 = t;
                {
                  ATerm s_35 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_34), not_null(c_35));
                  {
                    t = subt_0(t);
                    {
                      s_35 = t;
                      if(((r_35 != NULL) && (r_35 != s_35)))
                        _fail(s_35);
                      else
                        r_35 = s_35;
                    }
                  }
                }
                t = x_44;
                {
                  ATerm y_44;
                  y_44 = t;
                  {
                    ATerm u_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), not_null(d_35));
                    {
                      t = subt_0(t);
                      {
                        u_35 = t;
                        if(((t_35 != NULL) && (t_35 != u_35)))
                          _fail(u_35);
                        else
                          t_35 = u_35;
                      }
                    }
                  }
                  t = y_44;
                  {
                    ATerm z_44;
                    z_44 = t;
                    {
                      ATerm w_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), not_null(h_35));
                      {
                        t = subt_0(t);
                        {
                          w_35 = t;
                          if(((v_35 != NULL) && (v_35 != w_35)))
                            _fail(w_35);
                          else
                            v_35 = w_35;
                        }
                      }
                    }
                    t = z_44;
                    {
                      ATerm y_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), not_null(i_35));
                      {
                        t = subt_0(t);
                        {
                          y_35 = t;
                          if(((x_35 != NULL) && (x_35 != y_35)))
                            _fail(y_35);
                          else
                            x_35 = y_35;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(r_35), not_null(t_35), not_null(v_35), not_null(x_35));
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
  ATerm k_36 = NULL;
  ATerm a_45;
  a_45 = t;
  {
    ATerm l_36 = NULL;
    t = times_0(t);
    {
      l_36 = t;
      if(((k_36 != NULL) && (k_36 != l_36)))
        _fail(l_36);
      else
        k_36 = l_36;
    }
  }
  t = a_45;
  {
    t = b_104(t);
    {
      ATerm b_45;
      b_45 = t;
      {
        ATerm m_36 = NULL,o_36 = NULL,q_36 = NULL;
        ATerm n_36 = NULL;
        t = times_0(t);
        {
          n_36 = t;
          if(((m_36 != NULL) && (m_36 != n_36)))
            _fail(n_36);
          else
            m_36 = n_36;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(k_36));
          {
            t = diff_times_0(t);
            {
              ATerm c_45;
              c_45 = t;
              {
                ATerm p_36 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    p_36 = t;
                    if(((o_36 != NULL) && (o_36 != p_36)))
                      _fail(p_36);
                    else
                      o_36 = p_36;
                  }
                }
              }
              t = c_45;
              {
                ATerm r_36 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    r_36 = t;
                    if(((q_36 != NULL) && (q_36 != r_36)))
                      _fail(r_36);
                    else
                      q_36 = r_36;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_36)), term_g_45), not_null(o_36)), term_d_45);
                  t = a_104(t);
                }
              }
            }
          }
        }
      }
      t = b_45;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm h_45;
  h_45 = t;
  {
    ATerm y_36 = NULL,a_37 = NULL;
    ATerm i_45;
    i_45 = t;
    {
      ATerm z_36 = NULL;
      t = p_98(t);
      {
        z_36 = t;
        if(((y_36 != NULL) && (y_36 != z_36)))
          _fail(z_36);
        else
          y_36 = z_36;
      }
    }
    t = i_45;
    {
      ATerm b_37 = NULL;
      b_37 = t;
      if(((a_37 != NULL) && (a_37 != b_37)))
        _fail(b_37);
      else
        a_37 = b_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_37)), not_null(y_36)));
        t = printnl_0(t);
      }
    }
  }
  t = h_45;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_10);
            ;
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            {
              ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
              k_37 = t;
              j_37 :
              if(match_cons(k_37, sym_Path_1))
                {
                  l_37 = ATgetArgument(k_37, 0);
                  t = not_null(l_37);
                }
              else
                {
                  if(match_cons(k_37, sym_Var_1))
                    {
                      l_37 = ATgetArgument(k_37, 0);
                      {
                        t = not_null(l_37);
                        {
                          ATerm q_45 = t;
                          int r_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_45);
                            }
                          else
                            {
                              t = q_45;
                              {
                                ATerm s_10 (ATerm t)
                                {
                                  t = term_s_45;
                                  return(t);
                                }
                                t = debug_1(t, s_10);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_37, sym_Prefix_2))
                        {
                          l_37 = ATgetArgument(k_37, 0);
                          m_37 = ATgetArgument(k_37, 1);
                          {
                            ATerm t_37 = NULL,v_37 = NULL;
                            ATerm u_45;
                            u_45 = t;
                            {
                              ATerm u_37 = NULL;
                              t = not_null(l_37);
                              {
                                t = eval_config_0(t);
                                {
                                  u_37 = t;
                                  if(((t_37 != NULL) && (t_37 != u_37)))
                                    _fail(u_37);
                                  else
                                    t_37 = u_37;
                                }
                              }
                            }
                            t = u_45;
                            {
                              ATerm w_37 = NULL;
                              t = not_null(m_37);
                              {
                                t = eval_config_0(t);
                                {
                                  w_37 = t;
                                  if(((v_37 != NULL) && (v_37 != w_37)))
                                    _fail(w_37);
                                  else
                                    v_37 = w_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(v_37));
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
  ATerm e_38 = NULL;
  e_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_45, not_null(e_38));
    {
      t = table_get_0(t);
      {
        ATerm t_10 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_45;
            y_45 = t;
            {
              ATerm g_38 = NULL;
              ATerm h_38 = NULL;
              h_38 = t;
              if(((g_38 != NULL) && (g_38 != h_38)))
                _fail(h_38);
              else
                g_38 = h_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(e_38), not_null(g_38));
                t = table_put_0(t);
              }
            }
            t = y_45;
          }
          return(t);
        }
        t = try_1(t, t_10);
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
  ATerm z_45;
  z_45 = t;
  {
    t = error_0(t);
    {
      t = term_g_26;
      t = exit_0(t);
    }
  }
  t = z_45;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_46;
      c_46 = t;
      {
        ATerm m_38 = NULL;
        ATerm n_38 = NULL;
        t = term_d_46;
        {
          t = get_config_0(t);
          {
            n_38 = t;
            if(((m_38 != NULL) && (m_38 != n_38)))
              _fail(n_38);
            else
              m_38 = n_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_46), term_l_46), term_k_46), term_j_46), term_h_46), term_g_46), term_f_46), not_null(m_38)), term_e_46));
          t = printnl_0(t);
        }
      }
      t = c_46;
      ;
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
      {
        ATerm o_38 = NULL;
        o_38 = t;
        l_38 :
        if(!(match_string(o_38, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym__2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      t = SSL_copy(not_null(t_38), not_null(u_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm z_38 = NULL;
  z_38 = t;
  t = SSL_table_keys(not_null(z_38));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  {
    t = table_keys_0(t);
    {
      ATerm w_10 (ATerm t)
      {
        ATerm h_39 = NULL;
        ATerm j_39 = NULL;
        h_39 = t;
        {
          ATerm k_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_39), not_null(h_39));
          {
            t = table_get_0(t);
            {
              k_39 = t;
              if(((j_39 != NULL) && (j_39 != k_39)))
                _fail(k_39);
              else
                j_39 = k_39;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_39), not_null(j_39));
        }
        return(t);
      }
      t = map_1(t, w_10);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm x_10 (ATerm t)
  {
    ATerm v_46;
    v_46 = t;
    {
      ATerm p_39 = NULL;
      ATerm q_39 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          q_39 = t;
          if(((p_39 != NULL) && (p_39 != q_39)))
            _fail(q_39);
          else
            p_39 = q_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), term_x_38);
        t = geq_0(t);
      }
    }
    t = v_46;
    t = k_100(t);
    return(t);
  }
  t = try_1(t, x_10);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_46;
  w_46 = t;
  {
    ATerm t_39 = NULL;
    ATerm u_39 = NULL;
    u_39 = t;
    if(((t_39 != NULL) && (t_39 != u_39)))
      _fail(u_39);
    else
      t_39 = u_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(t_39));
      t = printnl_0(t);
    }
  }
  t = w_46;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm a_40 = NULL;
  ATerm c_40 = NULL,d_40 = NULL;
  a_40 = t;
  {
    ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_x_46, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_40)));
    {
      t = table_get_0(t);
      {
        e_40 = t;
        y_39 :
        if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
          {
            f_40 = ATgetFirst((ATermList) e_40);
            i_40 = (ATerm) ATgetNext((ATermList) e_40);
            z_39 :
            if(match_cons(f_40, sym__2))
              {
                g_40 = ATgetArgument(f_40, 0);
                h_40 = ATgetArgument(f_40, 1);
                {
                  if(((c_40 != NULL) && (c_40 != g_40)))
                    _fail(g_40);
                  else
                    c_40 = g_40;
                  if(((d_40 != NULL) && (d_40 != h_40)))
                    _fail(h_40);
                  else
                    d_40 = h_40;
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
    t = not_null(d_40);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym__2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm u_40 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_x_46, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_40)));
        {
          t = table_get_0(t);
          {
            ATerm a_11 (ATerm t)
            {
              ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
              v_40 = t;
              n_40 :
              if(match_cons(v_40, sym__2))
                {
                  w_40 = ATgetArgument(v_40, 0);
                  x_40 = ATgetArgument(v_40, 1);
                  {
                    if(((r_40 != NULL) && (r_40 != w_40)))
                      _fail(w_40);
                    else
                      r_40 = w_40;
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
              return(t);
            }
            t = fetch_1(t, a_11);
          }
        }
        t = not_null(u_40);
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
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_46);
    }
  else
    {
      t = y_46;
      {
        ATerm a_47 = t;
        int b_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 (ATerm t)
            {
              t = filter_1(t, v_93);
              return(t);
            }
            t = Cons_2(t, v_93, b_11);
            ;
            LocalPopChoice(b_47);
          }
        else
          {
            t = a_47;
            {
              ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
              c_41 = t;
              b_41 :
              if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
                {
                  d_41 = ATgetFirst((ATermList) c_41);
                  e_41 = (ATerm) ATgetNext((ATermList) c_41);
                  {
                    t = not_null(e_41);
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
  ATerm h_41 (ATerm t)
  {
    ATerm e_11 (ATerm t)
    {
      t = c_80(t);
      t = h_41(t);
      return(t);
    }
    t = try_1(t, e_11);
    return(t);
  }
  t = h_41(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm d_47;
  d_47 = t;
  {
    ATerm f_11 (ATerm t)
    {
      t = term_f_47;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm i_47 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_47;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, f_11);
  }
  t = d_47;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm j_47;
  j_47 = t;
  {
    ATerm j_41 = NULL;
    ATerm k_41 = NULL;
    k_41 = t;
    if(((j_41 != NULL) && (j_41 != k_41)))
      _fail(k_41);
    else
      j_41 = k_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATempty, not_null(j_41)));
      t = printnl_0(t);
    }
  }
  t = j_47;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm m_47;
  m_47 = t;
  {
    t = t_98(t);
    t = debug_0(t);
  }
  t = m_47;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm i_11 (ATerm t)
  {
    ATerm n_47;
    n_47 = t;
    {
      ATerm n_41 = NULL;
      ATerm o_41 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          o_41 = t;
          if(((n_41 != NULL) && (n_41 != o_41)))
            _fail(o_41);
          else
            n_41 = o_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_41), term_y_26);
        t = geq_0(t);
      }
    }
    t = n_47;
    t = j_100(t);
    return(t);
  }
  t = try_1(t, i_11);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym__2))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      {
        ATerm p_47;
        p_47 = t;
        {
          ATerm q_47 = t;
          int s_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_41), not_null(u_41));
              ;
              LocalPopChoice(s_47);
            }
          else
            {
              t = q_47;
              t = SSL_gtr(not_null(t_41), not_null(u_41));
            }
        }
        t = p_47;
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
  ATerm a_42 = NULL;
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
      b_42 = t;
      z_41 :
      if(match_cons(b_42, sym__2))
        {
          c_42 = ATgetArgument(b_42, 0);
          d_42 = ATgetArgument(b_42, 1);
          {
            if(((a_42 != NULL) && (a_42 != c_42)))
              _fail(c_42);
            else
              a_42 = c_42;
            if(((a_42 != NULL) && (a_42 != d_42)))
              _fail(d_42);
            else
              a_42 = d_42;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm v_47;
    v_47 = t;
    {
      ATerm g_42 = NULL;
      ATerm h_42 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_42), term_x_32);
        t = geq_0(t);
      }
    }
    t = v_47;
    t = l_100(t);
    return(t);
  }
  t = try_1(t, j_11);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym__2))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      if(((m_42 != NULL) && (m_42 != n_42)))
        _fail(n_42);
      else
        m_42 = n_42;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  x_42 = t;
  w_42 :
  if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
    {
      y_42 = ATgetFirst((ATermList) x_42);
      z_42 = (ATerm) ATgetNext((ATermList) x_42);
      {
        t = z_90(t);
        {
          ATerm k_11 (ATerm t)
          {
            ATerm c_43 = NULL;
            c_43 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_42), not_null(c_43));
              t = y_90(t);
            }
            return(t);
          }
          t = fetch_1(t, k_11);
        }
        t = not_null(z_42);
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
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  h_43 :
  if(match_cons(i_43, sym__2))
    {
      j_43 = ATgetArgument(i_43, 0);
      k_43 = ATgetArgument(i_43, 1);
      {
        t = not_null(j_43);
        {
          ATerm o_43 (ATerm t)
          {
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_43);
                ;
                LocalPopChoice(y_47);
              }
            else
              {
                t = x_47;
                {
                  ATerm z_47 = t;
                  int a_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_11 (ATerm t)
                      {
                        t = not_null(k_43);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_90, l_11);
                      t = o_43(t);
                      ;
                      LocalPopChoice(a_48);
                    }
                  else
                    {
                      t = z_47;
                      t = Cons_2(t, _id, o_43);
                    }
                }
              }
            return(t);
          }
          t = o_43(t);
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
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym__3))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      w_43 = ATgetArgument(t_43, 2);
      {
        ATerm c_48;
        c_48 = t;
        {
          ATerm a_44 = NULL;
          ATerm b_44 = NULL,d_44 = NULL;
          ATerm c_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_43), not_null(v_43));
          {
            ATerm d_48 = t;
            int e_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(e_48);
              }
            else
              {
                t = d_48;
                t = (ATerm) ATempty;
              }
            {
              c_44 = t;
              if(((b_44 != NULL) && (b_44 != c_44)))
                _fail(c_44);
              else
                b_44 = c_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(w_43));
            {
              t = union_0(t);
              {
                d_44 = t;
                if(((a_44 != NULL) && (a_44 != d_44)))
                  _fail(d_44);
                else
                  a_44 = d_44;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_43), not_null(v_43), not_null(a_44));
            t = set_0(t);
          }
        }
        t = c_48;
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
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  k_44 :
  if(match_cons(n_44, sym__2))
    {
      o_44 = ATgetArgument(n_44, 0);
      p_44 = ATgetArgument(n_44, 1);
      {
        t = not_null(p_44);
        {
          ATerm s_11 (ATerm t)
          {
            ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
            u_44 = t;
            j_44 :
            if(match_cons(u_44, sym__2))
              {
                v_44 = ATgetArgument(u_44, 0);
                w_44 = ATgetArgument(u_44, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_44), not_null(v_44), not_null(w_44));
                  t = j_105(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_11);
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
  ATerm e_45 = NULL;
  ATerm f_45 = NULL;
  f_45 = t;
  if(((e_45 != NULL) && (e_45 != f_45)))
    _fail(f_45);
  else
    e_45 = f_45;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_45), (ATerm) ATinsert(ATempty, term_f_48));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  ATerm t_45 (ATerm t)
  {
    t = SSL_fclose(not_null(l_45));
    return(t);
  }
  l_45 = t;
  j_45 :
  if(match_cons(l_45, sym_Stream_1))
    {
      k_45 = ATgetArgument(l_45, 0);
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(k_45));
            ;
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            t = t_45(t);
          }
      }
    }
  else
    {
      t = t_45(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm w_45 = NULL,i_46 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_Stream_1))
    {
      i_46 = ATgetArgument(w_45, 0);
      t = SSL_read_term_from_stream(not_null(i_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  n_46 :
  if(match_cons(o_46, sym__2))
    {
      p_46 = ATgetArgument(o_46, 0);
      q_46 = ATgetArgument(o_46, 1);
      {
        ATerm t_46 = NULL;
        t = SSL_fopen(not_null(p_46), not_null(q_46));
        {
          ATerm u_46 = NULL;
          u_46 = t;
          if(((t_46 != NULL) && (t_46 != u_46)))
            _fail(u_46);
          else
            t_46 = u_46;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_46));
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
  ATerm c_47 = NULL;
  c_47 = t;
  t = SSL_is_string(not_null(c_47));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm g_47 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm h_47 = NULL;
    h_47 = t;
    if(((g_47 != NULL) && (g_47 != h_47)))
      _fail(h_47);
    else
      g_47 = h_47;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_47));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm k_47 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm l_47 = NULL;
    l_47 = t;
    if(((k_47 != NULL) && (k_47 != l_47)))
      _fail(l_47);
    else
      k_47 = l_47;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_47));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm r_47 = NULL;
    r_47 = t;
    if(((o_47 != NULL) && (o_47 != r_47)))
      _fail(r_47);
    else
      o_47 = r_47;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_47));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  w_47 :
  if(match_cons(b_48, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(b_48, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(b_48, sym_stdin_0))
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
  ATerm r_48 = NULL;
  ATerm t_48 = NULL,u_48 = NULL;
  r_48 = t;
  {
    ATerm v_48 = NULL;
    ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
    t = not_null(r_48);
    {
      v_48 = t;
      {
        t = SSL_explode_term(not_null(v_48));
        {
          x_48 = t;
          m_48 :
          if(match_cons(x_48, sym__2))
            {
              y_48 = ATgetArgument(x_48, 0);
              z_48 = ATgetArgument(x_48, 1);
              p_48 :
              if(match_string(y_48, ""))
                {
                  q_48 :
                  if(((ATgetType(z_48) == AT_LIST) && !(ATisEmpty(z_48))))
                    {
                      a_49 = ATgetFirst((ATermList) z_48);
                      b_49 = (ATerm) ATgetNext((ATermList) z_48);
                      {
                        if(((u_48 != NULL) && (u_48 != a_49)))
                          _fail(a_49);
                        else
                          u_48 = a_49;
                        if(((t_48 != NULL) && (t_48 != b_49)))
                          _fail(b_49);
                        else
                          t_48 = b_49;
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
    t = not_null(u_48);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym__2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        ATerm i_48 = t;
        int j_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(j_48);
          }
        else
          {
            t = i_48;
            {
              ATerm k_48 = t;
              int l_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_11 (ATerm t)
                  {
                    ATerm m_49 = NULL,n_49 = NULL;
                    m_49 = t;
                    h_49 :
                    if(match_cons(m_49, sym_Path_1))
                      {
                        n_49 = ATgetArgument(m_49, 0);
                        t = not_null(n_49);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, t_11, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(l_48);
                }
              else
                {
                  t = k_48;
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
  ATerm v_49 = NULL;
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_49 = NULL;
      ATerm u_49 = NULL;
      u_49 = t;
      if(((t_49 != NULL) && (t_49 != u_49)))
        _fail(u_49);
      else
        t_49 = u_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), term_s_48);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(o_48);
    }
  else
    {
      t = n_48;
      {
        ATerm u_11 (ATerm t)
        {
          t = term_w_48;
          return(t);
        }
        t = debug_1(t, u_11);
        _fail(t);
      }
    }
  {
    ATerm c_49;
    c_49 = t;
    {
      ATerm w_49 = NULL;
      t = read_from_stream_0(t);
      {
        w_49 = t;
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
      }
    }
    t = c_49;
    {
      t = fclose_0(t);
      t = not_null(v_49);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym__2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      t = SSL_access(not_null(c_50), not_null(d_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm i_50 = NULL;
  ATerm j_50 = NULL;
  j_50 = t;
  if(((i_50 != NULL) && (i_50 != j_50)))
    _fail(j_50);
  else
    i_50 = j_50;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_50), (ATerm) ATinsert(ATempty, term_d_49));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(f_49);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = e_49;
      {
        ATerm g_49 = t;
        int o_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_49 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_49;
              }
            {
              ATerm v_11 (ATerm t)
              {
                t = term_q_49;
                return(t);
              }
              t = debug_1(t, v_11);
            }
            ;
            LocalPopChoice(o_49);
          }
        else
          {
            t = g_49;
            {
              ATerm y_11 (ATerm t)
              {
                t = term_r_49;
                return(t);
              }
              t = debug_1(t, y_11);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm n_50 = NULL;
  ATerm p_50 = NULL;
  n_50 = t;
  {
    ATerm z_11 (ATerm t)
    {
      ATerm c_12 (ATerm t)
      {
        t = term_s_49;
        return(t);
      }
      t = debug_1(t, c_12);
      return(t);
    }
    t = if_verbose5_1(t, z_11);
    {
      ATerm x_49 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_46, (ATerm) ATmakeAppl(sym_Imported_1, not_null(n_50)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_49;
        }
      {
        ATerm y_49;
        y_49 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_46, term_z_49, (ATerm) ATinsert(ATempty, not_null(n_50)));
          t = table_put_0(t);
        }
        t = y_49;
        {
          ATerm d_12 (ATerm t)
          {
            ATerm g_12 (ATerm t)
            {
              t = term_e_50;
              return(t);
            }
            t = debug_1(t, g_12);
            return(t);
          }
          t = if_verbose4_1(t, d_12);
          {
            t = read_repository_file_0(t);
            {
              ATerm h_12 (ATerm t)
              {
                ATerm k_12 (ATerm t)
                {
                  t = term_f_50;
                  return(t);
                }
                t = say_1(t, k_12);
                return(t);
              }
              t = if_verbose6_1(t, h_12);
              {
                ATerm q_50 = NULL;
                q_50 = t;
                if(((p_50 != NULL) && (p_50 != q_50)))
                  _fail(q_50);
                else
                  p_50 = q_50;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_46, not_null(p_50));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm l_12 (ATerm t)
                      {
                        ATerm m_12 (ATerm t)
                        {
                          t = term_g_50;
                          return(t);
                        }
                        t = say_1(t, m_12);
                        return(t);
                      }
                      t = if_verbose6_1(t, l_12);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_x_46, (ATerm)ATmakeAppl(sym_Imported_1, not_null(n_50)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm r_12 (ATerm t)
                            {
                              ATerm s_12 (ATerm t)
                              {
                                t = term_f_50;
                                return(t);
                              }
                              t = say_1(t, s_12);
                              return(t);
                            }
                            t = if_verbose4_1(t, r_12);
                          }
                        }
                      }
                    }
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
  ATerm u_50 = NULL;
  u_50 = t;
  t = SSL_getenv(not_null(u_50));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_50;
      t = get_config_0(t);
      ;
      LocalPopChoice(k_50);
    }
  else
    {
      t = h_50;
      {
        ATerm m_50 = t;
        int o_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_50;
            t = getenv_0(t);
            ;
            LocalPopChoice(o_50);
          }
        else
          {
            t = m_50;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm w_12 (ATerm t)
    {
      t = term_s_50;
      return(t);
    }
    t = debug_1(t, w_12);
    return(t);
  }
  t = if_verbose5_1(t, t_12);
  {
    ATerm t_50;
    t_50 = t;
    {
      ATerm v_50 = t;
      int w_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_50;
          t = table_get_0(t);
          ;
          LocalPopChoice(w_50);
        }
      else
        {
          t = v_50;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = t_50;
    {
      ATerm x_12 (ATerm t)
      {
        ATerm y_12 (ATerm t)
        {
          t = term_a_51;
          return(t);
        }
        t = debug_1(t, y_12);
        return(t);
      }
      t = if_verbose5_1(t, x_12);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 (ATerm t)
      {
        ATerm f_13 (ATerm t)
        {
          t = term_d_51;
          return(t);
        }
        t = debug_1(t, f_13);
        return(t);
      }
      t = if_verbose5_1(t, c_13);
      {
        t = xtc_load_0(t);
        {
          ATerm e_51 = t;
          int f_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(f_51);
            }
          else
            {
              t = e_51;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm g_13 (ATerm t)
            {
              ATerm h_13 (ATerm t)
              {
                t = term_d_51;
                return(t);
              }
              t = debug_1(t, h_13);
              return(t);
            }
            t = if_verbose5_1(t, g_13);
          }
        }
      }
      ;
      LocalPopChoice(c_51);
    }
  else
    {
      t = b_51;
      {
        ATerm y_50 = NULL;
        ATerm z_50 = NULL;
        z_50 = t;
        if(((y_50 != NULL) && (y_50 != z_50)))
          _fail(z_50);
        else
          y_50 = z_50;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_51), not_null(y_50)), term_g_51);
          {
            t = error_0(t);
            {
              ATerm i_13 (ATerm t)
              {
                t = term_x_46;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_13 (ATerm t)
                    {
                      t = term_l_51;
                      return(t);
                    }
                    t = debug_1(t, n_13);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, i_13);
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
  ATerm j_51 = NULL,k_51 = NULL,o_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym__2))
    {
      k_51 = ATgetArgument(j_51, 0);
      o_51 = ATgetArgument(j_51, 1);
      {
        ATerm r_51 = NULL;
        ATerm s_51 = NULL,u_51 = NULL;
        ATerm t_51 = NULL;
        t = not_null(k_51);
        {
          ATerm m_51 = t;
          int n_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(n_51);
            }
          else
            {
              t = m_51;
              t = (ATerm) ATempty;
            }
          {
            t_51 = t;
            if(((s_51 != NULL) && (s_51 != t_51)))
              _fail(t_51);
            else
              s_51 = t_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_51), not_null(s_51));
          {
            t = conc_0(t);
            {
              u_51 = t;
              if(((r_51 != NULL) && (r_51 != u_51)))
                _fail(u_51);
              else
                r_51 = u_51;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(k_51), not_null(r_51));
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
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_string(d_52, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
        {
          e_52 = ATgetFirst((ATermList) d_52);
          f_52 = (ATerm) ATgetNext((ATermList) d_52);
          c_52 :
          if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
            {
              g_52 = ATgetFirst((ATermList) f_52);
              h_52 = (ATerm) ATgetNext((ATermList) f_52);
              {
                ATerm l_52 = NULL;
                ATerm p_51;
                p_51 = t;
                {
                  t = not_null(e_52);
                  t = l_0(t);
                }
                t = p_51;
                {
                  ATerm o_52 = NULL;
                  t = not_null(g_52);
                  {
                    t = m_0(t);
                    {
                      o_52 = t;
                      if(((l_52 != NULL) && (l_52 != o_52)))
                        _fail(o_52);
                      else
                        l_52 = o_52;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_52)), not_null(l_52));
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
  ATerm g_53 = NULL;
  g_53 = t;
  t = SSL_string_to_int(not_null(g_53));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  ATerm q_51;
  q_51 = t;
  {
    ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
    z_53 = t;
    n_53 :
    if(match_cons(z_53, sym__2))
      {
        a_54 = ATgetArgument(z_53, 0);
        b_54 = ATgetArgument(z_53, 1);
        {
          if(((t_53 != NULL) && (t_53 != a_54)))
            _fail(a_54);
          else
            t_53 = a_54;
          {
            if(((u_53 != NULL) && (u_53 != b_54)))
              _fail(b_54);
            else
              u_53 = b_54;
            t = SSL_table_remove(not_null(t_53), not_null(u_53));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_51;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      {
        ATerm v_51 = t;
        int w_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(g_54);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_45, not_null(g_54));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(w_51);
          }
        else
          {
            t = v_51;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), not_null(h_54));
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
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym__2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm d_55 = NULL;
        ATerm e_55 = NULL,g_55 = NULL;
        ATerm f_55 = NULL;
        t = not_null(z_54);
        {
          ATerm x_51 = t;
          int y_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(y_51);
            }
          else
            {
              t = x_51;
              t = (ATerm) ATempty;
            }
          {
            f_55 = t;
            if(((e_55 != NULL) && (e_55 != f_55)))
              _fail(f_55);
            else
              e_55 = f_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_55), not_null(a_55));
          {
            t = conc_0(t);
            {
              g_55 = t;
              if(((d_55 != NULL) && (d_55 != g_55)))
                _fail(g_55);
              else
                d_55 = g_55;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(z_54), not_null(d_55));
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
  ATerm z_51 = t;
  int a_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 (ATerm t)
      {
        ATerm s_57 = NULL;
        s_57 = t;
        k_55 :
        if(!(match_string(s_57, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        ATerm t_57 = NULL;
        ATerm u_57 = NULL;
        u_57 = t;
        if(((t_57 != NULL) && (t_57 != u_57)))
          _fail(u_57);
        else
          t_57 = u_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_41, not_null(t_57));
          t = set_config_0(t);
        }
        t = term_r_28;
        return(t);
      }
      ATerm q_13 (ATerm t)
      {
        t = term_i_52;
        return(t);
      }
      t = ArgOption_3(t, o_13, p_13, q_13);
      ;
      LocalPopChoice(a_52);
    }
  else
    {
      t = z_51;
      {
        ATerm j_52 = t;
        int k_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_13 (ATerm t)
            {
              ATerm v_57 = NULL;
              v_57 = t;
              m_55 :
              if(!(match_string(v_57, "-o")))
                {
                  if(!(match_string(v_57, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_13 (ATerm t)
            {
              ATerm w_57 = NULL;
              ATerm x_57 = NULL;
              x_57 = t;
              if(((w_57 != NULL) && (w_57 != x_57)))
                _fail(x_57);
              else
                w_57 = x_57;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_z_21, not_null(w_57));
                t = set_config_0(t);
              }
              t = term_r_28;
              return(t);
            }
            ATerm a_14 (ATerm t)
            {
              t = term_m_52;
              return(t);
            }
            t = ArgOption_3(t, t_13, z_13, a_14);
            ;
            LocalPopChoice(k_52);
          }
        else
          {
            t = j_52;
            {
              ATerm n_52 = t;
              int p_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_14 (ATerm t)
                  {
                    ATerm y_57 = NULL;
                    y_57 = t;
                    o_55 :
                    if(!(match_string(y_57, "-I")))
                      {
                        if(!(match_string(y_57, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_14 (ATerm t)
                  {
                    ATerm z_57 = NULL;
                    ATerm a_58 = NULL;
                    a_58 = t;
                    if(((z_57 != NULL) && (z_57 != a_58)))
                      _fail(a_58);
                    else
                      z_57 = a_58;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_d_43));
                      t = extend_config_0(t);
                    }
                    t = term_r_28;
                    return(t);
                  }
                  ATerm h_14 (ATerm t)
                  {
                    t = term_q_52;
                    return(t);
                  }
                  t = ArgOption_3(t, b_14, c_14, h_14);
                  ;
                  LocalPopChoice(p_52);
                }
              else
                {
                  t = n_52;
                  {
                    ATerm r_52 = t;
                    int s_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_14 (ATerm t)
                        {
                          ATerm b_58 = NULL;
                          b_58 = t;
                          q_55 :
                          if(!(match_string(b_58, "--main")))
                            {
                              if(!(match_string(b_58, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm j_14 (ATerm t)
                        {
                          ATerm c_58 = NULL;
                          ATerm d_58 = NULL;
                          d_58 = t;
                          if(((c_58 != NULL) && (c_58 != d_58)))
                            _fail(d_58);
                          else
                            c_58 = d_58;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(c_58));
                            t = set_config_0(t);
                          }
                          t = term_r_28;
                          return(t);
                        }
                        ATerm k_14 (ATerm t)
                        {
                          t = term_t_52;
                          return(t);
                        }
                        t = ArgOption_3(t, i_14, j_14, k_14);
                        ;
                        LocalPopChoice(s_52);
                      }
                    else
                      {
                        t = r_52;
                        {
                          ATerm u_52 = t;
                          int v_52 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_14 (ATerm t)
                              {
                                ATerm e_58 = NULL;
                                e_58 = t;
                                s_55 :
                                if(!(match_string(e_58, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm o_14 (ATerm t)
                              {
                                ATerm f_58 = NULL;
                                ATerm l_58 = NULL;
                                l_58 = t;
                                if(((f_58 != NULL) && (f_58 != l_58)))
                                  _fail(l_58);
                                else
                                  f_58 = l_58;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATempty, not_null(f_58)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_r_28;
                                return(t);
                              }
                              ATerm t_14 (ATerm t)
                              {
                                t = term_w_52;
                                return(t);
                              }
                              t = ArgOption_3(t, l_14, o_14, t_14);
                              ;
                              LocalPopChoice(v_52);
                            }
                          else
                            {
                              t = u_52;
                              {
                                ATerm x_52 = t;
                                int y_52 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_14 (ATerm t)
                                    {
                                      ATerm m_58 = NULL;
                                      m_58 = t;
                                      u_55 :
                                      if(!(match_string(m_58, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_14 (ATerm t)
                                    {
                                      ATerm n_58 = NULL;
                                      ATerm o_58 = NULL;
                                      o_58 = t;
                                      if(((n_58 != NULL) && (n_58 != o_58)))
                                        _fail(o_58);
                                      else
                                        n_58 = o_58;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATempty, not_null(n_58)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_r_28;
                                      return(t);
                                    }
                                    ATerm w_14 (ATerm t)
                                    {
                                      t = term_z_52;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_14, v_14, w_14);
                                    ;
                                    LocalPopChoice(y_52);
                                  }
                                else
                                  {
                                    t = x_52;
                                    {
                                      ATerm a_53 = t;
                                      int b_53 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_14 (ATerm t)
                                          {
                                            ATerm t_58 = NULL;
                                            t_58 = t;
                                            w_55 :
                                            if(!(match_string(t_58, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_14 (ATerm t)
                                          {
                                            ATerm u_58 = NULL;
                                            ATerm v_58 = NULL;
                                            v_58 = t;
                                            if(((u_58 != NULL) && (u_58 != v_58)))
                                              _fail(v_58);
                                            else
                                              u_58 = v_58;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATempty, not_null(u_58)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_r_28;
                                            return(t);
                                          }
                                          ATerm b_15 (ATerm t)
                                          {
                                            t = term_c_53;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, x_14, y_14, b_15);
                                          ;
                                          LocalPopChoice(b_53);
                                        }
                                      else
                                        {
                                          t = a_53;
                                          {
                                            ATerm d_53 = t;
                                            int e_53 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_15 (ATerm t)
                                                {
                                                  ATerm f_59 = NULL;
                                                  f_59 = t;
                                                  g_56 :
                                                  if(!(match_string(f_59, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm h_15 (ATerm t)
                                                {
                                                  t = term_f_53;
                                                  t = set_config_0(t);
                                                  t = term_r_28;
                                                  return(t);
                                                }
                                                ATerm i_15 (ATerm t)
                                                {
                                                  t = term_h_53;
                                                  return(t);
                                                }
                                                t = Option_3(t, g_15, h_15, i_15);
                                                ;
                                                LocalPopChoice(e_53);
                                              }
                                            else
                                              {
                                                t = d_53;
                                                {
                                                  ATerm i_53 = t;
                                                  int j_53 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_15 (ATerm t)
                                                      {
                                                        ATerm g_59 = NULL;
                                                        g_59 = t;
                                                        h_56 :
                                                        if(!(match_string(g_59, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm k_15 (ATerm t)
                                                      {
                                                        t = term_k_53;
                                                        t = set_config_0(t);
                                                        t = term_r_28;
                                                        return(t);
                                                      }
                                                      ATerm l_15 (ATerm t)
                                                      {
                                                        t = term_l_53;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, j_15, k_15, l_15);
                                                      ;
                                                      LocalPopChoice(j_53);
                                                    }
                                                  else
                                                    {
                                                      t = i_53;
                                                      {
                                                        ATerm m_53 = t;
                                                        int o_53 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_15 (ATerm t)
                                                            {
                                                              ATerm h_59 = NULL;
                                                              h_59 = t;
                                                              j_56 :
                                                              if(!(match_string(h_59, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm n_15 (ATerm t)
                                                            {
                                                              t = term_p_53;
                                                              t = set_config_0(t);
                                                              t = term_r_28;
                                                              return(t);
                                                            }
                                                            ATerm o_15 (ATerm t)
                                                            {
                                                              t = term_q_53;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, m_15, n_15, o_15);
                                                            ;
                                                            LocalPopChoice(o_53);
                                                          }
                                                        else
                                                          {
                                                            t = m_53;
                                                            {
                                                              ATerm r_53 = t;
                                                              int s_53 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_15 (ATerm t)
                                                                  {
                                                                    ATerm i_59 = NULL;
                                                                    i_59 = t;
                                                                    k_56 :
                                                                    if(!(match_string(i_59, "--output-optimized")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm t_15 (ATerm t)
                                                                  {
                                                                    t = term_v_53;
                                                                    t = set_config_0(t);
                                                                    t = term_r_28;
                                                                    return(t);
                                                                  }
                                                                  ATerm w_15 (ATerm t)
                                                                  {
                                                                    t = term_w_53;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, p_15, t_15, w_15);
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
                                                                        ATerm a_16 (ATerm t)
                                                                        {
                                                                          ATerm j_59 = NULL;
                                                                          j_59 = t;
                                                                          l_56 :
                                                                          if(!(match_string(j_59, "--output-canonical")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm c_16 (ATerm t)
                                                                        {
                                                                          t = term_c_54;
                                                                          t = set_config_0(t);
                                                                          t = term_r_28;
                                                                          return(t);
                                                                        }
                                                                        ATerm d_16 (ATerm t)
                                                                        {
                                                                          t = term_d_54;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, a_16, c_16, d_16);
                                                                        ;
                                                                        LocalPopChoice(y_53);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_53;
                                                                        {
                                                                          ATerm i_54 = t;
                                                                          int j_54 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm e_16 (ATerm t)
                                                                              {
                                                                                ATerm k_59 = NULL;
                                                                                k_59 = t;
                                                                                m_56 :
                                                                                if(!(match_string(k_59, "--keep")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm f_16 (ATerm t)
                                                                              {
                                                                                ATerm l_59 = NULL;
                                                                                ATerm m_59 = NULL;
                                                                                t = string_to_int_0(t);
                                                                                {
                                                                                  m_59 = t;
                                                                                  if(((l_59 != NULL) && (l_59 != m_59)))
                                                                                    _fail(m_59);
                                                                                  else
                                                                                    l_59 = m_59;
                                                                                }
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_i_28, not_null(l_59));
                                                                                  t = set_config_0(t);
                                                                                }
                                                                                t = term_r_28;
                                                                                return(t);
                                                                              }
                                                                              ATerm g_16 (ATerm t)
                                                                              {
                                                                                t = term_k_54;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3(t, e_16, f_16, g_16);
                                                                              ;
                                                                              LocalPopChoice(j_54);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_54;
                                                                              {
                                                                                ATerm l_54 = t;
                                                                                int m_54 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm h_16 (ATerm t)
                                                                                    {
                                                                                      ATerm n_59 = NULL;
                                                                                      n_59 = t;
                                                                                      o_56 :
                                                                                      if(!(match_string(n_59, "-O")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm i_16 (ATerm t)
                                                                                    {
                                                                                      ATerm o_59 = NULL;
                                                                                      ATerm p_59 = NULL;
                                                                                      t = string_to_int_0(t);
                                                                                      {
                                                                                        p_59 = t;
                                                                                        if(((o_59 != NULL) && (o_59 != p_59)))
                                                                                          _fail(p_59);
                                                                                        else
                                                                                          o_59 = p_59;
                                                                                      }
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(o_59));
                                                                                        t = set_config_0(t);
                                                                                      }
                                                                                      t = term_r_28;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm j_16 (ATerm t)
                                                                                    {
                                                                                      t = term_n_54;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, h_16, i_16, j_16);
                                                                                    ;
                                                                                    LocalPopChoice(m_54);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_54;
                                                                                    {
                                                                                      ATerm o_54 = t;
                                                                                      int p_54 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm m_16 (ATerm t)
                                                                                          {
                                                                                            ATerm q_59 = NULL;
                                                                                            q_59 = t;
                                                                                            q_56 :
                                                                                            if(!(match_string(q_59, "--fusion")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm n_16 (ATerm t)
                                                                                          {
                                                                                            t = term_q_54;
                                                                                            t = toggle_config_0(t);
                                                                                            t = term_r_28;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm o_16 (ATerm t)
                                                                                          {
                                                                                            t = term_r_54;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3(t, m_16, n_16, o_16);
                                                                                          ;
                                                                                          LocalPopChoice(p_54);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_54;
                                                                                          {
                                                                                            ATerm s_54 = t;
                                                                                            int t_54 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm t_16 (ATerm t)
                                                                                                {
                                                                                                  ATerm r_59 = NULL;
                                                                                                  r_59 = t;
                                                                                                  r_56 :
                                                                                                  if(!(match_string(r_59, "--trace-all")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm u_16 (ATerm t)
                                                                                                {
                                                                                                  t = term_v_54;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_r_28;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm v_16 (ATerm t)
                                                                                                {
                                                                                                  t = term_w_54;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, t_16, u_16, v_16);
                                                                                                ;
                                                                                                LocalPopChoice(t_54);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = s_54;
                                                                                                {
                                                                                                  ATerm b_55 = t;
                                                                                                  int c_55 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm w_16 (ATerm t)
                                                                                                      {
                                                                                                        ATerm s_59 = NULL;
                                                                                                        s_59 = t;
                                                                                                        s_56 :
                                                                                                        if(!(match_string(s_59, "-t")))
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm b_17 (ATerm t)
                                                                                                      {
                                                                                                        ATerm t_59 = NULL;
                                                                                                        ATerm u_59 = NULL;
                                                                                                        u_59 = t;
                                                                                                        if(((t_59 != NULL) && (t_59 != u_59)))
                                                                                                          _fail(u_59);
                                                                                                        else
                                                                                                          t_59 = u_59;
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_h_55, (ATerm) ATinsert(ATempty, not_null(t_59)));
                                                                                                          t = extend_config_0(t);
                                                                                                        }
                                                                                                        t = term_r_28;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm c_17 (ATerm t)
                                                                                                      {
                                                                                                        t = term_i_55;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3(t, w_16, b_17, c_17);
                                                                                                      ;
                                                                                                      LocalPopChoice(c_55);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_55;
                                                                                                      {
                                                                                                        ATerm j_55 = t;
                                                                                                        int l_55 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm d_17 (ATerm t)
                                                                                                            {
                                                                                                              ATerm v_59 = NULL;
                                                                                                              v_59 = t;
                                                                                                              z_56 :
                                                                                                              if(!(match_string(v_59, "--verbose")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm g_17 (ATerm t)
                                                                                                            {
                                                                                                              ATerm w_59 = NULL;
                                                                                                              ATerm x_59 = NULL;
                                                                                                              t = string_to_int_0(t);
                                                                                                              {
                                                                                                                x_59 = t;
                                                                                                                if(((w_59 != NULL) && (w_59 != x_59)))
                                                                                                                  _fail(x_59);
                                                                                                                else
                                                                                                                  w_59 = x_59;
                                                                                                              }
                                                                                                              {
                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_l_21, not_null(w_59));
                                                                                                                t = set_config_0(t);
                                                                                                              }
                                                                                                              t = term_r_28;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm h_17 (ATerm t)
                                                                                                            {
                                                                                                              t = term_n_55;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = ArgOption_3(t, d_17, g_17, h_17);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_55);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_55;
                                                                                                            {
                                                                                                              ATerm p_55 = t;
                                                                                                              int r_55 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm i_17 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm y_59 = NULL;
                                                                                                                    y_59 = t;
                                                                                                                    b_57 :
                                                                                                                    if(!(match_string(y_59, "-S")))
                                                                                                                      {
                                                                                                                        if(!(match_string(y_59, "--silent")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm j_17 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_t_55;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_r_28;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm k_17 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_v_55;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, i_17, j_17, k_17);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(r_55);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_55;
                                                                                                                  {
                                                                                                                    ATerm x_55 = t;
                                                                                                                    int y_55 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm q_17 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm z_59 = NULL;
                                                                                                                          z_59 = t;
                                                                                                                          c_57 :
                                                                                                                          if(!(match_string(z_59, "-h")))
                                                                                                                            {
                                                                                                                              if(!(match_string(z_59, "--help")))
                                                                                                                                {
                                                                                                                                  _fail(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm t_17 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_a_56;
                                                                                                                          t = set_config_0(t);
                                                                                                                          t = term_r_28;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm u_17 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_b_56;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3(t, q_17, t_17, u_17);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(y_55);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_55;
                                                                                                                        {
                                                                                                                          ATerm c_56 = t;
                                                                                                                          int d_56 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm v_17 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm a_60 = NULL;
                                                                                                                                a_60 = t;
                                                                                                                                d_57 :
                                                                                                                                if(!(match_string(a_60, "--man")))
                                                                                                                                  {
                                                                                                                                    _fail(t);
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm w_17 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_f_56;
                                                                                                                                t = set_config_0(t);
                                                                                                                                t = term_r_28;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm x_17 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_i_56;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3(t, v_17, w_17, x_17);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(d_56);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_56;
                                                                                                                              {
                                                                                                                                ATerm n_56 = t;
                                                                                                                                int p_56 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm y_17 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm b_60 = NULL;
                                                                                                                                      b_60 = t;
                                                                                                                                      e_57 :
                                                                                                                                      if(!(match_string(b_60, "-v")))
                                                                                                                                        {
                                                                                                                                          if(!(match_string(b_60, "--version")))
                                                                                                                                            {
                                                                                                                                              _fail(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm f_18 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_u_56;
                                                                                                                                      t = set_config_0(t);
                                                                                                                                      t = term_r_28;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm g_18 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_v_56;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Option_3(t, y_17, f_18, g_18);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(p_56);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = n_56;
                                                                                                                                    {
                                                                                                                                      ATerm j_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm c_60 = NULL;
                                                                                                                                        c_60 = t;
                                                                                                                                        f_57 :
                                                                                                                                        if(!(match_string(c_60, "--warning")))
                                                                                                                                          {
                                                                                                                                            if(!(match_string(c_60, "-W")))
                                                                                                                                              {
                                                                                                                                                _fail(t);
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm k_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm w_56 = t;
                                                                                                                                        int x_56 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            ATerm e_60 = NULL;
                                                                                                                                            ATerm y_56;
                                                                                                                                            y_56 = t;
                                                                                                                                            {
                                                                                                                                              t = term_x_27;
                                                                                                                                              {
                                                                                                                                                t = get_config_0(t);
                                                                                                                                                {
                                                                                                                                                  ATerm m_18 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm d_60 = NULL;
                                                                                                                                                    d_60 = t;
                                                                                                                                                    g_57 :
                                                                                                                                                    if(!(match_string(d_60, "all")))
                                                                                                                                                      {
                                                                                                                                                        _fail(t);
                                                                                                                                                      }
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = Cons_2(t, m_18, Nil_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            t = y_56;
                                                                                                                                            {
                                                                                                                                              ATerm f_60 = NULL;
                                                                                                                                              f_60 = t;
                                                                                                                                              if(((e_60 != NULL) && (e_60 != f_60)))
                                                                                                                                                _fail(f_60);
                                                                                                                                              else
                                                                                                                                                e_60 = f_60;
                                                                                                                                              {
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATempty, not_null(e_60)));
                                                                                                                                                t = set_config_0(t);
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            ;
                                                                                                                                            LocalPopChoice(x_56);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = w_56;
                                                                                                                                            {
                                                                                                                                              ATerm g_60 = NULL;
                                                                                                                                              ATerm h_60 = NULL;
                                                                                                                                              h_60 = t;
                                                                                                                                              if(((g_60 != NULL) && (g_60 != h_60)))
                                                                                                                                                _fail(h_60);
                                                                                                                                              else
                                                                                                                                                g_60 = h_60;
                                                                                                                                              {
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_x_27, (ATerm) ATinsert(ATempty, not_null(g_60)));
                                                                                                                                                t = extend_config_0(t);
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        t = term_r_28;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm l_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = term_a_57;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = ArgOption_3(t, j_18, k_18, l_18);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_60 = NULL;
  w_60 = t;
  t = SSL_table_destroy(not_null(w_60));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_58), term_h_46), term_g_58), term_r_57), term_q_57), term_h_46), term_p_57), term_o_57), term_n_57), term_m_57), term_l_57), term_k_57), term_j_57), term_i_57), term_h_57);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm z_60 (ATerm t)
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = Cons_2(t, r_86, z_60);
      }
    return(t);
  }
  t = z_60(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
  i_61 = t;
  f_61 :
  if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
    {
      g_61 = ATgetFirst((ATermList) i_61);
      h_61 = (ATerm) ATgetNext((ATermList) i_61);
      {
        ATerm l_61 = NULL;
        t = not_null(h_61);
        {
          ATerm k_58;
          k_58 = t;
          {
            ATerm m_61 = NULL,o_61 = NULL,q_61 = NULL;
            ATerm p_58;
            p_58 = t;
            {
              ATerm n_61 = NULL;
              t = j_0(t);
              {
                n_61 = t;
                if(((m_61 != NULL) && (m_61 != n_61)))
                  _fail(n_61);
                else
                  m_61 = n_61;
              }
            }
            t = p_58;
            {
              ATerm p_61 = NULL;
              t = not_null(g_61);
              {
                t = i_0(t);
                {
                  p_61 = t;
                  if(((o_61 != NULL) && (o_61 != p_61)))
                    _fail(p_61);
                  else
                    o_61 = p_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_61)), not_null(o_61));
                {
                  q_61 = t;
                  if(((l_61 != NULL) && (l_61 != q_61)))
                    _fail(q_61);
                  else
                    l_61 = q_61;
                }
              }
            }
          }
          t = k_58;
          {
            ATerm n_18 (ATerm t)
            {
              t = not_null(l_61);
              return(t);
            }
            t = reverse_acc_2(t, i_0, n_18);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_61) == AT_LIST) && ATisEmpty(i_61)))
        {
          {
            t = term_r_28;
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
  ATerm s_18 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_18);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm x_61 = NULL;
  ATerm y_61 = NULL;
  t = term_r_28;
  {
    t = g_0(t);
    {
      y_61 = t;
      if(((x_61 != NULL) && (x_61 != y_61)))
        _fail(y_61);
      else
        x_61 = y_61;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_58), not_null(x_61)), term_x_58), term_h_46), term_w_58), term_h_46), term_s_58), term_r_58), term_h_46), term_q_58);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm g_62 = NULL,v_62 = NULL;
  g_62 = t;
  f_62 :
  if(match_cons(g_62, sym_Program_1))
    {
      v_62 = ATgetArgument(g_62, 0);
      {
        ATerm y_62 = NULL,h_63 = NULL;
        ATerm a_63 = NULL;
        t = SSLgetAnnotations(not_null(g_62));
        {
          a_63 = t;
          if(((y_62 != NULL) && (y_62 != a_63)))
            _fail(a_63);
          else
            y_62 = a_63;
        }
        {
          t = not_null(v_62);
          {
            ATerm j_63 = NULL;
            t = a_71(t);
            {
              h_63 = t;
              {
                ATerm n_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_63)), not_null(y_62));
                {
                  n_63 = t;
                  if(((j_63 != NULL) && (j_63 != n_63)))
                    _fail(n_63);
                  else
                    j_63 = n_63;
                }
                t = not_null(j_63);
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
  ATerm e_64 = NULL;
  ATerm z_58 = t;
  int a_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_64 = NULL;
      t = term_b_59;
      {
        t = get_config_0(t);
        {
          f_64 = t;
          if(((e_64 != NULL) && (e_64 != f_64)))
            _fail(f_64);
          else
            e_64 = f_64;
        }
      }
      ;
      LocalPopChoice(a_59);
    }
  else
    {
      t = z_58;
      {
        ATerm t_18 (ATerm t)
        {
          ATerm y_18 (ATerm t)
          {
            ATerm g_64 = NULL;
            g_64 = t;
            if(((e_64 != NULL) && (e_64 != g_64)))
              _fail(g_64);
            else
              e_64 = g_64;
            return(t);
          }
          t = Program_1(t, y_18);
          return(t);
        }
        t = option_defined_1(t, t_18);
      }
    }
  {
    ATerm z_18 (ATerm t)
    {
      ATerm a_19 (ATerm t)
      {
        t = not_null(e_64);
        return(t);
      }
      t = short_description_1(t, a_19);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_18);
    {
      t = term_c_59;
      {
        t = echo_0(t);
        {
          t = term_i_60;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_19 (ATerm t)
                {
                  ATerm h_64 = NULL;
                  ATerm i_64 = NULL;
                  i_64 = t;
                  if(((h_64 != NULL) && (h_64 != i_64)))
                    _fail(i_64);
                  else
                    h_64 = i_64;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_64)), term_j_60);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_19);
                {
                  ATerm c_19 (ATerm t)
                  {
                    ATerm j_64 = NULL;
                    ATerm k_64 = NULL;
                    ATerm e_19 (ATerm t)
                    {
                      t = not_null(e_64);
                      return(t);
                    }
                    t = long_description_1(t, e_19);
                    {
                      k_64 = t;
                      if(((j_64 != NULL) && (j_64 != k_64)))
                        _fail(k_64);
                      else
                        j_64 = k_64;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_64)), term_h_46);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_19);
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
  ATerm k_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(l_60);
    }
  else
    {
      t = k_60;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm u_64 = NULL,v_64 = NULL;
  u_64 = t;
  t_64 :
  if(match_cons(u_64, sym_Undefined_1))
    {
      v_64 = ATgetArgument(u_64, 0);
      {
        ATerm y_64 = NULL,a_65 = NULL;
        ATerm z_64 = NULL;
        t = SSLgetAnnotations(not_null(u_64));
        {
          z_64 = t;
          if(((y_64 != NULL) && (y_64 != z_64)))
            _fail(z_64);
          else
            y_64 = z_64;
        }
        {
          t = not_null(v_64);
          {
            ATerm c_65 = NULL;
            t = b_71(t);
            {
              a_65 = t;
              {
                ATerm d_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_65)), not_null(y_64));
                {
                  d_65 = t;
                  if(((c_65 != NULL) && (c_65 != d_65)))
                    _fail(d_65);
                  else
                    c_65 = d_65;
                }
                t = not_null(c_65);
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
  ATerm i_65 (ATerm t)
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_87, _id);
        ;
        LocalPopChoice(n_60);
      }
    else
      {
        t = m_60;
        t = Cons_2(t, _id, i_65);
      }
    return(t);
  }
  t = i_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_104 (ATerm))
{
  t = fetch_1(t, d_104);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  l_65 :
  if(((ATgetType(m_65) == AT_LIST) && ATisEmpty(m_65)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_65) == AT_LIST) && !(ATisEmpty(m_65))))
        {
          n_65 = ATgetFirst((ATermList) m_65);
          o_65 = (ATerm) ATgetNext((ATermList) m_65);
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
  ATerm o_60;
  o_60 = t;
  {
    ATerm r_65 = NULL;
    ATerm u_65 = NULL;
    ATerm p_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(q_60);
      }
    else
      {
        t = p_60;
        {
          ATerm s_65 = NULL;
          ATerm t_65 = NULL;
          t_65 = t;
          if(((s_65 != NULL) && (s_65 != t_65)))
            _fail(t_65);
          else
            s_65 = t_65;
          t = (ATerm) ATinsert(ATempty, not_null(s_65));
        }
      }
    {
      u_65 = t;
      if(((r_65 != NULL) && (r_65 != u_65)))
        _fail(u_65);
      else
        r_65 = u_65;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_23, not_null(r_65));
      t = printnl_0(t);
    }
  }
  t = o_60;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_b_59;
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
  ATerm r_60 = t;
  int s_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(s_60);
    }
  else
    {
      t = r_60;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_66 = NULL;
  b_66 = t;
  a_66 :
  if(match_cons(b_66, sym_Help_0))
    {
      ATerm d_66 = NULL,f_66 = NULL;
      ATerm t_60;
      t_60 = t;
      {
        ATerm e_66 = NULL;
        t = SSLgetAnnotations(not_null(b_66));
        {
          e_66 = t;
          if(((d_66 != NULL) && (d_66 != e_66)))
            _fail(e_66);
          else
            d_66 = e_66;
        }
      }
      t = t_60;
      {
        ATerm g_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_66));
        {
          g_66 = t;
          if(((f_66 != NULL) && (f_66 != g_66)))
            _fail(g_66);
          else
            f_66 = g_66;
        }
        t = not_null(f_66);
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
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 (ATerm t)
      {
        ATerm m_66 = NULL;
        m_66 = t;
        k_66 :
        if(!(match_string(m_66, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm i_19 (ATerm t)
      {
        t = term_y_60;
        t = set_config_0(t);
        return(t);
      }
      ATerm j_19 (ATerm t)
      {
        t = term_a_61;
        return(t);
      }
      t = Option_3(t, h_19, i_19, j_19);
      ;
      LocalPopChoice(v_60);
    }
  else
    {
      t = u_60;
      {
        ATerm l_19 (ATerm t)
        {
          ATerm n_66 = NULL;
          n_66 = t;
          l_66 :
          if(!(match_string(n_66, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm m_19 (ATerm t)
        {
          t = term_y_60;
          {
            t = set_config_0(t);
            {
              t = term_u_56;
              t = set_config_0(t);
            }
          }
          t = term_b_61;
          return(t);
        }
        ATerm n_19 (ATerm t)
        {
          t = term_c_61;
          return(t);
        }
        t = Option_3(t, l_19, m_19, n_19);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym__2))
    {
      r_66 = ATgetArgument(q_66, 0);
      s_66 = ATgetArgument(q_66, 1);
      t = SSL_table_get(not_null(r_66), not_null(s_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  z_66 = t;
  y_66 :
  if(match_cons(z_66, sym__3))
    {
      a_67 = ATgetArgument(z_66, 0);
      b_67 = ATgetArgument(z_66, 1);
      c_67 = ATgetArgument(z_66, 2);
      {
        ATerm d_61;
        d_61 = t;
        {
          ATerm g_67 = NULL;
          ATerm h_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_67), not_null(b_67));
          {
            ATerm e_61 = t;
            int j_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(j_61);
              }
            else
              {
                t = e_61;
                t = (ATerm) ATempty;
              }
            {
              h_67 = t;
              if(((g_67 != NULL) && (g_67 != h_67)))
                _fail(h_67);
              else
                g_67 = h_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_67), not_null(b_67), (ATerm) ATinsert(CheckATermList(not_null(g_67)), not_null(c_67)));
            t = table_put_0(t);
          }
        }
        t = d_61;
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
  ATerm l_67 = NULL;
  ATerm m_67 = NULL;
  t = term_r_28;
  {
    t = i_105(t);
    {
      m_67 = t;
      if(((l_67 != NULL) && (l_67 != m_67)))
        _fail(m_67);
      else
        l_67 = m_67;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_59, term_e_59, not_null(l_67));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_string(s_67, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(s_67) == AT_LIST) && !(ATisEmpty(s_67))))
        {
          t_67 = ATgetFirst((ATermList) s_67);
          u_67 = (ATerm) ATgetNext((ATermList) s_67);
          {
            ATerm x_67 = NULL;
            ATerm k_61;
            k_61 = t;
            {
              t = not_null(t_67);
              t = a_0(t);
            }
            t = k_61;
            {
              ATerm y_67 = NULL;
              t = term_r_28;
              {
                t = b_0(t);
                {
                  y_67 = t;
                  if(((x_67 != NULL) && (x_67 != y_67)))
                    _fail(y_67);
                  else
                    x_67 = y_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_67)), not_null(x_67));
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
  ATerm s_19 (ATerm t)
  {
    ATerm d_68 = NULL;
    d_68 = t;
    c_68 :
    if(!(match_string(d_68, "--help")))
      {
        if(!(match_string(d_68, "-h")))
          {
            if(!(match_string(d_68, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_19 (ATerm t)
  {
    t = term_a_56;
    {
      t = set_config_0(t);
      t = term_r_61;
    }
    return(t);
  }
  ATerm u_19 (ATerm t)
  {
    t = term_s_61;
    return(t);
  }
  t = Option_3(t, s_19, t_19, u_19);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(((ATgetType(g_68) == AT_LIST) && !(ATisEmpty(g_68))))
    {
      h_68 = ATgetFirst((ATermList) g_68);
      i_68 = (ATerm) ATgetNext((ATermList) g_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_68)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_105 (ATerm))
{
  ATerm t_61;
  t_61 = t;
  {
    ATerm v_19 (ATerm t)
    {
      t = term_u_61;
      t = g_105(t);
      return(t);
    }
    t = try_1(t, v_19);
  }
  t = t_61;
  {
    ATerm x_19 (ATerm t)
    {
      ATerm q_68 = NULL;
      ATerm v_61;
      v_61 = t;
      {
        ATerm o_68 = NULL;
        ATerm p_68 = NULL;
        p_68 = t;
        if(((o_68 != NULL) && (o_68 != p_68)))
          _fail(p_68);
        else
          o_68 = p_68;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_59, not_null(o_68));
          t = set_config_0(t);
        }
      }
      t = v_61;
      {
        ATerm r_68 = NULL;
        r_68 = t;
        if(((q_68 != NULL) && (q_68 != r_68)))
          _fail(r_68);
        else
          q_68 = r_68;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_68));
      }
      return(t);
    }
    ATerm y_19 (ATerm t)
    {
      ATerm w_61 = t;
      int z_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_62 = t;
          int b_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_62);
            }
          else
            {
              t = a_62;
              {
                t = g_105(t);
                t = Cons_2(t, _id, y_19);
              }
            }
          ;
          LocalPopChoice(z_61);
        }
      else
        {
          t = w_61;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_19, y_19);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm w_68 = NULL;
  ATerm c_62;
  c_62 = t;
  {
    t = term_d_62;
    t = table_put_0(t);
  }
  t = c_62;
  {
    ATerm z_19 (ATerm t)
    {
      ATerm e_62 = t;
      int h_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_105(t);
          ;
          LocalPopChoice(h_62);
        }
      else
        {
          t = e_62;
          {
            ATerm i_62 = t;
            int j_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(j_62);
              }
            else
              {
                t = i_62;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, z_19);
    {
      ATerm a_20 (ATerm t)
      {
        ATerm k_62 = t;
        int l_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_62;
            m_62 = t;
            {
              ATerm n_62 = t;
              int o_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_55;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(o_62);
                }
              else
                {
                  t = n_62;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_62;
            {
              t = system_usage_0(t);
              {
                t = term_i_21;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(l_62);
          }
        else
          {
            t = k_62;
            {
              ATerm p_62 = t;
              int q_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_62;
                  r_62 = t;
                  {
                    t = term_x_60;
                    t = get_config_0(t);
                  }
                  t = r_62;
                  {
                    t = system_about_0(t);
                    {
                      t = term_i_21;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(q_62);
                }
              else
                {
                  t = p_62;
                  {
                    ATerm b_20 (ATerm t)
                    {
                      ATerm c_20 (ATerm t)
                      {
                        ATerm x_68 = NULL;
                        x_68 = t;
                        if(((w_68 != NULL) && (w_68 != x_68)))
                          _fail(x_68);
                        else
                          w_68 = x_68;
                        return(t);
                      }
                      t = Undefined_1(t, c_20);
                      return(t);
                    }
                    t = option_defined_1(t, b_20);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_68)), term_s_62));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_g_26;
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
      t = try_1(t, a_20);
      {
        ATerm t_62;
        t_62 = t;
        {
          t = term_d_59;
          t = table_destroy_0(t);
        }
        t = t_62;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  ATerm u_62;
  u_62 = t;
  {
    ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
    e_69 = t;
    a_69 :
    if(match_cons(e_69, sym__3))
      {
        f_69 = ATgetArgument(e_69, 0);
        g_69 = ATgetArgument(e_69, 1);
        h_69 = ATgetArgument(e_69, 2);
        {
          if(((b_69 != NULL) && (b_69 != f_69)))
            _fail(f_69);
          else
            b_69 = f_69;
          {
            if(((c_69 != NULL) && (c_69 != g_69)))
              _fail(g_69);
            else
              c_69 = g_69;
            {
              if(((d_69 != NULL) && (d_69 != h_69)))
                _fail(h_69);
              else
                d_69 = h_69;
              t = SSL_table_put(not_null(b_69), not_null(c_69), not_null(d_69));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_62;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  l_69 = t;
  k_69 :
  if(match_cons(l_69, sym__2))
    {
      m_69 = ATgetArgument(l_69, 0);
      n_69 = ATgetArgument(l_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(m_69), not_null(n_69));
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
  ATerm w_62 = t;
  int x_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_62);
    }
  else
    {
      t = w_62;
      {
        ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
        t_69 = t;
        s_69 :
        if(((ATgetType(t_69) == AT_LIST) && !(ATisEmpty(t_69))))
          {
            u_69 = ATgetFirst((ATermList) t_69);
            v_69 = (ATerm) ATgetNext((ATermList) t_69);
            {
              t = not_null(u_69);
              {
                ATerm i_20 (ATerm t)
                {
                  t = not_null(v_69);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_20);
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
  ATerm f_70 = NULL;
  ATerm h_70 = NULL;
  f_70 = t;
  {
    ATerm i_70 = NULL;
    ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
    t = not_null(f_70);
    {
      i_70 = t;
      {
        t = SSL_explode_term(not_null(i_70));
        {
          k_70 = t;
          d_70 :
          if(match_cons(k_70, sym__2))
            {
              l_70 = ATgetArgument(k_70, 0);
              m_70 = ATgetArgument(k_70, 1);
              e_70 :
              if(match_string(l_70, ""))
                {
                  if(((h_70 != NULL) && (h_70 != m_70)))
                    _fail(m_70);
                  else
                    h_70 = m_70;
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
      t = not_null(h_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  t_70 :
  if(((ATgetType(u_70) == AT_LIST) && ATisEmpty(u_70)))
    {
      {
        ATerm w_70 = NULL,y_70 = NULL;
        ATerm z_62;
        z_62 = t;
        {
          ATerm x_70 = NULL;
          t = SSLgetAnnotations(not_null(u_70));
          {
            x_70 = t;
            if(((w_70 != NULL) && (w_70 != x_70)))
              _fail(x_70);
            else
              w_70 = x_70;
          }
        }
        t = z_62;
        {
          ATerm z_70 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_70));
          {
            z_70 = t;
            if(((y_70 != NULL) && (y_70 != z_70)))
              _fail(z_70);
            else
              y_70 = z_70;
          }
          t = not_null(y_70);
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
  ATerm g_71 (ATerm t)
  {
    ATerm b_63 = t;
    int c_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_71);
        ;
        LocalPopChoice(c_63);
      }
    else
      {
        t = b_63;
        {
          t = Nil_0(t);
          t = h_87(t);
        }
      }
    return(t);
  }
  t = g_71(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym__2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      {
        t = not_null(k_71);
        {
          ATerm l_20 (ATerm t)
          {
            t = not_null(l_71);
            return(t);
          }
          t = at_end_1(t, l_20);
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
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  u_71 :
  if(match_cons(v_71, sym__2))
    {
      w_71 = ATgetArgument(v_71, 0);
      x_71 = ATgetArgument(v_71, 1);
      {
        ATerm b_72 = NULL,d_72 = NULL;
        ATerm c_72 = NULL;
        t = SSLgetAnnotations(not_null(v_71));
        {
          c_72 = t;
          if(((b_72 != NULL) && (b_72 != c_72)))
            _fail(c_72);
          else
            b_72 = c_72;
        }
        {
          t = not_null(w_71);
          {
            ATerm f_72 = NULL;
            t = a_64(t);
            {
              d_72 = t;
              {
                t = not_null(x_71);
                {
                  ATerm h_72 = NULL;
                  t = b_64(t);
                  {
                    f_72 = t;
                    {
                      ATerm i_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_72), not_null(f_72)), not_null(b_72));
                      {
                        i_72 = t;
                        if(((h_72 != NULL) && (h_72 != i_72)))
                          _fail(i_72);
                        else
                          h_72 = i_72;
                      }
                      t = not_null(h_72);
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
  ATerm p_72 = NULL;
  p_72 = t;
  t = SSL_implode_string(not_null(p_72));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  y_72 = t;
  x_72 :
  if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
    {
      z_72 = ATgetFirst((ATermList) y_72);
      a_73 = (ATerm) ATgetNext((ATermList) y_72);
      {
        ATerm e_73 = NULL,g_73 = NULL;
        ATerm f_73 = NULL;
        t = SSLgetAnnotations(not_null(y_72));
        {
          f_73 = t;
          if(((e_73 != NULL) && (e_73 != f_73)))
            _fail(f_73);
          else
            e_73 = f_73;
        }
        {
          t = not_null(z_72);
          {
            ATerm i_73 = NULL;
            t = j_65(t);
            {
              g_73 = t;
              {
                t = not_null(a_73);
                {
                  ATerm k_73 = NULL;
                  t = k_65(t);
                  {
                    i_73 = t;
                    {
                      ATerm l_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_73)), not_null(g_73)), not_null(e_73));
                      {
                        l_73 = t;
                        if(((k_73 != NULL) && (k_73 != l_73)))
                          _fail(l_73);
                        else
                          k_73 = l_73;
                      }
                      t = not_null(k_73);
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
  ATerm s_73 = NULL;
  s_73 = t;
  t = SSL_explode_string(not_null(s_73));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_73 (ATerm t)
        {
          ATerm i_63 = t;
          int k_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_73);
              ;
              LocalPopChoice(k_63);
            }
          else
            {
              t = i_63;
              {
                ATerm m_20 (ATerm t)
                {
                  ATerm w_73 = NULL;
                  w_73 = t;
                  v_73 :
                  if(!(match_int(w_73, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm n_20 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, m_20, n_20);
              }
            }
          return(t);
        }
        t = x_73(t);
        ;
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
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
  ATerm l_63;
  l_63 = t;
  {
    ATerm l_74 = NULL,n_74 = NULL,p_74 = NULL,r_74 = NULL,v_74 = NULL,z_74 = NULL,d_75 = NULL,h_75 = NULL;
    t = term_o_63;
    {
      t = set_config_0(t);
      {
        t = term_p_63;
        {
          t = set_config_0(t);
          {
            t = term_q_63;
            {
              t = set_config_0(t);
              {
                t = term_r_63;
                {
                  t = set_config_0(t);
                  {
                    ATerm s_63;
                    s_63 = t;
                    {
                      ATerm m_74 = NULL;
                      t = term_t_63;
                      {
                        t = xtc_find_path_0(t);
                        {
                          m_74 = t;
                          if(((l_74 != NULL) && (l_74 != m_74)))
                            _fail(m_74);
                          else
                            l_74 = m_74;
                        }
                      }
                    }
                    t = s_63;
                    {
                      ATerm u_63;
                      u_63 = t;
                      {
                        ATerm o_74 = NULL;
                        t = term_v_63;
                        {
                          t = xtc_find_path_0(t);
                          {
                            o_74 = t;
                            if(((n_74 != NULL) && (n_74 != o_74)))
                              _fail(o_74);
                            else
                              n_74 = o_74;
                          }
                        }
                      }
                      t = u_63;
                      {
                        ATerm q_74 = NULL;
                        t = term_w_63;
                        {
                          t = xtc_find_path_0(t);
                          {
                            q_74 = t;
                            if(((p_74 != NULL) && (p_74 != q_74)))
                              _fail(q_74);
                            else
                              p_74 = q_74;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_d_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_74)), term_d_43), not_null(n_74)), term_d_43), not_null(l_74)), term_d_43));
                          {
                            t = set_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, term_y_63), term_x_63));
                              {
                                t = set_config_0(t);
                                {
                                  ATerm z_63;
                                  z_63 = t;
                                  {
                                    ATerm s_74 = NULL,u_74 = NULL;
                                    ATerm t_74 = NULL;
                                    t = term_c_64;
                                    {
                                      t = xtc_find_path_0(t);
                                      {
                                        t_74 = t;
                                        if(((s_74 != NULL) && (s_74 != t_74)))
                                          _fail(t_74);
                                        else
                                          s_74 = t_74;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), term_d_64);
                                      {
                                        t = conc_strings_0(t);
                                        {
                                          u_74 = t;
                                          if(((r_74 != NULL) && (r_74 != u_74)))
                                            _fail(u_74);
                                          else
                                            r_74 = u_74;
                                        }
                                      }
                                    }
                                  }
                                  t = z_63;
                                  {
                                    ATerm l_64;
                                    l_64 = t;
                                    {
                                      ATerm w_74 = NULL,y_74 = NULL;
                                      ATerm x_74 = NULL;
                                      t = term_c_64;
                                      {
                                        t = xtc_find_path_0(t);
                                        {
                                          x_74 = t;
                                          if(((w_74 != NULL) && (w_74 != x_74)))
                                            _fail(x_74);
                                          else
                                            w_74 = x_74;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), term_d_64);
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            y_74 = t;
                                            if(((v_74 != NULL) && (v_74 != y_74)))
                                              _fail(y_74);
                                            else
                                              v_74 = y_74;
                                          }
                                        }
                                      }
                                    }
                                    t = l_64;
                                    {
                                      ATerm a_75 = NULL,c_75 = NULL;
                                      ATerm b_75 = NULL;
                                      t = term_m_64;
                                      {
                                        t = xtc_find_path_0(t);
                                        {
                                          b_75 = t;
                                          if(((a_75 != NULL) && (a_75 != b_75)))
                                            _fail(b_75);
                                          else
                                            a_75 = b_75;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), term_d_64);
                                        {
                                          t = conc_strings_0(t);
                                          {
                                            c_75 = t;
                                            if(((z_74 != NULL) && (z_74 != c_75)))
                                              _fail(c_75);
                                            else
                                              z_74 = c_75;
                                          }
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_i_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_74)), term_d_43), not_null(v_74)), term_d_43), not_null(r_74)), term_d_43));
                                        {
                                          t = set_config_0(t);
                                          {
                                            ATerm n_64;
                                            n_64 = t;
                                            {
                                              ATerm e_75 = NULL,g_75 = NULL;
                                              ATerm f_75 = NULL;
                                              t = term_c_64;
                                              {
                                                t = xtc_find_path_0(t);
                                                {
                                                  f_75 = t;
                                                  if(((e_75 != NULL) && (e_75 != f_75)))
                                                    _fail(f_75);
                                                  else
                                                    e_75 = f_75;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_75), term_o_64);
                                                {
                                                  t = conc_strings_0(t);
                                                  {
                                                    g_75 = t;
                                                    if(((d_75 != NULL) && (d_75 != g_75)))
                                                      _fail(g_75);
                                                    else
                                                      d_75 = g_75;
                                                  }
                                                }
                                              }
                                            }
                                            t = n_64;
                                            {
                                              ATerm i_75 = NULL,k_75 = NULL;
                                              ATerm j_75 = NULL;
                                              t = term_m_64;
                                              {
                                                t = xtc_find_path_0(t);
                                                {
                                                  j_75 = t;
                                                  if(((i_75 != NULL) && (i_75 != j_75)))
                                                    _fail(j_75);
                                                  else
                                                    i_75 = j_75;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_75), term_o_64);
                                                {
                                                  t = conc_strings_0(t);
                                                  {
                                                    k_75 = t;
                                                    if(((h_75 != NULL) && (h_75 != k_75)))
                                                      _fail(k_75);
                                                    else
                                                      h_75 = k_75;
                                                  }
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_64), term_s_64), not_null(h_75)), term_p_64), term_r_64), term_q_64), not_null(d_75)), term_p_64));
                                                {
                                                  t = set_config_0(t);
                                                  {
                                                    t = term_x_64;
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
    }
  }
  t = l_63;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm q_20 (ATerm t)
      {
        ATerm z_75 = NULL;
        t = term_e_56;
        {
          t = get_config_0(t);
          {
            ATerm a_76 = NULL;
            t = term_b_65;
            {
              t = xtc_find_0(t);
              {
                a_76 = t;
                if(((z_75 != NULL) && (z_75 != a_76)))
                  _fail(a_76);
                else
                  z_75 = a_76;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_75), term_d_23);
              {
                t = copy_file_0(t);
                {
                  t = term_i_21;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, q_20);
      {
        ATerm r_20 (ATerm t)
        {
          t = term_t_56;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_i_21;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, r_20);
        {
          ATerm e_65 = t;
          int f_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_65;
              g_65 = t;
              {
                t = term_p_41;
                t = get_config_0(t);
              }
              t = g_65;
              ;
              LocalPopChoice(f_65);
            }
          else
            {
              t = e_65;
              {
                t = (ATerm) ATinsert(ATempty, term_h_65);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm s_20 (ATerm t)
              {
                ATerm p_65;
                p_65 = t;
                {
                  t = term_p_41;
                  {
                    t = get_config_0(t);
                    {
                      ATerm t_20 (ATerm t)
                      {
                        t = term_q_65;
                        return(t);
                      }
                      t = debug_1(t, t_20);
                    }
                  }
                }
                t = p_65;
                return(t);
              }
              t = if_verbose1_1(t, s_20);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm strc_0 (ATerm t)
{
  ATerm v_65 = t;
  int w_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm u_20 (ATerm t)
        {
          ATerm x_20 (ATerm t)
          {
            ATerm f_76 = NULL;
            ATerm g_76 = NULL;
            g_76 = t;
            if(((f_76 != NULL) && (f_76 != g_76)))
              _fail(g_76);
            else
              f_76 = g_76;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(CheckATermList(not_null(f_76)), term_x_65));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, x_20);
          return(t);
        }
        t = profile_p__2(t, u_20, compile_0);
        {
          ATerm y_20 (ATerm t)
          {
            ATerm h_76 = NULL;
            ATerm i_76 = NULL;
            t = run_time_0(t);
            {
              i_76 = t;
              if(((h_76 != NULL) && (h_76 != i_76)))
                _fail(i_76);
              else
                h_76 = i_76;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_65), not_null(h_76)), term_y_65));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, y_20);
          {
            t = term_i_21;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(w_65);
    }
  else
    {
      t = v_65;
      {
        ATerm j_76 = NULL;
        ATerm k_76 = NULL;
        t = run_time_0(t);
        {
          k_76 = t;
          if(((j_76 != NULL) && (j_76 != k_76)))
            _fail(k_76);
          else
            j_76 = k_76;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_65), not_null(j_76)), term_c_66));
          {
            t = printnl_0(t);
            {
              t = term_g_26;
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
  t = strc_0(t);
  return(t);
}
