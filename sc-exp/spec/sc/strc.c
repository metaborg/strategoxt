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
ATerm term_v_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_l_65;
ATerm term_c_65;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_h_64;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_o_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_p_62;
ATerm term_y_61;
ATerm term_p_61;
ATerm term_n_61;
ATerm term_g_61;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_r_60;
ATerm term_e_60;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_g_58;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_r_56;
ATerm term_p_56;
ATerm term_l_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_p_55;
ATerm term_n_55;
ATerm term_h_55;
ATerm term_d_55;
ATerm term_y_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_i_54;
ATerm term_f_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_s_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_j_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_x_52;
ATerm term_u_52;
ATerm term_r_52;
ATerm term_o_52;
ATerm term_l_52;
ATerm term_g_52;
ATerm term_w_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_y_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_g_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_y_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_a_48;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_s_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_s_45;
ATerm term_o_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_x_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_i_41;
ATerm term_e_41;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_s_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_e_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
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
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
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
ATerm term_p_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_p_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_z_22;
ATerm term_s_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_n_21;
ATerm term_h_21;
ATerm term_e_21;
void init_constant_terms (void)
{
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("output-canonical: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".can.txt", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("output-optimized: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt.txt", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_c_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_31, term_c_26, term_y_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_32, term_n_21, term_h_32);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_32, term_k_26, term_o_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_32, term_s_32, term_t_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_33, term_c_33, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_33, term_k_33, term_l_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_33, term_u_33, term_v_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_33, term_y_33, term_z_33);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_34, term_g_34, term_h_34);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_34, term_k_34, term_l_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_35, term_c_35, term_d_35);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_35, term_u_26, term_g_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_35, term_j_35, term_k_35);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_35, term_v_35, term_w_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_35, term_z_35, term_a_36);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_36, term_d_36, term_e_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_36, term_p_36, term_q_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_36, term_t_36, term_y_36);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_37, term_b_37, term_c_37);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_37, term_j_37, term_k_37);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_37, term_q_37, term_r_37);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_37, term_v_37, term_w_37);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_37, term_z_37, term_b_38);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_38, term_g_38, term_l_38);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_38, term_s_38, term_t_38);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_38, term_x_38, term_y_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_39, term_c_39, term_e_39);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_39, term_j_39, term_k_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym__2, term_s_46, term_z_46);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym__2, term_s_46, term_u_49);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_m_28);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_m_28);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_m_28);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_m_28);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-optimized Pretty-print AST after optimization", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_m_28);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-canonical Pretty-print AST after canonicalization", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_m_28);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(sym__2, term_s_54, term_m_28);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_e_21);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(sym__2, term_y_55, term_m_28);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(sym__2, term_d_56, term_m_28);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym__2, term_l_56, term_m_28);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym__2, term_c_59, term_d_59);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_m_28);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(sym__3, term_c_59, term_d_59, (ATerm) ATempty);
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(sym__2, term_z_45, term_i_63);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(sym__2, term_h_21, term_c_26);
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_e_21);
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_c_26);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(sym__2, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
        ATerm v_20;
        v_20 = t;
        t = SSL_printnl(not_null(b_1), not_null(c_1));
        t = v_20;
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
  ATerm y_20 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_92(t);
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = y_20;
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
      t = term_e_21;
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
    ATerm f_21;
    f_21 = t;
    {
      ATerm u_3 = NULL;
      ATerm v_3 = NULL;
      t = term_h_21;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), term_n_21);
        t = geq_0(t);
      }
    }
    t = f_21;
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
            t = term_r_21;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm g_4 = NULL;
          ATerm s_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_v_21;
              t = get_config_0(t);
              ;
              LocalPopChoice(t_21);
            }
          else
            {
              t = s_21;
              {
                ATerm t_0 (ATerm t)
                {
                  t = term_w_21;
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
                t = term_x_21;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_y_21, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_4)), not_null(e_4)), term_v_21), not_null(c_4)));
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
            t = term_z_21;
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
            t = term_c_22;
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
                t = term_e_22;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_4)), term_v_21), not_null(r_4)), term_g_22));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(v_4));
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
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22;
      j_22 = t;
      {
        t = term_g_22;
        t = get_config_0(t);
      }
      t = j_22;
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
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
              t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(CheckATermList(not_null(e_5)), term_s_22));
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
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = r_0(t);
            {
              b_6 = t;
              t_5 :
              if(match_cons(b_6, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), term_z_22);
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
            t = term_z_22;
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm e_23 = t;
              int f_23 = stack_ptr;
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
                        ATerm g_23 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm h_23 = t;
                            int i_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(i_23);
                              }
                            else
                              {
                                t = h_23;
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
                            t = g_23;
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
                  LocalPopChoice(f_23);
                }
              else
                {
                  t = e_23;
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
    t = term_n_23;
    return(t);
  }
  t = xtc_transform_1(t, f_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_o_23;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    t = term_p_23;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_6)), term_q_23);
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm w_6 = NULL,y_6 = NULL;
    ATerm x_23;
    x_23 = t;
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
    t = x_23;
    {
      ATerm b_7 = NULL;
      t = term_y_23;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), term_y_23);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_6)), (ATerm) ATinsert(ATempty, term_g_24)), not_null(w_6));
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
    ATerm h_24;
    h_24 = t;
    {
      ATerm m_1 (ATerm t)
      {
        t = term_i_24;
        return(t);
      }
      t = debug_1(t, m_1);
      {
        ATerm j_24;
        j_24 = t;
        {
          t = term_k_24;
          t = get_config_0(t);
        }
        t = j_24;
        {
          ATerm n_1 (ATerm t)
          {
            ATerm k_7 = NULL;
            ATerm o_1 (ATerm t)
            {
              t = term_q_24;
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
              t = term_u_24;
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
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_7)), term_y_24), term_v_24);
              return(t);
            }
            t = xtc_transform_2(t, p_1, q_1);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm n_7 = NULL;
                ATerm s_1 (ATerm t)
                {
                  t = term_b_25;
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
                  t = (ATerm) ATinsert(ATempty, term_c_25);
                  return(t);
                }
                t = say_1(t, t_1);
              }
            }
          }
        }
      }
    }
    t = h_24;
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_d_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_7)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, u_1, v_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = term_f_25;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_7)), term_g_24);
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
      t = term_g_25;
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
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(CheckATermList(not_null(a_8)), term_h_25));
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
                        t = term_i_25;
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
    ATerm j_25;
    j_25 = t;
    {
      ATerm h_2 (ATerm t)
      {
        t = term_k_25;
        return(t);
      }
      t = debug_1(t, h_2);
      {
        ATerm l_25;
        l_25 = t;
        {
          t = term_m_25;
          t = get_config_0(t);
        }
        t = l_25;
        {
          ATerm i_2 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_2 (ATerm t)
            {
              t = term_u_25;
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
              t = term_u_24;
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
              t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), term_v_24);
              return(t);
            }
            t = xtc_transform_2(t, k_2, l_2);
            {
              ATerm m_2 (ATerm t)
              {
                ATerm l_8 = NULL;
                ATerm n_2 (ATerm t)
                {
                  t = term_z_25;
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
                  t = (ATerm) ATinsert(ATempty, term_c_25);
                  return(t);
                }
                t = say_1(t, o_2);
              }
            }
          }
        }
      }
    }
    t = j_25;
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm stratego_of_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_a_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_8)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_b_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_8)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm olevel1_1 (ATerm t, ATerm n_109 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    t = term_c_26;
    return(t);
  }
  t = olevel_2(t, t_2, n_109);
  return(t);
}
ATerm dead_var_elim_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = term_d_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_8)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, u_2, y_2);
  return(t);
}
ATerm bound_unbound_vars_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        t = term_g_26;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(d_9)), term_g_24);
        return(t);
      }
      t = xtc_transform_2(t, z_2, c_3);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm d_3 (ATerm t)
        {
          t = term_g_26;
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
          t = (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_g_24);
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
    t = term_h_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_9)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, f_3, g_3);
  return(t);
}
ATerm olevel3_1 (ATerm t, ATerm p_109 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = olevel_2(t, j_3, p_109);
  return(t);
}
ATerm desugar_case_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    t = term_p_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_9)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, m_3, q_3);
  return(t);
}
ATerm olevel2_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = term_n_21;
    return(t);
  }
  t = olevel_2(t, r_3, o_109);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    t = term_q_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_9)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, s_3, t_3);
  return(t);
}
ATerm olevel_2 (ATerm t, ATerm l_109 (ATerm), ATerm m_109 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm r_26;
    r_26 = t;
    {
      ATerm x_9 = NULL,z_9 = NULL;
      ATerm s_26;
      s_26 = t;
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
      t = s_26;
      {
        ATerm a_10 = NULL;
        t = term_t_26;
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
    t = r_26;
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
    t = term_u_26;
    return(t);
  }
  t = olevel_2(t, x_3, q_109);
  return(t);
}
ATerm dead_def_elim_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = term_v_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, y_3, z_3);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    t = term_z_26;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, d_4, i_4);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = term_a_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(m_10)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, j_4, k_4);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_e_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, l_4, m_4);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      t = term_h_27;
      return(t);
    }
    t = debug_1(t, o_4);
    return(t);
  }
  t = if_verbose2_1(t, n_4);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        ATerm u_10 = NULL;
        ATerm v_10 = NULL;
        v_10 = t;
        if(((u_10 != NULL) && (u_10 != v_10)))
          _fail(v_10);
        else
          u_10 = v_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_i_27));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, a_5);
      return(t);
    }
    ATerm z_4 (ATerm t)
    {
      t = olevel1_1(t, optimize1_0);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm j_27;
            j_27 = t;
            {
              ATerm k_27 = t;
              if((PushChoice() == 0))
                {
                  t = term_l_27;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = k_27;
                }
            }
            t = j_27;
            t = fusion_0(t);
            return(t);
          }
          t = try_1(t, c_5);
          return(t);
        }
        t = olevel2_1(t, b_5);
        {
          t = olevel4_1(t, inline_0);
          {
            t = olevel4_1(t, dead_def_elim_0);
            {
              t = olevel4_1(t, optimize2_0);
              {
                ATerm d_5 (ATerm t)
                {
                  t = const_prop_0(t);
                  {
                    t = bound_unbound_vars_0(t);
                    t = dead_var_elim_0(t);
                  }
                  return(t);
                }
                t = olevel4_1(t, d_5);
                {
                  t = olevel4_1(t, optimize2_0);
                  {
                    t = olevel2_1(t, compile_match_0);
                    {
                      t = olevel2_1(t, desugar_case_0);
                      {
                        t = olevel3_1(t, optimize2_0);
                        {
                          ATerm g_5 (ATerm t)
                          {
                            t = const_prop_0(t);
                            {
                              t = bound_unbound_vars_0(t);
                              t = dead_var_elim_0(t);
                            }
                            return(t);
                          }
                          t = olevel3_1(t, g_5);
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
      return(t);
    }
    t = profile_p__2(t, s_4, z_4);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = term_o_27;
    return(t);
  }
  ATerm m_5 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, h_5, m_5);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    t = term_r_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(c_11)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, n_5, o_5);
  return(t);
}
ATerm warnings_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    t = term_s_27;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm i_11 = NULL,k_11 = NULL;
    ATerm t_27;
    t_27 = t;
    {
      ATerm j_11 = NULL;
      t = pass_verbose_0(t);
      {
        j_11 = t;
        if(((i_11 != NULL) && (i_11 != j_11)))
          _fail(j_11);
        else
          i_11 = j_11;
      }
    }
    t = t_27;
    {
      ATerm n_11 = NULL;
      t = term_u_27;
      {
        t = get_config_0(t);
        {
          ATerm r_5 (ATerm t)
          {
            ATerm l_11 = NULL;
            ATerm m_11 = NULL;
            m_11 = t;
            if(((l_11 != NULL) && (l_11 != m_11)))
              _fail(m_11);
            else
              l_11 = m_11;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_u_27);
            return(t);
          }
          t = map_1(t, r_5);
          {
            n_11 = t;
            if(((k_11 != NULL) && (k_11 != n_11)))
              _fail(n_11);
            else
              k_11 = n_11;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_11)), (ATerm) ATinsert(ATempty, term_g_24)), not_null(i_11));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, p_5, q_5);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    t = term_w_27;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm s_11 = NULL;
    ATerm t_11 = NULL;
    t = pass_verbose_0(t);
    {
      t_11 = t;
      if(((s_11 != NULL) && (s_11 != t_11)))
        _fail(t_11);
      else
        s_11 = t_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_11)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, s_5, u_5);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    t = term_x_27;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_11)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, v_5, w_5);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm a_6 (ATerm t)
  {
    ATerm y_27;
    y_27 = t;
    {
      t = term_z_27;
      t = get_config_0(t);
    }
    t = y_27;
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            t = (ATerm) ATinsert(ATempty, term_c_28);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm c_6 (ATerm t)
        {
          ATerm b_12 = NULL;
          ATerm g_6 (ATerm t)
          {
            t = term_d_28;
            return(t);
          }
          t = get_outfile_1(t, g_6);
          {
            b_12 = t;
            if(((a_12 != NULL) && (a_12 != b_12)))
              _fail(b_12);
            else
              a_12 = b_12;
          }
          return(t);
        }
        t = copy_to_1(t, c_6);
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, term_e_28);
            return(t);
          }
          t = say_1(t, i_6);
          t = xtc_io_exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_6);
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm j_6 (ATerm t)
  {
    ATerm f_28;
    f_28 = t;
    {
      ATerm e_12 = NULL;
      ATerm f_12 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), term_n_21);
        t = geq_0(t);
      }
    }
    t = f_28;
    t = j_101(t);
    return(t);
  }
  t = try_1(t, j_6);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm k_6 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    ATerm j_12 = NULL;
    ATerm k_12 = NULL;
    t = pass_verbose_0(t);
    {
      k_12 = t;
      if(((j_12 != NULL) && (j_12 != k_12)))
        _fail(k_12);
      else
        j_12 = k_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(j_12)), term_g_24);
    return(t);
  }
  t = xtc_transform_2(t, k_6, l_6);
  {
    ATerm m_6 (ATerm t)
    {
      ATerm n_6 (ATerm t)
      {
        ATerm m_12 = NULL;
        ATerm o_6 (ATerm t)
        {
          t = term_i_28;
          return(t);
        }
        t = get_outfile_1(t, o_6);
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
        return(t);
      }
      t = copy_to_1(t, n_6);
      {
        ATerm p_6 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_12)), term_k_28);
          return(t);
        }
        t = say_1(t, p_6);
      }
      return(t);
    }
    t = if_keep2_1(t, m_6);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm k_101 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm l_28;
    l_28 = t;
    {
      ATerm q_12 = NULL;
      ATerm r_12 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), term_k_26);
        t = geq_0(t);
      }
    }
    t = l_28;
    t = k_101(t);
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Specification_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      {
        ATerm z_12 = NULL;
        ATerm a_13 = NULL;
        t = term_m_28;
        {
          t = e_79(t);
          {
            a_13 = t;
            if(((z_12 != NULL) && (z_12 != a_13)))
              _fail(a_13);
            else
              z_12 = a_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(x_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_n_28, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_12)), (ATerm) ATempty))))));
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
  ATerm f_13 = NULL,h_13 = NULL;
  ATerm t_6 (ATerm t)
  {
    ATerm o_28;
    o_28 = t;
    {
      ATerm g_13 = NULL;
      t = term_s_28;
      {
        t = get_config_0(t);
        {
          g_13 = t;
          {
            if(((f_13 != NULL) && (f_13 != g_13)))
              _fail(g_13);
            else
              f_13 = g_13;
            {
              ATerm u_6 (ATerm t)
              {
                ATerm v_6 (ATerm t)
                {
                  t = term_x_28;
                  return(t);
                }
                t = debug_1(t, v_6);
                return(t);
              }
              t = if_verbose2_1(t, u_6);
            }
          }
        }
      }
    }
    t = o_28;
    {
      ATerm c_7 (ATerm t)
      {
        ATerm d_7 (ATerm t)
        {
          t = not_null(f_13);
          return(t);
        }
        t = AddMain_1(t, d_7);
        return(t);
      }
      t = xtc_io_transform_1(t, c_7);
    }
    return(t);
  }
  t = try_1(t, t_6);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm f_7 (ATerm t)
      {
        ATerm i_13 = NULL;
        ATerm g_7 (ATerm t)
        {
          t = term_y_28;
          return(t);
        }
        t = get_outfile_1(t, g_7);
        {
          i_13 = t;
          if(((h_13 != NULL) && (h_13 != i_13)))
            _fail(i_13);
          else
            h_13 = i_13;
        }
        return(t);
      }
      t = copy_to_1(t, f_7);
      {
        ATerm h_7 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_13)), term_z_28);
          return(t);
        }
        t = say_1(t, h_7);
      }
      return(t);
    }
    t = if_keep3_1(t, e_7);
  }
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm o_13 = NULL;
  ATerm q_13 = NULL,r_13 = NULL;
  o_13 = t;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm a_29;
      a_29 = t;
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
        t = term_d_29;
        {
          t = table_get_0(t);
          {
            s_13 = t;
            n_13 :
            if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
              {
                t_13 = ATgetFirst((ATermList) s_13);
                u_13 = (ATerm) ATgetNext((ATermList) s_13);
                {
                  if(((r_13 != NULL) && (r_13 != t_13)))
                    _fail(t_13);
                  else
                    r_13 = t_13;
                  {
                    if(((q_13 != NULL) && (q_13 != u_13)))
                      _fail(u_13);
                    else
                      q_13 = u_13;
                    {
                      t = not_null(r_13);
                      {
                        ATerm p_7 (ATerm t)
                        {
                          t = try_1(t, remove_file_0);
                          return(t);
                        }
                        t = map_1(t, p_7);
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
      t = a_29;
      {
        ATerm q_7 (ATerm t)
        {
          t = term_b_29;
          return(t);
        }
        t = end_scope_1(t, q_7);
      }
      return(t);
    }
    t = repeat_1(t, o_7);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_21;
        t = get_config_0(t);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = term_z_22;
      }
    return(t);
  }
  t = copy_to_1(t, r_7);
  {
    t = term_e_21;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm z_13 = NULL,b_14 = NULL;
  ATerm o_29;
  o_29 = t;
  {
    ATerm a_14 = NULL;
    t = f_79(t);
    {
      a_14 = t;
      if(((z_13 != NULL) && (z_13 != a_14)))
        _fail(a_14);
      else
        z_13 = a_14;
    }
  }
  t = o_29;
  {
    ATerm c_14 = NULL;
    t = term_p_29;
    {
      t = get_config_0(t);
      {
        c_14 = t;
        if(((b_14 != NULL) && (b_14 != c_14)))
          _fail(c_14);
        else
          b_14 = c_14;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_14), not_null(z_13));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym_stderr_0))
    {
      ATerm l_14 = NULL,n_14 = NULL;
      ATerm q_29;
      q_29 = t;
      {
        ATerm m_14 = NULL;
        t = SSLgetAnnotations(not_null(j_14));
        {
          m_14 = t;
          if(((l_14 != NULL) && (l_14 != m_14)))
            _fail(m_14);
          else
            l_14 = m_14;
        }
      }
      t = q_29;
      {
        ATerm o_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_14));
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
        t = not_null(n_14);
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
  ATerm w_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_stdout_0))
    {
      ATerm y_14 = NULL,a_15 = NULL;
      ATerm t_29;
      t_29 = t;
      {
        ATerm z_14 = NULL;
        t = SSLgetAnnotations(not_null(w_14));
        {
          z_14 = t;
          if(((y_14 != NULL) && (y_14 != z_14)))
            _fail(z_14);
          else
            y_14 = z_14;
        }
      }
      t = t_29;
      {
        ATerm b_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(y_14));
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
        t = not_null(a_15);
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
  ATerm n_15 = NULL,o_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_FILE_1))
    {
      o_15 = ATgetArgument(n_15, 0);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_15 = NULL;
            ATerm r_15 = NULL;
            t = q_0(t);
            {
              r_15 = t;
              {
                if(((q_15 != NULL) && (q_15 != r_15)))
                  _fail(r_15);
                else
                  q_15 = r_15;
                {
                  ATerm w_29 = t;
                  int x_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(x_29);
                    }
                  else
                    {
                      t = w_29;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(q_15));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_15));
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm y_29 = t;
              int z_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_15 = NULL;
                  ATerm u_15 = NULL;
                  t = q_0(t);
                  {
                    u_15 = t;
                    {
                      if(((t_15 != NULL) && (t_15 != u_15)))
                        _fail(u_15);
                      else
                        t_15 = u_15;
                      {
                        ATerm e_30 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_30 = t;
                            int g_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(g_30);
                              }
                            else
                              {
                                t = f_30;
                                {
                                  ATerm h_30 = t;
                                  int i_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(i_30);
                                    }
                                  else
                                    {
                                      t = h_30;
                                      {
                                        ATerm v_15 = NULL;
                                        v_15 = t;
                                        if(((o_15 != NULL) && (o_15 != v_15)))
                                          _fail(v_15);
                                        else
                                          o_15 = v_15;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_30;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_15), not_null(t_15));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_15));
                  ;
                  LocalPopChoice(z_29);
                }
              else
                {
                  t = y_29;
                  {
                    ATerm x_15 = NULL;
                    t = q_0(t);
                    {
                      x_15 = t;
                      if(((o_15 != NULL) && (o_15 != x_15)))
                        _fail(x_15);
                      else
                        o_15 = x_15;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_15));
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
  ATerm g_16 = NULL;
  ATerm u_7 (ATerm t)
  {
    ATerm n_30;
    n_30 = t;
    {
      t = term_o_30;
      t = get_config_0(t);
    }
    t = n_30;
    {
      ATerm v_7 (ATerm t)
      {
        ATerm h_16 = NULL;
        ATerm y_7 (ATerm t)
        {
          t = term_p_30;
          return(t);
        }
        t = get_outfile_1(t, y_7);
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
        return(t);
      }
      t = copy_to_1(t, v_7);
      {
        ATerm q_30;
        q_30 = t;
        {
          t = (ATerm) ATinsert(ATempty, term_r_30);
          t = echo_0(t);
        }
        t = q_30;
        t = xtc_io_exit_0(t);
      }
    }
    return(t);
  }
  t = try_1(t, u_7);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm m_16 = NULL,o_16 = NULL;
  ATerm n_16 = NULL;
  t = term_g_28;
  {
    ATerm s_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = s_30;
        t = term_c_26;
      }
    {
      n_16 = t;
      if(((m_16 != NULL) && (m_16 != n_16)))
        _fail(n_16);
      else
        m_16 = n_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_c_26);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          o_16 = t;
          if(((l_16 != NULL) && (l_16 != o_16)))
            _fail(o_16);
          else
            l_16 = o_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_16)), term_g_28);
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm u_16 = NULL,w_16 = NULL;
  ATerm v_16 = NULL;
  t = term_h_21;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = term_c_26;
      }
    {
      v_16 = t;
      if(((u_16 != NULL) && (u_16 != v_16)))
        _fail(v_16);
      else
        u_16 = v_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_c_26);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          w_16 = t;
          if(((t_16 != NULL) && (t_16 != w_16)))
            _fail(w_16);
          else
            t_16 = w_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_16)), term_h_21);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm a_17 = NULL;
  ATerm b_17 = NULL;
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_21;
      t = get_config_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        t = term_p_29;
        t = get_config_0(t);
      }
    }
  {
    b_17 = t;
    if(((a_17 != NULL) && (a_17 != b_17)))
      _fail(b_17);
    else
      a_17 = b_17;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_17)), term_j_31);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_stdin_0))
    {
      ATerm k_17 = NULL;
      ATerm l_17 = NULL;
      t = term_k_31;
      {
        t = ReadFromFile_0(t);
        {
          l_17 = t;
          if(((k_17 != NULL) && (k_17 != l_17)))
            _fail(l_17);
          else
            k_17 = l_17;
        }
      }
      t = not_null(k_17);
    }
  else
    {
      if(match_cons(i_17, sym_FILE_1))
        {
          j_17 = ATgetArgument(i_17, 0);
          {
            ATerm n_17 = NULL;
            ATerm o_17 = NULL;
            t = not_null(j_17);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  o_17 = t;
                  if(((n_17 != NULL) && (n_17 != o_17)))
                    _fail(o_17);
                  else
                    n_17 = o_17;
                }
              }
            }
            t = not_null(n_17);
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  x_17 = t;
  v_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      a_18 = ATgetArgument(x_17, 1);
      w_17 :
      if(match_cons(y_17, sym_Stream_1))
        {
          z_17 = ATgetArgument(y_17, 0);
          {
            ATerm d_18 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(z_17), not_null(a_18));
            {
              ATerm e_18 = NULL;
              e_18 = t;
              if(((d_18 != NULL) && (d_18 != e_18)))
                _fail(e_18);
              else
                d_18 = e_18;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_18));
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
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_18 = NULL,s_18 = NULL;
        t = not_null(m_18);
        {
          ATerm r_18 = NULL;
          r_18 = t;
          if(((q_18 != NULL) && (q_18 != r_18)))
            _fail(r_18);
          else
            q_18 = r_18;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), term_l_31);
            {
              t = open_stream_0(t);
              {
                ATerm t_18 = NULL;
                t_18 = t;
                if(((s_18 != NULL) && (s_18 != t_18)))
                  _fail(t_18);
                else
                  s_18 = t_18;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(n_18));
                  {
                    t = d_99(t);
                    {
                      t = fclose_0(t);
                      t = not_null(n_18);
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
  ATerm z_18 = NULL;
  ATerm b_19 = NULL;
  z_18 = t;
  {
    ATerm c_19 = NULL;
    t = xtc_new_file_0(t);
    {
      c_19 = t;
      {
        if(((b_19 != NULL) && (b_19 != c_19)))
          _fail(c_19);
        else
          b_19 = c_19;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(z_18));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(b_19);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_19));
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
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_close_file(not_null(g_19));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      t = SSL_execvp(not_null(m_19), not_null(n_19));
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
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_int_to_string(not_null(s_19));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_UnknownSignal_1))
    {
      b_20 = ATgetArgument(a_20, 0);
      {
        ATerm f_20 = NULL;
        ATerm g_20 = NULL;
        t = not_null(b_20);
        {
          t = int_to_string_0(t);
          {
            g_20 = t;
            if(((f_20 != NULL) && (f_20 != g_20)))
              _fail(g_20);
            else
              f_20 = g_20;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_31), not_null(f_20)), term_m_31);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(a_20, sym_Signal_3))
        {
          b_20 = ATgetArgument(a_20, 0);
          c_20 = ATgetArgument(a_20, 1);
          d_20 = ATgetArgument(a_20, 2);
          {
            ATerm k_20 = NULL;
            ATerm l_20 = NULL;
            t = not_null(c_20);
            {
              t = int_to_string_0(t);
              {
                l_20 = t;
                if(((k_20 != NULL) && (k_20 != l_20)))
                  _fail(l_20);
                else
                  k_20 = l_20;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_20)), term_q_31), not_null(k_20)), term_p_31), not_null(b_20));
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
  ATerm r_20 = NULL;
  ATerm z_7 (ATerm t)
  {
    ATerm s_20 = NULL;
    t = d_87(t);
    {
      s_20 = t;
      if(((r_20 != NULL) && (r_20 != s_20)))
        _fail(s_20);
      else
        r_20 = s_20;
    }
    return(t);
  }
  t = fetch_1(t, z_7);
  t = not_null(r_20);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_39), term_h_39), term_z_38), term_u_38), term_m_38), term_e_38), term_x_37), term_t_37), term_l_37), term_d_37), term_z_36), term_r_36), term_f_36), term_b_36), term_x_35), term_l_35), term_h_35), term_e_35), term_a_35), term_i_34), term_e_34), term_w_33), term_m_33), term_e_33), term_a_33), term_p_32), term_k_32), term_z_31);
        {
          ATerm c_8 (ATerm t)
          {
            ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
            z_20 = t;
            w_20 :
            if(match_cons(z_20, sym_Signal_3))
              {
                a_21 = ATgetArgument(z_20, 0);
                b_21 = ATgetArgument(z_20, 1);
                c_21 = ATgetArgument(z_20, 2);
                if(((x_20 != NULL) && (x_20 != b_21)))
                  _fail(b_21);
                else
                  x_20 = b_21;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, c_8);
        }
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(x_20));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm o_39;
  o_39 = t;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
      j_21 = t;
      i_21 :
      if(match_cons(j_21, sym_WaitStatus_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm p_21 = NULL;
            t = not_null(l_21);
            {
              ATerm r_39 = t;
              if((PushChoice() == 0))
                {
                  ATerm o_21 = NULL;
                  o_21 = t;
                  g_21 :
                  if(!(match_int(o_21, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_39;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm q_21 = NULL;
                    q_21 = t;
                    if(((p_21 != NULL) && (p_21 != q_21)))
                      _fail(q_21);
                    else
                      p_21 = q_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_21)), term_s_39));
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
    t = try_1(t, d_8);
  }
  t = o_39;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  t = SSL_waitpid(not_null(u_21));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm b_22 = NULL;
  ATerm d_22 = NULL;
  b_22 = t;
  {
    t = fork_0(t);
    {
      d_22 = t;
      {
        ATerm t_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = NULL;
            f_22 = t;
            a_22 :
            if(match_int(f_22, 0))
              {
                t = not_null(b_22);
                t = y_101(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = t_39;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_22), not_null(b_22));
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
  ATerm o_22 = NULL;
  ATerm e_8 (ATerm t)
  {
    ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
    p_22 = t;
    n_22 :
    if(match_cons(p_22, sym__2))
      {
        q_22 = ATgetArgument(p_22, 0);
        r_22 = ATgetArgument(p_22, 1);
        {
          ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
          if(((o_22 != NULL) && (o_22 != r_22)))
            _fail(r_22);
          else
            o_22 = r_22;
          {
            t = not_null(q_22);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  t_22 = t;
                  l_22 :
                  if(match_cons(t_22, sym_WaitStatus_3))
                    {
                      u_22 = ATgetArgument(t_22, 0);
                      v_22 = ATgetArgument(t_22, 1);
                      w_22 = ATgetArgument(t_22, 2);
                      m_22 :
                      if(match_int(u_22, 0))
                        {
                          t = not_null(o_22);
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
  t = fork_2(t, a_102, e_8);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym__2))
    {
      c_23 = ATgetArgument(b_23, 0);
      d_23 = ATgetArgument(b_23, 1);
      {
        ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_23), not_null(d_23));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, f_8);
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
  ATerm j_23 = NULL;
  ATerm f_40;
  f_40 = t;
  {
    ATerm k_23 = NULL;
    t = v_108(t);
    {
      t = xtc_find_warning_0(t);
      {
        k_23 = t;
        if(((j_23 != NULL) && (j_23 != k_23)))
          _fail(k_23);
        else
          j_23 = k_23;
      }
    }
  }
  t = f_40;
  {
    ATerm g_40;
    g_40 = t;
    {
      ATerm l_23 = NULL;
      ATerm m_23 = NULL;
      m_23 = t;
      if(((l_23 != NULL) && (l_23 != m_23)))
        _fail(m_23);
      else
        l_23 = m_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(l_23));
        t = call_0(t);
      }
    }
    t = g_40;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym__2))
    {
      v_23 = ATgetArgument(u_23, 0);
      w_23 = ATgetArgument(u_23, 1);
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
        ATerm h_40;
        h_40 = t;
        {
          ATerm c_24 = NULL;
          ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
          t = k_97(t);
          {
            c_24 = t;
            {
              if(((z_23 != NULL) && (z_23 != c_24)))
                _fail(c_24);
              else
                z_23 = c_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_23), not_null(v_23), not_null(w_23));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_40 = t;
                    int o_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), term_c_29);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(o_40);
                      }
                    else
                      {
                        t = i_40;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_24 = t;
                      s_23 :
                      if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
                        {
                          e_24 = ATgetFirst((ATermList) d_24);
                          f_24 = (ATerm) ATgetNext((ATermList) d_24);
                          {
                            if(((a_24 != NULL) && (a_24 != e_24)))
                              _fail(e_24);
                            else
                              a_24 = e_24;
                            {
                              if(((b_24 != NULL) && (b_24 != f_24)))
                                _fail(f_24);
                              else
                                b_24 = f_24;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_23), term_c_29, (ATerm) ATinsert(CheckATermList(not_null(b_24)), (ATerm) ATinsert(CheckATermList(not_null(a_24)), not_null(v_23))));
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
        t = h_40;
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
  ATerm p_40;
  p_40 = t;
  {
    t = w_98(t);
    {
      ATerm m_8 (ATerm t)
      {
        t = term_u_40;
        return(t);
      }
      t = debug_1(t, m_8);
    }
  }
  t = p_40;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  ATerm w_24 (ATerm t)
  {
    ATerm v_40 = t;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
        r_24 = t;
        l_24 :
        if(match_cons(r_24, sym__2))
          {
            s_24 = ATgetArgument(r_24, 0);
            t_24 = ATgetArgument(r_24, 1);
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
        t = v_40;
      }
    {
      ATerm n_8 (ATerm t)
      {
        t = term_w_40;
        return(t);
      }
      t = obsolete_1(t, n_8);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_l_31);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm x_24 (ATerm t)
  {
    t = SSL_open_file(not_null(o_24), not_null(p_24));
    return(t);
  }
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym__2))
    {
      o_24 = ATgetArgument(n_24, 0);
      p_24 = ATgetArgument(n_24, 1);
      {
        ATerm b_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_24(t);
            ;
            LocalPopChoice(c_41);
          }
        else
          {
            t = b_41;
            t = x_24(t);
          }
      }
    }
  else
    {
      t = w_24(t);
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
  ATerm z_24 = NULL;
  ATerm a_25 = NULL;
  t = term_m_28;
  {
    t = new_0(t);
    {
      a_25 = t;
      if(((z_24 != NULL) && (z_24 != a_25)))
        _fail(a_25);
      else
        z_24 = a_25;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), term_e_41);
    {
      t = conc_strings_0(t);
      {
        ATerm o_8 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, o_8);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm e_25 = NULL;
  t = new_file_0(t);
  {
    e_25 = t;
    {
      ATerm h_41;
      h_41 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_l_31);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_m_28);
            {
              ATerm p_8 (ATerm t)
              {
                t = term_b_29;
                return(t);
              }
              t = assert_1(t, p_8);
            }
          }
        }
      }
      t = h_41;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_stdin_0))
    {
      ATerm q_25 = NULL;
      ATerm r_25 = NULL;
      ATerm s_25 = NULL;
      t = xtc_new_file_0(t);
      {
        r_25 = t;
        {
          if(((q_25 != NULL) && (q_25 != r_25)))
            _fail(r_25);
          else
            q_25 = r_25;
          {
            ATerm t_25 = NULL;
            t = p_0(t);
            {
              t_25 = t;
              if(((s_25 != NULL) && (s_25 != t_25)))
                _fail(t_25);
              else
                s_25 = t_25;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_25)), term_v_21));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(q_25);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_25));
    }
  else
    {
      if(match_cons(o_25, sym_FILE_1))
        {
          p_25 = ATgetArgument(o_25, 0);
          {
            ATerm v_25 = NULL;
            ATerm w_25 = NULL;
            t = not_null(p_25);
            {
              ATerm x_25 = NULL;
              t = xtc_new_file_0(t);
              {
                w_25 = t;
                {
                  if(((v_25 != NULL) && (v_25 != w_25)))
                    _fail(w_25);
                  else
                    v_25 = w_25;
                  {
                    ATerm y_25 = NULL;
                    t = p_0(t);
                    {
                      y_25 = t;
                      if(((x_25 != NULL) && (x_25 != y_25)))
                        _fail(y_25);
                      else
                        x_25 = y_25;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_25)), term_v_21), not_null(p_25)), term_i_41));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(v_25);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_25));
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
  ATerm j_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym_stdin_0))
    {
      ATerm l_26 = NULL,n_26 = NULL;
      ATerm l_41;
      l_41 = t;
      {
        ATerm m_26 = NULL;
        t = SSLgetAnnotations(not_null(j_26));
        {
          m_26 = t;
          if(((l_26 != NULL) && (l_26 != m_26)))
            _fail(m_26);
          else
            l_26 = m_26;
        }
      }
      t = l_41;
      {
        ATerm o_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(l_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        t = not_null(n_26);
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
  ATerm x_26 = NULL,y_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym_FILE_1))
    {
      y_26 = ATgetArgument(x_26, 0);
      {
        ATerm b_27 = NULL,d_27 = NULL;
        ATerm c_27 = NULL;
        t = SSLgetAnnotations(not_null(x_26));
        {
          c_27 = t;
          if(((b_27 != NULL) && (b_27 != c_27)))
            _fail(c_27);
          else
            b_27 = c_27;
        }
        {
          t = not_null(y_26);
          {
            ATerm f_27 = NULL;
            t = e_71(t);
            {
              d_27 = t;
              {
                ATerm g_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(d_27)), not_null(b_27));
                {
                  g_27 = t;
                  if(((f_27 != NULL) && (f_27 != g_27)))
                    _fail(g_27);
                  else
                    f_27 = g_27;
                }
                t = not_null(f_27);
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
  ATerm m_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(t_41);
        }
      else
        {
          t = s_41;
          t = stdin_0(t);
        }
      LocalPopChoice(r_41);
      t = xtc_transform_file_2(t, x_108, y_108);
    }
  else
    {
      t = m_41;
      t = xtc_transform_term_2(t, x_108, y_108);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm u_41;
    u_41 = t;
    {
      ATerm m_27 = NULL;
      ATerm n_27 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), term_k_26);
        t = geq_0(t);
      }
    }
    t = u_41;
    t = i_100(t);
    return(t);
  }
  t = try_1(t, s_8);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_95 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_8 (ATerm t)
    {
      ATerm a_42 = t;
      int b_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, t_8);
          ;
          LocalPopChoice(b_42);
        }
      else
        {
          t = a_42;
          {
            ATerm e_42 = t;
            int f_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_8 (ATerm t)
                {
                  ATerm v_27 = NULL;
                  v_27 = t;
                  p_27 :
                  if(!(match_int(v_27, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, w_8, _id);
                ;
                LocalPopChoice(f_42);
              }
            else
              {
                t = e_42;
                {
                  ATerm x_8 (ATerm t)
                  {
                    ATerm j_28 = NULL;
                    j_28 = t;
                    q_27 :
                    if(!(match_int(j_28, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, x_8, o_95);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, t_8);
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
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_FILE_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm t_28 = NULL,u_28 = NULL;
        ATerm v_28 = NULL;
        t = not_null(r_28);
        {
          ATerm w_28 = NULL;
          t = basename_0(t);
          {
            v_28 = t;
            {
              if(((t_28 != NULL) && (t_28 != v_28)))
                _fail(v_28);
              else
                t_28 = v_28;
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm b_9 (ATerm t)
                  {
                    t = term_k_42;
                    return(t);
                  }
                  t = debug_1(t, b_9);
                  return(t);
                }
                t = if_verbose3_1(t, a_9);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_42, not_null(t_28));
                  {
                    t = set_config_0(t);
                    {
                      ATerm m_42 = t;
                      int n_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_v_21;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          ;
                          LocalPopChoice(n_42);
                        }
                      else
                        {
                          t = m_42;
                          t = not_null(t_28);
                        }
                      {
                        w_28 = t;
                        {
                          if(((u_28 != NULL) && (u_28 != w_28)))
                            _fail(w_28);
                          else
                            u_28 = w_28;
                          {
                            ATerm c_9 (ATerm t)
                            {
                              ATerm h_9 (ATerm t)
                              {
                                t = term_q_42;
                                return(t);
                              }
                              t = debug_1(t, h_9);
                              return(t);
                            }
                            t = if_verbose3_1(t, c_9);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_p_29, not_null(u_28));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_28));
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
    ATerm i_9 (ATerm t)
    {
      t = term_r_42;
      return(t);
    }
    ATerm j_9 (ATerm t)
    {
      ATerm e_29 = NULL,g_29 = NULL,i_29 = NULL,k_29 = NULL;
      ATerm s_42;
      s_42 = t;
      {
        ATerm f_29 = NULL;
        t = dep_name_0(t);
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
      }
      t = s_42;
      {
        ATerm u_42;
        u_42 = t;
        {
          ATerm h_29 = NULL;
          t = pass_verbose_0(t);
          {
            h_29 = t;
            if(((g_29 != NULL) && (g_29 != h_29)))
              _fail(h_29);
            else
              g_29 = h_29;
          }
        }
        t = u_42;
        {
          ATerm w_42;
          w_42 = t;
          {
            ATerm j_29 = NULL;
            t = pass_keep_0(t);
            {
              j_29 = t;
              if(((i_29 != NULL) && (i_29 != j_29)))
                _fail(j_29);
              else
                i_29 = j_29;
            }
          }
          t = w_42;
          {
            ATerm l_29 = NULL;
            t = term_x_42;
            {
              t = get_config_0(t);
              {
                l_29 = t;
                if(((k_29 != NULL) && (k_29 != l_29)))
                  _fail(l_29);
                else
                  k_29 = l_29;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_29)), not_null(g_29)), not_null(k_29)), not_null(e_29));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, i_9, j_9);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm n_9 (ATerm t)
    {
      t = term_z_42;
      return(t);
    }
    t = debug_1(t, n_9);
    return(t);
  }
  t = if_verbose2_1(t, m_9);
  {
    ATerm q_9 (ATerm t)
    {
      ATerm u_9 (ATerm t)
      {
        ATerm r_29 = NULL;
        ATerm s_29 = NULL;
        s_29 = t;
        if(((r_29 != NULL) && (r_29 != s_29)))
          _fail(s_29);
        else
          r_29 = s_29;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(CheckATermList(not_null(r_29)), term_a_43));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, u_9);
      return(t);
    }
    ATerm r_9 (ATerm t)
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
    t = profile_p__2(t, q_9, r_9);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
    {
      c_30 = ATgetFirst((ATermList) b_30);
      d_30 = (ATerm) ATgetNext((ATermList) b_30);
      t = not_null(d_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym__2))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      {
        ATerm b_43;
        b_43 = t;
        {
          ATerm t_30 = NULL;
          ATerm u_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(m_30));
          {
            ATerm c_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(h_43);
              }
            else
              {
                t = c_43;
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_30), not_null(m_30), not_null(t_30));
            t = table_put_0(t);
          }
        }
        t = b_43;
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
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm i_43;
  i_43 = t;
  {
    ATerm e_31 = NULL;
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
    t = h_97(t);
    {
      e_31 = t;
      {
        if(((d_31 != NULL) && (d_31 != e_31)))
          _fail(e_31);
        else
          d_31 = e_31;
        {
          ATerm j_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), term_c_29);
              t = table_get_0(t);
              ;
              LocalPopChoice(l_43);
            }
          else
            {
              t = j_43;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_31 = t;
            a_31 :
            if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
              {
                g_31 = ATgetFirst((ATermList) f_31);
                h_31 = (ATerm) ATgetNext((ATermList) f_31);
                {
                  if(((c_31 != NULL) && (c_31 != g_31)))
                    _fail(g_31);
                  else
                    c_31 = g_31;
                  {
                    if(((b_31 != NULL) && (b_31 != h_31)))
                      _fail(h_31);
                    else
                      b_31 = h_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_31), term_c_29, not_null(b_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_31);
                          {
                            ATerm v_9 (ATerm t)
                            {
                              ATerm i_31 = NULL;
                              i_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), not_null(i_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, v_9);
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
  t = i_43;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = SSL_remove(not_null(o_31));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm t_31 = NULL;
  ATerm t_43;
  t_43 = t;
  {
    ATerm u_31 = NULL;
    ATerm v_31 = NULL;
    t = g_97(t);
    {
      u_31 = t;
      {
        if(((t_31 != NULL) && (t_31 != u_31)))
          _fail(u_31);
        else
          t_31 = u_31;
        {
          ATerm w_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), term_c_29);
          {
            ATerm u_43 = t;
            int v_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(v_43);
              }
            else
              {
                t = u_43;
                t = (ATerm) ATempty;
              }
            {
              w_31 = t;
              if(((v_31 != NULL) && (v_31 != w_31)))
                _fail(w_31);
              else
                v_31 = w_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_31), term_c_29, (ATerm) ATinsert(CheckATermList(not_null(v_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_43;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm h_108 (ATerm))
{
  ATerm b_32 = NULL,c_32 = NULL;
  ATerm w_9 (ATerm t)
  {
    t = term_b_29;
    return(t);
  }
  t = begin_scope_1(t, w_9);
  {
    ATerm b_10 (ATerm t)
    {
      ATerm a_44;
      a_44 = t;
      {
        ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_29;
            t = table_get_0(t);
            ;
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          d_32 = t;
          a_32 :
          if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
            {
              e_32 = ATgetFirst((ATermList) d_32);
              f_32 = (ATerm) ATgetNext((ATermList) d_32);
              {
                if(((c_32 != NULL) && (c_32 != e_32)))
                  _fail(e_32);
                else
                  c_32 = e_32;
                {
                  if(((b_32 != NULL) && (b_32 != f_32)))
                    _fail(f_32);
                  else
                    b_32 = f_32;
                  {
                    t = not_null(c_32);
                    {
                      ATerm c_10 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, c_10);
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
      t = a_44;
      {
        ATerm d_10 (ATerm t)
        {
          t = term_b_29;
          return(t);
        }
        t = end_scope_1(t, d_10);
      }
      return(t);
    }
    t = restore_always_2(t, h_108, b_10);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm k_108 (ATerm))
{
  ATerm g_10 (ATerm t)
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL;
        ATerm j_32 = NULL;
        t = term_i_41;
        {
          t = get_config_0(t);
          {
            j_32 = t;
            if(((i_32 != NULL) && (i_32 != j_32)))
              _fail(j_32);
            else
              i_32 = j_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_32));
        ;
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = term_k_31;
      }
    t = k_108(t);
    return(t);
  }
  t = xtc_temp_files_1(t, g_10);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm h_10 (ATerm t)
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
  t = xtc_input_1(t, h_10);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm k_10 (ATerm t)
  {
    ATerm k_44;
    k_44 = t;
    {
      ATerm m_32 = NULL;
      ATerm n_32 = NULL;
      t = term_h_21;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_32), term_c_26);
        t = geq_0(t);
      }
    }
    t = k_44;
    t = g_100(t);
    return(t);
  }
  t = try_1(t, k_10);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  t = SSL_TicksToSeconds(not_null(q_32));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_32), not_null(z_32));
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  g_33 :
  if(match_cons(h_33, sym__2))
    {
      i_33 = ATgetArgument(h_33, 0);
      j_33 = ATgetArgument(h_33, 1);
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_33), not_null(j_33));
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
            t = SSL_addr(not_null(i_33), not_null(j_33));
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym__4))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      s_33 = ATgetArgument(p_33, 2);
      t_33 = ATgetArgument(p_33, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
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
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        ATerm n_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(c_34), not_null(d_34));
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = n_44;
            t = SSL_subtr(not_null(c_34), not_null(d_34));
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
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      v_34 = ATgetArgument(p_34, 1);
      n_34 :
      if(match_cons(q_34, sym__4))
        {
          r_34 = ATgetArgument(q_34, 0);
          s_34 = ATgetArgument(q_34, 1);
          t_34 = ATgetArgument(q_34, 2);
          u_34 = ATgetArgument(q_34, 3);
          o_34 :
          if(match_cons(v_34, sym__4))
            {
              w_34 = ATgetArgument(v_34, 0);
              x_34 = ATgetArgument(v_34, 1);
              y_34 = ATgetArgument(v_34, 2);
              z_34 = ATgetArgument(v_34, 3);
              {
                ATerm n_35 = NULL,p_35 = NULL,r_35 = NULL,t_35 = NULL;
                ATerm s_44;
                s_44 = t;
                {
                  ATerm o_35 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_34), not_null(w_34));
                  {
                    t = subt_0(t);
                    {
                      o_35 = t;
                      if(((n_35 != NULL) && (n_35 != o_35)))
                        _fail(o_35);
                      else
                        n_35 = o_35;
                    }
                  }
                }
                t = s_44;
                {
                  ATerm t_44;
                  t_44 = t;
                  {
                    ATerm q_35 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(x_34));
                    {
                      t = subt_0(t);
                      {
                        q_35 = t;
                        if(((p_35 != NULL) && (p_35 != q_35)))
                          _fail(q_35);
                        else
                          p_35 = q_35;
                      }
                    }
                  }
                  t = t_44;
                  {
                    ATerm u_44;
                    u_44 = t;
                    {
                      ATerm s_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_34), not_null(y_34));
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
                    t = u_44;
                    {
                      ATerm u_35 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), not_null(z_34));
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
                      t = (ATerm) ATmakeAppl(sym__4, not_null(n_35), not_null(p_35), not_null(r_35), not_null(t_35));
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
  ATerm g_36 = NULL;
  ATerm v_44;
  v_44 = t;
  {
    ATerm h_36 = NULL;
    t = times_0(t);
    {
      h_36 = t;
      if(((g_36 != NULL) && (g_36 != h_36)))
        _fail(h_36);
      else
        g_36 = h_36;
    }
  }
  t = v_44;
  {
    t = b_104(t);
    {
      ATerm w_44;
      w_44 = t;
      {
        ATerm i_36 = NULL,k_36 = NULL,m_36 = NULL;
        ATerm j_36 = NULL;
        t = times_0(t);
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), not_null(g_36));
          {
            t = diff_times_0(t);
            {
              ATerm x_44;
              x_44 = t;
              {
                ATerm l_36 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    l_36 = t;
                    if(((k_36 != NULL) && (k_36 != l_36)))
                      _fail(l_36);
                    else
                      k_36 = l_36;
                  }
                }
              }
              t = x_44;
              {
                ATerm n_36 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    n_36 = t;
                    if(((m_36 != NULL) && (m_36 != n_36)))
                      _fail(n_36);
                    else
                      m_36 = n_36;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_36)), term_z_44), not_null(k_36)), term_y_44);
                  t = a_104(t);
                }
              }
            }
          }
        }
      }
      t = w_44;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm c_45;
  c_45 = t;
  {
    ATerm u_36 = NULL,w_36 = NULL;
    ATerm d_45;
    d_45 = t;
    {
      ATerm v_36 = NULL;
      t = p_98(t);
      {
        v_36 = t;
        if(((u_36 != NULL) && (u_36 != v_36)))
          _fail(v_36);
        else
          u_36 = v_36;
      }
    }
    t = d_45;
    {
      ATerm x_36 = NULL;
      x_36 = t;
      if(((w_36 != NULL) && (w_36 != x_36)))
        _fail(x_36);
      else
        w_36 = x_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_36)), not_null(u_36)));
        t = printnl_0(t);
      }
    }
  }
  t = c_45;
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_45);
    }
  else
    {
      t = e_45;
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_10);
            ;
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
            {
              ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
              g_37 = t;
              f_37 :
              if(match_cons(g_37, sym_Path_1))
                {
                  h_37 = ATgetArgument(g_37, 0);
                  t = not_null(h_37);
                }
              else
                {
                  if(match_cons(g_37, sym_Var_1))
                    {
                      h_37 = ATgetArgument(g_37, 0);
                      {
                        t = not_null(h_37);
                        {
                          ATerm l_45 = t;
                          int m_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(m_45);
                            }
                          else
                            {
                              t = l_45;
                              {
                                ATerm o_10 (ATerm t)
                                {
                                  t = term_o_45;
                                  return(t);
                                }
                                t = debug_1(t, o_10);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_37, sym_Prefix_2))
                        {
                          h_37 = ATgetArgument(g_37, 0);
                          i_37 = ATgetArgument(g_37, 1);
                          {
                            ATerm n_37 = NULL,p_37 = NULL;
                            ATerm r_45;
                            r_45 = t;
                            {
                              ATerm o_37 = NULL;
                              t = not_null(h_37);
                              {
                                t = eval_config_0(t);
                                {
                                  o_37 = t;
                                  if(((n_37 != NULL) && (n_37 != o_37)))
                                    _fail(o_37);
                                  else
                                    n_37 = o_37;
                                }
                              }
                            }
                            t = r_45;
                            {
                              ATerm s_37 = NULL;
                              t = not_null(i_37);
                              {
                                t = eval_config_0(t);
                                {
                                  s_37 = t;
                                  if(((p_37 != NULL) && (p_37 != s_37)))
                                    _fail(s_37);
                                  else
                                    p_37 = s_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), not_null(p_37));
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
  ATerm a_38 = NULL;
  a_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_45, not_null(a_38));
    {
      t = table_get_0(t);
      {
        ATerm p_10 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_45;
            u_45 = t;
            {
              ATerm c_38 = NULL;
              ATerm d_38 = NULL;
              d_38 = t;
              if(((c_38 != NULL) && (c_38 != d_38)))
                _fail(d_38);
              else
                c_38 = d_38;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_45, not_null(a_38), not_null(c_38));
                t = table_put_0(t);
              }
            }
            t = u_45;
          }
          return(t);
        }
        t = try_1(t, p_10);
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
  ATerm v_45;
  v_45 = t;
  {
    t = error_0(t);
    {
      t = term_c_26;
      t = exit_0(t);
    }
  }
  t = v_45;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_45;
      y_45 = t;
      {
        ATerm i_38 = NULL;
        ATerm j_38 = NULL;
        t = term_z_45;
        {
          t = get_config_0(t);
          {
            j_38 = t;
            if(((i_38 != NULL) && (i_38 != j_38)))
              _fail(j_38);
            else
              i_38 = j_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_46), term_g_46), term_f_46), term_e_46), term_d_46), term_c_46), term_b_46), not_null(i_38)), term_a_46));
          t = printnl_0(t);
        }
      }
      t = y_45;
      ;
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      {
        ATerm k_38 = NULL;
        k_38 = t;
        h_38 :
        if(!(match_string(k_38, "0.9.3")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm i_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      ;
      LocalPopChoice(n_46);
    }
  else
    {
      t = i_46;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym__2))
    {
      p_38 = ATgetArgument(o_38, 0);
      q_38 = ATgetArgument(o_38, 1);
      t = SSL_copy(not_null(p_38), not_null(q_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t = SSL_table_keys(not_null(v_38));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_10 (ATerm t)
      {
        ATerm d_39 = NULL;
        ATerm f_39 = NULL;
        d_39 = t;
        {
          ATerm g_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_39), not_null(d_39));
          {
            t = table_get_0(t);
            {
              g_39 = t;
              if(((f_39 != NULL) && (f_39 != g_39)))
                _fail(g_39);
              else
                f_39 = g_39;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_39), not_null(f_39));
        }
        return(t);
      }
      t = map_1(t, s_10);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm t_10 (ATerm t)
  {
    ATerm o_46;
    o_46 = t;
    {
      ATerm l_39 = NULL;
      ATerm m_39 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_39), term_s_38);
        t = geq_0(t);
      }
    }
    t = o_46;
    t = k_100(t);
    return(t);
  }
  t = try_1(t, t_10);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_46;
  r_46 = t;
  {
    ATerm p_39 = NULL;
    ATerm q_39 = NULL;
    q_39 = t;
    if(((p_39 != NULL) && (p_39 != q_39)))
      _fail(q_39);
    else
      p_39 = q_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(p_39));
      t = printnl_0(t);
    }
  }
  t = r_46;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm w_39 = NULL;
  ATerm y_39 = NULL,z_39 = NULL;
  w_39 = t;
  {
    ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_s_46, (ATerm) ATmakeAppl(sym_Tool_1, not_null(w_39)));
    {
      t = table_get_0(t);
      {
        a_40 = t;
        u_39 :
        if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
          {
            b_40 = ATgetFirst((ATermList) a_40);
            e_40 = (ATerm) ATgetNext((ATermList) a_40);
            v_39 :
            if(match_cons(b_40, sym__2))
              {
                c_40 = ATgetArgument(b_40, 0);
                d_40 = ATgetArgument(b_40, 1);
                {
                  if(((y_39 != NULL) && (y_39 != c_40)))
                    _fail(c_40);
                  else
                    y_39 = c_40;
                  if(((z_39 != NULL) && (z_39 != d_40)))
                    _fail(d_40);
                  else
                    z_39 = d_40;
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
    t = not_null(z_39);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym__2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm q_40 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_46, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_40)));
        {
          t = table_get_0(t);
          {
            ATerm w_10 (ATerm t)
            {
              ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
              r_40 = t;
              j_40 :
              if(match_cons(r_40, sym__2))
                {
                  s_40 = ATgetArgument(r_40, 0);
                  t_40 = ATgetArgument(r_40, 1);
                  {
                    if(((n_40 != NULL) && (n_40 != s_40)))
                      _fail(s_40);
                    else
                      n_40 = s_40;
                    if(((q_40 != NULL) && (q_40 != t_40)))
                      _fail(t_40);
                    else
                      q_40 = t_40;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_10);
          }
        }
        t = not_null(q_40);
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
  ATerm t_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(v_46);
    }
  else
    {
      t = t_46;
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_10 (ATerm t)
            {
              t = filter_1(t, v_93);
              return(t);
            }
            t = Cons_2(t, v_93, x_10);
            ;
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
            {
              ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
              y_40 = t;
              x_40 :
              if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
                {
                  z_40 = ATgetFirst((ATermList) y_40);
                  a_41 = (ATerm) ATgetNext((ATermList) y_40);
                  {
                    t = not_null(a_41);
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
  ATerm d_41 (ATerm t)
  {
    ATerm a_11 (ATerm t)
    {
      t = c_80(t);
      t = d_41(t);
      return(t);
    }
    t = try_1(t, a_11);
    return(t);
  }
  t = d_41(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm y_46;
  y_46 = t;
  {
    ATerm b_11 (ATerm t)
    {
      t = term_a_47;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm b_47 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_47;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, b_11);
  }
  t = y_46;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm e_47;
  e_47 = t;
  {
    ATerm f_41 = NULL;
    ATerm g_41 = NULL;
    g_41 = t;
    if(((f_41 != NULL) && (f_41 != g_41)))
      _fail(g_41);
    else
      f_41 = g_41;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, not_null(f_41)));
      t = printnl_0(t);
    }
  }
  t = e_47;
  return(t);
}
ATerm say_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm f_47;
  f_47 = t;
  {
    t = t_98(t);
    t = debug_0(t);
  }
  t = f_47;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm e_11 (ATerm t)
  {
    ATerm i_47;
    i_47 = t;
    {
      ATerm j_41 = NULL;
      ATerm k_41 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), term_u_26);
        t = geq_0(t);
      }
    }
    t = i_47;
    t = j_100(t);
    return(t);
  }
  t = try_1(t, e_11);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        ATerm j_47;
        j_47 = t;
        {
          ATerm m_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_41), not_null(q_41));
              ;
              LocalPopChoice(n_47);
            }
          else
            {
              t = m_47;
              t = SSL_gtr(not_null(p_41), not_null(q_41));
            }
        }
        t = j_47;
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
  ATerm w_41 = NULL;
  ATerm o_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
      x_41 = t;
      v_41 :
      if(match_cons(x_41, sym__2))
        {
          y_41 = ATgetArgument(x_41, 0);
          z_41 = ATgetArgument(x_41, 1);
          {
            if(((w_41 != NULL) && (w_41 != y_41)))
              _fail(y_41);
            else
              w_41 = y_41;
            if(((w_41 != NULL) && (w_41 != z_41)))
              _fail(z_41);
            else
              w_41 = z_41;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(p_47);
    }
  else
    {
      t = o_47;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm f_11 (ATerm t)
  {
    ATerm q_47;
    q_47 = t;
    {
      ATerm c_42 = NULL;
      ATerm d_42 = NULL;
      t = term_h_21;
      {
        t = get_config_0(t);
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_42), term_s_32);
        t = geq_0(t);
      }
    }
    t = q_47;
    t = l_100(t);
    return(t);
  }
  t = try_1(t, f_11);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym__2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      if(((i_42 != NULL) && (i_42 != j_42)))
        _fail(j_42);
      else
        i_42 = j_42;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm p_42 = NULL,t_42 = NULL,v_42 = NULL;
  p_42 = t;
  o_42 :
  if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
    {
      t_42 = ATgetFirst((ATermList) p_42);
      v_42 = (ATerm) ATgetNext((ATermList) p_42);
      {
        t = z_90(t);
        {
          ATerm g_11 (ATerm t)
          {
            ATerm y_42 = NULL;
            y_42 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_42), not_null(y_42));
              t = y_90(t);
            }
            return(t);
          }
          t = fetch_1(t, g_11);
        }
        t = not_null(v_42);
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
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym__2))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      {
        t = not_null(f_43);
        {
          ATerm k_43 (ATerm t)
          {
            ATerm r_47 = t;
            int u_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_43);
                ;
                LocalPopChoice(u_47);
              }
            else
              {
                t = r_47;
                {
                  ATerm v_47 = t;
                  int w_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_11 (ATerm t)
                      {
                        t = not_null(g_43);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_90, h_11);
                      t = k_43(t);
                      ;
                      LocalPopChoice(w_47);
                    }
                  else
                    {
                      t = v_47;
                      t = Cons_2(t, _id, k_43);
                    }
                }
              }
            return(t);
          }
          t = k_43(t);
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
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym__3))
    {
      q_43 = ATgetArgument(p_43, 0);
      r_43 = ATgetArgument(p_43, 1);
      s_43 = ATgetArgument(p_43, 2);
      {
        ATerm x_47;
        x_47 = t;
        {
          ATerm w_43 = NULL;
          ATerm x_43 = NULL,z_43 = NULL;
          ATerm y_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_43), not_null(r_43));
          {
            ATerm y_47 = t;
            int z_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(z_47);
              }
            else
              {
                t = y_47;
                t = (ATerm) ATempty;
              }
            {
              y_43 = t;
              if(((x_43 != NULL) && (x_43 != y_43)))
                _fail(y_43);
              else
                x_43 = y_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), not_null(s_43));
            {
              t = union_0(t);
              {
                z_43 = t;
                if(((w_43 != NULL) && (w_43 != z_43)))
                  _fail(z_43);
                else
                  w_43 = z_43;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_43), not_null(r_43), not_null(w_43));
            t = set_0(t);
          }
        }
        t = x_47;
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
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        t = not_null(j_44);
        {
          ATerm o_11 (ATerm t)
          {
            ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
            o_44 = t;
            f_44 :
            if(match_cons(o_44, sym__2))
              {
                p_44 = ATgetArgument(o_44, 0);
                q_44 = ATgetArgument(o_44, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_44), not_null(p_44), not_null(q_44));
                  t = j_105(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_11);
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
  ATerm a_45 = NULL;
  ATerm b_45 = NULL;
  b_45 = t;
  if(((a_45 != NULL) && (a_45 != b_45)))
    _fail(b_45);
  else
    a_45 = b_45;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), (ATerm) ATinsert(ATempty, term_a_48));
    t = access_0(t);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  ATerm n_45 (ATerm t)
  {
    t = SSL_fclose(not_null(h_45));
    return(t);
  }
  h_45 = t;
  f_45 :
  if(match_cons(h_45, sym_Stream_1))
    {
      g_45 = ATgetArgument(h_45, 0);
      {
        ATerm b_48 = t;
        int c_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(g_45));
            ;
            LocalPopChoice(c_48);
          }
        else
          {
            t = b_48;
            t = n_45(t);
          }
      }
    }
  else
    {
      t = n_45(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm q_45 = NULL,t_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_Stream_1))
    {
      t_45 = ATgetArgument(q_45, 0);
      t = SSL_read_term_from_stream(not_null(t_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        ATerm p_46 = NULL;
        t = SSL_fopen(not_null(l_46), not_null(m_46));
        {
          ATerm q_46 = NULL;
          q_46 = t;
          if(((p_46 != NULL) && (p_46 != q_46)))
            _fail(q_46);
          else
            p_46 = q_46;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_46));
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
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_is_string(not_null(u_46));
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm c_47 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm d_47 = NULL;
    d_47 = t;
    if(((c_47 != NULL) && (c_47 != d_47)))
      _fail(d_47);
    else
      c_47 = d_47;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_47));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm g_47 = NULL;
  t = SSL_stdout_stream();
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
ATerm stderr_stream_0 (ATerm t)
{
  ATerm k_47 = NULL;
  t = SSL_stderr_stream();
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
ATerm stdio_stream_0 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(t_47, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(t_47, sym_stdin_0))
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
  ATerm l_48 = NULL;
  ATerm p_48 = NULL,q_48 = NULL;
  l_48 = t;
  {
    ATerm r_48 = NULL;
    ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
    t = not_null(l_48);
    {
      r_48 = t;
      {
        t = SSL_explode_term(not_null(r_48));
        {
          t_48 = t;
          e_48 :
          if(match_cons(t_48, sym__2))
            {
              u_48 = ATgetArgument(t_48, 0);
              v_48 = ATgetArgument(t_48, 1);
              j_48 :
              if(match_string(u_48, ""))
                {
                  k_48 :
                  if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
                    {
                      w_48 = ATgetFirst((ATermList) v_48);
                      x_48 = (ATerm) ATgetNext((ATermList) v_48);
                      {
                        if(((q_48 != NULL) && (q_48 != w_48)))
                          _fail(w_48);
                        else
                          q_48 = w_48;
                        if(((p_48 != NULL) && (p_48 != x_48)))
                          _fail(x_48);
                        else
                          p_48 = x_48;
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
    t = not_null(q_48);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym__2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      {
        ATerm d_48 = t;
        int f_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(f_48);
          }
        else
          {
            t = d_48;
            {
              ATerm g_48 = t;
              int h_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_11 (ATerm t)
                  {
                    ATerm i_49 = NULL,j_49 = NULL;
                    i_49 = t;
                    d_49 :
                    if(match_cons(i_49, sym_Path_1))
                      {
                        j_49 = ATgetArgument(i_49, 0);
                        t = not_null(j_49);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, p_11, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(h_48);
                }
              else
                {
                  t = g_48;
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
  ATerm r_49 = NULL;
  ATerm i_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_49 = NULL;
      ATerm q_49 = NULL;
      q_49 = t;
      if(((p_49 != NULL) && (p_49 != q_49)))
        _fail(q_49);
      else
        p_49 = q_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_49), term_n_48);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(m_48);
    }
  else
    {
      t = i_48;
      {
        ATerm q_11 (ATerm t)
        {
          t = term_o_48;
          return(t);
        }
        t = debug_1(t, q_11);
        _fail(t);
      }
    }
  {
    ATerm s_48;
    s_48 = t;
    {
      ATerm s_49 = NULL;
      t = read_from_stream_0(t);
      {
        s_49 = t;
        if(((r_49 != NULL) && (r_49 != s_49)))
          _fail(s_49);
        else
          r_49 = s_49;
      }
    }
    t = s_48;
    {
      t = fclose_0(t);
      t = not_null(r_49);
    }
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(match_cons(x_49, sym__2))
    {
      y_49 = ATgetArgument(x_49, 0);
      z_49 = ATgetArgument(x_49, 1);
      t = SSL_access(not_null(y_49), not_null(z_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm e_50 = NULL;
  ATerm f_50 = NULL;
  f_50 = t;
  if(((e_50 != NULL) && (e_50 != f_50)))
    _fail(f_50);
  else
    e_50 = f_50;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_50), (ATerm) ATinsert(ATempty, term_y_48));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(a_49);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = z_48;
      {
        ATerm b_49 = t;
        int c_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_49 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_49;
              }
            {
              ATerm r_11 (ATerm t)
              {
                t = term_l_49;
                return(t);
              }
              t = debug_1(t, r_11);
            }
            ;
            LocalPopChoice(c_49);
          }
        else
          {
            t = b_49;
            {
              ATerm u_11 (ATerm t)
              {
                t = term_m_49;
                return(t);
              }
              t = debug_1(t, u_11);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm j_50 = NULL;
  ATerm l_50 = NULL;
  j_50 = t;
  {
    ATerm v_11 (ATerm t)
    {
      ATerm y_11 (ATerm t)
      {
        t = term_n_49;
        return(t);
      }
      t = debug_1(t, y_11);
      return(t);
    }
    t = if_verbose5_1(t, v_11);
    {
      ATerm o_49 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_46, (ATerm) ATmakeAppl(sym_Imported_1, not_null(j_50)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_49;
        }
      {
        ATerm t_49;
        t_49 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_46, term_u_49, (ATerm) ATinsert(ATempty, not_null(j_50)));
          t = table_put_0(t);
        }
        t = t_49;
        {
          ATerm z_11 (ATerm t)
          {
            ATerm c_12 (ATerm t)
            {
              t = term_v_49;
              return(t);
            }
            t = debug_1(t, c_12);
            return(t);
          }
          t = if_verbose4_1(t, z_11);
          {
            t = read_repository_file_0(t);
            {
              ATerm d_12 (ATerm t)
              {
                ATerm g_12 (ATerm t)
                {
                  t = term_a_50;
                  return(t);
                }
                t = say_1(t, g_12);
                return(t);
              }
              t = if_verbose6_1(t, d_12);
              {
                ATerm m_50 = NULL;
                m_50 = t;
                if(((l_50 != NULL) && (l_50 != m_50)))
                  _fail(m_50);
                else
                  l_50 = m_50;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_46, not_null(l_50));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm h_12 (ATerm t)
                      {
                        ATerm i_12 (ATerm t)
                        {
                          t = term_b_50;
                          return(t);
                        }
                        t = say_1(t, i_12);
                        return(t);
                      }
                      t = if_verbose6_1(t, h_12);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_s_46, (ATerm)ATmakeAppl(sym_Imported_1, not_null(j_50)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm n_12 (ATerm t)
                            {
                              ATerm o_12 (ATerm t)
                              {
                                t = term_a_50;
                                return(t);
                              }
                              t = say_1(t, o_12);
                              return(t);
                            }
                            t = if_verbose4_1(t, n_12);
                          }
                        }
                      }
                    }
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
  ATerm q_50 = NULL;
  q_50 = t;
  t = SSL_getenv(not_null(q_50));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_50;
      t = get_config_0(t);
      ;
      LocalPopChoice(d_50);
    }
  else
    {
      t = c_50;
      {
        ATerm h_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_50;
            t = getenv_0(t);
            ;
            LocalPopChoice(i_50);
          }
        else
          {
            t = h_50;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm p_12 (ATerm t)
  {
    ATerm s_12 (ATerm t)
    {
      t = term_n_50;
      return(t);
    }
    t = debug_1(t, s_12);
    return(t);
  }
  t = if_verbose5_1(t, p_12);
  {
    ATerm o_50;
    o_50 = t;
    {
      ATerm p_50 = t;
      int r_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_50;
          t = table_get_0(t);
          ;
          LocalPopChoice(r_50);
        }
      else
        {
          t = p_50;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = o_50;
    {
      ATerm t_12 (ATerm t)
      {
        ATerm u_12 (ATerm t)
        {
          t = term_t_50;
          return(t);
        }
        t = debug_1(t, u_12);
        return(t);
      }
      t = if_verbose5_1(t, t_12);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 (ATerm t)
      {
        ATerm b_13 (ATerm t)
        {
          t = term_y_50;
          return(t);
        }
        t = debug_1(t, b_13);
        return(t);
      }
      t = if_verbose5_1(t, y_12);
      {
        t = xtc_load_0(t);
        {
          ATerm z_50 = t;
          int d_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(d_51);
            }
          else
            {
              t = z_50;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm c_13 (ATerm t)
            {
              ATerm d_13 (ATerm t)
              {
                t = term_y_50;
                return(t);
              }
              t = debug_1(t, d_13);
              return(t);
            }
            t = if_verbose5_1(t, c_13);
          }
        }
      }
      ;
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
        ATerm u_50 = NULL;
        ATerm v_50 = NULL;
        v_50 = t;
        if(((u_50 != NULL) && (u_50 != v_50)))
          _fail(v_50);
        else
          u_50 = v_50;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_51), not_null(u_50)), term_e_51);
          {
            t = error_0(t);
            {
              ATerm e_13 (ATerm t)
              {
                t = term_s_46;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm j_13 (ATerm t)
                    {
                      t = term_g_51;
                      return(t);
                    }
                    t = debug_1(t, j_13);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_13);
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
  ATerm b_51 = NULL,c_51 = NULL,h_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym__2))
    {
      c_51 = ATgetArgument(b_51, 0);
      h_51 = ATgetArgument(b_51, 1);
      {
        ATerm k_51 = NULL;
        ATerm o_51 = NULL,q_51 = NULL;
        ATerm p_51 = NULL;
        t = not_null(c_51);
        {
          ATerm i_51 = t;
          int j_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(j_51);
            }
          else
            {
              t = i_51;
              t = (ATerm) ATempty;
            }
          {
            p_51 = t;
            if(((o_51 != NULL) && (o_51 != p_51)))
              _fail(p_51);
            else
              o_51 = p_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_51), not_null(o_51));
          {
            t = conc_0(t);
            {
              q_51 = t;
              if(((k_51 != NULL) && (k_51 != q_51)))
                _fail(q_51);
              else
                k_51 = q_51;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_45, not_null(c_51), not_null(k_51));
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
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  z_51 = t;
  x_51 :
  if(match_string(z_51, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_51) == AT_LIST) && !(ATisEmpty(z_51))))
        {
          a_52 = ATgetFirst((ATermList) z_51);
          b_52 = (ATerm) ATgetNext((ATermList) z_51);
          y_51 :
          if(((ATgetType(b_52) == AT_LIST) && !(ATisEmpty(b_52))))
            {
              c_52 = ATgetFirst((ATermList) b_52);
              d_52 = (ATerm) ATgetNext((ATermList) b_52);
              {
                ATerm h_52 = NULL;
                ATerm l_51;
                l_51 = t;
                {
                  t = not_null(a_52);
                  t = l_0(t);
                }
                t = l_51;
                {
                  ATerm i_52 = NULL;
                  t = not_null(c_52);
                  {
                    t = m_0(t);
                    {
                      i_52 = t;
                      if(((h_52 != NULL) && (h_52 != i_52)))
                        _fail(i_52);
                      else
                        h_52 = i_52;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_52)), not_null(h_52));
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
  ATerm a_53 = NULL;
  a_53 = t;
  t = SSL_string_to_int(not_null(a_53));
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  ATerm m_51;
  m_51 = t;
  {
    ATerm m_53 = NULL,n_53 = NULL,t_53 = NULL;
    m_53 = t;
    g_53 :
    if(match_cons(m_53, sym__2))
      {
        n_53 = ATgetArgument(m_53, 0);
        t_53 = ATgetArgument(m_53, 1);
        {
          if(((h_53 != NULL) && (h_53 != n_53)))
            _fail(n_53);
          else
            h_53 = n_53;
          {
            if(((i_53 != NULL) && (i_53 != t_53)))
              _fail(t_53);
            else
              i_53 = t_53;
            t = SSL_table_remove(not_null(h_53), not_null(i_53));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_51;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  a_54 :
  if(match_cons(b_54, sym__2))
    {
      c_54 = ATgetArgument(b_54, 0);
      d_54 = ATgetArgument(b_54, 1);
      {
        ATerm n_51 = t;
        int r_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(c_54);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_s_45, not_null(c_54));
                t = table_remove_0(t);
              }
            }
            ;
            LocalPopChoice(r_51);
          }
        else
          {
            t = n_51;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(d_54));
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
  ATerm l_54 = NULL,m_54 = NULL,w_54 = NULL;
  l_54 = t;
  k_54 :
  if(match_cons(l_54, sym__2))
    {
      m_54 = ATgetArgument(l_54, 0);
      w_54 = ATgetArgument(l_54, 1);
      {
        ATerm z_54 = NULL;
        ATerm a_55 = NULL,c_55 = NULL;
        ATerm b_55 = NULL;
        t = not_null(m_54);
        {
          ATerm s_51 = t;
          int t_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(t_51);
            }
          else
            {
              t = s_51;
              t = (ATerm) ATempty;
            }
          {
            b_55 = t;
            if(((a_55 != NULL) && (a_55 != b_55)))
              _fail(b_55);
            else
              a_55 = b_55;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_55), not_null(w_54));
          {
            t = conc_0(t);
            {
              c_55 = t;
              if(((z_54 != NULL) && (z_54 != c_55)))
                _fail(c_55);
              else
                z_54 = c_55;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_45, not_null(m_54), not_null(z_54));
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
  ATerm u_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 (ATerm t)
      {
        ATerm f_57 = NULL;
        f_57 = t;
        g_55 :
        if(!(match_string(f_57, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_13 (ATerm t)
      {
        ATerm g_57 = NULL;
        ATerm q_57 = NULL;
        q_57 = t;
        if(((g_57 != NULL) && (g_57 != q_57)))
          _fail(q_57);
        else
          g_57 = q_57;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_41, not_null(g_57));
          t = set_config_0(t);
        }
        t = term_m_28;
        return(t);
      }
      ATerm m_13 (ATerm t)
      {
        t = term_w_51;
        return(t);
      }
      t = ArgOption_3(t, k_13, l_13, m_13);
      ;
      LocalPopChoice(v_51);
    }
  else
    {
      t = u_51;
      {
        ATerm e_52 = t;
        int f_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_13 (ATerm t)
            {
              ATerm r_57 = NULL;
              r_57 = t;
              i_55 :
              if(!(match_string(r_57, "-o")))
                {
                  if(!(match_string(r_57, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_13 (ATerm t)
            {
              ATerm s_57 = NULL;
              ATerm t_57 = NULL;
              t_57 = t;
              if(((s_57 != NULL) && (s_57 != t_57)))
                _fail(t_57);
              else
                s_57 = t_57;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_v_21, not_null(s_57));
                t = set_config_0(t);
              }
              t = term_m_28;
              return(t);
            }
            ATerm w_13 (ATerm t)
            {
              t = term_g_52;
              return(t);
            }
            t = ArgOption_3(t, p_13, v_13, w_13);
            ;
            LocalPopChoice(f_52);
          }
        else
          {
            t = e_52;
            {
              ATerm j_52 = t;
              int k_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_13 (ATerm t)
                  {
                    ATerm u_57 = NULL;
                    u_57 = t;
                    k_55 :
                    if(!(match_string(u_57, "-I")))
                      {
                        if(!(match_string(u_57, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm y_13 (ATerm t)
                  {
                    ATerm v_57 = NULL;
                    ATerm w_57 = NULL;
                    w_57 = t;
                    if(((v_57 != NULL) && (v_57 != w_57)))
                      _fail(w_57);
                    else
                      v_57 = w_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_57)), term_x_42));
                      t = extend_config_0(t);
                    }
                    t = term_m_28;
                    return(t);
                  }
                  ATerm d_14 (ATerm t)
                  {
                    t = term_l_52;
                    return(t);
                  }
                  t = ArgOption_3(t, x_13, y_13, d_14);
                  ;
                  LocalPopChoice(k_52);
                }
              else
                {
                  t = j_52;
                  {
                    ATerm m_52 = t;
                    int n_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_14 (ATerm t)
                        {
                          ATerm x_57 = NULL;
                          x_57 = t;
                          m_55 :
                          if(!(match_string(x_57, "--main")))
                            {
                              if(!(match_string(x_57, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm f_14 (ATerm t)
                        {
                          ATerm y_57 = NULL;
                          ATerm z_57 = NULL;
                          z_57 = t;
                          if(((y_57 != NULL) && (y_57 != z_57)))
                            _fail(z_57);
                          else
                            y_57 = z_57;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_s_28, not_null(y_57));
                            t = set_config_0(t);
                          }
                          t = term_m_28;
                          return(t);
                        }
                        ATerm g_14 (ATerm t)
                        {
                          t = term_o_52;
                          return(t);
                        }
                        t = ArgOption_3(t, e_14, f_14, g_14);
                        ;
                        LocalPopChoice(n_52);
                      }
                    else
                      {
                        t = m_52;
                        {
                          ATerm p_52 = t;
                          int q_52 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_14 (ATerm t)
                              {
                                ATerm a_58 = NULL;
                                a_58 = t;
                                o_55 :
                                if(!(match_string(a_58, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_14 (ATerm t)
                              {
                                ATerm b_58 = NULL;
                                ATerm c_58 = NULL;
                                c_58 = t;
                                if(((b_58 != NULL) && (b_58 != c_58)))
                                  _fail(c_58);
                                else
                                  b_58 = c_58;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_y_23, (ATerm) ATinsert(ATempty, not_null(b_58)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_m_28;
                                return(t);
                              }
                              ATerm p_14 (ATerm t)
                              {
                                t = term_r_52;
                                return(t);
                              }
                              t = ArgOption_3(t, h_14, k_14, p_14);
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
                                    ATerm q_14 (ATerm t)
                                    {
                                      ATerm d_58 = NULL;
                                      d_58 = t;
                                      q_55 :
                                      if(!(match_string(d_58, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm r_14 (ATerm t)
                                    {
                                      ATerm e_58 = NULL;
                                      ATerm f_58 = NULL;
                                      f_58 = t;
                                      if(((e_58 != NULL) && (e_58 != f_58)))
                                        _fail(f_58);
                                      else
                                        e_58 = f_58;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATempty, not_null(e_58)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_m_28;
                                      return(t);
                                    }
                                    ATerm s_14 (ATerm t)
                                    {
                                      t = term_u_52;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, q_14, r_14, s_14);
                                    ;
                                    LocalPopChoice(t_52);
                                  }
                                else
                                  {
                                    t = s_52;
                                    {
                                      ATerm v_52 = t;
                                      int w_52 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_14 (ATerm t)
                                          {
                                            ATerm l_58 = NULL;
                                            l_58 = t;
                                            s_55 :
                                            if(!(match_string(l_58, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_14 (ATerm t)
                                          {
                                            ATerm m_58 = NULL;
                                            ATerm n_58 = NULL;
                                            n_58 = t;
                                            if(((m_58 != NULL) && (m_58 != n_58)))
                                              _fail(n_58);
                                            else
                                              m_58 = n_58;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATempty, not_null(m_58)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_m_28;
                                            return(t);
                                          }
                                          ATerm x_14 (ATerm t)
                                          {
                                            t = term_x_52;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, t_14, u_14, x_14);
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
                                                ATerm c_15 (ATerm t)
                                                {
                                                  ATerm o_58 = NULL;
                                                  o_58 = t;
                                                  u_55 :
                                                  if(!(match_string(o_58, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm d_15 (ATerm t)
                                                {
                                                  t = term_b_53;
                                                  t = set_config_0(t);
                                                  t = term_m_28;
                                                  return(t);
                                                }
                                                ATerm e_15 (ATerm t)
                                                {
                                                  t = term_c_53;
                                                  return(t);
                                                }
                                                t = Option_3(t, c_15, d_15, e_15);
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
                                                      ATerm f_15 (ATerm t)
                                                      {
                                                        ATerm t_58 = NULL;
                                                        t_58 = t;
                                                        v_55 :
                                                        if(!(match_string(t_58, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm g_15 (ATerm t)
                                                      {
                                                        t = term_f_53;
                                                        t = set_config_0(t);
                                                        t = term_m_28;
                                                        return(t);
                                                      }
                                                      ATerm h_15 (ATerm t)
                                                      {
                                                        t = term_j_53;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, f_15, g_15, h_15);
                                                      ;
                                                      LocalPopChoice(e_53);
                                                    }
                                                  else
                                                    {
                                                      t = d_53;
                                                      {
                                                        ATerm k_53 = t;
                                                        int l_53 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm i_15 (ATerm t)
                                                            {
                                                              ATerm u_58 = NULL;
                                                              u_58 = t;
                                                              w_55 :
                                                              if(!(match_string(u_58, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm j_15 (ATerm t)
                                                            {
                                                              t = term_o_53;
                                                              t = set_config_0(t);
                                                              t = term_m_28;
                                                              return(t);
                                                            }
                                                            ATerm k_15 (ATerm t)
                                                            {
                                                              t = term_p_53;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, i_15, j_15, k_15);
                                                            ;
                                                            LocalPopChoice(l_53);
                                                          }
                                                        else
                                                          {
                                                            t = k_53;
                                                            {
                                                              ATerm q_53 = t;
                                                              int r_53 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_15 (ATerm t)
                                                                  {
                                                                    ATerm v_58 = NULL;
                                                                    v_58 = t;
                                                                    x_55 :
                                                                    if(!(match_string(v_58, "--output-optimized")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm p_15 (ATerm t)
                                                                  {
                                                                    t = term_s_53;
                                                                    t = set_config_0(t);
                                                                    t = term_m_28;
                                                                    return(t);
                                                                  }
                                                                  ATerm s_15 (ATerm t)
                                                                  {
                                                                    t = term_u_53;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, l_15, p_15, s_15);
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
                                                                        ATerm w_15 (ATerm t)
                                                                        {
                                                                          ATerm f_59 = NULL;
                                                                          f_59 = t;
                                                                          g_56 :
                                                                          if(!(match_string(f_59, "--output-canonical")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm y_15 (ATerm t)
                                                                        {
                                                                          t = term_x_53;
                                                                          t = set_config_0(t);
                                                                          t = term_m_28;
                                                                          return(t);
                                                                        }
                                                                        ATerm z_15 (ATerm t)
                                                                        {
                                                                          t = term_y_53;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, w_15, y_15, z_15);
                                                                        ;
                                                                        LocalPopChoice(w_53);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_53;
                                                                        {
                                                                          ATerm z_53 = t;
                                                                          int e_54 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm a_16 (ATerm t)
                                                                              {
                                                                                ATerm g_59 = NULL;
                                                                                g_59 = t;
                                                                                h_56 :
                                                                                if(!(match_string(g_59, "--keep")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm b_16 (ATerm t)
                                                                              {
                                                                                ATerm h_59 = NULL;
                                                                                ATerm i_59 = NULL;
                                                                                t = string_to_int_0(t);
                                                                                {
                                                                                  i_59 = t;
                                                                                  if(((h_59 != NULL) && (h_59 != i_59)))
                                                                                    _fail(i_59);
                                                                                  else
                                                                                    h_59 = i_59;
                                                                                }
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_g_28, not_null(h_59));
                                                                                  t = set_config_0(t);
                                                                                }
                                                                                t = term_m_28;
                                                                                return(t);
                                                                              }
                                                                              ATerm c_16 (ATerm t)
                                                                              {
                                                                                t = term_f_54;
                                                                                return(t);
                                                                              }
                                                                              t = ArgOption_3(t, a_16, b_16, c_16);
                                                                              ;
                                                                              LocalPopChoice(e_54);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_53;
                                                                              {
                                                                                ATerm g_54 = t;
                                                                                int h_54 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_16 (ATerm t)
                                                                                    {
                                                                                      ATerm j_59 = NULL;
                                                                                      j_59 = t;
                                                                                      k_56 :
                                                                                      if(!(match_string(j_59, "-O")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm e_16 (ATerm t)
                                                                                    {
                                                                                      ATerm k_59 = NULL;
                                                                                      ATerm l_59 = NULL;
                                                                                      t = string_to_int_0(t);
                                                                                      {
                                                                                        l_59 = t;
                                                                                        if(((k_59 != NULL) && (k_59 != l_59)))
                                                                                          _fail(l_59);
                                                                                        else
                                                                                          k_59 = l_59;
                                                                                      }
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_t_26, not_null(k_59));
                                                                                        t = set_config_0(t);
                                                                                      }
                                                                                      t = term_m_28;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm f_16 (ATerm t)
                                                                                    {
                                                                                      t = term_i_54;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, d_16, e_16, f_16);
                                                                                    ;
                                                                                    LocalPopChoice(h_54);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_54;
                                                                                    {
                                                                                      ATerm j_54 = t;
                                                                                      int n_54 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_16 (ATerm t)
                                                                                          {
                                                                                            ATerm m_59 = NULL;
                                                                                            m_59 = t;
                                                                                            m_56 :
                                                                                            if(!(match_string(m_59, "--fusion")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm j_16 (ATerm t)
                                                                                          {
                                                                                            t = term_o_54;
                                                                                            t = toggle_config_0(t);
                                                                                            t = term_m_28;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm k_16 (ATerm t)
                                                                                          {
                                                                                            t = term_p_54;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3(t, i_16, j_16, k_16);
                                                                                          ;
                                                                                          LocalPopChoice(n_54);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_54;
                                                                                          {
                                                                                            ATerm q_54 = t;
                                                                                            int r_54 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm p_16 (ATerm t)
                                                                                                {
                                                                                                  ATerm n_59 = NULL;
                                                                                                  n_59 = t;
                                                                                                  n_56 :
                                                                                                  if(!(match_string(n_59, "--trace-all")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_16 (ATerm t)
                                                                                                {
                                                                                                  t = term_t_54;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_m_28;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_16 (ATerm t)
                                                                                                {
                                                                                                  t = term_u_54;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, p_16, q_16, r_16);
                                                                                                ;
                                                                                                LocalPopChoice(r_54);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_54;
                                                                                                {
                                                                                                  ATerm v_54 = t;
                                                                                                  int x_54 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm s_16 (ATerm t)
                                                                                                      {
                                                                                                        ATerm o_59 = NULL;
                                                                                                        o_59 = t;
                                                                                                        o_56 :
                                                                                                        if(!(match_string(o_59, "-t")))
                                                                                                          {
                                                                                                            _fail(t);
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm x_16 (ATerm t)
                                                                                                      {
                                                                                                        ATerm p_59 = NULL;
                                                                                                        ATerm q_59 = NULL;
                                                                                                        q_59 = t;
                                                                                                        if(((p_59 != NULL) && (p_59 != q_59)))
                                                                                                          _fail(q_59);
                                                                                                        else
                                                                                                          p_59 = q_59;
                                                                                                        {
                                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_y_54, (ATerm) ATinsert(ATempty, not_null(p_59)));
                                                                                                          t = extend_config_0(t);
                                                                                                        }
                                                                                                        t = term_m_28;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm y_16 (ATerm t)
                                                                                                      {
                                                                                                        t = term_d_55;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = ArgOption_3(t, s_16, x_16, y_16);
                                                                                                      ;
                                                                                                      LocalPopChoice(x_54);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_54;
                                                                                                      {
                                                                                                        ATerm e_55 = t;
                                                                                                        int f_55 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm z_16 (ATerm t)
                                                                                                            {
                                                                                                              ATerm r_59 = NULL;
                                                                                                              r_59 = t;
                                                                                                              q_56 :
                                                                                                              if(!(match_string(r_59, "--verbose")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_17 (ATerm t)
                                                                                                            {
                                                                                                              ATerm s_59 = NULL;
                                                                                                              ATerm t_59 = NULL;
                                                                                                              t = string_to_int_0(t);
                                                                                                              {
                                                                                                                t_59 = t;
                                                                                                                if(((s_59 != NULL) && (s_59 != t_59)))
                                                                                                                  _fail(t_59);
                                                                                                                else
                                                                                                                  s_59 = t_59;
                                                                                                              }
                                                                                                              {
                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(s_59));
                                                                                                                t = set_config_0(t);
                                                                                                              }
                                                                                                              t = term_m_28;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm d_17 (ATerm t)
                                                                                                            {
                                                                                                              t = term_h_55;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = ArgOption_3(t, z_16, c_17, d_17);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_55);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_55;
                                                                                                            {
                                                                                                              ATerm j_55 = t;
                                                                                                              int l_55 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm e_17 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm u_59 = NULL;
                                                                                                                    u_59 = t;
                                                                                                                    s_56 :
                                                                                                                    if(!(match_string(u_59, "-S")))
                                                                                                                      {
                                                                                                                        if(!(match_string(u_59, "--silent")))
                                                                                                                          {
                                                                                                                            _fail(t);
                                                                                                                          }
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm f_17 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_n_55;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_m_28;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm g_17 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_p_55;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, e_17, f_17, g_17);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(l_55);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_55;
                                                                                                                  {
                                                                                                                    ATerm r_55 = t;
                                                                                                                    int t_55 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm m_17 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm v_59 = NULL;
                                                                                                                          v_59 = t;
                                                                                                                          t_56 :
                                                                                                                          if(!(match_string(v_59, "-h")))
                                                                                                                            {
                                                                                                                              if(!(match_string(v_59, "--help")))
                                                                                                                                {
                                                                                                                                  _fail(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm p_17 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_z_55;
                                                                                                                          t = set_config_0(t);
                                                                                                                          t = term_m_28;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm q_17 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_a_56;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3(t, m_17, p_17, q_17);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_55);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = r_55;
                                                                                                                        {
                                                                                                                          ATerm b_56 = t;
                                                                                                                          int c_56 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_17 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm w_59 = NULL;
                                                                                                                                w_59 = t;
                                                                                                                                z_56 :
                                                                                                                                if(!(match_string(w_59, "--man")))
                                                                                                                                  {
                                                                                                                                    _fail(t);
                                                                                                                                  }
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm s_17 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_e_56;
                                                                                                                                t = set_config_0(t);
                                                                                                                                t = term_m_28;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              ATerm t_17 (ATerm t)
                                                                                                                              {
                                                                                                                                t = term_f_56;
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Option_3(t, r_17, s_17, t_17);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(c_56);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_56;
                                                                                                                              {
                                                                                                                                ATerm i_56 = t;
                                                                                                                                int j_56 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm u_17 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm x_59 = NULL;
                                                                                                                                      x_59 = t;
                                                                                                                                      a_57 :
                                                                                                                                      if(!(match_string(x_59, "-v")))
                                                                                                                                        {
                                                                                                                                          if(!(match_string(x_59, "--version")))
                                                                                                                                            {
                                                                                                                                              _fail(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm b_18 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_p_56;
                                                                                                                                      t = set_config_0(t);
                                                                                                                                      t = term_m_28;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    ATerm c_18 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = term_r_56;
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Option_3(t, u_17, b_18, c_18);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(j_56);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = i_56;
                                                                                                                                    {
                                                                                                                                      ATerm f_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm y_59 = NULL;
                                                                                                                                        y_59 = t;
                                                                                                                                        b_57 :
                                                                                                                                        if(!(match_string(y_59, "--warning")))
                                                                                                                                          {
                                                                                                                                            if(!(match_string(y_59, "-W")))
                                                                                                                                              {
                                                                                                                                                _fail(t);
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm g_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm u_56 = t;
                                                                                                                                        int v_56 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            ATerm a_60 = NULL;
                                                                                                                                            ATerm w_56;
                                                                                                                                            w_56 = t;
                                                                                                                                            {
                                                                                                                                              t = term_u_27;
                                                                                                                                              {
                                                                                                                                                t = get_config_0(t);
                                                                                                                                                {
                                                                                                                                                  ATerm i_18 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm z_59 = NULL;
                                                                                                                                                    z_59 = t;
                                                                                                                                                    c_57 :
                                                                                                                                                    if(!(match_string(z_59, "all")))
                                                                                                                                                      {
                                                                                                                                                        _fail(t);
                                                                                                                                                      }
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = Cons_2(t, i_18, Nil_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            t = w_56;
                                                                                                                                            {
                                                                                                                                              ATerm b_60 = NULL;
                                                                                                                                              b_60 = t;
                                                                                                                                              if(((a_60 != NULL) && (a_60 != b_60)))
                                                                                                                                                _fail(b_60);
                                                                                                                                              else
                                                                                                                                                a_60 = b_60;
                                                                                                                                              {
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_u_27, (ATerm) ATinsert(ATempty, not_null(a_60)));
                                                                                                                                                t = set_config_0(t);
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            ;
                                                                                                                                            LocalPopChoice(v_56);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = u_56;
                                                                                                                                            {
                                                                                                                                              ATerm c_60 = NULL;
                                                                                                                                              ATerm d_60 = NULL;
                                                                                                                                              d_60 = t;
                                                                                                                                              if(((c_60 != NULL) && (c_60 != d_60)))
                                                                                                                                                _fail(d_60);
                                                                                                                                              else
                                                                                                                                                c_60 = d_60;
                                                                                                                                              {
                                                                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_u_27, (ATerm) ATinsert(ATempty, not_null(c_60)));
                                                                                                                                                t = extend_config_0(t);
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        t = term_m_28;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm h_18 (ATerm t)
                                                                                                                                      {
                                                                                                                                        t = term_x_56;
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = ArgOption_3(t, f_18, g_18, h_18);
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_60 = NULL;
  s_60 = t;
  t = SSL_table_destroy(not_null(s_60));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_58), term_d_46), term_p_57), term_o_57), term_n_57), term_d_46), term_m_57), term_l_57), term_k_57), term_j_57), term_i_57), term_h_57), term_e_57), term_d_57), term_y_56);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm v_60 (ATerm t)
  {
    ATerm h_58 = t;
    int i_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_58);
      }
    else
      {
        t = h_58;
        t = Cons_2(t, r_86, v_60);
      }
    return(t);
  }
  t = v_60(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  e_61 = t;
  b_61 :
  if(((ATgetType(e_61) == AT_LIST) && !(ATisEmpty(e_61))))
    {
      c_61 = ATgetFirst((ATermList) e_61);
      d_61 = (ATerm) ATgetNext((ATermList) e_61);
      {
        ATerm h_61 = NULL;
        t = not_null(d_61);
        {
          ATerm j_58;
          j_58 = t;
          {
            ATerm i_61 = NULL,k_61 = NULL,m_61 = NULL;
            ATerm k_58;
            k_58 = t;
            {
              ATerm j_61 = NULL;
              t = j_0(t);
              {
                j_61 = t;
                if(((i_61 != NULL) && (i_61 != j_61)))
                  _fail(j_61);
                else
                  i_61 = j_61;
              }
            }
            t = k_58;
            {
              ATerm l_61 = NULL;
              t = not_null(c_61);
              {
                t = i_0(t);
                {
                  l_61 = t;
                  if(((k_61 != NULL) && (k_61 != l_61)))
                    _fail(l_61);
                  else
                    k_61 = l_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_61)), not_null(k_61));
                {
                  m_61 = t;
                  if(((h_61 != NULL) && (h_61 != m_61)))
                    _fail(m_61);
                  else
                    h_61 = m_61;
                }
              }
            }
          }
          t = j_58;
          {
            ATerm j_18 (ATerm t)
            {
              t = not_null(h_61);
              return(t);
            }
            t = reverse_acc_2(t, i_0, j_18);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_61) == AT_LIST) && ATisEmpty(e_61)))
        {
          {
            t = term_m_28;
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
  ATerm o_18 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_18);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm t_61 = NULL;
  ATerm u_61 = NULL;
  t = term_m_28;
  {
    t = g_0(t);
    {
      u_61 = t;
      if(((t_61 != NULL) && (t_61 != u_61)))
        _fail(u_61);
      else
        t_61 = u_61;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_58), not_null(t_61)), term_w_58), term_d_46), term_s_58), term_d_46), term_r_58), term_q_58), term_d_46), term_p_58);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm c_62 = NULL,d_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Program_1))
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
            t = a_71(t);
            {
              w_62 = t;
              {
                ATerm a_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_62)), not_null(g_62));
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
ATerm default_system_usage_0 (ATerm t)
{
  ATerm y_63 = NULL;
  ATerm y_58 = t;
  int z_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_63 = NULL;
      t = term_a_59;
      {
        t = get_config_0(t);
        {
          z_63 = t;
          if(((y_63 != NULL) && (y_63 != z_63)))
            _fail(z_63);
          else
            y_63 = z_63;
        }
      }
      ;
      LocalPopChoice(z_58);
    }
  else
    {
      t = y_58;
      {
        ATerm p_18 (ATerm t)
        {
          ATerm u_18 (ATerm t)
          {
            ATerm c_64 = NULL;
            c_64 = t;
            if(((y_63 != NULL) && (y_63 != c_64)))
              _fail(c_64);
            else
              y_63 = c_64;
            return(t);
          }
          t = Program_1(t, u_18);
          return(t);
        }
        t = option_defined_1(t, p_18);
      }
    }
  {
    ATerm v_18 (ATerm t)
    {
      ATerm w_18 (ATerm t)
      {
        t = not_null(y_63);
        return(t);
      }
      t = short_description_1(t, w_18);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_18);
    {
      t = term_b_59;
      {
        t = echo_0(t);
        {
          t = term_e_59;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm x_18 (ATerm t)
                {
                  ATerm d_64 = NULL;
                  ATerm e_64 = NULL;
                  e_64 = t;
                  if(((d_64 != NULL) && (d_64 != e_64)))
                    _fail(e_64);
                  else
                    d_64 = e_64;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_64)), term_e_60);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_18);
                {
                  ATerm y_18 (ATerm t)
                  {
                    ATerm f_64 = NULL;
                    ATerm g_64 = NULL;
                    ATerm a_19 (ATerm t)
                    {
                      t = not_null(y_63);
                      return(t);
                    }
                    t = long_description_1(t, a_19);
                    {
                      g_64 = t;
                      if(((f_64 != NULL) && (f_64 != g_64)))
                        _fail(g_64);
                      else
                        f_64 = g_64;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(f_64)), term_d_46);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_18);
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
  ATerm f_60 = t;
  int g_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(g_60);
    }
  else
    {
      t = f_60;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm q_64 = NULL,r_64 = NULL;
  q_64 = t;
  p_64 :
  if(match_cons(q_64, sym_Undefined_1))
    {
      r_64 = ATgetArgument(q_64, 0);
      {
        ATerm u_64 = NULL,w_64 = NULL;
        ATerm v_64 = NULL;
        t = SSLgetAnnotations(not_null(q_64));
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
        {
          t = not_null(r_64);
          {
            ATerm y_64 = NULL;
            t = b_71(t);
            {
              w_64 = t;
              {
                ATerm z_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_64)), not_null(u_64));
                {
                  z_64 = t;
                  if(((y_64 != NULL) && (y_64 != z_64)))
                    _fail(z_64);
                  else
                    y_64 = z_64;
                }
                t = not_null(y_64);
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
  ATerm e_65 (ATerm t)
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_87, _id);
        ;
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
        t = Cons_2(t, _id, e_65);
      }
    return(t);
  }
  t = e_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_104 (ATerm))
{
  t = fetch_1(t, d_104);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  f_65 :
  if(((ATgetType(g_65) == AT_LIST) && ATisEmpty(g_65)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
        {
          h_65 = ATgetFirst((ATermList) g_65);
          i_65 = (ATerm) ATgetNext((ATermList) g_65);
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
  ATerm j_60;
  j_60 = t;
  {
    ATerm n_65 = NULL;
    ATerm q_65 = NULL;
    ATerm k_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(l_60);
      }
    else
      {
        t = k_60;
        {
          ATerm o_65 = NULL;
          ATerm p_65 = NULL;
          p_65 = t;
          if(((o_65 != NULL) && (o_65 != p_65)))
            _fail(p_65);
          else
            o_65 = p_65;
          t = (ATerm) ATinsert(ATempty, not_null(o_65));
        }
      }
    {
      q_65 = t;
      if(((n_65 != NULL) && (n_65 != q_65)))
        _fail(q_65);
      else
        n_65 = q_65;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(n_65));
      t = printnl_0(t);
    }
  }
  t = j_60;
  return(t);
}
ATerm default_system_about_0 (ATerm t)
{
  t = term_a_59;
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
  ATerm m_60 = t;
  int n_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0(t);
      ;
      LocalPopChoice(n_60);
    }
  else
    {
      t = m_60;
      t = default_system_about_0(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_65 = NULL;
  x_65 = t;
  w_65 :
  if(match_cons(x_65, sym_Help_0))
    {
      ATerm z_65 = NULL,b_66 = NULL;
      ATerm o_60;
      o_60 = t;
      {
        ATerm a_66 = NULL;
        t = SSLgetAnnotations(not_null(x_65));
        {
          a_66 = t;
          if(((z_65 != NULL) && (z_65 != a_66)))
            _fail(a_66);
          else
            z_65 = a_66;
        }
      }
      t = o_60;
      {
        ATerm c_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
        t = not_null(b_66);
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
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_19 (ATerm t)
      {
        ATerm i_66 = NULL;
        i_66 = t;
        g_66 :
        if(!(match_string(i_66, "--about")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm e_19 (ATerm t)
      {
        t = term_t_60;
        t = set_config_0(t);
        return(t);
      }
      ATerm f_19 (ATerm t)
      {
        t = term_u_60;
        return(t);
      }
      t = Option_3(t, d_19, e_19, f_19);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm h_19 (ATerm t)
        {
          ATerm j_66 = NULL;
          j_66 = t;
          h_66 :
          if(!(match_string(j_66, "--version")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm i_19 (ATerm t)
        {
          t = term_t_60;
          {
            t = set_config_0(t);
            {
              t = term_p_56;
              t = set_config_0(t);
            }
          }
          t = term_w_60;
          return(t);
        }
        ATerm j_19 (ATerm t)
        {
          t = term_x_60;
          return(t);
        }
        t = Option_3(t, h_19, i_19, j_19);
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_cons(m_66, sym__2))
    {
      n_66 = ATgetArgument(m_66, 0);
      o_66 = ATgetArgument(m_66, 1);
      t = SSL_table_get(not_null(n_66), not_null(o_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  v_66 = t;
  u_66 :
  if(match_cons(v_66, sym__3))
    {
      w_66 = ATgetArgument(v_66, 0);
      x_66 = ATgetArgument(v_66, 1);
      y_66 = ATgetArgument(v_66, 2);
      {
        ATerm y_60;
        y_60 = t;
        {
          ATerm c_67 = NULL;
          ATerm d_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_66), not_null(x_66));
          {
            ATerm z_60 = t;
            int a_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(a_61);
              }
            else
              {
                t = z_60;
                t = (ATerm) ATempty;
              }
            {
              d_67 = t;
              if(((c_67 != NULL) && (c_67 != d_67)))
                _fail(d_67);
              else
                c_67 = d_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_66), not_null(x_66), (ATerm) ATinsert(CheckATermList(not_null(c_67)), not_null(y_66)));
            t = table_put_0(t);
          }
        }
        t = y_60;
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
  ATerm h_67 = NULL;
  ATerm i_67 = NULL;
  t = term_m_28;
  {
    t = i_105(t);
    {
      i_67 = t;
      if(((h_67 != NULL) && (h_67 != i_67)))
        _fail(i_67);
      else
        h_67 = i_67;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_59, term_d_59, not_null(h_67));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_string(o_67, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(o_67) == AT_LIST) && !(ATisEmpty(o_67))))
        {
          p_67 = ATgetFirst((ATermList) o_67);
          q_67 = (ATerm) ATgetNext((ATermList) o_67);
          {
            ATerm t_67 = NULL;
            ATerm f_61;
            f_61 = t;
            {
              t = not_null(p_67);
              t = a_0(t);
            }
            t = f_61;
            {
              ATerm u_67 = NULL;
              t = term_m_28;
              {
                t = b_0(t);
                {
                  u_67 = t;
                  if(((t_67 != NULL) && (t_67 != u_67)))
                    _fail(u_67);
                  else
                    t_67 = u_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_67)), not_null(t_67));
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
  ATerm o_19 (ATerm t)
  {
    ATerm z_67 = NULL;
    z_67 = t;
    y_67 :
    if(!(match_string(z_67, "--help")))
      {
        if(!(match_string(z_67, "-h")))
          {
            if(!(match_string(z_67, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_19 (ATerm t)
  {
    t = term_z_55;
    {
      t = set_config_0(t);
      t = term_g_61;
    }
    return(t);
  }
  ATerm q_19 (ATerm t)
  {
    t = term_n_61;
    return(t);
  }
  t = Option_3(t, o_19, p_19, q_19);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  c_68 = t;
  b_68 :
  if(((ATgetType(c_68) == AT_LIST) && !(ATisEmpty(c_68))))
    {
      d_68 = ATgetFirst((ATermList) c_68);
      e_68 = (ATerm) ATgetNext((ATermList) c_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_68)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_105 (ATerm))
{
  ATerm o_61;
  o_61 = t;
  {
    ATerm r_19 (ATerm t)
    {
      t = term_p_61;
      t = g_105(t);
      return(t);
    }
    t = try_1(t, r_19);
  }
  t = o_61;
  {
    ATerm t_19 (ATerm t)
    {
      ATerm m_68 = NULL;
      ATerm q_61;
      q_61 = t;
      {
        ATerm k_68 = NULL;
        ATerm l_68 = NULL;
        l_68 = t;
        if(((k_68 != NULL) && (k_68 != l_68)))
          _fail(l_68);
        else
          k_68 = l_68;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_59, not_null(k_68));
          t = set_config_0(t);
        }
      }
      t = q_61;
      {
        ATerm n_68 = NULL;
        n_68 = t;
        if(((m_68 != NULL) && (m_68 != n_68)))
          _fail(n_68);
        else
          m_68 = n_68;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_68));
      }
      return(t);
    }
    ATerm u_19 (ATerm t)
    {
      ATerm r_61 = t;
      int s_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_61 = t;
          int w_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(w_61);
            }
          else
            {
              t = v_61;
              {
                t = g_105(t);
                t = Cons_2(t, _id, u_19);
              }
            }
          ;
          LocalPopChoice(s_61);
        }
      else
        {
          t = r_61;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_19, u_19);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm s_68 = NULL;
  ATerm x_61;
  x_61 = t;
  {
    t = term_y_61;
    t = table_put_0(t);
  }
  t = x_61;
  {
    ATerm v_19 (ATerm t)
    {
      ATerm z_61 = t;
      int a_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_105(t);
          ;
          LocalPopChoice(a_62);
        }
      else
        {
          t = z_61;
          {
            ATerm e_62 = t;
            int f_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0(t);
                ;
                LocalPopChoice(f_62);
              }
            else
              {
                t = e_62;
                t = system_about_switch_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1(t, v_19);
    {
      ATerm w_19 (ATerm t)
      {
        ATerm h_62 = t;
        int i_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_62;
            j_62 = t;
            {
              ATerm k_62 = t;
              int l_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_55;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_62);
                }
              else
                {
                  t = k_62;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_62;
            {
              t = system_usage_0(t);
              {
                t = term_e_21;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_62);
          }
        else
          {
            t = h_62;
            {
              ATerm m_62 = t;
              int n_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_62;
                  o_62 = t;
                  {
                    t = term_r_60;
                    t = get_config_0(t);
                  }
                  t = o_62;
                  {
                    t = system_about_0(t);
                    {
                      t = term_e_21;
                      t = exit_0(t);
                    }
                  }
                  ;
                  LocalPopChoice(n_62);
                }
              else
                {
                  t = m_62;
                  {
                    ATerm x_19 (ATerm t)
                    {
                      ATerm y_19 (ATerm t)
                      {
                        ATerm t_68 = NULL;
                        t_68 = t;
                        if(((s_68 != NULL) && (s_68 != t_68)))
                          _fail(t_68);
                        else
                          s_68 = t_68;
                        return(t);
                      }
                      t = Undefined_1(t, y_19);
                      return(t);
                    }
                    t = option_defined_1(t, x_19);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_68)), term_p_62));
                      {
                        t = printnl_0(t);
                        {
                          t = system_usage_0(t);
                          {
                            t = term_c_26;
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
      t = try_1(t, w_19);
      {
        ATerm q_62;
        q_62 = t;
        {
          t = term_c_59;
          t = table_destroy_0(t);
        }
        t = q_62;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL;
  ATerm r_62;
  r_62 = t;
  {
    ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
    a_69 = t;
    w_68 :
    if(match_cons(a_69, sym__3))
      {
        b_69 = ATgetArgument(a_69, 0);
        c_69 = ATgetArgument(a_69, 1);
        d_69 = ATgetArgument(a_69, 2);
        {
          if(((x_68 != NULL) && (x_68 != b_69)))
            _fail(b_69);
          else
            x_68 = b_69;
          {
            if(((y_68 != NULL) && (y_68 != c_69)))
              _fail(c_69);
            else
              y_68 = c_69;
            {
              if(((z_68 != NULL) && (z_68 != d_69)))
                _fail(d_69);
              else
                z_68 = d_69;
              t = SSL_table_put(not_null(x_68), not_null(y_68), not_null(z_68));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_62;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL;
  h_69 = t;
  g_69 :
  if(match_cons(h_69, sym__2))
    {
      i_69 = ATgetArgument(h_69, 0);
      j_69 = ATgetArgument(h_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_45, not_null(i_69), not_null(j_69));
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
  ATerm s_62 = t;
  int t_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(t_62);
    }
  else
    {
      t = s_62;
      {
        ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
        p_69 = t;
        o_69 :
        if(((ATgetType(p_69) == AT_LIST) && !(ATisEmpty(p_69))))
          {
            q_69 = ATgetFirst((ATermList) p_69);
            r_69 = (ATerm) ATgetNext((ATermList) p_69);
            {
              t = not_null(q_69);
              {
                ATerm e_20 (ATerm t)
                {
                  t = not_null(r_69);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_20);
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
  ATerm b_70 = NULL;
  ATerm d_70 = NULL;
  b_70 = t;
  {
    ATerm e_70 = NULL;
    ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
    t = not_null(b_70);
    {
      e_70 = t;
      {
        t = SSL_explode_term(not_null(e_70));
        {
          g_70 = t;
          z_69 :
          if(match_cons(g_70, sym__2))
            {
              h_70 = ATgetArgument(g_70, 0);
              i_70 = ATgetArgument(g_70, 1);
              a_70 :
              if(match_string(h_70, ""))
                {
                  if(((d_70 != NULL) && (d_70 != i_70)))
                    _fail(i_70);
                  else
                    d_70 = i_70;
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
      t = not_null(d_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_70 = NULL;
  q_70 = t;
  p_70 :
  if(((ATgetType(q_70) == AT_LIST) && ATisEmpty(q_70)))
    {
      {
        ATerm s_70 = NULL,u_70 = NULL;
        ATerm u_62;
        u_62 = t;
        {
          ATerm t_70 = NULL;
          t = SSLgetAnnotations(not_null(q_70));
          {
            t_70 = t;
            if(((s_70 != NULL) && (s_70 != t_70)))
              _fail(t_70);
            else
              s_70 = t_70;
          }
        }
        t = u_62;
        {
          ATerm v_70 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_70));
          {
            v_70 = t;
            if(((u_70 != NULL) && (u_70 != v_70)))
              _fail(v_70);
            else
              u_70 = v_70;
          }
          t = not_null(u_70);
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
  ATerm z_70 (ATerm t)
  {
    ATerm x_62 = t;
    int z_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_70);
        ;
        LocalPopChoice(z_62);
      }
    else
      {
        t = x_62;
        {
          t = Nil_0(t);
          t = h_87(t);
        }
      }
    return(t);
  }
  t = z_70(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  d_71 :
  if(match_cons(f_71, sym__2))
    {
      g_71 = ATgetArgument(f_71, 0);
      h_71 = ATgetArgument(f_71, 1);
      {
        t = not_null(g_71);
        {
          ATerm h_20 (ATerm t)
          {
            t = not_null(h_71);
            return(t);
          }
          t = at_end_1(t, h_20);
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
  ATerm b_63 = t;
  int c_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(c_63);
    }
  else
    {
      t = b_63;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_64 (ATerm), ATerm b_64 (ATerm))
{
  ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL;
  r_71 = t;
  q_71 :
  if(match_cons(r_71, sym__2))
    {
      s_71 = ATgetArgument(r_71, 0);
      t_71 = ATgetArgument(r_71, 1);
      {
        ATerm x_71 = NULL,z_71 = NULL;
        ATerm y_71 = NULL;
        t = SSLgetAnnotations(not_null(r_71));
        {
          y_71 = t;
          if(((x_71 != NULL) && (x_71 != y_71)))
            _fail(y_71);
          else
            x_71 = y_71;
        }
        {
          t = not_null(s_71);
          {
            ATerm b_72 = NULL;
            t = a_64(t);
            {
              z_71 = t;
              {
                t = not_null(t_71);
                {
                  ATerm d_72 = NULL;
                  t = b_64(t);
                  {
                    b_72 = t;
                    {
                      ATerm e_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_71), not_null(b_72)), not_null(x_71));
                      {
                        e_72 = t;
                        if(((d_72 != NULL) && (d_72 != e_72)))
                          _fail(e_72);
                        else
                          d_72 = e_72;
                      }
                      t = not_null(d_72);
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
  ATerm l_72 = NULL;
  l_72 = t;
  t = SSL_implode_string(not_null(l_72));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  u_72 = t;
  t_72 :
  if(((ATgetType(u_72) == AT_LIST) && !(ATisEmpty(u_72))))
    {
      v_72 = ATgetFirst((ATermList) u_72);
      w_72 = (ATerm) ATgetNext((ATermList) u_72);
      {
        ATerm a_73 = NULL,c_73 = NULL;
        ATerm b_73 = NULL;
        t = SSLgetAnnotations(not_null(u_72));
        {
          b_73 = t;
          if(((a_73 != NULL) && (a_73 != b_73)))
            _fail(b_73);
          else
            a_73 = b_73;
        }
        {
          t = not_null(v_72);
          {
            ATerm e_73 = NULL;
            t = j_65(t);
            {
              c_73 = t;
              {
                t = not_null(w_72);
                {
                  ATerm g_73 = NULL;
                  t = k_65(t);
                  {
                    e_73 = t;
                    {
                      ATerm h_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_73)), not_null(c_73)), not_null(a_73));
                      {
                        h_73 = t;
                        if(((g_73 != NULL) && (g_73 != h_73)))
                          _fail(h_73);
                        else
                          g_73 = h_73;
                      }
                      t = not_null(g_73);
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
  ATerm o_73 = NULL;
  o_73 = t;
  t = SSL_explode_string(not_null(o_73));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm d_63 = t;
    int e_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_73 (ATerm t)
        {
          ATerm f_63 = t;
          int g_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, t_73);
              ;
              LocalPopChoice(g_63);
            }
          else
            {
              t = f_63;
              {
                ATerm i_20 (ATerm t)
                {
                  ATerm s_73 = NULL;
                  s_73 = t;
                  r_73 :
                  if(!(match_int(s_73, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm j_20 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, i_20, j_20);
              }
            }
          return(t);
        }
        t = t_73(t);
        ;
        LocalPopChoice(e_63);
      }
    else
      {
        t = d_63;
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
  ATerm h_63;
  h_63 = t;
  {
    ATerm h_74 = NULL,j_74 = NULL,l_74 = NULL,n_74 = NULL,r_74 = NULL,v_74 = NULL,z_74 = NULL,d_75 = NULL;
    t = term_j_63;
    {
      t = set_config_0(t);
      {
        t = term_k_63;
        {
          t = set_config_0(t);
          {
            t = term_l_63;
            {
              t = set_config_0(t);
              {
                t = term_m_63;
                {
                  t = set_config_0(t);
                  {
                    ATerm n_63;
                    n_63 = t;
                    {
                      ATerm i_74 = NULL;
                      t = term_o_63;
                      {
                        t = xtc_find_path_0(t);
                        {
                          i_74 = t;
                          if(((h_74 != NULL) && (h_74 != i_74)))
                            _fail(i_74);
                          else
                            h_74 = i_74;
                        }
                      }
                    }
                    t = n_63;
                    {
                      ATerm p_63;
                      p_63 = t;
                      {
                        ATerm k_74 = NULL;
                        t = term_q_63;
                        {
                          t = xtc_find_path_0(t);
                          {
                            k_74 = t;
                            if(((j_74 != NULL) && (j_74 != k_74)))
                              _fail(k_74);
                            else
                              j_74 = k_74;
                          }
                        }
                      }
                      t = p_63;
                      {
                        ATerm m_74 = NULL;
                        t = term_r_63;
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
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_x_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_74)), term_x_42), not_null(j_74)), term_x_42), not_null(h_74)), term_x_42));
                          {
                            t = set_config_0(t);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_23, (ATerm) ATinsert(ATinsert(ATempty, term_t_63), term_s_63));
                              {
                                t = set_config_0(t);
                                {
                                  ATerm u_63;
                                  u_63 = t;
                                  {
                                    ATerm o_74 = NULL,q_74 = NULL;
                                    ATerm p_74 = NULL;
                                    t = term_v_63;
                                    {
                                      t = xtc_find_path_0(t);
                                      {
                                        p_74 = t;
                                        if(((o_74 != NULL) && (o_74 != p_74)))
                                          _fail(p_74);
                                        else
                                          o_74 = p_74;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_74), term_w_63);
                                      {
                                        t = conc_strings_0(t);
                                        {
                                          q_74 = t;
                                          if(((n_74 != NULL) && (n_74 != q_74)))
                                            _fail(q_74);
                                          else
                                            n_74 = q_74;
                                        }
                                      }
                                    }
                                  }
                                  t = u_63;
                                  {
                                    ATerm x_63;
                                    x_63 = t;
                                    {
                                      ATerm s_74 = NULL,u_74 = NULL;
                                      ATerm t_74 = NULL;
                                      t = term_v_63;
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
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), term_w_63);
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
                                    t = x_63;
                                    {
                                      ATerm w_74 = NULL,y_74 = NULL;
                                      ATerm x_74 = NULL;
                                      t = term_h_64;
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
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), term_w_63);
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
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_74)), term_x_42), not_null(r_74)), term_x_42), not_null(n_74)), term_x_42));
                                        {
                                          t = set_config_0(t);
                                          {
                                            ATerm i_64;
                                            i_64 = t;
                                            {
                                              ATerm a_75 = NULL,c_75 = NULL;
                                              ATerm b_75 = NULL;
                                              t = term_v_63;
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
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), term_j_64);
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
                                            }
                                            t = i_64;
                                            {
                                              ATerm e_75 = NULL,g_75 = NULL;
                                              ATerm f_75 = NULL;
                                              t = term_h_64;
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
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_75), term_j_64);
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
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_x_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_64), term_n_64), not_null(d_75)), term_k_64), term_m_64), term_l_64), not_null(z_74)), term_k_64));
                                                {
                                                  t = set_config_0(t);
                                                  {
                                                    t = term_s_64;
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
  t = h_63;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm m_20 (ATerm t)
      {
        ATerm v_75 = NULL;
        t = term_d_56;
        {
          t = get_config_0(t);
          {
            ATerm w_75 = NULL;
            t = term_t_64;
            {
              t = xtc_find_0(t);
              {
                w_75 = t;
                if(((v_75 != NULL) && (v_75 != w_75)))
                  _fail(w_75);
                else
                  v_75 = w_75;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_75), term_z_22);
              {
                t = copy_file_0(t);
                {
                  t = term_e_21;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, m_20);
      {
        ATerm n_20 (ATerm t)
        {
          t = term_l_56;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_e_21;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, n_20);
        {
          ATerm x_64 = t;
          int a_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_65;
              b_65 = t;
              {
                t = term_i_41;
                t = get_config_0(t);
              }
              t = b_65;
              ;
              LocalPopChoice(a_65);
            }
          else
            {
              t = x_64;
              {
                t = (ATerm) ATinsert(ATempty, term_c_65);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm o_20 (ATerm t)
              {
                ATerm d_65;
                d_65 = t;
                {
                  t = term_i_41;
                  {
                    t = get_config_0(t);
                    {
                      ATerm p_20 (ATerm t)
                      {
                        t = term_l_65;
                        return(t);
                      }
                      t = debug_1(t, p_20);
                    }
                  }
                }
                t = d_65;
                return(t);
              }
              t = if_verbose1_1(t, o_20);
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
  ATerm m_65 = t;
  int r_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm q_20 (ATerm t)
        {
          ATerm t_20 (ATerm t)
          {
            ATerm b_76 = NULL;
            ATerm c_76 = NULL;
            c_76 = t;
            if(((b_76 != NULL) && (b_76 != c_76)))
              _fail(c_76);
            else
              b_76 = c_76;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(CheckATermList(not_null(b_76)), term_s_65));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, t_20);
          return(t);
        }
        t = profile_p__2(t, q_20, compile_0);
        {
          ATerm u_20 (ATerm t)
          {
            ATerm d_76 = NULL;
            ATerm e_76 = NULL;
            t = run_time_0(t);
            {
              e_76 = t;
              if(((d_76 != NULL) && (d_76 != e_76)))
                _fail(e_76);
              else
                d_76 = e_76;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_65), not_null(d_76)), term_t_65));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, u_20);
          {
            t = term_e_21;
            t = exit_0(t);
          }
        }
      }
      ;
      LocalPopChoice(r_65);
    }
  else
    {
      t = m_65;
      {
        ATerm f_76 = NULL;
        ATerm g_76 = NULL;
        t = run_time_0(t);
        {
          g_76 = t;
          if(((f_76 != NULL) && (f_76 != g_76)))
            _fail(g_76);
          else
            f_76 = g_76;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_65), not_null(f_76)), term_v_65));
          {
            t = printnl_0(t);
            {
              t = term_c_26;
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
